/*
** Automatically generated from `structure_reuse.indirect.m'
** by the Mercury compiler,
** version 2017-11-15
** configured for x86_64-pc-linux-gnu.
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


// :- module transform_hlds.ctgc.structure_reuse.indirect.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.ctgc.mih"
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



struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0_s {
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__ReuseVersionMap_7;
  MR_Word * transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__LambdaHeadVar__1_14;
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__cont;
  void * transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__cont_env_ptr;
  MR_bool transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__succeeded;
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__TypeCtorInfo_20_20;
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__TypeCtorInfo_21_21;
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__OrigPPId_9;
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_15;
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_22;
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__ArgX1_23;
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__ArgX2_25;
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_29;
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__conv0_OrigPPId_9;
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__conv2_Var_22;
  MR_Box transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__conv1_LambdaHeadVar__1_14;
};

struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s {
  MR_Box * transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__wrapper_arg_1;
  MR_Cont transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont;
  void * transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont_env_ptr;
  MR_Word transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__conv0_LambdaHeadVar__1_14;
};


static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0;

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_value_ordered_conditional_reuse_handling_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_name_ordered_conditional_reuse_handling_0[2];

static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_conditional_reuse_handling_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_analysis_info_0_0[8];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_analysis_info_0_0[8];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_analysis_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_analysis_info_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_analysis_info_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_background_info_0_0[10];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_background_info_0_0[10];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_background_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_background_info_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_background_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_sr_request_0_0[2];

static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_sr_request_0_0[2];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_sr_request_0[1];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_sr_request_0[1];

static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_sr_request_0[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2;

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_verify_indirect_reuse_reason_0_3[1];

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4;

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5;

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_0[5];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_1[1];

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_verify_indirect_reuse_reason_0[2];

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_verify_indirect_reuse_reason_0[6];

static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_verify_indirect_reuse_reason_0[6];

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0(
  MR_Word SCC_5,
  MR_Word ReuseVersionMap_7,
  MR_Word * LambdaHeadVar__1_14,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_description_1_f_0(
  MR_Word Table_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_p_0(
  MR_Word BaseInfo_8,
  MR_Word IrInfo0_9,
  MR_Word Case0_10,
  MR_Word * Case_11,
  MR_Word * IrInfo_12,
  MR_Word STATE_VARIABLE_FixpointTable_0_19,
  MR_Word * STATE_VARIABLE_FixpointTable_20);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_p_0(
  MR_Word BaseInfo_8,
  MR_Word IrInfo0_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word * IrInfo_12,
  MR_Word STATE_VARIABLE_FixpointTable_0_15,
  MR_Word * STATE_VARIABLE_FixpointTable_16);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_p_0(
  MR_Word SharingTable_14,
  MR_Word ReuseTable_15,
  MR_Word PPId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_FixpointTable_0_30,
  MR_Word * STATE_VARIABLE_FixpointTable_31,
  MR_Word STATE_VARIABLE_DepProcs_0_32,
  MR_Word * STATE_VARIABLE_DepProcs_33,
  MR_Word STATE_VARIABLE_Requests_0_34,
  MR_Word * STATE_VARIABLE_Requests_35,
  MR_Word STATE_VARIABLE_IntermodRequests_0_36,
  MR_Word * STATE_VARIABLE_IntermodRequests_37);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_p_0(
  MR_Word SharingTable_14,
  MR_Word ReuseTable_15,
  MR_Word PPId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_FixpointTable_0_45,
  MR_Word * STATE_VARIABLE_FixpointTable_46,
  MR_Word STATE_VARIABLE_DepProcs_0_47,
  MR_Word * STATE_VARIABLE_DepProcs_48,
  MR_Word STATE_VARIABLE_Requests_0_49,
  MR_Word * STATE_VARIABLE_Requests_50,
  MR_Word STATE_VARIABLE_IntermodRequests_0_51,
  MR_Word * STATE_VARIABLE_IntermodRequests_52);

static MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_f_0(
  MR_Word PPId_4,
  MR_Word Table_5);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ProcInfo_8,
  MR_Word Id_9,
  MR_Word ReuseAs_10,
  MR_Word STATE_VARIABLE_Table_0_12,
  MR_Word * STATE_VARIABLE_Table_13);

static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_f_0(
  MR_Word Tin_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(
  MR_Word BaseInfo_6,
  MR_Word STATE_VARIABLE_Goal_0_89,
  MR_Word * STATE_VARIABLE_Goal_90,
  MR_Word STATE_VARIABLE_IrInfo_0_91,
  MR_Word * STATE_VARIABLE_IrInfo_92);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_p_0(
  MR_Word BaseInfo_8,
  MR_Word GenDetails_9,
  MR_Word CallArgs_10,
  MR_Word Modes_11,
  MR_Word GoalInfo_12,
  MR_Word STATE_VARIABLE_IrInfo_0_34,
  MR_Word * STATE_VARIABLE_IrInfo_35);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_p_0(
  MR_Word BaseInfo_6,
  MR_Word STATE_VARIABLE_Goal_0_32,
  MR_Word * STATE_VARIABLE_Goal_33,
  MR_Word STATE_VARIABLE_IrInfo_0_34,
  MR_Word * STATE_VARIABLE_IrInfo_35);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(
  MR_Word tscc_proc_1_input_1_BaseInfo_10,
  MR_Word tscc_proc_1_input_2_CalleePPId_11,
  MR_Word tscc_proc_1_input_3_NoClobbers_12,
  MR_Word tscc_proc_1_input_4_CalleeArgs_13,
  MR_Word tscc_proc_1_input_5_CondReuseHandling_14,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_GoalInfo_22,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IrInfo_24);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_p_0(
  MR_Word tscc_proc_2_input_1_BaseInfo_10,
  MR_Word tscc_proc_2_input_2_CalleePPId_11,
  MR_Word tscc_proc_2_input_3_NoClobbers_12,
  MR_Word tscc_proc_2_input_4_CalleeArgs_13,
  MR_Word tscc_proc_2_input_5_FormalReuseAs_14,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_GoalInfo_22,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IrInfo_24);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(
  MR_Word BaseInfo_8,
  MR_Word OrigPPId_9,
  MR_Word PPId_10,
  MR_Word NoClobbers_11,
  MR_Word STATE_VARIABLE_IrInfo_0_22,
  MR_Word * STATE_VARIABLE_IrInfo_23,
  MR_Word * ReuseAs_13);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(
  MR_Word ReuseTable_4,
  MR_Word PPId_5);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_p_0(
  MR_Word PPId_5,
  MR_Word * ReuseAs_6,
  MR_Word STATE_VARIABLE_Table_0_8,
  MR_Word * STATE_VARIABLE_Table_9);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__add_request_6_p_0(
  MR_Word BaseInfo_7,
  MR_Word CalleePPId_8,
  MR_Word NotDeadArgNums_9,
  MR_Word * IntraModule_10,
  MR_Word STATE_VARIABLE_IrInfo_0_20,
  MR_Word * STATE_VARIABLE_IrInfo_21);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(
  MR_Word List_1,
  MR_Word HeadVar__2_2,
  MR_Integer Index_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(
  MR_Word BaseInfo_8,
  MR_Word CalleePPId_9,
  MR_Word NoClobbers_10,
  MR_Word GoalInfo_11,
  MR_Word Reason_12);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0(
  MR_Word BaseInfo_9,
  MR_Word IrInfo_10,
  MR_Word GoalInfo_11,
  MR_Word CalleePPId_12,
  MR_Word CalleeArgs_13,
  MR_Word FormalReuseAs_14,
  MR_Word * NewReuseAs_15,
  MR_Word * NotDeadVars_16);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(
  MR_Word BaseInfo_6,
  MR_Word OldSharing_7,
  MR_Word NewSharing_8,
  MR_Word STATE_VARIABLE_IrInfo_0_12,
  MR_Word * STATE_VARIABLE_IrInfo_13);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(
  MR_Word BaseInfo_5,
  MR_Word IrInfo0_6,
  MR_Word STATE_VARIABLE_IrInfo_0_17,
  MR_Word * STATE_VARIABLE_IrInfo_18);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(
  MR_Word BaseInfo_6,
  MR_Word IrInfoList_7,
  MR_Word FixpointTable_8,
  MR_Word STATE_VARIABLE_IrInfo_0_12,
  MR_Word * STATE_VARIABLE_IrInfo_13);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_f_0(
  MR_Word PPId_7,
  MR_Word FixpointTable_8,
  MR_Word DepProcs_9,
  MR_Word Requests_10,
  MR_Word IntermodRequests_11);

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word PPId_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word SharingTable_12,
  MR_Word ReuseTable_13);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0(
  MR_Word SharingTable_13,
  MR_Word SCC_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_ReuseTable_0_26,
  MR_Word * STATE_VARIABLE_ReuseTable_27,
  MR_Word STATE_VARIABLE_DepProcs_0_28,
  MR_Word * STATE_VARIABLE_DepProcs_29,
  MR_Word STATE_VARIABLE_Requests_0_30,
  MR_Word * STATE_VARIABLE_Requests_31,
  MR_Word STATE_VARIABLE_IntermodRequests_0_32,
  MR_Word * STATE_VARIABLE_IntermodRequests_33);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(
  MR_Word FixpointTable_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ReuseTable_0_9,
  MR_Word * STATE_VARIABLE_ReuseTable_10);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0(
  MR_Word SharingTable_13,
  MR_Word SCC_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_ReuseTable_0_25,
  MR_Word * STATE_VARIABLE_ReuseTable_26,
  MR_Word STATE_VARIABLE_DepProcs_0_27,
  MR_Word * STATE_VARIABLE_DepProcs_28,
  MR_Word STATE_VARIABLE_Requests_0_29,
  MR_Word * STATE_VARIABLE_Requests_30,
  MR_Word STATE_VARIABLE_IntermodRequests_0_31,
  MR_Word * STATE_VARIABLE_IntermodRequests_32);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(
  MR_Word SharingTable_14,
  MR_Word SCC_15,
  MR_Word ReuseTable_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_FixpointTable_0_24,
  MR_Word * STATE_VARIABLE_FixpointTable_25,
  MR_Word STATE_VARIABLE_DepProcs_0_26,
  MR_Word * STATE_VARIABLE_DepProcs_27,
  MR_Word STATE_VARIABLE_Requests_0_28,
  MR_Word * STATE_VARIABLE_Requests_29,
  MR_Word STATE_VARIABLE_IntermodRequests_0_30,
  MR_Word * STATE_VARIABLE_IntermodRequests_31);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_3[1][15];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[1][16];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[2][6];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_6[3][7];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_7[1][5];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_8[1][8];

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_9[2][10];




static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
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
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_7[0])),
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
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
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

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[1][16] = {
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

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[2][6] = {
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

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_6[3][7] = {
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

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0))
  },
};

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_8[1][8] = {
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

static /* final */ const MR_Box transform_hlds__ctgc__structure_reuse__indirect_scalar_common_9[2][10] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__pti_set_ordlist_1__plain_transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__pti_fixpoint_table_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__pti_tree234_2__plain_transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0 = {
  (MR_String) "allow_conditional_reuse",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1 = {
  (MR_String) "ignore_conditional_reuse",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_value_ordered_conditional_reuse_handling_0[2] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_name_ordered_conditional_reuse_handling_0[2] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__enum_functor_desc_conditional_reuse_handling_0_1
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_conditional_reuse_handling_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_conditional_reuse_handling_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_dep_procs_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__fixpoint_table__ti_fixpoint_table_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0 = {
  &transform_hlds__ctgc__fixpoint_table__transform_hlds__ctgc__fixpoint_table__type_ctor_info_fixpoint_table_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__set_ordlist__ti_set_ordlist_1transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0
  }
};

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

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0 = {
  (MR_String) "ir_analysis_info",
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_analysis_info_0_0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_analysis_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_analysis_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_analysis_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_analysis_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_analysis_info_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_analysis_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_FA_TypeInfo_Struct2 transform_hlds__ctgc__structure_reuse__indirect__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &transform_hlds__ctgc__structure_sharing__domain__transform_hlds__ctgc__structure_sharing__domain__type_ctor_info_sharing_as_and_status_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

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

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0 = {
  (MR_String) "ir_background_info",
  (MR_Integer) 10,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_ir_background_info_0_0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_ir_background_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_ir_background_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_ir_background_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_ir_background_info_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_ir_background_info_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_ir_background_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_background_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_fixpoint_table_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

static const MR_FA_TypeInfo_Struct1 transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_sr_request_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1builtin__type_ctor_info_int_0
};

static const MR_ConstString transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_sr_request_0_0[2] = {
  (MR_String) "srreq_ppid",
  (MR_String) "srreq_args"
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0 = {
  (MR_String) "sr_request",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_sr_request_0_0,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_names_sr_request_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_sr_request_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_sr_request_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_sr_request_0[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_sr_request_0_0
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_sr_request_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
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

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0 = {
  (MR_String) "callee_has_no_reuses",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1 = {
  (MR_String) "callee_has_only_unconditional_reuse",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2 = {
  (MR_String) "current_sharing_is_top",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_verify_indirect_reuse_reason_0_3[1] = {
  (MR_PseudoTypeInfo) &transform_hlds__ctgc__structure_reuse__indirect__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3 = {
  (MR_String) "reuse_is_unsafe",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__field_types_verify_indirect_reuse_reason_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4 = {
  (MR_String) "reuse_is_unconditional",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5 = {
  (MR_String) "reuse_is_conditional",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_0[5] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_1[1] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3
};

static const MR_DuPtagLayout transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_ptag_ordered_verify_indirect_reuse_reason_0[2] = {
  {
    (MR_Integer) 5,
    MR_SECTAG_LOCAL,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_stag_ordered_verify_indirect_reuse_reason_0_1
  }
};

static const MR_DuFunctorDescPtr transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_name_ordered_verify_indirect_reuse_reason_0[6] = {
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_0,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_1,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_2,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_5,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_4,
  &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__du_functor_desc_verify_indirect_reuse_reason_0_3
};

static const MR_Integer transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__functor_number_map_verify_indirect_reuse_reason_0[6] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_verify_indirect_reuse_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
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

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__OrigPPId_9 = ((MR_Word) (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__conv0_OrigPPId_9);
    transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_22 = ((MR_Word) (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__conv2_Var_22);
    *((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__LambdaHeadVar__1_14) = ((MR_Word) (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__conv1_LambdaHeadVar__1_14);
    transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_3(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__ArgX1_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_22, (MR_Integer) 0)));
    (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__ArgX2_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_22, (MR_Integer) 1)));
    (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_15, (MR_Integer) 0)));
    (MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_15, (MR_Integer) 1)) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__ArgX2_25));
    (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__ArgX1_23, (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_29);
    if ((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__succeeded)
      ((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__cont)((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_10;

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__Var_15 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__OrigPPId_9));
        MR_hl_field(MR_mktag(0), base, 1) = NULL;
      }
      (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__TypeCtorInfo_21_21 = (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0;
      mercury__map__member_3_p_0((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__TypeCtorInfo_21_21, (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__TypeCtorInfo_20_20, (env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__ReuseVersionMap_7, &(env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__conv2_Var_22, &(env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__conv1_LambdaHeadVar__1_14, transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_4, env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0(
  MR_Word SCC_5,
  MR_Word ReuseVersionMap_7,
  MR_Word * LambdaHeadVar__1_14,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0_s env;

    (env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__ReuseVersionMap_7 = ReuseVersionMap_7;
    (env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__LambdaHeadVar__1_14 = LambdaHeadVar__1_14;
    (env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__cont = cont;
    (env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    (env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__TypeCtorInfo_20_20 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    mercury__list__member_2_p_1((env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__TypeCtorInfo_20_20, &(env).transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_env_0__conv0_OrigPPId_9, SCC_5, transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0_2, &env);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_17 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_16 == CastY_17);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6], HeadVar__1_1, ((MR_Box) (Var_19)), ((MR_Box) (ArgY1_11)));
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_14 == CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_17_17;
            MR_Word ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              TypeInfo_17_17 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_8, ArgX1_4, ArgY1_5);
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4], HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4];
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_34 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Integer ArgX8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Integer ArgY8_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8)));
      MR_Word ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));
      MR_Word ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9)));
      MR_Word Var_24;

      hlds__hlds_module____Compare____module_info_0_0(&Var_24, ArgX1_4, ArgY1_5);
      succeeded = (Var_24 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_24;
      else
      {
        MR_Word Var_25;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&Var_25, ArgX2_6, ArgY2_7);
        succeeded = (Var_25 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_25;
        else
        {
          MR_Word Var_26;

          hlds__hlds_pred____Compare____pred_info_0_0(&Var_26, ArgX3_8, ArgY3_9);
          succeeded = (Var_26 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_26;
          else
          {
            MR_Word Var_27;

            hlds__hlds_pred____Compare____proc_info_0_0(&Var_27, ArgX4_10, ArgY4_11);
            succeeded = (Var_27 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_27;
            else
            {
              MR_Word Var_28;

              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[1], &Var_28, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_28 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_28;
              else
              {
                MR_Word Var_29;

                transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_table_0_0(&Var_29, ArgX6_14, ArgY6_15);
                succeeded = (Var_29 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_29;
                else
                {
                  MR_Word Var_30;

                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6], &Var_30, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_30 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_30;
                  else
                  {
                    MR_Word Var_31;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_31, ArgX8_18, ArgY8_19);
                    succeeded = (Var_31 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_31;
                    else
                    {
                      MR_Word Var_32;
                      MR_Integer Var_45 = (MR_Integer) ArgX9_20;
                      MR_Integer Var_46 = (MR_Integer) ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_32, Var_45, Var_46);
                      succeeded = (Var_32 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_32;
                      else
                      {
                        MR_Integer Var_47 = (MR_Integer) ArgX10_22;
                        MR_Integer Var_48 = (MR_Integer) ArgY10_23;

                        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_47, Var_48);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_24 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_29_29;
      MR_Word TypeInfo_31_31;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Integer ArgX8_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Integer ArgY8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8)));
      MR_Word ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8)));
      MR_Word ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9)));
      MR_Word ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____proc_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeInfo_29_29 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[1];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_table_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_31_31 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[6];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                        succeeded = (ArgX10_21 == ArgY10_22);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_27 == CastY_28);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));
      MR_Word ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7)));
      MR_Word Var_20;

      transform_hlds__ctgc__structure_sharing__domain____Compare____sharing_as_0_0(&Var_20, ArgX1_4, ArgY1_5);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        transform_hlds__ctgc__structure_reuse__domain____Compare____reuse_as_0_0(&Var_21, ArgX2_6, ArgY2_7);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;
          MR_Integer Var_37 = (MR_Integer) ArgX3_8;
          MR_Integer Var_38 = (MR_Integer) ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_22, Var_37, Var_38);
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[5], &Var_23, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], &Var_24, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], &Var_25, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;

                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2], &Var_26, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2], HeadVar__1_1, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_25_25;
      MR_Word TypeInfo_26_26;
      MR_Word TypeInfo_27_27;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7)));
      MR_Word ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7)));

      succeeded = transform_hlds__ctgc__structure_sharing__domain____Unify____sharing_as_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = transform_hlds__ctgc__structure_reuse__domain____Unify____reuse_as_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_23_23 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[5];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_24_24 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_25_25 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_26_26 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_27_27 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_description_1_f_0(
  MR_Word Table_3)
{
  {
    MR_String HeadVar__2_2;

    HeadVar__2_2 = transform_hlds__ctgc__fixpoint_table__description_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, Table_3);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_p_0(
  MR_Word BaseInfo_8,
  MR_Word IrInfo0_9,
  MR_Word Case0_10,
  MR_Word * Case_11,
  MR_Word * IrInfo_12,
  MR_Word STATE_VARIABLE_FixpointTable_0_19,
  MR_Word * STATE_VARIABLE_FixpointTable_20)
{
  {
    MR_Word MainConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 0)));
    MR_Word OtherConsIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 1)));
    MR_Word Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 2)));
    MR_Word NewIrInfo_17;
    MR_Word Goal_18;
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 0)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 1)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 2)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 3)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 5)));
    MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 6)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 7)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 4)));
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;

    {
      NewIrInfo_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NewIrInfo_17, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), NewIrInfo_17, 1) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), NewIrInfo_17, 2) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), NewIrInfo_17, 3) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), NewIrInfo_17, 4) = ((MR_Box) (STATE_VARIABLE_FixpointTable_0_19));
      MR_hl_field(MR_mktag(0), NewIrInfo_17, 5) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), NewIrInfo_17, 6) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), NewIrInfo_17, 7) = ((MR_Box) (Var_29));
    }
    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(BaseInfo_8, Goal0_16, &Goal_18, NewIrInfo_17, IrInfo_12);
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 0)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 1)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 2)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 3)));
    *STATE_VARIABLE_FixpointTable_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 4)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 5)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 6)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Case_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_18));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_p_0(
  MR_Word BaseInfo_8,
  MR_Word IrInfo0_9,
  MR_Word Goal0_10,
  MR_Word * Goal_11,
  MR_Word * IrInfo_12,
  MR_Word STATE_VARIABLE_FixpointTable_0_15,
  MR_Word * STATE_VARIABLE_FixpointTable_16)
{
  {
    MR_Word NewIrInfo_14;
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 3)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 5)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 6)));
    MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 7)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_9, (MR_Integer) 4)));
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    {
      NewIrInfo_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NewIrInfo_14, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), NewIrInfo_14, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), NewIrInfo_14, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), NewIrInfo_14, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), NewIrInfo_14, 4) = ((MR_Box) (STATE_VARIABLE_FixpointTable_0_15));
      MR_hl_field(MR_mktag(0), NewIrInfo_14, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), NewIrInfo_14, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), NewIrInfo_14, 7) = ((MR_Box) (Var_25));
    }
    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(BaseInfo_8, Goal0_10, Goal_11, NewIrInfo_14, IrInfo_12);
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 0)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 1)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 2)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 3)));
    *STATE_VARIABLE_FixpointTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 4)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 5)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 6)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), *IrInfo_12, (MR_Integer) 7)));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_p_0(
  MR_Word SharingTable_14,
  MR_Word ReuseTable_15,
  MR_Word PPId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * STATE_VARIABLE_ModuleInfo_29,
  MR_Word STATE_VARIABLE_FixpointTable_0_30,
  MR_Word * STATE_VARIABLE_FixpointTable_31,
  MR_Word STATE_VARIABLE_DepProcs_0_32,
  MR_Word * STATE_VARIABLE_DepProcs_33,
  MR_Word STATE_VARIABLE_Requests_0_34,
  MR_Word * STATE_VARIABLE_Requests_35,
  MR_Word STATE_VARIABLE_IntermodRequests_0_36,
  MR_Word * STATE_VARIABLE_IntermodRequests_37)
{
  {
    MR_bool succeeded;
    MR_Word PredId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PPId_16, (MR_Integer) 0)));
    MR_Word PredInfo_24;
    MR_Word Origin_25;
    MR_Integer Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PPId_16, (MR_Integer) 1)));
    MR_Word Var_26;
    MR_Word Var_27;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_28, PredId_22, &PredInfo_24);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_24, &Origin_25);
    succeeded = ((MR_tag((MR_Word) Origin_25)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_25, (MR_Integer) 0)));
      Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Origin_25, (MR_Integer) 1)));
      *STATE_VARIABLE_IntermodRequests_37 = STATE_VARIABLE_IntermodRequests_0_36;
      *STATE_VARIABLE_Requests_35 = STATE_VARIABLE_Requests_0_34;
      *STATE_VARIABLE_DepProcs_33 = STATE_VARIABLE_DepProcs_0_32;
      *STATE_VARIABLE_FixpointTable_31 = STATE_VARIABLE_FixpointTable_0_30;
      *STATE_VARIABLE_ModuleInfo_29 = STATE_VARIABLE_ModuleInfo_0_28;
    }
    else
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_p_0(SharingTable_14, ReuseTable_15, PPId_16, STATE_VARIABLE_ModuleInfo_0_28, STATE_VARIABLE_ModuleInfo_29, STATE_VARIABLE_FixpointTable_0_30, STATE_VARIABLE_FixpointTable_31, STATE_VARIABLE_DepProcs_0_32, STATE_VARIABLE_DepProcs_33, STATE_VARIABLE_Requests_0_34, STATE_VARIABLE_Requests_35, STATE_VARIABLE_IntermodRequests_0_36, STATE_VARIABLE_IntermodRequests_37);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_2_13_p_0(
  MR_Word SharingTable_14,
  MR_Word ReuseTable_15,
  MR_Word PPId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_FixpointTable_0_45,
  MR_Word * STATE_VARIABLE_FixpointTable_46,
  MR_Word STATE_VARIABLE_DepProcs_0_47,
  MR_Word * STATE_VARIABLE_DepProcs_48,
  MR_Word STATE_VARIABLE_Requests_0_49,
  MR_Word * STATE_VARIABLE_Requests_50,
  MR_Word STATE_VARIABLE_IntermodRequests_0_51,
  MR_Word * STATE_VARIABLE_IntermodRequests_52)
{
  {
    MR_bool succeeded;
    MR_Word Globals_22;
    MR_Word VeryVerbose_23;
    MR_Word DebugIndirect_24;
    MR_Word PredId_25;
    MR_Integer ProcId_26;
    MR_Integer Run_27;
    MR_Word PredInfo0_29;
    MR_Word ProcInfo0_30;
    MR_Word Goal0_31;
    MR_Word BaseInfo_32;
    MR_Word IrInfo0_33;
    MR_Word Goal_34;
    MR_Word IrInfo_35;
    MR_Word ReuseAs_Status_41;
    MR_Word ProcInfo_42;
    MR_Word STATE_VARIABLE_FixpointTable_63_63;
    MR_Word Var_78;
    MR_Word Var_90;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_89;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &Globals_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 59, &VeryVerbose_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 94, &DebugIndirect_24);
    PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), PPId_16, (MR_Integer) 0)));
    ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PPId_16, (MR_Integer) 1)));
    Run_27 = transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_f_0(STATE_VARIABLE_FixpointTable_0_45);
    succeeded = (VeryVerbose_23 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (DebugIndirect_24 == (MR_Integer) 1);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "% Indirect reuse analysis (run ");
      mercury__io__write_int_3_p_0(Run_27);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      hlds__hlds_out__hlds_out_util__write_pred_proc_id_pair_5_p_0(STATE_VARIABLE_ModuleInfo_0_43, PredId_25, ProcId_26);
      mercury__io__nl_2_p_0();
    }
    else
    {
    }
    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_43, PPId_16, &PredInfo0_29, &ProcInfo0_30);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo0_30, &Goal0_31);
    BaseInfo_32 = transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_f_0(STATE_VARIABLE_ModuleInfo_0_43, PPId_16, PredInfo0_29, ProcInfo0_30, SharingTable_14, ReuseTable_15);
    IrInfo0_33 = transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_f_0(PPId_16, STATE_VARIABLE_FixpointTable_0_45, STATE_VARIABLE_DepProcs_0_47, STATE_VARIABLE_Requests_0_49, STATE_VARIABLE_IntermodRequests_0_51);
    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(BaseInfo_32, Goal0_31, &Goal_34, IrInfo0_33, &IrInfo_35);
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 0)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 1)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 2)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 3)));
    STATE_VARIABLE_FixpointTable_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 4)));
    *STATE_VARIABLE_DepProcs_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 5)));
    *STATE_VARIABLE_Requests_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 6)));
    *STATE_VARIABLE_IntermodRequests_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 7)));
    succeeded = (VeryVerbose_23 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (DebugIndirect_24 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Integer NumConditions_40;
      MR_String Var_70;
      MR_Word Var_73;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;

      mercury__io__write_string_3_p_0((MR_String) "% FPT: ");
      Var_70 = transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_f_0(PPId_16, STATE_VARIABLE_FixpointTable_63_63);
      mercury__io__write_string_3_p_0(Var_70);
      mercury__io__nl_2_p_0();
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 0)));
      Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 1)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 2)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 3)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 4)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 5)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 6)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 7)));
      NumConditions_40 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(Var_73);
      mercury__io__write_string_3_p_0((MR_String) "% Number of conditions: ");
      mercury__io__write_int_3_p_0(NumConditions_40);
      mercury__io__nl_2_p_0();
    }
    else
    {
    }
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 0)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 1)));
    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 2)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 3)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 4)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 5)));
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 6)));
    Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_35, (MR_Integer) 7)));
    {
      ReuseAs_Status_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ReuseAs_Status_41, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), ReuseAs_Status_41, 1) = ((MR_Box) (Var_90));
    }
    transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0(STATE_VARIABLE_ModuleInfo_0_43, ProcInfo0_30, PPId_16, ReuseAs_Status_41, STATE_VARIABLE_FixpointTable_63_63, STATE_VARIABLE_FixpointTable_46);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_34, ProcInfo0_30, &ProcInfo_42);
    hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PPId_16, PredInfo0_29, ProcInfo_42, STATE_VARIABLE_ModuleInfo_0_43, STATE_VARIABLE_ModuleInfo_44);
  }
}

