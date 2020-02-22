/*
** Automatically generated from `inlining.m'
** by the Mercury compiler,
** version rotd-2020-02-22
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


// :- module transform_hlds.inlining.
// :- implementation.

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
#include "check_hlds.det_analysis.mih"
#include "check_hlds.det_report.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "require.mih"
#include "robdd.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"



struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s {
  MR_bool transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_27;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_74;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__RttiVarMaps_66;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__MultiMap_68;
  jmp_buf transform_hlds__inlining__inlining_in_call_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_70;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVar_73;
  MR_Box transform_hlds__inlining__inlining_in_call_5_p_0_env_0__conv0_ArgVar_73;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[15];

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[15];

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[15];

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

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_maybe_should_inline_0_1[2];

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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_should_inline_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_should_inline_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining__mark_proc_to_be_inlined_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ShouldInlineProcs_0_9,
  MR_Word * STATE_VARIABLE_ShouldInlineProcs_10);

static void MR_CALL 
transform_hlds__inlining__inline_in_linear_tail_rec_proc_7_p_0(
  MR_Word Params_8,
  MR_Word ShouldInlineProcs_9,
  MR_Word SCC_10,
  MR_Word EntryPoints_11,
  MR_Word PredProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16);

static void MR_CALL 
transform_hlds__inlining__inline_in_sccs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5);

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0(
  MR_Word Params_7,
  MR_Word SCCEntryPoints_8,
  MR_Word STATE_VARIABLE_ShouldInlineProcs_0_20,
  MR_Word * STATE_VARIABLE_ShouldInlineProcs_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23);

static void MR_CALL 
transform_hlds__inlining__inline_in_proc_6_p_0(
  MR_Word Params_7,
  MR_Word ShouldInlineProcs_8,
  MR_Word ShouldInlineTailProcs_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_58,
  MR_Word * STATE_VARIABLE_Info_59);

static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55);

static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__inlining_in_disjuncts_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
transform_hlds__inlining__should_inline_at_call_site_4_p_0(
  MR_Word Info_5,
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * ShouldInline_8);

static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__inlining__should_proc_be_inlined_3_p_0(
  MR_Word Params_4,
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6);

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0(
  MR_Word Params_8,
  MR_Word SCCEntryPoints_9,
  MR_Word SCCProcs_10,
  MR_Word STATE_VARIABLE_ShouldInlineProcs_0_24,
  MR_Word * STATE_VARIABLE_ShouldInlineProcs_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_should_inline_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_should_inline_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_user_req_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__inlining_scalar_common_1[7][2];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_2[2][3];

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

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__inlining_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__inlining_scalar_common_1[2]))
  },
  /* row 1 */
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
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 4)),
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
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[15] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[15] = {
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
  (MR_String) "i_changed_detism",
  (MR_String) "i_changed_purity"
};

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[15] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
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
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0 = {
  (MR_String) "inline_info",
  INT16_C(15),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0
};

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____inline_info_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____inline_info_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "inline_info",
  {     transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0),
    (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0[11] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)
};

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0[11] = {
  (MR_String) "ip_simple",
  (MR_String) "ip_single_use",
  (MR_String) "ip_linear_tail_rec",
  (MR_String) "ip_highlevel_code",
  (MR_String) "ip_any_tracing",
  (MR_String) "ip_linear_tail_rec_max_extra",
  (MR_String) "ip_call_cost",
  (MR_String) "ip_compound_size_threshold",
  (MR_String) "ip_simple_goal_threshold",
  (MR_String) "ip_var_threshold",
  (MR_String) "ip_needed_map"
};

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0[11] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
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
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0 = {
  (MR_String) "inline_params",
  INT16_C(11),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0,
  transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0
};

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____inline_params_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____inline_params_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "inline_params",
  {     transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_0 = {
  (MR_String) "may_not_inline_purity_promised_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_1 = {
  (MR_String) "may_inline_purity_promised_pred",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "may_inline_purity_promised_pred",
  {     transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_may_inline_purity_promised_pred_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_may_inline_purity_promised_pred_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_may_inline_purity_promised_pred_0
};

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_0 = {
  (MR_String) "should_not_inline",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_maybe_should_inline_0_1[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_tail_rec_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_user_req_0)
};

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_maybe_should_inline_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_1 = {
  (MR_String) "should_inline",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__inlining__transform_hlds__inlining__field_types_maybe_should_inline_0_1,
  NULL,
  transform_hlds__inlining__transform_hlds__inlining__field_locns_maybe_should_inline_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_0[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_1[1] = {
  &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_1
};

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_maybe_should_inline_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_1,
    INT8_C(-1)
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
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____maybe_should_inline_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____maybe_should_inline_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "maybe_should_inline",
  {     transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_maybe_should_inline_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_maybe_should_inline_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_should_inline_0
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_0 = {
  (MR_String) "not_tail_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_1 = {
  (MR_String) "tail_rec",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____maybe_tail_rec_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____maybe_tail_rec_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "maybe_tail_rec",
  {     transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_tail_rec_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_maybe_tail_rec_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_tail_rec_0
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_0 = {
  (MR_String) "not_user_req",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_1 = {
  (MR_String) "user_req",
  INT32_C(1)
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
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____maybe_user_req_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____maybe_user_req_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "maybe_user_req",
  {     transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_user_req_0 },
  {     transform_hlds__inlining__transform_hlds__inlining__enum_value_ordered_maybe_user_req_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_user_req_0
};

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_user_req_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_should_inline_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word Var_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word ArgY2_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word SubResult1_10;
        MR_Integer Var_19 = (MR_Integer) (Var_18);
        MR_Integer Var_20 = (MR_Integer) (ArgY1_9);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
        {
          SubResult1_10 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
          {
            SubResult1_10 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult1_10 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (Var_17);
          MR_Integer Var_22 = (MR_Integer) (ArgY2_12);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_should_inline_0_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
          succeeded = (ArgX2_7 == ArgY2_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Integer ArgX9_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgY9_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Integer ArgX10_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Integer ArgY10_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;
      MR_Integer Var_49 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_50 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_49 < Var_50);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_49 > Var_50);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_51 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_52 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_51 < Var_52);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_51 > Var_52);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_53 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_54 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_53 < Var_54);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_53 > Var_54);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;
            MR_Integer Var_55 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_56 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_55 < Var_56);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (Var_55 > Var_56);
              if (succeeded)
              {
                SubResult4_15 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = MR_TRUE;
                succeeded = !(succeeded);
                if (succeeded)
                {
                  SubResult4_15 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;
              MR_Integer Var_57 = (MR_Integer) (ArgX5_16);
              MR_Integer Var_58 = (MR_Integer) (ArgY5_17);

              succeeded = (Var_57 < Var_58);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (Var_57 > Var_58);
                if (succeeded)
                {
                  SubResult5_18 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    SubResult5_18 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                succeeded = (ArgX6_19 < ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX6_19 > ArgY6_20);
                  if (succeeded)
                  {
                    SubResult6_21 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = MR_TRUE;
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      SubResult6_21 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  succeeded = (ArgX7_22 < ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX7_22 > ArgY7_23);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult7_24 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    succeeded = (ArgX8_25 < ArgY8_26);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX8_25 > ArgY8_26);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      succeeded = (ArgX9_28 < ArgY9_29);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX9_28 > ArgY9_29);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult9_30 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        succeeded = (ArgX10_31 < ArgY10_32);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX10_31 > ArgY10_32);
                          if (succeeded)
                          {
                            SubResult10_33 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = MR_TRUE;
                            succeeded = !(succeeded);
                            if (succeeded)
                            {
                              SubResult10_33 = (MR_Integer) 0;
                              succeeded = MR_TRUE;
                            }
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_25 == CastY_26);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_27_27;
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Integer ArgX9_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Integer ArgY9_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Integer ArgX10_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Integer ArgY10_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = (ArgX4_9 == ArgY4_10);
            if (succeeded)
            {
              succeeded = (ArgX5_11 == ArgY5_12);
              if (succeeded)
              {
                succeeded = (ArgX6_13 == ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        succeeded = (ArgX10_21 == ArgY10_22);
                        if (succeeded)
                        {
                          TypeInfo_27_27 = (MR_Word) (&transform_hlds__inlining_scalar_common_2[1]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
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
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_48 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_49 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_48 == CastY_49);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX13_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY13_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX15_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) & (MR_Integer) 1);
      MR_Word ArgY15_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;
        MR_Integer Var_65 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_66 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_65 < Var_66);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_65 > Var_66);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_67 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_68 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_67 < Var_68);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_67 > Var_68);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_module____Compare____module_info_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[3]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[3]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;

                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[5]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                    succeeded = (SubResult8_27 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;

                      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult9_30, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
                      succeeded = (SubResult9_30 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                      {
                        MR_Word SubResult10_33;

                        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[6]), &SubResult10_33, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                        succeeded = (SubResult10_33 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult10_33;
                        else
                        {
                          MR_Word SubResult11_36;

                          hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult11_36, ArgX11_34, ArgY11_35);
                          succeeded = (SubResult11_36 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult11_36;
                          else
                          {
                            MR_Word SubResult12_39;
                            MR_Integer Var_69 = (MR_Integer) (ArgX12_37);
                            MR_Integer Var_70 = (MR_Integer) (ArgY12_38);

                            succeeded = (Var_69 < Var_70);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (Var_69 > Var_70);
                              if (succeeded)
                              {
                                SubResult12_39 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = MR_TRUE;
                                succeeded = !(succeeded);
                                if (succeeded)
                                {
                                  SubResult12_39 = (MR_Integer) 0;
                                  succeeded = MR_TRUE;
                                }
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult12_39;
                            else
                            {
                              MR_Word SubResult13_42;
                              MR_Integer Var_71 = (MR_Integer) (ArgX13_40);
                              MR_Integer Var_72 = (MR_Integer) (ArgY13_41);

                              succeeded = (Var_71 < Var_72);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_71 > Var_72);
                                if (succeeded)
                                {
                                  SubResult13_42 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult13_42 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult13_42;
                              else
                              {
                                MR_Word SubResult14_45;
                                MR_Integer Var_73 = (MR_Integer) (ArgX14_43);
                                MR_Integer Var_74 = (MR_Integer) (ArgY14_44);

                                succeeded = (Var_73 < Var_74);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_73 > Var_74);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult14_45 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult14_45;
                                else
                                {
                                  MR_Integer Var_75 = (MR_Integer) (ArgX15_46);
                                  MR_Integer Var_76 = (MR_Integer) (ArgY15_47);

                                  succeeded = (Var_75 < Var_76);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (Var_75 > Var_76);
                                    if (succeeded)
                                      *HeadVar__1_1 = (MR_Integer) 2;
                                    else
                                      *HeadVar__1_1 = (MR_Integer) 0;
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_33 == CastY_34);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_36_36;
      MR_Word TypeInfo_37_37;
      MR_Word TypeInfo_38_38;
      MR_Word TypeInfo_39_39;
      MR_Word TypeCtorInfo_40_40;
      MR_Word TypeInfo_41_41;
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) >> 3)) & (MR_Integer) 1);
      MR_Word ArgX13_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY13_28 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX15_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))) & (MR_Integer) 1);
      MR_Word ArgY15_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeInfo_36_36 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[4]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_36_36, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_37_37 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_37_37, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_38_38 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_38_38, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_39_39 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[5]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_39_39, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeCtorInfo_40_40 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
                      succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_40_40, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        TypeInfo_41_41 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[6]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_41_41, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                        if (succeeded)
                        {
                          succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX11_23, ArgY11_24);
                          if (succeeded)
                          {
                            succeeded = (ArgX12_25 == ArgY12_26);
                            if (succeeded)
                            {
                              succeeded = (ArgX13_27 == ArgY13_28);
                              if (succeeded)
                              {
                                succeeded = (ArgX14_29 == ArgY14_30);
                                if (succeeded)
                                  succeeded = (ArgX15_31 == ArgY15_32);
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
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining__mark_proc_to_be_inlined_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6,
  MR_Word STATE_VARIABLE_ShouldInlineProcs_0_9,
  MR_Word * STATE_VARIABLE_ShouldInlineProcs_10)
{
  {
    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_6)), STATE_VARIABLE_ShouldInlineProcs_0_9, STATE_VARIABLE_ShouldInlineProcs_10);
    hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Inlining ", PredProcId_6, ModuleInfo_5);
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_linear_tail_rec_proc_7_p_0(
  MR_Word Params_8,
  MR_Word ShouldInlineProcs_9,
  MR_Word SCC_10,
  MR_Word EntryPoints_11,
  MR_Word PredProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16)
{
  {
    MR_bool succeeded;
    MR_Word ShouldInlineTailProcs_14;

    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_12)), EntryPoints_11);
    if (succeeded)
      mercury__set__delete_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_12)), SCC_10, &ShouldInlineTailProcs_14);
    else
      mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &ShouldInlineTailProcs_14);
    transform_hlds__inlining__inline_in_proc_6_p_0(Params_8, ShouldInlineProcs_9, ShouldInlineTailProcs_14, PredProcId_12, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16);
  }
}

