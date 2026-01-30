/*
** Automatically generated from `add_foreign_proc.m'
** by the Mercury compiler,
** version rotd-2026-01-30
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


// :- module hlds.make_hlds.add_foreign_proc.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_foreign_proc__init
ENDINIT
*/

#include "hlds.make_hlds.add_foreign_proc.mih"


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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "backend_libs.foreign.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_ctgc.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_maybe_allowed_to_add_foreign_proc_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_maybe_allowed_to_add_foreign_proc_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_maybe_allowed_to_add_foreign_proc_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_maybe_allowed_to_add_foreign_proc_0[2];

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_maybe_allowed_to_add_foreign_proc_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_maybe_for_this_backend_0_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_types_maybe_for_this_backend_0_1[1];

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_maybe_for_this_backend_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_maybe_for_this_backend_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_maybe_for_this_backend_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_ptag_ordered_maybe_for_this_backend_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_name_ordered_maybe_for_this_backend_0[2];

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_maybe_for_this_backend_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_overridden_by_old_foreign_proc_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0[2];

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__ti_list_1libs__globals__type_ctor_info_foreign_language_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_types_wrong_backend_cause_0_0[2];

static const MR_DuArgLocn hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_locns_wrong_backend_cause_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_wrong_backend_cause_0_0;

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_wrong_backend_cause_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_wrong_backend_cause_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_wrong_backend_cause_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_ptag_ordered_wrong_backend_cause_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_name_ordered_wrong_backend_cause_0[2];

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_wrong_backend_cause_0[2];

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__check_foreign_proc_arg_list__879__1_2_f_0(
  MR_Word ProgVarSet_8,
  MR_Word HeadVar__2_89);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__605__1_2_p_0(
  MR_Word LaterOverridden_32,
  MR_Word HeadVar__2_64);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____maybe_for_this_backend_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____wrong_backend_cause_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____maybe_for_this_backend_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____wrong_backend_cause_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____maybe_allowed_to_add_foreign_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____maybe_allowed_to_add_foreign_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__var_is_unmentioned_3_p_0(
  MR_Word Identifiers_4,
  MR_Word MaybeArg_5,
  MR_String * Name_6);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word PFSymNameArity_14,
  MR_Word Attributes_15,
  MR_Word PragmaVars_16,
  MR_Word PragmaImpl_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__pragma_foreign_proc_body_checks_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Lang_11,
  MR_Word Context_12,
  MR_Word PFSymNameArity_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word BodyPieces_16,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__check_fp_body_for_success_indicator_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Lang_11,
  MR_Word Context_12,
  MR_Word PFSymNameArity_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word BodyPieces_16,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_6_p_0(
  MR_Word PFSymNameArity_7,
  MR_Word ProgVarSet_8,
  MR_Word ArgVars_9,
  MR_Word Lang_10,
  MR_Word Context_11,
  MR_Word * Specs_12);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_purity_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Attributes_8,
  MR_Word Lang_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__report_if_fproc_is_for_builtin_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word Lang_10,
  MR_Word Context_11,
  MR_Word * AllowedToAdd_12,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__report_if_fproc_is_for_imported_pred_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word * Specs_8);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__handle_wrong_backend_foreign_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__handle_wrong_backend_foreign_proc_9_p_0(
  MR_Word ItemMercuryStatus_10,
  MR_Word PredId_11,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word WrongBackendCause_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_nonimported_foreign_proc_12_p_0(
  MR_Word PredId_13,
  MR_Word STATE_VARIABLE_PredInfo_0_32,
  MR_Integer ProcId_15,
  MR_Word PFSymNameArity_16,
  MR_Word Attributes_17,
  MR_Word PragmaVars_18,
  MR_Word PragmaImpl_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(
  MR_Word Globals_16,
  MR_Word PredOrFunc_17,
  MR_Word PredModuleName_18,
  MR_String PredName_19,
  MR_Word PredFormArity_20,
  MR_Word NewContext_21,
  MR_Word Target_22,
  MR_Word NewLang_23,
  MR_Word AllProcIds_24,
  MR_Integer NewClauseProcId_25,
  MR_Word * Overridden_26,
  MR_Word Clauses0_27,
  MR_Word * Clauses_28,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__report_duplicate_foreign_proc_9_p_0(
  MR_Word PredOrFunc_10,
  MR_Word PredModuleName_11,
  MR_String PredName_12,
  MR_Word PredFormArity_13,
  MR_Word Lang_14,
  MR_Word FirstClauseContext_15,
  MR_Word NewContext_16,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__compute_intended_proc_id_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word PFSymNameArity_10,
  MR_Word PragmaVars_11,
  MR_Word Attributes_12,
  MR_Word Context_13,
  MR_Word * MaybeProcId_14);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__record_foreign_proc_seq_num_7_p_0(
  MR_Word SeqNum_8,
  MR_Word Context_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_procs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____maybe_allowed_to_add_foreign_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____maybe_allowed_to_add_foreign_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____maybe_for_this_backend_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____maybe_for_this_backend_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____wrong_backend_cause_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____wrong_backend_cause_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[130][2];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[3][5];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_6[2][6];




static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[130][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "foreign_proc is for"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is an"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "imported"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "defined in the current module."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only for predicates and functions"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations are allowed"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[24])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "foreign_proc is for the"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[27]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is a"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "builtin"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[32]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Redefinitions of builtin operations are"))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "operation."))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not allowed."))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[38]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "foreign_proc for"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for this mode of"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The first one was here."))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has a backend attribute that states that"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this foreign_proc"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it is not for the current grade."))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: this foreign_proc is for"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "supported by the current backend is"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the only language"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The supported languages are"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "languages supported by the current backend."))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is not one of the"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[70])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for the current grade."))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You will need to rebuild this file"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[75]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "was generated for a different grade."))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[77]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This indicates that the .opt file"))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[79]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has purity"))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[81]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but that"))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has been declared"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error in"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[89]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "occurs more than once"))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[91]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variables"))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[93]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "each occur more than once"))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[95]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the argument list."))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[97]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[87]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not occur"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "code."))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[107]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "code in the foreign_proc for"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may set"))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "SUCCESS_INDICATOR"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[112]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[12])))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[111]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row 116 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[115]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it cannot fail."))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[117]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not appear to set"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[119]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[113])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it can fail."))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[121]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[110]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "may contain a"))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[124]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "statement."))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[126]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "return"))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[128]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[127])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 186U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 236U) },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_pred_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__handle_wrong_backend_foreign_proc_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[2])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_maybe_allowed_to_add_foreign_proc_0_0 = {
  (MR_String) "allowed_to_add_foreign_proc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_maybe_allowed_to_add_foreign_proc_0_1 = {
  (MR_String) "not_allowed_to_add_foreign_proc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_maybe_allowed_to_add_foreign_proc_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_maybe_allowed_to_add_foreign_proc_0_0,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_maybe_allowed_to_add_foreign_proc_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_maybe_allowed_to_add_foreign_proc_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_maybe_allowed_to_add_foreign_proc_0_0,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_maybe_allowed_to_add_foreign_proc_0_1
};

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_maybe_allowed_to_add_foreign_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_maybe_allowed_to_add_foreign_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Unify____maybe_allowed_to_add_foreign_proc_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Compare____maybe_allowed_to_add_foreign_proc_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_foreign_proc",
  (MR_String) "maybe_allowed_to_add_foreign_proc",
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_maybe_allowed_to_add_foreign_proc_0 },
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_maybe_allowed_to_add_foreign_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_maybe_allowed_to_add_foreign_proc_0,

};

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_maybe_for_this_backend_0_0 = {
  (MR_String) "for_this_backend",
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

static const MR_PseudoTypeInfo hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_types_maybe_for_this_backend_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_wrong_backend_cause_0) };

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_maybe_for_this_backend_0_1 = {
  (MR_String) "not_for_this_backend",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_types_maybe_for_this_backend_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_maybe_for_this_backend_0_0[1] = { &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_maybe_for_this_backend_0_0 };

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_maybe_for_this_backend_0_1[1] = { &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_maybe_for_this_backend_0_1 };

static const MR_DuPtagLayout hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_ptag_ordered_maybe_for_this_backend_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_maybe_for_this_backend_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_maybe_for_this_backend_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_name_ordered_maybe_for_this_backend_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_maybe_for_this_backend_0_0,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_maybe_for_this_backend_0_1
};

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_maybe_for_this_backend_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_maybe_for_this_backend_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Unify____maybe_for_this_backend_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Compare____maybe_for_this_backend_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_foreign_proc",
  (MR_String) "maybe_for_this_backend",
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_name_ordered_maybe_for_this_backend_0 },
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_ptag_ordered_maybe_for_this_backend_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_maybe_for_this_backend_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0 = {
  (MR_String) "overridden_by_old_foreign_proc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1 = {
  (MR_String) "not_overridden_by_old_foreign_proc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_overridden_by_old_foreign_proc_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0
};

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_foreign_proc",
  (MR_String) "overridden_by_old_foreign_proc",
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0 },
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_overridden_by_old_foreign_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__ti_list_1libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_types_wrong_backend_cause_0_0[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_foreign_proc__list__ti_list_1libs__globals__type_ctor_info_foreign_language_0)
};

