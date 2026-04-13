/*
** Automatically generated from `inlining.m'
** by the Mercury compiler,
** version rotd-2026-04-13
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
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ctree234.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.det_analysis.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_refs.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.type_util.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_unify.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.complexity.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s {
  MR_bool transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_25;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_67;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__RttiVarMaps_60;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__MultiMap_62;
  jmp_buf transform_hlds__inlining__inlining_in_call_5_p_0_env_0__commit_0;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_63;
  MR_Word transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVar_66;
  MR_Box transform_hlds__inlining__inlining_in_call_5_p_0_env_0__conv0_ArgVar_66;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_detism_0_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_detism_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_changed_detism_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_changed_detism_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_changed_detism_0[2];

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_purity_0_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_purity_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_changed_purity_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_changed_purity_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_changed_purity_0[2];

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_0_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_inlined_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_inlined_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_inlined_0[2];

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_parallel_conj_0_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_parallel_conj_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_inlined_parallel_conj_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_inlined_parallel_conj_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_inlined_parallel_conj_0[2];

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[13];

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[13];

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[13];

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0;

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0[9];

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0[9];

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0[9];

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0;

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1];

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1];

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1];

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_may_inline_purity_promised_pred_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_may_inline_purity_promised_pred_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_may_inline_purity_promised_pred_0[2];

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_involves_daio_0_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_involves_daio_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_maybe_involves_daio_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_involves_daio_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_involves_daio_0[2];

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

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_maybe_tail_rec_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_tail_rec_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_tail_rec_0[2];

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_0;

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_maybe_user_req_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_user_req_0[2];

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_user_req_0[2];

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_user_req_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0(
  MR_Word HeadVar__1_1,
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
transform_hlds__inlining____Compare____maybe_involves_daio_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_involves_daio_0_0(
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
transform_hlds__inlining____Compare____have_we_inlined_parallel_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_inlined_parallel_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_inlined_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_inlined_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_changed_purity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_changed_purity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_changed_detism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_changed_detism_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__inlining__mark_proc_to_be_inlined_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ShouldInlineProcs_0_11,
  MR_Word * STATE_VARIABLE_ShouldInlineProcs_12);

static void MR_CALL 
transform_hlds__inlining__inline_in_sccs_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__inlining__inline_in_sccs_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining__inline_in_sccs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__inlining__inline_in_sccs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6);

static void MR_CALL 
transform_hlds__inlining__inline_in_proc_if_allowed_6_p_0(
  MR_Word Params_7,
  MR_Word ShouldInlineProcs_8,
  MR_Word ShouldInlineTailProcs_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18);

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
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57);

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

static MR_Box MR_CALL 
transform_hlds__inlining__do_inline_call_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__inlining__should_proc_be_inlined_3_p_0(
  MR_Word Params_4,
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6);

static void MR_CALL 
transform_hlds__inlining__origin_involves_daio_2_p_0(
  MR_Word Origin_3,
  MR_Word * InvolvesDAIO_4);

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_changed_detism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_changed_detism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_changed_purity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_changed_purity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_inlined_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_inlined_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_inlined_parallel_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_inlined_parallel_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
transform_hlds__inlining____Unify____maybe_involves_daio_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_involves_daio_0_0_10001(
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


static /* final */ const MR_Box transform_hlds__inlining_scalar_common_1[5][2];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_2[1][3];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_3[2][6];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_4[1][8];

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_5[1][9];