MR_bool MR_CALL 
transform_hlds__inlining__can_inline_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word BuiltinState_9,
  MR_Word MayInlinePromisedPure_10)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word HighLevelCode_12;
    MR_Word PredInfo_20;
    MR_Word ProcInfo_21;
    MR_Word MaybeComplexityProcMap_22;
    MR_Word CalledGoal_26;
    MR_Word CalledGoalExpr_27;
    MR_Word Var_42;
    MR_Word Var_46;
    MR_Integer Var_45;
    MR_Word ForeignAttributes_29;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 284, &HighLevelCode_12);
    succeeded = (BuiltinState_9 == (MR_Integer) 1);
    if (succeeded)
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_6, PredId_7, ProcId_8, &PredInfo_20, &ProcInfo_21);
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_20);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_20);
        if (succeeded)
        {
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_45);
          succeeded = (ProcId_8 == Var_45);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_42 = (MR_Word) ((MR_Unsigned) 0U);
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_21, &Var_46);
          succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(Var_42, Var_46);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(PredInfo_20);
            succeeded = !(succeeded);
            if (succeeded)
            {
              hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(ModuleInfo_6, &MaybeComplexityProcMap_22);
              if ((MaybeComplexityProcMap_22 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              {
                MR_Word ComplexityProcMap_24;
                MR_Word IsInComplexityMap_25;
                MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComplexityProcMap_22, (MR_Integer) 0))));

                ComplexityProcMap_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 1))));
                IsInComplexityMap_25 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(ComplexityProcMap_24, ModuleInfo_6, PredId_7, ProcId_8);
                succeeded = (IsInComplexityMap_25 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_21, &CalledGoal_26);
                CalledGoalExpr_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalledGoal_26, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) CalledGoalExpr_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), CalledGoalExpr_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ForeignAttributes_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CalledGoalExpr_27, (MR_Integer) 1))));
                  {
                    MR_Word Globals_36;
                    MR_Word Target_37;
                    MR_Word ForeignLanguage_38;
                    MR_Word MaybeMayDuplicate_39;
                    MR_Word Detism_40;

                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_36);
                    libs__globals__get_target_2_p_0(Globals_36, &Target_37);
                    ForeignLanguage_38 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(ForeignAttributes_29);
                    switch (ForeignLanguage_38) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        succeeded = (Target_37 == (MR_Integer) 0);
                        break;
                      case (MR_Integer) 1:
                        succeeded = (Target_37 == (MR_Integer) 1);
                        break;
                      case (MR_Integer) 3:
                        succeeded = (Target_37 == (MR_Integer) 3);
                        break;
                      case (MR_Integer) 2:
                        succeeded = (Target_37 == (MR_Integer) 2);
                        break;
                    }
                    succeeded = !(succeeded);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      MaybeMayDuplicate_39 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(ForeignAttributes_29);
                      if ((MaybeMayDuplicate_39 == (MR_Word) ((MR_Unsigned) 0U)))
                        succeeded = MR_TRUE;
                      else
                      {
                        MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_39, (MR_Integer) 0))));

                        succeeded = (Var_44 == (MR_Integer) 0);
                      }
                      succeeded = !(succeeded);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        succeeded = (HighLevelCode_12 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_21, &Detism_40);
                          switch (Detism_40) {
                            default:
                              succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 2:
                              succeeded = MR_TRUE;
                              break;
                            case (MR_Integer) 3:
                              succeeded = MR_TRUE;
                              break;
                          }
                        }
                        succeeded = !(succeeded);
                      }
                    }
                  }
                }
                else
                  succeeded = MR_TRUE;
                if (succeeded)
                  switch (MayInlinePromisedPure_10) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word MaybePromisedPurity_41;

                        hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(PredInfo_20, &MaybePromisedPurity_41);
                        succeeded = (MaybePromisedPurity_41 == (MR_Word) ((MR_Unsigned) 0U));
                      }
                      break;
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

void MR_CALL 
transform_hlds__inlining__rename_goal_11_p_0(
  MR_Word HeadVars_12,
  MR_Word ArgVars_13,
  MR_Word VarSet0_14,
  MR_Word CalleeVarSet_15,
  MR_Word * VarSet_16,
  MR_Word VarTypes1_17,
  MR_Word CalleeVarTypes_18,
  MR_Word * VarTypes_19,
  MR_Word * Renaming_20,
  MR_Word CalledGoal_21,
  MR_Word * Goal_22)
{
  {
    MR_Word Renaming0_23;
    MR_Word CalleeListOfVars_24;

    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[1]), (MR_Word) (&transform_hlds__inlining_scalar_common_1[1]), HeadVars_12, ArgVars_13, &Renaming0_23);
    mercury__varset__vars_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CalleeVarSet_15, &CalleeListOfVars_24);
    hlds__goal_util__clone_variables_9_p_0(CalleeListOfVars_24, CalleeVarSet_15, CalleeVarTypes_18, VarSet0_14, VarSet_16, VarTypes1_17, VarTypes_19, Renaming0_23, Renaming_20);
    hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(*Renaming_20, CalledGoal_21, Goal_22);
  }
}