static MR_String MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_short_description_2_f_0(
  MR_Word PPId_4,
  MR_Word Table_5)
{
  {
    MR_bool succeeded;
    MR_String Descr_6;
    MR_String Rec_7;
    MR_String Descr0_10;
    MR_String Var_12;
    MR_Word ReuseAs_8;
    MR_Word Var_11;
    MR_Box conv0_Var_11;
    MR_Word Var_9;

    succeeded = transform_hlds__ctgc__fixpoint_table__is_recursive_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, Table_5);
    if (succeeded)
      Rec_7 = (MR_String) "(rec)";
    else
      Rec_7 = (MR_String) "(non-rec)";
    succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_semidet_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (PPId_4)), Table_5, &conv0_Var_11);
    if (succeeded)
    {
      Var_11 = ((MR_Word) conv0_Var_11);
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      ReuseAs_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1)));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      Descr0_10 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_short_description_1_f_0(ReuseAs_8);
    else
      Descr0_10 = (MR_String) "-";
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", Rec_7);
    Descr_6 = mercury__string__f_43_43_2_f_0(Descr0_10, Var_12);
    return Descr_6;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_and_status_subsumed_by_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word ProcInfo_8,
  MR_Word Id_9,
  MR_Word ReuseAs_10,
  MR_Word STATE_VARIABLE_Table_0_12,
  MR_Word * STATE_VARIABLE_Table_13)
{
  {
    MR_bool succeeded;
    MR_Word Var_14;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_new_as_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) (ProcInfo_8));
    }
    transform_hlds__ctgc__fixpoint_table__add_to_fixpoint_table_5_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, Var_14, ((MR_Box) (Id_9)), ((MR_Box) (ReuseAs_10)), STATE_VARIABLE_Table_0_12, STATE_VARIABLE_Table_13);
  }
}

