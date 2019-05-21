/*
** Automatically generated from `inlining.m'
** by the Mercury compiler,
** version rotd-2017-08-07
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


/* :- module transform_hlds.inlining. */
/* :- implementation. */

/*
INIT mercury__transform_hlds__inlining__init
ENDINIT
*/

#include "transform_hlds.inlining.mih"


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
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
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
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.complexity.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s {
  MR_bool transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_28;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_79;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__RttiVarMaps_71;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__MultiMap_73;
  jmp_buf transform_hlds__inlining__inlining_in_call_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_75;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVar_78;
  MR_Box transform_hlds__inlining__inlining_in_call_5_p_0_env_0__conv0_ArgVar_78;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[16];

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[16];

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[16];

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0[11];

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0[11];

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0[11];

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0;

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1];

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1];

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1];

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_may_inline_purity_promised_pred_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_may_inline_purity_promised_pred_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_may_inline_purity_promised_pred_0[2];

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_0;

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_maybe_should_inline_0_1[2];

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_1;

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_1[1];

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_maybe_should_inline_0[2];

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_maybe_should_inline_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_should_inline_0[2];

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_maybe_tail_rec_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_tail_rec_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_tail_rec_0[2];

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_maybe_user_req_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_user_req_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_user_req_0[2];

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_user_req_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0(
  MR_Word transform_hlds__inlining__HeadVar__2_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0(
  MR_Word transform_hlds__inlining__HeadVar__2_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_should_inline_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_should_inline_0_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining__mark_proc_to_be_inlined_4_p_0(
  MR_Word transform_hlds__inlining__ModuleInfo_5,
  MR_Word transform_hlds__inlining__PredProcId_6,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_9,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_10);

static void MR_CALL 
transform_hlds__inlining__inline_in_linear_tail_rec_proc_7_p_0(
  MR_Word transform_hlds__inlining__Params_8,
  MR_Word transform_hlds__inlining__ShouldInlineProcs_9,
  MR_Word transform_hlds__inlining__SCC_10,
  MR_Word transform_hlds__inlining__EntryPoints_11,
  MR_Word transform_hlds__inlining__PredProcId_12,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
transform_hlds__inlining__inline_in_sccs_5_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_5);

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_3(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box * transform_hlds__inlining__wrapper_arg_3);

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_2(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box * transform_hlds__inlining__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_1(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1);

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0(
  MR_Word transform_hlds__inlining__Params_7,
  MR_Word transform_hlds__inlining__SCCEntryPoints_8,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_20,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_21,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__inlining__inline_in_proc_6_p_0(
  MR_Word transform_hlds__inlining__Params_7,
  MR_Word transform_hlds__inlining__ShouldInlineProcs_8,
  MR_Word transform_hlds__inlining__ShouldInlineTailProcs_9,
  MR_Word transform_hlds__inlining__PredProcId_10,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_54);

static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__inlining_in_disjuncts_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_1(
  void * transform_hlds__inlining__env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_3(
  void * transform_hlds__inlining__env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_2(
  void * transform_hlds__inlining__env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_4(
  void * transform_hlds__inlining__env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0(
  MR_Word transform_hlds__inlining__GoalExpr0_6,
  MR_Word transform_hlds__inlining__GoalInfo0_7,
  MR_Word * transform_hlds__inlining__Goal_8,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_61,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_62);

static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
  MR_Word transform_hlds__inlining__Goal0_5,
  MR_Word * transform_hlds__inlining__Goal_6,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_54,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_55);

static void MR_CALL 
transform_hlds__inlining__should_inline_at_call_site_4_p_0(
  MR_Word transform_hlds__inlining__Info_5,
  MR_Word transform_hlds__inlining__GoalExpr0_6,
  MR_Word transform_hlds__inlining__GoalInfo0_7,
  MR_Word * transform_hlds__inlining__ShouldInline_8);

static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
  MR_Word transform_hlds__inlining__RttiVarMaps_3,
  MR_Word transform_hlds__inlining__HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__inlining__should_proc_be_inlined_3_p_0(
  MR_Word transform_hlds__inlining__Params_4,
  MR_Word transform_hlds__inlining__ModuleInfo_5,
  MR_Word transform_hlds__inlining__PredProcId_6);

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1);

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_4(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box * transform_hlds__inlining__wrapper_arg_3);

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_3(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box * transform_hlds__inlining__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_2(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1);

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_1(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box * transform_hlds__inlining__wrapper_arg_3);

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0(
  MR_Word transform_hlds__inlining__Params_8,
  MR_Word transform_hlds__inlining__SCCEntryPoints_9,
  MR_Word transform_hlds__inlining__SCCProcs_10,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_24,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_25,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_27);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_should_inline_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_should_inline_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_user_req_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__inlining_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_2[3][3];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_3[1][10];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_4[1][6];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_5[1][7];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_6[1][9];




static /* final */ const MR_Box transform_hlds__inlining_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__inlining_scalar_common_1[0]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__inlining_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__inlining_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__inlining_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
};

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_5[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[16] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[16] = {
  (MR_String) "i_var_threshold",
  (MR_String) "i_highlevel_code",
  (MR_String) "i_exec_trace",
  (MR_String) "i_module_info",
  (MR_String) "i_univ_caller_tvars",
  (MR_String) "i_should_inline_tail_calls",
  (MR_String) "i_should_inline_procs",
  (MR_String) "i_prog_varset",
  (MR_String) "i_vartypes",
  (MR_String) "i_tvarset",
  (MR_String) "i_rtti_varmaps",
  (MR_String) "i_done_any_inlining",
  (MR_String) "i_inlined_parallel",
  (MR_String) "i_need_requant",
  (MR_String) "i_changed_detism",
  (MR_String) "i_changed_purity"
};

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[16] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 4,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0 = {
  (MR_String) "inline_info",
  (MR_Integer) 16,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____inline_info_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____inline_info_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "inline_info",
  {     transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0,
    (MR_TypeInfo) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0
  }
};

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0[11] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0
};

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0[11] = {
  (MR_String) "ip_simple",
  (MR_String) "ip_single_use",
  (MR_String) "ip_linear_tail_rec",
  (MR_String) "ip_linear_tail_rec_max_extra",
  (MR_String) "ip_call_cost",
  (MR_String) "ip_compound_size_threshold",
  (MR_String) "ip_simple_goal_threshold",
  (MR_String) "ip_var_threshold",
  (MR_String) "ip_highlevel_code",
  (MR_String) "ip_any_tracing",
  (MR_String) "ip_needed_map"
};

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0[11] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0 = {
  (MR_String) "inline_params",
  (MR_Integer) 11,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0
  }
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____inline_params_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____inline_params_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "inline_params",
  {     transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_0 = {
  (MR_String) "may_not_inline_purity_promised_pred",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_1 = {
  (MR_String) "may_inline_purity_promised_pred",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_may_inline_purity_promised_pred_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_may_inline_purity_promised_pred_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_1,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_0
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_may_inline_purity_promised_pred_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_may_inline_purity_promised_pred_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "may_inline_purity_promised_pred",
  {     transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_may_inline_purity_promised_pred_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_may_inline_purity_promised_pred_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_may_inline_purity_promised_pred_0
};

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_0 = {
  (MR_String) "should_not_inline",
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

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_maybe_should_inline_0_1[2] = {
  (MR_PseudoTypeInfo) &transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_tail_rec_0,
  (MR_PseudoTypeInfo) &transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_user_req_0
};

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_1 = {
  (MR_String) "should_inline",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  transform_hlds__inlining__transform_hlds__inlining__field_types_maybe_should_inline_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_1[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_1
};

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_maybe_should_inline_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_1
  }
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_maybe_should_inline_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_1,
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_0
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_should_inline_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_should_inline_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____maybe_should_inline_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____maybe_should_inline_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "maybe_should_inline",
  {     transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_maybe_should_inline_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_maybe_should_inline_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_should_inline_0
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_0 = {
  (MR_String) "not_tail_rec",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_1 = {
  (MR_String) "tail_rec",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_maybe_tail_rec_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_tail_rec_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_1
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_tail_rec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_tail_rec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____maybe_tail_rec_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____maybe_tail_rec_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "maybe_tail_rec",
  {     transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_tail_rec_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_maybe_tail_rec_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_tail_rec_0
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_0 = {
  (MR_String) "not_user_req",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_1 = {
  (MR_String) "user_req",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_maybe_user_req_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_user_req_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_1
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_user_req_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_user_req_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____maybe_user_req_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____maybe_user_req_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "maybe_user_req",
  {     transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_user_req_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_maybe_user_req_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_user_req_0
};

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_user_req_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3)
{
  {
    MR_Integer transform_hlds__inlining__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
    MR_Integer transform_hlds__inlining__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__Cast_HeadVar1_4, transform_hlds__inlining__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0(
  MR_Word transform_hlds__inlining__HeadVar__2_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded = (transform_hlds__inlining__HeadVar__2_1 == transform_hlds__inlining__HeadVar__2_2);

    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3)
{
  {
    MR_Integer transform_hlds__inlining__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
    MR_Integer transform_hlds__inlining__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__Cast_HeadVar1_4, transform_hlds__inlining__Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0(
  MR_Word transform_hlds__inlining__HeadVar__2_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded = (transform_hlds__inlining__HeadVar__2_1 == transform_hlds__inlining__HeadVar__2_2);

    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_should_inline_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__CastX_13 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
    MR_Integer transform_hlds__inlining__CastY_14 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_13 == transform_hlds__inlining__CastY_14);
    if (transform_hlds__inlining__succeeded)
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((transform_hlds__inlining__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((transform_hlds__inlining__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
      else
        *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word transform_hlds__inlining__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__inlining__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));

      if ((transform_hlds__inlining__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word transform_hlds__inlining__ArgY1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__ArgY2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word transform_hlds__inlining__Var_12;
        MR_Integer transform_hlds__inlining__Var_19 = (MR_Integer) transform_hlds__inlining__Var_18;
        MR_Integer transform_hlds__inlining__Var_20 = (MR_Integer) transform_hlds__inlining__ArgY1_9;

        mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_12, transform_hlds__inlining__Var_19, transform_hlds__inlining__Var_20);
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_12 == (MR_Integer) 0);
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
        if (transform_hlds__inlining__succeeded)
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_12;
        else
        {
          MR_Integer transform_hlds__inlining__Var_21 = (MR_Integer) transform_hlds__inlining__Var_17;
          MR_Integer transform_hlds__inlining__Var_22 = (MR_Integer) transform_hlds__inlining__ArgY2_11;

          mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__Var_21, transform_hlds__inlining__Var_22);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_should_inline_0_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__CastX_9 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
    MR_Integer transform_hlds__inlining__CastY_10 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_9 == transform_hlds__inlining__CastY_10);
    if (transform_hlds__inlining__succeeded)
      transform_hlds__inlining__succeeded = MR_TRUE;
    else
    if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer transform_hlds__inlining__CastX_3 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
      MR_Integer transform_hlds__inlining__CastY_4 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

      transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastY_4 == transform_hlds__inlining__CastX_3);
    }
    else
    {
      MR_Word transform_hlds__inlining__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__inlining__ArgY1_6;
      MR_Word transform_hlds__inlining__ArgX2_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word transform_hlds__inlining__ArgY2_8;

      transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__inlining__succeeded)
      {
        transform_hlds__inlining__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
        transform_hlds__inlining__ArgY2_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX1_5 == transform_hlds__inlining__ArgY1_6);
        if (transform_hlds__inlining__succeeded)
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX2_7 == transform_hlds__inlining__ArgY2_8);
      }
    }
    return transform_hlds__inlining__succeeded;
  }
}

void MR_CALL 
transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3)
{
  {
    MR_Integer transform_hlds__inlining__Cast_HeadVar1_4 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
    MR_Integer transform_hlds__inlining__Cast_HeadVar2_5 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__Cast_HeadVar1_4, transform_hlds__inlining__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0(
  MR_Word transform_hlds__inlining__HeadVar__2_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded = (transform_hlds__inlining__HeadVar__2_1 == transform_hlds__inlining__HeadVar__2_2);

    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__CastX_36 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
    MR_Integer transform_hlds__inlining__CastY_37 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_36 == transform_hlds__inlining__CastY_37);
    if (transform_hlds__inlining__succeeded)
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word transform_hlds__inlining__ArgX1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY1_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY2_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Integer transform_hlds__inlining__ArgX4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer transform_hlds__inlining__ArgY4_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer transform_hlds__inlining__ArgX5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer transform_hlds__inlining__ArgY5_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 2)));
      MR_Integer transform_hlds__inlining__ArgX6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer transform_hlds__inlining__ArgY6_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 3)));
      MR_Integer transform_hlds__inlining__ArgX7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer transform_hlds__inlining__ArgY7_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 4)));
      MR_Integer transform_hlds__inlining__ArgX8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
      MR_Integer transform_hlds__inlining__ArgY8_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word transform_hlds__inlining__ArgX9_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY9_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 6)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX10_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY10_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word transform_hlds__inlining__ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word transform_hlds__inlining__Var_26;
      MR_Integer transform_hlds__inlining__Var_49 = (MR_Integer) transform_hlds__inlining__ArgX1_4;
      MR_Integer transform_hlds__inlining__Var_50 = (MR_Integer) transform_hlds__inlining__ArgY1_5;

      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_26, transform_hlds__inlining__Var_49, transform_hlds__inlining__Var_50);
      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_26 == (MR_Integer) 0);
      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
      if (transform_hlds__inlining__succeeded)
        *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_26;
      else
      {
        MR_Word transform_hlds__inlining__Var_27;
        MR_Integer transform_hlds__inlining__Var_51 = (MR_Integer) transform_hlds__inlining__ArgX2_6;
        MR_Integer transform_hlds__inlining__Var_52 = (MR_Integer) transform_hlds__inlining__ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_27, transform_hlds__inlining__Var_51, transform_hlds__inlining__Var_52);
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_27 == (MR_Integer) 0);
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
        if (transform_hlds__inlining__succeeded)
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_27;
        else
        {
          MR_Word transform_hlds__inlining__Var_28;
          MR_Integer transform_hlds__inlining__Var_53 = (MR_Integer) transform_hlds__inlining__ArgX3_8;
          MR_Integer transform_hlds__inlining__Var_54 = (MR_Integer) transform_hlds__inlining__ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_28, transform_hlds__inlining__Var_53, transform_hlds__inlining__Var_54);
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_28 == (MR_Integer) 0);
          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
          if (transform_hlds__inlining__succeeded)
            *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_28;
          else
          {
            MR_Word transform_hlds__inlining__Var_29;

            mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_29, transform_hlds__inlining__ArgX4_10, transform_hlds__inlining__ArgY4_11);
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_29 == (MR_Integer) 0);
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
            if (transform_hlds__inlining__succeeded)
              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_29;
            else
            {
              MR_Word transform_hlds__inlining__Var_30;

              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_30, transform_hlds__inlining__ArgX5_12, transform_hlds__inlining__ArgY5_13);
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_30 == (MR_Integer) 0);
              transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
              if (transform_hlds__inlining__succeeded)
                *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_30;
              else
              {
                MR_Word transform_hlds__inlining__Var_31;

                mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_31, transform_hlds__inlining__ArgX6_14, transform_hlds__inlining__ArgY6_15);
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_31 == (MR_Integer) 0);
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                if (transform_hlds__inlining__succeeded)
                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_31;
                else
                {
                  MR_Word transform_hlds__inlining__Var_32;

                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_32, transform_hlds__inlining__ArgX7_16, transform_hlds__inlining__ArgY7_17);
                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_32 == (MR_Integer) 0);
                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                  if (transform_hlds__inlining__succeeded)
                    *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_32;
                  else
                  {
                    MR_Word transform_hlds__inlining__Var_33;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_33, transform_hlds__inlining__ArgX8_18, transform_hlds__inlining__ArgY8_19);
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_33 == (MR_Integer) 0);
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                    if (transform_hlds__inlining__succeeded)
                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_33;
                    else
                    {
                      MR_Word transform_hlds__inlining__Var_34;
                      MR_Integer transform_hlds__inlining__Var_55 = (MR_Integer) transform_hlds__inlining__ArgX9_20;
                      MR_Integer transform_hlds__inlining__Var_56 = (MR_Integer) transform_hlds__inlining__ArgY9_21;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_34, transform_hlds__inlining__Var_55, transform_hlds__inlining__Var_56);
                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_34 == (MR_Integer) 0);
                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                      if (transform_hlds__inlining__succeeded)
                        *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_34;
                      else
                      {
                        MR_Word transform_hlds__inlining__Var_35;
                        MR_Integer transform_hlds__inlining__Var_57 = (MR_Integer) transform_hlds__inlining__ArgX10_22;
                        MR_Integer transform_hlds__inlining__Var_58 = (MR_Integer) transform_hlds__inlining__ArgY10_23;

                        mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_35, transform_hlds__inlining__Var_57, transform_hlds__inlining__Var_58);
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_35 == (MR_Integer) 0);
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                        if (transform_hlds__inlining__succeeded)
                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_35;
                        else
                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_2[2], transform_hlds__inlining__HeadVar__1_1, ((MR_Box) (transform_hlds__inlining__ArgX11_24)), ((MR_Box) (transform_hlds__inlining__ArgY11_25)));
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
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__CastX_25 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
    MR_Integer transform_hlds__inlining__CastY_26 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_25 == transform_hlds__inlining__CastY_26);
    if (transform_hlds__inlining__succeeded)
      transform_hlds__inlining__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__inlining__TypeInfo_27_27;
      MR_Word transform_hlds__inlining__ArgX1_3 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY1_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX2_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY2_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Integer transform_hlds__inlining__ArgX4_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer transform_hlds__inlining__ArgY4_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer transform_hlds__inlining__ArgX5_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 2)));
      MR_Integer transform_hlds__inlining__ArgY5_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer transform_hlds__inlining__ArgX6_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 3)));
      MR_Integer transform_hlds__inlining__ArgY6_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
      MR_Integer transform_hlds__inlining__ArgX7_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 4)));
      MR_Integer transform_hlds__inlining__ArgY7_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
      MR_Integer transform_hlds__inlining__ArgX8_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)));
      MR_Integer transform_hlds__inlining__ArgY8_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word transform_hlds__inlining__ArgX9_19 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 6)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY9_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX10_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY10_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word transform_hlds__inlining__ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));

      transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX1_3 == transform_hlds__inlining__ArgY1_4);
      if (transform_hlds__inlining__succeeded)
      {
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX2_5 == transform_hlds__inlining__ArgY2_6);
        if (transform_hlds__inlining__succeeded)
        {
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX3_7 == transform_hlds__inlining__ArgY3_8);
          if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX4_9 == transform_hlds__inlining__ArgY4_10);
            if (transform_hlds__inlining__succeeded)
            {
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX5_11 == transform_hlds__inlining__ArgY5_12);
              if (transform_hlds__inlining__succeeded)
              {
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX6_13 == transform_hlds__inlining__ArgY6_14);
                if (transform_hlds__inlining__succeeded)
                {
                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX7_15 == transform_hlds__inlining__ArgY7_16);
                  if (transform_hlds__inlining__succeeded)
                  {
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX8_17 == transform_hlds__inlining__ArgY8_18);
                    if (transform_hlds__inlining__succeeded)
                    {
                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX9_19 == transform_hlds__inlining__ArgY9_20);
                      if (transform_hlds__inlining__succeeded)
                      {
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX10_21 == transform_hlds__inlining__ArgY10_22);
                        if (transform_hlds__inlining__succeeded)
                        {
                          transform_hlds__inlining__TypeInfo_27_27 = (MR_Word) &transform_hlds__inlining_scalar_common_2[2];
                          transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_27_27, ((MR_Box) (transform_hlds__inlining__ArgX11_23)), ((MR_Box) (transform_hlds__inlining__ArgY11_24)));
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
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
  MR_Word * transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__CastX_51 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;
    MR_Integer transform_hlds__inlining__CastY_52 = (MR_Integer) transform_hlds__inlining__HeadVar__3_3;

    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_51 == transform_hlds__inlining__CastY_52);
    if (transform_hlds__inlining__succeeded)
      *transform_hlds__inlining__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer transform_hlds__inlining__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer transform_hlds__inlining__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word transform_hlds__inlining__ArgX2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY2_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY3_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__inlining__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word transform_hlds__inlining__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__inlining__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 3)));
      MR_Word transform_hlds__inlining__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__inlining__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 4)));
      MR_Word transform_hlds__inlining__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word transform_hlds__inlining__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 5)));
      MR_Word transform_hlds__inlining__ArgX8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word transform_hlds__inlining__ArgY8_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 6)));
      MR_Word transform_hlds__inlining__ArgX9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word transform_hlds__inlining__ArgY9_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 7)));
      MR_Word transform_hlds__inlining__ArgX10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word transform_hlds__inlining__ArgY10_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 8)));
      MR_Word transform_hlds__inlining__ArgX11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 9)));
      MR_Word transform_hlds__inlining__ArgY11_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 9)));
      MR_Word transform_hlds__inlining__ArgX12_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY12_27 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX13_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY13_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX14_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY14_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX15_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY15_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX16_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY16_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__3_3, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__Var_36;

      mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_36, transform_hlds__inlining__ArgX1_4, transform_hlds__inlining__ArgY1_5);
      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_36 == (MR_Integer) 0);
      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
      if (transform_hlds__inlining__succeeded)
        *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_36;
      else
      {
        MR_Word transform_hlds__inlining__Var_37;
        MR_Integer transform_hlds__inlining__Var_69 = (MR_Integer) transform_hlds__inlining__ArgX2_6;
        MR_Integer transform_hlds__inlining__Var_70 = (MR_Integer) transform_hlds__inlining__ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_37, transform_hlds__inlining__Var_69, transform_hlds__inlining__Var_70);
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_37 == (MR_Integer) 0);
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
        if (transform_hlds__inlining__succeeded)
          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_37;
        else
        {
          MR_Word transform_hlds__inlining__Var_38;
          MR_Integer transform_hlds__inlining__Var_71 = (MR_Integer) transform_hlds__inlining__ArgX3_8;
          MR_Integer transform_hlds__inlining__Var_72 = (MR_Integer) transform_hlds__inlining__ArgY3_9;

          mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_38, transform_hlds__inlining__Var_71, transform_hlds__inlining__Var_72);
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_38 == (MR_Integer) 0);
          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
          if (transform_hlds__inlining__succeeded)
            *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_38;
          else
          {
            MR_Word transform_hlds__inlining__Var_39;

            hlds__hlds_module____Compare____module_info_0_0(&transform_hlds__inlining__Var_39, transform_hlds__inlining__ArgX4_10, transform_hlds__inlining__ArgY4_11);
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_39 == (MR_Integer) 0);
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
            if (transform_hlds__inlining__succeeded)
              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_39;
            else
            {
              MR_Word transform_hlds__inlining__Var_40;

              mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[4], &transform_hlds__inlining__Var_40, ((MR_Box) (transform_hlds__inlining__ArgX5_12)), ((MR_Box) (transform_hlds__inlining__ArgY5_13)));
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_40 == (MR_Integer) 0);
              transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
              if (transform_hlds__inlining__succeeded)
                *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_40;
              else
              {
                MR_Word transform_hlds__inlining__Var_41;

                mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[3], &transform_hlds__inlining__Var_41, ((MR_Box) (transform_hlds__inlining__ArgX6_14)), ((MR_Box) (transform_hlds__inlining__ArgY6_15)));
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_41 == (MR_Integer) 0);
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                if (transform_hlds__inlining__succeeded)
                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_41;
                else
                {
                  MR_Word transform_hlds__inlining__Var_42;

                  mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[3], &transform_hlds__inlining__Var_42, ((MR_Box) (transform_hlds__inlining__ArgX7_16)), ((MR_Box) (transform_hlds__inlining__ArgY7_17)));
                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_42 == (MR_Integer) 0);
                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                  if (transform_hlds__inlining__succeeded)
                    *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_42;
                  else
                  {
                    MR_Word transform_hlds__inlining__Var_43;

                    mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[5], &transform_hlds__inlining__Var_43, ((MR_Box) (transform_hlds__inlining__ArgX8_18)), ((MR_Box) (transform_hlds__inlining__ArgY8_19)));
                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_43 == (MR_Integer) 0);
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                    if (transform_hlds__inlining__succeeded)
                      *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_43;
                    else
                    {
                      MR_Word transform_hlds__inlining__Var_44;

                      mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_2[1], &transform_hlds__inlining__Var_44, ((MR_Box) (transform_hlds__inlining__ArgX9_20)), ((MR_Box) (transform_hlds__inlining__ArgY9_21)));
                      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_44 == (MR_Integer) 0);
                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                      if (transform_hlds__inlining__succeeded)
                        *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_44;
                      else
                      {
                        MR_Word transform_hlds__inlining__Var_45;

                        mercury__builtin__compare_3_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[6], &transform_hlds__inlining__Var_45, ((MR_Box) (transform_hlds__inlining__ArgX10_22)), ((MR_Box) (transform_hlds__inlining__ArgY10_23)));
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_45 == (MR_Integer) 0);
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                        if (transform_hlds__inlining__succeeded)
                          *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_45;
                        else
                        {
                          MR_Word transform_hlds__inlining__Var_46;

                          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&transform_hlds__inlining__Var_46, transform_hlds__inlining__ArgX11_24, transform_hlds__inlining__ArgY11_25);
                          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_46 == (MR_Integer) 0);
                          transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                          if (transform_hlds__inlining__succeeded)
                            *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_46;
                          else
                          {
                            MR_Word transform_hlds__inlining__Var_47;
                            MR_Integer transform_hlds__inlining__Var_73 = (MR_Integer) transform_hlds__inlining__ArgX12_26;
                            MR_Integer transform_hlds__inlining__Var_74 = (MR_Integer) transform_hlds__inlining__ArgY12_27;

                            mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_47, transform_hlds__inlining__Var_73, transform_hlds__inlining__Var_74);
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_47 == (MR_Integer) 0);
                            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                            if (transform_hlds__inlining__succeeded)
                              *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_47;
                            else
                            {
                              MR_Word transform_hlds__inlining__Var_48;
                              MR_Integer transform_hlds__inlining__Var_75 = (MR_Integer) transform_hlds__inlining__ArgX13_28;
                              MR_Integer transform_hlds__inlining__Var_76 = (MR_Integer) transform_hlds__inlining__ArgY13_29;

                              mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_48, transform_hlds__inlining__Var_75, transform_hlds__inlining__Var_76);
                              transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_48 == (MR_Integer) 0);
                              transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                              if (transform_hlds__inlining__succeeded)
                                *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_48;
                              else
                              {
                                MR_Word transform_hlds__inlining__Var_49;
                                MR_Integer transform_hlds__inlining__Var_77 = (MR_Integer) transform_hlds__inlining__ArgX14_30;
                                MR_Integer transform_hlds__inlining__Var_78 = (MR_Integer) transform_hlds__inlining__ArgY14_31;

                                mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_49, transform_hlds__inlining__Var_77, transform_hlds__inlining__Var_78);
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_49 == (MR_Integer) 0);
                                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                if (transform_hlds__inlining__succeeded)
                                  *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_49;
                                else
                                {
                                  MR_Word transform_hlds__inlining__Var_50;
                                  MR_Integer transform_hlds__inlining__Var_79 = (MR_Integer) transform_hlds__inlining__ArgX15_32;
                                  MR_Integer transform_hlds__inlining__Var_80 = (MR_Integer) transform_hlds__inlining__ArgY15_33;

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&transform_hlds__inlining__Var_50, transform_hlds__inlining__Var_79, transform_hlds__inlining__Var_80);
                                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_50 == (MR_Integer) 0);
                                  transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                                  if (transform_hlds__inlining__succeeded)
                                    *transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__Var_50;
                                  else
                                  {
                                    MR_Integer transform_hlds__inlining__Var_81 = (MR_Integer) transform_hlds__inlining__ArgX16_34;
                                    MR_Integer transform_hlds__inlining__Var_82 = (MR_Integer) transform_hlds__inlining__ArgY16_35;

                                    mercury__private_builtin__builtin_compare_int_3_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__Var_81, transform_hlds__inlining__Var_82);
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
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__CastX_35 = (MR_Integer) transform_hlds__inlining__HeadVar__1_1;
    MR_Integer transform_hlds__inlining__CastY_36 = (MR_Integer) transform_hlds__inlining__HeadVar__2_2;

    transform_hlds__inlining__succeeded = (transform_hlds__inlining__CastX_35 == transform_hlds__inlining__CastY_36);
    if (transform_hlds__inlining__succeeded)
      transform_hlds__inlining__succeeded = MR_TRUE;
    else
    {
      MR_Word transform_hlds__inlining__TypeInfo_38_38;
      MR_Word transform_hlds__inlining__TypeInfo_39_39;
      MR_Word transform_hlds__inlining__TypeInfo_40_40;
      MR_Word transform_hlds__inlining__TypeInfo_41_41;
      MR_Word transform_hlds__inlining__TypeInfo_42_42;
      MR_Word transform_hlds__inlining__TypeInfo_43_43;
      MR_Integer transform_hlds__inlining__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer transform_hlds__inlining__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__inlining__ArgX2_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY2_6 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX3_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY3_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word transform_hlds__inlining__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word transform_hlds__inlining__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 3)));
      MR_Word transform_hlds__inlining__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 3)));
      MR_Word transform_hlds__inlining__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 4)));
      MR_Word transform_hlds__inlining__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 4)));
      MR_Word transform_hlds__inlining__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 5)));
      MR_Word transform_hlds__inlining__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 5)));
      MR_Word transform_hlds__inlining__ArgX8_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 6)));
      MR_Word transform_hlds__inlining__ArgY8_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 6)));
      MR_Word transform_hlds__inlining__ArgX9_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 7)));
      MR_Word transform_hlds__inlining__ArgY9_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 7)));
      MR_Word transform_hlds__inlining__ArgX10_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 8)));
      MR_Word transform_hlds__inlining__ArgY10_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 8)));
      MR_Word transform_hlds__inlining__ArgX11_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 9)));
      MR_Word transform_hlds__inlining__ArgY11_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 9)));
      MR_Word transform_hlds__inlining__ArgX12_25 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY12_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX13_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY13_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX14_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY14_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX15_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY15_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgX16_33 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ArgY16_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);

      transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX1_3 == transform_hlds__inlining__ArgY1_4);
      if (transform_hlds__inlining__succeeded)
      {
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX2_5 == transform_hlds__inlining__ArgY2_6);
        if (transform_hlds__inlining__succeeded)
        {
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX3_7 == transform_hlds__inlining__ArgY3_8);
          if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__succeeded = hlds__hlds_module____Unify____module_info_0_0(transform_hlds__inlining__ArgX4_9, transform_hlds__inlining__ArgY4_10);
            if (transform_hlds__inlining__succeeded)
            {
              transform_hlds__inlining__TypeInfo_38_38 = (MR_Word) &transform_hlds__inlining_scalar_common_1[4];
              transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_38_38, ((MR_Box) (transform_hlds__inlining__ArgX5_11)), ((MR_Box) (transform_hlds__inlining__ArgY5_12)));
              if (transform_hlds__inlining__succeeded)
              {
                transform_hlds__inlining__TypeInfo_39_39 = (MR_Word) &transform_hlds__inlining_scalar_common_1[3];
                transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_39_39, ((MR_Box) (transform_hlds__inlining__ArgX6_13)), ((MR_Box) (transform_hlds__inlining__ArgY6_14)));
                if (transform_hlds__inlining__succeeded)
                {
                  transform_hlds__inlining__TypeInfo_40_40 = (MR_Word) &transform_hlds__inlining_scalar_common_1[3];
                  transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_40_40, ((MR_Box) (transform_hlds__inlining__ArgX7_15)), ((MR_Box) (transform_hlds__inlining__ArgY7_16)));
                  if (transform_hlds__inlining__succeeded)
                  {
                    transform_hlds__inlining__TypeInfo_41_41 = (MR_Word) &transform_hlds__inlining_scalar_common_1[5];
                    transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_41_41, ((MR_Box) (transform_hlds__inlining__ArgX8_17)), ((MR_Box) (transform_hlds__inlining__ArgY8_18)));
                    if (transform_hlds__inlining__succeeded)
                    {
                      transform_hlds__inlining__TypeInfo_42_42 = (MR_Word) &transform_hlds__inlining_scalar_common_2[1];
                      transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_42_42, ((MR_Box) (transform_hlds__inlining__ArgX9_19)), ((MR_Box) (transform_hlds__inlining__ArgY9_20)));
                      if (transform_hlds__inlining__succeeded)
                      {
                        transform_hlds__inlining__TypeInfo_43_43 = (MR_Word) &transform_hlds__inlining_scalar_common_1[6];
                        transform_hlds__inlining__succeeded = mercury__builtin__unify_2_p_0(transform_hlds__inlining__TypeInfo_43_43, ((MR_Box) (transform_hlds__inlining__ArgX10_21)), ((MR_Box) (transform_hlds__inlining__ArgY10_22)));
                        if (transform_hlds__inlining__succeeded)
                        {
                          transform_hlds__inlining__succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(transform_hlds__inlining__ArgX11_23, transform_hlds__inlining__ArgY11_24);
                          if (transform_hlds__inlining__succeeded)
                          {
                            transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX12_25 == transform_hlds__inlining__ArgY12_26);
                            if (transform_hlds__inlining__succeeded)
                            {
                              transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX13_27 == transform_hlds__inlining__ArgY13_28);
                              if (transform_hlds__inlining__succeeded)
                              {
                                transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX14_29 == transform_hlds__inlining__ArgY14_30);
                                if (transform_hlds__inlining__succeeded)
                                {
                                  transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX15_31 == transform_hlds__inlining__ArgY15_32);
                                  if (transform_hlds__inlining__succeeded)
                                    transform_hlds__inlining__succeeded = (transform_hlds__inlining__ArgX16_33 == transform_hlds__inlining__ArgY16_34);
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
        }
      }
    }
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining__mark_proc_to_be_inlined_4_p_0(
  MR_Word transform_hlds__inlining__ModuleInfo_5,
  MR_Word transform_hlds__inlining__PredProcId_6,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_9,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_10)
{
  {
    mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__PredProcId_6)), transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_9, transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_10);
    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Inlining ", transform_hlds__inlining__PredProcId_6, transform_hlds__inlining__ModuleInfo_5);
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_linear_tail_rec_proc_7_p_0(
  MR_Word transform_hlds__inlining__Params_8,
  MR_Word transform_hlds__inlining__ShouldInlineProcs_9,
  MR_Word transform_hlds__inlining__SCC_10,
  MR_Word transform_hlds__inlining__EntryPoints_11,
  MR_Word transform_hlds__inlining__PredProcId_12,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__ShouldInlineTailProcs_14;

    transform_hlds__inlining__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__PredProcId_12)), transform_hlds__inlining__EntryPoints_11);
    if (transform_hlds__inlining__succeeded)
    {
      mercury__set__delete_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__PredProcId_12)), transform_hlds__inlining__SCC_10, &transform_hlds__inlining__ShouldInlineTailProcs_14);
    }
    else
    {
      mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &transform_hlds__inlining__ShouldInlineTailProcs_14);
    }
    transform_hlds__inlining__inline_in_proc_6_p_0(transform_hlds__inlining__Params_8, transform_hlds__inlining__ShouldInlineProcs_9, transform_hlds__inlining__ShouldInlineTailProcs_14, transform_hlds__inlining__PredProcId_12, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_15, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_16);
  }
}