static const MR_DuArgLocn hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_locns_wrong_backend_cause_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_wrong_backend_cause_0_0 = {
  (MR_String) "wrong_lang",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_types_wrong_backend_cause_0_0,
  NULL,
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_locns_wrong_backend_cause_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_wrong_backend_cause_0_1 = {
  (MR_String) "right_lang_wrong_backend",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_wrong_backend_cause_0_0[1] = { &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_wrong_backend_cause_0_1 };

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_wrong_backend_cause_0_1[1] = { &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_wrong_backend_cause_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_ptag_ordered_wrong_backend_cause_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_wrong_backend_cause_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_wrong_backend_cause_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_name_ordered_wrong_backend_cause_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_wrong_backend_cause_0_1,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_wrong_backend_cause_0_0
};

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_wrong_backend_cause_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_wrong_backend_cause_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Unify____wrong_backend_cause_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Compare____wrong_backend_cause_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_foreign_proc",
  (MR_String) "wrong_backend_cause",
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_name_ordered_wrong_backend_cause_0 },
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_ptag_ordered_wrong_backend_cause_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_wrong_backend_cause_0,

};

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__check_foreign_proc_arg_list__879__1_2_f_0(
  MR_Word ProgVarSet_8,
  MR_Word HeadVar__2_89)
{
  MR_Word HeadVar__3_90;

  HeadVar__3_90 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_8, HeadVar__2_89);
  return HeadVar__3_90;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__605__1_2_p_0(
  MR_Word LaterOverridden_32,
  MR_Word HeadVar__2_64)
{
  MR_bool succeeded = (LaterOverridden_32 == HeadVar__2_64);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
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
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____maybe_for_this_backend_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    hlds__make_hlds__add_foreign_proc____Compare____wrong_backend_cause_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____wrong_backend_cause_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
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
      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____maybe_for_this_backend_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = hlds__make_hlds__add_foreign_proc____Unify____wrong_backend_cause_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____wrong_backend_cause_0_0(
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
    MR_Word TypeInfo_11_11;
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 3);
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        TypeInfo_11_11 = (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____maybe_allowed_to_add_foreign_proc_0_0(
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
hlds__make_hlds__add_foreign_proc____Unify____maybe_allowed_to_add_foreign_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__var_is_unmentioned_3_p_0(
  MR_Word Identifiers_4,
  MR_Word MaybeArg_5,
  MR_String * Name_6)
{
  MR_bool succeeded = (MaybeArg_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_8;
  MR_String Var_9;
  MR_Word TypeCtorInfo_10_10;

  if (succeeded)
  {
    Var_8 = ((MR_Word) ((MR_hl_field(1, MaybeArg_5, 0))));
    *Name_6 = ((MR_String) ((MR_hl_field(0, Var_8, 0))));
    Var_9 = (MR_String) "_";
    succeeded = mercury__string__prefix_2_p_0(*Name_6, Var_9);
    succeeded = !(succeeded);
    if (succeeded)
    {
      TypeCtorInfo_10_10 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
      succeeded = mercury__list__member_2_p_0(TypeCtorInfo_10_10, ((MR_Box) (*Name_6)), Identifiers_4);
      succeeded = !(succeeded);
    }
  }
  return succeeded;
}

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word FPInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  MR_bool succeeded;
  MR_Word Attributes0_15 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, 0))));
  MR_Word PredSymName_16 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, 1))));
  MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(0, FPInfo_12, 2))) & (MR_Integer) 1);
  MR_Word PragmaVars_18 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, 3))));
  MR_Word ProgVarSet_19 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, 4))));
  MR_Word PragmaImpl_21 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, 6))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, 7))));
  MR_Word SeqNum_23 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, 8))));
  MR_Word PredFormArity_24;
  MR_Word PFSymNameArity_25;
  MR_Word Globals_26;
  MR_Word VeryVerbose_27;
  MR_Word PredId_31;
  MR_Word Attributes_32;
  MR_Word Lang_33;
  MR_Word ImportedFprocSpecs_34;
  MR_Word AllowedToAdd_35;
  MR_Word ArgVars_36;
  MR_Word ArgListSpecs_38;
  MR_Word StoppingSpecs_39;
  MR_Word STATE_VARIABLE_ModuleInfo_1_58;
  MR_Word STATE_VARIABLE_Specs_1_59;
  MR_Word STATE_VARIABLE_PredInfo_1_60;
  MR_Word STATE_VARIABLE_PredInfo_2_63;
  MR_Word STATE_VARIABLE_PredInfo_3_65;
  MR_Word STATE_VARIABLE_ModuleInfo_2_66;
  MR_Word STATE_VARIABLE_Specs_2_67;
  MR_Word STATE_VARIABLE_Specs_3_68;
  MR_Word STATE_VARIABLE_Specs_4_69;
  MR_Word PredOrFunc_78;
  MR_Word PredSymName_79;
  MR_Word PredFormArity_80;
  MR_Word PredModuleName_81;
  MR_String PredName_82;
  MR_Word PredTable0_83;
  MR_Word MaybePredId_84;
  MR_Word MaybeThreadSafe_90;
  MR_Word ThreadSafe_91;
  MR_Word Var_61;
  MR_Word _ArgInfos_37;

  PredFormArity_24 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), PragmaVars_18);
  {
    PFSymNameArity_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
    MR_hl_field(0, PFSymNameArity_25, 1) = ((MR_Box) (PredSymName_16));
    MR_hl_field(0, PFSymNameArity_25, 2) = ((MR_Box) (PredFormArity_24));
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &Globals_26);
  libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 132, &VeryVerbose_27);
  switch (VeryVerbose_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String IdStr_29;

        IdStr_29 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_1_f_0(PFSymNameArity_25);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Processing \140:- pragma foreign_proc\' for ");
        mercury__io__write_string_4_p_0(ProgressStream_9, IdStr_29);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...\n");
      }
      break;
  }
  PredOrFunc_78 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_25, 0))) & (MR_Integer) 1);
  PredSymName_79 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_25, 1))));
  PredFormArity_80 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_25, 2))));
  mdbcomp__sym_name__det_sym_name_get_module_name_and_name_3_p_0(PredSymName_79, &PredModuleName_81, &PredName_82);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &PredTable0_83);
  hlds__pred_table__predicate_table_search_pf_fqm_n_a_6_p_0(PredTable0_83, PredOrFunc_78, PredModuleName_81, PredName_82, PredFormArity_80, &MaybePredId_84);
  if ((MaybePredId_84 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word UserArity_85;
    MR_Word Origin_86;
    MR_Word Var_87;

    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_78, &UserArity_85, PredFormArity_80);
    {
      Var_87 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_87, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_78));
      MR_hl_field(0, Var_87, 1) = ((MR_Box) (PredSymName_79));
      MR_hl_field(0, Var_87, 2) = ((MR_Box) (UserArity_85));
    }
    {
      Origin_86 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Origin_86, 0) = ((MR_Box) (Var_87));
    }
    hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_78, PredModuleName_81, PredName_82, PredFormArity_80, PredStatus_11, (MR_Integer) 0, Context_22, Origin_86, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[7])), &PredId_31, STATE_VARIABLE_ModuleInfo_0_47, &STATE_VARIABLE_ModuleInfo_1_58, STATE_VARIABLE_Specs_0_49, &STATE_VARIABLE_Specs_1_59);
  }
  else
  {
    PredId_31 = ((MR_Word) ((MR_hl_field(1, MaybePredId_84, 0))));
    STATE_VARIABLE_ModuleInfo_1_58 = STATE_VARIABLE_ModuleInfo_0_47;
    STATE_VARIABLE_Specs_1_59 = STATE_VARIABLE_Specs_0_49;
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_1_58, PredId_31, &STATE_VARIABLE_PredInfo_1_60);
  Var_61 = (MR_Word) (PredStatus_11);
  succeeded = (Var_61 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_PredInfo_1_60, &STATE_VARIABLE_PredInfo_2_63);
  else
    STATE_VARIABLE_PredInfo_2_63 = STATE_VARIABLE_PredInfo_1_60;
  hlds__make_hlds__add_foreign_proc__record_foreign_proc_seq_num_7_p_0(SeqNum_23, Context_22, PredId_31, STATE_VARIABLE_PredInfo_2_63, &STATE_VARIABLE_PredInfo_3_65, STATE_VARIABLE_ModuleInfo_1_58, &STATE_VARIABLE_ModuleInfo_2_66);
  libs__globals__get_maybe_thread_safe_2_p_0(Globals_26, &MaybeThreadSafe_90);
  ThreadSafe_91 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes0_15);
  switch (ThreadSafe_91) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      switch (MaybeThreadSafe_90) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 0, Attributes0_15, &Attributes_32);
          break;
        case (MR_Integer) 1:
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attributes0_15, &Attributes_32);
          break;
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      Attributes_32 = Attributes0_15;
      break;
  }
  Lang_33 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_32);
  hlds__make_hlds__add_foreign_proc__report_if_fproc_is_for_imported_pred_4_p_0(STATE_VARIABLE_PredInfo_3_65, Lang_33, Context_22, &ImportedFprocSpecs_34);
  hlds__make_hlds__add_foreign_proc__report_if_fproc_is_for_builtin_7_p_0(STATE_VARIABLE_ModuleInfo_2_66, STATE_VARIABLE_PredInfo_3_65, Lang_33, Context_22, &AllowedToAdd_35, STATE_VARIABLE_Specs_1_59, &STATE_VARIABLE_Specs_2_67);
  parse_tree__prog_data_foreign__pragma_get_vars_and_var_infos_3_p_0(PragmaVars_18, &ArgVars_36, &_ArgInfos_37);
  hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_6_p_0(PFSymNameArity_25, ProgVarSet_19, ArgVars_36, Lang_33, Context_22, &ArgListSpecs_38);
  StoppingSpecs_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ImportedFprocSpecs_34, ArgListSpecs_38);
  STATE_VARIABLE_Specs_3_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), StoppingSpecs_39, STATE_VARIABLE_Specs_2_67);
  hlds__make_hlds__add_foreign_proc__check_foreign_proc_purity_6_p_0(STATE_VARIABLE_PredInfo_3_65, Attributes_32, Lang_33, Context_22, STATE_VARIABLE_Specs_3_68, &STATE_VARIABLE_Specs_4_69);
  succeeded = (AllowedToAdd_35 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (StoppingSpecs_39 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_4_69;
    *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_2_66;
  }
  else
  {
    MR_Word MaybeProcId_42;

    hlds__make_hlds__add_foreign_proc__compute_intended_proc_id_7_p_0(STATE_VARIABLE_ModuleInfo_2_66, STATE_VARIABLE_PredInfo_3_65, PFSymNameArity_25, PragmaVars_18, Attributes_32, Context_22, &MaybeProcId_42);
    if (((MR_tag((MR_Word) MaybeProcId_42)) == (MR_Integer) 1))
    {
      MR_Word BadProcSpec_43 = ((MR_Word) ((MR_hl_field(1, MaybeProcId_42, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_50 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (BadProcSpec_43));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_4_69));
      }
      *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_2_66;
    }
    else
    {
      MR_Integer ProcId_44 = ((MR_Integer) ((MR_hl_field(0, MaybeProcId_42, 0))));
      MR_Word STATE_VARIABLE_Specs_6_71;
      MR_Word BackendForeignLangs_94;
      MR_Word PragmaForeignLanguage_95;

      hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0(STATE_VARIABLE_ModuleInfo_2_66, PredId_31, ProcId_44, PFSymNameArity_25, Attributes_32, PragmaVars_18, PragmaImpl_21, Context_22, STATE_VARIABLE_Specs_4_69, &STATE_VARIABLE_Specs_6_71);
      libs__globals__get_backend_foreign_languages_2_p_0(Globals_26, &BackendForeignLangs_94);
      PragmaForeignLanguage_95 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_32);
      succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (PragmaForeignLanguage_95)), BackendForeignLangs_94);
      if (succeeded)
      {
        MR_Word CurrentBackend_96;
        MR_Word MaybeForSpecificBackend_97;

        CurrentBackend_96 = libs__globals__lookup_current_backend_1_f_0(Globals_26);
        MaybeForSpecificBackend_97 = parse_tree__prog_data_foreign__get_for_specific_backend_1_f_0(Attributes_32);
        if ((MaybeForSpecificBackend_97 == (MR_Word) ((MR_Unsigned) 0U)))
          succeeded = MR_TRUE;
        else
        {
          MR_Word Var_101 = ((MR_Word) ((MR_hl_field(1, MaybeForSpecificBackend_97, 0))));

          succeeded = (CurrentBackend_96 == Var_101);
        }
        if (succeeded)
          hlds__make_hlds__add_foreign_proc__add_nonimported_foreign_proc_12_p_0(PredId_31, STATE_VARIABLE_PredInfo_3_65, ProcId_44, PFSymNameArity_25, Attributes_32, PragmaVars_18, PragmaImpl_21, Context_22, STATE_VARIABLE_ModuleInfo_2_66, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_Specs_6_71, STATE_VARIABLE_Specs_50);
        else
        {
          MR_Word RejectCause_46 = ((MR_Word) ((MR_hl_field(1, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_2[0])), 0))));

          hlds__make_hlds__add_foreign_proc__handle_wrong_backend_foreign_proc_9_p_0(ItemMercuryStatus_10, PredId_31, STATE_VARIABLE_PredInfo_3_65, RejectCause_46, Context_22, STATE_VARIABLE_ModuleInfo_2_66, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_Specs_6_71, STATE_VARIABLE_Specs_50);
        }
      }
      else
      {
        MR_Word RejectCause_104;

        {
          RejectCause_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, RejectCause_104, 0) = (MR_Box) ((MR_Unsigned) (PragmaForeignLanguage_95));
          MR_hl_field(1, RejectCause_104, 1) = ((MR_Box) (BackendForeignLangs_94));
        }
        hlds__make_hlds__add_foreign_proc__handle_wrong_backend_foreign_proc_9_p_0(ItemMercuryStatus_10, PredId_31, STATE_VARIABLE_PredInfo_3_65, RejectCause_104, Context_22, STATE_VARIABLE_ModuleInfo_2_66, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_Specs_6_71, STATE_VARIABLE_Specs_50);
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_String conv1_Name_6;

  succeeded = hlds__make_hlds__add_foreign_proc__var_is_unmentioned_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_Name_6);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv1_Name_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__prog_data_foreign__foreign_arg_name_mode_box_project_maybe_name_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word PFSymNameArity_14,
  MR_Word Attributes_15,
  MR_Word PragmaVars_16,
  MR_Word PragmaImpl_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded;
  MR_Word ArgInfos_20;
  MR_Word ArgNameModes_21;
  MR_Word PragmaForeignLanguage_22;
  MR_String LangStr_28;
  MR_String Code_29;
  MR_Word ForeignIdentifiers_31;
  MR_Word UnmentionedVars_32;
  MR_Word PredInfo_33;
  MR_Word PredMarkers_34;
  MR_Word Var_42;
  MR_Word STATE_VARIABLE_Specs_1_65;
  MR_Word Var_43;

  parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(PragmaVars_16, &ArgInfos_20);
  ArgNameModes_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[1]), ArgInfos_20);
  PragmaForeignLanguage_22 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_15);
  LangStr_28 = libs__globals__foreign_language_string_1_f_0(PragmaForeignLanguage_22);
  Code_29 = ((MR_String) ((MR_hl_field(0, PragmaImpl_17, 0))));
  backend_libs__foreign__foreign_code_to_identifiers_3_p_0(PragmaForeignLanguage_22, Code_29, &ForeignIdentifiers_31);
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_6[1]));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0_2));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_42, 3) = ((MR_Box) (ForeignIdentifiers_31));
  }
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42, ArgNameModes_21, &UnmentionedVars_32);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_11, PredId_12, &PredInfo_33);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_33, &PredMarkers_34);
  succeeded = (UnmentionedVars_32 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_43 = (MR_Integer) 30;
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(PredMarkers_34, Var_43);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word VarPieces_37;
    MR_String DoDoes_38;
    MR_Word Pieces_39;
    MR_Word Spec_41;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Var_61;
    MR_String Var_69;
    MR_Word Var_70;

    succeeded = (UnmentionedVars_32 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Var_69 = ((MR_String) ((MR_hl_field(1, UnmentionedVars_32, 0))));
      Var_70 = ((MR_Word) ((MR_hl_field(1, UnmentionedVars_32, 1))));
      succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;

      {
        Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_77, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
        MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_70));
      }
      Var_75 = parse_tree__error_spec__color_as_subject_1_f_0(Var_76);
      VarPieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[90])), Var_75);
      DoDoes_38 = (MR_String) "does";
    }
    else
    {
      MR_Word Var_83;

      Var_83 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), UnmentionedVars_32);
      VarPieces_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[94])), Var_83);
      DoDoes_38 = (MR_String) "do";
    }
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (LangStr_28));
    }
    {
      Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_51, 1) = ((MR_Box) (PFSymNameArity_14));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[103])));
    }
    {
      Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])));
      MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[99])));
      MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_46));
    }
    {
      Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_57, 1) = ((MR_Box) (DoDoes_38));
    }
    {
      Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[105])));
    }
    Var_55 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_56);
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[108])));
    }
    {
      Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[106])));
      MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_61));
    }
    Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_59);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarPieces_37, Var_54);
    Pieces_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_53);
    {
      Spec_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_41, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.warn_singletons_in_pragma_foreign_proc\'/10"));
      MR_hl_field(0, Spec_41, 1) = ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_foreign_proc_scalar_common_2[1])));
      MR_hl_field(0, Spec_41, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_41, 3) = ((MR_Box) (Context_18));
      MR_hl_field(0, Spec_41, 4) = ((MR_Box) (Pieces_39));
    }
    {
      STATE_VARIABLE_Specs_1_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_65, 0) = ((MR_Box) (Spec_41));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_65, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
    }
  }
  else
    STATE_VARIABLE_Specs_1_65 = STATE_VARIABLE_Specs_0_23;
  hlds__make_hlds__add_foreign_proc__pragma_foreign_proc_body_checks_9_p_0(ModuleInfo_11, PragmaForeignLanguage_22, Context_18, PFSymNameArity_14, PredId_12, ProcId_13, ForeignIdentifiers_31, STATE_VARIABLE_Specs_1_65, STATE_VARIABLE_Specs_24);
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__pragma_foreign_proc_body_checks_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Lang_11,
  MR_Word Context_12,
  MR_Word PFSymNameArity_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word BodyPieces_16,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_bool succeeded;
  MR_Word PredInfo_18;
  MR_Word PredStatus_19;
  MR_Word IsImported_20;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_14, &PredInfo_18);
  hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_18, &PredStatus_19);
  IsImported_20 = hlds__status__pred_status_is_imported_1_f_0(PredStatus_19);
  switch (IsImported_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_Specs_1_23;

        hlds__make_hlds__add_foreign_proc__check_fp_body_for_success_indicator_9_p_0(ModuleInfo_10, Lang_11, Context_12, PFSymNameArity_13, PredId_14, ProcId_15, BodyPieces_16, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_1_23);
        succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "return")), BodyPieces_16);
        if (succeeded)
        {
          MR_String LangStr_24;
          MR_Word PFSPiece_25;
          MR_Word Pieces_26;
          MR_Word Spec_28;
          MR_Word Var_30;
          MR_Word Var_33;
          MR_Word Var_34;
          MR_Word Var_39;
          MR_Word Var_40;
          MR_Word Var_41;
          MR_Word Var_43;
          MR_Word Var_48;
          MR_Word Var_49;

          LangStr_24 = libs__globals__foreign_language_string_1_f_0(Lang_11);
          {
            PFSPiece_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, PFSPiece_25, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(3, PFSPiece_25, 1) = ((MR_Box) (PFSymNameArity_13));
          }
          {
            Var_34 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_34, 0) = ((MR_Box) (LangStr_24));
          }
          {
            Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
            MR_hl_field(1, Var_33, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[123])));
          }
          {
            Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[109])));
            MR_hl_field(1, Var_30, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_41, 0) = ((MR_Box) (PFSPiece_25));
            MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_40 = parse_tree__error_spec__color_as_subject_1_f_0(Var_41);
          Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[129])));
          Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
          Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[125])), Var_48);
          Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_43);
          Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_39);
          {
            Spec_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.check_fp_body_for_return\'/6"));
            MR_hl_field(0, Spec_28, 1) = ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_foreign_proc_scalar_common_2[2])));
            MR_hl_field(0, Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_28, 3) = ((MR_Box) (Context_12));
            MR_hl_field(0, Spec_28, 4) = ((MR_Box) (Pieces_26));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_22 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_28));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_23));
          }
        }
        else
          *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_1_23;
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__check_fp_body_for_success_indicator_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Lang_11,
  MR_Word Context_12,
  MR_Word PFSymNameArity_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word BodyPieces_16,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word ProcInfo_18;
  MR_Word MaybeDeclDetism_19;

  hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_10, PredId_14, ProcId_15, &ProcInfo_18);
  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_18, &MaybeDeclDetism_19);
  if ((MaybeDeclDetism_19 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
  else
  {
    MR_Word Detism_20 = ((MR_Word) ((MR_hl_field(1, MaybeDeclDetism_19, 0))));

    switch (Detism_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 4:
      case (MR_Integer) 0:
      case (MR_Integer) 6:
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), BodyPieces_16);
          if (succeeded)
          {
            MR_String LangStr_22;
            MR_Word Pieces_23;
            MR_Word Spec_25;
            MR_Word Var_28;
            MR_Word Var_31;
            MR_Word Var_32;
            MR_Word Var_33;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_50;
            MR_Word Var_55;
            MR_Word Var_56;

            LangStr_22 = libs__globals__foreign_language_string_1_f_0(Lang_11);
            {
              Var_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_32, 0) = ((MR_Box) (LangStr_22));
            }
            {
              Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(3, Var_37, 1) = ((MR_Box) (PFSymNameArity_13));
            }
            {
              Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
              MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[110])));
              MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
            }
            {
              Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
              MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
            }
            {
              Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[109])));
              MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
            }
            Var_40 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[114])));
            Var_56 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[118])));
            Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
            Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[116])), Var_55);
            Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_50);
            Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_39);
            {
              Spec_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.check_fp_body_for_success_indicator\'/9"));
              MR_hl_field(0, Spec_25, 1) = ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_foreign_proc_scalar_common_2[2])));
              MR_hl_field(0, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, Spec_25, 3) = ((MR_Box) (Context_12));
              MR_hl_field(0, Spec_25, 4) = ((MR_Box) (Pieces_23));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_27 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_25));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
            }
          }
          else
            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
        }
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 1:
        {
          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), BodyPieces_16);
          if (succeeded)
            *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
          else
          {
            MR_Word Var_68;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_76;
            MR_Word Var_77;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_90;
            MR_Word Var_95;
            MR_Word Var_96;
            MR_String LangStr_108;
            MR_Word Pieces_109;
            MR_Word Spec_111;

            LangStr_108 = libs__globals__foreign_language_string_1_f_0(Lang_11);
            {
              Var_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_72, 0) = ((MR_Box) (LangStr_108));
            }
            {
              Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 17U));
              MR_hl_field(3, Var_77, 1) = ((MR_Box) (PFSymNameArity_13));
            }
            {
              Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
              MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_73, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[110])));
              MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_76));
            }
            {
              Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
              MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
            }
            {
              Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_68, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[109])));
              MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_71));
            }
            Var_80 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[120])));
            Var_96 = parse_tree__error_spec__color_as_inconsistent_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[122])));
            Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
            Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[116])), Var_95);
            Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_80, Var_90);
            Pieces_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_79);
            {
              Spec_111 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_111, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.check_fp_body_for_success_indicator\'/9"));
              MR_hl_field(0, Spec_111, 1) = ((MR_Box) (MR_mkword(2, &hlds__make_hlds__add_foreign_proc_scalar_common_2[2])));
              MR_hl_field(0, Spec_111, 2) = ((MR_Box) ((MR_Unsigned) 44U));
              MR_hl_field(0, Spec_111, 3) = ((MR_Box) (Context_12));
              MR_hl_field(0, Spec_111, 4) = ((MR_Box) (Pieces_109));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_27 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_111));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
            }
          }
        }
        break;
      case (MR_Integer) 7:
        *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
        break;
      case (MR_Integer) 3:
        *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
        break;
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_90;

  conv0_HeadVar__3_90 = hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__check_foreign_proc_arg_list__879__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_90));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_6_p_0(
  MR_Word PFSymNameArity_7,
  MR_Word ProgVarSet_8,
  MR_Word ArgVars_9,
  MR_Word Lang_10,
  MR_Word Context_11,
  MR_Word * Specs_12)
{
  MR_Word ArgVarBag0_13;
  MR_Word ArgVarBag_14;
  MR_Word MultiplyOccurringArgVars_15;

  mercury__bag__init_1_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[1]), &ArgVarBag0_13);
  mercury__bag__insert_list_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[1]), ArgVars_9, ArgVarBag0_13, &ArgVarBag_14);
  mercury__bag__to_list_only_duplicates_2_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[1]), ArgVarBag_14, &MultiplyOccurringArgVars_15);
  if ((MultiplyOccurringArgVars_15 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String LangStr_18;
    MR_Word Pieces1_19;
    MR_Word Pieces2_22;
    MR_Word Spec_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_93;
    MR_Word Var_94;

    LangStr_18 = libs__globals__foreign_language_string_1_f_0(Lang_10);
    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (LangStr_18));
    }
    {
      Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_38, 1) = ((MR_Box) (PFSymNameArity_7));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[88])));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
    }
    {
      Pieces1_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces1_19, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[86])));
      MR_hl_field(1, Pieces1_19, 1) = ((MR_Box) (Var_32));
    }
    Var_94 = ((MR_Word) ((MR_hl_field(1, MultiplyOccurringArgVars_15, 0))));
    Var_93 = ((MR_Word) ((MR_hl_field(1, MultiplyOccurringArgVars_15, 1))));
    if ((Var_93 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word BadVarPiece_21;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;

      BadVarPiece_21 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProgVarSet_8, Var_94);
      {
        Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_52, 0) = ((MR_Box) (BadVarPiece_21));
        MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_51 = parse_tree__error_spec__color_as_subject_1_f_0(Var_52);
      Var_54 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[92])));
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_54);
      Pieces2_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[90])), Var_50);
    }
    else
    {
      MR_Word BadVarPieces_26;
      MR_Word BadVarsPieces_27;
      MR_Word Var_60;
      MR_Word Var_68;
      MR_Word Var_69;

      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_60, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_6[0]));
        MR_hl_field(0, Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_6_p_0_1));
        MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_60, 3) = ((MR_Box) (ProgVarSet_8));
      }
      BadVarPieces_26 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[1]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, MultiplyOccurringArgVars_15);
      BadVarsPieces_27 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), BadVarPieces_26);
      Var_69 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[96])));
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadVarsPieces_27, Var_69);
      Pieces2_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[94])), Var_68);
    }
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces2_22, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[98])));
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_19, Var_83);
    {
      Spec_29 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_29, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.check_foreign_proc_arg_list\'/6"));
      MR_hl_field(0, Spec_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_29, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_29, 3) = ((MR_Box) (Context_11));
      MR_hl_field(0, Spec_29, 4) = ((MR_Box) (Var_82));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_29));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_purity_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Attributes_8,
  MR_Word Lang_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  MR_bool succeeded;
  MR_Word PredMarkers_12;

  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_7, &PredMarkers_12);
  succeeded = hlds__hlds_markers__marker_is_present_2_p_0(PredMarkers_12, (MR_Integer) 17);
  if (!(succeeded))
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(PredMarkers_12, (MR_Integer) 18);
  if (succeeded)
    *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
  else
  {
    MR_Word PredPurity_13;
    MR_Word ForeignAttributePurity_14;

    hlds__hlds_pred__pred_info_get_purity_2_p_0(PredInfo_7, &PredPurity_13);
    ForeignAttributePurity_14 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attributes_8);
    succeeded = (ForeignAttributePurity_14 == PredPurity_13);
    if (succeeded)
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
    else
    {
      MR_String LangStr_15;
      MR_Word PFSymNameArity_16;
      MR_Word PredOrFunc_17;
      MR_String ForeignAttributePurityStr_20;
      MR_String PredPurityStr_21;
      MR_Word Pieces_22;
      MR_Word Spec_23;
      MR_Word Var_28;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;

      LangStr_15 = libs__globals__foreign_language_string_1_f_0(Lang_9);
      hlds__hlds_pred__pred_info_get_pf_sym_name_arity_2_p_0(PredInfo_7, &PFSymNameArity_16);
      PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_16, 0))) & (MR_Integer) 1);
      parse_tree__parse_tree_out_misc__purity_name_2_p_0(ForeignAttributePurity_14, &ForeignAttributePurityStr_20);
      parse_tree__parse_tree_out_misc__purity_name_2_p_0(PredPurity_13, &PredPurityStr_21);
      {
        Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_32, 1) = ((MR_Box) (LangStr_15));
      }
      {
        Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 17U));
        MR_hl_field(3, Var_37, 1) = ((MR_Box) (PFSymNameArity_16));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[82])));
      }
      {
        Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_33, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])));
        MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_36));
      }
      {
        Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
        MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_33));
      }
      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_45, 1) = ((MR_Box) (ForeignAttributePurityStr_20));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[12])));
      }
      Var_43 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_44);
      {
        Var_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_55, 0) = ((MR_Box) ((MR_Unsigned) 31U));
        MR_hl_field(3, Var_55, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      }
      {
        Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
        MR_hl_field(1, Var_54, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[85])));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[83])));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_63, 1) = ((MR_Box) (PredPurityStr_21));
      }
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[46])));
      }
      Var_61 = parse_tree__error_spec__color_as_correct_1_f_0(Var_62);
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_60);
      Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_50);
      Pieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_42);
      {
        Spec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.check_foreign_proc_purity\'/6"));
        MR_hl_field(0, Spec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, Spec_23, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, Spec_23, 3) = ((MR_Box) (Context_10));
        MR_hl_field(0, Spec_23, 4) = ((MR_Box) (Pieces_22));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_25 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_23));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__report_if_fproc_is_for_builtin_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word Lang_10,
  MR_Word Context_11,
  MR_Word * AllowedToAdd_12,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_9);
  if (succeeded)
  {
    MR_Word Globals_14;
    MR_Word AllowDefnOfBuiltin_15;

    *AllowedToAdd_12 = (MR_Integer) 1;
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 762, &AllowDefnOfBuiltin_15);
    switch (AllowDefnOfBuiltin_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String LangStr_16;
          MR_Word SymName_17;
          MR_Word PredOrFunc_18;
          MR_Integer UserArityInt_19;
          MR_Word SNA_20;
          MR_Word Pieces_21;
          MR_Word Spec_22;
          MR_Word Var_26;
          MR_Word Var_27;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_36;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Var_39;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_Word Var_57;
          MR_Word Var_65;
          MR_Word Var_66;

          LangStr_16 = libs__globals__foreign_language_string_1_f_0(Lang_10);
          hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_9, &SymName_17);
          PredOrFunc_18 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
          Var_26 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_9);
          UserArityInt_19 = (MR_Integer) (Var_26);
          {
            SNA_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SNA_20, 0) = ((MR_Box) (SymName_17));
            MR_hl_field(0, SNA_20, 1) = ((MR_Box) (UserArityInt_19));
          }
          {
            Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_31, 1) = ((MR_Box) (LangStr_16));
          }
          {
            Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
            MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[28])));
          }
          {
            Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])));
            MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
          }
          {
            Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, Var_39, 1) = ((MR_Box) (SNA_20));
          }
          {
            Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
            MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
          {
            Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 31U));
            MR_hl_field(3, Var_43, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_18));
          }
          {
            Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
            MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[31])));
          }
          Var_52 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[33])));
          Var_66 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[39])));
          Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
          Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[37])), Var_65);
          Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_57);
          Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_51);
          Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, Var_41);
          Pieces_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_36);
          {
            Spec_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_22, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.report_if_fproc_is_for_builtin\'/7"));
            MR_hl_field(0, Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_22, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_22, 3) = ((MR_Box) (Context_11));
            MR_hl_field(0, Spec_22, 4) = ((MR_Box) (Pieces_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_24 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_22));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
        break;
    }
  }
  else
  {
    *AllowedToAdd_12 = (MR_Integer) 0;
    *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__report_if_fproc_is_for_imported_pred_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Lang_6,
  MR_Word Context_7,
  MR_Word * Specs_8)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_5);
  if (succeeded)
  {
    MR_String LangStr_9;
    MR_Word PredOrFunc_10;
    MR_Word PredSymName_11;
    MR_Integer UserArityInt_12;
    MR_Word SNA_13;
    MR_Word Pieces_14;
    MR_Word Spec_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_45;
    MR_Word Var_46;

    LangStr_9 = libs__globals__foreign_language_string_1_f_0(Lang_6);
    PredOrFunc_10 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
    hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_5, &PredSymName_11);
    Var_16 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_5);
    UserArityInt_12 = (MR_Integer) (Var_16);
    {
      SNA_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_13, 0) = ((MR_Box) (PredSymName_11));
      MR_hl_field(0, SNA_13, 1) = ((MR_Box) (UserArityInt_12));
    }
    {
      Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_21, 1) = ((MR_Box) (LangStr_9));
    }
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[10])));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) (SNA_13));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[12])));
    }
    Var_27 = parse_tree__error_spec__color_as_subject_1_f_0(Var_28);
    Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[16])));
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_46, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[26])));
    }
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_45);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[14])), Var_39);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_34);
    Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_26);
    {
      Spec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.report_if_fproc_is_for_imported_pred\'/4"));
      MR_hl_field(0, Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_15, 3) = ((MR_Box) (Context_7));
      MR_hl_field(0, Spec_15, 4) = ((MR_Box) (Pieces_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_15));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    *Specs_8 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__handle_wrong_backend_foreign_proc_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__globals__foreign_language_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__handle_wrong_backend_foreign_proc_9_p_0(
  MR_Word ItemMercuryStatus_10,
  MR_Word PredId_11,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word WrongBackendCause_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ItemMercuryStatus_10)) == (MR_Integer) 1);
  MR_Word STATE_VARIABLE_PredInfo_1_25;
  MR_Word Var_22;

  if (succeeded)
  {
    Var_22 = ((MR_Word) ((MR_hl_field(1, ItemMercuryStatus_10, 0))));
    succeeded = (Var_22 == (MR_Word) ((MR_Unsigned) 4U));
  }
  if (succeeded)
  {
    MR_Word MainPieces_31;
    MR_Word Pieces_34;
    MR_Word Spec_35;

    if ((WrongBackendCause_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_60;
      MR_Word Var_61;

      Var_61 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[60])));
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
      MainPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[58])), Var_60);
    }
    else
    {
      MR_Word PragmaLang_26 = ((MR_Unsigned) ((MR_hl_field(1, WrongBackendCause_13, 0))) & (MR_Integer) 3);
      MR_Word BackendForeignLangs_27 = ((MR_Word) ((MR_hl_field(1, WrongBackendCause_13, 1))));
      MR_String PragmaLangStr_28;
      MR_Word FrontPieces_29;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;

      PragmaLangStr_28 = libs__globals__foreign_language_string_1_f_0(PragmaLang_26);
      {
        Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_39, 1) = ((MR_Box) (PragmaLangStr_28));
      }
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[12])));
      }
      Var_37 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_38);
      FrontPieces_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[62])), Var_37);
      if ((BackendForeignLangs_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.report_bad_foreign_proc_in_dot_opt_file\'/4", (MR_String) "BackendForeignLangs = []");
          return;
        }
      else
      {
        MR_Word Var_73 = ((MR_Word) ((MR_hl_field(1, BackendForeignLangs_27, 1))));
        MR_Word Var_74 = ((MR_Word) ((MR_hl_field(1, BackendForeignLangs_27, 0))));

        if ((Var_73 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String BackendLangStr_30;
          MR_Word Var_43;
          MR_Word Var_45;
          MR_Word Var_46;
          MR_Word Var_47;
          MR_Word Var_48;

          BackendLangStr_30 = libs__globals__foreign_language_string_1_f_0(Var_74);
          {
            Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_48, 1) = ((MR_Box) (BackendLangStr_30));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[46])));
          }
          Var_46 = parse_tree__error_spec__color_as_correct_1_f_0(Var_47);
          Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
          Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[66])), Var_45);
          MainPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FrontPieces_29, Var_43);
        }
        else
        {
          MR_Word BackendLangStrs_32;
          MR_Word BackendLangsStr_33;
          MR_Word Var_55;
          MR_Word Var_57;

          BackendLangStrs_32 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[0]), BackendForeignLangs_27);
          BackendLangsStr_33 = parse_tree__error_spec__fixed_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[46])), BackendLangStrs_32);
          Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BackendLangsStr_33, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
          Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[72])), Var_57);
          MainPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FrontPieces_29, Var_55);
        }
      }
    }
    Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_31, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[80])));
    {
      Spec_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_35, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.report_bad_foreign_proc_in_dot_opt_file\'/4"));
      MR_hl_field(0, Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_35, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_35, 3) = ((MR_Box) (Context_14));
      MR_hl_field(0, Spec_35, 4) = ((MR_Box) (Pieces_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_21 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_35));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
    }
  }
  else
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
  hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, STATE_VARIABLE_PredInfo_0_17, &STATE_VARIABLE_PredInfo_1_25);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_11, STATE_VARIABLE_PredInfo_1_25, STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19);
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_nonimported_foreign_proc_12_p_0(
  MR_Word PredId_13,
  MR_Word STATE_VARIABLE_PredInfo_0_32,
  MR_Integer ProcId_15,
  MR_Word PFSymNameArity_16,
  MR_Word Attributes_17,
  MR_Word PragmaVars_18,
  MR_Word PragmaImpl_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word STATE_VARIABLE_Specs_0_35,
  MR_Word * STATE_VARIABLE_Specs_36)
{
  MR_Word PredOrFunc_23 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_16, 0))) & (MR_Integer) 1);
  MR_Word PredSymName_24 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_16, 1))));
  MR_Word PredModuleName_26;
  MR_String PredName_27;
  MR_Word ArgTypes_28;
  MR_Word Purity_29;
  MR_Word ClausesInfo1_30;
  MR_Word ClausesInfo_31;
  MR_Word STATE_VARIABLE_PredInfo_1_38;
  MR_Word STATE_VARIABLE_PredInfo_2_40;
  MR_Word VarSet0_41;
  MR_Word ExplicitVarTypes_42;
  MR_Word VarTable_43;
  MR_Word RttiVarMaps_44;
  MR_Word TVarNameMap_45;
  MR_Word HeadVars_46;
  MR_Word ClausesRep0_47;
  MR_Word ItemNumbers_48;
  MR_Word HadSyntaxError_50;
  MR_Word Globals_51;
  MR_Word Target_52;
  MR_Word NewLang_53;
  MR_Word PredFormArity_54;
  MR_Word PredInfo_55;
  MR_Word AllProcIds_56;
  MR_Word Clauses0_57;
  MR_Word Overridden_58;
  MR_Word Clauses1_59;
  MR_Word ArgVars_60;
  MR_Word ArgInfos_61;

  mdbcomp__sym_name__det_sym_name_get_module_name_and_name_3_p_0(PredSymName_24, &PredModuleName_26, &PredName_27);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_0_32, &ArgTypes_28);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(STATE_VARIABLE_PredInfo_0_32, &Purity_29);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_32, &ClausesInfo1_30);
  VarSet0_41 = ((MR_Word) ((MR_hl_field(0, ClausesInfo1_30, 0))));
  ExplicitVarTypes_42 = ((MR_Word) ((MR_hl_field(0, ClausesInfo1_30, 1))));
  VarTable_43 = ((MR_Word) ((MR_hl_field(0, ClausesInfo1_30, 2))));
  RttiVarMaps_44 = ((MR_Word) ((MR_hl_field(0, ClausesInfo1_30, 3))));
  TVarNameMap_45 = ((MR_Word) ((MR_hl_field(0, ClausesInfo1_30, 4))));
  HeadVars_46 = ((MR_Word) ((MR_hl_field(0, ClausesInfo1_30, 5))));
  ClausesRep0_47 = ((MR_Word) ((MR_hl_field(0, ClausesInfo1_30, 6))));
  ItemNumbers_48 = ((MR_Word) ((MR_hl_field(0, ClausesInfo1_30, 7))));
  HadSyntaxError_50 = ((MR_Unsigned) ((MR_hl_field(0, ClausesInfo1_30, 8))) & (MR_Integer) 1);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &Globals_51);
  libs__globals__get_target_2_p_0(Globals_51, &Target_52);
  NewLang_53 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_17);
  PredFormArity_54 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), ArgTypes_28);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_33, PredId_13, &PredInfo_55);
  AllProcIds_56 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_55);
  hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_47, &Clauses0_57);
  hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(Globals_51, PredOrFunc_23, PredModuleName_26, PredName_27, PredFormArity_54, Context_20, Target_52, NewLang_53, AllProcIds_56, ProcId_15, &Overridden_58, Clauses0_57, &Clauses1_59, STATE_VARIABLE_Specs_0_35, STATE_VARIABLE_Specs_36);
  parse_tree__prog_data_foreign__pragma_get_vars_and_var_infos_3_p_0(PragmaVars_18, &ArgVars_60, &ArgInfos_61);
  switch (Overridden_58) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word GoalInfo_62;
        MR_Word HeadVarList_63;
        MR_Word ForeignArgs_64;
        MR_Word Attributes_65;
        MR_Word GoalExpr_68;
        MR_Word HldsGoal0_69;
        MR_Word EmptyExplicitVarTypes_70;
        MR_Word EmptyRttiVarmaps_71;
        MR_Word HldsGoal_73;
        MR_Word VarSet_74;
        MR_Word Clause_77;
        MR_Word Clauses_78;
        MR_Word ClausesRep_79;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_86;
        MR_Word Var_88;
        MR_Word SharingAnalysis_92;
        MR_Word _Warnings_72;
        MR_Word Var_75;
        MR_Word Var_76;

        hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_20, Purity_29, &GoalInfo_62);
        HeadVarList_63 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[1]), HeadVars_46);
        hlds__hlds_goal__make_foreign_args_4_p_0(HeadVarList_63, ArgInfos_61, ArgTypes_28, &ForeignArgs_64);
        libs__globals__lookup_bool_option_3_p_0(Globals_51, (MR_Integer) 363, &SharingAnalysis_92);
        switch (SharingAnalysis_92) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Attributes_65 = Attributes_17;
            break;
          case (MR_Integer) 1:
            {
              MR_Word FormalUserSharing_93;
              MR_Word Var_95;

              Var_95 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(Attributes_17);
              parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0(ArgVars_60, HeadVarList_63, ArgTypes_28, Var_95, &FormalUserSharing_93);
              parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(FormalUserSharing_93, Attributes_17, &Attributes_65);
            }
            break;
        }
        {
          GoalExpr_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, GoalExpr_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, GoalExpr_68, 1) = ((MR_Box) (Attributes_65));
          MR_hl_field(3, GoalExpr_68, 2) = ((MR_Box) (PredId_13));
          MR_hl_field(3, GoalExpr_68, 3) = ((MR_Box) (ProcId_15));
          MR_hl_field(3, GoalExpr_68, 4) = ((MR_Box) (ForeignArgs_64));
          MR_hl_field(3, GoalExpr_68, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, GoalExpr_68, 6) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, GoalExpr_68, 7) = ((MR_Box) (PragmaImpl_19));
        }
        {
          HldsGoal0_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, HldsGoal0_69, 0) = ((MR_Box) (GoalExpr_68));
          MR_hl_field(0, HldsGoal0_69, 1) = ((MR_Box) (GoalInfo_62));
        }
        parse_tree__vartypes__init_vartypes_1_p_0(&EmptyExplicitVarTypes_70);
        hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_71);
        hlds__quantification__implicitly_quantify_clause_body_general_vs_12_p_0((MR_Integer) 0, (MR_Integer) 0, HeadVarList_63, &_Warnings_72, HldsGoal0_69, &HldsGoal_73, VarSet0_41, &VarSet_74, EmptyExplicitVarTypes_70, &Var_75, EmptyRttiVarmaps_71, &Var_76);
        {
          Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_84, 0) = ((MR_Box) (ProcId_15));
          MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_84));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = (MR_Box) ((MR_Unsigned) (NewLang_53));
        }
        Var_88 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
        {
          Clause_77 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Clause_77, 0) = ((MR_Box) (Var_83));
          MR_hl_field(0, Clause_77, 1) = ((MR_Box) (HldsGoal_73));
          MR_hl_field(0, Clause_77, 2) = ((MR_Box) (Var_86));
          MR_hl_field(0, Clause_77, 3) = ((MR_Box) (Context_20));
          MR_hl_field(0, Clause_77, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Clause_77, 5) = ((MR_Box) (Var_88));
          MR_hl_field(0, Clause_77, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Clauses_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Clauses_78, 0) = ((MR_Box) (Clause_77));
          MR_hl_field(1, Clauses_78, 1) = ((MR_Box) (Clauses1_59));
        }
        hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_78, &ClausesRep_79);
        {
          ClausesInfo_31 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ClausesInfo_31, 0) = ((MR_Box) (VarSet_74));
          MR_hl_field(0, ClausesInfo_31, 1) = ((MR_Box) (ExplicitVarTypes_42));
          MR_hl_field(0, ClausesInfo_31, 2) = ((MR_Box) (VarTable_43));
          MR_hl_field(0, ClausesInfo_31, 3) = ((MR_Box) (RttiVarMaps_44));
          MR_hl_field(0, ClausesInfo_31, 4) = ((MR_Box) (TVarNameMap_45));
          MR_hl_field(0, ClausesInfo_31, 5) = ((MR_Box) (HeadVars_46));
          MR_hl_field(0, ClausesInfo_31, 6) = ((MR_Box) (ClausesRep_79));
          MR_hl_field(0, ClausesInfo_31, 7) = ((MR_Box) (ItemNumbers_48));
          MR_hl_field(0, ClausesInfo_31, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (HadSyntaxError_50)));
        }
      }
      break;
    case (MR_Integer) 0:
      ClausesInfo_31 = ClausesInfo1_30;
      break;
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_31, STATE_VARIABLE_PredInfo_0_32, &STATE_VARIABLE_PredInfo_1_38);
  hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, STATE_VARIABLE_PredInfo_1_38, &STATE_VARIABLE_PredInfo_2_40);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_13, STATE_VARIABLE_PredInfo_2_40, STATE_VARIABLE_ModuleInfo_0_33, STATE_VARIABLE_ModuleInfo_34);
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__605__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(
  MR_Word Globals_16,
  MR_Word PredOrFunc_17,
  MR_Word PredModuleName_18,
  MR_String PredName_19,
  MR_Word PredFormArity_20,
  MR_Word NewContext_21,
  MR_Word Target_22,
  MR_Word NewLang_23,
  MR_Word AllProcIds_24,
  MR_Integer NewClauseProcId_25,
  MR_Word * Overridden_26,
  MR_Word Clauses0_27,
  MR_Word * Clauses_28,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  MR_bool succeeded;

  if ((Clauses0_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Clauses_28 = (MR_Word) ((MR_Unsigned) 0U);
    *Overridden_26 = (MR_Integer) 1;
    *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_0_50;
  }
  else
  {
    MR_Word FirstClause0_30 = ((MR_Word) ((MR_hl_field(1, Clauses0_27, 0))));
    MR_Word LaterClauses0_31 = ((MR_Word) ((MR_hl_field(1, Clauses0_27, 1))));
    MR_Word LaterOverridden_32;
    MR_Word LaterClauses_33;
    MR_Word ApplProcIds0_34;
    MR_Word FirstClauseLang_36;
    MR_Word FirstClauseContext_37;
    MR_Word STATE_VARIABLE_Specs_1_52;

    hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(Globals_16, PredOrFunc_17, PredModuleName_18, PredName_19, PredFormArity_20, NewContext_21, Target_22, NewLang_23, AllProcIds_24, NewClauseProcId_25, &LaterOverridden_32, LaterClauses0_31, &LaterClauses_33, STATE_VARIABLE_Specs_0_50, &STATE_VARIABLE_Specs_1_52);
    ApplProcIds0_34 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 0))));
    FirstClauseLang_36 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 2))));
    FirstClauseContext_37 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 3))));
    if ((FirstClauseLang_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ProcIds0_41;
      MR_Word ProcIds_42;

      switch (MR_tag((MR_Word) ApplProcIds0_34)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplProcIds0_34)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ProcIds0_41 = AllProcIds_24;
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15", (MR_String) "unify mode for user defined predicate");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          ProcIds0_41 = ((MR_Word) ((MR_hl_field(1, ApplProcIds0_34, 0))));
          break;
      }
      succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds0_41, ((MR_Box) (NewClauseProcId_25)), &ProcIds_42);
      if (succeeded)
        if ((ProcIds_42 == (MR_Word) ((MR_Unsigned) 0U)))
          *Clauses_28 = LaterClauses_33;
        else
        {
          MR_Word FirstClause_45;
          MR_Word Var_55;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Var_80;

          {
            Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_55, 0) = ((MR_Box) (ProcIds_42));
          }
          Var_75 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 1))));
          Var_76 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 2))));
          Var_77 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 3))));
          Var_78 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 4))));
          Var_79 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 5))));
          Var_80 = ((MR_Unsigned) ((MR_hl_field(0, FirstClause0_30, 6))) & (MR_Integer) 1);
          {
            FirstClause_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FirstClause_45, 0) = ((MR_Box) (Var_55));
            MR_hl_field(0, FirstClause_45, 1) = ((MR_Box) (Var_75));
            MR_hl_field(0, FirstClause_45, 2) = ((MR_Box) (Var_76));
            MR_hl_field(0, FirstClause_45, 3) = ((MR_Box) (Var_77));
            MR_hl_field(0, FirstClause_45, 4) = ((MR_Box) (Var_78));
            MR_hl_field(0, FirstClause_45, 5) = ((MR_Box) (Var_79));
            MR_hl_field(0, FirstClause_45, 6) = (MR_Box) ((MR_Unsigned) (Var_80));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Clauses_28 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (FirstClause_45));
            MR_hl_field(1, base, 1) = ((MR_Box) (LaterClauses_33));
          }
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Clauses_28 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FirstClause0_30));
          MR_hl_field(1, base, 1) = ((MR_Box) (LaterClauses_33));
        }
      *Overridden_26 = LaterOverridden_32;
      *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_1_52;
    }
    else
    {
      MR_Word OldLang_46 = ((MR_Unsigned) ((MR_hl_field(1, FirstClauseLang_36, 0))) & (MR_Integer) 3);
      MR_Word ProcIds0_73;
      MR_Word ProcIds_71;

      switch (MR_tag((MR_Word) ApplProcIds0_34)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplProcIds0_34)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15", (MR_String) "all_modes");
                return;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15", (MR_String) "unify modes");
                return;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          ProcIds0_73 = ((MR_Word) ((MR_hl_field(1, ApplProcIds0_34, 0))));
          break;
      }
      succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds0_73, ((MR_Box) (NewClauseProcId_25)), &ProcIds_71);
      if (succeeded)
      {
        MR_Word PreferNewForeignLang_47;

        PreferNewForeignLang_47 = parse_tree__prog_foreign__prefer_foreign_language_4_f_0(Globals_16, Target_22, OldLang_46, NewLang_23);
        switch (PreferNewForeignLang_47) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Clauses_28 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (FirstClause0_30));
                MR_hl_field(1, base, 1) = ((MR_Box) (LaterClauses_33));
              }
              *Overridden_26 = (MR_Integer) 0;
              succeeded = (OldLang_46 == NewLang_23);
              if (succeeded)
                hlds__make_hlds__add_foreign_proc__report_duplicate_foreign_proc_9_p_0(PredOrFunc_17, PredModuleName_18, PredName_19, PredFormArity_20, OldLang_46, FirstClauseContext_37, NewContext_21, STATE_VARIABLE_Specs_1_52, STATE_VARIABLE_Specs_51);
              else
                *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_1_52;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_61;

              if ((ProcIds_71 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Clauses_28 = LaterClauses_33;
                *Overridden_26 = LaterOverridden_32;
              }
              else
              {
                MR_Word Var_60;
                MR_Word FirstClause_66;
                MR_Word Var_82;
                MR_Word Var_83;
                MR_Word Var_84;
                MR_Word Var_85;
                MR_Word Var_86;
                MR_Word Var_87;

                {
                  Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_60, 0) = ((MR_Box) (ProcIds_71));
                }
                Var_82 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 1))));
                Var_83 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 2))));
                Var_84 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 3))));
                Var_85 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 4))));
                Var_86 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 5))));
                Var_87 = ((MR_Unsigned) ((MR_hl_field(0, FirstClause0_30, 6))) & (MR_Integer) 1);
                {
                  FirstClause_66 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, FirstClause_66, 0) = ((MR_Box) (Var_60));
                  MR_hl_field(0, FirstClause_66, 1) = ((MR_Box) (Var_82));
                  MR_hl_field(0, FirstClause_66, 2) = ((MR_Box) (Var_83));
                  MR_hl_field(0, FirstClause_66, 3) = ((MR_Box) (Var_84));
                  MR_hl_field(0, FirstClause_66, 4) = ((MR_Box) (Var_85));
                  MR_hl_field(0, FirstClause_66, 5) = ((MR_Box) (Var_86));
                  MR_hl_field(0, FirstClause_66, 6) = (MR_Box) ((MR_Unsigned) (Var_87));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Clauses_28 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (FirstClause_66));
                  MR_hl_field(1, base, 1) = ((MR_Box) (LaterClauses_33));
                }
                *Overridden_26 = LaterOverridden_32;
              }
              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_61, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[0]));
                MR_hl_field(0, Var_61, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1));
                MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_61, 3) = ((MR_Box) (LaterOverridden_32));
                MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15", (MR_String) "inconsistent old foreign_procs");
              *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_1_52;
            }
            break;
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Clauses_28 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FirstClause0_30));
          MR_hl_field(1, base, 1) = ((MR_Box) (LaterClauses_33));
        }
        *Overridden_26 = LaterOverridden_32;
        *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_1_52;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__report_duplicate_foreign_proc_9_p_0(
  MR_Word PredOrFunc_10,
  MR_Word PredModuleName_11,
  MR_String PredName_12,
  MR_Word PredFormArity_13,
  MR_Word Lang_14,
  MR_Word FirstClauseContext_15,
  MR_Word NewContext_16,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_Word PredSymName_18;
  MR_Word PFSymNameArity_19;
  MR_String LangStr_20;
  MR_Word PiecesA_21;
  MR_Word MsgA_23;
  MR_Word MsgB_24;
  MR_Word Spec_25;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_62;
  MR_Word Var_63;

  {
    PredSymName_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredSymName_18, 0) = ((MR_Box) (PredModuleName_11));
    MR_hl_field(1, PredSymName_18, 1) = ((MR_Box) (PredName_12));
  }
  {
    PFSymNameArity_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_19, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_10));
    MR_hl_field(0, PFSymNameArity_19, 1) = ((MR_Box) (PredSymName_18));
    MR_hl_field(0, PFSymNameArity_19, 2) = ((MR_Box) (PredFormArity_13));
  }
  LangStr_20 = libs__globals__foreign_language_string_1_f_0(Lang_14);
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (LangStr_20));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[50])));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[48])));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  Var_33 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_34);
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, Var_47, 1) = ((MR_Box) (PFSymNameArity_19));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[52])));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[51])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_43);
  PiecesA_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[47])), Var_32);
  {
    MsgA_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MsgA_23, 0) = ((MR_Box) (NewContext_16));
    MR_hl_field(0, MsgA_23, 1) = ((MR_Box) (PiecesA_21));
  }
  {
    MsgB_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MsgB_24, 0) = ((MR_Box) (FirstClauseContext_15));
    MR_hl_field(0, MsgB_24, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[54])));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (MsgB_24));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (MsgA_23));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Spec_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.report_duplicate_foreign_proc\'/9"));
    MR_hl_field(2, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(2, Spec_25, 3) = ((MR_Box) (Var_62));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_27 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_25));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__compute_intended_proc_id_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PredInfo_9,
  MR_Word PFSymNameArity_10,
  MR_Word PragmaVars_11,
  MR_Word Attributes_12,
  MR_Word Context_13,
  MR_Word * MaybeProcId_14)
{
  MR_bool succeeded;
  MR_Word Procs_15;
  MR_Word ExistingProcs_16;
  MR_Word Modes_17;
  MR_Integer ProcId_18;

  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_9, &Procs_15);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_15, &ExistingProcs_16);
  parse_tree__prog_data_foreign__pragma_get_modes_2_p_0(PragmaVars_11, &Modes_17);
  succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(ModuleInfo_8, ExistingProcs_16, Modes_17, &ProcId_18);
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeProcId_14 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ProcId_18));
    }
  else
  {
    MR_Word Spec_19;
    MR_Word Lang_22;
    MR_String LangStr_23;
    MR_Word PredOrFunc_24;
    MR_Word PredSymName_25;
    MR_Word PredFormArity_26;
    MR_Word UserArity_27;
    MR_Integer UserArityInt_28;
    MR_Word SNA_29;
    MR_Word Pieces_30;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;

    Lang_22 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_12);
    LangStr_23 = libs__globals__foreign_language_string_1_f_0(Lang_22);
    PredOrFunc_24 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_10, 0))) & (MR_Integer) 1);
    PredSymName_25 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_10, 1))));
    PredFormArity_26 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_10, 2))));
    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_24, &UserArity_27, PredFormArity_26);
    UserArityInt_28 = (MR_Integer) (UserArity_27);
    {
      SNA_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_29, 0) = ((MR_Box) (PredSymName_25));
      MR_hl_field(0, SNA_29, 1) = ((MR_Box) (UserArityInt_28));
    }
    {
      Var_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_35, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_35, 1) = ((MR_Box) (LangStr_23));
    }
    {
      Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(1, Var_34, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[42])));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[40])));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_34));
    }
    Var_41 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[44])));
    {
      Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_51, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_24));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[45])));
      MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
    }
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) (SNA_29));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[46])));
    }
    Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
    Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
    Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, Var_53);
    Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_46);
    Pieces_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_40);
    {
      Spec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_19, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.add_foreign_proc.report_fproc_for_undeclared_mode\'/3"));
      MR_hl_field(0, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_19, 3) = ((MR_Box) (Context_13));
      MR_hl_field(0, Spec_19, 4) = ((MR_Box) (Pieces_30));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeProcId_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_19));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__record_foreign_proc_seq_num_7_p_0(
  MR_Word SeqNum_8,
  MR_Word Context_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_PredInfo_0_17,
  MR_Word * STATE_VARIABLE_PredInfo_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_19,
  MR_Word * STATE_VARIABLE_ModuleInfo_20)
{
  MR_Word ClausesInfo0_13;
  MR_Word ItemNumbers0_14;
  MR_Word ItemNumbers_15;
  MR_Word ClausesInfo_16;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Unsigned packed_word_0;

  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_17, &ClausesInfo0_13);
  ItemNumbers0_14 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_13, 7))));
  hlds__hlds_clauses__add_clause_item_number_5_p_0(SeqNum_8, Context_9, (MR_Integer) 1, ItemNumbers0_14, &ItemNumbers_15);
  Var_31 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_13, 0))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_13, 1))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_13, 2))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_13, 3))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_13, 4))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_13, 5))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_13, 6))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, ClausesInfo0_13, 8)));
  {
    ClausesInfo_16 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClausesInfo_16, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, ClausesInfo_16, 1) = ((MR_Box) (Var_32));
    MR_hl_field(0, ClausesInfo_16, 2) = ((MR_Box) (Var_33));
    MR_hl_field(0, ClausesInfo_16, 3) = ((MR_Box) (Var_34));
    MR_hl_field(0, ClausesInfo_16, 4) = ((MR_Box) (Var_35));
    MR_hl_field(0, ClausesInfo_16, 5) = ((MR_Box) (Var_36));
    MR_hl_field(0, ClausesInfo_16, 6) = ((MR_Box) (Var_37));
    MR_hl_field(0, ClausesInfo_16, 7) = ((MR_Box) (ItemNumbers_15));
    MR_hl_field(0, ClausesInfo_16, 8) = (MR_Box) (packed_word_0);
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_16, STATE_VARIABLE_PredInfo_0_17, STATE_VARIABLE_PredInfo_18);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_10, *STATE_VARIABLE_PredInfo_18, STATE_VARIABLE_ModuleInfo_0_19, STATE_VARIABLE_ModuleInfo_20);
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_procs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_48;
  MR_Word conv0_STATE_VARIABLE_Specs_50;

  hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_48, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_50);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_48));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_50));
}

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_procs_6_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word ImsSubList_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ImsSubLists_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ItemMercuryStatus_19 = ((MR_Word) ((MR_hl_field(0, ImsSubList_15, 0))));
      MR_Word PragmaFPInfos_20 = ((MR_Word) ((MR_hl_field(0, ImsSubList_15, 1))));
      MR_Word PredStatus_21;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_ModuleInfo_1_27;
      MR_Word STATE_VARIABLE_Specs_1_28;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_1_27;
      MR_Box conv2_STATE_VARIABLE_Specs_1_28;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      hlds__status__item_mercury_status_to_pred_status_2_p_0(ItemMercuryStatus_19, &PredStatus_21);
      {
        Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_3[0]));
        MR_hl_field(0, Var_26, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_foreign_procs_6_p_0_1));
        MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_26, 3) = ((MR_Box) (ProgressStream_1));
        MR_hl_field(0, Var_26, 4) = ((MR_Box) (ItemMercuryStatus_19));
        MR_hl_field(0, Var_26, 5) = ((MR_Box) (PredStatus_21));
      }
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[0]), Var_26, PragmaFPInfos_20, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3)), &conv3_STATE_VARIABLE_ModuleInfo_1_27, ((MR_Box) (STATE_VARIABLE_Specs_0_5)), &conv2_STATE_VARIABLE_Specs_1_28);
      STATE_VARIABLE_ModuleInfo_1_27 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_1_27));
      STATE_VARIABLE_Specs_1_28 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_1_28));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsSubLists_16;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_1_27;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_1_28;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____maybe_allowed_to_add_foreign_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_foreign_proc____Unify____maybe_allowed_to_add_foreign_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____maybe_allowed_to_add_foreign_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_foreign_proc____Compare____maybe_allowed_to_add_foreign_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____maybe_for_this_backend_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_foreign_proc____Unify____maybe_for_this_backend_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____maybe_for_this_backend_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_foreign_proc____Compare____maybe_for_this_backend_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____wrong_backend_cause_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_foreign_proc____Unify____wrong_backend_cause_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____wrong_backend_cause_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_foreign_proc____Compare____wrong_backend_cause_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__add_foreign_proc__init(void)
{
}

void mercury__hlds__make_hlds__add_foreign_proc__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_maybe_allowed_to_add_foreign_proc_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_maybe_for_this_backend_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_wrong_backend_cause_0);
}

void mercury__hlds__make_hlds__add_foreign_proc__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_foreign_proc__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_foreign_proc.