static /* final */ const MR_Box transform_hlds__inlining_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__inlining_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0)),
    ((MR_Box) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0))
  },
};

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_3[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_type__parse_tree__prog_type__type_ctor_info_is_dummy_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box transform_hlds__inlining_scalar_common_5[1][9] = {
  /* row   0 */
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
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__inlining__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_detism_0_0 = {
  (MR_String) "have_not_changed_detism",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_detism_0_1 = {
  (MR_String) "may_have_changed_detism",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_changed_detism_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_detism_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_detism_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_changed_detism_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_detism_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_detism_0_1
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_changed_detism_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_changed_detism_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____have_we_changed_detism_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____have_we_changed_detism_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "have_we_changed_detism",
  { transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_changed_detism_0 },
  { transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_changed_detism_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_changed_detism_0,

};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_purity_0_0 = {
  (MR_String) "have_not_changed_purity",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_purity_0_1 = {
  (MR_String) "have_changed_purity",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_changed_purity_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_purity_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_purity_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_changed_purity_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_purity_0_1,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_changed_purity_0_0
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_changed_purity_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_changed_purity_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____have_we_changed_purity_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____have_we_changed_purity_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "have_we_changed_purity",
  { transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_changed_purity_0 },
  { transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_changed_purity_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_changed_purity_0,

};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_0_0 = {
  (MR_String) "we_have_not_inlined",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_0_1 = {
  (MR_String) "we_have_inlined",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_inlined_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_inlined_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_0_1,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_0_0
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_inlined_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_inlined_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____have_we_inlined_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____have_we_inlined_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "have_we_inlined",
  { transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_inlined_0 },
  { transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_inlined_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_inlined_0,

};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_parallel_conj_0_0 = {
  (MR_String) "we_have_not_inlined_parallel_conj",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_parallel_conj_0_1 = {
  (MR_String) "we_have_inlined_parallel_conj",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_inlined_parallel_conj_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_parallel_conj_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_parallel_conj_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_inlined_parallel_conj_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_parallel_conj_0_1,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_have_we_inlined_parallel_conj_0_0
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_inlined_parallel_conj_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_inlined_parallel_conj_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____have_we_inlined_parallel_conj_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____have_we_inlined_parallel_conj_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "have_we_inlined_parallel_conj",
  { transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_have_we_inlined_parallel_conj_0 },
  { transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_have_we_inlined_parallel_conj_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_have_we_inlined_parallel_conj_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__inlining__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_info_0_0[13] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_varmaps_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_inlined_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_inlined_parallel_conj_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_changed_detism_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_changed_purity_0)
};

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_info_0_0[13] = {
  (MR_String) "i_module_info",
  (MR_String) "i_var_threshold",
  (MR_String) "i_highlevel_code",
  (MR_String) "i_univ_caller_tvars",
  (MR_String) "i_should_inline_tail_calls",
  (MR_String) "i_should_inline_procs",
  (MR_String) "i_tvarset",
  (MR_String) "i_var_table",
  (MR_String) "i_rtti_varmaps",
  (MR_String) "i_done_any_inlining",
  (MR_String) "i_inlined_parallel",
  (MR_String) "i_changed_detism",
  (MR_String) "i_changed_purity"
};

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_info_0_0[13] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
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
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0 = {
  (MR_String) "inline_info",
  INT16_C(13),
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

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0[1] = { &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0 };

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0[1] = { &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_info_0_0 };

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____inline_info_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____inline_info_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "inline_info",
  { transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_info_0 },
  { transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_info_0,

};

static const MR_FA_TypeInfo_Struct2 transform_hlds__inlining__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0),
    (MR_TypeInfo) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__inlining__transform_hlds__inlining__field_types_inline_params_0_0[9] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_text_output_stream_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_inline_simple_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_inline_single_use_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__inlining__tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0)
};

static const MR_ConstString transform_hlds__inlining__transform_hlds__inlining__field_names_inline_params_0_0[9] = {
  (MR_String) "ip_progress_stream",
  (MR_String) "ip_simple",
  (MR_String) "ip_single_use",
  (MR_String) "ip_highlevel_code",
  (MR_String) "ip_call_cost",
  (MR_String) "ip_compound_size_threshold",
  (MR_String) "ip_simple_goal_threshold",
  (MR_String) "ip_var_threshold",
  (MR_String) "ip_needed_map"
};

static const MR_DuArgLocn transform_hlds__inlining__transform_hlds__inlining__field_locns_inline_params_0_0[9] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
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
  }
};

static const MR_DuFunctorDesc transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0 = {
  (MR_String) "inline_params",
  INT16_C(9),
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

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0[1] = { &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0 };

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_inline_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0[1] = { &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_inline_params_0_0 };

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____inline_params_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____inline_params_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "inline_params",
  { transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_inline_params_0 },
  { transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_inline_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_inline_params_0,

};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_0 = {
  (MR_String) "may_not_inline_purity_promised_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_may_inline_purity_promised_pred_0_1 = {
  (MR_String) "may_inline_purity_promised_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_may_inline_purity_promised_pred_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "may_inline_purity_promised_pred",
  { transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_may_inline_purity_promised_pred_0 },
  { transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_may_inline_purity_promised_pred_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_may_inline_purity_promised_pred_0,

};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_involves_daio_0_0 = {
  (MR_String) "does_not_involve_daio",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_involves_daio_0_1 = {
  (MR_String) "does_involve_daio",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_maybe_involves_daio_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_involves_daio_0_0,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_involves_daio_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_involves_daio_0[2] = {
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_involves_daio_0_1,
  &transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_involves_daio_0_0
};

static const MR_Integer transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_involves_daio_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_involves_daio_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____maybe_involves_daio_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____maybe_involves_daio_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "maybe_involves_daio",
  { transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_involves_daio_0 },
  { transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_maybe_involves_daio_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_involves_daio_0,

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

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_0[1] = { &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_1[1] = { &transform_hlds__inlining__transform_hlds__inlining__du_functor_desc_maybe_should_inline_0_1 };

static const MR_DuPtagLayout transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_maybe_should_inline_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__inlining__transform_hlds__inlining__du_stag_ordered_maybe_should_inline_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__inlining____Unify____maybe_should_inline_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____maybe_should_inline_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "maybe_should_inline",
  { transform_hlds__inlining__transform_hlds__inlining__du_name_ordered_maybe_should_inline_0 },
  { transform_hlds__inlining__transform_hlds__inlining__du_ptag_ordered_maybe_should_inline_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_should_inline_0,

};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_0 = {
  (MR_String) "not_tail_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_tail_rec_0_1 = {
  (MR_String) "tail_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_maybe_tail_rec_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____maybe_tail_rec_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____maybe_tail_rec_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "maybe_tail_rec",
  { transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_tail_rec_0 },
  { transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_maybe_tail_rec_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_tail_rec_0,

};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_0 = {
  (MR_String) "not_user_req",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__inlining__transform_hlds__inlining__enum_functor_desc_maybe_user_req_0_1 = {
  (MR_String) "user_req",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_maybe_user_req_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__inlining____Unify____maybe_user_req_0_0_10001)),
  ((MR_Box) (transform_hlds__inlining____Compare____maybe_user_req_0_0_10001)),
  (MR_String) "transform_hlds.inlining",
  (MR_String) "maybe_user_req",
  { transform_hlds__inlining__transform_hlds__inlining__enum_name_ordered_maybe_user_req_0 },
  { transform_hlds__inlining__transform_hlds__inlining__enum_ordinal_ordered_maybe_user_req_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__inlining__transform_hlds__inlining__functor_number_map_maybe_user_req_0,

};

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_user_req_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_should_inline_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 > Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_should_inline_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
      ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_involves_daio_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_involves_daio_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Integer ArgX5_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgY5_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Integer ArgX6_19 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgY6_20 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Integer ArgX7_22 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgY7_23 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Integer ArgX8_25 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Integer ArgY8_26 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word SubResult1_6;

    mercury__io____Compare____text_output_stream_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_41 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_42 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_41 < Var_42);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_41 > Var_42);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_43 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_44 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_43 < Var_44);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_43 > Var_44);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_45 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_46 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_45 < Var_46);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_45 > Var_46);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
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
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX9_28)), ((MR_Box) (ArgY9_29)));
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
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_24_24;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Integer ArgX5_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Integer ArgY5_12 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Integer ArgX6_13 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Integer ArgY6_14 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Integer ArgX7_15 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Integer ArgY7_16 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Integer ArgX8_17 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Integer ArgY8_18 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));

    succeeded = mercury__io____Unify____text_output_stream_0_0(ArgX1_3, ArgY1_4);
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
                    TypeInfo_24_24 = (MR_Word) (&transform_hlds__inlining_scalar_common_2[0]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
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

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_42 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_43 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_42 == CastY_43);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Word ArgX10_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY10_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX11_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY11_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX12_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY12_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX13_40 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) & (MR_Integer) 1);
    MR_Word ArgY13_41 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_57 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_58 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_57 < Var_58);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_57 > Var_58);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[3]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[1]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[1]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[4]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  parse_tree__var_table____Compare____var_table_0_0(&SubResult8_27, ArgX8_25, ArgY8_26);
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    hlds__hlds_rtti____Compare____rtti_varmaps_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;
                      MR_Integer Var_59 = (MR_Integer) (ArgX10_31);
                      MR_Integer Var_60 = (MR_Integer) (ArgY10_32);

                      succeeded = (Var_59 < Var_60);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_59 > Var_60);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;
                        MR_Integer Var_61 = (MR_Integer) (ArgX11_34);
                        MR_Integer Var_62 = (MR_Integer) (ArgY11_35);

                        succeeded = (Var_61 < Var_62);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (Var_61 > Var_62);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;
                          MR_Integer Var_63 = (MR_Integer) (ArgX12_37);
                          MR_Integer Var_64 = (MR_Integer) (ArgY12_38);

                          succeeded = (Var_63 < Var_64);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (Var_63 > Var_64);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Integer Var_65 = (MR_Integer) (ArgX13_40);
                            MR_Integer Var_66 = (MR_Integer) (ArgY13_41);

                            succeeded = (Var_65 < Var_66);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_65 > Var_66);
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_32_32;
    MR_Word TypeInfo_33_33;
    MR_Word TypeInfo_34_34;
    MR_Word TypeInfo_35_35;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Word ArgX10_21 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY10_22 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX11_23 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY11_24 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX12_25 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY12_26 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX13_27 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))) & (MR_Integer) 1);
    MR_Word ArgY13_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          TypeInfo_32_32 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_33_33 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_33_33, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_34_34 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[1]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_34_34, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_35_35 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_35_35, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX8_17, ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = hlds__hlds_rtti____Unify____rtti_varmaps_0_0(ArgX9_19, ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                            succeeded = (ArgX13_27 == ArgY13_28);
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

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_inlined_parallel_conj_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_inlined_parallel_conj_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_inlined_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_inlined_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_changed_purity_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_changed_purity_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_changed_detism_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_changed_detism_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining__mark_proc_to_be_inlined_5_p_0(
  MR_Word ProgressStream_6,
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ShouldInlineProcs_0_11,
  MR_Word * STATE_VARIABLE_ShouldInlineProcs_12)
{
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_8)), STATE_VARIABLE_ShouldInlineProcs_0_11, STATE_VARIABLE_ShouldInlineProcs_12);
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_6, ModuleInfo_7, (MR_String) "Inlining", PredProcId_8);
}

MR_bool MR_CALL 
transform_hlds__inlining__can_inline_proc_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word BuiltinState_9,
  MR_Word MayInlinePromisedPure_10)
{
  MR_bool succeeded;
  MR_Word Globals_11;
  MR_Word HighLevelCode_12;
  MR_Word PredInfo_14;
  MR_Word ProcInfo_15;
  MR_Word MaybeComplexityProcMap_16;
  MR_Word CalledGoal_20;
  MR_Word CalledGoalExpr_21;
  MR_Word Var_36;
  MR_Word Var_40;
  MR_Integer Var_39;
  MR_Word ForeignAttributes_23;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_11);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 55, &HighLevelCode_12);
  succeeded = (BuiltinState_9 == (MR_Integer) 1);
  if (succeeded)
  {
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_6, PredId_7, ProcId_8, &PredInfo_14, &ProcInfo_15);
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_14);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_14);
      if (succeeded)
      {
        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_39);
        succeeded = (ProcId_8 == Var_39);
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_36 = (MR_Word) ((MR_Unsigned) 0U);
        hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_15, &Var_40);
        succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(Var_36, Var_40);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(PredInfo_14);
          succeeded = !(succeeded);
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(ModuleInfo_6, &MaybeComplexityProcMap_16);
            if ((MaybeComplexityProcMap_16 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word ComplexityProcMap_18;
              MR_Word IsInComplexityMap_19;
              MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, MaybeComplexityProcMap_16, 0))));

              ComplexityProcMap_18 = ((MR_Word) ((MR_hl_field(0, Var_37, 1))));
              IsInComplexityMap_19 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(ComplexityProcMap_18, ModuleInfo_6, PredId_7, ProcId_8);
              succeeded = (IsInComplexityMap_19 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_15, &CalledGoal_20);
              CalledGoalExpr_21 = ((MR_Word) ((MR_hl_field(0, CalledGoal_20, 0))));
              succeeded = ((((MR_tag((MR_Word) CalledGoalExpr_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CalledGoalExpr_21, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ForeignAttributes_23 = ((MR_Word) ((MR_hl_field(3, CalledGoalExpr_21, 1))));
                {
                  MR_Word Globals_30;
                  MR_Word Target_31;
                  MR_Word ForeignLanguage_32;
                  MR_Word MaybeMayDuplicate_33;
                  MR_Word Detism_34;

                  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_30);
                  libs__globals__get_target_2_p_0(Globals_30, &Target_31);
                  ForeignLanguage_32 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(ForeignAttributes_23);
                  switch (ForeignLanguage_32) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      succeeded = (Target_31 == (MR_Integer) 0);
                      break;
                    case (MR_Integer) 1:
                      succeeded = (Target_31 == (MR_Integer) 1);
                      break;
                    case (MR_Integer) 2:
                      succeeded = (Target_31 == (MR_Integer) 2);
                      break;
                  }
                  succeeded = !(succeeded);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    MaybeMayDuplicate_33 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(ForeignAttributes_23);
                    if ((MaybeMayDuplicate_33 == (MR_Word) ((MR_Unsigned) 0U)))
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_33, 0))));

                      succeeded = (Var_38 == (MR_Integer) 0);
                    }
                    succeeded = !(succeeded);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      succeeded = (HighLevelCode_12 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_15, &Detism_34);
                        switch (Detism_34) {
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
                      MR_Word MaybePromisedPurity_35;

                      hlds__hlds_pred__pred_info_get_promised_purity_2_p_0(PredInfo_14, &MaybePromisedPurity_35);
                      succeeded = (MaybePromisedPurity_35 == (MR_Word) ((MR_Unsigned) 0U));
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

void MR_CALL 
transform_hlds__inlining__rename_goal_8_p_0(
  MR_Word HeadVars_9,
  MR_Word ArgVars_10,
  MR_Word VarTable0_11,
  MR_Word CalleeVarTable_12,
  MR_Word * VarTable_13,
  MR_Word * Renaming_14,
  MR_Word CalledGoal_15,
  MR_Word * Goal_16)
{
  MR_Word Renaming0_17;
  MR_Word CalleeListOfVars_18;

  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[0]), (MR_Word) (&transform_hlds__inlining_scalar_common_1[0]), HeadVars_9, ArgVars_10, &Renaming0_17);
  parse_tree__var_table__var_table_vars_2_p_0(CalleeVarTable_12, &CalleeListOfVars_18);
  hlds__goal_util__clone_variables_6_p_0(CalleeListOfVars_18, CalleeVarTable_12, VarTable0_11, VarTable_13, Renaming0_17, Renaming_14);
  hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(*Renaming_14, CalledGoal_15, Goal_16);
}