MR_bool MR_CALL 
transform_hlds__inlining__is_simple_clause_list_2_p_0(
  MR_Word Clauses_3,
  MR_Integer SimpleThreshold_4)
{
  {
    MR_bool succeeded;
    MR_Integer Size_5;

    hlds__goal_util__clause_list_size_2_p_0(Clauses_3, &Size_5);
    succeeded = (Size_5 < SimpleThreshold_4);
    if (!(succeeded))
    {
      MR_Word Clause_6;
      MR_Word Goal_7;
      MR_Word Var_8;
      MR_Integer Var_9;
      MR_Integer Var_10;

      succeeded = (Clauses_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Clause_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_3, (MR_Integer) 0))));
        Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Clauses_3, (MR_Integer) 1))));
        succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Goal_7 = hlds__hlds_clauses__clause_body_1_f_0(Clause_6);
          Var_10 = (MR_Integer) 3;
          Var_9 = (MR_Integer) ((MR_Unsigned) SimpleThreshold_4 * (MR_Unsigned) Var_10);
          succeeded = (Size_5 < Var_9);
          if (succeeded)
            succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(Goal_7);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
transform_hlds__inlining__inline_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22)
{
  {
    MR_bool succeeded;
    MR_Word Globals_4;
    MR_Word Simple_5;
    MR_Word SingleUse_6;
    MR_Word LinearTailRec_7;
    MR_Integer LinearTailRecMaxExtra_8;
    MR_Integer CallCost_9;
    MR_Integer CompoundThreshold_10;
    MR_Integer SimpleThreshold_11;
    MR_Integer VarThreshold_12;
    MR_Word HighLevelCode_13;
    MR_Word TraceLevel_14;
    MR_Word AnyTracing_15;
    MR_Word NeededMap_16;
    MR_Word Params_17;
    MR_Word DepInfo_18;
    MR_Word BottomUpSCCsEntryPoints_19;
    MR_Word ShouldInlineProcs0_20;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_ModuleInfo_36_36;
    MR_Word STATE_VARIABLE_ModuleInfo_37_37;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_21, &Globals_4);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 362, &Simple_5);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 364, &SingleUse_6);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 370, &LinearTailRec_7);
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 371, &LinearTailRecMaxExtra_8);
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 365, &CallCost_9);
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 366, &CompoundThreshold_10);
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 367, &SimpleThreshold_11);
    libs__globals__lookup_int_option_3_p_0(Globals_4, (MR_Integer) 368, &VarThreshold_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_4, (MR_Integer) 284, &HighLevelCode_13);
    libs__globals__get_trace_level_2_p_0(Globals_4, &TraceLevel_14);
    Var_32 = libs__trace_params__given_trace_level_is_none_1_f_0(TraceLevel_14);
    AnyTracing_15 = mercury__bool__not_1_f_0(Var_32);
    succeeded = (SingleUse_6 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (CompoundThreshold_10 > (MR_Integer) 0);
    if (succeeded)
      transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0(STATE_VARIABLE_ModuleInfo_0_21, &NeededMap_16);
    else
      mercury__map__init_1_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), &NeededMap_16);
    {
      Params_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_17, 0) = (MR_Box) (((((MR_Unsigned) (Simple_5) << 4)) | (((((MR_Unsigned) (SingleUse_6) << 3)) | (((((MR_Unsigned) (LinearTailRec_7) << 2)) | (((((MR_Unsigned) (HighLevelCode_13) << 1)) | (MR_Unsigned) (AnyTracing_15)))))))));
      MR_hl_field(MR_mktag(0), Params_17, 1) = ((MR_Box) (LinearTailRecMaxExtra_8));
      MR_hl_field(MR_mktag(0), Params_17, 2) = ((MR_Box) (CallCost_9));
      MR_hl_field(MR_mktag(0), Params_17, 3) = ((MR_Box) (CompoundThreshold_10));
      MR_hl_field(MR_mktag(0), Params_17, 4) = ((MR_Box) (SimpleThreshold_11));
      MR_hl_field(MR_mktag(0), Params_17, 5) = ((MR_Box) (VarThreshold_12));
      MR_hl_field(MR_mktag(0), Params_17, 6) = ((MR_Box) (NeededMap_16));
    }
    switch (LinearTailRec_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_21, &STATE_VARIABLE_ModuleInfo_36_36, &DepInfo_18);
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_ModuleInfo_34_34;

          hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_21, &STATE_VARIABLE_ModuleInfo_34_34, &DepInfo_18);
          hlds__mark_tail_calls__mark_self_and_mutual_tail_rec_calls_in_module_3_p_0(DepInfo_18, STATE_VARIABLE_ModuleInfo_34_34, &STATE_VARIABLE_ModuleInfo_36_36);
        }
        break;
    }
    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(STATE_VARIABLE_ModuleInfo_36_36, DepInfo_18, &BottomUpSCCsEntryPoints_19);
    mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &ShouldInlineProcs0_20);
    transform_hlds__inlining__inline_in_sccs_5_p_0(Params_17, BottomUpSCCsEntryPoints_19, ShouldInlineProcs0_20, STATE_VARIABLE_ModuleInfo_36_36, &STATE_VARIABLE_ModuleInfo_37_37);
    hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_37_37, STATE_VARIABLE_ModuleInfo_22);
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_sccs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    else
    {
      MR_Word SCCEntryPoints_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word SCCsEntryPoints_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ShouldInlineProcs_19_19;
      MR_Word STATE_VARIABLE_ModuleInfo_20_20;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;

      transform_hlds__inlining__inline_in_scc_6_p_0(HeadVar__1_1, SCCEntryPoints_12, HeadVar__3_3, &STATE_VARIABLE_ShouldInlineProcs_19_19, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SCCsEntryPoints_13;
      next_value_of_HeadVar__3_3 = STATE_VARIABLE_ShouldInlineProcs_19_19;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_20_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_52;

    transform_hlds__inlining__inline_in_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_52);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_52));
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ShouldInlineProcs_10;

    transform_hlds__inlining__mark_proc_to_be_inlined_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ShouldInlineProcs_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ShouldInlineProcs_10));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__inlining__should_proc_be_inlined_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_scc_6_p_0(
  MR_Word Params_7,
  MR_Word SCCEntryPoints_8,
  MR_Word STATE_VARIABLE_ShouldInlineProcs_0_20,
  MR_Word * STATE_VARIABLE_ShouldInlineProcs_21,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  {
    MR_bool succeeded;
    MR_Word SCC_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCEntryPoints_8, (MR_Integer) 0))));
    MR_Word SCCProcs_14;

    SCCProcs_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_11);
    if ((SCCProcs_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.inlining.inline_in_scc\'/6", (MR_String) "empty SCC");
        return;
      }
    else
    {
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SCCProcs_14, (MR_Integer) 1))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SCCProcs_14, (MR_Integer) 0))));

      if ((Var_46 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_30;

        Var_30 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
        transform_hlds__inlining__inline_in_proc_6_p_0(Params_7, STATE_VARIABLE_ShouldInlineProcs_0_20, Var_30, Var_47, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
        succeeded = transform_hlds__inlining__should_proc_be_inlined_3_p_0(Params_7, *STATE_VARIABLE_ModuleInfo_23, Var_47);
        if (succeeded)
        {
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_47)), STATE_VARIABLE_ShouldInlineProcs_0_20, STATE_VARIABLE_ShouldInlineProcs_21);
          hlds__passes_aux__write_proc_progress_message_5_p_0((MR_String) "% Inlining ", Var_47, *STATE_VARIABLE_ModuleInfo_23);
        }
        else
          *STATE_VARIABLE_ShouldInlineProcs_21 = STATE_VARIABLE_ShouldInlineProcs_0_20;
      }
      else
      {
        MR_Word LinearTailRec_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);

        switch (LinearTailRec_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ShouldInlineSCCProcs_74;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_78;
              MR_Word Var_80;
              MR_Box conv1_STATE_VARIABLE_ShouldInlineProcs_21;
              MR_Box conv3_STATE_VARIABLE_ModuleInfo_23;

              {
                Var_75 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_75, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_4[0]));
                MR_hl_field(MR_mktag(0), Var_75, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_scc_6_p_0_1));
                MR_hl_field(MR_mktag(0), Var_75, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_75, 3) = ((MR_Box) (Params_7));
                MR_hl_field(MR_mktag(0), Var_75, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_22));
              }
              mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_75, SCCProcs_14, &ShouldInlineSCCProcs_74);
              {
                Var_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_5[0]));
                MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_scc_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_22));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__inlining_scalar_common_1[3]), Var_76, ShouldInlineSCCProcs_74, ((MR_Box) (STATE_VARIABLE_ShouldInlineProcs_0_20)), &conv1_STATE_VARIABLE_ShouldInlineProcs_21);
              *STATE_VARIABLE_ShouldInlineProcs_21 = ((MR_Word) (conv1_STATE_VARIABLE_ShouldInlineProcs_21));
              Var_80 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
              {
                Var_78 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_scc_6_p_0_3));
                MR_hl_field(MR_mktag(0), Var_78, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(0), Var_78, 3) = ((MR_Box) (Params_7));
                MR_hl_field(MR_mktag(0), Var_78, 4) = ((MR_Box) (*STATE_VARIABLE_ShouldInlineProcs_21));
                MR_hl_field(MR_mktag(0), Var_78, 5) = ((MR_Box) (Var_80));
              }
              mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_78, SCCProcs_14, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_22)), &conv3_STATE_VARIABLE_ModuleInfo_23);
              *STATE_VARIABLE_ModuleInfo_23 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_23));
            }
            break;
          case (MR_Integer) 1:
            transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0(Params_7, SCCEntryPoints_8, SCCProcs_14, STATE_VARIABLE_ShouldInlineProcs_0_20, STATE_VARIABLE_ShouldInlineProcs_21, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_23);
            break;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_proc_6_p_0(
  MR_Word Params_7,
  MR_Word ShouldInlineProcs_8,
  MR_Word ShouldInlineTailProcs_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * STATE_VARIABLE_ModuleInfo_52)
{
  {
    MR_Integer VarThresh_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 5))));
    MR_Word HighLevelCode_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word AnyTracing_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_7, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word PredId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_10, (MR_Integer) 0))));
    MR_Integer ProcId_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_10, (MR_Integer) 1))));
    MR_Word PredTable0_19;
    MR_Word ProcTable0_20;
    MR_Word UnivQTVars_21;
    MR_Word TypeVarSet0_22;
    MR_Word Goal0_23;
    MR_Word VarSet0_24;
    MR_Word VarTypes0_25;
    MR_Word RttiVarMaps0_26;
    MR_Word InlineInfo0_31;
    MR_Word Goal_32;
    MR_Word InlineInfo_33;
    MR_Word VarSet_41;
    MR_Word VarTypes_42;
    MR_Word TypeVarSet_43;
    MR_Word RttiVarMaps_44;
    MR_Word DidInlining_45;
    MR_Word InlinedParallel_46;
    MR_Word DetChanged_47;
    MR_Word PurityChanged_48;
    MR_Word ProcTable_49;
    MR_Word PredTable_50;
    MR_Word STATE_VARIABLE_PredInfo_53_53;
    MR_Word STATE_VARIABLE_ProcInfo_54_54;
    MR_Word STATE_VARIABLE_PredInfo_55_55;
    MR_Word STATE_VARIABLE_ProcInfo_56_56;
    MR_Word STATE_VARIABLE_ProcInfo_57_57;
    MR_Word STATE_VARIABLE_ProcInfo_58_58;
    MR_Word STATE_VARIABLE_ProcInfo_59_59;
    MR_Word STATE_VARIABLE_ProcInfo_61_61;
    MR_Word STATE_VARIABLE_ProcInfo_65_65;
    MR_Word STATE_VARIABLE_ModuleInfo_66_66;
    MR_Word STATE_VARIABLE_PredInfo_67_67;
    MR_Word STATE_VARIABLE_PredInfo_68_68;
    MR_Word STATE_VARIABLE_ModuleInfo_69_69;
    MR_Box conv0_STATE_VARIABLE_PredInfo_53_53;
    MR_Box conv1_STATE_VARIABLE_ProcInfo_54_54;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_51, &PredTable0_19);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_19, ((MR_Box) (PredId_17)), &conv0_STATE_VARIABLE_PredInfo_53_53);
    STATE_VARIABLE_PredInfo_53_53 = ((MR_Word) (conv0_STATE_VARIABLE_PredInfo_53_53));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_53_53, &ProcTable0_20);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_20, ((MR_Box) (ProcId_18)), &conv1_STATE_VARIABLE_ProcInfo_54_54);
    STATE_VARIABLE_ProcInfo_54_54 = ((MR_Word) (conv1_STATE_VARIABLE_ProcInfo_54_54));
    hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(STATE_VARIABLE_PredInfo_53_53, &UnivQTVars_21);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_53_53, &TypeVarSet0_22);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_54_54, &Goal0_23);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_54_54, &VarSet0_24);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_54_54, &VarTypes0_25);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_54_54, &RttiVarMaps0_26);
    {
      InlineInfo0_31 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 0) = ((MR_Box) (VarThresh_14));
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 1) = (MR_Box) (((((MR_Unsigned) (HighLevelCode_15) << 1)) | (MR_Unsigned) (AnyTracing_16)));
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 2) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_51));
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 3) = ((MR_Box) (UnivQTVars_21));
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 4) = ((MR_Box) (ShouldInlineTailProcs_9));
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 5) = ((MR_Box) (ShouldInlineProcs_8));
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 6) = ((MR_Box) (VarSet0_24));
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 7) = ((MR_Box) (VarTypes0_25));
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 8) = ((MR_Box) (TypeVarSet0_22));
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 9) = ((MR_Box) (RttiVarMaps0_26));
      MR_hl_field(MR_mktag(0), InlineInfo0_31, 10) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
    }
    transform_hlds__inlining__inlining_in_goal_4_p_0(Goal0_23, &Goal_32, InlineInfo0_31, &InlineInfo_33);
    VarSet_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InlineInfo_33, (MR_Integer) 6))));
    VarTypes_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InlineInfo_33, (MR_Integer) 7))));
    TypeVarSet_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InlineInfo_33, (MR_Integer) 8))));
    RttiVarMaps_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InlineInfo_33, (MR_Integer) 9))));
    DidInlining_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InlineInfo_33, (MR_Integer) 10))) >> 3)) & (MR_Integer) 1);
    InlinedParallel_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InlineInfo_33, (MR_Integer) 10))) >> 2)) & (MR_Integer) 1);
    DetChanged_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InlineInfo_33, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
    PurityChanged_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), InlineInfo_33, (MR_Integer) 10))) & (MR_Integer) 1);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_43, STATE_VARIABLE_PredInfo_53_53, &STATE_VARIABLE_PredInfo_55_55);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(VarSet_41, STATE_VARIABLE_ProcInfo_54_54, &STATE_VARIABLE_ProcInfo_56_56);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(VarTypes_42, STATE_VARIABLE_ProcInfo_56_56, &STATE_VARIABLE_ProcInfo_57_57);
    hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_44, STATE_VARIABLE_ProcInfo_57_57, &STATE_VARIABLE_ProcInfo_58_58);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_32, STATE_VARIABLE_ProcInfo_58_58, &STATE_VARIABLE_ProcInfo_59_59);
    switch (InlinedParallel_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_ProcInfo_61_61 = STATE_VARIABLE_ProcInfo_59_59;
        break;
      case (MR_Integer) 1:
        hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_59_59, &STATE_VARIABLE_ProcInfo_61_61);
        break;
    }
    switch (DidInlining_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_ModuleInfo_66_66 = STATE_VARIABLE_ModuleInfo_0_51;
          STATE_VARIABLE_ProcInfo_65_65 = STATE_VARIABLE_ProcInfo_61_61;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_ProcInfo_63_63;

          hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_61_61, &STATE_VARIABLE_ProcInfo_63_63);
          check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_63_63, &STATE_VARIABLE_ProcInfo_65_65, STATE_VARIABLE_ModuleInfo_0_51, &STATE_VARIABLE_ModuleInfo_66_66);
        }
        break;
    }
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_18)), ((MR_Box) (STATE_VARIABLE_ProcInfo_65_65)), ProcTable0_20, &ProcTable_49);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_49, STATE_VARIABLE_PredInfo_55_55, &STATE_VARIABLE_PredInfo_67_67);
    switch (PurityChanged_48) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_PredInfo_68_68 = STATE_VARIABLE_PredInfo_67_67;
        break;
      case (MR_Integer) 1:
        check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_66_66, PredProcId_10, STATE_VARIABLE_PredInfo_67_67, &STATE_VARIABLE_PredInfo_68_68);
        break;
    }
    mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_17)), ((MR_Box) (STATE_VARIABLE_PredInfo_68_68)), PredTable0_19, &PredTable_50);
    hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_50, STATE_VARIABLE_ModuleInfo_66_66, &STATE_VARIABLE_ModuleInfo_69_69);
    switch (DetChanged_47) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_ModuleInfo_52 = STATE_VARIABLE_ModuleInfo_69_69;
        break;
      case (MR_Integer) 1:
        check_hlds__det_analysis__det_infer_proc_ignore_msgs_4_p_0(PredId_17, ProcId_18, STATE_VARIABLE_ModuleInfo_69_69, STATE_VARIABLE_ModuleInfo_52);
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVar_73 = ((MR_Word) ((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__conv0_ArgVar_73));
    transform_hlds__inlining__inlining_in_call_5_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_71;
      MR_Word Var_72;

      mercury__multi_map__lookup_3_p_0((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_74, (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_74, (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__MultiMap_68, ((MR_Box) ((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVar_73)), &(env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_70);
      (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_70 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
      {
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_70, (MR_Integer) 0))));
        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_70, (MR_Integer) 1))));
        (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = transform_hlds__inlining__tci_vars_different_constraints_2_p_0((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__RttiVarMaps_66, (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_70);
        if ((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
          transform_hlds__inlining__inlining_in_call_5_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_74, &(env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__conv0_ArgVar_73, (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_27, transform_hlds__inlining__inlining_in_call_5_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_58,
  MR_Word * STATE_VARIABLE_Info_59)
{
  {
    struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s env;

    {
      MR_Integer VarThresh_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 0))));
      MR_Word HighLevelCode_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word AnyTracing_12 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ModuleInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 2))));
      MR_Word ExternalTypeParams_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 3))));
      MR_Word ShouldInlineTailProcs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 4))));
      MR_Word ShouldInlineProcs_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 5))));
      MR_Word VarSet0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 6))));
      MR_Word VarTypes0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 7))));
      MR_Word TypeVarSet0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 8))));
      MR_Word RttiVarMaps0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 9))));
      MR_Word InlinedParallel0_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 10))) >> 2)) & (MR_Integer) 1);
      MR_Word DetChanged0_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 10))) >> 1)) & (MR_Integer) 1);
      MR_Word PurityChanged0_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 10))) & (MR_Integer) 1);
      MR_Word PredId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 0))));
      MR_Integer ProcId_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 1))));
      MR_Word PredInfo_31;
      MR_Word ProcInfo_32;
      MR_Word ShouldInline_33;
      MR_Word _DidInlining0_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 10))) >> 3)) & (MR_Integer) 1);
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 1)));
      MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_58, (MR_Integer) 10)));
      MR_Word _Builtin_28;
      MR_Word _Context_29;
      MR_Word _SymName_30;
      MR_Unsigned packed_word_2;
      MR_Word TailRec_34;
      MR_Word UserReq_35;
      MR_Unsigned packed_word_3;
      MR_Word HeadVars_67;

      (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 2))));
      packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 3)));
      _Builtin_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 3))) & (MR_Integer) 1);
      _Context_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 4))));
      _SymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 5))));
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_13, PredId_25, ProcId_26, &PredInfo_31, &ProcInfo_32);
      transform_hlds__inlining__should_inline_at_call_site_4_p_0(STATE_VARIABLE_Info_0_58, GoalExpr0_6, GoalInfo0_7, &ShouldInline_33);
      (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (ShouldInline_33 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
      {
        packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShouldInline_33, (MR_Integer) 0)));
        TailRec_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShouldInline_33, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        UserReq_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), ShouldInline_33, (MR_Integer) 0))) & (MR_Integer) 1);
        switch (UserReq_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ListOfVars_36;
              MR_Integer ThisMany_37;
              MR_Word CalleeVarSet_38;
              MR_Word CalleeListOfVars_39;
              MR_Integer CalleeThisMany_40;
              MR_Integer TotalVars_41;

              mercury__varset__vars_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet0_17, &ListOfVars_36);
              mercury__list__length_2_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[1]), ListOfVars_36, &ThisMany_37);
              hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_32, &CalleeVarSet_38);
              mercury__varset__vars_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CalleeVarSet_38, &CalleeListOfVars_39);
              mercury__list__length_2_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[1]), CalleeListOfVars_39, &CalleeThisMany_40);
              TotalVars_41 = (MR_Integer) ((MR_Unsigned) ThisMany_37 + (MR_Unsigned) CalleeThisMany_40);
              (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (TotalVars_41 <= VarThresh_10);
            }
            break;
          case (MR_Integer) 1:
            (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = MR_TRUE;
            break;
        }
        if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
        {
          hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_32, &(env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__RttiVarMaps_66);
          hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_32, &HeadVars_67);
          (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_74 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[1]);
          mercury__multi_map__from_corresponding_lists_3_p_0((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_74, (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_74, (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_27, HeadVars_67, &(env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__MultiMap_68);
          transform_hlds__inlining__inlining_in_call_5_p_0_4(&env);
          (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = !((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded);
        }
      }
      if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
      {
        MR_Word VarSet_42;
        MR_Word VarTypes_43;
        MR_Word TypeVarSet_44;
        MR_Word RttiVarMaps_45;
        MR_Word Goal1_46;
        MR_Word HasParallelConj_48;
        MR_Word InlinedParallel_49;
        MR_Word GoalInfo1_51;
        MR_Word Determinism0_52;
        MR_Word Determinism1_53;
        MR_Word DetChanged_54;
        MR_Word Purity0_55;
        MR_Word Purity1_56;
        MR_Word PurityChanged_57;
        MR_Word STATE_VARIABLE_Info_60_60;
        MR_Word Var_50;

        transform_hlds__inlining__do_inline_call_13_p_0(ExternalTypeParams_14, (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_27, PredInfo_31, ProcInfo_32, VarSet0_17, &VarSet_42, VarTypes0_18, &VarTypes_43, TypeVarSet0_19, &TypeVarSet_44, RttiVarMaps0_20, &RttiVarMaps_45, &Goal1_46);
        hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_32, &HasParallelConj_48);
        switch (HasParallelConj_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            InlinedParallel_49 = InlinedParallel0_22;
            break;
          case (MR_Integer) 0:
            InlinedParallel_49 = (MR_Integer) 1;
            break;
        }
        Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_46, (MR_Integer) 0))));
        GoalInfo1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_46, (MR_Integer) 1))));
        Determinism0_52 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
        Determinism1_53 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo1_51);
        (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (Determinism0_52 == Determinism1_53);
        if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
          DetChanged_54 = DetChanged0_23;
        else
          DetChanged_54 = (MR_Integer) 1;
        Purity0_55 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_7);
        Purity1_56 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo1_51);
        (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (Purity0_55 == Purity1_56);
        if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
          PurityChanged_57 = PurityChanged0_24;
        else
          PurityChanged_57 = (MR_Integer) 1;
        {
          STATE_VARIABLE_Info_60_60 = (MR_Word) MR_new_object(MR_Word, (11 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 0) = ((MR_Box) (VarThresh_10));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 1) = (MR_Box) (packed_word_0);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 2) = ((MR_Box) (ModuleInfo_13));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 3) = ((MR_Box) (ExternalTypeParams_14));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 4) = ((MR_Box) (ShouldInlineTailProcs_15));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 5) = ((MR_Box) (ShouldInlineProcs_16));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 6) = ((MR_Box) (VarSet_42));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 7) = ((MR_Box) (VarTypes_43));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 8) = ((MR_Box) (TypeVarSet_44));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 9) = ((MR_Box) (RttiVarMaps_45));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_60_60, 10) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) (InlinedParallel_49) << 2)) | (((((MR_Unsigned) (DetChanged_54) << 1)) | (MR_Unsigned) (PurityChanged_57)))))));
        }
        switch (TailRec_34) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Goal_8 = Goal1_46;
              *STATE_VARIABLE_Info_59 = STATE_VARIABLE_Info_60_60;
            }
            break;
          case (MR_Integer) 1:
            transform_hlds__inlining__inlining_in_goal_4_p_0(Goal1_46, Goal_8, STATE_VARIABLE_Info_60_60, STATE_VARIABLE_Info_59);
            break;
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *Goal_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_6));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_7));
        }
        *STATE_VARIABLE_Info_59 = STATE_VARIABLE_Info_0_58;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_Info_0_54,
  MR_Word * STATE_VARIABLE_Info_55)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_48 = (MR_Word) ((MR_Word) (GoalExpr0_8));
          MR_Word SubGoal_49;
          MR_Word GoalExpr_73;

          transform_hlds__inlining__inlining_in_goal_4_p_0(SubGoal0_48, &SubGoal_49, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
          GoalExpr_73 = (MR_Word) ((MR_Word) (SubGoal_49));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_73));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *Goal_6 = Goal0_5;
          *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_0_54;
        }
        break;
      case (MR_Integer) 2:
        transform_hlds__inlining__inlining_in_call_5_p_0(GoalExpr0_8, GoalInfo0_9, Goal_6, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_6 = Goal0_5;
              *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_0_54;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Goals_35;
              MR_Word GoalExpr_36;

              switch (ConjType_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  transform_hlds__inlining__inlining_in_par_conj_4_p_0(Goals0_34, &Goals_35, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
                  break;
                case (MR_Integer) 0:
                  transform_hlds__inlining__inlining_in_conj_4_p_0(Goals0_34, &Goals_35, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
                  break;
              }
              {
                GoalExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_36, 1) = (MR_Box) ((MR_Unsigned) (ConjType_33));
                MR_hl_field(MR_mktag(3), GoalExpr_36, 2) = ((MR_Box) (Goals_35));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_36));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Goals_69;
              MR_Word GoalExpr_70;

              transform_hlds__inlining__inlining_in_disjuncts_4_p_0(Goals0_68, &Goals_69, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
              {
                GoalExpr_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_70, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_70, 1) = ((MR_Box) (Goals_69));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_70));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Det_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Cases_40;
              MR_Word GoalExpr_71;

              transform_hlds__inlining__inlining_in_cases_4_p_0(Cases0_39, &Cases_40, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
              {
                GoalExpr_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_71, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_71, 1) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(3), GoalExpr_71, 2) = (MR_Box) ((MR_Unsigned) (Det_38));
                MR_hl_field(MR_mktag(3), GoalExpr_71, 3) = ((MR_Box) (Cases_40));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_71));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word SubGoal0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word FGT_52;

              succeeded = ((((MR_tag((MR_Word) Reason_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_52 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_52) {
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
              {
                *Goal_6 = Goal0_5;
                *STATE_VARIABLE_Info_55 = STATE_VARIABLE_Info_0_54;
              }
              else
              {
                MR_Word GoalExpr_74;
                MR_Word SubGoal_75;

                transform_hlds__inlining__inlining_in_goal_4_p_0(SubGoal0_79, &SubGoal_75, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
                {
                  GoalExpr_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_74, 1) = ((MR_Box) (Reason_50));
                  MR_hl_field(MR_mktag(3), GoalExpr_74, 2) = ((MR_Box) (SubGoal_75));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_74));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_45;
              MR_Word Then_46;
              MR_Word Else_47;
              MR_Word STATE_VARIABLE_Info_60_60;
              MR_Word STATE_VARIABLE_Info_61_61;
              MR_Word GoalExpr_72;

              transform_hlds__inlining__inlining_in_goal_4_p_0(Cond0_42, &Cond_45, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_60_60);
              transform_hlds__inlining__inlining_in_goal_4_p_0(Then0_43, &Then_46, STATE_VARIABLE_Info_60_60, &STATE_VARIABLE_Info_61_61);
              transform_hlds__inlining__inlining_in_goal_4_p_0(Else0_44, &Else_47, STATE_VARIABLE_Info_61_61, STATE_VARIABLE_Info_55);
              {
                GoalExpr_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 1) = ((MR_Box) (Vars_41));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 2) = ((MR_Box) (Cond_45));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 3) = ((MR_Box) (Then_46));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 4) = ((MR_Box) (Else_47));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_72));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.inlining.inlining_in_goal\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_par_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word HeadGoal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailGoals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadGoal_12;
    MR_Word TailGoals_13;
    MR_Word HeadGoalList_14;
    MR_Word STATE_VARIABLE_Info_17_17;

    transform_hlds__inlining__inlining_in_goal_4_p_0(HeadGoal0_8, &HeadGoal_12, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_17_17);
    transform_hlds__inlining__inlining_in_par_conj_4_p_0(TailGoals0_9, &TailGoals_13, STATE_VARIABLE_Info_17_17, STATE_VARIABLE_Info_4);
    hlds__hlds_goal__goal_to_par_conj_list_2_p_0(HeadGoal_12, &HeadGoalList_14);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoalList_14, TailGoals_13);
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word HeadGoal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TailGoals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadGoal_12;
    MR_Word TailGoals_13;
    MR_Word HeadGoalList_14;
    MR_Word STATE_VARIABLE_Info_17_17;

    transform_hlds__inlining__inlining_in_goal_4_p_0(HeadGoal0_8, &HeadGoal_12, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_17_17);
    transform_hlds__inlining__inlining_in_conj_4_p_0(TailGoals0_9, &TailGoals_13, STATE_VARIABLE_Info_17_17, STATE_VARIABLE_Info_4);
    hlds__hlds_goal__goal_to_conj_list_2_p_0(HeadGoal_12, &HeadGoalList_14);
    *HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadGoalList_14, TailGoals_13);
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_Info_19_19;

    transform_hlds__inlining__inlining_in_goal_4_p_0(Goal0_15, &Goal_16, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_19_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_10, 2) = ((MR_Box) (Goal_16));
    }
    transform_hlds__inlining__inlining_in_cases_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_Info_19_19, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_11));
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_disjuncts_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word STATE_VARIABLE_Info_15_15;

    transform_hlds__inlining__inlining_in_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_15_15);
    transform_hlds__inlining__inlining_in_disjuncts_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_Info_15_15, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__should_inline_at_call_site_4_p_0(
  MR_Word Info_5,
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * ShouldInline_8)
{
  {
    MR_bool succeeded;
    MR_Word HighLevelCode_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ModuleInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2))));
    MR_Word ShouldInlineTailProcs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4))));
    MR_Word ShouldInlineProcs_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
    MR_Word PredId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 0))));
    MR_Integer ProcId_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 1))));
    MR_Word Builtin_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_6, (MR_Integer) 3))) & (MR_Integer) 1);
    MR_Word PredProcId_30;
    MR_Word TailRec_31;
    MR_Word Var_35;
    MR_Word PredInfo_47;
    MR_Word ProcInfo_48;
    MR_Word MaybeComplexityProcMap_49;
    MR_Word CalledGoal_53;
    MR_Word CalledGoalExpr_54;
    MR_Word Var_69;
    MR_Word Var_73;
    MR_Integer Var_72;
    MR_Word ForeignAttributes_56;

    {
      PredProcId_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_30, 0) = ((MR_Box) (PredId_24));
      MR_hl_field(MR_mktag(0), PredProcId_30, 1) = ((MR_Box) (ProcId_25));
    }
    succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_30)), ShouldInlineTailProcs_14);
    if (succeeded)
    {
      Var_35 = (MR_Integer) 11;
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_7, Var_35);
    }
    if (succeeded)
      TailRec_31 = (MR_Integer) 1;
    else
      TailRec_31 = (MR_Integer) 0;
    succeeded = (Builtin_27 == (MR_Integer) 1);
    if (succeeded)
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_12, PredId_24, ProcId_25, &PredInfo_47, &ProcInfo_48);
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_47);
      succeeded = !(succeeded);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_47);
        if (succeeded)
        {
          hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_72);
          succeeded = (ProcId_25 == Var_72);
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_69 = (MR_Word) ((MR_Unsigned) 0U);
          hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_48, &Var_73);
          succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(Var_69, Var_73);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(PredInfo_47);
            succeeded = !(succeeded);
            if (succeeded)
            {
              hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(ModuleInfo_12, &MaybeComplexityProcMap_49);
              if ((MaybeComplexityProcMap_49 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              {
                MR_Word ComplexityProcMap_51;
                MR_Word IsInComplexityMap_52;
                MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeComplexityProcMap_49, (MR_Integer) 0))));

                ComplexityProcMap_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_70, (MR_Integer) 1))));
                IsInComplexityMap_52 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(ComplexityProcMap_51, ModuleInfo_12, PredId_24, ProcId_25);
                succeeded = (IsInComplexityMap_52 == (MR_Word) ((MR_Unsigned) 0U));
              }
              if (succeeded)
              {
                hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_48, &CalledGoal_53);
                CalledGoalExpr_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalledGoal_53, (MR_Integer) 0))));
                succeeded = ((((MR_tag((MR_Word) CalledGoalExpr_54)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), CalledGoalExpr_54, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ForeignAttributes_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), CalledGoalExpr_54, (MR_Integer) 1))));
                  {
                    MR_Word Globals_63;
                    MR_Word Target_64;
                    MR_Word ForeignLanguage_65;
                    MR_Word MaybeMayDuplicate_66;
                    MR_Word Detism_67;

                    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_63);
                    libs__globals__get_target_2_p_0(Globals_63, &Target_64);
                    ForeignLanguage_65 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(ForeignAttributes_56);
                    switch (ForeignLanguage_65) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        succeeded = (Target_64 == (MR_Integer) 0);
                        break;
                      case (MR_Integer) 1:
                        succeeded = (Target_64 == (MR_Integer) 1);
                        break;
                      case (MR_Integer) 3:
                        succeeded = (Target_64 == (MR_Integer) 3);
                        break;
                      case (MR_Integer) 2:
                        succeeded = (Target_64 == (MR_Integer) 2);
                        break;
                    }
                    succeeded = !(succeeded);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      MaybeMayDuplicate_66 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(ForeignAttributes_56);
                      if ((MaybeMayDuplicate_66 == (MR_Word) ((MR_Unsigned) 0U)))
                        succeeded = MR_TRUE;
                      else
                      {
                        MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMayDuplicate_66, (MR_Integer) 0))));

                        succeeded = (Var_71 == (MR_Integer) 0);
                      }
                      succeeded = !(succeeded);
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        succeeded = (HighLevelCode_10 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ProcInfo_48, &Detism_67);
                          switch (Detism_67) {
                            default:
                              succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 2:
                              succeeded = MR_TRUE;
                              break;
                            case (MR_Integer) 3:
                              succeeded = MR_TRUE;
                              break;
                          }
                        }
                        succeeded = !(succeeded);
                      }
                    }
                  }
                }
                else
                  succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word PredInfo_32;
      MR_Word Markers_33;
      MR_Word UserReq_34;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_12, PredId_24, &PredInfo_32);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_32, &Markers_33);
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_33, (MR_Integer) 6);
      if (succeeded)
        UserReq_34 = (MR_Integer) 1;
      else
        UserReq_34 = (MR_Integer) 0;
      succeeded = (TailRec_31 == (MR_Integer) 1);
      if (!(succeeded))
      {
        succeeded = (UserReq_34 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_33, (MR_Integer) 8);
          if (!(succeeded))
            succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_30)), ShouldInlineProcs_15);
        }
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *ShouldInline_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) (((((MR_Unsigned) (TailRec_31) << 1)) | (MR_Unsigned) (UserReq_34)));
        }
      else
        *ShouldInline_8 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
      *ShouldInline_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__tci_vars_different_constraints_2_p_0(
  MR_Word RttiVarMaps_3,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word VarA_4;
    MR_Word VarB_5;
    MR_Word Var_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      VarA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        VarB_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0))));
        {
          MR_Word VarInfoA_7;
          MR_Word VarInfoB_8;
          MR_Word ConstraintA_9;
          MR_Word ConstraintB_10;

          hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps_3, VarA_4, &VarInfoA_7);
          hlds__hlds_rtti__rtti_varmaps_var_info_3_p_0(RttiVarMaps_3, VarB_5, &VarInfoB_8);
          succeeded = ((MR_tag((MR_Word) VarInfoA_7)) == (MR_Integer) 2);
          if (succeeded)
          {
            ConstraintA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), VarInfoA_7, (MR_Integer) 0))));
            succeeded = ((MR_tag((MR_Word) VarInfoB_8)) == (MR_Integer) 2);
            if (succeeded)
            {
              ConstraintB_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), VarInfoB_8, (MR_Integer) 0))));
              succeeded = parse_tree__prog_data____Unify____prog_constraint_0_0(ConstraintA_9, ConstraintB_10);
              succeeded = !(succeeded);
            }
          }
        }
        if (!(succeeded))
        {
          MR_Word next_value_of_HeadVar__2_2 = Var_11;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
transform_hlds__inlining__do_inline_call_13_p_0(
  MR_Word ExternalTypeParams_14,
  MR_Word ArgVars_15,
  MR_Word PredInfo_16,
  MR_Word ProcInfo_17,
  MR_Word VarSet0_18,
  MR_Word * VarSet_19,
  MR_Word VarTypes0_20,
  MR_Word * VarTypes_21,
  MR_Word TypeVarSet0_22,
  MR_Word * TypeVarSet_23,
  MR_Word RttiVarMaps0_24,
  MR_Word * RttiVarMaps_25,
  MR_Word * Goal_26)
{
  {
    MR_Word CalledGoal_27;
    MR_Word CalleeTypeVarSet_28;
    MR_Word HeadVars_29;
    MR_Word CalleeVarTypes0_30;
    MR_Word CalleeVarSet_31;
    MR_Word CalleeRttiVarMaps0_32;
    MR_Word TypeRenaming_33;
    MR_Word CalleeVarTypes1_34;
    MR_Word HeadTypes_35;
    MR_Word ArgTypes_36;
    MR_Word CalleeExistQVars_37;
    MR_Word TypeSubn_38;
    MR_Word CalleeVarTypes_39;
    MR_Word VarTypes1_40;
    MR_Word Subn_43;
    MR_Word CalleeRttiVarMaps1_44;
    MR_Word Renaming0_56;
    MR_Word CalleeListOfVars_57;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_17, &CalledGoal_27);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_16, &CalleeTypeVarSet_28);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_17, &HeadVars_29);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_17, &CalleeVarTypes0_30);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_17, &CalleeVarSet_31);
    hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(ProcInfo_17, &CalleeRttiVarMaps0_32);
    parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_22, CalleeTypeVarSet_28, TypeVarSet_23, &TypeRenaming_33);
    hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(TypeRenaming_33, CalleeVarTypes0_30, &CalleeVarTypes1_34);
    hlds__vartypes__lookup_var_types_3_p_0(CalleeVarTypes1_34, HeadVars_29, &HeadTypes_35);
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes0_20, ArgVars_15, &ArgTypes_36);
    hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo_16, &CalleeExistQVars_37);
    transform_hlds__inlining__get_type_substitution_5_p_0(HeadTypes_35, ArgTypes_36, ExternalTypeParams_14, CalleeExistQVars_37, &TypeSubn_38);
    if ((CalleeExistQVars_37 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(TypeSubn_38, CalleeVarTypes1_34, &CalleeVarTypes_39);
      VarTypes1_40 = VarTypes0_20;
    }
    else
    {
      hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(TypeSubn_38, CalleeVarTypes1_34, &CalleeVarTypes_39);
      hlds__vartypes__apply_rec_subst_to_vartypes_3_p_0(TypeSubn_38, VarTypes0_20, &VarTypes1_40);
    }
    mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[1]), (MR_Word) (&transform_hlds__inlining_scalar_common_1[1]), HeadVars_29, ArgVars_15, &Renaming0_56);
    mercury__varset__vars_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CalleeVarSet_31, &CalleeListOfVars_57);
    hlds__goal_util__clone_variables_9_p_0(CalleeListOfVars_57, CalleeVarSet_31, CalleeVarTypes_39, VarSet0_18, VarSet_19, VarTypes1_40, VarTypes_21, Renaming0_56, &Subn_43);
    hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(Subn_43, CalledGoal_27, Goal_26);
    hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(TypeRenaming_33, TypeSubn_38, Subn_43, CalleeRttiVarMaps0_32, &CalleeRttiVarMaps1_44);
    hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(CalleeRttiVarMaps1_44, RttiVarMaps0_24, RttiVarMaps_25);
  }
}