static MR_Integer MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_which_run_1_f_0(
  MR_Word Tin_3)
{
  {
    MR_Integer HeadVar__2_2;

    HeadVar__2_2 = transform_hlds__ctgc__fixpoint_table__which_run_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, Tin_3);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_Case_11;
    MR_Word conv8_IrInfo_12;
    MR_Word conv7_STATE_VARIABLE_FixpointTable_20;

    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_case_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv9_Case_11, &conv8_IrInfo_12, ((MR_Word) wrapper_arg_4), &conv7_STATE_VARIABLE_FixpointTable_20);
    *wrapper_arg_2 = ((MR_Box) (conv9_Case_11));
    *wrapper_arg_3 = ((MR_Box) (conv8_IrInfo_12));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_FixpointTable_20));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_Goal_11;
    MR_Word conv4_IrInfo_12;
    MR_Word conv3_STATE_VARIABLE_FixpointTable_16;

    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_disj_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv5_Goal_11, &conv4_IrInfo_12, ((MR_Word) wrapper_arg_4), &conv3_STATE_VARIABLE_FixpointTable_16);
    *wrapper_arg_2 = ((MR_Box) (conv5_Goal_11));
    *wrapper_arg_3 = ((MR_Box) (conv4_IrInfo_12));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_FixpointTable_16));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Goal_90;
    MR_Word conv0_STATE_VARIABLE_IrInfo_92;

    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_STATE_VARIABLE_Goal_90, ((MR_Word) wrapper_arg_3), &conv0_STATE_VARIABLE_IrInfo_92);
    *wrapper_arg_2 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_90));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_IrInfo_92));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(
  MR_Word BaseInfo_6,
  MR_Word STATE_VARIABLE_Goal_0_89,
  MR_Word * STATE_VARIABLE_Goal_90,
  MR_Word STATE_VARIABLE_IrInfo_0_91,
  MR_Word * STATE_VARIABLE_IrInfo_92)
{
  {
    MR_Word ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 0)));
    MR_Word PredInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 2)));
    MR_Word ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 3)));
    MR_Word GoalExpr0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_89, (MR_Integer) 0)));
    MR_Word GoalInfo0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_89, (MR_Integer) 1)));
    MR_Word Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 1)));
    MR_Word Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 4)));
    MR_Word Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 5)));
    MR_Word Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 6)));
    MR_Integer Var_141 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 7)));
    MR_Word Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 8)));
    MR_Word Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 9)));

    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Goal_90 = STATE_VARIABLE_Goal_0_89;
          *STATE_VARIABLE_IrInfo_92 = STATE_VARIABLE_IrInfo_0_91;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Unification_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 3)));
          MR_Word OldSharing_56;
          MR_Word NewSharing_57;
          MR_Word STATE_VARIABLE_IrInfo_113_113;
          MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 0)));
          MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 1)));
          MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 2)));
          MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 4)));
          MR_Word Var_177;
          MR_Word Var_178;
          MR_Word Var_179;
          MR_Word Var_180;
          MR_Word Var_181;
          MR_Word Var_182;
          MR_Word Var_183;

          switch (MR_tag((MR_Word) Unification_32)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_32, (MR_Integer) 0)));
                MR_Word HowToConstruct_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_32, (MR_Integer) 4)));
                MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_32, (MR_Integer) 1)));
                MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_32, (MR_Integer) 2)));
                MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_32, (MR_Integer) 3)));
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_32, (MR_Integer) 5)));
                MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_32, (MR_Integer) 6)));

                switch (MR_tag((MR_Word) HowToConstruct_38)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HowToConstruct_38)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_114;
                          MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
                          MR_Word Var_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
                          MR_Word Var_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
                          MR_Word Var_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
                          MR_Word Var_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
                          MR_Word Var_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
                          MR_Word Var_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
                          MR_Word Var_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
                          MR_Word Var_169;
                          MR_Word Var_170;
                          MR_Word Var_171;
                          MR_Word Var_173;
                          MR_Word Var_174;
                          MR_Word Var_175;
                          MR_Word Var_176;
                          MR_Word Var_172;

                          Var_114 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3], Var_115, ((MR_Box) (Var_34)));
                          Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
                          Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
                          Var_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
                          Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
                          Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
                          Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
                          Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
                          Var_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
                          {
                            STATE_VARIABLE_IrInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, 0) = ((MR_Box) (Var_169));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, 1) = ((MR_Box) (Var_170));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, 2) = ((MR_Box) (Var_171));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, 3) = ((MR_Box) (Var_114));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, 4) = ((MR_Box) (Var_173));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, 5) = ((MR_Box) (Var_174));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, 6) = ((MR_Box) (Var_175));
                            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, 7) = ((MR_Box) (Var_176));
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        STATE_VARIABLE_IrInfo_113_113 = STATE_VARIABLE_IrInfo_0_91;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    STATE_VARIABLE_IrInfo_113_113 = STATE_VARIABLE_IrInfo_0_91;
                    break;
                  case (MR_Integer) 2:
                    STATE_VARIABLE_IrInfo_113_113 = STATE_VARIABLE_IrInfo_0_91;
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_IrInfo_113_113 = STATE_VARIABLE_IrInfo_0_91;
              break;
            case (MR_Integer) 2:
              STATE_VARIABLE_IrInfo_113_113 = STATE_VARIABLE_IrInfo_0_91;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_32, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_IrInfo_113_113 = STATE_VARIABLE_IrInfo_0_91;
                  break;
                case (MR_Integer) 1:
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.indirect_reuse_analyse_goal\'/5", (MR_String) "complicated unification");
                      return;
                    }
                  }
                  break;
              }
              break;
          }
          OldSharing_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 0)));
          Var_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 1)));
          Var_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 2)));
          Var_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 3)));
          Var_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 4)));
          Var_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 5)));
          Var_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 6)));
          Var_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_113_113, (MR_Integer) 7)));
          NewSharing_57 = transform_hlds__ctgc__structure_sharing__domain__add_unify_sharing_5_f_0(ModuleInfo_9, ProcInfo_11, Unification_32, GoalInfo0_13, OldSharing_56);
          transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(BaseInfo_6, OldSharing_56, NewSharing_57, STATE_VARIABLE_IrInfo_113_113, STATE_VARIABLE_IrInfo_92);
          *STATE_VARIABLE_Goal_90 = STATE_VARIABLE_Goal_0_89;
        }
        break;
      case (MR_Integer) 2:
        transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_p_0(BaseInfo_6, STATE_VARIABLE_Goal_0_89, STATE_VARIABLE_Goal_90, STATE_VARIABLE_IrInfo_0_91, STATE_VARIABLE_IrInfo_92);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenDetails_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word CallArgs_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word Modes_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3)));
              MR_Word _MaybeArgRegs_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4)));
              MR_Word _Detism_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 5)));

              transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_p_0(BaseInfo_6, GenDetails_24, CallArgs_25, Modes_26, GoalInfo0_13, STATE_VARIABLE_IrInfo_0_91, STATE_VARIABLE_IrInfo_92);
              *STATE_VARIABLE_Goal_90 = STATE_VARIABLE_Goal_0_89;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Attributes_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word ForeignPredId_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Integer ForeignProcId_81 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3)));
              MR_Word Args_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4)));
              MR_Word ForeignPPId_86;
              MR_Word Context_87;
              MR_Word OldSharing_133;
              MR_Word NewSharing_134;
              MR_Word _ExtraArgs_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 5)));
              MR_Word _MaybeTraceRuntimeCond_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 6)));
              MR_Word _Impl_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 7)));
              MR_Word Var_213;
              MR_Word Var_214;
              MR_Word Var_215;
              MR_Word Var_216;
              MR_Word Var_217;
              MR_Word Var_218;
              MR_Word Var_219;

              {
                ForeignPPId_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ForeignPPId_86, 0) = ((MR_Box) (ForeignPredId_80));
                MR_hl_field(MR_mktag(0), ForeignPPId_86, 1) = ((MR_Box) (ForeignProcId_81));
              }
              Context_87 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
              OldSharing_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
              Var_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
              Var_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
              Var_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
              Var_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
              Var_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
              Var_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
              Var_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
              transform_hlds__ctgc__structure_sharing__domain__add_foreign_proc_sharing_9_p_0(ModuleInfo_9, PredInfo_10, ProcInfo_11, ForeignPPId_86, Attributes_79, Args_82, Context_87, OldSharing_133, &NewSharing_134);
              transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(BaseInfo_6, OldSharing_133, NewSharing_134, STATE_VARIABLE_IrInfo_0_91, STATE_VARIABLE_IrInfo_92);
              *STATE_VARIABLE_Goal_90 = STATE_VARIABLE_Goal_0_89;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word TypeCtorInfo_224_224;
              MR_Word ConjType_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word Goals0_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word Goals_16;
              MR_Word GoalExpr_17;
              MR_Word Var_121;
              MR_Box conv2_STATE_VARIABLE_IrInfo_92;

              {
                Var_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_121, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), Var_121, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_1));
                MR_hl_field(MR_mktag(0), Var_121, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_121, 3) = ((MR_Box) (BaseInfo_6));
              }
              TypeCtorInfo_224_224 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map_foldl_5_p_0(TypeCtorInfo_224_224, TypeCtorInfo_224_224, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0, Var_121, Goals0_15, &Goals_16, ((MR_Box) (STATE_VARIABLE_IrInfo_0_91)), &conv2_STATE_VARIABLE_IrInfo_92);
              *STATE_VARIABLE_IrInfo_92 = ((MR_Word) conv2_STATE_VARIABLE_IrInfo_92);
              {
                GoalExpr_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), GoalExpr_17, 1) = ((MR_Box) (ConjType_14));
                MR_hl_field(MR_mktag(3), GoalExpr_17, 2) = ((MR_Box) (Goals_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_90 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_17));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word TypeCtorInfo_232_232;
              MR_Word IrInfoList_58;
              MR_Word NewFixpointTable_59;
              MR_Word Var_106;
              MR_Word Var_107;
              MR_Word Goals0_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word Goals_125;
              MR_Word GoalExpr_126;
              MR_Word Var_184;
              MR_Word Var_185;
              MR_Word Var_186;
              MR_Word Var_187;
              MR_Word Var_188;
              MR_Word Var_189;
              MR_Word Var_190;
              MR_Box conv6_NewFixpointTable_59;

              {
                Var_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_9[0]));
                MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_2));
                MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (BaseInfo_6));
                MR_hl_field(MR_mktag(0), Var_106, 4) = ((MR_Box) (STATE_VARIABLE_IrInfo_0_91));
              }
              Var_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
              Var_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
              Var_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
              Var_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
              Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
              Var_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
              Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
              Var_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
              TypeCtorInfo_232_232 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
              mercury__list__map2_foldl_6_p_0(TypeCtorInfo_232_232, TypeCtorInfo_232_232, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], Var_106, Goals0_124, &Goals_125, &IrInfoList_58, ((MR_Box) (Var_107)), &conv6_NewFixpointTable_59);
              NewFixpointTable_59 = ((MR_Word) conv6_NewFixpointTable_59);
              transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(BaseInfo_6, IrInfoList_58, NewFixpointTable_59, STATE_VARIABLE_IrInfo_0_91, STATE_VARIABLE_IrInfo_92);
              {
                GoalExpr_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_126, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), GoalExpr_126, 1) = ((MR_Box) (Goals_125));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_90 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_126));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word TypeCtorInfo_240_240;
              MR_Word A_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word B_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word Cases0_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3)));
              MR_Word Cases_63;
              MR_Word Var_102;
              MR_Word Var_103;
              MR_Word GoalExpr_127;
              MR_Word IrInfoList_128;
              MR_Word NewFixpointTable_129;
              MR_Word Var_191;
              MR_Word Var_192;
              MR_Word Var_193;
              MR_Word Var_194;
              MR_Word Var_195;
              MR_Word Var_196;
              MR_Word Var_197;
              MR_Box conv10_NewFixpointTable_129;

              {
                Var_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_102, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_9[1]));
                MR_hl_field(MR_mktag(0), Var_102, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0_3));
                MR_hl_field(MR_mktag(0), Var_102, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_102, 3) = ((MR_Box) (BaseInfo_6));
                MR_hl_field(MR_mktag(0), Var_102, 4) = ((MR_Box) (STATE_VARIABLE_IrInfo_0_91));
              }
              Var_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
              Var_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
              Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
              Var_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
              Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
              Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
              Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
              Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
              TypeCtorInfo_240_240 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0;
              mercury__list__map2_foldl_6_p_0(TypeCtorInfo_240_240, TypeCtorInfo_240_240, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], Var_102, Cases0_62, &Cases_63, &IrInfoList_128, ((MR_Box) (Var_103)), &conv10_NewFixpointTable_129);
              NewFixpointTable_129 = ((MR_Word) conv10_NewFixpointTable_129);
              transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(BaseInfo_6, IrInfoList_128, NewFixpointTable_129, STATE_VARIABLE_IrInfo_0_91, STATE_VARIABLE_IrInfo_92);
              {
                GoalExpr_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), GoalExpr_127, 1) = ((MR_Box) (A_60));
                MR_hl_field(MR_mktag(3), GoalExpr_127, 2) = ((MR_Box) (B_61));
                MR_hl_field(MR_mktag(3), GoalExpr_127, 3) = ((MR_Box) (Cases_63));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_90 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_127));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word SubGoal0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word SubGoal_67;
              MR_Word GoalExpr_130;

              transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(BaseInfo_6, SubGoal0_66, &SubGoal_67, STATE_VARIABLE_IrInfo_0_91, STATE_VARIABLE_IrInfo_92);
              {
                GoalExpr_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), GoalExpr_130, 1) = ((MR_Box) (Reason_65));
                MR_hl_field(MR_mktag(3), GoalExpr_130, 2) = ((MR_Box) (SubGoal_67));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_90 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_130));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word IfGoal0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2)));
              MR_Word ThenGoal0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3)));
              MR_Word ElseGoal0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4)));
              MR_Word IfGoal_72;
              MR_Word IrInfoIfGoal_73;
              MR_Word ThenGoal_74;
              MR_Word IrInfoThenGoal_75;
              MR_Word IrInfoElseGoal0_76;
              MR_Word ElseGoal_77;
              MR_Word IrInfoElseGoal_78;
              MR_Word Var_97;
              MR_Word GoalExpr_131;
              MR_Word A_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1)));
              MR_Word Var_198;
              MR_Word Var_199;
              MR_Word Var_200;
              MR_Word Var_201;
              MR_Word Var_202;
              MR_Word Var_203;
              MR_Word Var_204;
              MR_Word Var_205;
              MR_Word Var_206;
              MR_Word Var_207;
              MR_Word Var_208;
              MR_Word Var_210;
              MR_Word Var_211;
              MR_Word Var_212;
              MR_Word Var_209;

              transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(BaseInfo_6, IfGoal0_68, &IfGoal_72, STATE_VARIABLE_IrInfo_0_91, &IrInfoIfGoal_73);
              transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(BaseInfo_6, ThenGoal0_69, &ThenGoal_74, IrInfoIfGoal_73, &IrInfoThenGoal_75);
              Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfoThenGoal_75, (MR_Integer) 0)));
              Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfoThenGoal_75, (MR_Integer) 1)));
              Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfoThenGoal_75, (MR_Integer) 2)));
              Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfoThenGoal_75, (MR_Integer) 3)));
              Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfoThenGoal_75, (MR_Integer) 4)));
              Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfoThenGoal_75, (MR_Integer) 5)));
              Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfoThenGoal_75, (MR_Integer) 6)));
              Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfoThenGoal_75, (MR_Integer) 7)));
              Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 0)));
              Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 1)));
              Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 2)));
              Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 3)));
              Var_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 4)));
              Var_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 5)));
              Var_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 6)));
              Var_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_91, (MR_Integer) 7)));
              {
                IrInfoElseGoal0_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), IrInfoElseGoal0_76, 0) = ((MR_Box) (Var_205));
                MR_hl_field(MR_mktag(0), IrInfoElseGoal0_76, 1) = ((MR_Box) (Var_206));
                MR_hl_field(MR_mktag(0), IrInfoElseGoal0_76, 2) = ((MR_Box) (Var_207));
                MR_hl_field(MR_mktag(0), IrInfoElseGoal0_76, 3) = ((MR_Box) (Var_208));
                MR_hl_field(MR_mktag(0), IrInfoElseGoal0_76, 4) = ((MR_Box) (Var_97));
                MR_hl_field(MR_mktag(0), IrInfoElseGoal0_76, 5) = ((MR_Box) (Var_210));
                MR_hl_field(MR_mktag(0), IrInfoElseGoal0_76, 6) = ((MR_Box) (Var_211));
                MR_hl_field(MR_mktag(0), IrInfoElseGoal0_76, 7) = ((MR_Box) (Var_212));
              }
              transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_goal_5_p_0(BaseInfo_6, ElseGoal0_70, &ElseGoal_77, IrInfoElseGoal0_76, &IrInfoElseGoal_78);
              transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(BaseInfo_6, IrInfoThenGoal_75, IrInfoElseGoal_78, STATE_VARIABLE_IrInfo_92);
              {
                GoalExpr_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 1) = ((MR_Box) (A_132));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 2) = ((MR_Box) (IfGoal_72));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 3) = ((MR_Box) (ThenGoal_74));
                MR_hl_field(MR_mktag(3), GoalExpr_131, 4) = ((MR_Box) (ElseGoal_77));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_90 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_131));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.indirect_reuse_analyse_goal\'/5", (MR_String) "shorthand");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_generic_call_7_p_0(
  MR_Word BaseInfo_8,
  MR_Word GenDetails_9,
  MR_Word CallArgs_10,
  MR_Word Modes_11,
  MR_Word GoalInfo_12,
  MR_Word STATE_VARIABLE_IrInfo_0_34,
  MR_Word * STATE_VARIABLE_IrInfo_35)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 0)));
    MR_Word ProcInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 3)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 1)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 2)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 4)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 5)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 6)));
    MR_Integer Var_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 7)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 8)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 9)));

    switch (MR_tag((MR_Word) GenDetails_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word CallerVarTypes_24;
          MR_Word ActualTypes_25;

          hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_15, &CallerVarTypes_24);
          hlds__vartypes__lookup_var_types_3_p_0(CallerVarTypes_24, CallArgs_10, &ActualTypes_25);
          succeeded = transform_hlds__ctgc__structure_sharing__domain__bottom_sharing_is_safe_approximation_by_args_3_p_0(ModuleInfo_14, Modes_11, ActualTypes_25);
          if (succeeded)
            *STATE_VARIABLE_IrInfo_35 = STATE_VARIABLE_IrInfo_0_34;
          else
          {
            MR_Word Context_132;
            MR_String ContextString_133;
            MR_String Msg_134;
            MR_Word OldSharing_135;
            MR_Word NewSharing_136;
            MR_String Var_138;
            MR_Word Var_140;
            MR_Word Var_141;
            MR_Word Var_142;
            MR_Word Var_143;
            MR_Word Var_144;
            MR_Word Var_145;
            MR_Word Var_146;
            MR_Word Var_147;
            MR_Word DebugIndirect_148;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_98;
            MR_Word Var_99;
            MR_Word Var_100;
            MR_Word Var_101;
            MR_Integer Var_102;
            MR_Word Var_103;

            Context_132 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
            parse_tree__prog_out__context_to_string_2_p_0(Context_132, &ContextString_133);
            Var_138 = mercury__string__f_43_43_2_f_0(ContextString_133, (MR_String) ")");
            Msg_134 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", Var_138);
            OldSharing_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
            Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
            Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
            Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
            Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
            Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
            Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
            Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));
            {
              Var_140 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_140, 0) = ((MR_Box) (Msg_134));
            }
            NewSharing_136 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(Var_140, OldSharing_135);
            Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 0)));
            Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 1)));
            Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 2)));
            Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 3)));
            Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 4)));
            Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 5)));
            Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 6)));
            Var_102 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 7)));
            Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 8)));
            DebugIndirect_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 9)));
            switch (DebugIndirect_148) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(NewSharing_136);
                  if (succeeded)
                  {
                    succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(OldSharing_135);
                    succeeded = !(succeeded);
                  }
                  if (succeeded)
                  {
                    mercury__io__write_string_3_p_0((MR_String) "\tsharing is now top\n");
                  }
                  else
                  {
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_IrInfo_35 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NewSharing_136));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_141));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_142));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_143));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_144));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_145));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_146));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_147));
            }
          }
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Word Context_29;
          MR_String ContextString_30;
          MR_String Msg_31;
          MR_Word OldSharing_32;
          MR_Word NewSharing_33;
          MR_String Var_37;
          MR_Word Var_39;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word DebugIndirect_72;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_81;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Integer Var_85;
          MR_Word Var_86;

          Context_29 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
          parse_tree__prog_out__context_to_string_2_p_0(Context_29, &ContextString_30);
          Var_37 = mercury__string__f_43_43_2_f_0(ContextString_30, (MR_String) ")");
          Msg_31 = mercury__string__f_43_43_2_f_0((MR_String) "generic call (", Var_37);
          OldSharing_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
          Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
          Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
          Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (Msg_31));
          }
          NewSharing_33 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_top_sharing_accumulate_2_f_0(Var_39, OldSharing_32);
          Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 0)));
          Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 1)));
          Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 2)));
          Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 3)));
          Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 4)));
          Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 5)));
          Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 6)));
          Var_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 7)));
          Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 8)));
          DebugIndirect_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 9)));
          switch (DebugIndirect_72) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(NewSharing_33);
                if (succeeded)
                {
                  succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(OldSharing_32);
                  succeeded = !(succeeded);
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "\tsharing is now top\n");
                }
                else
                {
                }
              }
              break;
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_IrInfo_35 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NewSharing_33));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_62));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_65));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_plain_call_5_p_0(
  MR_Word BaseInfo_6,
  MR_Word STATE_VARIABLE_Goal_0_32,
  MR_Word * STATE_VARIABLE_Goal_33,
  MR_Word STATE_VARIABLE_IrInfo_0_34,
  MR_Word * STATE_VARIABLE_IrInfo_35)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 0)));
    MR_Word PredInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 2)));
    MR_Word ProcInfo_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 3)));
    MR_Word SharingTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 4)));
    MR_Word GoalExpr0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_32, (MR_Integer) 0)));
    MR_Word GoalInfo0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_32, (MR_Integer) 1)));
    MR_Word CalleePredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 0)));
    MR_Integer CalleeProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 1)));
    MR_Word CalleeArgs_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 2)));
    MR_Word Reuse0_21;
    MR_Word OldSharing_30;
    MR_Word NewSharing_31;
    MR_Word STATE_VARIABLE_IrInfo_39_39;
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 1)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 5)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 6)));
    MR_Integer Var_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 7)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 8)));
    MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 9)));
    MR_Word _Builtin_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 3)));
    MR_Word _Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 4)));
    MR_Word _Sym_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr0_13, (MR_Integer) 5)));
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;

    Reuse0_21 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(GoalInfo0_14);
    switch (MR_tag((MR_Word) Reuse0_21)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Reuse0_21)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer MaxConditions_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 7)));
              MR_Word CondReuseHandling_140;
              MR_Word GoalInfo_142;
              MR_Word Var_145;
              MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 0)));
              MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 1)));
              MR_Word Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 2)));
              MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 3)));
              MR_Word Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 4)));
              MR_Word Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 5)));
              MR_Word Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 6)));
              MR_Word Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 8)));
              MR_Word Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 9)));
              MR_Integer Var_120;
              MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
              MR_Word Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
              MR_Word Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
              MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
              MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
              MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
              MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
              MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));

              Var_120 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(Var_121);
              succeeded = (Var_120 >= MaxConditions_139);
              if (succeeded)
                CondReuseHandling_140 = (MR_Integer) 1;
              else
                CondReuseHandling_140 = (MR_Integer) 0;
              {
                Var_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_145, 0) = ((MR_Box) (CalleePredId_15));
                MR_hl_field(MR_mktag(0), Var_145, 1) = ((MR_Box) (CalleeProcId_16));
              }
              transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(BaseInfo_6, Var_145, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), CalleeArgs_17, CondReuseHandling_140, GoalInfo0_14, &GoalInfo_142, STATE_VARIABLE_IrInfo_0_34, &STATE_VARIABLE_IrInfo_39_39);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Goal_33 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_13));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_142));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Goal_33 = STATE_VARIABLE_Goal_0_32;
              STATE_VARIABLE_IrInfo_39_39 = STATE_VARIABLE_IrInfo_0_34;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
        {
          MR_Integer MaxConditions_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 7)));
          MR_Word CondReuseHandling_27;
          MR_Word GoalInfo_29;
          MR_Word Var_38;
          MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 0)));
          MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 1)));
          MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 2)));
          MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 3)));
          MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 4)));
          MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 5)));
          MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 6)));
          MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 8)));
          MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 9)));
          MR_Integer Var_36;
          MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 1)));
          MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 0)));
          MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 2)));
          MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 3)));
          MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 4)));
          MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 5)));
          MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 6)));
          MR_Word Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_34, (MR_Integer) 7)));

          Var_36 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_count_conditions_1_f_0(Var_37);
          succeeded = (Var_36 >= MaxConditions_26);
          if (succeeded)
            CondReuseHandling_27 = (MR_Integer) 1;
          else
            CondReuseHandling_27 = (MR_Integer) 0;
          {
            Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (CalleePredId_15));
            MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (CalleeProcId_16));
          }
          transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(BaseInfo_6, Var_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), CalleeArgs_17, CondReuseHandling_27, GoalInfo0_14, &GoalInfo_29, STATE_VARIABLE_IrInfo_0_34, &STATE_VARIABLE_IrInfo_39_39);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_Goal_33 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_13));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_29));
          }
        }
        break;
    }
    OldSharing_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 0)));
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 1)));
    Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 2)));
    Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 3)));
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 4)));
    Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 5)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 6)));
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_39_39, (MR_Integer) 7)));
    transform_hlds__ctgc__structure_sharing__domain__lookup_sharing_and_comb_9_p_0(ModuleInfo_9, PredInfo_10, ProcInfo_11, SharingTable_12, CalleePredId_15, CalleeProcId_16, CalleeArgs_17, OldSharing_30, &NewSharing_31);
    transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(BaseInfo_6, OldSharing_30, NewSharing_31, STATE_VARIABLE_IrInfo_39_39, STATE_VARIABLE_IrInfo_35);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_9_p_0(
  MR_Word tscc_proc_1_input_1_BaseInfo_10,
  MR_Word tscc_proc_1_input_2_CalleePPId_11,
  MR_Word tscc_proc_1_input_3_NoClobbers_12,
  MR_Word tscc_proc_1_input_4_CalleeArgs_13,
  MR_Word tscc_proc_1_input_5_CondReuseHandling_14,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_GoalInfo_22,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IrInfo_24)
{
  {
    MR_Word tscc_proc_2_input_1_BaseInfo_10;
    MR_Word tscc_proc_2_input_2_CalleePPId_11;
    MR_Word tscc_proc_2_input_3_NoClobbers_12;
    MR_Word tscc_proc_2_input_4_CalleeArgs_13;
    MR_Word tscc_proc_2_input_5_FormalReuseAs_14;
    MR_Word tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25;
    MR_Word tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27;
    MR_Word tscc_output_1_STATE_VARIABLE_GoalInfo_22;
    MR_Word tscc_output_2_STATE_VARIABLE_IrInfo_24;

    // The code for TSCC PROC 1: pred transform_hlds.ctgc.structure_reuse.indirect.verify_indirect_reuse/9-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred transform_hlds.ctgc.structure_reuse.indirect.verify_indirect_reuse/9-0
    // proc 2 in TSCC: pred transform_hlds.ctgc.structure_reuse.indirect.verify_indirect_reuse_conditional/9-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word BaseInfo_10 = tscc_proc_1_input_1_BaseInfo_10;
      MR_Word CalleePPId_11 = tscc_proc_1_input_2_CalleePPId_11;
      MR_Word NoClobbers_12 = tscc_proc_1_input_3_NoClobbers_12;
      MR_Word CalleeArgs_13 = tscc_proc_1_input_4_CalleeArgs_13;
      MR_Word CondReuseHandling_14 = tscc_proc_1_input_5_CondReuseHandling_14;
      MR_Word STATE_VARIABLE_GoalInfo_0_21 = tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21;
      MR_Word STATE_VARIABLE_GoalInfo_22;
      MR_Word STATE_VARIABLE_IrInfo_0_23 = tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23;
      MR_Word STATE_VARIABLE_IrInfo_24;
      MR_bool succeeded;
      MR_Word FormalReuseAs_17;
      MR_Word STATE_VARIABLE_IrInfo_25_25;
      MR_Word PPId_76;
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 5)));
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 0)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 1)));
      MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 2)));
      MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 3)));
      MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 4)));
      MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 6)));
      MR_Integer Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 7)));
      MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 8)));
      MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 9)));

      succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(Var_77, CalleePPId_11, NoClobbers_12, &PPId_76);
      if (succeeded)
        transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(BaseInfo_10, CalleePPId_11, PPId_76, NoClobbers_12, STATE_VARIABLE_IrInfo_0_23, &STATE_VARIABLE_IrInfo_25_25, &FormalReuseAs_17);
      else
      {
        succeeded = (NoClobbers_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(BaseInfo_10, CalleePPId_11, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_IrInfo_0_23, &STATE_VARIABLE_IrInfo_25_25, &FormalReuseAs_17);
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.lookup_reuse_as\'/6", (MR_String) "conditions failed");
            return;
          }
        }
      }
      succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(FormalReuseAs_17);
      if (succeeded)
      {
        transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        STATE_VARIABLE_IrInfo_24 = STATE_VARIABLE_IrInfo_25_25;
        STATE_VARIABLE_GoalInfo_22 = STATE_VARIABLE_GoalInfo_0_21;
      }
      else
      {
        succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(FormalReuseAs_17);
        if (succeeded)
        {
          MR_Word NewReuseAs_20;
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
          MR_Word Var_30;
          MR_Word Var_32;
          MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
          MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
          MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
          MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
          MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
          MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
          MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
          MR_Word Var_54;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_55;

          transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(Var_28, &NewReuseAs_20);
          Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
          Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
          Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
          Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
          Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
          {
            STATE_VARIABLE_IrInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 1) = ((MR_Box) (NewReuseAs_20));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 2) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 3) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 4) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 5) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 6) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 7) = ((MR_Box) (Var_61));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Var_32, 1) = ((MR_Box) (NoClobbers_12));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (Var_32));
          }
          hlds__hlds_goal__goal_info_set_reuse_3_p_0(Var_30, STATE_VARIABLE_GoalInfo_0_21, &STATE_VARIABLE_GoalInfo_22);
          transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
        }
        else
          switch (CondReuseHandling_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
                MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
                MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
                MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
                MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
                MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
                MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
                MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));

                succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(Var_39);
                if (succeeded)
                {
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_GoalInfo_0_21, &STATE_VARIABLE_GoalInfo_22);
                  transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                  STATE_VARIABLE_IrInfo_24 = STATE_VARIABLE_IrInfo_25_25;
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_2_input_1_BaseInfo_10 = BaseInfo_10;
                  MR_Word next_value_of_tscc_proc_2_input_2_CalleePPId_11 = CalleePPId_11;
                  MR_Word next_value_of_tscc_proc_2_input_3_NoClobbers_12 = NoClobbers_12;
                  MR_Word next_value_of_tscc_proc_2_input_4_CalleeArgs_13 = CalleeArgs_13;
                  MR_Word next_value_of_tscc_proc_2_input_5_FormalReuseAs_14 = FormalReuseAs_17;
                  MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25 = STATE_VARIABLE_GoalInfo_0_21;
                  MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27 = STATE_VARIABLE_IrInfo_25_25;

                  // direct tailcall eliminated
                  tscc_proc_2_input_1_BaseInfo_10 = next_value_of_tscc_proc_2_input_1_BaseInfo_10;
                  tscc_proc_2_input_2_CalleePPId_11 = next_value_of_tscc_proc_2_input_2_CalleePPId_11;
                  tscc_proc_2_input_3_NoClobbers_12 = next_value_of_tscc_proc_2_input_3_NoClobbers_12;
                  tscc_proc_2_input_4_CalleeArgs_13 = next_value_of_tscc_proc_2_input_4_CalleeArgs_13;
                  tscc_proc_2_input_5_FormalReuseAs_14 = next_value_of_tscc_proc_2_input_5_FormalReuseAs_14;
                  tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25;
                  tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27;
                  goto top_of_proc_2;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_GoalInfo_0_21, &STATE_VARIABLE_GoalInfo_22);
                STATE_VARIABLE_IrInfo_24 = STATE_VARIABLE_IrInfo_25_25;
              }
              break;
          }
      }
      tscc_output_1_STATE_VARIABLE_GoalInfo_22 = STATE_VARIABLE_GoalInfo_22;
      tscc_output_2_STATE_VARIABLE_IrInfo_24 = STATE_VARIABLE_IrInfo_24;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word BaseInfo_10 = tscc_proc_2_input_1_BaseInfo_10;
      MR_Word CalleePPId_11 = tscc_proc_2_input_2_CalleePPId_11;
      MR_Word NoClobbers_12 = tscc_proc_2_input_3_NoClobbers_12;
      MR_Word CalleeArgs_13 = tscc_proc_2_input_4_CalleeArgs_13;
      MR_Word FormalReuseAs_14 = tscc_proc_2_input_5_FormalReuseAs_14;
      MR_Word STATE_VARIABLE_GoalInfo_0_25 = tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25;
      MR_Word STATE_VARIABLE_GoalInfo_26;
      MR_Word STATE_VARIABLE_IrInfo_0_27 = tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27;
      MR_Word STATE_VARIABLE_IrInfo_28;
      MR_bool succeeded;
      MR_Word NewAndRenamedReuseAs_17;
      MR_Word NotDeadVars_18;

      transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0(BaseInfo_10, STATE_VARIABLE_IrInfo_0_27, STATE_VARIABLE_GoalInfo_0_25, CalleePPId_11, CalleeArgs_13, FormalReuseAs_14, &NewAndRenamedReuseAs_17, &NotDeadVars_18);
      succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(NewAndRenamedReuseAs_17);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_130_130;
        MR_Word NotDeadArgNums0_19;
        MR_Word NotDeadArgNums_20;
        MR_Word Var_30;

        transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(NotDeadVars_18, CalleeArgs_13, (MR_Integer) 1, &NotDeadArgNums0_19);
        TypeCtorInfo_130_130 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        Var_30 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_130_130, NotDeadArgNums0_19, NoClobbers_12);
        NotDeadArgNums_20 = mercury__list__sort_and_remove_dups_1_f_0(TypeCtorInfo_130_130, Var_30);
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4], ((MR_Box) (NotDeadArgNums_20)), ((MR_Box) (NoClobbers_12)));
        if (succeeded)
        {
          MR_Word Var_34;

          hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_GoalInfo_0_25, &STATE_VARIABLE_GoalInfo_26);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (NotDeadVars_18));
          }
          transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_26, Var_34);
          STATE_VARIABLE_IrInfo_28 = STATE_VARIABLE_IrInfo_0_27;
        }
        else
        {
          MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 5)));
          MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 0)));
          MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 1)));
          MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 2)));
          MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 3)));
          MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 4)));
          MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 6)));
          MR_Integer Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 7)));
          MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 8)));
          MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 9)));
          MR_Word _ReusePPId_22;

          succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(Var_36, CalleePPId_11, NotDeadArgNums_20, &_ReusePPId_22);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_BaseInfo_10 = BaseInfo_10;
            MR_Word next_value_of_tscc_proc_1_input_2_CalleePPId_11 = CalleePPId_11;
            MR_Word next_value_of_tscc_proc_1_input_3_NoClobbers_12 = NotDeadArgNums_20;
            MR_Word next_value_of_tscc_proc_1_input_4_CalleeArgs_13 = CalleeArgs_13;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21 = STATE_VARIABLE_GoalInfo_0_25;
            MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23 = STATE_VARIABLE_IrInfo_0_27;

            // direct tailcall eliminated
            tscc_proc_1_input_1_BaseInfo_10 = next_value_of_tscc_proc_1_input_1_BaseInfo_10;
            tscc_proc_1_input_2_CalleePPId_11 = next_value_of_tscc_proc_1_input_2_CalleePPId_11;
            tscc_proc_1_input_3_NoClobbers_12 = next_value_of_tscc_proc_1_input_3_NoClobbers_12;
            tscc_proc_1_input_4_CalleeArgs_13 = next_value_of_tscc_proc_1_input_4_CalleeArgs_13;
            tscc_proc_1_input_5_CondReuseHandling_14 = (MR_Integer) 0;
            tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21;
            tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23;
            goto top_of_proc_1;
          }
          else
          {
            MR_Word IntraModule_23;
            MR_Word Var_46;

            transform_hlds__ctgc__structure_reuse__indirect__add_request_6_p_0(BaseInfo_10, CalleePPId_11, NotDeadArgNums_20, &IntraModule_23, STATE_VARIABLE_IrInfo_0_27, &STATE_VARIABLE_IrInfo_28);
            switch (IntraModule_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_GoalInfo_0_25, &STATE_VARIABLE_GoalInfo_26);
                }
                break;
              case (MR_Integer) 1:
                {
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_GoalInfo_0_25, &STATE_VARIABLE_GoalInfo_26);
                }
                break;
            }
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (NotDeadVars_18));
            }
            transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_26, Var_46);
          }
        }
      }
      else
      {
        succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(NewAndRenamedReuseAs_17);
        if (succeeded)
        {
          MR_Word NewReuseAs_24;
          MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
          MR_Word Var_50;
          MR_Word Var_52;
          MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
          MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
          MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
          MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
          MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
          MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
          MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
          MR_Word Var_89;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_90;

          transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(Var_48, &NewReuseAs_24);
          Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
          Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
          Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
          Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
          Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
          Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
          Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
          Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
          {
            STATE_VARIABLE_IrInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 0) = ((MR_Box) (Var_89));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 1) = ((MR_Box) (NewReuseAs_24));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 2) = ((MR_Box) (Var_91));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 3) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 4) = ((MR_Box) (Var_93));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 5) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 6) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 7) = ((MR_Box) (Var_96));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Var_52, 1) = ((MR_Box) (NoClobbers_12));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (Var_52));
          }
          hlds__hlds_goal__goal_info_set_reuse_3_p_0(Var_50, STATE_VARIABLE_GoalInfo_0_25, &STATE_VARIABLE_GoalInfo_26);
          transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
        }
        else
        {
          succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(NewAndRenamedReuseAs_17);
          if (succeeded)
          {
            MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 0)));
            MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
            MR_Word Var_61;
            MR_Word Var_63;
            MR_Word NewReuseAs_71;
            MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 3)));
            MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 1)));
            MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 2)));
            MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 4)));
            MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 5)));
            MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 6)));
            MR_Integer Var_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 7)));
            MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 8)));
            MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 9)));
            MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
            MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
            MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
            MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
            MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
            MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
            MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
            MR_Word Var_122;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_127;
            MR_Word Var_128;
            MR_Word Var_129;
            MR_Word Var_123;

            transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(Var_57, Var_99, Var_59, NewAndRenamedReuseAs_17, &NewReuseAs_71);
            Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
            Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
            Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
            Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
            Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
            Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
            Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
            Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
            {
              STATE_VARIABLE_IrInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 0) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 1) = ((MR_Box) (NewReuseAs_71));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 2) = ((MR_Box) (Var_124));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 3) = ((MR_Box) (Var_125));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 4) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 5) = ((MR_Box) (Var_127));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 6) = ((MR_Box) (Var_128));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 7) = ((MR_Box) (Var_129));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_63, 1) = ((MR_Box) (NoClobbers_12));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (Var_63));
            }
            hlds__hlds_goal__goal_info_set_reuse_3_p_0(Var_61, STATE_VARIABLE_GoalInfo_0_25, &STATE_VARIABLE_GoalInfo_26);
            transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.verify_indirect_reuse_conditional\'/9", (MR_String) "unknown NewReuseAs");
              return;
            }
          }
        }
      }
      tscc_output_1_STATE_VARIABLE_GoalInfo_22 = STATE_VARIABLE_GoalInfo_26;
      tscc_output_2_STATE_VARIABLE_IrInfo_24 = STATE_VARIABLE_IrInfo_28;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_GoalInfo_22 = tscc_output_1_STATE_VARIABLE_GoalInfo_22;
    *tscc_output_ptr_2_STATE_VARIABLE_IrInfo_24 = tscc_output_2_STATE_VARIABLE_IrInfo_24;
    return;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_conditional_9_p_0(
  MR_Word tscc_proc_2_input_1_BaseInfo_10,
  MR_Word tscc_proc_2_input_2_CalleePPId_11,
  MR_Word tscc_proc_2_input_3_NoClobbers_12,
  MR_Word tscc_proc_2_input_4_CalleeArgs_13,
  MR_Word tscc_proc_2_input_5_FormalReuseAs_14,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_GoalInfo_22,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_IrInfo_24)
{
  {
    MR_Word tscc_proc_1_input_1_BaseInfo_10;
    MR_Word tscc_proc_1_input_2_CalleePPId_11;
    MR_Word tscc_proc_1_input_3_NoClobbers_12;
    MR_Word tscc_proc_1_input_4_CalleeArgs_13;
    MR_Word tscc_proc_1_input_5_CondReuseHandling_14;
    MR_Word tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21;
    MR_Word tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23;
    MR_Word tscc_output_1_STATE_VARIABLE_GoalInfo_22;
    MR_Word tscc_output_2_STATE_VARIABLE_IrInfo_24;

    // The code for TSCC PROC 2: pred transform_hlds.ctgc.structure_reuse.indirect.verify_indirect_reuse_conditional/9-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred transform_hlds.ctgc.structure_reuse.indirect.verify_indirect_reuse/9-0
    // proc 2 in TSCC: pred transform_hlds.ctgc.structure_reuse.indirect.verify_indirect_reuse_conditional/9-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word BaseInfo_10 = tscc_proc_1_input_1_BaseInfo_10;
      MR_Word CalleePPId_11 = tscc_proc_1_input_2_CalleePPId_11;
      MR_Word NoClobbers_12 = tscc_proc_1_input_3_NoClobbers_12;
      MR_Word CalleeArgs_13 = tscc_proc_1_input_4_CalleeArgs_13;
      MR_Word CondReuseHandling_14 = tscc_proc_1_input_5_CondReuseHandling_14;
      MR_Word STATE_VARIABLE_GoalInfo_0_21 = tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21;
      MR_Word STATE_VARIABLE_GoalInfo_22;
      MR_Word STATE_VARIABLE_IrInfo_0_23 = tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23;
      MR_Word STATE_VARIABLE_IrInfo_24;
      MR_bool succeeded;
      MR_Word FormalReuseAs_17;
      MR_Word STATE_VARIABLE_IrInfo_25_25;
      MR_Word PPId_76;
      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 5)));
      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 0)));
      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 1)));
      MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 2)));
      MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 3)));
      MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 4)));
      MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 6)));
      MR_Integer Var_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 7)));
      MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 8)));
      MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 9)));

      succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(Var_77, CalleePPId_11, NoClobbers_12, &PPId_76);
      if (succeeded)
        transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(BaseInfo_10, CalleePPId_11, PPId_76, NoClobbers_12, STATE_VARIABLE_IrInfo_0_23, &STATE_VARIABLE_IrInfo_25_25, &FormalReuseAs_17);
      else
      {
        succeeded = (NoClobbers_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(BaseInfo_10, CalleePPId_11, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_IrInfo_0_23, &STATE_VARIABLE_IrInfo_25_25, &FormalReuseAs_17);
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.lookup_reuse_as\'/6", (MR_String) "conditions failed");
            return;
          }
        }
      }
      succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(FormalReuseAs_17);
      if (succeeded)
      {
        transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_0_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
        STATE_VARIABLE_IrInfo_24 = STATE_VARIABLE_IrInfo_25_25;
        STATE_VARIABLE_GoalInfo_22 = STATE_VARIABLE_GoalInfo_0_21;
      }
      else
      {
        succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(FormalReuseAs_17);
        if (succeeded)
        {
          MR_Word NewReuseAs_20;
          MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
          MR_Word Var_30;
          MR_Word Var_32;
          MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
          MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
          MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
          MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
          MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
          MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
          MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
          MR_Word Var_54;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_55;

          transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(Var_28, &NewReuseAs_20);
          Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
          Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
          Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
          Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
          Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
          {
            STATE_VARIABLE_IrInfo_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 1) = ((MR_Box) (NewReuseAs_20));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 2) = ((MR_Box) (Var_56));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 3) = ((MR_Box) (Var_57));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 4) = ((MR_Box) (Var_58));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 5) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 6) = ((MR_Box) (Var_60));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_24, 7) = ((MR_Box) (Var_61));
          }
          {
            Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Var_32, 1) = ((MR_Box) (NoClobbers_12));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (Var_32));
          }
          hlds__hlds_goal__goal_info_set_reuse_3_p_0(Var_30, STATE_VARIABLE_GoalInfo_0_21, &STATE_VARIABLE_GoalInfo_22);
          transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
        }
        else
          switch (CondReuseHandling_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
                MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
                MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
                MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
                MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
                MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
                MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
                MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));

                succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(Var_39);
                if (succeeded)
                {
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_GoalInfo_0_21, &STATE_VARIABLE_GoalInfo_22);
                  transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                  STATE_VARIABLE_IrInfo_24 = STATE_VARIABLE_IrInfo_25_25;
                }
                else
                {
                  MR_Word next_value_of_tscc_proc_2_input_1_BaseInfo_10 = BaseInfo_10;
                  MR_Word next_value_of_tscc_proc_2_input_2_CalleePPId_11 = CalleePPId_11;
                  MR_Word next_value_of_tscc_proc_2_input_3_NoClobbers_12 = NoClobbers_12;
                  MR_Word next_value_of_tscc_proc_2_input_4_CalleeArgs_13 = CalleeArgs_13;
                  MR_Word next_value_of_tscc_proc_2_input_5_FormalReuseAs_14 = FormalReuseAs_17;
                  MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25 = STATE_VARIABLE_GoalInfo_0_21;
                  MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27 = STATE_VARIABLE_IrInfo_25_25;

                  // direct tailcall eliminated
                  tscc_proc_2_input_1_BaseInfo_10 = next_value_of_tscc_proc_2_input_1_BaseInfo_10;
                  tscc_proc_2_input_2_CalleePPId_11 = next_value_of_tscc_proc_2_input_2_CalleePPId_11;
                  tscc_proc_2_input_3_NoClobbers_12 = next_value_of_tscc_proc_2_input_3_NoClobbers_12;
                  tscc_proc_2_input_4_CalleeArgs_13 = next_value_of_tscc_proc_2_input_4_CalleeArgs_13;
                  tscc_proc_2_input_5_FormalReuseAs_14 = next_value_of_tscc_proc_2_input_5_FormalReuseAs_14;
                  tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25;
                  tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27;
                  goto top_of_proc_2;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_GoalInfo_0_21, &STATE_VARIABLE_GoalInfo_22);
                STATE_VARIABLE_IrInfo_24 = STATE_VARIABLE_IrInfo_25_25;
              }
              break;
          }
      }
      tscc_output_1_STATE_VARIABLE_GoalInfo_22 = STATE_VARIABLE_GoalInfo_22;
      tscc_output_2_STATE_VARIABLE_IrInfo_24 = STATE_VARIABLE_IrInfo_24;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word BaseInfo_10 = tscc_proc_2_input_1_BaseInfo_10;
      MR_Word CalleePPId_11 = tscc_proc_2_input_2_CalleePPId_11;
      MR_Word NoClobbers_12 = tscc_proc_2_input_3_NoClobbers_12;
      MR_Word CalleeArgs_13 = tscc_proc_2_input_4_CalleeArgs_13;
      MR_Word FormalReuseAs_14 = tscc_proc_2_input_5_FormalReuseAs_14;
      MR_Word STATE_VARIABLE_GoalInfo_0_25 = tscc_proc_2_input_6_STATE_VARIABLE_GoalInfo_0_25;
      MR_Word STATE_VARIABLE_GoalInfo_26;
      MR_Word STATE_VARIABLE_IrInfo_0_27 = tscc_proc_2_input_7_STATE_VARIABLE_IrInfo_0_27;
      MR_Word STATE_VARIABLE_IrInfo_28;
      MR_bool succeeded;
      MR_Word NewAndRenamedReuseAs_17;
      MR_Word NotDeadVars_18;

      transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0(BaseInfo_10, STATE_VARIABLE_IrInfo_0_27, STATE_VARIABLE_GoalInfo_0_25, CalleePPId_11, CalleeArgs_13, FormalReuseAs_14, &NewAndRenamedReuseAs_17, &NotDeadVars_18);
      succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_no_reuses_1_p_0(NewAndRenamedReuseAs_17);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_130_130;
        MR_Word NotDeadArgNums0_19;
        MR_Word NotDeadArgNums_20;
        MR_Word Var_30;

        transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(NotDeadVars_18, CalleeArgs_13, (MR_Integer) 1, &NotDeadArgNums0_19);
        TypeCtorInfo_130_130 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        Var_30 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_130_130, NotDeadArgNums0_19, NoClobbers_12);
        NotDeadArgNums_20 = mercury__list__sort_and_remove_dups_1_f_0(TypeCtorInfo_130_130, Var_30);
        succeeded = mercury__builtin__unify_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4], ((MR_Box) (NotDeadArgNums_20)), ((MR_Box) (NoClobbers_12)));
        if (succeeded)
        {
          MR_Word Var_34;

          hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_GoalInfo_0_25, &STATE_VARIABLE_GoalInfo_26);
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (NotDeadVars_18));
          }
          transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_26, Var_34);
          STATE_VARIABLE_IrInfo_28 = STATE_VARIABLE_IrInfo_0_27;
        }
        else
        {
          MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 5)));
          MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 0)));
          MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 1)));
          MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 2)));
          MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 3)));
          MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 4)));
          MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 6)));
          MR_Integer Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 7)));
          MR_Word Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 8)));
          MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 9)));
          MR_Word _ReusePPId_22;

          succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_reuse_version_proc_4_p_0(Var_36, CalleePPId_11, NotDeadArgNums_20, &_ReusePPId_22);
          if (succeeded)
          {
            MR_Word next_value_of_tscc_proc_1_input_1_BaseInfo_10 = BaseInfo_10;
            MR_Word next_value_of_tscc_proc_1_input_2_CalleePPId_11 = CalleePPId_11;
            MR_Word next_value_of_tscc_proc_1_input_3_NoClobbers_12 = NotDeadArgNums_20;
            MR_Word next_value_of_tscc_proc_1_input_4_CalleeArgs_13 = CalleeArgs_13;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21 = STATE_VARIABLE_GoalInfo_0_25;
            MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23 = STATE_VARIABLE_IrInfo_0_27;

            // direct tailcall eliminated
            tscc_proc_1_input_1_BaseInfo_10 = next_value_of_tscc_proc_1_input_1_BaseInfo_10;
            tscc_proc_1_input_2_CalleePPId_11 = next_value_of_tscc_proc_1_input_2_CalleePPId_11;
            tscc_proc_1_input_3_NoClobbers_12 = next_value_of_tscc_proc_1_input_3_NoClobbers_12;
            tscc_proc_1_input_4_CalleeArgs_13 = next_value_of_tscc_proc_1_input_4_CalleeArgs_13;
            tscc_proc_1_input_5_CondReuseHandling_14 = (MR_Integer) 0;
            tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_GoalInfo_0_21;
            tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_IrInfo_0_23;
            goto top_of_proc_1;
          }
          else
          {
            MR_Word IntraModule_23;
            MR_Word Var_46;

            transform_hlds__ctgc__structure_reuse__indirect__add_request_6_p_0(BaseInfo_10, CalleePPId_11, NotDeadArgNums_20, &IntraModule_23, STATE_VARIABLE_IrInfo_0_27, &STATE_VARIABLE_IrInfo_28);
            switch (IntraModule_23) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), STATE_VARIABLE_GoalInfo_0_25, &STATE_VARIABLE_GoalInfo_26);
                }
                break;
              case (MR_Integer) 1:
                {
                  hlds__hlds_goal__goal_info_set_reuse_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_GoalInfo_0_25, &STATE_VARIABLE_GoalInfo_26);
                }
                break;
            }
            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (NotDeadVars_18));
            }
            transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_26, Var_46);
          }
        }
      }
      else
      {
        succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_all_unconditional_reuses_1_p_0(NewAndRenamedReuseAs_17);
        if (succeeded)
        {
          MR_Word NewReuseAs_24;
          MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
          MR_Word Var_50;
          MR_Word Var_52;
          MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
          MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
          MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
          MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
          MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
          MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
          MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
          MR_Word Var_89;
          MR_Word Var_91;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_90;

          transform_hlds__ctgc__structure_reuse__domain__reuse_as_add_unconditional_2_p_0(Var_48, &NewReuseAs_24);
          Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
          Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
          Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
          Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
          Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
          Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
          Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
          Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
          {
            STATE_VARIABLE_IrInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 0) = ((MR_Box) (Var_89));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 1) = ((MR_Box) (NewReuseAs_24));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 2) = ((MR_Box) (Var_91));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 3) = ((MR_Box) (Var_92));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 4) = ((MR_Box) (Var_93));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 5) = ((MR_Box) (Var_94));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 6) = ((MR_Box) (Var_95));
            MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 7) = ((MR_Box) (Var_96));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_52, 0) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(2), Var_52, 1) = ((MR_Box) (NoClobbers_12));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_50, 0) = ((MR_Box) (Var_52));
          }
          hlds__hlds_goal__goal_info_set_reuse_3_p_0(Var_50, STATE_VARIABLE_GoalInfo_0_25, &STATE_VARIABLE_GoalInfo_26);
          transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
        }
        else
        {
          succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_conditional_reuses_1_p_0(NewAndRenamedReuseAs_17);
          if (succeeded)
          {
            MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 0)));
            MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
            MR_Word Var_61;
            MR_Word Var_63;
            MR_Word NewReuseAs_71;
            MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 3)));
            MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 1)));
            MR_Word Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 2)));
            MR_Word Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 4)));
            MR_Word Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 5)));
            MR_Word Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 6)));
            MR_Integer Var_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 7)));
            MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 8)));
            MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_10, (MR_Integer) 9)));
            MR_Word Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
            MR_Word Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
            MR_Word Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
            MR_Word Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
            MR_Word Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
            MR_Word Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
            MR_Word Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
            MR_Word Var_122;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_126;
            MR_Word Var_127;
            MR_Word Var_128;
            MR_Word Var_129;
            MR_Word Var_123;

            transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_5_p_0(Var_57, Var_99, Var_59, NewAndRenamedReuseAs_17, &NewReuseAs_71);
            Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 0)));
            Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 1)));
            Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 2)));
            Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 3)));
            Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 4)));
            Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 5)));
            Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 6)));
            Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_27, (MR_Integer) 7)));
            {
              STATE_VARIABLE_IrInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 0) = ((MR_Box) (Var_122));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 1) = ((MR_Box) (NewReuseAs_71));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 2) = ((MR_Box) (Var_124));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 3) = ((MR_Box) (Var_125));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 4) = ((MR_Box) (Var_126));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 5) = ((MR_Box) (Var_127));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 6) = ((MR_Box) (Var_128));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_28, 7) = ((MR_Box) (Var_129));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_63, 0) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(2), Var_63, 1) = ((MR_Box) (NoClobbers_12));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_61, 0) = ((MR_Box) (Var_63));
            }
            hlds__hlds_goal__goal_info_set_reuse_3_p_0(Var_61, STATE_VARIABLE_GoalInfo_0_25, &STATE_VARIABLE_GoalInfo_26);
            transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(BaseInfo_10, CalleePPId_11, NoClobbers_12, STATE_VARIABLE_GoalInfo_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
          }
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.ctgc.structure_reuse.indirect", (MR_String) "predicate \140transform_hlds.ctgc.structure_reuse.indirect.verify_indirect_reuse_conditional\'/9", (MR_String) "unknown NewReuseAs");
              return;
            }
          }
        }
      }
      tscc_output_1_STATE_VARIABLE_GoalInfo_22 = STATE_VARIABLE_GoalInfo_26;
      tscc_output_2_STATE_VARIABLE_IrInfo_24 = STATE_VARIABLE_IrInfo_28;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_GoalInfo_22 = tscc_output_1_STATE_VARIABLE_GoalInfo_22;
    *tscc_output_ptr_2_STATE_VARIABLE_IrInfo_24 = tscc_output_2_STATE_VARIABLE_IrInfo_24;
    return;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__lookup_reuse_as_2_7_p_0(
  MR_Word BaseInfo_8,
  MR_Word OrigPPId_9,
  MR_Word PPId_10,
  MR_Word NoClobbers_11,
  MR_Word STATE_VARIABLE_IrInfo_0_22,
  MR_Word * STATE_VARIABLE_IrInfo_23,
  MR_Word * ReuseAs_13)
{
  {
    MR_bool succeeded;
    MR_Word ReuseAs_Status_16;
    MR_Word Status_17;
    MR_Word CalleePredId_18;
    MR_Word CalleePredInfo_20;
    MR_Word STATE_VARIABLE_IrInfo_25_25;
    MR_Word STATE_VARIABLE_IrInfo_27_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word ReuseAs_Status0_14;
    MR_Word NewFixpointTable_15;
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 4)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 0)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 1)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 2)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 3)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 5)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 6)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 7)));
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_67;
    MR_Integer Var_19;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Integer Var_79;
    MR_Word Var_80;
    MR_Word Var_81;

    succeeded = transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_p_0(PPId_10, &ReuseAs_Status0_14, Var_24, &NewFixpointTable_15);
    if (succeeded)
    {
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_45;

      ReuseAs_Status_16 = ReuseAs_Status0_14;
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 0)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 1)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 2)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 3)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 4)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 5)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 6)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_22, (MR_Integer) 7)));
      {
        STATE_VARIABLE_IrInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, 1) = ((MR_Box) (Var_42));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, 2) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, 3) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, 4) = ((MR_Box) (NewFixpointTable_15));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, 5) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, 6) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, 7) = ((MR_Box) (Var_48));
      }
    }
    else
    {
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 5)));
      MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 0)));
      MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 1)));
      MR_Word Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 2)));
      MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 3)));
      MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 4)));
      MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 6)));
      MR_Integer Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 7)));
      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 8)));
      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 9)));

      ReuseAs_Status_16 = transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(Var_26, PPId_10);
      STATE_VARIABLE_IrInfo_25_25 = STATE_VARIABLE_IrInfo_0_22;
    }
    *ReuseAs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReuseAs_Status_16, (MR_Integer) 0)));
    Status_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReuseAs_Status_16, (MR_Integer) 1)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
    Var_28 = analysis__lub_2_f_0(Status_17, Var_29);
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 0)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 1)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 2)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 3)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 4)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 5)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 6)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_25_25, (MR_Integer) 7)));
    {
      STATE_VARIABLE_IrInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, 1) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, 2) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, 3) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, 4) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, 5) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, 6) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, 7) = ((MR_Box) (Var_72));
    }
    CalleePredId_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrigPPId_9, (MR_Integer) 0)));
    Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), OrigPPId_9, (MR_Integer) 1)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 0)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 1)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 2)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 3)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 4)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 5)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 6)));
    Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 7)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 8)));
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 9)));
    hlds__hlds_module__module_info_pred_info_3_p_0(Var_30, CalleePredId_18, &CalleePredInfo_20);
    succeeded = hlds__hlds_pred__pred_info_is_imported_not_external_1_p_0(CalleePredInfo_20);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__is_unify_or_compare_pred_1_p_0(CalleePredInfo_20);
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word Dep_21;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_86;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_95;
      MR_Word Var_96;
      MR_Word Var_94;

      {
        Dep_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Dep_21, 0) = ((MR_Box) (OrigPPId_9));
        MR_hl_field(MR_mktag(0), Dep_21, 1) = ((MR_Box) (NoClobbers_11));
      }
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 0)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 1)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 2)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 3)));
      Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 4)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 5)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 6)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 7)));
      Var_32 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, Var_33, ((MR_Box) (Dep_21)));
      Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 0)));
      Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 1)));
      Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 2)));
      Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 3)));
      Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 4)));
      Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 5)));
      Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 6)));
      Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_27_27, (MR_Integer) 7)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_IrInfo_23 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_89));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_90));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_91));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_92));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_93));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_95));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_96));
      }
    }
    else
      *STATE_VARIABLE_IrInfo_23 = STATE_VARIABLE_IrInfo_27_27;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(
  MR_Word ReuseTable_4,
  MR_Word PPId_5)
{
  {
    MR_bool succeeded;
    MR_Word ReuseAs_6;
    MR_Word ReuseAs0_7;

    succeeded = transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_search_3_p_0(ReuseTable_4, PPId_5, &ReuseAs0_7);
    if (succeeded)
      ReuseAs_6 = ReuseAs0_7;
    else
    {
      MR_Word Var_8;

      Var_8 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
      {
        ReuseAs_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ReuseAs_6, 0) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(0), ReuseAs_6, 1) = ((MR_Box) ((MR_Integer) 2));
      }
    }
    return ReuseAs_6;
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__sr_fixpoint_table_get_as_4_p_0(
  MR_Word PPId_5,
  MR_Word * ReuseAs_6,
  MR_Word STATE_VARIABLE_Table_0_8,
  MR_Word * STATE_VARIABLE_Table_9)
{
  {
    MR_bool succeeded;
    MR_Box conv0_ReuseAs_6;

    succeeded = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (PPId_5)), &conv0_ReuseAs_6, STATE_VARIABLE_Table_0_8, STATE_VARIABLE_Table_9);
    if (succeeded)
    {
      *ReuseAs_6 = ((MR_Word) conv0_ReuseAs_6);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__add_request_6_p_0(
  MR_Word BaseInfo_7,
  MR_Word CalleePPId_8,
  MR_Word NotDeadArgNums_9,
  MR_Word * IntraModule_10,
  MR_Word STATE_VARIABLE_IrInfo_0_20,
  MR_Word * STATE_VARIABLE_IrInfo_21)
{
  {
    MR_bool succeeded;
    MR_Word CalleePredId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), CalleePPId_8, (MR_Integer) 0)));
    MR_Word ModuleInfo_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_7, (MR_Integer) 0)));
    MR_Word PredInfo_15;
    MR_Word PredStatus_16;
    MR_Integer Var_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), CalleePPId_8, (MR_Integer) 1)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_7, (MR_Integer) 1)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_7, (MR_Integer) 2)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_7, (MR_Integer) 3)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_7, (MR_Integer) 4)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_7, (MR_Integer) 5)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_7, (MR_Integer) 6)));
    MR_Integer Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_7, (MR_Integer) 7)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_7, (MR_Integer) 8)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_7, (MR_Integer) 9)));

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_14, CalleePredId_12, &PredInfo_15);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_15, &PredStatus_16);
    {
      MR_Word Var_23;

      Var_23 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_16);
      succeeded = (Var_23 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      MR_Word Var_22 = (MR_Word) PredStatus_16;

      succeeded = (Var_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Request_17;
      MR_Word Var_25;
      MR_Word Var_26;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_57;
      MR_Word Var_56;

      *IntraModule_10 = (MR_Integer) 1;
      {
        Request_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Request_17, 0) = ((MR_Box) (CalleePPId_8));
        MR_hl_field(MR_mktag(0), Request_17, 1) = ((MR_Box) (NotDeadArgNums_9));
      }
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
      Var_25 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0, Var_26, ((MR_Box) (Request_17)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
      Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
      Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
      Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
      Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_IrInfo_21 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_57));
      }
    }
    else
    {
      MR_Word Globals_18;
      MR_Word IntermoduleAnalysis_19;

      *IntraModule_10 = (MR_Integer) 0;
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_14, &Globals_18);
      libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 339, &IntermoduleAnalysis_19);
      switch (IntermoduleAnalysis_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_IrInfo_21 = STATE_VARIABLE_IrInfo_0_20;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_29;
            MR_Word Var_30;
            MR_Word Request_31;
            MR_Word Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;

            {
              Request_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Request_31, 0) = ((MR_Box) (CalleePPId_8));
              MR_hl_field(MR_mktag(0), Request_31, 1) = ((MR_Box) (NotDeadArgNums_9));
            }
            Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
            Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
            Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
            Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
            Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
            Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
            Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
            Var_29 = mercury__set__insert_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0, Var_30, ((MR_Box) (Request_31)));
            Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 0)));
            Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 1)));
            Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 2)));
            Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 3)));
            Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 4)));
            Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 5)));
            Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 6)));
            Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_20, (MR_Integer) 7)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_IrInfo_21 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_66));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_67));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_68));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_69));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_70));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_71));
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_29));
            }
          }
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(
  MR_Word List_1,
  MR_Word HeadVar__2_2,
  MR_Integer Index_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Indices0_12;
      MR_Integer Var_13 = (Index_3 + (MR_Integer) 1);

      transform_hlds__ctgc__structure_reuse__indirect__get_var_indices_4_p_0(List_1, Vars_9, Var_13, &Indices0_12);
      succeeded = mercury__list__member_2_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3], ((MR_Box) (Var_8)), List_1);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Index_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Indices0_12));
        }
      else
        *HeadVar__4_4 = Indices0_12;
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__maybe_write_verify_indirect_reuse_reason_7_p_0(
  MR_Word BaseInfo_8,
  MR_Word CalleePPId_9,
  MR_Word NoClobbers_10,
  MR_Word GoalInfo_11,
  MR_Word Reason_12)
{
  {
    MR_Word DebugIndirect_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 9)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 0)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 1)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 2)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 3)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 4)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 5)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 6)));
    MR_Integer Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 7)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 8)));

    switch (DebugIndirect_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word GoalReuse_16;
          MR_Word Context_17;
          MR_Word VarSet_18;
          MR_Word Var_21;
          MR_Word Var_56;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Integer Var_62;
          MR_Word Var_63;
          MR_Word Var_64;

          GoalReuse_16 = hlds__hlds_goal__goal_info_get_reuse_1_f_0(GoalInfo_11);
          Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 0)));
          Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 1)));
          Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 2)));
          Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 3)));
          Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 4)));
          Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 5)));
          Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 6)));
          Var_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 7)));
          Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 8)));
          Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_8, (MR_Integer) 9)));
          hlds__hlds_pred__proc_info_get_varset_2_p_0(Var_21, &VarSet_18);
          mercury__io__write_string_3_p_0((MR_String) "\tcall to ");
          hlds__hlds_out__hlds_out_util__write_pred_proc_id_4_p_0(Var_38, CalleePPId_9);
          mercury__io__write_string_3_p_0((MR_String) "\n\tfrom ");
          parse_tree__prog_out__write_context_3_p_0(Context_17);
          mercury__io__write_string_3_p_0((MR_String) "\n\twith NoClobbers = ");
          mercury__io__write_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[4], ((MR_Box) (NoClobbers_10)));
          mercury__io__write_string_3_p_0((MR_String) "\n\t\treuse: ");
          mercury__io__write_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_reuse_description_0, ((MR_Box) (GoalReuse_16)));
          mercury__io__write_string_3_p_0((MR_String) "\n\t\treason: ");
          switch (MR_tag((MR_Word) Reason_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_3_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_verify_indirect_reuse_reason_0, ((MR_Box) (Reason_12)));
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Vars_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), Reason_12, (MR_Integer) 0)));

                mercury__io__write_string_3_p_0((MR_String) "reuse_is_unsafe(");
                parse_tree__parse_tree_out_term__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_18, (MR_Integer) 1, Vars_72);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              break;
          }
          mercury__io__nl_2_p_0();
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = transform_hlds__ctgc__datastruct__datastruct_init_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__verify_indirect_reuse_for_call_8_p_0(
  MR_Word BaseInfo_9,
  MR_Word IrInfo_10,
  MR_Word GoalInfo_11,
  MR_Word CalleePPId_12,
  MR_Word CalleeArgs_13,
  MR_Word FormalReuseAs_14,
  MR_Word * NewReuseAs_15,
  MR_Word * NotDeadVars_16)
{
  {
    MR_Word TypeInfo_89_89;
    MR_Word ModuleInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 0)));
    MR_Word PredInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 2)));
    MR_Word ProcInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 3)));
    MR_Word SharingAs_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 0)));
    MR_Word ActualVarTypes_21;
    MR_Word CallerTypeVarSet_22;
    MR_Word CallerHeadTypeParams_23;
    MR_Word CalleeTypes_24;
    MR_Word ActualReuseAs_25;
    MR_Word LiveData_26;
    MR_Word ProjectedLiveData_27;
    MR_Word StaticVars_28;
    MR_Word Result_29;
    MR_Word Var_36;
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 1)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 4)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 5)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 6)));
    MR_Integer Var_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 7)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 8)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 9)));
    MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 1)));
    MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 2)));
    MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 3)));
    MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 4)));
    MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 5)));
    MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 6)));
    MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 7)));
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;

    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_19, &ActualVarTypes_21);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_18, &CallerTypeVarSet_22);
    hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(PredInfo_18, &CallerHeadTypeParams_23);
    hlds__vartypes__lookup_var_types_3_p_0(ActualVarTypes_21, CalleeArgs_13, &CalleeTypes_24);
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_rename_using_module_info_8_p_0(ModuleInfo_17, CalleePPId_12, CalleeArgs_13, CalleeTypes_24, CallerTypeVarSet_22, CallerHeadTypeParams_23, FormalReuseAs_14, &ActualReuseAs_25);
    LiveData_26 = transform_hlds__ctgc__livedata__livedata_init_at_goal_4_f_0(ModuleInfo_17, ProcInfo_19, GoalInfo_11, SharingAs_20);
    ProjectedLiveData_27 = transform_hlds__ctgc__livedata__livedata_project_2_f_0(CalleeArgs_13, LiveData_26);
    TypeInfo_89_89 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3];
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 0)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 1)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 2)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 3)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 4)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 5)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 6)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo_10, (MR_Integer) 7)));
    StaticVars_28 = mercury__set__to_sorted_list_1_f_0(TypeInfo_89_89, Var_36);
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_satisfied_7_p_0(ModuleInfo_17, ProcInfo_19, ProjectedLiveData_27, SharingAs_20, StaticVars_28, ActualReuseAs_25, &Result_29);
    if ((Result_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word TypeCtorInfo_90_90;
      MR_Word LFU_30;
      MR_Word LBU_31;
      MR_Word LU_32;
      MR_Word LuList_33;
      MR_Word LuData_34;
      MR_Word Var_38;
      MR_Word Var_80;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Integer Var_86;
      MR_Word Var_87;
      MR_Word Var_88;

      LFU_30 = hlds__hlds_goal__goal_info_get_lfu_1_f_0(GoalInfo_11);
      LBU_31 = hlds__hlds_goal__goal_info_get_lbu_1_f_0(GoalInfo_11);
      TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
      LU_32 = parse_tree__set_of_var__union_2_f_0(TypeCtorInfo_90_90, LFU_30, LBU_31);
      LuList_33 = parse_tree__set_of_var__to_sorted_list_1_f_0(TypeCtorInfo_90_90, LU_32);
      LuData_34 = mercury__list__map_2_f_0(TypeInfo_89_89, (MR_Word) &parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_datastruct_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[2], LuList_33);
      Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 0)));
      Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 1)));
      Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 2)));
      Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 3)));
      Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 4)));
      Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 5)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 6)));
      Var_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 7)));
      Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 8)));
      Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_9, (MR_Integer) 9)));
      *NewReuseAs_15 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_from_called_procedure_to_local_reuse_as_6_f_0(ModuleInfo_17, ProcInfo_19, Var_38, LuData_34, SharingAs_20, ActualReuseAs_25);
      *NotDeadVars_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Word Reason_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result_29, (MR_Integer) 0)));

      *NewReuseAs_15 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_init_0_f_0();
      switch (MR_tag((MR_Word) Reason_35)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *NotDeadVars_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          break;
        case (MR_Integer) 1:
          *NotDeadVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Reason_35, (MR_Integer) 0)));
          break;
        case (MR_Integer) 2:
          *NotDeadVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), Reason_35, (MR_Integer) 0)));
          break;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_sharing_as_5_p_0(
  MR_Word BaseInfo_6,
  MR_Word OldSharing_7,
  MR_Word NewSharing_8,
  MR_Word STATE_VARIABLE_IrInfo_0_12,
  MR_Word * STATE_VARIABLE_IrInfo_13)
{
  {
    MR_bool succeeded;
    MR_Word DebugIndirect_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 9)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 0)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 1)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 2)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 3)));
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 4)));
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 5)));
    MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 6)));
    MR_Integer Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 7)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_6, (MR_Integer) 8)));
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_27;

    switch (DebugIndirect_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(NewSharing_8);
          if (succeeded)
          {
            succeeded = transform_hlds__ctgc__structure_sharing__domain__sharing_as_is_top_1_p_0(OldSharing_7);
            succeeded = !(succeeded);
          }
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "\tsharing is now top\n");
          }
          else
          {
          }
        }
        break;
    }
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 0)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 1)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 2)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 3)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 4)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 5)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 6)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_12, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IrInfo_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NewSharing_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_34));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(
  MR_Word BaseInfo_5,
  MR_Word IrInfo0_6,
  MR_Word STATE_VARIABLE_IrInfo_0_17,
  MR_Word * STATE_VARIABLE_IrInfo_18)
{
  {
    MR_Word TypeCtorInfo_160_160;
    MR_Word ModuleInfo_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_5, (MR_Integer) 0)));
    MR_Word ProcInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_5, (MR_Integer) 3)));
    MR_Word NewSharing_10;
    MR_Word NewReuse_11;
    MR_Word NewStatus_12;
    MR_Word NewStaticVars_13;
    MR_Word NewDepProcs_14;
    MR_Word NewRequests_15;
    MR_Word NewIntermodRequests_16;
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 0)));
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_5, (MR_Integer) 1)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_5, (MR_Integer) 2)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_5, (MR_Integer) 4)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_5, (MR_Integer) 5)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_5, (MR_Integer) 6)));
    MR_Integer Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), BaseInfo_5, (MR_Integer) 7)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_5, (MR_Integer) 8)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), BaseInfo_5, (MR_Integer) 9)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
    MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
    MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
    MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
    MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
    MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
    MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
    MR_Word Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 1)));
    MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 2)));
    MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 3)));
    MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 4)));
    MR_Word Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 5)));
    MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 6)));
    MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 7)));
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word Var_137;
    MR_Word Var_138;
    MR_Word Var_139;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_148;
    MR_Word Var_149;
    MR_Word Var_150;
    MR_Word Var_151;
    MR_Word Var_152;
    MR_Word Var_153;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_157;

    NewSharing_10 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_least_upper_bound_4_f_0(ModuleInfo_8, ProcInfo_9, Var_19, Var_20);
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 0)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 1)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 2)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 3)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 4)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 5)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 6)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 7)));
    NewReuse_11 = transform_hlds__ctgc__structure_reuse__domain__reuse_as_least_upper_bound_4_f_0(ModuleInfo_8, ProcInfo_9, Var_21, Var_22);
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
    Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
    Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 0)));
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 1)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 2)));
    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 3)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 4)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 5)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 6)));
    Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 7)));
    NewStatus_12 = analysis__lub_2_f_0(Var_23, Var_24);
    Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
    Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
    Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
    Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 0)));
    Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 1)));
    Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 2)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 3)));
    Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 4)));
    Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 5)));
    Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 6)));
    Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 7)));
    NewStaticVars_13 = mercury__set__union_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3], Var_25, Var_26);
    Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
    Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
    Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
    Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
    Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
    Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
    Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
    Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 0)));
    Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 1)));
    Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 2)));
    Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 3)));
    Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 4)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 5)));
    Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 6)));
    Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 7)));
    NewDepProcs_14 = mercury__set__union_2_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, Var_27, Var_28);
    TypeCtorInfo_160_160 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;
    Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
    Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
    Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
    Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
    Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
    Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
    Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 0)));
    Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 1)));
    Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 2)));
    Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 3)));
    Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 4)));
    Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 5)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 6)));
    Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 7)));
    NewRequests_15 = mercury__set__union_2_f_0(TypeCtorInfo_160_160, Var_29, Var_30);
    Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
    Var_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
    Var_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
    Var_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
    Var_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
    Var_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
    Var_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
    Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 0)));
    Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 1)));
    Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 2)));
    Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 3)));
    Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 4)));
    Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 5)));
    Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 6)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), IrInfo0_6, (MR_Integer) 7)));
    NewIntermodRequests_16 = mercury__set__union_2_f_0(TypeCtorInfo_160_160, Var_31, Var_32);
    Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 0)));
    Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 1)));
    Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 2)));
    Var_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 3)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 4)));
    Var_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 5)));
    Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 6)));
    Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_0_17, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IrInfo_18 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NewSharing_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (NewReuse_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (NewStatus_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (NewStaticVars_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (NewDepProcs_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (NewRequests_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (NewIntermodRequests_16));
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_IrInfo_18;

    transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_lub_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_IrInfo_18);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_IrInfo_18));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0(
  MR_Word BaseInfo_6,
  MR_Word IrInfoList_7,
  MR_Word FixpointTable_8,
  MR_Word STATE_VARIABLE_IrInfo_0_12,
  MR_Word * STATE_VARIABLE_IrInfo_13)
{
  if ((IrInfoList_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *STATE_VARIABLE_IrInfo_13 = STATE_VARIABLE_IrInfo_0_12;
  else
  {
    MR_Word TypeCtorInfo_28_28;
    MR_Word Var_14;
    MR_Word STATE_VARIABLE_IrInfo_15_15;
    MR_Box conv1_STATE_VARIABLE_IrInfo_15_15;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_21;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_combine_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (BaseInfo_6));
    }
    TypeCtorInfo_28_28 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_ir_analysis_info_0;
    mercury__list__foldl_4_p_0(TypeCtorInfo_28_28, TypeCtorInfo_28_28, Var_14, IrInfoList_7, ((MR_Box) (STATE_VARIABLE_IrInfo_0_12)), &conv1_STATE_VARIABLE_IrInfo_15_15);
    STATE_VARIABLE_IrInfo_15_15 = ((MR_Word) conv1_STATE_VARIABLE_IrInfo_15_15);
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 0)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 1)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 2)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 3)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 4)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 5)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 6)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_IrInfo_15_15, (MR_Integer) 7)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_IrInfo_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FixpointTable_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_analysis_info_init_5_f_0(
  MR_Word PPId_7,
  MR_Word FixpointTable_8,
  MR_Word DepProcs_9,
  MR_Word Requests_10,
  MR_Word IntermodRequests_11)
{
  {
    MR_Word Info_12;
    MR_Word ReuseAs_Sharing_13;
    MR_Word ReuseAs_14;
    MR_Word Status_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Box conv0_ReuseAs_Sharing_13;

    conv0_ReuseAs_Sharing_13 = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (PPId_7)), FixpointTable_8);
    ReuseAs_Sharing_13 = ((MR_Word) conv0_ReuseAs_Sharing_13);
    ReuseAs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReuseAs_Sharing_13, (MR_Integer) 0)));
    Status_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ReuseAs_Sharing_13, (MR_Integer) 1)));
    Var_16 = transform_hlds__ctgc__structure_sharing__domain__sharing_as_init_0_f_0();
    Var_17 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[3]);
    {
      Info_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info_12, 0) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), Info_12, 1) = ((MR_Box) (ReuseAs_14));
      MR_hl_field(MR_mktag(0), Info_12, 2) = ((MR_Box) (Status_15));
      MR_hl_field(MR_mktag(0), Info_12, 3) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), Info_12, 4) = ((MR_Box) (FixpointTable_8));
      MR_hl_field(MR_mktag(0), Info_12, 5) = ((MR_Box) (DepProcs_9));
      MR_hl_field(MR_mktag(0), Info_12, 6) = ((MR_Box) (Requests_10));
      MR_hl_field(MR_mktag(0), Info_12, 7) = ((MR_Box) (IntermodRequests_11));
    }
    return Info_12;
  }
}