MR_bool MR_CALL 
transform_hlds__inlining__can_inline_proc_5_p_0(
  MR_Word transform_hlds__inlining__ModuleInfo_6,
  MR_Word transform_hlds__inlining__PredId_7,
  MR_Integer transform_hlds__inlining__ProcId_8,
  MR_Word transform_hlds__inlining__BuiltinState_9,
  MR_Word transform_hlds__inlining__MayInlinePromisedPure_10)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__Globals_11;
    MR_Word transform_hlds__inlining__HighLevelCode_12;
    MR_Word transform_hlds__inlining__PredInfo_20;
    MR_Word transform_hlds__inlining__ProcInfo_21;
    MR_Word transform_hlds__inlining__MaybeComplexityProcMap_22;
    MR_Word transform_hlds__inlining__CalledGoal_26;
    MR_Word transform_hlds__inlining__CalledGoalExpr_27;
    MR_Word transform_hlds__inlining__Var_42;
    MR_Word transform_hlds__inlining__Var_46;
    MR_Integer transform_hlds__inlining__Var_45;
    MR_Word transform_hlds__inlining__Var_28;
    MR_Word transform_hlds__inlining__ForeignAttributes_29;
    MR_Word transform_hlds__inlining__Var_30;
    MR_Integer transform_hlds__inlining__Var_31;
    MR_Word transform_hlds__inlining__Var_32;
    MR_Word transform_hlds__inlining__Var_33;
    MR_Word transform_hlds__inlining__Var_34;
    MR_Word transform_hlds__inlining__Var_35;

    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_6, &transform_hlds__inlining__Globals_11);
    libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_11, (MR_Integer) 264, &transform_hlds__inlining__HighLevelCode_12);
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__BuiltinState_9 == (MR_Integer) 1);
    if (transform_hlds__inlining__succeeded)
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_6, transform_hlds__inlining__PredId_7, transform_hlds__inlining__ProcId_8, &transform_hlds__inlining__PredInfo_20, &transform_hlds__inlining__ProcInfo_21);
      transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__inlining__PredInfo_20);
      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
      if (transform_hlds__inlining__succeeded)
      {
        transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__inlining__PredInfo_20);
        if (transform_hlds__inlining__succeeded)
        {
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__inlining__Var_45);
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__ProcId_8 == transform_hlds__inlining__Var_45);
        }
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
        if (transform_hlds__inlining__succeeded)
        {
          transform_hlds__inlining__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__inlining__ProcInfo_21, &transform_hlds__inlining__Var_46);
          transform_hlds__inlining__succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(transform_hlds__inlining__Var_42, transform_hlds__inlining__Var_46);
          if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(transform_hlds__inlining__PredInfo_20);
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
            if (transform_hlds__inlining__succeeded)
            {
              hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(transform_hlds__inlining__ModuleInfo_6, &transform_hlds__inlining__MaybeComplexityProcMap_22);
              if ((transform_hlds__inlining__MaybeComplexityProcMap_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                transform_hlds__inlining__succeeded = MR_TRUE;
              else
              {
                MR_Word transform_hlds__inlining__ComplexityProcMap_24;
                MR_Word transform_hlds__inlining__IsInComplexityMap_25;
                MR_Word transform_hlds__inlining__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeComplexityProcMap_22, (MR_Integer) 0)));
                MR_Integer transform_hlds__inlining__Var_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_43, (MR_Integer) 0)));

                transform_hlds__inlining__ComplexityProcMap_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_43, (MR_Integer) 1)));
                transform_hlds__inlining__IsInComplexityMap_25 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(transform_hlds__inlining__ComplexityProcMap_24, transform_hlds__inlining__ModuleInfo_6, transform_hlds__inlining__PredId_7, transform_hlds__inlining__ProcId_8);
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__IsInComplexityMap_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              if (transform_hlds__inlining__succeeded)
              {
                hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_21, &transform_hlds__inlining__CalledGoal_26);
                transform_hlds__inlining__CalledGoalExpr_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_26, (MR_Integer) 0)));
                transform_hlds__inlining__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_26, (MR_Integer) 1)));
                transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__CalledGoalExpr_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (transform_hlds__inlining__succeeded)
                {
                  transform_hlds__inlining__ForeignAttributes_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_27, (MR_Integer) 1)));
                  transform_hlds__inlining__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_27, (MR_Integer) 2)));
                  transform_hlds__inlining__Var_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_27, (MR_Integer) 3)));
                  transform_hlds__inlining__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_27, (MR_Integer) 4)));
                  transform_hlds__inlining__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_27, (MR_Integer) 5)));
                  transform_hlds__inlining__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_27, (MR_Integer) 6)));
                  transform_hlds__inlining__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_27, (MR_Integer) 7)));
                  {
                    MR_Word transform_hlds__inlining__Globals_36;
                    MR_Word transform_hlds__inlining__Target_37;
                    MR_Word transform_hlds__inlining__ForeignLanguage_38;
                    MR_Word transform_hlds__inlining__MaybeMayDuplicate_39;
                    MR_Word transform_hlds__inlining__Detism_40;

                    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_6, &transform_hlds__inlining__Globals_36);
                    libs__globals__get_target_2_p_0(transform_hlds__inlining__Globals_36, &transform_hlds__inlining__Target_37);
                    transform_hlds__inlining__ForeignLanguage_38 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(transform_hlds__inlining__ForeignAttributes_29);
                    switch (transform_hlds__inlining__ForeignLanguage_38) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_37 == (MR_Integer) 0);
                        break;
                      case (MR_Integer) 1:
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_37 == (MR_Integer) 1);
                        break;
                      case (MR_Integer) 3:
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_37 == (MR_Integer) 3);
                        break;
                      case (MR_Integer) 2:
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_37 == (MR_Integer) 2);
                        break;
                    }
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                    if (transform_hlds__inlining__succeeded)
                    {
                      transform_hlds__inlining__MaybeMayDuplicate_39 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(transform_hlds__inlining__ForeignAttributes_29);
                      if ((transform_hlds__inlining__MaybeMayDuplicate_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        transform_hlds__inlining__succeeded = MR_TRUE;
                      else
                      {
                        MR_Word transform_hlds__inlining__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeMayDuplicate_39, (MR_Integer) 0)));

                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_44 == (MR_Integer) 0);
                      }
                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                      if (transform_hlds__inlining__succeeded)
                      {
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__HighLevelCode_12 == (MR_Integer) 0);
                        if (transform_hlds__inlining__succeeded)
                        {
                          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__inlining__ProcInfo_21, &transform_hlds__inlining__Detism_40);
                          switch (transform_hlds__inlining__Detism_40) {
                            default:
                              transform_hlds__inlining__succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 2:
                              transform_hlds__inlining__succeeded = MR_TRUE;
                              break;
                            case (MR_Integer) 3:
                              transform_hlds__inlining__succeeded = MR_TRUE;
                              break;
                          }
                        }
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                      }
                    }
                  }
                }
                else
                  transform_hlds__inlining__succeeded = MR_TRUE;
                if (transform_hlds__inlining__succeeded)
                  switch (transform_hlds__inlining__MayInlinePromisedPure_10) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      transform_hlds__inlining__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word transform_hlds__inlining__MaybePromisedPurity_41;

                        hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(transform_hlds__inlining__PredInfo_20, &transform_hlds__inlining__MaybePromisedPurity_41);
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__MaybePromisedPurity_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      break;
                  }
              }
            }
          }
        }
      }
    }
    return transform_hlds__inlining__succeeded;
  }
}