void MR_CALL 
transform_hlds__inlining__get_type_substitution_5_p_0(
  MR_Word HeadTypes_6,
  MR_Word ArgTypes_7,
  MR_Word ExternalTypeParams_8,
  MR_Word CalleeExistQVars_9,
  MR_Word * TypeSubn_10)
{
  {
    MR_bool succeeded;

    if ((CalleeExistQVars_9 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word TypeSubn0_11;

      succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(HeadTypes_6, ArgTypes_7, &TypeSubn0_11);
      if (succeeded)
        *TypeSubn_10 = TypeSubn0_11;
      else
        mercury__map__init_1_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), TypeSubn_10);
    }
    else
    {
      MR_Word TypeSubn1_14;
      MR_Word TypeSubn0_17;

      mercury__map__init_1_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubn0_17);
      succeeded = parse_tree__prog_type__type_unify_list_5_p_0(HeadTypes_6, ArgTypes_7, ExternalTypeParams_8, TypeSubn0_17, &TypeSubn1_14);
      if (succeeded)
        *TypeSubn_10 = TypeSubn1_14;
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.inlining.get_type_substitution\'/5", (MR_String) "type unification failed");
          return;
        }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__should_proc_be_inlined_3_p_0(
  MR_Word Params_4,
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6)
{
  {
    MR_bool succeeded;
    MR_Word ProcInfo_8;
    MR_Word CalledGoal_9;
    MR_Word PredId_10;
    MR_Integer ProcId_11;
    MR_Word Entity_12;
    MR_Word Var_102;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word _PredInfo_7;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, PredProcId_6, &_PredInfo_7, &ProcInfo_8);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_8, &CalledGoal_9);
    PredId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 0))));
    ProcId_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_6, (MR_Integer) 1))));
    Var_112 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_4, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    Var_111 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_4, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_4, (MR_Integer) 6))));
    {
      Entity_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Entity_12, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(MR_mktag(0), Entity_12, 1) = ((MR_Box) (ProcId_11));
    }
    {
      MR_Integer SimpleThreshold_14;

      succeeded = (Var_112 == (MR_Integer) 1);
      if (succeeded)
      {
        SimpleThreshold_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_4, (MR_Integer) 4))));
        succeeded = transform_hlds__inlining__is_simple_goal_2_p_0(CalledGoal_9, SimpleThreshold_14);
      }
    }
    if (!(succeeded))
    {
      {
        MR_Integer CompoundThreshold_15;
        MR_Word Needed_17;
        MR_Integer NumUses_18;
        MR_Integer Size_19;
        MR_Integer CallCost_20;
        MR_Integer Var_23;
        MR_Integer Var_24;
        MR_Box conv0_Needed_17;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), Var_102, ((MR_Box) (Entity_12)), &conv0_Needed_17);
        if (succeeded)
        {
          Needed_17 = ((MR_Word) (conv0_Needed_17));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = (Needed_17 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            NumUses_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Needed_17, (MR_Integer) 0))));
            hlds__goal_util__goal_size_2_p_0(CalledGoal_9, &Size_19);
            CallCost_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_4, (MR_Integer) 2))));
            CompoundThreshold_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_4, (MR_Integer) 3))));
            succeeded = (CompoundThreshold_15 > (MR_Integer) 0);
            if (succeeded)
            {
              Var_24 = (MR_Integer) ((MR_Unsigned) Size_19 - (MR_Unsigned) CallCost_20);
              Var_23 = (MR_Integer) ((MR_Unsigned) Var_24 * (MR_Unsigned) NumUses_18);
              succeeded = (Var_23 <= CompoundThreshold_15);
            }
          }
        }
      }
      if (!(succeeded))
      {
        MR_Word TypeCtorInfo_100_100;
        MR_Word TypeCtorInfo_101_101;
        MR_Word NeededMap_25;
        MR_Word Needed_26;
        MR_Integer NumUses_27;
        MR_Box conv1_Needed_26;

        succeeded = (Var_111 == (MR_Integer) 1);
        if (succeeded)
        {
          NeededMap_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_4, (MR_Integer) 6))));
          TypeCtorInfo_100_100 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
          TypeCtorInfo_101_101 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_100_100, TypeCtorInfo_101_101, NeededMap_25, ((MR_Box) (Entity_12)), &conv1_Needed_26);
          if (succeeded)
          {
            Needed_26 = ((MR_Word) (conv1_Needed_26));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = (Needed_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              NumUses_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Needed_26, (MR_Integer) 0))));
              succeeded = (NumUses_27 == (MR_Integer) 1);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      succeeded = hlds__goal_util__goal_calls_2_p_0(CalledGoal_9, PredProcId_6);
      succeeded = !(succeeded);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