static MR_Word MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__ir_background_info_init_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word PPId_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word SharingTable_12,
  MR_Word ReuseTable_13)
{
  {
    MR_Word BG_14;
    MR_Word HeadVars_15;
    MR_Word Vartypes_16;
    MR_Word HeadVarsOfInterest_17;
    MR_Word Globals_18;
    MR_Integer MaxConditions_19;
    MR_Word VeryVerbose_20;
    MR_Word DebugIndirect_21;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_11, &HeadVars_15);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_11, &Vartypes_16);
    HeadVarsOfInterest_17 = check_hlds__type_util__remove_typeinfo_vars_2_f_0(Vartypes_16, HeadVars_15);
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_18);
    libs__globals__lookup_int_option_3_p_0(Globals_18, (MR_Integer) 422, &MaxConditions_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 59, &VeryVerbose_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 94, &DebugIndirect_21);
    {
      BG_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BG_14, 0) = ((MR_Box) (ModuleInfo_8));
      MR_hl_field(MR_mktag(0), BG_14, 1) = ((MR_Box) (PPId_9));
      MR_hl_field(MR_mktag(0), BG_14, 2) = ((MR_Box) (PredInfo_10));
      MR_hl_field(MR_mktag(0), BG_14, 3) = ((MR_Box) (ProcInfo_11));
      MR_hl_field(MR_mktag(0), BG_14, 4) = ((MR_Box) (SharingTable_12));
      MR_hl_field(MR_mktag(0), BG_14, 5) = ((MR_Box) (ReuseTable_13));
      MR_hl_field(MR_mktag(0), BG_14, 6) = ((MR_Box) (HeadVarsOfInterest_17));
      MR_hl_field(MR_mktag(0), BG_14, 7) = ((MR_Box) (MaxConditions_19));
      MR_hl_field(MR_mktag(0), BG_14, 8) = ((MR_Box) (VeryVerbose_20));
      MR_hl_field(MR_mktag(0), BG_14, 9) = ((MR_Box) (DebugIndirect_21));
    }
    return BG_14;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ReuseTable_10;

    transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_ReuseTable_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ReuseTable_10));
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_ReuseAs_6;

    conv1_ReuseAs_6 = transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_ReuseAs_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s * env_ptr = (struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s *) env_ptr_arg;

    *((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__conv0_LambdaHeadVar__1_14));
    ((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont)((env_ptr)->transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0_s env;

    (env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont = cont;
    (env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      transform_hlds__ctgc__structure_reuse__indirect__IntroducedFrom__pred__extend_scc_with_reuse_procs__193__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &(env).transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2_env_0__conv0_LambdaHeadVar__1_14, transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_1, &env);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0(
  MR_Word SharingTable_13,
  MR_Word SCC_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25,
  MR_Word STATE_VARIABLE_ReuseTable_0_26,
  MR_Word * STATE_VARIABLE_ReuseTable_27,
  MR_Word STATE_VARIABLE_DepProcs_0_28,
  MR_Word * STATE_VARIABLE_DepProcs_29,
  MR_Word STATE_VARIABLE_Requests_0_30,
  MR_Word * STATE_VARIABLE_Requests_31,
  MR_Word STATE_VARIABLE_IntermodRequests_0_32,
  MR_Word * STATE_VARIABLE_IntermodRequests_33)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, SCC_14);
    if (succeeded)
    {
      *STATE_VARIABLE_IntermodRequests_33 = STATE_VARIABLE_IntermodRequests_0_32;
      *STATE_VARIABLE_Requests_31 = STATE_VARIABLE_Requests_0_30;
      *STATE_VARIABLE_DepProcs_29 = STATE_VARIABLE_DepProcs_0_28;
      *STATE_VARIABLE_ReuseTable_27 = STATE_VARIABLE_ReuseTable_0_26;
      *STATE_VARIABLE_ModuleInfo_25 = STATE_VARIABLE_ModuleInfo_0_24;
    }
    else
    {
      MR_Word TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
      MR_Word TypeCtorInfo_19_60;
      MR_Word SCCProcs_20;
      MR_Word ExtendedSCC_21;
      MR_Word FixpointTable0_22;
      MR_Word FixpointTable_23;
      MR_Word Var_38;
      MR_Word ReuseVersionMap_48;
      MR_Word Extension_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_67;
      MR_Word Var_58;
      MR_Box conv3_STATE_VARIABLE_ReuseTable_27;

      mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_40_40, SCC_14, &SCCProcs_20);
      TypeCtorInfo_19_60 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
      Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ReuseTable_0_26, (MR_Integer) 0)));
      Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ReuseTable_0_26, (MR_Integer) 1)));
      ReuseVersionMap_48 = mercury__bimap__forward_map_1_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0, TypeCtorInfo_19_60, Var_53);
      {
        Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_2));
        MR_hl_field(MR_mktag(0), Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_54, 3) = ((MR_Box) (SCCProcs_20));
        MR_hl_field(MR_mktag(0), Var_54, 4) = ((MR_Box) (ReuseVersionMap_48));
      }
      mercury__solutions__solutions_2_p_1(TypeCtorInfo_19_60, Var_54, &Extension_52);
      ExtendedSCC_21 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_19_60, SCCProcs_20, Extension_52);
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_3));
        MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (STATE_VARIABLE_ReuseTable_0_26));
      }
      FixpointTable0_22 = transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, Var_67, ExtendedSCC_21);
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(SharingTable_13, ExtendedSCC_21, STATE_VARIABLE_ReuseTable_0_26, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25, FixpointTable0_22, &FixpointTable_23, STATE_VARIABLE_DepProcs_0_28, STATE_VARIABLE_DepProcs_29, STATE_VARIABLE_Requests_0_30, STATE_VARIABLE_Requests_31, STATE_VARIABLE_IntermodRequests_0_32, STATE_VARIABLE_IntermodRequests_33);
      {
        Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0_4));
        MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (FixpointTable_23));
      }
      mercury__list__foldl_4_p_0(TypeCtorInfo_40_40, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, Var_38, ExtendedSCC_21, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_26)), &conv3_STATE_VARIABLE_ReuseTable_27);
      *STATE_VARIABLE_ReuseTable_27 = ((MR_Word) conv3_STATE_VARIABLE_ReuseTable_27);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(
  MR_Word FixpointTable_5,
  MR_Word PPId_6,
  MR_Word STATE_VARIABLE_ReuseTable_0_9,
  MR_Word * STATE_VARIABLE_ReuseTable_10)
{
  {
    MR_Word FinalAs_8;
    MR_Box conv0_FinalAs_8;

    conv0_FinalAs_8 = transform_hlds__ctgc__fixpoint_table__get_from_fixpoint_table_final_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, ((MR_Box) (PPId_6)), FixpointTable_5);
    FinalAs_8 = ((MR_Word) conv0_FinalAs_8);
    transform_hlds__ctgc__structure_reuse__domain__reuse_as_table_set_4_p_0(PPId_6, FinalAs_8, STATE_VARIABLE_ReuseTable_0_9, STATE_VARIABLE_ReuseTable_10);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ReuseTable_10;

    transform_hlds__ctgc__structure_reuse__indirect__update_reuse_in_table_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_ReuseTable_10);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ReuseTable_10));
  }
}