MR_bool MR_CALL 
transform_hlds__inlining__is_simple_goal_2_p_0(
  MR_Word CalledGoal_3,
  MR_Integer SimpleThreshold_4)
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

MR_bool MR_CALL 
transform_hlds__inlining__is_simple_clause_list_2_p_0(
  MR_Word Clauses_3,
  MR_Integer SimpleThreshold_4)
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
      Clause_6 = ((MR_Word) ((MR_hl_field(1, Clauses_3, 0))));
      Var_8 = ((MR_Word) ((MR_hl_field(1, Clauses_3, 1))));
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

void MR_CALL 
transform_hlds__inlining__inline_in_module_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  MR_bool succeeded;
  MR_Word Globals_6;
  MR_Word OptTuple_7;
  MR_Word Simple_8;
  MR_Word SingleUse_9;
  MR_Integer CallCost_10;
  MR_Integer CompoundThreshold_11;
  MR_Integer SimpleThreshold_12;
  MR_Integer VarThreshold_13;
  MR_Word HighLevelCode_14;
  MR_Word NeededMap_15;
  MR_Word Params_16;
  MR_Word DepInfo_17;
  MR_Word BottomUpSCCsEntryPoints_18;
  MR_Word ShouldInlineProcs0_19;
  MR_Word STATE_VARIABLE_ModuleInfo_1_24;
  MR_Word STATE_VARIABLE_ModuleInfo_2_25;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &Globals_6);
  libs__globals__get_opt_tuple_2_p_0(Globals_6, &OptTuple_7);
  Simple_8 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_7, 0))) >> 30)) & (MR_Integer) 1);
  SingleUse_9 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_7, 0))) >> 28)) & (MR_Integer) 1);
  CallCost_10 = ((MR_Integer) ((MR_hl_field(0, OptTuple_7, 3))));
  CompoundThreshold_11 = ((MR_Integer) ((MR_hl_field(0, OptTuple_7, 4))));
  SimpleThreshold_12 = ((MR_Integer) ((MR_hl_field(0, OptTuple_7, 5))));
  VarThreshold_13 = ((MR_Integer) ((MR_hl_field(0, OptTuple_7, 6))));
  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 55, &HighLevelCode_14);
  succeeded = (SingleUse_9 == (MR_Integer) 0);
  if (!(succeeded))
    succeeded = (CompoundThreshold_11 > (MR_Integer) 0);
  if (succeeded)
    transform_hlds__dead_proc_elim__dead_proc_analyze_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &NeededMap_15);
  else
    mercury__map__init_1_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), &NeededMap_15);
  {
    Params_16 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_16, 0) = ((MR_Box) (ProgressStream_4));
    MR_hl_field(0, Params_16, 1) = (MR_Box) (((((MR_Unsigned) (Simple_8) << 2)) | (((((MR_Unsigned) (SingleUse_9) << 1)) | (MR_Unsigned) (HighLevelCode_14)))));
    MR_hl_field(0, Params_16, 2) = ((MR_Box) (CallCost_10));
    MR_hl_field(0, Params_16, 3) = ((MR_Box) (CompoundThreshold_11));
    MR_hl_field(0, Params_16, 4) = ((MR_Box) (SimpleThreshold_12));
    MR_hl_field(0, Params_16, 5) = ((MR_Box) (VarThreshold_13));
    MR_hl_field(0, Params_16, 6) = ((MR_Box) (NeededMap_15));
  }
  hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_1_24, &DepInfo_17);
  hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(STATE_VARIABLE_ModuleInfo_1_24, DepInfo_17, &BottomUpSCCsEntryPoints_18);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &ShouldInlineProcs0_19);
  transform_hlds__inlining__inline_in_sccs_6_p_0(ProgressStream_4, Params_16, BottomUpSCCsEntryPoints_18, ShouldInlineProcs0_19, STATE_VARIABLE_ModuleInfo_1_24, &STATE_VARIABLE_ModuleInfo_2_25);
  hlds__hlds_module__module_info_clobber_dependency_info_2_p_0(STATE_VARIABLE_ModuleInfo_2_25, STATE_VARIABLE_ModuleInfo_21);
}

static void MR_CALL 
transform_hlds__inlining__inline_in_sccs_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_18;

  transform_hlds__inlining__inline_in_proc_if_allowed_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_18));
}

static void MR_CALL 
transform_hlds__inlining__inline_in_sccs_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ShouldInlineProcs_12;

  transform_hlds__inlining__mark_proc_to_be_inlined_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ShouldInlineProcs_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ShouldInlineProcs_12));
}