void MR_CALL 
transform_hlds__inlining__rename_goal_11_p_0(
  MR_Word transform_hlds__inlining__HeadVars_12,
  MR_Word transform_hlds__inlining__ArgVars_13,
  MR_Word transform_hlds__inlining__VarSet0_14,
  MR_Word transform_hlds__inlining__CalleeVarSet_15,
  MR_Word * transform_hlds__inlining__VarSet_16,
  MR_Word transform_hlds__inlining__VarTypes1_17,
  MR_Word transform_hlds__inlining__CalleeVarTypes_18,
  MR_Word * transform_hlds__inlining__VarTypes_19,
  MR_Word * transform_hlds__inlining__Renaming_20,
  MR_Word transform_hlds__inlining__CalledGoal_21,
  MR_Word * transform_hlds__inlining__Goal_22)
{
  {
    MR_Word transform_hlds__inlining__TypeInfo_25_25 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
    MR_Word transform_hlds__inlining__Renaming0_23;
    MR_Word transform_hlds__inlining__CalleeListOfVars_24;

    mercury__map__from_corresponding_lists_3_p_0(transform_hlds__inlining__TypeInfo_25_25, transform_hlds__inlining__TypeInfo_25_25, transform_hlds__inlining__HeadVars_12, transform_hlds__inlining__ArgVars_13, &transform_hlds__inlining__Renaming0_23);
    mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__inlining__CalleeVarSet_15, &transform_hlds__inlining__CalleeListOfVars_24);
    hlds__goal_util__clone_variables_9_p_0(transform_hlds__inlining__CalleeListOfVars_24, transform_hlds__inlining__CalleeVarSet_15, transform_hlds__inlining__CalleeVarTypes_18, transform_hlds__inlining__VarSet0_14, transform_hlds__inlining__VarSet_16, transform_hlds__inlining__VarTypes1_17, transform_hlds__inlining__VarTypes_19, transform_hlds__inlining__Renaming0_23, transform_hlds__inlining__Renaming_20);
    hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(*transform_hlds__inlining__Renaming_20, transform_hlds__inlining__CalledGoal_21, transform_hlds__inlining__Goal_22);
  }
}

MR_bool MR_CALL 
transform_hlds__inlining__is_simple_clause_list_2_p_0(
  MR_Word transform_hlds__inlining__Clauses_3,
  MR_Integer transform_hlds__inlining__SimpleThreshold_4)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__Size_5;

    hlds__goal_util__clause_list_size_2_p_0(transform_hlds__inlining__Clauses_3, &transform_hlds__inlining__Size_5);
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__SimpleThreshold_4);
    if (!(transform_hlds__inlining__succeeded))
    {
      MR_Word transform_hlds__inlining__Clause_6;
      MR_Word transform_hlds__inlining__Goal_7;
      MR_Word transform_hlds__inlining__Var_8;
      MR_Integer transform_hlds__inlining__Var_9;
      MR_Integer transform_hlds__inlining__Var_10;

      transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Clauses_3)) == (MR_mktag((MR_Integer) 1)));
      if (transform_hlds__inlining__succeeded)
      {
        transform_hlds__inlining__Clause_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Clauses_3, (MR_Integer) 0)));
        transform_hlds__inlining__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Clauses_3, (MR_Integer) 1)));
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (transform_hlds__inlining__succeeded)
        {
          transform_hlds__inlining__Goal_7 = hlds__hlds_clauses__clause_body_1_f_0(transform_hlds__inlining__Clause_6);
          transform_hlds__inlining__Var_10 = (MR_Integer) 3;
          transform_hlds__inlining__Var_9 = (transform_hlds__inlining__SimpleThreshold_4 * transform_hlds__inlining__Var_10);
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__Var_9);
          if (transform_hlds__inlining__succeeded)
            transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__Goal_7);
        }
      }
    }
    return transform_hlds__inlining__succeeded;
  }
}