static MR_Box MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_ReuseAs_6;

    conv0_ReuseAs_6 = transform_hlds__ctgc__structure_reuse__indirect__get_reuse_as_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_ReuseAs_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0(
  MR_Word SharingTable_13,
  MR_Word SCC_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_ReuseTable_0_25,
  MR_Word * STATE_VARIABLE_ReuseTable_26,
  MR_Word STATE_VARIABLE_DepProcs_0_27,
  MR_Word * STATE_VARIABLE_DepProcs_28,
  MR_Word STATE_VARIABLE_Requests_0_29,
  MR_Word * STATE_VARIABLE_Requests_30,
  MR_Word STATE_VARIABLE_IntermodRequests_0_31,
  MR_Word * STATE_VARIABLE_IntermodRequests_32)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word SCCProcs_20;

    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_39_39, SCC_14, &SCCProcs_20);
    succeeded = transform_hlds__ctgc__util__some_preds_require_no_analysis_2_p_0(STATE_VARIABLE_ModuleInfo_0_23, SCC_14);
    if (succeeded)
    {
      *STATE_VARIABLE_IntermodRequests_32 = STATE_VARIABLE_IntermodRequests_0_31;
      *STATE_VARIABLE_Requests_30 = STATE_VARIABLE_Requests_0_29;
      *STATE_VARIABLE_DepProcs_28 = STATE_VARIABLE_DepProcs_0_27;
      *STATE_VARIABLE_ReuseTable_26 = STATE_VARIABLE_ReuseTable_0_25;
      *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
    }
    else
    {
      MR_Word FixpointTable0_21;
      MR_Word FixpointTable_22;
      MR_Word Var_37;
      MR_Word Var_47;
      MR_Box conv2_STATE_VARIABLE_ReuseTable_26;

      {
        Var_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_47, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_47, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_1));
        MR_hl_field(MR_mktag(0), Var_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_47, 3) = ((MR_Box) (STATE_VARIABLE_ReuseTable_0_25));
      }
      FixpointTable0_21 = transform_hlds__ctgc__fixpoint_table__init_fixpoint_table_2_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, Var_47, SCCProcs_20);
      transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(SharingTable_13, SCCProcs_20, STATE_VARIABLE_ReuseTable_0_25, STATE_VARIABLE_ModuleInfo_0_23, STATE_VARIABLE_ModuleInfo_24, FixpointTable0_21, &FixpointTable_22, STATE_VARIABLE_DepProcs_0_27, STATE_VARIABLE_DepProcs_28, STATE_VARIABLE_Requests_0_29, STATE_VARIABLE_Requests_30, STATE_VARIABLE_IntermodRequests_0_31, STATE_VARIABLE_IntermodRequests_32);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0_2));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (FixpointTable_22));
      }
      mercury__set__foldl_4_p_0(TypeCtorInfo_39_39, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, Var_37, SCC_14, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_25)), &conv2_STATE_VARIABLE_ReuseTable_26);
      *STATE_VARIABLE_ReuseTable_26 = ((MR_Word) conv2_STATE_VARIABLE_ReuseTable_26);
    }
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ModuleInfo_29;
    MR_Word conv3_STATE_VARIABLE_FixpointTable_31;
    MR_Word conv2_STATE_VARIABLE_DepProcs_33;
    MR_Word conv1_STATE_VARIABLE_Requests_35;
    MR_Word conv0_STATE_VARIABLE_IntermodRequests_37;

    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_pred_proc_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_ModuleInfo_29, ((MR_Word) wrapper_arg_4), &conv3_STATE_VARIABLE_FixpointTable_31, ((MR_Word) wrapper_arg_6), &conv2_STATE_VARIABLE_DepProcs_33, ((MR_Word) wrapper_arg_8), &conv1_STATE_VARIABLE_Requests_35, ((MR_Word) wrapper_arg_10), &conv0_STATE_VARIABLE_IntermodRequests_37);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_29));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_FixpointTable_31));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_DepProcs_33));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_Requests_35));
    *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodRequests_37));
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0(
  MR_Word SharingTable_14,
  MR_Word SCC_15,
  MR_Word ReuseTable_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23,
  MR_Word STATE_VARIABLE_FixpointTable_0_24,
  MR_Word * STATE_VARIABLE_FixpointTable_25,
  MR_Word STATE_VARIABLE_DepProcs_0_26,
  MR_Word * STATE_VARIABLE_DepProcs_27,
  MR_Word STATE_VARIABLE_Requests_0_28,
  MR_Word * STATE_VARIABLE_Requests_29,
  MR_Word STATE_VARIABLE_IntermodRequests_0_30,
  MR_Word * STATE_VARIABLE_IntermodRequests_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word TypeInfo_59_59;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_ModuleInfo_33_33;
    MR_Word STATE_VARIABLE_FixpointTable_34_34;
    MR_Word STATE_VARIABLE_DepProcs_35_35;
    MR_Word STATE_VARIABLE_Requests_36_36;
    MR_Word STATE_VARIABLE_IntermodRequests_37_37;
    MR_Box conv9_STATE_VARIABLE_ModuleInfo_33_33;
    MR_Box conv8_STATE_VARIABLE_FixpointTable_34_34;
    MR_Box conv7_STATE_VARIABLE_DepProcs_35_35;
    MR_Box conv6_STATE_VARIABLE_Requests_36_36;
    MR_Box conv5_STATE_VARIABLE_IntermodRequests_37_37;

    // setup for model_det tailcalls optimized into a loop
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_until_fixpoint_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (SharingTable_14));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (ReuseTable_16));
    }
    TypeInfo_59_59 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
    mercury__list__foldl5_12_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_2[0], (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], TypeInfo_59_59, TypeInfo_59_59, Var_32, SCC_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_22)), &conv9_STATE_VARIABLE_ModuleInfo_33_33, ((MR_Box) (STATE_VARIABLE_FixpointTable_0_24)), &conv8_STATE_VARIABLE_FixpointTable_34_34, ((MR_Box) (STATE_VARIABLE_DepProcs_0_26)), &conv7_STATE_VARIABLE_DepProcs_35_35, ((MR_Box) (STATE_VARIABLE_Requests_0_28)), &conv6_STATE_VARIABLE_Requests_36_36, ((MR_Box) (STATE_VARIABLE_IntermodRequests_0_30)), &conv5_STATE_VARIABLE_IntermodRequests_37_37);
    STATE_VARIABLE_ModuleInfo_33_33 = ((MR_Word) conv9_STATE_VARIABLE_ModuleInfo_33_33);
    STATE_VARIABLE_FixpointTable_34_34 = ((MR_Word) conv8_STATE_VARIABLE_FixpointTable_34_34);
    STATE_VARIABLE_DepProcs_35_35 = ((MR_Word) conv7_STATE_VARIABLE_DepProcs_35_35);
    STATE_VARIABLE_Requests_36_36 = ((MR_Word) conv6_STATE_VARIABLE_Requests_36_36);
    STATE_VARIABLE_IntermodRequests_37_37 = ((MR_Word) conv5_STATE_VARIABLE_IntermodRequests_37_37);
    succeeded = transform_hlds__ctgc__fixpoint_table__fixpoint_reached_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, STATE_VARIABLE_FixpointTable_34_34);
    if (succeeded)
    {
      *STATE_VARIABLE_IntermodRequests_31 = STATE_VARIABLE_IntermodRequests_37_37;
      *STATE_VARIABLE_Requests_29 = STATE_VARIABLE_Requests_36_36;
      *STATE_VARIABLE_DepProcs_27 = STATE_VARIABLE_DepProcs_35_35;
      *STATE_VARIABLE_FixpointTable_25 = STATE_VARIABLE_FixpointTable_34_34;
      *STATE_VARIABLE_ModuleInfo_23 = STATE_VARIABLE_ModuleInfo_33_33;
    }
    else
    {
      MR_Word STATE_VARIABLE_FixpointTable_38_38;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_22;
      MR_Word next_value_of_STATE_VARIABLE_FixpointTable_0_24;
      MR_Word next_value_of_STATE_VARIABLE_DepProcs_0_26;
      MR_Word next_value_of_STATE_VARIABLE_Requests_0_28;
      MR_Word next_value_of_STATE_VARIABLE_IntermodRequests_0_30;

      transform_hlds__ctgc__fixpoint_table__new_run_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_and_status_0, STATE_VARIABLE_FixpointTable_34_34, &STATE_VARIABLE_FixpointTable_38_38);
      // direct tailcall eliminated
      next_value_of_STATE_VARIABLE_ModuleInfo_0_22 = STATE_VARIABLE_ModuleInfo_33_33;
      next_value_of_STATE_VARIABLE_FixpointTable_0_24 = STATE_VARIABLE_FixpointTable_38_38;
      next_value_of_STATE_VARIABLE_DepProcs_0_26 = STATE_VARIABLE_DepProcs_35_35;
      next_value_of_STATE_VARIABLE_Requests_0_28 = STATE_VARIABLE_Requests_36_36;
      next_value_of_STATE_VARIABLE_IntermodRequests_0_30 = STATE_VARIABLE_IntermodRequests_37_37;
      STATE_VARIABLE_ModuleInfo_0_22 = next_value_of_STATE_VARIABLE_ModuleInfo_0_22;
      STATE_VARIABLE_FixpointTable_0_24 = next_value_of_STATE_VARIABLE_FixpointTable_0_24;
      STATE_VARIABLE_DepProcs_0_26 = next_value_of_STATE_VARIABLE_DepProcs_0_26;
      STATE_VARIABLE_Requests_0_28 = next_value_of_STATE_VARIABLE_Requests_0_28;
      STATE_VARIABLE_IntermodRequests_0_30 = next_value_of_STATE_VARIABLE_IntermodRequests_0_30;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ModuleInfo_25;
    MR_Word conv3_STATE_VARIABLE_ReuseTable_27;
    MR_Word conv2_STATE_VARIABLE_DepProcs_29;
    MR_Word conv1_STATE_VARIABLE_Requests_31;
    MR_Word conv0_STATE_VARIABLE_IntermodRequests_33;

    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_analyse_scc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_ModuleInfo_25, ((MR_Word) wrapper_arg_4), &conv3_STATE_VARIABLE_ReuseTable_27, ((MR_Word) wrapper_arg_6), &conv2_STATE_VARIABLE_DepProcs_29, ((MR_Word) wrapper_arg_8), &conv1_STATE_VARIABLE_Requests_31, ((MR_Word) wrapper_arg_10), &conv0_STATE_VARIABLE_IntermodRequests_33);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_25));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_ReuseTable_27));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_DepProcs_29));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_Requests_31));
    *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodRequests_33));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0(
  MR_Word SharingTable_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ReuseTable_0_20,
  MR_Word * STATE_VARIABLE_ReuseTable_21,
  MR_Word * DepProcs_13,
  MR_Word * Requests_14,
  MR_Word STATE_VARIABLE_IntermodRequests_0_22,
  MR_Word * STATE_VARIABLE_IntermodRequests_23)
{
  {
    MR_Word TypeInfo_49_49;
    MR_Word DepInfo_16;
    MR_Word SCCs_17;
    MR_Word STATE_VARIABLE_ModuleInfo_24_24;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Box conv9_STATE_VARIABLE_ModuleInfo_19;
    MR_Box conv8_STATE_VARIABLE_ReuseTable_21;
    MR_Box conv7_DepProcs_13;
    MR_Box conv6_Requests_14;
    MR_Box conv5_STATE_VARIABLE_IntermodRequests_23;

    hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_18, &STATE_VARIABLE_ModuleInfo_24_24, &DepInfo_16);
    SCCs_17 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, DepInfo_16);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_rerun_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (SharingTable_10));
    }
    Var_28 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0);
    Var_29 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0);
    TypeInfo_49_49 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
    mercury__list__foldl5_12_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], TypeInfo_49_49, TypeInfo_49_49, Var_25, SCCs_17, ((MR_Box) (STATE_VARIABLE_ModuleInfo_24_24)), &conv9_STATE_VARIABLE_ModuleInfo_19, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_20)), &conv8_STATE_VARIABLE_ReuseTable_21, ((MR_Box) (Var_28)), &conv7_DepProcs_13, ((MR_Box) (Var_29)), &conv6_Requests_14, ((MR_Box) (STATE_VARIABLE_IntermodRequests_0_22)), &conv5_STATE_VARIABLE_IntermodRequests_23);
    *STATE_VARIABLE_ModuleInfo_19 = ((MR_Word) conv9_STATE_VARIABLE_ModuleInfo_19);
    *STATE_VARIABLE_ReuseTable_21 = ((MR_Word) conv8_STATE_VARIABLE_ReuseTable_21);
    *DepProcs_13 = ((MR_Word) conv7_DepProcs_13);
    *Requests_14 = ((MR_Word) conv6_Requests_14);
    *STATE_VARIABLE_IntermodRequests_23 = ((MR_Word) conv5_STATE_VARIABLE_IntermodRequests_23);
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9,
  MR_Box wrapper_arg_10,
  MR_Box * wrapper_arg_11)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ModuleInfo_24;
    MR_Word conv3_STATE_VARIABLE_ReuseTable_26;
    MR_Word conv2_STATE_VARIABLE_DepProcs_28;
    MR_Word conv1_STATE_VARIABLE_Requests_30;
    MR_Word conv0_STATE_VARIABLE_IntermodRequests_32;

    transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_analyse_scc_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv4_STATE_VARIABLE_ModuleInfo_24, ((MR_Word) wrapper_arg_4), &conv3_STATE_VARIABLE_ReuseTable_26, ((MR_Word) wrapper_arg_6), &conv2_STATE_VARIABLE_DepProcs_28, ((MR_Word) wrapper_arg_8), &conv1_STATE_VARIABLE_Requests_30, ((MR_Word) wrapper_arg_10), &conv0_STATE_VARIABLE_IntermodRequests_32);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_24));
    *wrapper_arg_5 = ((MR_Box) (conv3_STATE_VARIABLE_ReuseTable_26));
    *wrapper_arg_7 = ((MR_Box) (conv2_STATE_VARIABLE_DepProcs_28));
    *wrapper_arg_9 = ((MR_Box) (conv1_STATE_VARIABLE_Requests_30));
    *wrapper_arg_11 = ((MR_Box) (conv0_STATE_VARIABLE_IntermodRequests_32));
  }
}