static MR_bool MR_CALL 
transform_hlds__inlining__inline_in_sccs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__inlining__should_proc_be_inlined_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining__inline_in_sccs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_5,
  MR_Word * STATE_VARIABLE_ModuleInfo_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ModuleInfo_6 = STATE_VARIABLE_ModuleInfo_0_5;
    else
    {
      MR_Word SCCEntryPoints_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word SCCsEntryPoints_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
      MR_Word STATE_VARIABLE_ShouldInlineProcs_1_22;
      MR_Word STATE_VARIABLE_ModuleInfo_1_23;
      MR_Word SCC_24 = ((MR_Word) ((MR_hl_field(0, SCCEntryPoints_15, 0))));
      MR_Word SCCProcs_27;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_5;

      SCCProcs_27 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_24);
      if ((SCCProcs_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.inlining.inline_in_scc\'/7", (MR_String) "empty SCC");
          return;
        }
      else
      {
        MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, SCCProcs_27, 1))));
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, SCCProcs_27, 0))));

        if ((Var_38 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_35;

          Var_35 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
          transform_hlds__inlining__inline_in_proc_if_allowed_6_p_0(HeadVar__2_2, HeadVar__4_4, Var_35, Var_39, STATE_VARIABLE_ModuleInfo_0_5, &STATE_VARIABLE_ModuleInfo_1_23);
          succeeded = transform_hlds__inlining__should_proc_be_inlined_3_p_0(HeadVar__2_2, STATE_VARIABLE_ModuleInfo_1_23, Var_39);
          if (succeeded)
          {
            mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_39)), HeadVar__4_4, &STATE_VARIABLE_ShouldInlineProcs_1_22);
            hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(HeadVar__1_1, STATE_VARIABLE_ModuleInfo_1_23, (MR_String) "Inlining", Var_39);
          }
          else
            STATE_VARIABLE_ShouldInlineProcs_1_22 = HeadVar__4_4;
        }
        else
        {
          MR_Word ShouldInlineSCCProcs_44;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Box conv1_STATE_VARIABLE_ShouldInlineProcs_1_22;
          MR_Box conv3_STATE_VARIABLE_ModuleInfo_1_23;

          {
            Var_45 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_45, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_3[1]));
            MR_hl_field(0, Var_45, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_sccs_6_p_0_1));
            MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_45, 3) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(0, Var_45, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5));
          }
          mercury__list__filter_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_45, SCCProcs_27, &ShouldInlineSCCProcs_44);
          {
            Var_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_46, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_4[0]));
            MR_hl_field(0, Var_46, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_sccs_6_p_0_2));
            MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Var_46, 3) = ((MR_Box) (HeadVar__1_1));
            MR_hl_field(0, Var_46, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__inlining_scalar_common_1[1]), Var_46, ShouldInlineSCCProcs_44, ((MR_Box) (HeadVar__4_4)), &conv1_STATE_VARIABLE_ShouldInlineProcs_1_22);
          STATE_VARIABLE_ShouldInlineProcs_1_22 = ((MR_Word) (conv1_STATE_VARIABLE_ShouldInlineProcs_1_22));
          Var_48 = mercury__set__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
          {
            Var_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_47, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_5[0]));
            MR_hl_field(0, Var_47, 1) = ((MR_Box) (transform_hlds__inlining__inline_in_sccs_6_p_0_3));
            MR_hl_field(0, Var_47, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_47, 3) = ((MR_Box) (HeadVar__2_2));
            MR_hl_field(0, Var_47, 4) = ((MR_Box) (STATE_VARIABLE_ShouldInlineProcs_1_22));
            MR_hl_field(0, Var_47, 5) = ((MR_Box) (Var_48));
          }
          mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), Var_47, SCCProcs_27, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_5)), &conv3_STATE_VARIABLE_ModuleInfo_1_23);
          STATE_VARIABLE_ModuleInfo_1_23 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_1_23));
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = SCCsEntryPoints_16;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_ShouldInlineProcs_1_22;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_5 = STATE_VARIABLE_ModuleInfo_1_23;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_ModuleInfo_0_5 = next_value_of_STATE_VARIABLE_ModuleInfo_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__inlining__inline_in_proc_if_allowed_6_p_0(
  MR_Word Params_7,
  MR_Word ShouldInlineProcs_8,
  MR_Word ShouldInlineTailProcs_9,
  MR_Word PredProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18)
{
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, PredProcId_10, 0))));
  MR_Word PredInfo_14;
  MR_Word Origin_15;
  MR_Word InvolvesDAIO_16;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_17, PredId_12, &PredInfo_14);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_14, &Origin_15);
  transform_hlds__inlining__origin_involves_daio_2_p_0(Origin_15, &InvolvesDAIO_16);
  switch (InvolvesDAIO_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_0_17;
      break;
    case (MR_Integer) 0:
      {
        MR_Integer VarThresh_19 = ((MR_Integer) ((MR_hl_field(0, Params_7, 5))));
        MR_Word HighLevelCode_20 = ((MR_Unsigned) ((MR_hl_field(0, Params_7, 1))) & (MR_Integer) 1);
        MR_Word PredId_21 = ((MR_Word) ((MR_hl_field(0, PredProcId_10, 0))));
        MR_Integer ProcId_22 = ((MR_Integer) ((MR_hl_field(0, PredProcId_10, 1))));
        MR_Word UnivQTVars_23;
        MR_Word TypeVarSet0_24;
        MR_Word Goal0_25;
        MR_Word VarTypes0_26;
        MR_Word RttiVarMaps0_27;
        MR_Word InlineInfo0_28;
        MR_Word Goal_29;
        MR_Word InlineInfo_30;
        MR_Word TypeVarSet_37;
        MR_Word VarTypes_38;
        MR_Word RttiVarMaps_39;
        MR_Word DidInlining_40;
        MR_Word InlinedParallel_41;
        MR_Word DetChanged_42;
        MR_Word PurityChanged_43;
        MR_Word STATE_VARIABLE_PredInfo_1_45;
        MR_Word STATE_VARIABLE_ProcInfo_1_46;
        MR_Word STATE_VARIABLE_PredInfo_2_51;
        MR_Word STATE_VARIABLE_ProcInfo_2_52;
        MR_Word STATE_VARIABLE_ProcInfo_3_53;
        MR_Word STATE_VARIABLE_ProcInfo_4_54;
        MR_Word STATE_VARIABLE_ProcInfo_5_56;
        MR_Word STATE_VARIABLE_ProcInfo_7_60;
        MR_Word STATE_VARIABLE_ModuleInfo_1_61;
        MR_Word STATE_VARIABLE_PredInfo_3_62;
        MR_Word STATE_VARIABLE_PredInfo_4_63;
        MR_Word STATE_VARIABLE_ModuleInfo_2_64;

        hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_17, PredId_21, &STATE_VARIABLE_PredInfo_1_45);
        hlds__hlds_pred__pred_info_proc_info_3_p_0(STATE_VARIABLE_PredInfo_1_45, ProcId_22, &STATE_VARIABLE_ProcInfo_1_46);
        hlds__hlds_pred__pred_info_get_univ_quant_tvars_2_p_0(STATE_VARIABLE_PredInfo_1_45, &UnivQTVars_23);
        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(STATE_VARIABLE_PredInfo_1_45, &TypeVarSet0_24);
        hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_1_46, &Goal0_25);
        hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_1_46, &VarTypes0_26);
        hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(STATE_VARIABLE_ProcInfo_1_46, &RttiVarMaps0_27);
        {
          InlineInfo0_28 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, InlineInfo0_28, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_17));
          MR_hl_field(0, InlineInfo0_28, 1) = ((MR_Box) (VarThresh_19));
          MR_hl_field(0, InlineInfo0_28, 2) = (MR_Box) ((MR_Unsigned) (HighLevelCode_20));
          MR_hl_field(0, InlineInfo0_28, 3) = ((MR_Box) (UnivQTVars_23));
          MR_hl_field(0, InlineInfo0_28, 4) = ((MR_Box) (ShouldInlineTailProcs_9));
          MR_hl_field(0, InlineInfo0_28, 5) = ((MR_Box) (ShouldInlineProcs_8));
          MR_hl_field(0, InlineInfo0_28, 6) = ((MR_Box) (TypeVarSet0_24));
          MR_hl_field(0, InlineInfo0_28, 7) = ((MR_Box) (VarTypes0_26));
          MR_hl_field(0, InlineInfo0_28, 8) = ((MR_Box) (RttiVarMaps0_27));
          MR_hl_field(0, InlineInfo0_28, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 3)) | (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))))));
        }
        transform_hlds__inlining__inlining_in_goal_4_p_0(Goal0_25, &Goal_29, InlineInfo0_28, &InlineInfo_30);
        TypeVarSet_37 = ((MR_Word) ((MR_hl_field(0, InlineInfo_30, 6))));
        VarTypes_38 = ((MR_Word) ((MR_hl_field(0, InlineInfo_30, 7))));
        RttiVarMaps_39 = ((MR_Word) ((MR_hl_field(0, InlineInfo_30, 8))));
        DidInlining_40 = ((((MR_Unsigned) ((MR_hl_field(0, InlineInfo_30, 9))) >> 3)) & (MR_Integer) 1);
        InlinedParallel_41 = ((((MR_Unsigned) ((MR_hl_field(0, InlineInfo_30, 9))) >> 2)) & (MR_Integer) 1);
        DetChanged_42 = ((((MR_Unsigned) ((MR_hl_field(0, InlineInfo_30, 9))) >> 1)) & (MR_Integer) 1);
        PurityChanged_43 = ((MR_Unsigned) ((MR_hl_field(0, InlineInfo_30, 9))) & (MR_Integer) 1);
        hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVarSet_37, STATE_VARIABLE_PredInfo_1_45, &STATE_VARIABLE_PredInfo_2_51);
        hlds__hlds_pred__proc_info_set_var_table_3_p_0(VarTypes_38, STATE_VARIABLE_ProcInfo_1_46, &STATE_VARIABLE_ProcInfo_2_52);
        hlds__hlds_pred__proc_info_set_rtti_varmaps_3_p_0(RttiVarMaps_39, STATE_VARIABLE_ProcInfo_2_52, &STATE_VARIABLE_ProcInfo_3_53);
        hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_29, STATE_VARIABLE_ProcInfo_3_53, &STATE_VARIABLE_ProcInfo_4_54);
        switch (InlinedParallel_41) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            hlds__hlds_pred__proc_info_set_has_parallel_conj_3_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_4_54, &STATE_VARIABLE_ProcInfo_5_56);
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_ProcInfo_5_56 = STATE_VARIABLE_ProcInfo_4_54;
            break;
        }
        switch (DidInlining_40) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_ProcInfo_6_58;

              hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_5_56, &STATE_VARIABLE_ProcInfo_6_58);
              check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 0, STATE_VARIABLE_ProcInfo_6_58, &STATE_VARIABLE_ProcInfo_7_60, STATE_VARIABLE_ModuleInfo_0_17, &STATE_VARIABLE_ModuleInfo_1_61);
            }
            break;
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_ModuleInfo_1_61 = STATE_VARIABLE_ModuleInfo_0_17;
              STATE_VARIABLE_ProcInfo_7_60 = STATE_VARIABLE_ProcInfo_5_56;
            }
            break;
        }
        hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_22, STATE_VARIABLE_ProcInfo_7_60, STATE_VARIABLE_PredInfo_2_51, &STATE_VARIABLE_PredInfo_3_62);
        switch (PurityChanged_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_1_61, PredProcId_10, STATE_VARIABLE_PredInfo_3_62, &STATE_VARIABLE_PredInfo_4_63);
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_PredInfo_4_63 = STATE_VARIABLE_PredInfo_3_62;
            break;
        }
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_21, STATE_VARIABLE_PredInfo_4_63, STATE_VARIABLE_ModuleInfo_1_61, &STATE_VARIABLE_ModuleInfo_2_64);
        switch (DetChanged_42) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_2_64;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ProgressStream_44 = ((MR_Word) ((MR_hl_field(0, Params_7, 0))));

              check_hlds__det_analysis__det_infer_proc_ignore_msgs_5_p_0(ProgressStream_44, PredId_21, ProcId_22, STATE_VARIABLE_ModuleInfo_2_64, STATE_VARIABLE_ModuleInfo_18);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVar_66 = ((MR_Word) ((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__conv0_ArgVar_66));
  transform_hlds__inlining__inlining_in_call_5_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_64;
    MR_Word Var_65;

    mercury__multi_map__lookup_3_p_0((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_67, (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_67, (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__MultiMap_62, ((MR_Box) ((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVar_66)), &(env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_63);
    (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = ((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_63 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = transform_hlds__inlining__tci_vars_different_constraints_2_p_0((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__RttiVarMaps_60, (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__HeadVarsForArgVar_63);
      if ((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
        transform_hlds__inlining__inlining_in_call_5_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s * env_ptr = (struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_67, &(env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__conv0_ArgVar_66, (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_25, transform_hlds__inlining__inlining_in_call_5_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__inlining__inlining_in_call_5_p_0(
  MR_Word GoalExpr0_6,
  MR_Word GoalInfo0_7,
  MR_Word * Goal_8,
  MR_Word STATE_VARIABLE_Info_0_56,
  MR_Word * STATE_VARIABLE_Info_57)
{
  struct transform_hlds__inlining__inlining_in_call_5_p_0_env_0_s env;

  {
    MR_Word ModuleInfo_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 0))));
    MR_Integer VarThresh_11 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 1))));
    MR_Word HighLevelCode_12 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 2))) & (MR_Integer) 1);
    MR_Word ExternalTypeParams_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 3))));
    MR_Word ShouldInlineTailProcs_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 4))));
    MR_Word ShouldInlineProcs_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 5))));
    MR_Word TypeVarSet0_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 6))));
    MR_Word VarTable0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 7))));
    MR_Word RttiVarMaps0_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 8))));
    MR_Word InlinedParallel0_20 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 9))) >> 2)) & (MR_Integer) 1);
    MR_Word DetChanged0_21 = ((((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 9))) >> 1)) & (MR_Integer) 1);
    MR_Word PurityChanged0_22 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 9))) & (MR_Integer) 1);
    MR_Word CalleePredId_23 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 0))));
    MR_Integer CalleeProcId_24 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_6, 1))));
    MR_Word CalleePredInfo_29;
    MR_Word CalleeProcInfo_30;
    MR_Word ShouldInline_31;
    MR_Word _DidInlining0_19;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_56, 2)));
    MR_Word _Builtin_26;
    MR_Word _UnifyContext_27;
    MR_Word _SymName_28;
    MR_Word TailRec_32;
    MR_Word UserReq_33;
    MR_Unsigned packed_word_1;
    MR_Word HeadVars_61;

    (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_25 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 2))));
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_10, CalleePredId_23, CalleeProcId_24, &CalleePredInfo_29, &CalleeProcInfo_30);
    transform_hlds__inlining__should_inline_at_call_site_4_p_0(STATE_VARIABLE_Info_0_56, GoalExpr0_6, GoalInfo0_7, &ShouldInline_31);
    (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (ShouldInline_31 != (MR_Word) ((MR_Unsigned) 0U));
    if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
    {
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(1, ShouldInline_31, 0)));
      TailRec_32 = ((((MR_Unsigned) ((MR_hl_field(1, ShouldInline_31, 0))) >> 1)) & (MR_Integer) 1);
      UserReq_33 = ((MR_Unsigned) ((MR_hl_field(1, ShouldInline_31, 0))) & (MR_Integer) 1);
      switch (UserReq_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer NumVarsInVarTable_34;
            MR_Word CalleeVarTable_35;
            MR_Integer NumVarsInCallee_36;
            MR_Integer TotalNumVars_37;

            parse_tree__var_table__var_table_count_2_p_0(VarTable0_17, &NumVarsInVarTable_34);
            hlds__hlds_pred__proc_info_get_var_table_2_p_0(CalleeProcInfo_30, &CalleeVarTable_35);
            parse_tree__var_table__var_table_count_2_p_0(CalleeVarTable_35, &NumVarsInCallee_36);
            TotalNumVars_37 = (MR_Integer) ((MR_Unsigned) NumVarsInVarTable_34 + (MR_Unsigned) NumVarsInCallee_36);
            (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (TotalNumVars_37 <= VarThresh_11);
          }
          break;
        case (MR_Integer) 1:
          (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = MR_TRUE;
          break;
      }
      if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
      {
        hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(CalleeProcInfo_30, &(env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__RttiVarMaps_60);
        hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeProcInfo_30, &HeadVars_61);
        (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_67 = (MR_Word) (&transform_hlds__inlining_scalar_common_1[0]);
        mercury__multi_map__from_corresponding_lists_3_p_0((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_67, (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__TypeInfo_13_67, (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_25, HeadVars_61, &(env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__MultiMap_62);
        transform_hlds__inlining__inlining_in_call_5_p_0_4(&env);
        (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = !((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded);
      }
    }
    if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
    {
      MR_Word CallContext_38;
      MR_Word Goal1_39;
      MR_Word TypeVarSet_40;
      MR_Word VarTable_41;
      MR_Word RttiVarMaps_42;
      MR_Word HasParallelConj_44;
      MR_Word InlinedParallel_45;
      MR_Word GoalInfo1_47;
      MR_Word Determinism0_48;
      MR_Word Determinism1_49;
      MR_Word ArgVarSet_50;
      MR_Word NonLocals_51;
      MR_Word DetChanged_52;
      MR_Word Purity0_53;
      MR_Word Purity1_54;
      MR_Word PurityChanged_55;
      MR_Word STATE_VARIABLE_Info_1_58;
      MR_Word Var_46;

      CallContext_38 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_7);
      transform_hlds__inlining__do_inline_call_13_p_0(ModuleInfo_10, ExternalTypeParams_13, CallContext_38, CalleePredInfo_29, CalleeProcInfo_30, (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_25, &Goal1_39, TypeVarSet0_16, &TypeVarSet_40, VarTable0_17, &VarTable_41, RttiVarMaps0_18, &RttiVarMaps_42);
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(CalleeProcInfo_30, &HasParallelConj_44);
      switch (HasParallelConj_44) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          InlinedParallel_45 = InlinedParallel0_20;
          break;
        case (MR_Integer) 0:
          InlinedParallel_45 = (MR_Integer) 1;
          break;
      }
      GoalInfo1_47 = ((MR_Word) ((MR_hl_field(0, Goal1_39, 1))));
      Determinism0_48 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_7);
      Determinism1_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo1_47);
      ArgVarSet_50 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__ArgVars_25);
      NonLocals_51 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo0_7);
      (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (Determinism0_48 == Determinism1_49);
      if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
        (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = parse_tree__set_of_var__subset_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVarSet_50, NonLocals_51);
      if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
        DetChanged_52 = DetChanged0_21;
      else
        DetChanged_52 = (MR_Integer) 1;
      Purity0_53 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo0_7);
      Purity1_54 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo1_47);
      (env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded = (Purity0_53 == Purity1_54);
      if ((env).transform_hlds__inlining__inlining_in_call_5_p_0_env_0__succeeded)
        PurityChanged_55 = PurityChanged0_22;
      else
        PurityChanged_55 = (MR_Integer) 1;
      {
        STATE_VARIABLE_Info_1_58 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_1_58, 0) = ((MR_Box) (ModuleInfo_10));
        MR_hl_field(0, STATE_VARIABLE_Info_1_58, 1) = ((MR_Box) (VarThresh_11));
        MR_hl_field(0, STATE_VARIABLE_Info_1_58, 2) = (MR_Box) ((MR_Unsigned) (HighLevelCode_12));
        MR_hl_field(0, STATE_VARIABLE_Info_1_58, 3) = ((MR_Box) (ExternalTypeParams_13));
        MR_hl_field(0, STATE_VARIABLE_Info_1_58, 4) = ((MR_Box) (ShouldInlineTailProcs_14));
        MR_hl_field(0, STATE_VARIABLE_Info_1_58, 5) = ((MR_Box) (ShouldInlineProcs_15));
        MR_hl_field(0, STATE_VARIABLE_Info_1_58, 6) = ((MR_Box) (TypeVarSet_40));
        MR_hl_field(0, STATE_VARIABLE_Info_1_58, 7) = ((MR_Box) (VarTable_41));
        MR_hl_field(0, STATE_VARIABLE_Info_1_58, 8) = ((MR_Box) (RttiVarMaps_42));
        MR_hl_field(0, STATE_VARIABLE_Info_1_58, 9) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) (InlinedParallel_45) << 2)) | (((((MR_Unsigned) (DetChanged_52) << 1)) | (MR_Unsigned) (PurityChanged_55)))))));
      }
      switch (TailRec_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Goal_8 = Goal1_39;
            *STATE_VARIABLE_Info_57 = STATE_VARIABLE_Info_1_58;
          }
          break;
        case (MR_Integer) 1:
          transform_hlds__inlining__inlining_in_goal_4_p_0(Goal1_39, Goal_8, STATE_VARIABLE_Info_1_58, STATE_VARIABLE_Info_57);
          break;
      }
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *Goal_8 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr0_6));
        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_7));
      }
      *STATE_VARIABLE_Info_57 = STATE_VARIABLE_Info_0_56;
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
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, 1))));

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
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_73));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, 0))))) {
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
            MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 1))) & (MR_Integer) 1);
            MR_Word Goals0_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
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
              GoalExpr_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_36, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(3, GoalExpr_36, 1) = (MR_Box) ((MR_Unsigned) (ConjType_33));
              MR_hl_field(3, GoalExpr_36, 2) = ((MR_Box) (Goals_35));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_36));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Goals0_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Goals_69;
            MR_Word GoalExpr_70;

            transform_hlds__inlining__inlining_in_disjuncts_4_p_0(Goals0_68, &Goals_69, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
            {
              GoalExpr_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_70, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_70, 1) = ((MR_Box) (Goals_69));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_70));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Det_38 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, 2))) & (MR_Integer) 1);
            MR_Word Cases0_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
            MR_Word Cases_40;
            MR_Word GoalExpr_71;

            transform_hlds__inlining__inlining_in_cases_4_p_0(Cases0_39, &Cases_40, STATE_VARIABLE_Info_0_54, STATE_VARIABLE_Info_55);
            {
              GoalExpr_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_71, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_71, 1) = ((MR_Box) (Var_37));
              MR_hl_field(3, GoalExpr_71, 2) = (MR_Box) ((MR_Unsigned) (Det_38));
              MR_hl_field(3, GoalExpr_71, 3) = ((MR_Box) (Cases_40));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_71));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word SubGoal0_79 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word FGT_52;

            succeeded = ((((MR_tag((MR_Word) Reason_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_50, 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_52 = ((MR_Unsigned) ((MR_hl_field(3, Reason_50, 2))) & (MR_Integer) 3);
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
                GoalExpr_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_74, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_74, 1) = ((MR_Box) (Reason_50));
                MR_hl_field(3, GoalExpr_74, 2) = ((MR_Box) (SubGoal_75));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_74));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Vars_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 1))));
            MR_Word Cond0_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 2))));
            MR_Word Then0_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 3))));
            MR_Word Else0_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, 4))));
            MR_Word Cond_45;
            MR_Word Then_46;
            MR_Word Else_47;
            MR_Word STATE_VARIABLE_Info_6_61;
            MR_Word STATE_VARIABLE_Info_7_62;
            MR_Word GoalExpr_72;

            transform_hlds__inlining__inlining_in_goal_4_p_0(Cond0_42, &Cond_45, STATE_VARIABLE_Info_0_54, &STATE_VARIABLE_Info_6_61);
            transform_hlds__inlining__inlining_in_goal_4_p_0(Then0_43, &Then_46, STATE_VARIABLE_Info_6_61, &STATE_VARIABLE_Info_7_62);
            transform_hlds__inlining__inlining_in_goal_4_p_0(Else0_44, &Else_47, STATE_VARIABLE_Info_7_62, STATE_VARIABLE_Info_55);
            {
              GoalExpr_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_72, 1) = ((MR_Box) (Vars_41));
              MR_hl_field(3, GoalExpr_72, 2) = ((MR_Box) (Cond_45));
              MR_hl_field(3, GoalExpr_72, 3) = ((MR_Box) (Then_46));
              MR_hl_field(3, GoalExpr_72, 4) = ((MR_Box) (Else_47));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_72));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
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
    MR_Word HeadGoal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TailGoals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word HeadGoal_12;
    MR_Word TailGoals_13;
    MR_Word HeadGoalList_14;
    MR_Word STATE_VARIABLE_Info_1_17;

    transform_hlds__inlining__inlining_in_goal_4_p_0(HeadGoal0_8, &HeadGoal_12, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_17);
    transform_hlds__inlining__inlining_in_par_conj_4_p_0(TailGoals0_9, &TailGoals_13, STATE_VARIABLE_Info_1_17, STATE_VARIABLE_Info_4);
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
    MR_Word HeadGoal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word TailGoals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word HeadGoal_12;
    MR_Word TailGoals_13;
    MR_Word HeadGoalList_14;
    MR_Word STATE_VARIABLE_Info_1_17;

    transform_hlds__inlining__inlining_in_goal_4_p_0(HeadGoal0_8, &HeadGoal_12, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_17);
    transform_hlds__inlining__inlining_in_conj_4_p_0(TailGoals0_9, &TailGoals_13, STATE_VARIABLE_Info_1_17, STATE_VARIABLE_Info_4);
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
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_8, 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_8, 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_8, 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_Info_1_19;

    transform_hlds__inlining__inlining_in_goal_4_p_0(Goal0_15, &Goal_16, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_10, 2) = ((MR_Box) (Goal_16));
    }
    transform_hlds__inlining__inlining_in_cases_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_Info_1_19, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_11));
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
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word STATE_VARIABLE_Info_1_15;

    transform_hlds__inlining__inlining_in_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_1_15);
    transform_hlds__inlining__inlining_in_disjuncts_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_Info_1_15, STATE_VARIABLE_Info_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_11));
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
  MR_bool succeeded;
  MR_Word ModuleInfo_9 = ((MR_Word) ((MR_hl_field(0, Info_5, 0))));
  MR_Word HighLevelCode_11 = ((MR_Unsigned) ((MR_hl_field(0, Info_5, 2))) & (MR_Integer) 1);
  MR_Word ShouldInlineTailProcs_13 = ((MR_Word) ((MR_hl_field(0, Info_5, 4))));
  MR_Word ShouldInlineProcs_14 = ((MR_Word) ((MR_hl_field(0, Info_5, 5))));
  MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_6, 0))));
  MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_6, 1))));
  MR_Word Builtin_25 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr0_6, 3))) & (MR_Integer) 1);
  MR_Word PredProcId_28;
  MR_Word TailRec_29;
  MR_Word Var_33;
  MR_Word PredInfo_39;
  MR_Word ProcInfo_40;
  MR_Word MaybeComplexityProcMap_41;
  MR_Word CalledGoal_45;
  MR_Word CalledGoalExpr_46;
  MR_Word Var_61;
  MR_Word Var_65;
  MR_Integer Var_64;
  MR_Word ForeignAttributes_48;

  {
    PredProcId_28 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_28, 0) = ((MR_Box) (PredId_22));
    MR_hl_field(0, PredProcId_28, 1) = ((MR_Box) (ProcId_23));
  }
  succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_28)), ShouldInlineTailProcs_13);
  if (succeeded)
  {
    Var_33 = (MR_Integer) 12;
    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo0_7, Var_33);
  }
  if (succeeded)
    TailRec_29 = (MR_Integer) 1;
  else
    TailRec_29 = (MR_Integer) 0;
  succeeded = (Builtin_25 == (MR_Integer) 1);
  if (succeeded)
  {
    hlds__hlds_module__module_info_pred_proc_info_5_p_0(ModuleInfo_9, PredId_22, ProcId_23, &PredInfo_39, &ProcInfo_40);
    succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_39);
    succeeded = !(succeeded);
    if (succeeded)
    {
      succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_39);
      if (succeeded)
      {
        hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&Var_64);
        succeeded = (ProcId_23 == Var_64);
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_61 = (MR_Word) ((MR_Unsigned) 0U);
        hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_40, &Var_65);
        succeeded = parse_tree__prog_data_pragma____Unify____eval_method_0_0(Var_61, Var_65);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__pred_info_requested_no_inlining_1_p_0(PredInfo_39);
          succeeded = !(succeeded);
          if (succeeded)
          {
            hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(ModuleInfo_9, &MaybeComplexityProcMap_41);
            if ((MaybeComplexityProcMap_41 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word ComplexityProcMap_43;
              MR_Word IsInComplexityMap_44;
              MR_Word Var_62 = ((MR_Word) ((MR_hl_field(1, MaybeComplexityProcMap_41, 0))));

              ComplexityProcMap_43 = ((MR_Word) ((MR_hl_field(0, Var_62, 1))));
              IsInComplexityMap_44 = transform_hlds__complexity__is_in_complexity_proc_map_4_f_0(ComplexityProcMap_43, ModuleInfo_9, PredId_22, ProcId_23);
              succeeded = (IsInComplexityMap_44 == (MR_Word) ((MR_Unsigned) 0U));
            }
            if (succeeded)
            {
              hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_40, &CalledGoal_45);
              CalledGoalExpr_46 = ((MR_Word) ((MR_hl_field(0, CalledGoal_45, 0))));
              succeeded = ((((MR_tag((MR_Word) CalledGoalExpr_46)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, CalledGoalExpr_46, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ForeignAttributes_48 = ((MR_Word) ((MR_hl_field(3, CalledGoalExpr_46, 1))));
                {
                  MR_Word Globals_55;
                  MR_Word Target_56;
                  MR_Word ForeignLanguage_57;
                  MR_Word MaybeMayDuplicate_58;
                  MR_Word Detism_59;

                  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_9, &Globals_55);
                  libs__globals__get_target_2_p_0(Globals_55, &Target_56);
                  ForeignLanguage_57 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(ForeignAttributes_48);
                  switch (ForeignLanguage_57) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      succeeded = (Target_56 == (MR_Integer) 0);
                      break;
                    case (MR_Integer) 1:
                      succeeded = (Target_56 == (MR_Integer) 1);
                      break;
                    case (MR_Integer) 2:
                      succeeded = (Target_56 == (MR_Integer) 2);
                      break;
                  }
                  succeeded = !(succeeded);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    MaybeMayDuplicate_58 = parse_tree__prog_data_foreign__get_may_duplicate_1_f_0(ForeignAttributes_48);
                    if ((MaybeMayDuplicate_58 == (MR_Word) ((MR_Unsigned) 0U)))
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(1, MaybeMayDuplicate_58, 0))));

                      succeeded = (Var_63 == (MR_Integer) 0);
                    }
                    succeeded = !(succeeded);
                    succeeded = !(succeeded);
                    if (succeeded)
                    {
                      succeeded = (HighLevelCode_11 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        hlds__hlds_proc_util__proc_info_interface_determinism_2_p_0(ProcInfo_40, &Detism_59);
                        switch (Detism_59) {
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
    MR_Word PredInfo_30;
    MR_Word Markers_31;
    MR_Word UserReq_32;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_9, PredId_22, &PredInfo_30);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_30, &Markers_31);
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_31, (MR_Integer) 6);
    if (succeeded)
      UserReq_32 = (MR_Integer) 1;
    else
      UserReq_32 = (MR_Integer) 0;
    succeeded = (TailRec_29 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (UserReq_32 == (MR_Integer) 1);
      if (!(succeeded))
      {
        succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_31, (MR_Integer) 7);
        if (!(succeeded))
          succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_28)), ShouldInlineProcs_14);
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *ShouldInline_8 = base;
        MR_hl_field(1, base, 0) = (MR_Box) (((((MR_Unsigned) (TailRec_29) << 1)) | (MR_Unsigned) (UserReq_32)));
      }
    else
      *ShouldInline_8 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
    *ShouldInline_8 = (MR_Word) ((MR_Unsigned) 0U);
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
      VarA_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        VarB_5 = ((MR_Word) ((MR_hl_field(1, Var_11, 0))));
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
            ConstraintA_9 = ((MR_Word) ((MR_hl_field(2, VarInfoA_7, 0))));
            succeeded = ((MR_tag((MR_Word) VarInfoB_8)) == (MR_Integer) 2);
            if (succeeded)
            {
              ConstraintB_10 = ((MR_Word) ((MR_hl_field(2, VarInfoB_8, 0))));
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

static MR_Box MR_CALL 
transform_hlds__inlining__do_inline_call_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = hlds__type_util__is_type_a_dummy_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
transform_hlds__inlining__do_inline_call_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word ExternalTypeParams_15,
  MR_Word CallContext_16,
  MR_Word CalleePredInfo_17,
  MR_Word CalleeProcInfo_18,
  MR_Word ArgVars_19,
  MR_Word * Goal_20,
  MR_Word TypeVarSet0_21,
  MR_Word * TypeVarSet_22,
  MR_Word VarTable0_23,
  MR_Word * VarTable_24,
  MR_Word RttiVarMaps0_25,
  MR_Word * RttiVarMaps_26)
{
  MR_Word CalleeBodyGoal_27;
  MR_Word CalleeTypeVarSet_28;
  MR_Word HeadVars_29;
  MR_Word CalleeVarTable0_30;
  MR_Word CalleeRttiVarMaps0_31;
  MR_Word TypeRenaming_32;
  MR_Word CalleeVarTable1_33;
  MR_Word HeadTypes_34;
  MR_Word ArgTypes_35;
  MR_Word CalleeExistQVars_36;
  MR_Word TypeSubn_37;
  MR_Word CalleeVarTable_38;
  MR_Word VarTable1_39;
  MR_Word Subn_42;
  MR_Word Goal0_43;
  MR_Word CalleeRttiVarMaps1_44;
  MR_Word Var_45;
  MR_Word Renaming0_47;
  MR_Word CalleeListOfVars_48;

  hlds__hlds_pred__proc_info_get_goal_2_p_0(CalleeProcInfo_18, &CalleeBodyGoal_27);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(CalleePredInfo_17, &CalleeTypeVarSet_28);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(CalleeProcInfo_18, &HeadVars_29);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(CalleeProcInfo_18, &CalleeVarTable0_30);
  hlds__hlds_pred__proc_info_get_rtti_varmaps_2_p_0(CalleeProcInfo_18, &CalleeRttiVarMaps0_31);
  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(TypeVarSet0_21, CalleeTypeVarSet_28, TypeVarSet_22, &TypeRenaming_32);
  parse_tree__var_table__rename_vars_in_var_table_3_p_0(TypeRenaming_32, CalleeVarTable0_30, &CalleeVarTable1_33);
  parse_tree__var_table__lookup_var_types_3_p_0(CalleeVarTable1_33, HeadVars_29, &HeadTypes_34);
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable0_23, ArgVars_19, &ArgTypes_35);
  hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(CalleePredInfo_17, &CalleeExistQVars_36);
  parse_tree__prog_type_unify__compute_caller_callee_type_substitution_5_p_0(HeadTypes_34, ArgTypes_35, ExternalTypeParams_15, CalleeExistQVars_36, &TypeSubn_37);
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (&transform_hlds__inlining_scalar_common_3[0]));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (transform_hlds__inlining__do_inline_call_13_p_0_1));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (ModuleInfo_14));
  }
  parse_tree__var_table__apply_rec_subst_to_var_table_4_p_0(Var_45, TypeSubn_37, CalleeVarTable1_33, &CalleeVarTable_38);
  if ((CalleeExistQVars_36 == (MR_Word) ((MR_Unsigned) 0U)))
    VarTable1_39 = VarTable0_23;
  else
    parse_tree__var_table__apply_rec_subst_to_var_table_4_p_0(Var_45, TypeSubn_37, VarTable0_23, &VarTable1_39);
  mercury__map__from_corresponding_lists_3_p_0((MR_Word) (&transform_hlds__inlining_scalar_common_1[0]), (MR_Word) (&transform_hlds__inlining_scalar_common_1[0]), HeadVars_29, ArgVars_19, &Renaming0_47);
  parse_tree__var_table__var_table_vars_2_p_0(CalleeVarTable_38, &CalleeListOfVars_48);
  hlds__goal_util__clone_variables_6_p_0(CalleeListOfVars_48, CalleeVarTable_38, VarTable1_39, VarTable_24, Renaming0_47, &Subn_42);
  hlds__hlds_goal__must_rename_vars_in_goal_3_p_0(Subn_42, CalleeBodyGoal_27, &Goal0_43);
  hlds__hlds_goal__goal_set_context_3_p_0(CallContext_16, Goal0_43, Goal_20);
  hlds__hlds_rtti__apply_substitutions_to_rtti_varmaps_5_p_0(TypeRenaming_32, TypeSubn_37, Subn_42, CalleeRttiVarMaps0_31, &CalleeRttiVarMaps1_44);
  hlds__hlds_rtti__rtti_varmaps_overlay_3_p_0(CalleeRttiVarMaps1_44, RttiVarMaps0_25, RttiVarMaps_26);
}