void MR_CALL 
transform_hlds__inlining__inline_in_module_2_p_0(
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_22)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__Globals_4;
    MR_Word transform_hlds__inlining__Simple_5;
    MR_Word transform_hlds__inlining__SingleUse_6;
    MR_Word transform_hlds__inlining__LinearTailRec_7;
    MR_Integer transform_hlds__inlining__LinearTailRecMaxExtra_8;
    MR_Integer transform_hlds__inlining__CallCost_9;
    MR_Integer transform_hlds__inlining__CompoundThreshold_10;
    MR_Integer transform_hlds__inlining__SimpleThreshold_11;
    MR_Integer transform_hlds__inlining__VarThreshold_12;
    MR_Word transform_hlds__inlining__HighLevelCode_13;
    MR_Word transform_hlds__inlining__TraceLevel_14;
    MR_Word transform_hlds__inlining__AnyTracing_15;
    MR_Word transform_hlds__inlining__NeededMap_16;
    MR_Word transform_hlds__inlining__Params_17;
    MR_Word transform_hlds__inlining__DepInfo_18;
    MR_Word transform_hlds__inlining__BottomUpSCCsEntryPoints_19;
    MR_Word transform_hlds__inlining__ShouldInlineProcs0_20;
    MR_Word transform_hlds__inlining__Var_32;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_36_36;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_37_37;

    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_21, &transform_hlds__inlining__Globals_4);
    libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 342, &transform_hlds__inlining__Simple_5);
    libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 344, &transform_hlds__inlining__SingleUse_6);
    libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 350, &transform_hlds__inlining__LinearTailRec_7);
    libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 351, &transform_hlds__inlining__LinearTailRecMaxExtra_8);
    libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 345, &transform_hlds__inlining__CallCost_9);
    libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 346, &transform_hlds__inlining__CompoundThreshold_10);
    libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 347, &transform_hlds__inlining__SimpleThreshold_11);
    libs__globals__lookup_int_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 348, &transform_hlds__inlining__VarThreshold_12);
    libs__globals__lookup_bool_option_3_p_0(transform_hlds__inlining__Globals_4, (MR_Integer) 264, &transform_hlds__inlining__HighLevelCode_13);
    libs__globals__get_trace_level_2_p_0(transform_hlds__inlining__Globals_4, &transform_hlds__inlining__TraceLevel_14);
    transform_hlds__inlining__Var_32 = libs__trace_params__given_trace_level_is_none_1_f_0(transform_hlds__inlining__TraceLevel_14);
    transform_hlds__inlining__AnyTracing_15 = mercury__bool__not_1_f_0(transform_hlds__inlining__Var_32);
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__SingleUse_6 == (MR_Integer) 1);
    if (!(transform_hlds__inlining__succeeded))
    {
      transform_hlds__inlining__succeeded = (transform_hlds__inlining__CompoundThreshold_10 > (MR_Integer) 0);
    }
    if (transform_hlds__inlining__succeeded)
      transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_21, &transform_hlds__inlining__NeededMap_16);
    else
    {
      mercury__map__init_1_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, &transform_hlds__inlining__NeededMap_16);
    }
    {
      transform_hlds__inlining__Params_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_17, 0) = ((MR_Box) ((transform_hlds__inlining__Simple_5 | ((((transform_hlds__inlining__SingleUse_6 << (MR_Integer) 1)) | ((transform_hlds__inlining__LinearTailRec_7 << (MR_Integer) 2)))))));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_17, 1) = ((MR_Box) (transform_hlds__inlining__LinearTailRecMaxExtra_8));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_17, 2) = ((MR_Box) (transform_hlds__inlining__CallCost_9));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_17, 3) = ((MR_Box) (transform_hlds__inlining__CompoundThreshold_10));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_17, 4) = ((MR_Box) (transform_hlds__inlining__SimpleThreshold_11));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_17, 5) = ((MR_Box) (transform_hlds__inlining__VarThreshold_12));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_17, 6) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_13 | ((transform_hlds__inlining__AnyTracing_15 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_17, 7) = ((MR_Box) (transform_hlds__inlining__NeededMap_16));
    }
    switch (transform_hlds__inlining__LinearTailRec_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_21, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_36_36, &transform_hlds__inlining__DepInfo_18);
        break;
      case (MR_Integer) 1:
        {
          MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_34_34;

          hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_21, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_34_34, &transform_hlds__inlining__DepInfo_18);
          hlds__mark_tail_calls__mark_self_and_mutual_tail_rec_calls_in_module_3_p_0(transform_hlds__inlining__DepInfo_18, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_34_34, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_36_36);
        }
        break;
    }
    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_36_36, transform_hlds__inlining__DepInfo_18, &transform_hlds__inlining__BottomUpSCCsEntryPoints_19);
    mercury__set__init_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, &transform_hlds__inlining__ShouldInlineProcs0_20);
    transform_hlds__inlining__inline_in_sccs_5_p_0(transform_hlds__inlining__Params_17, transform_hlds__inlining__BottomUpSCCsEntryPoints_19, transform_hlds__inlining__ShouldInlineProcs0_20, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_36_36, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_37_37);
    hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_37_37, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_22);
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_sccs_5_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__HeadVar__3_3,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((transform_hlds__inlining__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_5 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_4;
    else
    {
      MR_Word transform_hlds__inlining__SCCEntryPoints_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word transform_hlds__inlining__SCCsEntryPoints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_19_19;
      MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_20_20;

      transform_hlds__inlining__inline_in_scc_6_p_0(transform_hlds__inlining__HeadVar__1_1, transform_hlds__inlining__SCCEntryPoints_12, transform_hlds__inlining__HeadVar__3_3, &transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_19_19, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_4, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_20_20);
      /* direct tailcall eliminated */
      {
        MR_Word transform_hlds__inlining__next_value_of_HeadVar__2_2 = transform_hlds__inlining__SCCsEntryPoints_13;
        MR_Word transform_hlds__inlining__next_value_of_HeadVar__3_3 = transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_19_19;
        MR_Word transform_hlds__inlining__next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_20_20;

        transform_hlds__inlining__HeadVar__2_2 = transform_hlds__inlining__next_value_of_HeadVar__2_2;
        transform_hlds__inlining__HeadVar__3_3 = transform_hlds__inlining__next_value_of_HeadVar__3_3;
        transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_4 = transform_hlds__inlining__next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_3(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box * transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__inlining__closure = transform_hlds__inlining__closure_arg;
    MR_Word transform_hlds__inlining__conv2_STATE_VARIABLE_ModuleInfo_54;

    transform_hlds__inlining__inline_in_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2), &transform_hlds__inlining__conv2_STATE_VARIABLE_ModuleInfo_54);
    *transform_hlds__inlining__wrapper_arg_3 = ((MR_Box) (transform_hlds__inlining__conv2_STATE_VARIABLE_ModuleInfo_54));
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_2(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box * transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__inlining__closure = transform_hlds__inlining__closure_arg;
    MR_Word transform_hlds__inlining__conv0_STATE_VARIABLE_ShouldInlineProcs_10;

    transform_hlds__inlining__mark_proc_to_be_inlined_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2), &transform_hlds__inlining__conv0_STATE_VARIABLE_ShouldInlineProcs_10);
    *transform_hlds__inlining__wrapper_arg_3 = ((MR_Box) (transform_hlds__inlining__conv0_STATE_VARIABLE_ShouldInlineProcs_10));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_1(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Box transform_hlds__inlining__closure = transform_hlds__inlining__closure_arg;

    transform_hlds__inlining__succeeded = transform_hlds__inlining__should_proc_be_inlined_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__inlining__wrapper_arg_1));
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0(
  MR_Word transform_hlds__inlining__Params_7,
  MR_Word transform_hlds__inlining__SCCEntryPoints_8,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_20,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_21,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word transform_hlds__inlining__SCC_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__SCCEntryPoints_8, (MR_Integer) 0)));
    MR_Word transform_hlds__inlining__SCCProcs_14;
    MR_Word transform_hlds__inlining___CalledFromHigherSCCs_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__SCCEntryPoints_8, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining___Exported_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__SCCEntryPoints_8, (MR_Integer) 2)));

    transform_hlds__inlining__SCCProcs_14 = mercury__set__to_sorted_list_1_f_0(transform_hlds__inlining__TypeCtorInfo_45_45, transform_hlds__inlining__SCC_11);
    if ((transform_hlds__inlining__SCCProcs_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.inlining.inline_in_scc\'/6", (MR_String) "empty SCC");
        return;
      }
    }
    else
    {
      MR_Word transform_hlds__inlining__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__SCCProcs_14, (MR_Integer) 1)));
      MR_Word transform_hlds__inlining__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__SCCProcs_14, (MR_Integer) 0)));

      if ((transform_hlds__inlining__Var_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word transform_hlds__inlining__Var_30;

        transform_hlds__inlining__Var_30 = mercury__set__init_0_f_0(transform_hlds__inlining__TypeCtorInfo_45_45);
        transform_hlds__inlining__inline_in_proc_6_p_0(transform_hlds__inlining__Params_7, transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_20, transform_hlds__inlining__Var_30, transform_hlds__inlining__Var_47, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_23);
        transform_hlds__inlining__succeeded = transform_hlds__inlining__should_proc_be_inlined_3_p_0(transform_hlds__inlining__Params_7, *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_23, transform_hlds__inlining__Var_47);
        if (transform_hlds__inlining__succeeded)
        {
          mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__Var_47)), transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_20, transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_21);
          hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Inlining ", transform_hlds__inlining__Var_47, *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_23);
        }
        else
          *transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_21 = transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_20;
      }
      else
      {
        MR_Word transform_hlds__inlining__LinearTailRec_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 0)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Integer transform_hlds__inlining__Var_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 1)));
        MR_Integer transform_hlds__inlining__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 2)));
        MR_Integer transform_hlds__inlining__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 3)));
        MR_Integer transform_hlds__inlining__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 4)));
        MR_Integer transform_hlds__inlining__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 5)));
        MR_Word transform_hlds__inlining__Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 6)))) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        MR_Word transform_hlds__inlining__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 7)));

        switch (transform_hlds__inlining__LinearTailRec_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__inlining__TypeCtorInfo_23_82;
              MR_Word transform_hlds__inlining__ShouldInlineSCCProcs_74;
              MR_Word transform_hlds__inlining__Var_75;
              MR_Word transform_hlds__inlining__Var_76;
              MR_Word transform_hlds__inlining__Var_78;
              MR_Word transform_hlds__inlining__Var_80;
              MR_Box transform_hlds__inlining__conv1_STATE_VARIABLE_ShouldInlineProcs_21;
              MR_Box transform_hlds__inlining__conv3_STATE_VARIABLE_ModuleInfo_23;

              {
                transform_hlds__inlining__Var_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_75, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_75, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_scc_6_p_0_1));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_75, 3) = ((MR_Box) (transform_hlds__inlining__Params_7));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_75, 4) = ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_22));
              }
              transform_hlds__inlining__TypeCtorInfo_23_82 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
              mercury__list__filter_3_p_0(transform_hlds__inlining__TypeCtorInfo_23_82, transform_hlds__inlining__Var_75, transform_hlds__inlining__SCCProcs_14, &transform_hlds__inlining__ShouldInlineSCCProcs_74);
              {
                transform_hlds__inlining__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_76, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_76, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_scc_6_p_0_2));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_76, 3) = ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_22));
              }
              mercury__list__foldl_4_p_0(transform_hlds__inlining__TypeCtorInfo_23_82, (MR_Word) &transform_hlds__inlining_scalar_common_1[3], transform_hlds__inlining__Var_76, transform_hlds__inlining__ShouldInlineSCCProcs_74, ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_20)), &transform_hlds__inlining__conv1_STATE_VARIABLE_ShouldInlineProcs_21);
              *transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_21 = ((MR_Word) transform_hlds__inlining__conv1_STATE_VARIABLE_ShouldInlineProcs_21);
              transform_hlds__inlining__Var_80 = mercury__set__init_0_f_0(transform_hlds__inlining__TypeCtorInfo_23_82);
              {
                transform_hlds__inlining__Var_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_78, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_78, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_scc_6_p_0_3));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_78, 3) = ((MR_Box) (transform_hlds__inlining__Params_7));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_78, 4) = ((MR_Box) (*transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_21));
                MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_78, 5) = ((MR_Box) (transform_hlds__inlining__Var_80));
              }
              mercury__list__foldl_4_p_0(transform_hlds__inlining__TypeCtorInfo_23_82, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__inlining__Var_78, transform_hlds__inlining__SCCProcs_14, ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_22)), &transform_hlds__inlining__conv3_STATE_VARIABLE_ModuleInfo_23);
              *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_23 = ((MR_Word) transform_hlds__inlining__conv3_STATE_VARIABLE_ModuleInfo_23);
            }
            break;
          case (MR_Integer) 1:
            transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0(transform_hlds__inlining__Params_7, transform_hlds__inlining__SCCEntryPoints_8, transform_hlds__inlining__SCCProcs_14, transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_20, transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_21, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_22, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_23);
            break;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_proc_6_p_0(
  MR_Word transform_hlds__inlining__Params_7,
  MR_Word transform_hlds__inlining__ShouldInlineProcs_8,
  MR_Word transform_hlds__inlining__ShouldInlineTailProcs_9,
  MR_Word transform_hlds__inlining__PredProcId_10,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_53,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_54)
{
  {
    MR_Word transform_hlds__inlining__TypeCtorInfo_103_103;
    MR_Word transform_hlds__inlining__TypeCtorInfo_104_104;
    MR_Word transform_hlds__inlining__TypeCtorInfo_106_106;
    MR_Integer transform_hlds__inlining__VarThresh_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 5)));
    MR_Word transform_hlds__inlining__HighLevelCode_15 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining__AnyTracing_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining__PredId_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_10, (MR_Integer) 0)));
    MR_Integer transform_hlds__inlining__ProcId_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_10, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__PredTable0_19;
    MR_Word transform_hlds__inlining__ProcTable0_20;
    MR_Word transform_hlds__inlining__UnivQTVars_21;
    MR_Word transform_hlds__inlining__TypeVarSet0_22;
    MR_Word transform_hlds__inlining__Goal0_23;
    MR_Word transform_hlds__inlining__VarSet0_24;
    MR_Word transform_hlds__inlining__VarTypes0_25;
    MR_Word transform_hlds__inlining__RttiVarMaps0_26;
    MR_Word transform_hlds__inlining__InlineInfo0_32;
    MR_Word transform_hlds__inlining__Goal_33;
    MR_Word transform_hlds__inlining__InlineInfo_34;
    MR_Word transform_hlds__inlining__VarSet_42;
    MR_Word transform_hlds__inlining__VarTypes_43;
    MR_Word transform_hlds__inlining__TypeVarSet_44;
    MR_Word transform_hlds__inlining__RttiVarMaps_45;
    MR_Word transform_hlds__inlining__DidInlining_46;
    MR_Word transform_hlds__inlining__InlinedParallel_47;
    MR_Word transform_hlds__inlining__Requantify_48;
    MR_Word transform_hlds__inlining__DetChanged_49;
    MR_Word transform_hlds__inlining__PurityChanged_50;
    MR_Word transform_hlds__inlining__ProcTable_51;
    MR_Word transform_hlds__inlining__PredTable_52;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_55_55;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_56_56;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_59_59;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_60_60;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71;
    MR_Word transform_hlds__inlining__Var_73 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 0)))) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining__Var_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining__Var_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Integer transform_hlds__inlining__Var_76 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 1)));
    MR_Integer transform_hlds__inlining__Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 2)));
    MR_Integer transform_hlds__inlining__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 3)));
    MR_Integer transform_hlds__inlining__Var_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 4)));
    MR_Word transform_hlds__inlining__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_7, (MR_Integer) 7)));
    MR_Box transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_55_55;
    MR_Box transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_56_56;
    MR_Integer transform_hlds__inlining__Var_35;
    MR_Word transform_hlds__inlining__Var_36;
    MR_Word transform_hlds__inlining__Var_37;
    MR_Word transform_hlds__inlining__Var_38;
    MR_Word transform_hlds__inlining__Var_39;
    MR_Word transform_hlds__inlining__Var_40;
    MR_Word transform_hlds__inlining__Var_41;

    hlds__hlds_module__module_info_get_preds_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__inlining__PredTable0_19);
    transform_hlds__inlining__TypeCtorInfo_103_103 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
    transform_hlds__inlining__TypeCtorInfo_104_104 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0;
    mercury__map__lookup_3_p_0(transform_hlds__inlining__TypeCtorInfo_103_103, transform_hlds__inlining__TypeCtorInfo_104_104, transform_hlds__inlining__PredTable0_19, ((MR_Box) (transform_hlds__inlining__PredId_17)), &transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_55_55);
    transform_hlds__inlining__STATE_VARIABLE_PredInfo_55_55 = ((MR_Word) transform_hlds__inlining__conv0_STATE_VARIABLE_PredInfo_55_55);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_55_55, &transform_hlds__inlining__ProcTable0_20);
    transform_hlds__inlining__TypeCtorInfo_106_106 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(transform_hlds__inlining__TypeCtorInfo_106_106, transform_hlds__inlining__ProcTable0_20, transform_hlds__inlining__ProcId_18, &transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_56_56);
    transform_hlds__inlining__STATE_VARIABLE_ProcInfo_56_56 = ((MR_Word) transform_hlds__inlining__conv1_STATE_VARIABLE_ProcInfo_56_56);
    hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_55_55, &transform_hlds__inlining__UnivQTVars_21);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__inlining__STATE_VARIABLE_PredInfo_55_55, &transform_hlds__inlining__TypeVarSet0_22);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__inlining__Goal0_23);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__inlining__VarSet0_24);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__inlining__VarTypes0_25);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__inlining__RttiVarMaps0_26);
    {
      transform_hlds__inlining__InlineInfo0_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 0) = ((MR_Box) (transform_hlds__inlining__VarThresh_14));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 1) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_15 | ((transform_hlds__inlining__AnyTracing_16 << (MR_Integer) 1)))));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 2) = ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_53));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 3) = ((MR_Box) (transform_hlds__inlining__UnivQTVars_21));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 4) = ((MR_Box) (transform_hlds__inlining__ShouldInlineTailProcs_9));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 5) = ((MR_Box) (transform_hlds__inlining__ShouldInlineProcs_8));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 6) = ((MR_Box) (transform_hlds__inlining__VarSet0_24));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 7) = ((MR_Box) (transform_hlds__inlining__VarTypes0_25));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 8) = ((MR_Box) (transform_hlds__inlining__TypeVarSet0_22));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 9) = ((MR_Box) (transform_hlds__inlining__RttiVarMaps0_26));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo0_32, 10) = ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))));
    }
    transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_23, &transform_hlds__inlining__Goal_33, transform_hlds__inlining__InlineInfo0_32, &transform_hlds__inlining__InlineInfo_34);
    transform_hlds__inlining__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 0)));
    transform_hlds__inlining__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 1)))) & (MR_Integer) 1);
    transform_hlds__inlining__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    transform_hlds__inlining__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 2)));
    transform_hlds__inlining__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 3)));
    transform_hlds__inlining__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 4)));
    transform_hlds__inlining__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 5)));
    transform_hlds__inlining__VarSet_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 6)));
    transform_hlds__inlining__VarTypes_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 7)));
    transform_hlds__inlining__TypeVarSet_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 8)));
    transform_hlds__inlining__RttiVarMaps_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 9)));
    transform_hlds__inlining__DidInlining_46 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 10)))) & (MR_Integer) 1);
    transform_hlds__inlining__InlinedParallel_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    transform_hlds__inlining__Requantify_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    transform_hlds__inlining__DetChanged_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    transform_hlds__inlining__PurityChanged_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__InlineInfo_34, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(transform_hlds__inlining__TypeVarSet_44, transform_hlds__inlining__STATE_VARIABLE_PredInfo_55_55, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(transform_hlds__inlining__VarSet_42, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_56_56, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(transform_hlds__inlining__VarTypes_43, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_58_58, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_59_59);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(transform_hlds__inlining__RttiVarMaps_45, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_59_59, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_60_60);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(transform_hlds__inlining__Goal_33, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_60_60, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61);
    switch (transform_hlds__inlining__InlinedParallel_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61;
        break;
      case (MR_Integer) 1:
        {
          hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_61_61, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63);
        }
        break;
    }
    switch (transform_hlds__inlining__Requantify_48) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63;
        break;
      case (MR_Integer) 1:
        {
          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_63_63, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65);
        }
        break;
    }
    switch (transform_hlds__inlining__DidInlining_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_53;
          transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67 = transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65;
        }
        break;
      case (MR_Integer) 1:
        {
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, transform_hlds__inlining__STATE_VARIABLE_ProcInfo_65_65, &transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_53, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68);
        }
        break;
    }
    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(transform_hlds__inlining__TypeCtorInfo_106_106, transform_hlds__inlining__ProcId_18, ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ProcInfo_67_67)), transform_hlds__inlining__ProcTable0_20, &transform_hlds__inlining__ProcTable_51);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(transform_hlds__inlining__ProcTable_51, transform_hlds__inlining__STATE_VARIABLE_PredInfo_57_57, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69);
    switch (transform_hlds__inlining__PurityChanged_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70 = transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69;
        break;
      case (MR_Integer) 1:
        check_hlds__purity__repuritycheck_proc_4_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68, transform_hlds__inlining__PredProcId_10, transform_hlds__inlining__STATE_VARIABLE_PredInfo_69_69, &transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70);
        break;
    }
    mercury__map__det_update_4_p_0(transform_hlds__inlining__TypeCtorInfo_103_103, transform_hlds__inlining__TypeCtorInfo_104_104, ((MR_Box) (transform_hlds__inlining__PredId_17)), ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_PredInfo_70_70)), transform_hlds__inlining__PredTable0_19, &transform_hlds__inlining__PredTable_52);
    hlds__hlds_module__module_info_set_preds_3_p_0(transform_hlds__inlining__PredTable_52, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_68_68, &transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71);
    switch (transform_hlds__inlining__DetChanged_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_54 = transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71;
        break;
      case (MR_Integer) 1:
        check_hlds__det_analysis__det_infer_proc_ignore_msgs_4_p_0(transform_hlds__inlining__PredId_17, transform_hlds__inlining__ProcId_18, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_71_71, transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_54);
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
{
  if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word transform_hlds__inlining__HeadGoal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__inlining__TailGoals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__HeadGoal_12;
    MR_Word transform_hlds__inlining__TailGoals_13;
    MR_Word transform_hlds__inlining__HeadGoalList_14;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_17_17;

    transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__HeadGoal0_8, &transform_hlds__inlining__HeadGoal_12, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_17_17);
    transform_hlds__inlining__inlining_in_par_conj_4_p_0(transform_hlds__inlining__TailGoals0_9, &transform_hlds__inlining__TailGoals_13, transform_hlds__inlining__STATE_VARIABLE_Info_17_17, transform_hlds__inlining__STATE_VARIABLE_Info_4);
    hlds__hlds_goal__goal_to_par_conj_list_2_p_0(transform_hlds__inlining__HeadGoal_12, &transform_hlds__inlining__HeadGoalList_14);
    *transform_hlds__inlining__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__inlining__HeadGoalList_14, transform_hlds__inlining__TailGoals_13);
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
{
  if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word transform_hlds__inlining__HeadGoal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__inlining__TailGoals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__HeadGoal_12;
    MR_Word transform_hlds__inlining__TailGoals_13;
    MR_Word transform_hlds__inlining__HeadGoalList_14;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_17_17;

    transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__HeadGoal0_8, &transform_hlds__inlining__HeadGoal_12, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_17_17);
    transform_hlds__inlining__inlining_in_conj_4_p_0(transform_hlds__inlining__TailGoals0_9, &transform_hlds__inlining__TailGoals_13, transform_hlds__inlining__STATE_VARIABLE_Info_17_17, transform_hlds__inlining__STATE_VARIABLE_Info_4);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(transform_hlds__inlining__HeadGoal_12, &transform_hlds__inlining__HeadGoalList_14);
    *transform_hlds__inlining__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, transform_hlds__inlining__HeadGoalList_14, transform_hlds__inlining__TailGoals_13);
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
{
  if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word transform_hlds__inlining__Case0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__inlining__Cases0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__Case_10;
    MR_Word transform_hlds__inlining__Cases_11;
    MR_Word transform_hlds__inlining__MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 0)));
    MR_Word transform_hlds__inlining__OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__Goal0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case0_8, (MR_Integer) 2)));
    MR_Word transform_hlds__inlining__Goal_16;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_19_19;

    transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_15, &transform_hlds__inlining__Goal_16, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_19_19);
    {
      transform_hlds__inlining__Case_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 0) = ((MR_Box) (transform_hlds__inlining__MainConsId_13));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 1) = ((MR_Box) (transform_hlds__inlining__OtherConsIds_14));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Case_10, 2) = ((MR_Box) (transform_hlds__inlining__Goal_16));
    }
    transform_hlds__inlining__inlining_in_cases_4_p_0(transform_hlds__inlining__Cases0_9, &transform_hlds__inlining__Cases_11, transform_hlds__inlining__STATE_VARIABLE_Info_19_19, transform_hlds__inlining__STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__inlining__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__Cases_11));
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_disjuncts_4_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1,
  MR_Word * transform_hlds__inlining__HeadVar__2_2,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_3,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_4)
{
  if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *transform_hlds__inlining__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *transform_hlds__inlining__STATE_VARIABLE_Info_4 = transform_hlds__inlining__STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word transform_hlds__inlining__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word transform_hlds__inlining__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__Goal_10;
    MR_Word transform_hlds__inlining__Goals_11;
    MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_15_15;

    transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal0_8, &transform_hlds__inlining__Goal_10, transform_hlds__inlining__STATE_VARIABLE_Info_0_3, &transform_hlds__inlining__STATE_VARIABLE_Info_15_15);
    transform_hlds__inlining__inlining_in_disjuncts_4_p_0(transform_hlds__inlining__Goals0_9, &transform_hlds__inlining__Goals_11, transform_hlds__inlining__STATE_VARIABLE_Info_15_15, transform_hlds__inlining__STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *transform_hlds__inlining__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__Goals_11));
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_1(
  void * transform_hlds__inlining__env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

    MR_builtin_longjmp((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_3(
  void * transform_hlds__inlining__env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

    (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVar_78 = ((MR_Word) (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__conv0_ArgVar_78);
    transform_hlds__inlining__inlining_in_call_5_p_0_2(transform_hlds__inlining__env_ptr);
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_2(
  void * transform_hlds__inlining__env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

    {
      MR_Word transform_hlds__inlining__Var_76;
      MR_Word transform_hlds__inlining__Var_77;

      mercury__multi_map__lookup_3_p_0((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_79, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_79, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__MultiMap_73, ((MR_Box) ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVar_78)), &(transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_75);
      (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_75)) == (MR_mktag((MR_Integer) 1)));
      if ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
      {
        transform_hlds__inlining__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_75, (MR_Integer) 0)));
        transform_hlds__inlining__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_75, (MR_Integer) 1)));
        (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = transform_hlds__inlining__tci_vars_different_constraints_2_p_0((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__RttiVarMaps_71, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_75);
        if ((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
          transform_hlds__inlining__inlining_in_call_5_p_0_1(transform_hlds__inlining__env_ptr);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_4(
  void * transform_hlds__inlining__env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * transform_hlds__inlining__env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) transform_hlds__inlining__env_ptr_arg;

    if (MR_builtin_setjmp((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_79, &(transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__conv0_ArgVar_78, (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_28, transform_hlds__inlining__inlining_in_call_5_p_0_3, transform_hlds__inlining__env_ptr);
        (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (transform_hlds__inlining__env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0(
  MR_Word transform_hlds__inlining__GoalExpr0_6,
  MR_Word transform_hlds__inlining__GoalInfo0_7,
  MR_Word * transform_hlds__inlining__Goal_8,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_61,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_62)
{
  {
    struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s transform_hlds__inlining__env;

    {
      MR_Integer transform_hlds__inlining__VarThresh_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 0)));
      MR_Word transform_hlds__inlining__HighLevelCode_11 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__AnyTracing_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__ModuleInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 2)));
      MR_Word transform_hlds__inlining__ExternalTypeParams_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 3)));
      MR_Word transform_hlds__inlining__ShouldInlineTailProcs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 4)));
      MR_Word transform_hlds__inlining__ShouldInlineProcs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 5)));
      MR_Word transform_hlds__inlining__VarSet0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 6)));
      MR_Word transform_hlds__inlining__VarTypes0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 7)));
      MR_Word transform_hlds__inlining__TypeVarSet0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 8)));
      MR_Word transform_hlds__inlining__RttiVarMaps0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 9)));
      MR_Word transform_hlds__inlining__InlinedParallel0_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__Requantify0_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__DetChanged0_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__PurityChanged0_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining__PredId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 0)));
      MR_Integer transform_hlds__inlining__ProcId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 1)));
      MR_Word transform_hlds__inlining__PredInfo_32;
      MR_Word transform_hlds__inlining__ProcInfo_33;
      MR_Word transform_hlds__inlining__ShouldInline_34;
      MR_Word transform_hlds__inlining___DidInlining0_21 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_0_61, (MR_Integer) 10)))) & (MR_Integer) 1);
      MR_Word transform_hlds__inlining___Builtin_29;
      MR_Word transform_hlds__inlining___Context_30;
      MR_Word transform_hlds__inlining___SymName_31;
      MR_Word transform_hlds__inlining__TailRec_35;
      MR_Word transform_hlds__inlining__UserReq_36;
      MR_Word transform_hlds__inlining__HeadVars_72;

      (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 2)));
      transform_hlds__inlining___Builtin_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 3)));
      transform_hlds__inlining___Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 4)));
      transform_hlds__inlining___SymName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 5)));
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_13, transform_hlds__inlining__PredId_26, transform_hlds__inlining__ProcId_27, &transform_hlds__inlining__PredInfo_32, &transform_hlds__inlining__ProcInfo_33);
      transform_hlds__inlining__should_inline_at_call_site_4_p_0(transform_hlds__inlining__STATE_VARIABLE_Info_0_61, transform_hlds__inlining__GoalExpr0_6, transform_hlds__inlining__GoalInfo0_7, &transform_hlds__inlining__ShouldInline_34);
      (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__ShouldInline_34)) == (MR_mktag((MR_Integer) 1)));
      if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
      {
        transform_hlds__inlining__TailRec_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__ShouldInline_34, (MR_Integer) 0)));
        transform_hlds__inlining__UserReq_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__ShouldInline_34, (MR_Integer) 1)));
        switch (transform_hlds__inlining__UserReq_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word transform_hlds__inlining__TypeCtorInfo_66_66 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
              MR_Word transform_hlds__inlining__TypeInfo_67_67;
              MR_Word transform_hlds__inlining__ListOfVars_37;
              MR_Integer transform_hlds__inlining__ThisMany_38;
              MR_Word transform_hlds__inlining__CalleeVarSet_39;
              MR_Word transform_hlds__inlining__CalleeListOfVars_40;
              MR_Integer transform_hlds__inlining__CalleeThisMany_41;
              MR_Integer transform_hlds__inlining__TotalVars_42;

              mercury__varset__vars_2_p_0(transform_hlds__inlining__TypeCtorInfo_66_66, transform_hlds__inlining__VarSet0_17, &transform_hlds__inlining__ListOfVars_37);
              transform_hlds__inlining__TypeInfo_67_67 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
              mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_67_67, transform_hlds__inlining__ListOfVars_37, &transform_hlds__inlining__ThisMany_38);
              hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__ProcInfo_33, &transform_hlds__inlining__CalleeVarSet_39);
              mercury__varset__vars_2_p_0(transform_hlds__inlining__TypeCtorInfo_66_66, transform_hlds__inlining__CalleeVarSet_39, &transform_hlds__inlining__CalleeListOfVars_40);
              mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_67_67, transform_hlds__inlining__CalleeListOfVars_40, &transform_hlds__inlining__CalleeThisMany_41);
              transform_hlds__inlining__TotalVars_42 = (transform_hlds__inlining__ThisMany_38 + transform_hlds__inlining__CalleeThisMany_41);
              (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (transform_hlds__inlining__TotalVars_42 <= transform_hlds__inlining__VarThresh_10);
            }
            break;
          case (MR_Integer) 1:
            (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = MR_TRUE;
            break;
        }
        if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
        {
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__ProcInfo_33, &(transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__RttiVarMaps_71);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__inlining__ProcInfo_33, &transform_hlds__inlining__HeadVars_72);
          (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_79 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
          mercury__multi_map__from_corresponding_lists_3_p_0((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_79, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_79, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_28, transform_hlds__inlining__HeadVars_72, &(transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__MultiMap_73);
          transform_hlds__inlining__inlining_in_call_5_p_0_4(&transform_hlds__inlining__env);
          (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = !((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded);
        }
      }
      if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
      {
        MR_Word transform_hlds__inlining__VarSet_43;
        MR_Word transform_hlds__inlining__VarTypes_44;
        MR_Word transform_hlds__inlining__TypeVarSet_45;
        MR_Word transform_hlds__inlining__RttiVarMaps_46;
        MR_Word transform_hlds__inlining__Goal1_47;
        MR_Word transform_hlds__inlining__HasParallelConj_49;
        MR_Word transform_hlds__inlining__InlinedParallel_50;
        MR_Word transform_hlds__inlining__NonLocals0_51;
        MR_Word transform_hlds__inlining__Requantify_52;
        MR_Word transform_hlds__inlining__GoalInfo1_54;
        MR_Word transform_hlds__inlining__Determinism0_55;
        MR_Word transform_hlds__inlining__Determinism1_56;
        MR_Word transform_hlds__inlining__DetChanged_57;
        MR_Word transform_hlds__inlining__Purity0_58;
        MR_Word transform_hlds__inlining__Purity1_59;
        MR_Word transform_hlds__inlining__PurityChanged_60;
        MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_64_64;
        MR_Word transform_hlds__inlining__TypeCtorInfo_68_68;
        MR_Word transform_hlds__inlining__Var_63;
        MR_Word transform_hlds__inlining__Var_53;

        transform_hlds__inlining__do_inline_call_13_p_0(transform_hlds__inlining__ExternalTypeParams_14, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_28, transform_hlds__inlining__PredInfo_32, transform_hlds__inlining__ProcInfo_33, transform_hlds__inlining__VarSet0_17, &transform_hlds__inlining__VarSet_43, transform_hlds__inlining__VarTypes0_18, &transform_hlds__inlining__VarTypes_44, transform_hlds__inlining__TypeVarSet0_19, &transform_hlds__inlining__TypeVarSet_45, transform_hlds__inlining__RttiVarMaps0_20, &transform_hlds__inlining__RttiVarMaps_46, &transform_hlds__inlining__Goal1_47);
        hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(transform_hlds__inlining__ProcInfo_33, &transform_hlds__inlining__HasParallelConj_49);
        switch (transform_hlds__inlining__HasParallelConj_49) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            transform_hlds__inlining__InlinedParallel_50 = transform_hlds__inlining__InlinedParallel0_22;
            break;
          case (MR_Integer) 0:
            transform_hlds__inlining__InlinedParallel_50 = (MR_Integer) 1;
            break;
        }
        transform_hlds__inlining__NonLocals0_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(transform_hlds__inlining__GoalInfo0_7);
        transform_hlds__inlining__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        transform_hlds__inlining__Var_63 = parse_tree__set_of_var__list_to_set_1_f_0(transform_hlds__inlining__TypeCtorInfo_68_68, (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_28);
        (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = parse_tree__set_of_var__equal_2_p_0(transform_hlds__inlining__TypeCtorInfo_68_68, transform_hlds__inlining__NonLocals0_51, transform_hlds__inlining__Var_63);
        if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
          transform_hlds__inlining__Requantify_52 = transform_hlds__inlining__Requantify0_23;
        else
          transform_hlds__inlining__Requantify_52 = (MR_Integer) 1;
        transform_hlds__inlining__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal1_47, (MR_Integer) 0)));
        transform_hlds__inlining__GoalInfo1_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal1_47, (MR_Integer) 1)));
        transform_hlds__inlining__Determinism0_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__inlining__GoalInfo0_7);
        transform_hlds__inlining__Determinism1_56 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(transform_hlds__inlining__GoalInfo1_54);
        (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (transform_hlds__inlining__Determinism0_55 == transform_hlds__inlining__Determinism1_56);
        if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
          transform_hlds__inlining__DetChanged_57 = transform_hlds__inlining__DetChanged0_24;
        else
          transform_hlds__inlining__DetChanged_57 = (MR_Integer) 1;
        transform_hlds__inlining__Purity0_58 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__inlining__GoalInfo0_7);
        transform_hlds__inlining__Purity1_59 = hlds__hlds_goal__goal_info_get_purity_1_f_0(transform_hlds__inlining__GoalInfo1_54);
        (transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (transform_hlds__inlining__Purity0_58 == transform_hlds__inlining__Purity1_59);
        if ((transform_hlds__inlining__env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
          transform_hlds__inlining__PurityChanged_60 = transform_hlds__inlining__PurityChanged0_25;
        else
          transform_hlds__inlining__PurityChanged_60 = (MR_Integer) 1;
        {
          transform_hlds__inlining__STATE_VARIABLE_Info_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 0) = ((MR_Box) (transform_hlds__inlining__VarThresh_10));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 1) = ((MR_Box) ((transform_hlds__inlining__HighLevelCode_11 | ((transform_hlds__inlining__AnyTracing_12 << (MR_Integer) 1)))));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 2) = ((MR_Box) (transform_hlds__inlining__ModuleInfo_13));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 3) = ((MR_Box) (transform_hlds__inlining__ExternalTypeParams_14));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 4) = ((MR_Box) (transform_hlds__inlining__ShouldInlineTailProcs_15));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 5) = ((MR_Box) (transform_hlds__inlining__ShouldInlineProcs_16));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 6) = ((MR_Box) (transform_hlds__inlining__VarSet_43));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 7) = ((MR_Box) (transform_hlds__inlining__VarTypes_44));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 8) = ((MR_Box) (transform_hlds__inlining__TypeVarSet_45));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 9) = ((MR_Box) (transform_hlds__inlining__RttiVarMaps_46));
          MR_hl_field(MR_mktag(0), transform_hlds__inlining__STATE_VARIABLE_Info_64_64, 10) = ((MR_Box) (((MR_Integer) 1 | ((((transform_hlds__inlining__InlinedParallel_50 << (MR_Integer) 1)) | ((((transform_hlds__inlining__Requantify_52 << (MR_Integer) 2)) | ((((transform_hlds__inlining__DetChanged_57 << (MR_Integer) 3)) | ((transform_hlds__inlining__PurityChanged_60 << (MR_Integer) 4)))))))))));
        }
        switch (transform_hlds__inlining__TailRec_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *transform_hlds__inlining__Goal_8 = transform_hlds__inlining__Goal1_47;
              *transform_hlds__inlining__STATE_VARIABLE_Info_62 = transform_hlds__inlining__STATE_VARIABLE_Info_64_64;
            }
            break;
          case (MR_Integer) 1:
            transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Goal1_47, transform_hlds__inlining__Goal_8, transform_hlds__inlining__STATE_VARIABLE_Info_64_64, transform_hlds__inlining__STATE_VARIABLE_Info_62);
            break;
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          *transform_hlds__inlining__Goal_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr0_6));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo0_7));
        }
        *transform_hlds__inlining__STATE_VARIABLE_Info_62 = transform_hlds__inlining__STATE_VARIABLE_Info_0_61;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
  MR_Word transform_hlds__inlining__Goal0_5,
  MR_Word * transform_hlds__inlining__Goal_6,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_0_54,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_Info_55)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__GoalExpr0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal0_5, (MR_Integer) 0)));
    MR_Word transform_hlds__inlining__GoalInfo0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Goal0_5, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) transform_hlds__inlining__GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word transform_hlds__inlining__SubGoal0_48 = (MR_Word) MR_body(((MR_Word) transform_hlds__inlining__GoalExpr0_8), (MR_Integer) 0);
          MR_Word transform_hlds__inlining__SubGoal_49;
          MR_Word transform_hlds__inlining__GoalExpr_74;

          transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__SubGoal0_48, &transform_hlds__inlining__SubGoal_49, transform_hlds__inlining__STATE_VARIABLE_Info_0_54, transform_hlds__inlining__STATE_VARIABLE_Info_55);
          transform_hlds__inlining__GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) transform_hlds__inlining__SubGoal_49);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *transform_hlds__inlining__Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr_74));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo0_9));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *transform_hlds__inlining__Goal_6 = transform_hlds__inlining__Goal0_5;
          *transform_hlds__inlining__STATE_VARIABLE_Info_55 = transform_hlds__inlining__STATE_VARIABLE_Info_0_54;
        }
        break;
      case (MR_Integer) 2:
        transform_hlds__inlining__inlining_in_call_5_p_0(transform_hlds__inlining__GoalExpr0_8, transform_hlds__inlining__GoalInfo0_9, transform_hlds__inlining__Goal_6, transform_hlds__inlining__STATE_VARIABLE_Info_0_54, transform_hlds__inlining__STATE_VARIABLE_Info_55);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *transform_hlds__inlining__Goal_6 = transform_hlds__inlining__Goal0_5;
              *transform_hlds__inlining__STATE_VARIABLE_Info_55 = transform_hlds__inlining__STATE_VARIABLE_Info_0_54;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word transform_hlds__inlining__ConjType_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__Goals0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__inlining__Goals_35;
              MR_Word transform_hlds__inlining__GoalExpr_36;

              switch (transform_hlds__inlining__ConjType_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  transform_hlds__inlining__inlining_in_par_conj_4_p_0(transform_hlds__inlining__Goals0_34, &transform_hlds__inlining__Goals_35, transform_hlds__inlining__STATE_VARIABLE_Info_0_54, transform_hlds__inlining__STATE_VARIABLE_Info_55);
                  break;
                case (MR_Integer) 0:
                  transform_hlds__inlining__inlining_in_conj_4_p_0(transform_hlds__inlining__Goals0_34, &transform_hlds__inlining__Goals_35, transform_hlds__inlining__STATE_VARIABLE_Info_0_54, transform_hlds__inlining__STATE_VARIABLE_Info_55);
                  break;
              }
              {
                transform_hlds__inlining__GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_36, 1) = ((MR_Box) (transform_hlds__inlining__ConjType_33));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_36, 2) = ((MR_Box) (transform_hlds__inlining__Goals_35));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__inlining__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr_36));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word transform_hlds__inlining__Goals0_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__Goals_70;
              MR_Word transform_hlds__inlining__GoalExpr_71;

              transform_hlds__inlining__inlining_in_disjuncts_4_p_0(transform_hlds__inlining__Goals0_69, &transform_hlds__inlining__Goals_70, transform_hlds__inlining__STATE_VARIABLE_Info_0_54, transform_hlds__inlining__STATE_VARIABLE_Info_55);
              {
                transform_hlds__inlining__GoalExpr_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_71, 1) = ((MR_Box) (transform_hlds__inlining__Goals_70));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__inlining__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr_71));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word transform_hlds__inlining__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__Det_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__inlining__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__inlining__Cases_40;
              MR_Word transform_hlds__inlining__GoalExpr_72;

              transform_hlds__inlining__inlining_in_cases_4_p_0(transform_hlds__inlining__Cases0_39, &transform_hlds__inlining__Cases_40, transform_hlds__inlining__STATE_VARIABLE_Info_0_54, transform_hlds__inlining__STATE_VARIABLE_Info_55);
              {
                transform_hlds__inlining__GoalExpr_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_72, 1) = ((MR_Box) (transform_hlds__inlining__Var_37));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_72, 2) = ((MR_Box) (transform_hlds__inlining__Det_38));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_72, 3) = ((MR_Box) (transform_hlds__inlining__Cases_40));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__inlining__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr_72));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word transform_hlds__inlining__Reason_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__SubGoal0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__inlining__FGT_52;
              MR_Word transform_hlds__inlining__Var_51;

              transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__Reason_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (transform_hlds__inlining__succeeded)
              {
                transform_hlds__inlining__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_50, (MR_Integer) 1)));
                transform_hlds__inlining__FGT_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_50, (MR_Integer) 2)));
                switch (transform_hlds__inlining__FGT_52) {
                  default:
                    transform_hlds__inlining__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    transform_hlds__inlining__succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    transform_hlds__inlining__succeeded = MR_TRUE;
                    break;
                }
              }
              if (transform_hlds__inlining__succeeded)
              {
                *transform_hlds__inlining__Goal_6 = transform_hlds__inlining__Goal0_5;
                *transform_hlds__inlining__STATE_VARIABLE_Info_55 = transform_hlds__inlining__STATE_VARIABLE_Info_0_54;
              }
              else
              {
                MR_Word transform_hlds__inlining__GoalExpr_75;
                MR_Word transform_hlds__inlining__SubGoal_76;

                transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__SubGoal0_80, &transform_hlds__inlining__SubGoal_76, transform_hlds__inlining__STATE_VARIABLE_Info_0_54, transform_hlds__inlining__STATE_VARIABLE_Info_55);
                {
                  transform_hlds__inlining__GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                  MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_75, 1) = ((MR_Box) (transform_hlds__inlining__Reason_50));
                  MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_75, 2) = ((MR_Box) (transform_hlds__inlining__SubGoal_76));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  *transform_hlds__inlining__Goal_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr_75));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo0_9));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word transform_hlds__inlining__Vars_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 1)));
              MR_Word transform_hlds__inlining__Cond0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 2)));
              MR_Word transform_hlds__inlining__Then0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 3)));
              MR_Word transform_hlds__inlining__Else0_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr0_8, (MR_Integer) 4)));
              MR_Word transform_hlds__inlining__Cond_45;
              MR_Word transform_hlds__inlining__Then_46;
              MR_Word transform_hlds__inlining__Else_47;
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_61_61;
              MR_Word transform_hlds__inlining__STATE_VARIABLE_Info_62_62;
              MR_Word transform_hlds__inlining__GoalExpr_73;

              transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Cond0_42, &transform_hlds__inlining__Cond_45, transform_hlds__inlining__STATE_VARIABLE_Info_0_54, &transform_hlds__inlining__STATE_VARIABLE_Info_61_61);
              transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Then0_43, &transform_hlds__inlining__Then_46, transform_hlds__inlining__STATE_VARIABLE_Info_61_61, &transform_hlds__inlining__STATE_VARIABLE_Info_62_62);
              transform_hlds__inlining__inlining_in_goal_4_p_0(transform_hlds__inlining__Else0_44, &transform_hlds__inlining__Else_47, transform_hlds__inlining__STATE_VARIABLE_Info_62_62, transform_hlds__inlining__STATE_VARIABLE_Info_55);
              {
                transform_hlds__inlining__GoalExpr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_73, 1) = ((MR_Box) (transform_hlds__inlining__Vars_41));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_73, 2) = ((MR_Box) (transform_hlds__inlining__Cond_45));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_73, 3) = ((MR_Box) (transform_hlds__inlining__Then_46));
                MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_73, 4) = ((MR_Box) (transform_hlds__inlining__Else_47));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                *transform_hlds__inlining__Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (transform_hlds__inlining__GoalExpr_73));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (transform_hlds__inlining__GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.inlining", (MR_String) "predicate \140transform_hlds.inlining.inlining_in_goal\'/4", (MR_String) "shorthand");
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
transform_hlds__inlining__should_inline_at_call_site_4_p_0(
  MR_Word transform_hlds__inlining__Info_5,
  MR_Word transform_hlds__inlining__GoalExpr0_6,
  MR_Word transform_hlds__inlining__GoalInfo0_7,
  MR_Word * transform_hlds__inlining__ShouldInline_8)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__HighLevelCode_10 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 1)))) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining__ModuleInfo_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 2)));
    MR_Word transform_hlds__inlining__ShouldInlineTailProcs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 4)));
    MR_Word transform_hlds__inlining__ShouldInlineProcs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 5)));
    MR_Word transform_hlds__inlining__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 0)));
    MR_Integer transform_hlds__inlining__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__Builtin_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 3)));
    MR_Word transform_hlds__inlining__PredProcId_31;
    MR_Word transform_hlds__inlining__TailRec_32;
    MR_Integer transform_hlds__inlining___VarThresh_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 0)));
    MR_Word transform_hlds__inlining___AnyTracing_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining___ExternalTypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 3)));
    MR_Word transform_hlds__inlining___VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 6)));
    MR_Word transform_hlds__inlining___VarTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 7)));
    MR_Word transform_hlds__inlining___TypeVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 8)));
    MR_Word transform_hlds__inlining___RttiVarMaps_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 9)));
    MR_Word transform_hlds__inlining___DidInlining_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 10)))) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining___InlinedParallel_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 10)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining___Requantify_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 10)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining___DetChanged_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining___PurityChanged_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Info_5, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word transform_hlds__inlining___ArgVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 2)));
    MR_Word transform_hlds__inlining___Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 4)));
    MR_Word transform_hlds__inlining___SymName_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr0_6, (MR_Integer) 5)));
    MR_Word transform_hlds__inlining__Var_36;
    MR_Word transform_hlds__inlining__PredInfo_48;
    MR_Word transform_hlds__inlining__ProcInfo_49;
    MR_Word transform_hlds__inlining__MaybeComplexityProcMap_50;
    MR_Word transform_hlds__inlining__CalledGoal_54;
    MR_Word transform_hlds__inlining__CalledGoalExpr_55;
    MR_Word transform_hlds__inlining__Var_70;
    MR_Word transform_hlds__inlining__Var_74;
    MR_Integer transform_hlds__inlining__Var_73;
    MR_Word transform_hlds__inlining__Var_56;
    MR_Word transform_hlds__inlining__ForeignAttributes_57;
    MR_Word transform_hlds__inlining__Var_58;
    MR_Integer transform_hlds__inlining__Var_59;
    MR_Word transform_hlds__inlining__Var_60;
    MR_Word transform_hlds__inlining__Var_61;
    MR_Word transform_hlds__inlining__Var_62;
    MR_Word transform_hlds__inlining__Var_63;

    {
      transform_hlds__inlining__PredProcId_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_31, 0) = ((MR_Box) (transform_hlds__inlining__PredId_25));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_31, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_26));
    }
    transform_hlds__inlining__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__PredProcId_31)), transform_hlds__inlining__ShouldInlineTailProcs_14);
    if (transform_hlds__inlining__succeeded)
    {
      transform_hlds__inlining__Var_36 = (MR_Integer) 11;
      transform_hlds__inlining__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(transform_hlds__inlining__GoalInfo0_7, transform_hlds__inlining__Var_36);
    }
    if (transform_hlds__inlining__succeeded)
      transform_hlds__inlining__TailRec_32 = (MR_Integer) 1;
    else
      transform_hlds__inlining__TailRec_32 = (MR_Integer) 0;
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Builtin_28 == (MR_Integer) 1);
    if (transform_hlds__inlining__succeeded)
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(transform_hlds__inlining__ModuleInfo_12, transform_hlds__inlining__PredId_25, transform_hlds__inlining__ProcId_26, &transform_hlds__inlining__PredInfo_48, &transform_hlds__inlining__ProcInfo_49);
      transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(transform_hlds__inlining__PredInfo_48);
      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
      if (transform_hlds__inlining__succeeded)
      {
        transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(transform_hlds__inlining__PredInfo_48);
        if (transform_hlds__inlining__succeeded)
        {
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&transform_hlds__inlining__Var_73);
          transform_hlds__inlining__succeeded = (transform_hlds__inlining__ProcId_26 == transform_hlds__inlining__Var_73);
        }
        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
        if (transform_hlds__inlining__succeeded)
        {
          transform_hlds__inlining__Var_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(transform_hlds__inlining__ProcInfo_49, &transform_hlds__inlining__Var_74);
          transform_hlds__inlining__succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(transform_hlds__inlining__Var_70, transform_hlds__inlining__Var_74);
          if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(transform_hlds__inlining__PredInfo_48);
            transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
            if (transform_hlds__inlining__succeeded)
            {
              hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(transform_hlds__inlining__ModuleInfo_12, &transform_hlds__inlining__MaybeComplexityProcMap_50);
              if ((transform_hlds__inlining__MaybeComplexityProcMap_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                transform_hlds__inlining__succeeded = MR_TRUE;
              else
              {
                MR_Word transform_hlds__inlining__ComplexityProcMap_52;
                MR_Word transform_hlds__inlining__IsInComplexityMap_53;
                MR_Word transform_hlds__inlining__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeComplexityProcMap_50, (MR_Integer) 0)));
                MR_Integer transform_hlds__inlining__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_71, (MR_Integer) 0)));

                transform_hlds__inlining__ComplexityProcMap_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_71, (MR_Integer) 1)));
                transform_hlds__inlining__IsInComplexityMap_53 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(transform_hlds__inlining__ComplexityProcMap_52, transform_hlds__inlining__ModuleInfo_12, transform_hlds__inlining__PredId_25, transform_hlds__inlining__ProcId_26);
                transform_hlds__inlining__succeeded = (transform_hlds__inlining__IsInComplexityMap_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              if (transform_hlds__inlining__succeeded)
              {
                hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_49, &transform_hlds__inlining__CalledGoal_54);
                transform_hlds__inlining__CalledGoalExpr_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_54, (MR_Integer) 0)));
                transform_hlds__inlining__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__CalledGoal_54, (MR_Integer) 1)));
                transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__CalledGoalExpr_55)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_55, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (transform_hlds__inlining__succeeded)
                {
                  transform_hlds__inlining__ForeignAttributes_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_55, (MR_Integer) 1)));
                  transform_hlds__inlining__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_55, (MR_Integer) 2)));
                  transform_hlds__inlining__Var_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_55, (MR_Integer) 3)));
                  transform_hlds__inlining__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_55, (MR_Integer) 4)));
                  transform_hlds__inlining__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_55, (MR_Integer) 5)));
                  transform_hlds__inlining__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_55, (MR_Integer) 6)));
                  transform_hlds__inlining__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__CalledGoalExpr_55, (MR_Integer) 7)));
                  {
                    MR_Word transform_hlds__inlining__Globals_64;
                    MR_Word transform_hlds__inlining__Target_65;
                    MR_Word transform_hlds__inlining__ForeignLanguage_66;
                    MR_Word transform_hlds__inlining__MaybeMayDuplicate_67;
                    MR_Word transform_hlds__inlining__Detism_68;

                    hlds__hlds_module__module_info_get_globals_2_p_0(transform_hlds__inlining__ModuleInfo_12, &transform_hlds__inlining__Globals_64);
                    libs__globals__get_target_2_p_0(transform_hlds__inlining__Globals_64, &transform_hlds__inlining__Target_65);
                    transform_hlds__inlining__ForeignLanguage_66 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(transform_hlds__inlining__ForeignAttributes_57);
                    switch (transform_hlds__inlining__ForeignLanguage_66) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_65 == (MR_Integer) 0);
                        break;
                      case (MR_Integer) 1:
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_65 == (MR_Integer) 1);
                        break;
                      case (MR_Integer) 3:
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_65 == (MR_Integer) 3);
                        break;
                      case (MR_Integer) 2:
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Target_65 == (MR_Integer) 2);
                        break;
                    }
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                    transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                    if (transform_hlds__inlining__succeeded)
                    {
                      transform_hlds__inlining__MaybeMayDuplicate_67 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(transform_hlds__inlining__ForeignAttributes_57);
                      if ((transform_hlds__inlining__MaybeMayDuplicate_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        transform_hlds__inlining__succeeded = MR_TRUE;
                      else
                      {
                        MR_Word transform_hlds__inlining__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__MaybeMayDuplicate_67, (MR_Integer) 0)));

                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_72 == (MR_Integer) 0);
                      }
                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                      if (transform_hlds__inlining__succeeded)
                      {
                        transform_hlds__inlining__succeeded = (transform_hlds__inlining__HighLevelCode_10 == (MR_Integer) 0);
                        if (transform_hlds__inlining__succeeded)
                        {
                          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(transform_hlds__inlining__ProcInfo_49, &transform_hlds__inlining__Detism_68);
                          switch (transform_hlds__inlining__Detism_68) {
                            default:
                              transform_hlds__inlining__succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 2:
                              transform_hlds__inlining__succeeded = MR_TRUE;
                              break;
                            case (MR_Integer) 3:
                              transform_hlds__inlining__succeeded = MR_TRUE;
                              break;
                          }
                        }
                        transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
                      }
                    }
                  }
                }
                else
                  transform_hlds__inlining__succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    if (transform_hlds__inlining__succeeded)
    {
      MR_Word transform_hlds__inlining__PredInfo_33;
      MR_Word transform_hlds__inlining__Markers_34;
      MR_Word transform_hlds__inlining__UserReq_35;

      hlds__hlds_module__module_info_pred_info_3_p_0(transform_hlds__inlining__ModuleInfo_12, transform_hlds__inlining__PredId_25, &transform_hlds__inlining__PredInfo_33);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(transform_hlds__inlining__PredInfo_33, &transform_hlds__inlining__Markers_34);
      transform_hlds__inlining__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__inlining__Markers_34, (MR_Integer) 7);
      if (transform_hlds__inlining__succeeded)
        transform_hlds__inlining__UserReq_35 = (MR_Integer) 1;
      else
        transform_hlds__inlining__UserReq_35 = (MR_Integer) 0;
      transform_hlds__inlining__succeeded = (transform_hlds__inlining__TailRec_32 == (MR_Integer) 1);
      if (!(transform_hlds__inlining__succeeded))
      {
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__UserReq_35 == (MR_Integer) 1);
        if (!(transform_hlds__inlining__succeeded))
        {
          transform_hlds__inlining__succeeded = hlds__hlds_pred__check_marker_2_p_0(transform_hlds__inlining__Markers_34, (MR_Integer) 9);
          if (!(transform_hlds__inlining__succeeded))
          {
            transform_hlds__inlining__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (transform_hlds__inlining__PredProcId_31)), transform_hlds__inlining__ShouldInlineProcs_15);
          }
        }
      }
      if (transform_hlds__inlining__succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *transform_hlds__inlining__ShouldInline_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (transform_hlds__inlining__TailRec_32));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (transform_hlds__inlining__UserReq_35));
        }
      else
        *transform_hlds__inlining__ShouldInline_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
      *transform_hlds__inlining__ShouldInline_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
  MR_Word transform_hlds__inlining__RttiVarMaps_3,
  MR_Word transform_hlds__inlining__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      MR_Word transform_hlds__inlining__VarA_4;
      MR_Word transform_hlds__inlining__VarB_5;
      MR_Word transform_hlds__inlining__Var_11;
      MR_Word transform_hlds__inlining__Vars_6;

      if (transform_hlds__inlining__succeeded)
      {
        transform_hlds__inlining__VarA_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 0)));
        transform_hlds__inlining__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__2_2, (MR_Integer) 1)));
        transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Var_11)) == (MR_mktag((MR_Integer) 1)));
        if (transform_hlds__inlining__succeeded)
        {
          transform_hlds__inlining__VarB_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Var_11, (MR_Integer) 0)));
          transform_hlds__inlining__Vars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Var_11, (MR_Integer) 1)));
          {
            MR_Word transform_hlds__inlining__VarInfoA_7;
            MR_Word transform_hlds__inlining__VarInfoB_8;
            MR_Word transform_hlds__inlining__ConstraintA_9;
            MR_Word transform_hlds__inlining__ConstraintB_10;

            hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__inlining__RttiVarMaps_3, transform_hlds__inlining__VarA_4, &transform_hlds__inlining__VarInfoA_7);
            hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(transform_hlds__inlining__RttiVarMaps_3, transform_hlds__inlining__VarB_5, &transform_hlds__inlining__VarInfoB_8);
            transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__VarInfoA_7)) == (MR_mktag((MR_Integer) 2)));
            if (transform_hlds__inlining__succeeded)
            {
              transform_hlds__inlining__ConstraintA_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__VarInfoA_7, (MR_Integer) 0)));
              transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__VarInfoB_8)) == (MR_mktag((MR_Integer) 2)));
              if (transform_hlds__inlining__succeeded)
              {
                transform_hlds__inlining__ConstraintB_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__VarInfoB_8, (MR_Integer) 0)));
                transform_hlds__inlining__succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(transform_hlds__inlining__ConstraintA_9, transform_hlds__inlining__ConstraintB_10);
                transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
              }
            }
          }
          if (!(transform_hlds__inlining__succeeded))
          {
            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__inlining__next_value_of_HeadVar__2_2 = transform_hlds__inlining__Var_11;

              transform_hlds__inlining__HeadVar__2_2 = transform_hlds__inlining__next_value_of_HeadVar__2_2;
            }
            continue;
          }
        }
      }
      return transform_hlds__inlining__succeeded;
    }
    break;
  }
}