void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0(
  MR_Word SharingTable_9,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18,
  MR_Word STATE_VARIABLE_ReuseTable_0_19,
  MR_Word * STATE_VARIABLE_ReuseTable_20,
  MR_Word * DepProcs_12,
  MR_Word * Requests_13,
  MR_Word * IntermodRequests_14)
{
  {
    MR_Word TypeCtorInfo_41_41;
    MR_Word TypeInfo_46_46;
    MR_Word DepInfo_15;
    MR_Word SCCs_16;
    MR_Word STATE_VARIABLE_ModuleInfo_21_21;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Box conv9_STATE_VARIABLE_ModuleInfo_18;
    MR_Box conv8_STATE_VARIABLE_ReuseTable_20;
    MR_Box conv7_DepProcs_12;
    MR_Box conv6_Requests_13;
    MR_Box conv5_IntermodRequests_14;

    hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_17, &STATE_VARIABLE_ModuleInfo_21_21, &DepInfo_15);
    SCCs_16 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, DepInfo_15);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (&transform_hlds__ctgc__structure_reuse__indirect_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (transform_hlds__ctgc__structure_reuse__indirect__indirect_reuse_pass_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_22, 3) = ((MR_Box) (SharingTable_9));
    }
    Var_25 = mercury__set__init_0_f_0((MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_ppid_no_clobbers_0);
    TypeCtorInfo_41_41 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect__transform_hlds__ctgc__structure_reuse__indirect__type_ctor_info_sr_request_0;
    Var_26 = mercury__set__init_0_f_0(TypeCtorInfo_41_41);
    Var_27 = mercury__set__init_0_f_0(TypeCtorInfo_41_41);
    TypeInfo_46_46 = (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[2];
    mercury__list__foldl5_12_p_0((MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[0], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__domain__transform_hlds__ctgc__structure_reuse__domain__type_ctor_info_reuse_as_table_0, (MR_Word) &transform_hlds__ctgc__structure_reuse__indirect_scalar_common_1[1], TypeInfo_46_46, TypeInfo_46_46, Var_22, SCCs_16, ((MR_Box) (STATE_VARIABLE_ModuleInfo_21_21)), &conv9_STATE_VARIABLE_ModuleInfo_18, ((MR_Box) (STATE_VARIABLE_ReuseTable_0_19)), &conv8_STATE_VARIABLE_ReuseTable_20, ((MR_Box) (Var_25)), &conv7_DepProcs_12, ((MR_Box) (Var_26)), &conv6_Requests_13, ((MR_Box) (Var_27)), &conv5_IntermodRequests_14);
    *STATE_VARIABLE_ModuleInfo_18 = ((MR_Word) conv9_STATE_VARIABLE_ModuleInfo_18);
    *STATE_VARIABLE_ReuseTable_20 = ((MR_Word) conv8_STATE_VARIABLE_ReuseTable_20);
    *DepProcs_12 = ((MR_Word) conv7_DepProcs_12);
    *Requests_13 = ((MR_Word) conv6_Requests_13);
    *IntermodRequests_14 = ((MR_Word) conv5_IntermodRequests_14);
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____conditional_reuse_handling_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__indirect____Compare____conditional_reuse_handling_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____dep_procs_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__indirect____Compare____dep_procs_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_analysis_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_analysis_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____ir_background_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__indirect____Compare____ir_background_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_fixpoint_table_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_fixpoint_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____sr_request_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__indirect____Compare____sr_request_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__ctgc__structure_reuse__indirect____Unify____verify_indirect_reuse_reason_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__ctgc__structure_reuse__indirect____Compare____verify_indirect_reuse_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__ctgc__structure_reuse__indirect__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.ctgc.structure_reuse.indirect.