static MR_bool MR_CALL 
transform_hlds__inlining__should_proc_be_inlined_3_p_0(
  MR_Word Params_4,
  MR_Word ModuleInfo_5,
  MR_Word PredProcId_6)
{
  MR_bool succeeded;
  MR_Word PredInfo_7;
  MR_Word ProcInfo_8;
  MR_Word CalledGoal_9;
  MR_Word Entity_10;
  MR_Word Origin_18;
  MR_Word Var_24;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_95;
  MR_Word Var_96;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_5, PredProcId_6, &PredInfo_7, &ProcInfo_8);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_8, &CalledGoal_9);
  Var_96 = ((((MR_Unsigned) ((MR_hl_field(0, Params_4, 1))) >> 2)) & (MR_Integer) 1);
  Var_95 = ((((MR_Unsigned) ((MR_hl_field(0, Params_4, 1))) >> 1)) & (MR_Integer) 1);
  Var_89 = ((MR_Word) ((MR_hl_field(0, Params_4, 6))));
  {
    Entity_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Entity_10, 0) = ((MR_Box) (PredProcId_6));
  }
  {
    MR_Integer SimpleThreshold_11;
    MR_Integer Size_98;

    succeeded = (Var_96 == (MR_Integer) 0);
    if (succeeded)
    {
      SimpleThreshold_11 = ((MR_Integer) ((MR_hl_field(0, Params_4, 4))));
      hlds__goal_util__goal_size_2_p_0(CalledGoal_9, &Size_98);
      succeeded = (Size_98 < SimpleThreshold_11);
      if (!(succeeded))
      {
        MR_Integer Var_99 = (MR_Integer) ((MR_Unsigned) SimpleThreshold_11 * (MR_Unsigned) 3);

        succeeded = (Size_98 < Var_99);
        if (succeeded)
          succeeded = transform_hlds__inlining__is_flat_simple_goal_1_p_0(CalledGoal_9);
      }
    }
  }
  if (!(succeeded))
  {
    {
      MR_Word Needed_13;
      MR_Integer NumUses_14;
      MR_Integer Size_15;
      MR_Integer CallCost_16;
      MR_Integer CompoundThreshold_17;
      MR_Integer Var_20;
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Box conv0_Needed_13;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0), (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0), Var_89, ((MR_Box) (Entity_10)), &conv0_Needed_13);
      if (succeeded)
      {
        Needed_13 = ((MR_Word) (conv0_Needed_13));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Needed_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          NumUses_14 = ((MR_Integer) ((MR_hl_field(1, Needed_13, 0))));
          hlds__goal_util__goal_size_2_p_0(CalledGoal_9, &Size_15);
          CallCost_16 = ((MR_Integer) ((MR_hl_field(0, Params_4, 2))));
          CompoundThreshold_17 = ((MR_Integer) ((MR_hl_field(0, Params_4, 3))));
          Var_20 = (MR_Integer) 0;
          succeeded = (CompoundThreshold_17 > Var_20);
          if (succeeded)
          {
            Var_22 = (MR_Integer) ((MR_Unsigned) Size_15 - (MR_Unsigned) CallCost_16);
            Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 * (MR_Unsigned) NumUses_14);
            succeeded = (Var_21 <= CompoundThreshold_17);
          }
        }
      }
    }
    if (!(succeeded))
    {
      MR_Word TypeCtorInfo_86_86;
      MR_Word TypeCtorInfo_87_87;
      MR_Word NeededMap_25;
      MR_Word Needed_26;
      MR_Integer NumUses_27;
      MR_Box conv1_Needed_26;

      succeeded = (Var_95 == (MR_Integer) 0);
      if (succeeded)
      {
        NeededMap_25 = ((MR_Word) ((MR_hl_field(0, Params_4, 6))));
        TypeCtorInfo_86_86 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
        TypeCtorInfo_87_87 = (MR_Word) (&transform_hlds__dead_proc_elim__transform_hlds__dead_proc_elim__type_ctor_info_maybe_needed_0);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_86_86, TypeCtorInfo_87_87, NeededMap_25, ((MR_Box) (Entity_10)), &conv1_Needed_26);
        if (succeeded)
        {
          Needed_26 = ((MR_Word) (conv1_Needed_26));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Needed_26)) == (MR_Integer) 1);
          if (succeeded)
          {
            NumUses_27 = ((MR_Integer) ((MR_hl_field(1, Needed_26, 0))));
            succeeded = (NumUses_27 == (MR_Integer) 1);
          }
        }
      }
    }
  }
  if (succeeded)
  {
    succeeded = hlds__goal_refs__goal_calls_2_p_0(CalledGoal_9, PredProcId_6);
    succeeded = !(succeeded);
    if (succeeded)
    {
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_7, &Origin_18);
      Var_24 = (MR_Integer) 0;
      transform_hlds__inlining__origin_involves_daio_2_p_0(Origin_18, &Var_88);
      succeeded = (Var_24 == Var_88);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining__origin_involves_daio_2_p_0(
  MR_Word Origin_3,
  MR_Word * InvolvesDAIO_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Origin_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        *InvolvesDAIO_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubOrigin_8 = ((MR_Word) ((MR_hl_field(2, Origin_3, 1))));
          MR_Word next_value_of_Origin_3 = SubOrigin_8;

          // direct tailcall eliminated
          ;
          Origin_3 = next_value_of_Origin_3;
          continue;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Transform_10 = ((MR_Word) ((MR_hl_field(3, Origin_3, 0))));
          MR_Word SubOrigin_15 = ((MR_Word) ((MR_hl_field(3, Origin_3, 1))));

          switch (MR_tag((MR_Word) Transform_10)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Transform_10)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                  break;
                case (MR_Integer) 3:
                  succeeded = MR_TRUE;
                  break;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
              break;
          }
          if (!(succeeded))
          {
            MR_Word Var_17;

            transform_hlds__inlining__origin_involves_daio_2_p_0(SubOrigin_15, &Var_17);
            succeeded = ((MR_Integer) 1 == Var_17);
          }
          if (succeeded)
            *InvolvesDAIO_4 = (MR_Integer) 1;
          else
            *InvolvesDAIO_4 = (MR_Integer) 0;
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
transform_hlds__inlining__is_flat_simple_goal_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));

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
          MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_2, 3))) & (MR_Integer) 1);

          succeeded = (Var_20 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_2, 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_4 = ((MR_Word) ((MR_hl_field(3, GoalExpr_2, 2))));
              MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_2, 1))) & (MR_Integer) 1);

              succeeded = (Var_19 == (MR_Integer) 0);
              if (succeeded)
                succeeded = transform_hlds__inlining__is_flat_simple_goal_list_1_p_0(Goals_4);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_6 = ((MR_Word) ((MR_hl_field(3, GoalExpr_2, 1))));
              MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_2, 2))));
              MR_Word FGT_8;

              succeeded = ((((MR_tag((MR_Word) Reason_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_6, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_8 = ((MR_Unsigned) ((MR_hl_field(3, Reason_6, 2))) & (MR_Integer) 3);
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
      MR_Word Goal_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
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

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_changed_detism_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____have_we_changed_detism_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_changed_detism_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____have_we_changed_detism_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_changed_purity_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____have_we_changed_purity_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_changed_purity_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____have_we_changed_purity_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_inlined_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____have_we_inlined_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_inlined_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____have_we_inlined_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____have_we_inlined_parallel_conj_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____have_we_inlined_parallel_conj_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____have_we_inlined_parallel_conj_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____have_we_inlined_parallel_conj_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____inline_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____inline_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____inline_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____inline_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____inline_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____inline_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____may_inline_purity_promised_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____may_inline_purity_promised_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_involves_daio_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____maybe_involves_daio_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_involves_daio_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____maybe_involves_daio_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_should_inline_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____maybe_should_inline_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_should_inline_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____maybe_should_inline_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____maybe_tail_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____maybe_tail_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__inlining____Unify____maybe_user_req_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__inlining____Unify____maybe_user_req_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__inlining____Compare____maybe_user_req_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__inlining____Compare____maybe_user_req_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__transform_hlds__inlining__init(void)
{
}

void mercury__transform_hlds__inlining__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_changed_detism_0);
  MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_changed_purity_0);
  MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_inlined_0);
  MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_have_we_inlined_parallel_conj_0);
  MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_info_0);
  MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_inline_params_0);
  MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_may_inline_purity_promised_pred_0);
  MR_register_type_ctor_info(&transform_hlds__inlining__transform_hlds__inlining__type_ctor_info_maybe_involves_daio_0);
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