void MR_CALL 
transform_hlds__inlining__do_inline_call_13_p_0(
  MR_Word transform_hlds__inlining__ExternalTypeParams_14,
  MR_Word transform_hlds__inlining__ArgVars_15,
  MR_Word transform_hlds__inlining__PredInfo_16,
  MR_Word transform_hlds__inlining__ProcInfo_17,
  MR_Word transform_hlds__inlining__VarSet0_18,
  MR_Word * transform_hlds__inlining__VarSet_19,
  MR_Word transform_hlds__inlining__VarTypes0_20,
  MR_Word * transform_hlds__inlining__VarTypes_21,
  MR_Word transform_hlds__inlining__TypeVarSet0_22,
  MR_Word * transform_hlds__inlining__TypeVarSet_23,
  MR_Word transform_hlds__inlining__RttiVarMaps0_24,
  MR_Word * transform_hlds__inlining__RttiVarMaps_25,
  MR_Word * transform_hlds__inlining__Goal_26)
{
  {
    MR_Word transform_hlds__inlining__TypeInfo_25_58;
    MR_Word transform_hlds__inlining__CalledGoal_27;
    MR_Word transform_hlds__inlining__CalleeTypeVarSet_28;
    MR_Word transform_hlds__inlining__HeadVars_29;
    MR_Word transform_hlds__inlining__CalleeVarTypes0_30;
    MR_Word transform_hlds__inlining__CalleeVarSet_31;
    MR_Word transform_hlds__inlining__CalleeRttiVarMaps0_32;
    MR_Word transform_hlds__inlining__TypeRenaming_33;
    MR_Word transform_hlds__inlining__CalleeVarTypes1_34;
    MR_Word transform_hlds__inlining__HeadTypes_35;
    MR_Word transform_hlds__inlining__ArgTypes_36;
    MR_Word transform_hlds__inlining__CalleeExistQVars_37;
    MR_Word transform_hlds__inlining__TypeSubn_38;
    MR_Word transform_hlds__inlining__CalleeVarTypes_39;
    MR_Word transform_hlds__inlining__VarTypes1_40;
    MR_Word transform_hlds__inlining__Subn_43;
    MR_Word transform_hlds__inlining__CalleeRttiVarMaps1_44;
    MR_Word transform_hlds__inlining__Renaming0_56;
    MR_Word transform_hlds__inlining__CalleeListOfVars_57;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalledGoal_27);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(transform_hlds__inlining__PredInfo_16, &transform_hlds__inlining__CalleeTypeVarSet_28);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__HeadVars_29);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeVarTypes0_30);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeVarSet_31);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(transform_hlds__inlining__ProcInfo_17, &transform_hlds__inlining__CalleeRttiVarMaps0_32);
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(transform_hlds__inlining__TypeVarSet0_22, transform_hlds__inlining__CalleeTypeVarSet_28, transform_hlds__inlining__TypeVarSet_23, &transform_hlds__inlining__TypeRenaming_33);
    hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(transform_hlds__inlining__TypeRenaming_33, transform_hlds__inlining__CalleeVarTypes0_30, &transform_hlds__inlining__CalleeVarTypes1_34);
    hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__inlining__CalleeVarTypes1_34, transform_hlds__inlining__HeadVars_29, &transform_hlds__inlining__HeadTypes_35);
    hlds__vartypes__lookup_var_types_3_p_0(transform_hlds__inlining__VarTypes0_20, transform_hlds__inlining__ArgVars_15, &transform_hlds__inlining__ArgTypes_36);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(transform_hlds__inlining__PredInfo_16, &transform_hlds__inlining__CalleeExistQVars_37);
    transform_hlds__inlining__get_type_substitution_5_p_0(transform_hlds__inlining__HeadTypes_35, transform_hlds__inlining__ArgTypes_36, transform_hlds__inlining__ExternalTypeParams_14, transform_hlds__inlining__CalleeExistQVars_37, &transform_hlds__inlining__TypeSubn_38);
    if ((transform_hlds__inlining__CalleeExistQVars_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__CalleeVarTypes1_34, &transform_hlds__inlining__CalleeVarTypes_39);
      transform_hlds__inlining__VarTypes1_40 = transform_hlds__inlining__VarTypes0_20;
    }
    else
    {
      hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__CalleeVarTypes1_34, &transform_hlds__inlining__CalleeVarTypes_39);
      hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__VarTypes0_20, &transform_hlds__inlining__VarTypes1_40);
    }
    transform_hlds__inlining__TypeInfo_25_58 = (MR_Word) &transform_hlds__inlining_scalar_common_1[1];
    mercury__map__from_corresponding_lists_3_p_0(transform_hlds__inlining__TypeInfo_25_58, transform_hlds__inlining__TypeInfo_25_58, transform_hlds__inlining__HeadVars_29, transform_hlds__inlining__ArgVars_15, &transform_hlds__inlining__Renaming0_56);
    mercury__varset__vars_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, transform_hlds__inlining__CalleeVarSet_31, &transform_hlds__inlining__CalleeListOfVars_57);
    hlds__goal_util__clone_variables_9_p_0(transform_hlds__inlining__CalleeListOfVars_57, transform_hlds__inlining__CalleeVarSet_31, transform_hlds__inlining__CalleeVarTypes_39, transform_hlds__inlining__VarSet0_18, transform_hlds__inlining__VarSet_19, transform_hlds__inlining__VarTypes1_40, transform_hlds__inlining__VarTypes_21, transform_hlds__inlining__Renaming0_56, &transform_hlds__inlining__Subn_43);
    hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(transform_hlds__inlining__Subn_43, transform_hlds__inlining__CalledGoal_27, transform_hlds__inlining__Goal_26);
    hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(transform_hlds__inlining__TypeRenaming_33, transform_hlds__inlining__TypeSubn_38, transform_hlds__inlining__Subn_43, transform_hlds__inlining__CalleeRttiVarMaps0_32, &transform_hlds__inlining__CalleeRttiVarMaps1_44);
    hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(transform_hlds__inlining__CalleeRttiVarMaps1_44, transform_hlds__inlining__RttiVarMaps0_24, transform_hlds__inlining__RttiVarMaps_25);
  }
}