transform_hlds__inlining__is_simple_goal_2_p_0(
  MR_Word CalledGoal_3,
  MR_Integer SimpleThreshold_4)
{
  {
    MR_bool succeeded;
    MR_Integer Size_5;

    hlds__goal_util__goal_size_2_p_0(CalledGoal_3, &Size_5);
    succeeded = (Size_5 < SimpleThreshold_4);
    if (!(succeeded))
    {
      MR_Integer Var_6 = (MR_Integer) ((MR_Unsigned) SimpleThreshold_4 * (MR_Unsigned) 3);

      succeeded = (Size_5 < Var_6);
      if (succeeded)
        succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(CalledGoal_3);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_2)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Goal_5 = (MR_Word) ((MR_Word) (GoalExpr_2));
          MR_Word next_value_of_HeadVar__1_1 = Goal_5;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_2, (MR_Integer) 3))) & (MR_Integer) 1);

          succeeded = (Var_19 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 2))));
              MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 1))) & (MR_Integer) 1);

              succeeded = (Var_20 == (MR_Integer) 0);
              if (succeeded)
                succeeded = transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(Goals_4);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 1))));
              MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_2, (MR_Integer) 2))));
              MR_Word FGT_8;

              succeeded = ((((MR_tag((MR_Word) Reason_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_6, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_8) {
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
                succeeded = MR_TRUE;
              else
              {
                MR_Word next_value_of_HeadVar__1_1 = Goal_21;

                // direct tailcall eliminated
                ;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                continue;
              }
            }
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(Goal_2);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Goals_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_ModuleInfo_52;

    transform_hlds__inlining__inline_in_proc_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_ModuleInfo_52);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_ModuleInfo_52));
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ShouldInlineProcs_10;

    transform_hlds__inlining__mark_proc_to_be_inlined_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ShouldInlineProcs_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ShouldInlineProcs_10));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__inlining__should_proc_be_inlined_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ModuleInfo_16;

    transform_hlds__inlining__inline_in_linear_tail_rec_proc_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ModuleInfo_16);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ModuleInfo_16));
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0(
  MR_Word Params_8,
  MR_Word SCCEntryPoints_9,
  MR_Word SCCProcs_10,
  MR_Word STATE_VARIABLE_ShouldInlineProcs_0_24,
  MR_Word * STATE_VARIABLE_ShouldInlineProcs_25,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27)
{
  {
    MR_bool succeeded;
    MR_Word SCC_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCEntryPoints_9, (MR_Integer) 0))));
    MR_Word CalledFromHigherSCCs_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCEntryPoints_9, (MR_Integer) 1))));
    MR_Word Exported_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCEntryPoints_9, (MR_Integer) 2))));
    MR_Word TSCCDepInfo_16;
    MR_Word TSCCsEntries_17;
    MR_Integer LinearTailRecMaxExtra_18;
    MR_Word TypeCtorInfo_45_45;
    MR_Word TypeInfo_46_46;
    MR_Word TSCCArcs_20;
    MR_Integer NumTSCCArcs_21;
    MR_Integer NumSCCProcs_22;
    MR_Word Var_29;
    MR_Integer Var_30;

    TSCCDepInfo_16 = hlds__hlds_dependency_graph__build_proc_dependency_graph_3_f_0(STATE_VARIABLE_ModuleInfo_0_26, SCC_13, (MR_Integer) 0);
    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(STATE_VARIABLE_ModuleInfo_0_26, TSCCDepInfo_16, &TSCCsEntries_17);
    LinearTailRecMaxExtra_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Params_8, (MR_Integer) 1))));
    succeeded = (TSCCsEntries_17 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TSCCsEntries_17, (MR_Integer) 1))));
      succeeded = (Var_29 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        TypeCtorInfo_45_45 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
        TSCCArcs_20 = libs__dependency_graph__dependency_info_get_arcs_1_f_0(TypeCtorInfo_45_45, TSCCDepInfo_16);
        TypeInfo_46_46 = (MR_Word) (&transform_hlds__inlining_scalar_common_2[0]);
        mercury__list__length_2_p_0(TypeInfo_46_46, TSCCArcs_20, &NumTSCCArcs_21);
        mercury__list__length_2_p_0(TypeCtorInfo_45_45, SCCProcs_10, &NumSCCProcs_22);
        Var_30 = (MR_Integer) ((MR_Unsigned) NumSCCProcs_22 + (MR_Unsigned) LinearTailRecMaxExtra_18);
        succeeded = (NumTSCCArcs_21 <= Var_30);
      }
    }
    if (succeeded)
    {
      MR_Word EntryPoints_23;
      MR_Word Var_31;
      MR_Box conv1_STATE_VARIABLE_ModuleInfo_27;

      mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CalledFromHigherSCCs_14, Exported_15, &EntryPoints_23);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_1));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Params_8));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (STATE_VARIABLE_ShouldInlineProcs_0_24));
        MR_hl_field(MR_mktag(0), Var_31, 5) = ((MR_Box) (SCC_13));
        MR_hl_field(MR_mktag(0), Var_31, 6) = ((MR_Box) (EntryPoints_23));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_31, SCCProcs_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26)), &conv1_STATE_VARIABLE_ModuleInfo_27);
      *STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) (conv1_STATE_VARIABLE_ModuleInfo_27));
      *STATE_VARIABLE_ShouldInlineProcs_25 = STATE_VARIABLE_ShouldInlineProcs_0_24;
    }
    else
    {
      MR_Word ShouldInlineSCCProcs_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_64;
      MR_Word Var_66;
      MR_Box conv3_STATE_VARIABLE_ShouldInlineProcs_25;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_27;

      {
        Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (Params_8));
        MR_hl_field(MR_mktag(0), Var_61, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26));
      }
      mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_61, SCCProcs_10, &ShouldInlineSCCProcs_60);
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_3));
        MR_hl_field(MR_mktag(0), Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_62, 3) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__inlining_scalar_common_1[3]), Var_62, ShouldInlineSCCProcs_60, ((MR_Box) (STATE_VARIABLE_ShouldInlineProcs_0_24)), &conv3_STATE_VARIABLE_ShouldInlineProcs_25);
      *STATE_VARIABLE_ShouldInlineProcs_25 = ((MR_Word) (conv3_STATE_VARIABLE_ShouldInlineProcs_25));
      Var_66 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
      {
        Var_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_maybe_linear_tail_rec_scc_7_p_0_4));
        MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Params_8));
        MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (*STATE_VARIABLE_ShouldInlineProcs_25));
        MR_hl_field(MR_mktag(0), Var_64, 5) = ((MR_Box) (Var_66));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_64, SCCProcs_10, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_26)), &conv5_STATE_VARIABLE_ModuleInfo_27);
      *STATE_VARIABLE_ModuleInfo_27 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_27));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__inlining____Unify____inline_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____inline_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__inlining____Unify____inline_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____inline_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_should_inline_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__inlining____Unify____maybe_should_inline_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_should_inline_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____maybe_should_inline_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__inlining____Unify____maybe_tail_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____maybe_tail_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__inlining____Unify____maybe_user_req_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_user_req_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__inlining____Compare____maybe_user_req_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module transform_hlds.inlining.
