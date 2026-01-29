/*
** Automatically generated from `add_foreign_proc.m'
** by the Mercury compiler,
** version rotd-2026-01-29
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
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0;

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

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__830__1_2_p_0(
  MR_Word LaterOverridden_32,
  MR_Word HeadVar__2_72);

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__check_foreign_proc_arg_list__687__1_2_f_0(
  MR_Word PVarSet_13,
  MR_Word HeadVar__2_110);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__check_foreign_proc_arg_list__664__1_2_p_0(
  MR_Word LambdaHeadVar__1_41,
  MR_Word * LambdaHeadVar__2_42);

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
hlds__make_hlds__add_foreign_proc__add_nonimported_foreign_proc_13_p_0(
  MR_Word PredId_14,
  MR_Word STATE_VARIABLE_PredInfo_0_35,
  MR_Integer ProcId_16,
  MR_Word PFSymNameArity_17,
  MR_Word Attributes_18,
  MR_Word ProgVarSet_19,
  MR_Word PragmaVars_20,
  MR_Word PragmaImpl_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_19_p_0(
  MR_Word ModuleInfo_20,
  MR_Word PredOrFunc_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word PredId_24,
  MR_Integer ProcId_25,
  MR_Word AllProcIds_26,
  MR_Word PVarSet_27,
  MR_Word PragmaVars_28,
  MR_Word OrigArgTypes_29,
  MR_Word Purity_30,
  MR_Word Attributes0_31,
  MR_Word Markers_32,
  MR_Word Context_33,
  MR_Word PragmaImpl_34,
  MR_Word STATE_VARIABLE_ClausesInfo_0_86,
  MR_Word * STATE_VARIABLE_ClausesInfo_87,
  MR_Word STATE_VARIABLE_Specs_0_88,
  MR_Word * STATE_VARIABLE_Specs_89);

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
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(
  MR_Word Globals_7,
  MR_Word ActualHeadVars_8,
  MR_Word FormalHeadVars_9,
  MR_Word FormalTypes_10,
  MR_Word STATE_VARIABLE_Attributes_0_14,
  MR_Word * STATE_VARIABLE_Attributes_15);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_8_p_0(
  MR_Word PredOrFunc_9,
  MR_Word PredModuleName_10,
  MR_String PredName_11,
  MR_Word PredFormArity_12,
  MR_Word PVarSet_13,
  MR_Word ArgVars_14,
  MR_Word Context_15,
  MR_Word * Specs_16);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__compute_intended_proc_id_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInfo_8,
  MR_Word PFSymNameArity_9,
  MR_Word PragmaVars_10,
  MR_Word Context_11,
  MR_Word * MaybeProcId_12);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__is_foreign_proc_for_this_backend_3_p_0(
  MR_Word Globals_4,
  MR_Word Attributes_5,
  MR_Word * ForThisBackend_6);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__report_if_fproc_is_for_imported_pred_3_p_0(
  MR_Word PredInfo_4,
  MR_Word Context_5,
  MR_Word * Specs_6);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_procs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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


static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[88][2];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[4][3];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[1][1];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[4][5];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_6[1][6];




static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[88][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations are allowed only for predicates and"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "functions defined in the current module, but"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "imported."))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "undeclared mode"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[23]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "it is not for the current grade."))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "whose backend attribute states that"))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[26])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration in a .opt file"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration in a .opt file for a foreign language,"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[34]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which differs from"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the only language supported by the current backend,"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which are"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "languages supported by the current backend,"))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "which is not one of the"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for the current grade."))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "You will need to rebuild this file"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "was generated for a different grade."))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "This indicates that the .opt file"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "you cannot redefine"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "a builtin"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[58]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: foreign clause for"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has purity"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but that"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has been declared"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[70]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "occurs more than once"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "variables"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "each occur more than once"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the argument list."))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[82]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[7])))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "for this mode of"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The first one was here."))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[86]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[3])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__handle_wrong_backend_foreign_proc_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[1][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Unsigned) 0U)) },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[1][11] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_foreign_proc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0) }
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

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__830__1_2_p_0(
  MR_Word LaterOverridden_32,
  MR_Word HeadVar__2_72)
{
  MR_bool succeeded = (LaterOverridden_32 == HeadVar__2_72);

  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__check_foreign_proc_arg_list__687__1_2_f_0(
  MR_Word PVarSet_13,
  MR_Word HeadVar__2_110)
{
  MR_Word HeadVar__3_111;

  HeadVar__3_111 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PVarSet_13, HeadVar__2_110);
  return HeadVar__3_111;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__check_foreign_proc_arg_list__664__1_2_p_0(
  MR_Word LambdaHeadVar__1_41,
  MR_Word * LambdaHeadVar__2_42)
{
  MR_bool succeeded;
  MR_Integer Occurrences_22;

  *LambdaHeadVar__2_42 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_41, 0))));
  Occurrences_22 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_41, 1))));
  succeeded = (Occurrences_22 > (MR_Integer) 1);
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

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ItemMercuryStatus_10,
  MR_Word PredStatus_11,
  MR_Word FPInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_41,
  MR_Word * STATE_VARIABLE_ModuleInfo_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
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
  MR_Word ImportedFprocSpecs_33;
  MR_Word STATE_VARIABLE_ModuleInfo_1_52;
  MR_Word STATE_VARIABLE_Specs_1_53;
  MR_Word STATE_VARIABLE_PredInfo_1_54;
  MR_Word STATE_VARIABLE_PredInfo_2_57;
  MR_Word STATE_VARIABLE_PredInfo_3_59;
  MR_Word STATE_VARIABLE_ModuleInfo_2_60;
  MR_Word PredOrFunc_70;
  MR_Word PredSymName_71;
  MR_Word PredFormArity_72;
  MR_Word PredModuleName_73;
  MR_String PredName_74;
  MR_Word PredTable0_75;
  MR_Word MaybePredId_76;
  MR_Word ClausesInfo0_82;
  MR_Word ItemNumbers0_83;
  MR_Word ItemNumbers_84;
  MR_Word ClausesInfo_85;
  MR_Word MaybeThreadSafe_106;
  MR_Word ThreadSafe_107;
  MR_Word Var_55;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Unsigned packed_word_2;

  PredFormArity_24 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), PragmaVars_18);
  {
    PFSymNameArity_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_25, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
    MR_hl_field(0, PFSymNameArity_25, 1) = ((MR_Box) (PredSymName_16));
    MR_hl_field(0, PFSymNameArity_25, 2) = ((MR_Box) (PredFormArity_24));
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_41, &Globals_26);
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
  PredOrFunc_70 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_25, 0))) & (MR_Integer) 1);
  PredSymName_71 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_25, 1))));
  PredFormArity_72 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_25, 2))));
  mdbcomp__sym_name__det_sym_name_get_module_name_and_name_3_p_0(PredSymName_71, &PredModuleName_73, &PredName_74);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_41, &PredTable0_75);
  hlds__pred_table__predicate_table_search_pf_fqm_n_a_6_p_0(PredTable0_75, PredOrFunc_70, PredModuleName_73, PredName_74, PredFormArity_72, &MaybePredId_76);
  if ((MaybePredId_76 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word UserArity_77;
    MR_Word Origin_78;
    MR_Word Var_79;

    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_70, &UserArity_77, PredFormArity_72);
    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_70));
      MR_hl_field(0, Var_79, 1) = ((MR_Box) (PredSymName_71));
      MR_hl_field(0, Var_79, 2) = ((MR_Box) (UserArity_77));
    }
    {
      Origin_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Origin_78, 0) = ((MR_Box) (Var_79));
    }
    hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_70, PredModuleName_73, PredName_74, PredFormArity_72, PredStatus_11, (MR_Integer) 0, Context_22, Origin_78, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[7])), &PredId_31, STATE_VARIABLE_ModuleInfo_0_41, &STATE_VARIABLE_ModuleInfo_1_52, STATE_VARIABLE_Specs_0_43, &STATE_VARIABLE_Specs_1_53);
  }
  else
  {
    PredId_31 = ((MR_Word) ((MR_hl_field(1, MaybePredId_76, 0))));
    STATE_VARIABLE_ModuleInfo_1_52 = STATE_VARIABLE_ModuleInfo_0_41;
    STATE_VARIABLE_Specs_1_53 = STATE_VARIABLE_Specs_0_43;
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_1_52, PredId_31, &STATE_VARIABLE_PredInfo_1_54);
  Var_55 = (MR_Word) (PredStatus_11);
  succeeded = (Var_55 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_PredInfo_1_54, &STATE_VARIABLE_PredInfo_2_57);
  else
    STATE_VARIABLE_PredInfo_2_57 = STATE_VARIABLE_PredInfo_1_54;
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_2_57, &ClausesInfo0_82);
  ItemNumbers0_83 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_82, 7))));
  hlds__hlds_clauses__add_clause_item_number_5_p_0(SeqNum_23, Context_22, (MR_Integer) 1, ItemNumbers0_83, &ItemNumbers_84);
  Var_96 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_82, 0))));
  Var_97 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_82, 1))));
  Var_98 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_82, 2))));
  Var_99 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_82, 3))));
  Var_100 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_82, 4))));
  Var_101 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_82, 5))));
  Var_102 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_82, 6))));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, ClausesInfo0_82, 8)));
  {
    ClausesInfo_85 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClausesInfo_85, 0) = ((MR_Box) (Var_96));
    MR_hl_field(0, ClausesInfo_85, 1) = ((MR_Box) (Var_97));
    MR_hl_field(0, ClausesInfo_85, 2) = ((MR_Box) (Var_98));
    MR_hl_field(0, ClausesInfo_85, 3) = ((MR_Box) (Var_99));
    MR_hl_field(0, ClausesInfo_85, 4) = ((MR_Box) (Var_100));
    MR_hl_field(0, ClausesInfo_85, 5) = ((MR_Box) (Var_101));
    MR_hl_field(0, ClausesInfo_85, 6) = ((MR_Box) (Var_102));
    MR_hl_field(0, ClausesInfo_85, 7) = ((MR_Box) (ItemNumbers_84));
    MR_hl_field(0, ClausesInfo_85, 8) = (MR_Box) (packed_word_2);
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_85, STATE_VARIABLE_PredInfo_2_57, &STATE_VARIABLE_PredInfo_3_59);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_31, STATE_VARIABLE_PredInfo_3_59, STATE_VARIABLE_ModuleInfo_1_52, &STATE_VARIABLE_ModuleInfo_2_60);
  libs__globals__get_maybe_thread_safe_2_p_0(Globals_26, &MaybeThreadSafe_106);
  ThreadSafe_107 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes0_15);
  switch (ThreadSafe_107) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      switch (MaybeThreadSafe_106) {
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
  hlds__make_hlds__add_foreign_proc__report_if_fproc_is_for_imported_pred_3_p_0(STATE_VARIABLE_PredInfo_3_59, Context_22, &ImportedFprocSpecs_33);
  if ((ImportedFprocSpecs_33 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeProcId_36;

    hlds__make_hlds__add_foreign_proc__compute_intended_proc_id_6_p_0(STATE_VARIABLE_ModuleInfo_2_60, STATE_VARIABLE_PredInfo_3_59, PFSymNameArity_25, PragmaVars_18, Context_22, &MaybeProcId_36);
    if (((MR_tag((MR_Word) MaybeProcId_36)) == (MR_Integer) 1))
    {
      MR_Word BadProcSpec_37 = ((MR_Word) ((MR_hl_field(1, MaybeProcId_36, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_44 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (BadProcSpec_37));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_53));
      }
      *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_2_60;
    }
    else
    {
      MR_Integer ProcId_38 = ((MR_Integer) ((MR_hl_field(0, MaybeProcId_36, 0))));
      MR_Word ForThisBackend_39;
      MR_Word STATE_VARIABLE_Specs_4_63;

      hlds__make_hlds__add_foreign_proc__check_for_warnings_in_foreign_proc_10_p_0(STATE_VARIABLE_ModuleInfo_2_60, PredId_31, ProcId_38, PFSymNameArity_25, Attributes_32, PragmaVars_18, PragmaImpl_21, Context_22, STATE_VARIABLE_Specs_1_53, &STATE_VARIABLE_Specs_4_63);
      hlds__make_hlds__add_foreign_proc__is_foreign_proc_for_this_backend_3_p_0(Globals_26, Attributes_32, &ForThisBackend_39);
      if ((ForThisBackend_39 == (MR_Word) ((MR_Unsigned) 0U)))
        hlds__make_hlds__add_foreign_proc__add_nonimported_foreign_proc_13_p_0(PredId_31, STATE_VARIABLE_PredInfo_3_59, ProcId_38, PFSymNameArity_25, Attributes_32, ProgVarSet_19, PragmaVars_18, PragmaImpl_21, Context_22, STATE_VARIABLE_ModuleInfo_2_60, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_Specs_4_63, STATE_VARIABLE_Specs_44);
      else
      {
        MR_Word RejectCause_40 = ((MR_Word) ((MR_hl_field(1, ForThisBackend_39, 0))));

        hlds__make_hlds__add_foreign_proc__handle_wrong_backend_foreign_proc_9_p_0(ItemMercuryStatus_10, PredId_31, STATE_VARIABLE_PredInfo_3_59, RejectCause_40, Context_22, STATE_VARIABLE_ModuleInfo_2_60, STATE_VARIABLE_ModuleInfo_42, STATE_VARIABLE_Specs_4_63, STATE_VARIABLE_Specs_44);
      }
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ImportedFprocSpecs_33, STATE_VARIABLE_Specs_1_53);
    *STATE_VARIABLE_ModuleInfo_42 = STATE_VARIABLE_ModuleInfo_2_60;
  }
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
      MainPieces_31 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[32]));
    else
    {
      MR_Word PragmaLang_26 = ((MR_Unsigned) ((MR_hl_field(1, WrongBackendCause_13, 0))) & (MR_Integer) 3);
      MR_Word BackendForeignLangs_27 = ((MR_Word) ((MR_hl_field(1, WrongBackendCause_13, 1))));
      MR_String PragmaLangStr_28;
      MR_Word FrontPieces_29;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_41;
      MR_Word Var_42;

      PragmaLangStr_28 = libs__globals__foreign_language_string_1_f_0(PragmaLang_26);
      {
        Var_42 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_42, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_42, 1) = ((MR_Box) (PragmaLangStr_28));
      }
      {
        Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
        MR_hl_field(1, Var_41, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[35])));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[33])));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
        MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_39));
      }
      {
        FrontPieces_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FrontPieces_29, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])));
        MR_hl_field(1, FrontPieces_29, 1) = ((MR_Box) (Var_37));
      }
      if ((BackendForeignLangs_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.report_bad_foreign_proc_in_dot_opt_file\'/4", (MR_String) "BackendForeignLangs = []");
          return;
        }
      else
      {
        MR_Word Var_70 = ((MR_Word) ((MR_hl_field(1, BackendForeignLangs_27, 1))));
        MR_Word Var_71 = ((MR_Word) ((MR_hl_field(1, BackendForeignLangs_27, 0))));

        if ((Var_70 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String BackendLangStr_30;
          MR_Word Var_46;
          MR_Word Var_48;
          MR_Word Var_50;
          MR_Word Var_52;
          MR_Word Var_53;

          BackendLangStr_30 = libs__globals__foreign_language_string_1_f_0(Var_71);
          {
            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 9U));
            MR_hl_field(3, Var_53, 1) = ((MR_Box) (BackendLangStr_30));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[39])));
          }
          {
            Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[38])));
            MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_52));
          }
          {
            Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[37])));
            MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[36])));
            MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_48));
          }
          MainPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FrontPieces_29, Var_46);
        }
        else
        {
          MR_Word BackendLangStrs_32;
          MR_Word BackendLangsStr_33;
          MR_Word Var_57;
          MR_Word Var_59;

          BackendLangStrs_32 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[3]), BackendForeignLangs_27);
          BackendLangsStr_33 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", BackendLangStrs_32);
          Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BackendLangsStr_33, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[39])));
          Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[45])), Var_59);
          MainPieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FrontPieces_29, Var_57);
        }
      }
    }
    Pieces_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_31, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[53])));
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
  MR_Word ArgInfos_20;
  MR_Word ArgNameModes_21;
  MR_Word PragmaForeignLanguage_22;

  parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(PragmaVars_16, &ArgInfos_20);
  ArgNameModes_21 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[2]), ArgInfos_20);
  PragmaForeignLanguage_22 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_15);
  hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(ModuleInfo_11, PragmaImpl_17, PragmaForeignLanguage_22, ArgNameModes_21, Context_18, PFSymNameArity_14, PredId_12, ProcId_13, STATE_VARIABLE_Specs_0_23, STATE_VARIABLE_Specs_24);
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_nonimported_foreign_proc_13_p_0(
  MR_Word PredId_14,
  MR_Word STATE_VARIABLE_PredInfo_0_35,
  MR_Integer ProcId_16,
  MR_Word PFSymNameArity_17,
  MR_Word Attributes_18,
  MR_Word ProgVarSet_19,
  MR_Word PragmaVars_20,
  MR_Word PragmaImpl_21,
  MR_Word Context_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  MR_bool succeeded;
  MR_Word PredOrFunc_25 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_17, 0))) & (MR_Integer) 1);
  MR_Word PredSymName_26 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_17, 1))));
  MR_Word PredModuleName_28;
  MR_String PredName_29;
  MR_Word ArgTypes_30;
  MR_Word Purity_31;
  MR_Word Markers_32;
  MR_Word ClausesInfo1_33;
  MR_Word ClausesInfo_34;
  MR_Word STATE_VARIABLE_PredInfo_1_41;
  MR_Word STATE_VARIABLE_PredInfo_2_43;
  MR_Word PredInfo_44;

  mdbcomp__sym_name__det_sym_name_get_module_name_and_name_3_p_0(PredSymName_26, &PredModuleName_28, &PredName_29);
  hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_0_35, &ArgTypes_30);
  hlds__hlds_pred__pred_info_get_purity_2_p_0(STATE_VARIABLE_PredInfo_0_35, &Purity_31);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_0_35, &Markers_32);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_0_35, &ClausesInfo1_33);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_36, PredId_14, &PredInfo_44);
  succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_44);
  if (succeeded)
  {
    MR_Word Globals_45;
    MR_Word AllowDefnOfBuiltin_46;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_36, &Globals_45);
    libs__globals__lookup_bool_option_3_p_0(Globals_45, (MR_Integer) 762, &AllowDefnOfBuiltin_46);
    switch (AllowDefnOfBuiltin_46) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SymName_47;
          MR_Integer UserArityInt_48;
          MR_Word SNA_49;
          MR_Word Pieces_50;
          MR_Word Spec_51;
          MR_Word Var_54;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_65;
          MR_Word Var_66;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_75;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;

          hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_44, &SymName_47);
          Var_54 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_44);
          UserArityInt_48 = (MR_Integer) (Var_54);
          {
            SNA_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SNA_49, 0) = ((MR_Box) (SymName_47));
            MR_hl_field(0, SNA_49, 1) = ((MR_Box) (UserArityInt_48));
          }
          Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[56])));
          {
            Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 31U));
            MR_hl_field(3, Var_70, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_25));
          }
          {
            Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[59])));
          }
          {
            Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_66, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[57])));
            MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, Var_78, 1) = ((MR_Box) (SNA_49));
          }
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[24])));
          }
          Var_76 = parse_tree__error_spec__color_as_subject_1_f_0(Var_77);
          Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])));
          Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_66, Var_75);
          Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_65);
          Pieces_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[54])), Var_59);
          {
            Spec_51 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_51, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_add_foreign_proc\'/18"));
            MR_hl_field(0, Spec_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_51, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_51, 3) = ((MR_Box) (Context_22));
            MR_hl_field(0, Spec_51, 4) = ((MR_Box) (Pieces_50));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_39 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_51));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_38));
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_0_38;
        break;
    }
    ClausesInfo_34 = ClausesInfo1_33;
  }
  else
  {
    MR_Word AllProcIds_52;

    AllProcIds_52 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_44);
    hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_19_p_0(STATE_VARIABLE_ModuleInfo_0_36, PredOrFunc_25, PredModuleName_28, PredName_29, PredId_14, ProcId_16, AllProcIds_52, ProgVarSet_19, PragmaVars_20, ArgTypes_30, Purity_31, Attributes_18, Markers_32, Context_22, PragmaImpl_21, ClausesInfo1_33, &ClausesInfo_34, STATE_VARIABLE_Specs_0_38, STATE_VARIABLE_Specs_39);
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_34, STATE_VARIABLE_PredInfo_0_35, &STATE_VARIABLE_PredInfo_1_41);
  hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, STATE_VARIABLE_PredInfo_1_41, &STATE_VARIABLE_PredInfo_2_43);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_14, STATE_VARIABLE_PredInfo_2_43, STATE_VARIABLE_ModuleInfo_0_36, STATE_VARIABLE_ModuleInfo_37);
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_19_p_0(
  MR_Word ModuleInfo_20,
  MR_Word PredOrFunc_21,
  MR_Word PredModuleName_22,
  MR_String PredName_23,
  MR_Word PredId_24,
  MR_Integer ProcId_25,
  MR_Word AllProcIds_26,
  MR_Word PVarSet_27,
  MR_Word PragmaVars_28,
  MR_Word OrigArgTypes_29,
  MR_Word Purity_30,
  MR_Word Attributes0_31,
  MR_Word Markers_32,
  MR_Word Context_33,
  MR_Word PragmaImpl_34,
  MR_Word STATE_VARIABLE_ClausesInfo_0_86,
  MR_Word * STATE_VARIABLE_ClausesInfo_87,
  MR_Word STATE_VARIABLE_Specs_0_88,
  MR_Word * STATE_VARIABLE_Specs_89)
{
  MR_bool succeeded;
  MR_Word VarSet0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_86, 0))));
  MR_Word ExplicitVarTypes_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_86, 1))));
  MR_Word VarTable_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_86, 2))));
  MR_Word RttiVarMaps_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_86, 3))));
  MR_Word TVarNameMap_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_86, 4))));
  MR_Word HeadVars_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_86, 5))));
  MR_Word ClausesRep0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_86, 6))));
  MR_Word ItemNumbers_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_86, 7))));
  MR_Word HadSyntaxError_46 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_86, 8))) & (MR_Integer) 1);
  MR_Word Clauses0_47;
  MR_Word Globals_48;
  MR_Word Target_49;
  MR_Word NewLang_50;
  MR_Word PredFormArity_51;
  MR_Word Overridden_52;
  MR_Word Clauses1_53;
  MR_Word ArgVars_54;
  MR_Word ArgInfos_55;
  MR_Word ArgListSpecs_56;
  MR_Word STATE_VARIABLE_Specs_1_90;

  hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_43, &Clauses0_47);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_20, &Globals_48);
  libs__globals__get_target_2_p_0(Globals_48, &Target_49);
  NewLang_50 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes0_31);
  PredFormArity_51 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OrigArgTypes_29);
  hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(Globals_48, PredOrFunc_21, PredModuleName_22, PredName_23, PredFormArity_51, Context_33, Target_49, NewLang_50, AllProcIds_26, ProcId_25, &Overridden_52, Clauses0_47, &Clauses1_53, STATE_VARIABLE_Specs_0_88, &STATE_VARIABLE_Specs_1_90);
  parse_tree__prog_data_foreign__pragma_get_vars_and_var_infos_3_p_0(PragmaVars_28, &ArgVars_54, &ArgInfos_55);
  hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_8_p_0(PredOrFunc_21, PredModuleName_22, PredName_23, PredFormArity_51, PVarSet_27, ArgVars_54, Context_33, &ArgListSpecs_56);
  if ((ArgListSpecs_56 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_32, (MR_Integer) 17);
    if (!(succeeded))
      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_32, (MR_Integer) 18);
    if (succeeded)
      *STATE_VARIABLE_Specs_89 = STATE_VARIABLE_Specs_1_90;
    else
    {
      MR_Word ForeignAttributePurity_59;

      ForeignAttributePurity_59 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attributes0_31);
      succeeded = (ForeignAttributePurity_59 == Purity_30);
      if (succeeded)
        *STATE_VARIABLE_Specs_89 = STATE_VARIABLE_Specs_1_90;
      else
      {
        MR_Word PredSymName_60;
        MR_Word UserArity_61;
        MR_Word PFSymNameArity_62;
        MR_String ForeignAttributePurityStr_63;
        MR_String PurityStr_64;
        MR_Word Pieces_65;
        MR_Word Spec_66;
        MR_Word Var_94;
        MR_Word Var_97;
        MR_Word Var_98;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_105;
        MR_Word Var_106;
        MR_Word Var_111;
        MR_Word Var_112;
        MR_Word Var_115;
        MR_Word Var_116;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_123;
        MR_Word Var_124;

        {
          PredSymName_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PredSymName_60, 0) = ((MR_Box) (PredModuleName_22));
          MR_hl_field(1, PredSymName_60, 1) = ((MR_Box) (PredName_23));
        }
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_21, &UserArity_61, PredFormArity_51);
        {
          PFSymNameArity_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFSymNameArity_62, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
          MR_hl_field(0, PFSymNameArity_62, 1) = ((MR_Box) (PredSymName_60));
          MR_hl_field(0, PFSymNameArity_62, 2) = ((MR_Box) (UserArity_61));
        }
        parse_tree__parse_tree_out_misc__purity_name_2_p_0(ForeignAttributePurity_59, &ForeignAttributePurityStr_63);
        parse_tree__parse_tree_out_misc__purity_name_2_p_0(Purity_30, &PurityStr_64);
        {
          Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(3, Var_98, 1) = ((MR_Box) (PFSymNameArity_62));
        }
        {
          Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
          MR_hl_field(1, Var_97, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[62])));
        }
        {
          Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_94, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[60])));
          MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
        }
        {
          Var_106 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_106, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_106, 1) = ((MR_Box) (ForeignAttributePurityStr_63));
        }
        {
          Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
          MR_hl_field(1, Var_105, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[35])));
        }
        Var_104 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_105);
        {
          Var_116 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_116, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_116, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
        }
        {
          Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
          MR_hl_field(1, Var_115, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[65])));
        }
        {
          Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_112, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[63])));
          MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_115));
        }
        {
          Var_124 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_124, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_124, 1) = ((MR_Box) (PurityStr_64));
        }
        {
          Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
          MR_hl_field(1, Var_123, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[24])));
        }
        Var_122 = parse_tree__error_spec__color_as_correct_1_f_0(Var_123);
        Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_122, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])));
        Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_112, Var_121);
        Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_104, Var_111);
        Pieces_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_94, Var_103);
        {
          Spec_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_66, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_do_add_foreign_proc\'/19"));
          MR_hl_field(0, Spec_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_66, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_66, 3) = ((MR_Box) (Context_33));
          MR_hl_field(0, Spec_66, 4) = ((MR_Box) (Pieces_65));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_89 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_66));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_90));
        }
      }
    }
    switch (Overridden_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word GoalInfo_67;
          MR_Word HeadVarList_68;
          MR_Word ForeignArgs_69;
          MR_Word Attributes_70;
          MR_Word GoalExpr_73;
          MR_Word HldsGoal0_74;
          MR_Word EmptyExplicitVarTypes_75;
          MR_Word EmptyRttiVarmaps_76;
          MR_Word HldsGoal_78;
          MR_Word VarSet_79;
          MR_Word Clause_82;
          MR_Word Clauses_83;
          MR_Word ClausesRep_84;
          MR_Word Var_138;
          MR_Word Var_139;
          MR_Word Var_141;
          MR_Word Var_143;
          MR_Word _Warnings_77;
          MR_Word Var_80;
          MR_Word Var_81;

          hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_33, Purity_30, &GoalInfo_67);
          HeadVarList_68 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), HeadVars_42);
          hlds__hlds_goal__make_foreign_args_4_p_0(HeadVarList_68, ArgInfos_55, OrigArgTypes_29, &ForeignArgs_69);
          hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(Globals_48, ArgVars_54, HeadVarList_68, OrigArgTypes_29, Attributes0_31, &Attributes_70);
          {
            GoalExpr_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, GoalExpr_73, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, GoalExpr_73, 1) = ((MR_Box) (Attributes_70));
            MR_hl_field(3, GoalExpr_73, 2) = ((MR_Box) (PredId_24));
            MR_hl_field(3, GoalExpr_73, 3) = ((MR_Box) (ProcId_25));
            MR_hl_field(3, GoalExpr_73, 4) = ((MR_Box) (ForeignArgs_69));
            MR_hl_field(3, GoalExpr_73, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, GoalExpr_73, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, GoalExpr_73, 7) = ((MR_Box) (PragmaImpl_34));
          }
          {
            HldsGoal0_74 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HldsGoal0_74, 0) = ((MR_Box) (GoalExpr_73));
            MR_hl_field(0, HldsGoal0_74, 1) = ((MR_Box) (GoalInfo_67));
          }
          parse_tree__vartypes__init_vartypes_1_p_0(&EmptyExplicitVarTypes_75);
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_76);
          hlds__quantification__implicitly_quantify_clause_body_general_vs_12_p_0((MR_Integer) 0, (MR_Integer) 0, HeadVarList_68, &_Warnings_77, HldsGoal0_74, &HldsGoal_78, VarSet0_37, &VarSet_79, EmptyExplicitVarTypes_75, &Var_80, EmptyRttiVarmaps_76, &Var_81);
          {
            Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_139, 0) = ((MR_Box) (ProcId_25));
            MR_hl_field(1, Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_138, 0) = ((MR_Box) (Var_139));
          }
          {
            Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_141, 0) = (MR_Box) ((MR_Unsigned) (NewLang_50));
          }
          Var_143 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
          {
            Clause_82 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Clause_82, 0) = ((MR_Box) (Var_138));
            MR_hl_field(0, Clause_82, 1) = ((MR_Box) (HldsGoal_78));
            MR_hl_field(0, Clause_82, 2) = ((MR_Box) (Var_141));
            MR_hl_field(0, Clause_82, 3) = ((MR_Box) (Context_33));
            MR_hl_field(0, Clause_82, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Clause_82, 5) = ((MR_Box) (Var_143));
            MR_hl_field(0, Clause_82, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Clauses_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Clauses_83, 0) = ((MR_Box) (Clause_82));
            MR_hl_field(1, Clauses_83, 1) = ((MR_Box) (Clauses1_53));
          }
          hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_83, &ClausesRep_84);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ClausesInfo_87 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (VarSet_79));
            MR_hl_field(0, base, 1) = ((MR_Box) (ExplicitVarTypes_38));
            MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_39));
            MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_40));
            MR_hl_field(0, base, 4) = ((MR_Box) (TVarNameMap_41));
            MR_hl_field(0, base, 5) = ((MR_Box) (HeadVars_42));
            MR_hl_field(0, base, 6) = ((MR_Box) (ClausesRep_84));
            MR_hl_field(0, base, 7) = ((MR_Box) (ItemNumbers_44));
            MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (HadSyntaxError_46)));
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_ClausesInfo_87 = STATE_VARIABLE_ClausesInfo_0_86;
        break;
    }
  }
  else
  {
    *STATE_VARIABLE_Specs_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ArgListSpecs_56, STATE_VARIABLE_Specs_1_90);
    *STATE_VARIABLE_ClausesInfo_87 = STATE_VARIABLE_ClausesInfo_0_86;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__830__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
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
  MR_Word STATE_VARIABLE_Specs_0_58,
  MR_Word * STATE_VARIABLE_Specs_59)
{
  MR_bool succeeded;

  if ((Clauses0_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Clauses_28 = (MR_Word) ((MR_Unsigned) 0U);
    *Overridden_26 = (MR_Integer) 1;
    *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_0_58;
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
    MR_Word STATE_VARIABLE_Specs_1_60;

    hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(Globals_16, PredOrFunc_17, PredModuleName_18, PredName_19, PredFormArity_20, NewContext_21, Target_22, NewLang_23, AllProcIds_24, NewClauseProcId_25, &LaterOverridden_32, LaterClauses0_31, &LaterClauses_33, STATE_VARIABLE_Specs_0_58, &STATE_VARIABLE_Specs_1_60);
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
          MR_Word Var_63;
          MR_Word Var_126;
          MR_Word Var_127;
          MR_Word Var_128;
          MR_Word Var_129;
          MR_Word Var_130;
          MR_Word Var_131;

          {
            Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_63, 0) = ((MR_Box) (ProcIds_42));
          }
          Var_126 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 1))));
          Var_127 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 2))));
          Var_128 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 3))));
          Var_129 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 4))));
          Var_130 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 5))));
          Var_131 = ((MR_Unsigned) ((MR_hl_field(0, FirstClause0_30, 6))) & (MR_Integer) 1);
          {
            FirstClause_45 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FirstClause_45, 0) = ((MR_Box) (Var_63));
            MR_hl_field(0, FirstClause_45, 1) = ((MR_Box) (Var_126));
            MR_hl_field(0, FirstClause_45, 2) = ((MR_Box) (Var_127));
            MR_hl_field(0, FirstClause_45, 3) = ((MR_Box) (Var_128));
            MR_hl_field(0, FirstClause_45, 4) = ((MR_Box) (Var_129));
            MR_hl_field(0, FirstClause_45, 5) = ((MR_Box) (Var_130));
            MR_hl_field(0, FirstClause_45, 6) = (MR_Box) ((MR_Unsigned) (Var_131));
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
      *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_1_60;
    }
    else
    {
      MR_Word OldLang_46 = ((MR_Unsigned) ((MR_hl_field(1, FirstClauseLang_36, 0))) & (MR_Integer) 3);
      MR_Word ProcIds0_124;
      MR_Word ProcIds_122;

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
          ProcIds0_124 = ((MR_Word) ((MR_hl_field(1, ApplProcIds0_34, 0))));
          break;
      }
      succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds0_124, ((MR_Box) (NewClauseProcId_25)), &ProcIds_122);
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
              {
                MR_Word PredSymName_50;
                MR_Word PFSymNameArity_51;
                MR_String OldLangStr_52;
                MR_Word PiecesA_53;
                MR_Word MsgA_55;
                MR_Word MsgB_56;
                MR_Word Spec_57;
                MR_Word Var_77;
                MR_Word Var_78;
                MR_Word Var_89;
                MR_Word Var_92;
                MR_Word Var_93;
                MR_Word Var_94;
                MR_Word Var_97;
                MR_Word Var_98;
                MR_Word Var_113;
                MR_Word Var_114;

                {
                  PredSymName_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, PredSymName_50, 0) = ((MR_Box) (PredModuleName_18));
                  MR_hl_field(1, PredSymName_50, 1) = ((MR_Box) (PredName_19));
                }
                {
                  PFSymNameArity_51 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PFSymNameArity_51, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
                  MR_hl_field(0, PFSymNameArity_51, 1) = ((MR_Box) (PredSymName_50));
                  MR_hl_field(0, PFSymNameArity_51, 2) = ((MR_Box) (PredFormArity_20));
                }
                OldLangStr_52 = libs__globals__foreign_language_string_1_f_0(OldLang_46);
                Var_78 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[83])));
                {
                  Var_93 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_93, 0) = ((MR_Box) ((MR_Unsigned) 17U));
                  MR_hl_field(3, Var_93, 1) = ((MR_Box) (PFSymNameArity_51));
                }
                {
                  Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                  MR_hl_field(3, Var_98, 1) = ((MR_Box) (OldLangStr_52));
                }
                {
                  Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
                  MR_hl_field(1, Var_97, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[39])));
                }
                {
                  Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_94, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[85])));
                  MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_97));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
                  MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_94));
                }
                {
                  Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_89, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[84])));
                  MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_92));
                }
                Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, Var_89);
                PiecesA_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[54])), Var_77);
                {
                  MsgA_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MsgA_55, 0) = ((MR_Box) (NewContext_21));
                  MR_hl_field(0, MsgA_55, 1) = ((MR_Box) (PiecesA_53));
                }
                {
                  MsgB_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MsgB_56, 0) = ((MR_Box) (FirstClauseContext_37));
                  MR_hl_field(0, MsgB_56, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[87])));
                }
                {
                  Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_114, 0) = ((MR_Box) (MsgB_56));
                  MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_113, 0) = ((MR_Box) (MsgA_55));
                  MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_114));
                }
                {
                  Spec_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Spec_57, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15"));
                  MR_hl_field(2, Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(2, Spec_57, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                  MR_hl_field(2, Spec_57, 3) = ((MR_Box) (Var_113));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_59 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Spec_57));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_60));
                }
              }
              else
                *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_1_60;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_69;

              if ((ProcIds_122 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Clauses_28 = LaterClauses_33;
                *Overridden_26 = LaterOverridden_32;
              }
              else
              {
                MR_Word Var_68;
                MR_Word FirstClause_117;
                MR_Word Var_133;
                MR_Word Var_134;
                MR_Word Var_135;
                MR_Word Var_136;
                MR_Word Var_137;
                MR_Word Var_138;

                {
                  Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_68, 0) = ((MR_Box) (ProcIds_122));
                }
                Var_133 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 1))));
                Var_134 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 2))));
                Var_135 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 3))));
                Var_136 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 4))));
                Var_137 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, 5))));
                Var_138 = ((MR_Unsigned) ((MR_hl_field(0, FirstClause0_30, 6))) & (MR_Integer) 1);
                {
                  FirstClause_117 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, FirstClause_117, 0) = ((MR_Box) (Var_68));
                  MR_hl_field(0, FirstClause_117, 1) = ((MR_Box) (Var_133));
                  MR_hl_field(0, FirstClause_117, 2) = ((MR_Box) (Var_134));
                  MR_hl_field(0, FirstClause_117, 3) = ((MR_Box) (Var_135));
                  MR_hl_field(0, FirstClause_117, 4) = ((MR_Box) (Var_136));
                  MR_hl_field(0, FirstClause_117, 5) = ((MR_Box) (Var_137));
                  MR_hl_field(0, FirstClause_117, 6) = (MR_Box) ((MR_Unsigned) (Var_138));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Clauses_28 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (FirstClause_117));
                  MR_hl_field(1, base, 1) = ((MR_Box) (LaterClauses_33));
                }
                *Overridden_26 = LaterOverridden_32;
              }
              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_69, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[1]));
                MR_hl_field(0, Var_69, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1));
                MR_hl_field(0, Var_69, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_69, 3) = ((MR_Box) (LaterOverridden_32));
                MR_hl_field(0, Var_69, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_69, (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15", (MR_String) "inconsistent old foreign_procs");
              *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_1_60;
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
        *STATE_VARIABLE_Specs_59 = STATE_VARIABLE_Specs_1_60;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(
  MR_Word Globals_7,
  MR_Word ActualHeadVars_8,
  MR_Word FormalHeadVars_9,
  MR_Word FormalTypes_10,
  MR_Word STATE_VARIABLE_Attributes_0_14,
  MR_Word * STATE_VARIABLE_Attributes_15)
{
  MR_Word SharingAnalysis_12;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 363, &SharingAnalysis_12);
  switch (SharingAnalysis_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Attributes_15 = STATE_VARIABLE_Attributes_0_14;
      break;
    case (MR_Integer) 1:
      {
        MR_Word FormalUserSharing_13;
        MR_Word Var_17;

        Var_17 = parse_tree__prog_data_foreign__get_user_annotated_sharing_1_f_0(STATE_VARIABLE_Attributes_0_14);
        parse_tree__prog_ctgc__rename_user_annotated_sharing_5_p_0(ActualHeadVars_8, FormalHeadVars_9, FormalTypes_10, Var_17, &FormalUserSharing_13);
        parse_tree__prog_data_foreign__set_user_annotated_sharing_3_p_0(FormalUserSharing_13, STATE_VARIABLE_Attributes_0_14, STATE_VARIABLE_Attributes_15);
      }
      break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_111;

  conv1_HeadVar__3_111 = hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__check_foreign_proc_arg_list__687__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_111));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_42;

  succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__check_foreign_proc_arg_list__664__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_42);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_42));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_8_p_0(
  MR_Word PredOrFunc_9,
  MR_Word PredModuleName_10,
  MR_String PredName_11,
  MR_Word PredFormArity_12,
  MR_Word PVarSet_13,
  MR_Word ArgVars_14,
  MR_Word Context_15,
  MR_Word * Specs_16)
{
  MR_bool succeeded;
  MR_Word ArgVarBag0_17;
  MR_Word ArgVarBag_18;
  MR_Word ArgVarBagAssocList_19;
  MR_Word MultiplyOccurringArgVars_23;

  mercury__bag__init_1_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), &ArgVarBag0_17);
  mercury__bag__insert_list_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), ArgVars_14, ArgVarBag0_17, &ArgVarBag_18);
  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), ArgVarBag_18, &ArgVarBagAssocList_19);
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[1]), ArgVarBagAssocList_19, &MultiplyOccurringArgVars_23);
  if ((MultiplyOccurringArgVars_23 == (MR_Word) ((MR_Unsigned) 0U)))
    *Specs_16 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word UserArity_26;
    MR_Word PredSymName_27;
    MR_Word PFSymNameArity_28;
    MR_Word Pieces1_29;
    MR_Word Pieces2_32;
    MR_Word Spec_39;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_114;
    MR_Word Var_115;

    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_9, &UserArity_26, PredFormArity_12);
    {
      PredSymName_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredSymName_27, 0) = ((MR_Box) (PredModuleName_10));
      MR_hl_field(1, PredSymName_27, 1) = ((MR_Box) (PredName_11));
    }
    {
      PFSymNameArity_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFSymNameArity_28, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_9));
      MR_hl_field(0, PFSymNameArity_28, 1) = ((MR_Box) (PredSymName_27));
      MR_hl_field(0, PFSymNameArity_28, 2) = ((MR_Box) (UserArity_26));
    }
    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 19U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (PFSymNameArity_28));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[71])));
    }
    {
      Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[16])));
      MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
    }
    {
      Pieces1_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces1_29, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[66])));
      MR_hl_field(1, Pieces1_29, 1) = ((MR_Box) (Var_46));
    }
    Var_115 = ((MR_Word) ((MR_hl_field(1, MultiplyOccurringArgVars_23, 0))));
    Var_114 = ((MR_Word) ((MR_hl_field(1, MultiplyOccurringArgVars_23, 1))));
    if ((Var_114 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word BadVarPiece_31;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_72;

      BadVarPiece_31 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PVarSet_13, Var_115);
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (BadVarPiece_31));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_69 = parse_tree__error_spec__color_as_subject_1_f_0(Var_70);
      Var_72 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[75])));
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_72);
      Pieces2_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[73])), Var_68);
    }
    else
    {
      MR_Word BadVarPieces_36;
      MR_Word BadVarsPieces_37;
      MR_Word Var_78;
      MR_Word Var_86;
      MR_Word Var_87;

      {
        Var_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_78, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_6[0]));
        MR_hl_field(0, Var_78, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__check_foreign_proc_arg_list_8_p_0_2));
        MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_78, 3) = ((MR_Box) (PVarSet_13));
      }
      BadVarPieces_36 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_78, MultiplyOccurringArgVars_23);
      BadVarsPieces_37 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), BadVarPieces_36);
      Var_87 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[79])));
      Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadVarsPieces_37, Var_87);
      Pieces2_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[77])), Var_86);
    }
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces2_32, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[81])));
    Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_29, Var_101);
    {
      Spec_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_39, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.check_foreign_proc_arg_list\'/8"));
      MR_hl_field(0, Spec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_39, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_39, 3) = ((MR_Box) (Context_15));
      MR_hl_field(0, Spec_39, 4) = ((MR_Box) (Var_100));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_16 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_39));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__compute_intended_proc_id_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredInfo_8,
  MR_Word PFSymNameArity_9,
  MR_Word PragmaVars_10,
  MR_Word Context_11,
  MR_Word * MaybeProcId_12)
{
  MR_bool succeeded;
  MR_Word Procs_13;
  MR_Word ExistingProcs_14;
  MR_Word Modes_15;
  MR_Integer ProcId_16;

  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_8, &Procs_13);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_13, &ExistingProcs_14);
  parse_tree__prog_data_foreign__pragma_get_modes_2_p_0(PragmaVars_10, &Modes_15);
  succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(ModuleInfo_7, ExistingProcs_14, Modes_15, &ProcId_16);
  if (succeeded)
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeProcId_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ProcId_16));
    }
  else
  {
    MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(0, PFSymNameArity_9, 0))) & (MR_Integer) 1);
    MR_Word PredSymName_18 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_9, 1))));
    MR_Word PredFormArity_19 = ((MR_Word) ((MR_hl_field(0, PFSymNameArity_9, 2))));
    MR_Word UserArity_20;
    MR_Integer UserArityInt_21;
    MR_Word SNA_22;
    MR_Word Pieces_23;
    MR_Word Spec_24;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;

    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_17, &UserArity_20, PredFormArity_19);
    UserArityInt_21 = (MR_Integer) (UserArity_20);
    {
      SNA_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_22, 0) = ((MR_Box) (PredSymName_18));
      MR_hl_field(0, SNA_22, 1) = ((MR_Box) (UserArityInt_21));
    }
    Var_36 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[21])));
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_46, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[22])));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_45));
    }
    {
      Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_51, 1) = ((MR_Box) (SNA_22));
    }
    {
      Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
      MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[24])));
    }
    Var_49 = parse_tree__error_spec__color_as_subject_1_f_0(Var_50);
    Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])));
    Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, Var_48);
    Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_36, Var_41);
    Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[19])), Var_35);
    {
      Spec_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.compute_intended_proc_id\'/6"));
      MR_hl_field(0, Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_24, 3) = ((MR_Box) (Context_11));
      MR_hl_field(0, Spec_24, 4) = ((MR_Box) (Pieces_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeProcId_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_24));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__is_foreign_proc_for_this_backend_3_p_0(
  MR_Word Globals_4,
  MR_Word Attributes_5,
  MR_Word * ForThisBackend_6)
{
  MR_bool succeeded;
  MR_Word BackendForeignLangs_7;
  MR_Word CurrentBackend_8;
  MR_Word PragmaForeignLanguage_9;
  MR_Word MaybeForSpecificBackend_10;

  libs__globals__get_backend_foreign_languages_2_p_0(Globals_4, &BackendForeignLangs_7);
  CurrentBackend_8 = libs__globals__lookup_current_backend_1_f_0(Globals_4);
  PragmaForeignLanguage_9 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_5);
  MaybeForSpecificBackend_10 = parse_tree__prog_data_foreign__get_for_specific_backend_1_f_0(Attributes_5);
  succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (PragmaForeignLanguage_9)), BackendForeignLangs_7);
  succeeded = !(succeeded);
  if (succeeded)
  {
    MR_Word RejectCause_11;

    {
      RejectCause_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RejectCause_11, 0) = (MR_Box) ((MR_Unsigned) (PragmaForeignLanguage_9));
      MR_hl_field(1, RejectCause_11, 1) = ((MR_Box) (BackendForeignLangs_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *ForThisBackend_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (RejectCause_11));
    }
  }
  else
  {
    MR_Word SpecificBackend_12;

    succeeded = (MaybeForSpecificBackend_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      SpecificBackend_12 = ((MR_Word) ((MR_hl_field(1, MaybeForSpecificBackend_10, 0))));
      succeeded = (SpecificBackend_12 != CurrentBackend_8);
    }
    if (succeeded)
      *ForThisBackend_6 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_3[0]));
    else
      *ForThisBackend_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__report_if_fproc_is_for_imported_pred_3_p_0(
  MR_Word PredInfo_4,
  MR_Word Context_5,
  MR_Word * Specs_6)
{
  MR_bool succeeded;

  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_4);
  if (succeeded)
  {
    MR_Word PredOrFunc_7;
    MR_Word PredSymName_8;
    MR_Integer UserArityInt_9;
    MR_Word SNA_10;
    MR_Word Pieces_11;
    MR_Word Spec_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_17;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_34;
    MR_Word Var_39;
    MR_Word Var_40;

    PredOrFunc_7 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_4);
    hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_4, &PredSymName_8);
    Var_13 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_4);
    UserArityInt_9 = (MR_Integer) (Var_13);
    {
      SNA_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, SNA_10, 0) = ((MR_Box) (PredSymName_8));
      MR_hl_field(0, SNA_10, 1) = ((MR_Box) (UserArityInt_9));
    }
    {
      Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_27, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_7));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[10])));
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_20, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])));
      MR_hl_field(1, Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (SNA_10));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_31);
    Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[14])));
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])));
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[12])), Var_39);
    Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, Var_34);
    Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_14, Var_29);
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.report_if_fproc_is_for_imported_pred\'/3"));
      MR_hl_field(0, Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_12, 3) = ((MR_Box) (Context_5));
      MR_hl_field(0, Spec_12, 4) = ((MR_Box) (Pieces_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Specs_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    *Specs_6 = (MR_Word) ((MR_Unsigned) 0U);
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
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_42;
  MR_Word conv0_STATE_VARIABLE_Specs_44;

  hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_42, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_44);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_42));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_44));
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
        MR_hl_field(0, Var_26, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[0]));
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