void MR_CALL 
transform_hlds__inlining__get_type_substitution_5_p_0(
  MR_Word transform_hlds__inlining__HeadTypes_6,
  MR_Word transform_hlds__inlining__ArgTypes_7,
  MR_Word transform_hlds__inlining__ExternalTypeParams_8,
  MR_Word transform_hlds__inlining__CalleeExistQVars_9,
  MR_Word * transform_hlds__inlining__TypeSubn_10)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    if ((transform_hlds__inlining__CalleeExistQVars_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word transform_hlds__inlining__TypeSubn0_11;

      transform_hlds__inlining__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(transform_hlds__inlining__HeadTypes_6, transform_hlds__inlining__ArgTypes_7, &transform_hlds__inlining__TypeSubn0_11);
      if (transform_hlds__inlining__succeeded)
        *transform_hlds__inlining__TypeSubn_10 = transform_hlds__inlining__TypeSubn0_11;
      else
      {
        mercury__map__init_1_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, transform_hlds__inlining__TypeSubn_10);
      }
    }
    else
    {
      MR_Word transform_hlds__inlining__TypeSubn1_14;
      MR_Word transform_hlds__inlining__TypeSubn0_18;

      mercury__map__init_1_p_0((MR_Word) &transform_hlds__inlining_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &transform_hlds__inlining__TypeSubn0_18);
      transform_hlds__inlining__succeeded = parse_tree__prog_type__type_unify_list_5_p_0(transform_hlds__inlining__HeadTypes_6, transform_hlds__inlining__ArgTypes_7, transform_hlds__inlining__ExternalTypeParams_8, transform_hlds__inlining__TypeSubn0_18, &transform_hlds__inlining__TypeSubn1_14);
      if (transform_hlds__inlining__succeeded)
        *transform_hlds__inlining__TypeSubn_10 = transform_hlds__inlining__TypeSubn1_14;
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "transform_hlds.inlining", (MR_String) "predicate \140transform_hlds.inlining.get_type_substitution\'/5", (MR_String) "type unification failed");
          return;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__should_proc_be_inlined_3_p_0(
  MR_Word transform_hlds__inlining__Params_4,
  MR_Word transform_hlds__inlining__ModuleInfo_5,
  MR_Word transform_hlds__inlining__PredProcId_6)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__ProcInfo_8;
    MR_Word transform_hlds__inlining__CalledGoal_9;
    MR_Word transform_hlds__inlining__PredId_10;
    MR_Integer transform_hlds__inlining__ProcId_11;
    MR_Word transform_hlds__inlining__Entity_12;
    MR_Word transform_hlds__inlining__Var_102;
    MR_Word transform_hlds__inlining__Var_111;
    MR_Word transform_hlds__inlining__Var_112;
    MR_Word transform_hlds__inlining___PredInfo_7;
    MR_Word transform_hlds__inlining__Var_103;
    MR_Word transform_hlds__inlining__Var_104;
    MR_Integer transform_hlds__inlining__Var_105;
    MR_Integer transform_hlds__inlining__Var_106;
    MR_Integer transform_hlds__inlining__Var_107;
    MR_Integer transform_hlds__inlining__Var_108;
    MR_Integer transform_hlds__inlining__Var_109;
    MR_Word transform_hlds__inlining__Var_110;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(transform_hlds__inlining__ModuleInfo_5, transform_hlds__inlining__PredProcId_6, &transform_hlds__inlining___PredInfo_7, &transform_hlds__inlining__ProcInfo_8);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(transform_hlds__inlining__ProcInfo_8, &transform_hlds__inlining__CalledGoal_9);
    transform_hlds__inlining__PredId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_6, (MR_Integer) 0)));
    transform_hlds__inlining__ProcId_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__PredProcId_6, (MR_Integer) 1)));
    transform_hlds__inlining__Var_112 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) & (MR_Integer) 1);
    transform_hlds__inlining__Var_111 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    transform_hlds__inlining__Var_110 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    transform_hlds__inlining__Var_109 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 1)));
    transform_hlds__inlining__Var_108 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 2)));
    transform_hlds__inlining__Var_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 3)));
    transform_hlds__inlining__Var_106 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 4)));
    transform_hlds__inlining__Var_105 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 5)));
    transform_hlds__inlining__Var_104 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 6)))) & (MR_Integer) 1);
    transform_hlds__inlining__Var_103 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    transform_hlds__inlining__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 7)));
    {
      transform_hlds__inlining__Entity_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Entity_12, 0) = ((MR_Box) (transform_hlds__inlining__PredId_10));
      MR_hl_field(MR_mktag(0), transform_hlds__inlining__Entity_12, 1) = ((MR_Box) (transform_hlds__inlining__ProcId_11));
    }
    {
      MR_Integer transform_hlds__inlining__SimpleThreshold_14;
      MR_Word transform_hlds__inlining__Var_38;
      MR_Word transform_hlds__inlining__Var_39;
      MR_Word transform_hlds__inlining__Var_40;
      MR_Integer transform_hlds__inlining__Var_41;
      MR_Integer transform_hlds__inlining__Var_42;
      MR_Integer transform_hlds__inlining__Var_43;
      MR_Integer transform_hlds__inlining__Var_44;
      MR_Word transform_hlds__inlining__Var_45;
      MR_Word transform_hlds__inlining__Var_46;
      MR_Word transform_hlds__inlining__Var_47;

      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_112 == (MR_Integer) 1);
      if (transform_hlds__inlining__succeeded)
      {
        transform_hlds__inlining__Var_38 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) & (MR_Integer) 1);
        transform_hlds__inlining__Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        transform_hlds__inlining__Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        transform_hlds__inlining__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 1)));
        transform_hlds__inlining__Var_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 2)));
        transform_hlds__inlining__Var_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 3)));
        transform_hlds__inlining__SimpleThreshold_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 4)));
        transform_hlds__inlining__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 5)));
        transform_hlds__inlining__Var_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 6)))) & (MR_Integer) 1);
        transform_hlds__inlining__Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
        transform_hlds__inlining__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 7)));
        transform_hlds__inlining__succeeded = transform_hlds__inlining__is_simple_goal_2_p_0(transform_hlds__inlining__CalledGoal_9, transform_hlds__inlining__SimpleThreshold_14);
      }
    }
    if (!(transform_hlds__inlining__succeeded))
    {
      {
        MR_Integer transform_hlds__inlining__CompoundThreshold_15;
        MR_Word transform_hlds__inlining__Needed_17;
        MR_Integer transform_hlds__inlining__NumUses_18;
        MR_Integer transform_hlds__inlining__Size_19;
        MR_Integer transform_hlds__inlining__CallCost_20;
        MR_Integer transform_hlds__inlining__Var_23;
        MR_Integer transform_hlds__inlining__Var_24;
        MR_Box transform_hlds__inlining__conv0_Needed_17;
        MR_Word transform_hlds__inlining__Var_58;
        MR_Word transform_hlds__inlining__Var_59;
        MR_Word transform_hlds__inlining__Var_60;
        MR_Integer transform_hlds__inlining__Var_61;
        MR_Integer transform_hlds__inlining__Var_63;
        MR_Integer transform_hlds__inlining__Var_64;
        MR_Word transform_hlds__inlining__Var_65;
        MR_Word transform_hlds__inlining__Var_66;
        MR_Word transform_hlds__inlining__Var_67;

        transform_hlds__inlining__succeeded = mercury__map__search_3_p_0((MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0, (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0, transform_hlds__inlining__Var_102, ((MR_Box) (transform_hlds__inlining__Entity_12)), &transform_hlds__inlining__conv0_Needed_17);
        if (transform_hlds__inlining__succeeded)
        {
          transform_hlds__inlining__Needed_17 = ((MR_Word) transform_hlds__inlining__conv0_Needed_17);
          transform_hlds__inlining__succeeded = MR_TRUE;
        }
        if (transform_hlds__inlining__succeeded)
        {
          transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Needed_17)) == (MR_mktag((MR_Integer) 1)));
          if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__NumUses_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Needed_17, (MR_Integer) 0)));
            hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_9, &transform_hlds__inlining__Size_19);
            transform_hlds__inlining__Var_58 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) & (MR_Integer) 1);
            transform_hlds__inlining__Var_59 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            transform_hlds__inlining__Var_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            transform_hlds__inlining__Var_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 1)));
            transform_hlds__inlining__CallCost_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 2)));
            transform_hlds__inlining__CompoundThreshold_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 3)));
            transform_hlds__inlining__Var_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 4)));
            transform_hlds__inlining__Var_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 5)));
            transform_hlds__inlining__Var_65 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 6)))) & (MR_Integer) 1);
            transform_hlds__inlining__Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            transform_hlds__inlining__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 7)));
            transform_hlds__inlining__succeeded = (transform_hlds__inlining__CompoundThreshold_15 > (MR_Integer) 0);
            if (transform_hlds__inlining__succeeded)
            {
              transform_hlds__inlining__Var_24 = (transform_hlds__inlining__Size_19 - transform_hlds__inlining__CallCost_20);
              transform_hlds__inlining__Var_23 = (transform_hlds__inlining__Var_24 * transform_hlds__inlining__NumUses_18);
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_23 <= transform_hlds__inlining__CompoundThreshold_15);
            }
          }
        }
      }
      if (!(transform_hlds__inlining__succeeded))
      {
        MR_Word transform_hlds__inlining__TypeCtorInfo_100_100;
        MR_Word transform_hlds__inlining__TypeCtorInfo_101_101;
        MR_Word transform_hlds__inlining__NeededMap_25;
        MR_Word transform_hlds__inlining__Needed_26;
        MR_Integer transform_hlds__inlining__NumUses_27;
        MR_Word transform_hlds__inlining__Var_88;
        MR_Word transform_hlds__inlining__Var_89;
        MR_Word transform_hlds__inlining__Var_90;
        MR_Integer transform_hlds__inlining__Var_91;
        MR_Integer transform_hlds__inlining__Var_92;
        MR_Integer transform_hlds__inlining__Var_93;
        MR_Integer transform_hlds__inlining__Var_94;
        MR_Integer transform_hlds__inlining__Var_95;
        MR_Word transform_hlds__inlining__Var_96;
        MR_Word transform_hlds__inlining__Var_97;
        MR_Box transform_hlds__inlining__conv1_Needed_26;

        transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_111 == (MR_Integer) 1);
        if (transform_hlds__inlining__succeeded)
        {
          transform_hlds__inlining__Var_88 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) & (MR_Integer) 1);
          transform_hlds__inlining__Var_89 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          transform_hlds__inlining__Var_90 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
          transform_hlds__inlining__Var_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 1)));
          transform_hlds__inlining__Var_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 2)));
          transform_hlds__inlining__Var_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 3)));
          transform_hlds__inlining__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 4)));
          transform_hlds__inlining__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 5)));
          transform_hlds__inlining__Var_96 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 6)))) & (MR_Integer) 1);
          transform_hlds__inlining__Var_97 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          transform_hlds__inlining__NeededMap_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_4, (MR_Integer) 7)));
          transform_hlds__inlining__TypeCtorInfo_100_100 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
          transform_hlds__inlining__TypeCtorInfo_101_101 = (MR_Word) &transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;
          transform_hlds__inlining__succeeded = mercury__map__search_3_p_0(transform_hlds__inlining__TypeCtorInfo_100_100, transform_hlds__inlining__TypeCtorInfo_101_101, transform_hlds__inlining__NeededMap_25, ((MR_Box) (transform_hlds__inlining__Entity_12)), &transform_hlds__inlining__conv1_Needed_26);
          if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__Needed_26 = ((MR_Word) transform_hlds__inlining__conv1_Needed_26);
            transform_hlds__inlining__succeeded = MR_TRUE;
          }
          if (transform_hlds__inlining__succeeded)
          {
            transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__Needed_26)) == (MR_mktag((MR_Integer) 1)));
            if (transform_hlds__inlining__succeeded)
            {
              transform_hlds__inlining__NumUses_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__Needed_26, (MR_Integer) 0)));
              transform_hlds__inlining__succeeded = (transform_hlds__inlining__NumUses_27 == (MR_Integer) 1);
            }
          }
        }
      }
    }
    if (transform_hlds__inlining__succeeded)
    {
      transform_hlds__inlining__succeeded = hlds__goal_util__goal_calls_2_p_0(transform_hlds__inlining__CalledGoal_9, transform_hlds__inlining__PredProcId_6);
      transform_hlds__inlining__succeeded = !(transform_hlds__inlining__succeeded);
    }
    return transform_hlds__inlining__succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__inlining__is_simple_goal_2_p_0(
  MR_Word transform_hlds__inlining__CalledGoal_3,
  MR_Integer transform_hlds__inlining__SimpleThreshold_4)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Integer transform_hlds__inlining__Size_5;

    hlds__goal_util__goal_size_2_p_0(transform_hlds__inlining__CalledGoal_3, &transform_hlds__inlining__Size_5);
    transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__SimpleThreshold_4);
    if (!(transform_hlds__inlining__succeeded))
    {
      MR_Integer transform_hlds__inlining__Var_6 = (transform_hlds__inlining__SimpleThreshold_4 * (MR_Integer) 3);

      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Size_5 < transform_hlds__inlining__Var_6);
      if (transform_hlds__inlining__succeeded)
        transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__CalledGoal_3);
    }
    return transform_hlds__inlining__succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__inlining__succeeded;

      if ((transform_hlds__inlining__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        transform_hlds__inlining__succeeded = MR_TRUE;
      else
      {
        MR_Word transform_hlds__inlining__Goal_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word transform_hlds__inlining__Goals_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));

        transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(transform_hlds__inlining__Goal_2);
        if (transform_hlds__inlining__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word transform_hlds__inlining__next_value_of_HeadVar__1_1 = transform_hlds__inlining__Goals_3;

            transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return transform_hlds__inlining__succeeded;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
  MR_Word transform_hlds__inlining__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool transform_hlds__inlining__succeeded;
      MR_Word transform_hlds__inlining__GoalExpr_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word transform_hlds__inlining__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__HeadVar__1_1, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) transform_hlds__inlining__GoalExpr_2)) {
        default:
          transform_hlds__inlining__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Word transform_hlds__inlining__Goal_5 = (MR_Word) MR_body(((MR_Word) transform_hlds__inlining__GoalExpr_2), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word transform_hlds__inlining__next_value_of_HeadVar__1_1 = transform_hlds__inlining__Goal_5;

              transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          transform_hlds__inlining__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 2:
          {
            MR_Word transform_hlds__inlining__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 3)));
            MR_Word transform_hlds__inlining__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)));
            MR_Integer transform_hlds__inlining__Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));
            MR_Word transform_hlds__inlining__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
            MR_Word transform_hlds__inlining__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 4)));
            MR_Word transform_hlds__inlining__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 5)));

            transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_19 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 0)))) {
            default:
              transform_hlds__inlining__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 2:
              {
                MR_Word transform_hlds__inlining__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
                MR_Word transform_hlds__inlining__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));

                transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_20 == (MR_Integer) 0);
                if (transform_hlds__inlining__succeeded)
                  transform_hlds__inlining__succeeded = transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(transform_hlds__inlining__Goals_4);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word transform_hlds__inlining__Reason_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 1)));
                MR_Word transform_hlds__inlining__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__GoalExpr_2, (MR_Integer) 2)));
                MR_Word transform_hlds__inlining__FGT_8;
                MR_Word transform_hlds__inlining__Var_7;

                transform_hlds__inlining__succeeded = ((((MR_tag((MR_Word) transform_hlds__inlining__Reason_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (transform_hlds__inlining__succeeded)
                {
                  transform_hlds__inlining__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 1)));
                  transform_hlds__inlining__FGT_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), transform_hlds__inlining__Reason_6, (MR_Integer) 2)));
                  switch (transform_hlds__inlining__FGT_8) {
                    default:
                      transform_hlds__inlining__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      transform_hlds__inlining__succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 2:
                      transform_hlds__inlining__succeeded = MR_TRUE;
                      break;
                  }
                }
                if (transform_hlds__inlining__succeeded)
                  transform_hlds__inlining__succeeded = MR_TRUE;
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word transform_hlds__inlining__next_value_of_HeadVar__1_1 = transform_hlds__inlining__Goal_21;

                    transform_hlds__inlining__HeadVar__1_1 = transform_hlds__inlining__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
              }
              break;
          }
          break;
      }
      return transform_hlds__inlining__succeeded;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_4(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box * transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__inlining__closure = transform_hlds__inlining__closure_arg;
    MR_Word transform_hlds__inlining__conv4_STATE_VARIABLE_ModuleInfo_54;

    transform_hlds__inlining__inline_in_proc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 5))), ((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2), &transform_hlds__inlining__conv4_STATE_VARIABLE_ModuleInfo_54);
    *transform_hlds__inlining__wrapper_arg_3 = ((MR_Box) (transform_hlds__inlining__conv4_STATE_VARIABLE_ModuleInfo_54));
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_3(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box * transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__inlining__closure = transform_hlds__inlining__closure_arg;
    MR_Word transform_hlds__inlining__conv2_STATE_VARIABLE_ShouldInlineProcs_10;

    transform_hlds__inlining__mark_proc_to_be_inlined_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 3))), ((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2), &transform_hlds__inlining__conv2_STATE_VARIABLE_ShouldInlineProcs_10);
    *transform_hlds__inlining__wrapper_arg_3 = ((MR_Box) (transform_hlds__inlining__conv2_STATE_VARIABLE_ShouldInlineProcs_10));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_2(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Box transform_hlds__inlining__closure = transform_hlds__inlining__closure_arg;

    transform_hlds__inlining__succeeded = transform_hlds__inlining__should_proc_be_inlined_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 4))), ((MR_Word) transform_hlds__inlining__wrapper_arg_1));
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_1(
  MR_Box transform_hlds__inlining__closure_arg,
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box * transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Box transform_hlds__inlining__closure = transform_hlds__inlining__closure_arg;
    MR_Word transform_hlds__inlining__conv0_STATE_VARIABLE_ModuleInfo_16;

    transform_hlds__inlining__inline_in_linear_tail_rec_proc_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__closure, (MR_Integer) 6))), ((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2), &transform_hlds__inlining__conv0_STATE_VARIABLE_ModuleInfo_16);
    *transform_hlds__inlining__wrapper_arg_3 = ((MR_Box) (transform_hlds__inlining__conv0_STATE_VARIABLE_ModuleInfo_16));
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0(
  MR_Word transform_hlds__inlining__Params_8,
  MR_Word transform_hlds__inlining__SCCEntryPoints_9,
  MR_Word transform_hlds__inlining__SCCProcs_10,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_24,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_25,
  MR_Word transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_27)
{
  {
    MR_bool transform_hlds__inlining__succeeded;
    MR_Word transform_hlds__inlining__SCC_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__SCCEntryPoints_9, (MR_Integer) 0)));
    MR_Word transform_hlds__inlining__CalledFromHigherSCCs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__SCCEntryPoints_9, (MR_Integer) 1)));
    MR_Word transform_hlds__inlining__Exported_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__SCCEntryPoints_9, (MR_Integer) 2)));
    MR_Word transform_hlds__inlining__TSCCDepInfo_16;
    MR_Word transform_hlds__inlining__TSCCsEntries_17;
    MR_Integer transform_hlds__inlining__LinearTailRecMaxExtra_18;
    MR_Word transform_hlds__inlining__Var_35;
    MR_Word transform_hlds__inlining__Var_36;
    MR_Word transform_hlds__inlining__Var_37;
    MR_Integer transform_hlds__inlining__Var_38;
    MR_Integer transform_hlds__inlining__Var_39;
    MR_Integer transform_hlds__inlining__Var_40;
    MR_Integer transform_hlds__inlining__Var_41;
    MR_Word transform_hlds__inlining__Var_42;
    MR_Word transform_hlds__inlining__Var_43;
    MR_Word transform_hlds__inlining__Var_44;
    MR_Word transform_hlds__inlining__TypeCtorInfo_45_45;
    MR_Word transform_hlds__inlining__TypeInfo_46_46;
    MR_Word transform_hlds__inlining__TSCCArcs_20;
    MR_Integer transform_hlds__inlining__NumTSCCArcs_21;
    MR_Integer transform_hlds__inlining__NumSCCProcs_22;
    MR_Word transform_hlds__inlining__Var_29;
    MR_Integer transform_hlds__inlining__Var_30;
    MR_Word transform_hlds__inlining__Var_19;

    transform_hlds__inlining__TSCCDepInfo_16 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__inlining__SCC_13, (MR_Integer) 0);
    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_26, transform_hlds__inlining__TSCCDepInfo_16, &transform_hlds__inlining__TSCCsEntries_17);
    transform_hlds__inlining__Var_35 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) & (MR_Integer) 1);
    transform_hlds__inlining__Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    transform_hlds__inlining__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    transform_hlds__inlining__LinearTailRecMaxExtra_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 1)));
    transform_hlds__inlining__Var_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 2)));
    transform_hlds__inlining__Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 3)));
    transform_hlds__inlining__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 4)));
    transform_hlds__inlining__Var_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 5)));
    transform_hlds__inlining__Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 6)))) & (MR_Integer) 1);
    transform_hlds__inlining__Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    transform_hlds__inlining__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), transform_hlds__inlining__Params_8, (MR_Integer) 7)));
    transform_hlds__inlining__succeeded = ((MR_tag((MR_Word) transform_hlds__inlining__TSCCsEntries_17)) == (MR_mktag((MR_Integer) 1)));
    if (transform_hlds__inlining__succeeded)
    {
      transform_hlds__inlining__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__TSCCsEntries_17, (MR_Integer) 0)));
      transform_hlds__inlining__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), transform_hlds__inlining__TSCCsEntries_17, (MR_Integer) 1)));
      transform_hlds__inlining__succeeded = (transform_hlds__inlining__Var_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (transform_hlds__inlining__succeeded)
      {
        transform_hlds__inlining__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        transform_hlds__inlining__TSCCArcs_20 = libs__dependency_graph__dependency_info_get_arcs_1_f_0(transform_hlds__inlining__TypeCtorInfo_45_45, transform_hlds__inlining__TSCCDepInfo_16);
        transform_hlds__inlining__TypeInfo_46_46 = (MR_Word) &transform_hlds__inlining_scalar_common_2[0];
        mercury__list__length_2_p_0(transform_hlds__inlining__TypeInfo_46_46, transform_hlds__inlining__TSCCArcs_20, &transform_hlds__inlining__NumTSCCArcs_21);
        mercury__list__length_2_p_0(transform_hlds__inlining__TypeCtorInfo_45_45, transform_hlds__inlining__SCCProcs_10, &transform_hlds__inlining__NumSCCProcs_22);
        transform_hlds__inlining__Var_30 = (transform_hlds__inlining__NumSCCProcs_22 + transform_hlds__inlining__LinearTailRecMaxExtra_18);
        transform_hlds__inlining__succeeded = (transform_hlds__inlining__NumTSCCArcs_21 <= transform_hlds__inlining__Var_30);
      }
    }
    if (transform_hlds__inlining__succeeded)
    {
      MR_Word transform_hlds__inlining__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
      MR_Word transform_hlds__inlining__EntryPoints_23;
      MR_Word transform_hlds__inlining__Var_31;
      MR_Box transform_hlds__inlining__conv1_STATE_VARIABLE_ModuleInfo_27;

      mercury__set__union_3_p_0(transform_hlds__inlining__TypeCtorInfo_47_47, transform_hlds__inlining__CalledFromHigherSCCs_14, transform_hlds__inlining__Exported_15, &transform_hlds__inlining__EntryPoints_23);
      {
        transform_hlds__inlining__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_31, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_31, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_1));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_31, 3) = ((MR_Box) (transform_hlds__inlining__Params_8));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_31, 4) = ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_24));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_31, 5) = ((MR_Box) (transform_hlds__inlining__SCC_13));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_31, 6) = ((MR_Box) (transform_hlds__inlining__EntryPoints_23));
      }
      mercury__list__foldl_4_p_0(transform_hlds__inlining__TypeCtorInfo_47_47, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__inlining__Var_31, transform_hlds__inlining__SCCProcs_10, ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_26)), &transform_hlds__inlining__conv1_STATE_VARIABLE_ModuleInfo_27);
      *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) transform_hlds__inlining__conv1_STATE_VARIABLE_ModuleInfo_27);
      *transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_25 = transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_24;
    }
    else
    {
      MR_Word transform_hlds__inlining__TypeCtorInfo_23_68;
      MR_Word transform_hlds__inlining__ShouldInlineSCCProcs_60;
      MR_Word transform_hlds__inlining__Var_61;
      MR_Word transform_hlds__inlining__Var_62;
      MR_Word transform_hlds__inlining__Var_64;
      MR_Word transform_hlds__inlining__Var_66;
      MR_Box transform_hlds__inlining__conv3_STATE_VARIABLE_ShouldInlineProcs_25;
      MR_Box transform_hlds__inlining__conv5_STATE_VARIABLE_ModuleInfo_27;

      {
        transform_hlds__inlining__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_61, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_61, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_2));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_61, 3) = ((MR_Box) (transform_hlds__inlining__Params_8));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_61, 4) = ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_26));
      }
      transform_hlds__inlining__TypeCtorInfo_23_68 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
      mercury__list__filter_3_p_0(transform_hlds__inlining__TypeCtorInfo_23_68, transform_hlds__inlining__Var_61, transform_hlds__inlining__SCCProcs_10, &transform_hlds__inlining__ShouldInlineSCCProcs_60);
      {
        transform_hlds__inlining__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_62, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_62, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_3));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_62, 3) = ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_26));
      }
      mercury__list__foldl_4_p_0(transform_hlds__inlining__TypeCtorInfo_23_68, (MR_Word) &transform_hlds__inlining_scalar_common_1[3], transform_hlds__inlining__Var_62, transform_hlds__inlining__ShouldInlineSCCProcs_60, ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_0_24)), &transform_hlds__inlining__conv3_STATE_VARIABLE_ShouldInlineProcs_25);
      *transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_25 = ((MR_Word) transform_hlds__inlining__conv3_STATE_VARIABLE_ShouldInlineProcs_25);
      transform_hlds__inlining__Var_66 = mercury__set__init_0_f_0(transform_hlds__inlining__TypeCtorInfo_23_68);
      {
        transform_hlds__inlining__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_64, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_64, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_4));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_64, 3) = ((MR_Box) (transform_hlds__inlining__Params_8));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_64, 4) = ((MR_Box) (*transform_hlds__inlining__STATE_VARIABLE_ShouldInlineProcs_25));
        MR_hl_field(MR_mktag(0), transform_hlds__inlining__Var_64, 5) = ((MR_Box) (transform_hlds__inlining__Var_66));
      }
      mercury__list__foldl_4_p_0(transform_hlds__inlining__TypeCtorInfo_23_68, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, transform_hlds__inlining__Var_64, transform_hlds__inlining__SCCProcs_10, ((MR_Box) (transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_0_26)), &transform_hlds__inlining__conv5_STATE_VARIABLE_ModuleInfo_27);
      *transform_hlds__inlining__STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) transform_hlds__inlining__conv5_STATE_VARIABLE_ModuleInfo_27);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____inline_info_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____inline_info_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____inline_params_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____inline_params_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_should_inline_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____maybe_should_inline_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_should_inline_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____maybe_should_inline_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____maybe_tail_rec_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____maybe_tail_rec_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0_10001(
  MR_Box transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2)
{
  {
    MR_bool transform_hlds__inlining__succeeded;

    transform_hlds__inlining__succeeded = transform_hlds__inlining____Unify____maybe_user_req_0_0(((MR_Word) transform_hlds__inlining__wrapper_arg_1), ((MR_Word) transform_hlds__inlining__wrapper_arg_2));
    return transform_hlds__inlining__succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_user_req_0_0_10001(
  MR_Box * transform_hlds__inlining__wrapper_arg_1,
  MR_Box transform_hlds__inlining__wrapper_arg_2,
  MR_Box transform_hlds__inlining__wrapper_arg_3)
{
  {
    MR_Word transform_hlds__inlining__conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____maybe_user_req_0_0(&transform_hlds__inlining__conv0_HeadVar__1_1, ((MR_Word) transform_hlds__inlining__wrapper_arg_2), ((MR_Word) transform_hlds__inlining__wrapper_arg_3));
    *transform_hlds__inlining__wrapper_arg_1 = ((MR_Box) (transform_hlds__inlining__conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__inlining__init(void)
{
}

void mercury__transform_hlds__inlining__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_info_0);
	MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0);
	MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_may_inline_purity_promised_pred_0);
	MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_should_inline_0);
	MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_tail_rec_0);
	MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_user_req_0);
}

void mercury__transform_hlds__inlining__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__inlining__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module transform_hlds.inlining. */
