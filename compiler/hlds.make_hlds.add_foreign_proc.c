/*
** Automatically generated from `add_foreign_proc.m'
** by the Mercury compiler,
** version rotd-2025-09-27
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

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_functor_desc_overridden_by_old_foreign_proc_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_ordinal_ordered_overridden_by_old_foreign_proc_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__enum_name_ordered_overridden_by_old_foreign_proc_0[2];

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_overridden_by_old_foreign_proc_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_foreign_proc__list__ti_list_1libs__globals__type_ctor_info_foreign_language_0;

static const MR_PseudoTypeInfo hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_types_reject_cause_0_0[2];

static const MR_DuArgLocn hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_locns_reject_cause_0_0[2];

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_reject_cause_0_0;

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_reject_cause_0_1;

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_reject_cause_0_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_reject_cause_0_1[1];

static const MR_DuPtagLayout hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_ptag_ordered_reject_cause_0[2];

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_name_ordered_reject_cause_0[2];

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_reject_cause_0[2];

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__688__1_2_p_0(
  MR_Word LaterOverridden_32,
  MR_Word HeadVar__2_72);

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__clauses_info_do_add_foreign_proc__472__1_2_f_0(
  MR_Word PVarSet_27,
  MR_Word HeadVar__2_236);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_foreign_proc__449__1_2_p_0(
  MR_Word LambdaHeadVar__1_108,
  MR_Word * LambdaHeadVar__2_109);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____reject_cause_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____reject_cause_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____overridden_by_old_foreign_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc____Unify____overridden_by_old_foreign_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_foreign_proc_18_p_0(
  MR_Word ModuleInfo_19,
  MR_Word PredOrFunc_20,
  MR_Word PredModuleName_21,
  MR_String PredName_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word VarSet_25,
  MR_Word PragmaVars_26,
  MR_Word OrigArgTypes_27,
  MR_Word Purity_28,
  MR_Word Attributes0_29,
  MR_Word Markers_30,
  MR_Word Context_31,
  MR_Word PragmaImpl0_32,
  MR_Word STATE_VARIABLE_ClausesInfo_0_44,
  MR_Word * STATE_VARIABLE_ClausesInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_19_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Word STATE_VARIABLE_ClausesInfo_0_102,
  MR_Word * STATE_VARIABLE_ClausesInfo_103,
  MR_Word STATE_VARIABLE_Specs_0_104,
  MR_Word * STATE_VARIABLE_Specs_105);

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
hlds__make_hlds__add_foreign_proc__report_bad_foreign_proc_in_dot_opt_file_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__report_bad_foreign_proc_in_dot_opt_file_4_p_0(
  MR_Word RejectCause_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_procs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
hlds__make_hlds__add_foreign_proc____Unify____reject_cause_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____reject_cause_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[88][2];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[4][3];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[1][6];




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
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__report_bad_foreign_proc_in_dot_opt_file_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[2])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_19_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[3])),
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
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

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0)),
    ((MR_Box) (&hlds__make_hlds__add_foreign_proc__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[1][6] = {
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

static const MR_PseudoTypeInfo hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_types_reject_cause_0_0[2] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__add_foreign_proc__list__ti_list_1libs__globals__type_ctor_info_foreign_language_0)
};

static const MR_DuArgLocn hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_locns_reject_cause_0_0[2] = {
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

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_reject_cause_0_0 = {
  (MR_String) "wrong_lang",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_types_reject_cause_0_0,
  NULL,
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__field_locns_reject_cause_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_reject_cause_0_1 = {
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

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_reject_cause_0_0[1] = { &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_reject_cause_0_1 };

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_reject_cause_0_1[1] = { &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_reject_cause_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_ptag_ordered_reject_cause_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_reject_cause_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_stag_ordered_reject_cause_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_name_ordered_reject_cause_0[2] = {
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_reject_cause_0_1,
  &hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_functor_desc_reject_cause_0_0
};

static const MR_Integer hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_reject_cause_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_reject_cause_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Unify____reject_cause_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_foreign_proc____Compare____reject_cause_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_foreign_proc",
  (MR_String) "reject_cause",
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_name_ordered_reject_cause_0 },
  { hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__du_ptag_ordered_reject_cause_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__functor_number_map_reject_cause_0,

};

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__688__1_2_p_0(
  MR_Word LaterOverridden_32,
  MR_Word HeadVar__2_72)
{
  MR_bool succeeded = (LaterOverridden_32 == HeadVar__2_72);

  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__clauses_info_do_add_foreign_proc__472__1_2_f_0(
  MR_Word PVarSet_27,
  MR_Word HeadVar__2_236)
{
  MR_Word HeadVar__3_237;

  HeadVar__3_237 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PVarSet_27, HeadVar__2_236);
  return HeadVar__3_237;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_foreign_proc__449__1_2_p_0(
  MR_Word LambdaHeadVar__1_108,
  MR_Word * LambdaHeadVar__2_109)
{
  MR_bool succeeded;
  MR_Integer Occurrences_61;

  *LambdaHeadVar__2_109 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_108, 0))));
  Occurrences_61 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_108, 1))));
  succeeded = (Occurrences_61 > (MR_Integer) 1);
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____reject_cause_0_0(
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
hlds__make_hlds__add_foreign_proc____Unify____reject_cause_0_0(
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

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0_1(
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

void MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ItemMercurystatus_10,
  MR_Word PredStatus_11,
  MR_Word FPInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_66,
  MR_Word * STATE_VARIABLE_ModuleInfo_67,
  MR_Word STATE_VARIABLE_Specs_0_68,
  MR_Word * STATE_VARIABLE_Specs_69)
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
  MR_Word PredModuleName_24;
  MR_String PredName_25;
  MR_Word PredFormArity_27;
  MR_Word PFSymNameArity_28;
  MR_Word UserArity_29;
  MR_Integer UserArityInt_30;
  MR_Word SNA_31;
  MR_Word Globals_32;
  MR_Word VeryVerbose_33;
  MR_Word PredTable0_36;
  MR_Word MaybePredId_37;
  MR_Word PredId_38;
  MR_Word ClausesInfo0_41;
  MR_Word ItemNumbers0_42;
  MR_Word ItemNumbers_43;
  MR_Word ClausesInfo1_44;
  MR_Word MaybeThreadSafe_45;
  MR_Word ThreadSafe_46;
  MR_Word Attributes_47;
  MR_Word CurrentBackend_48;
  MR_Word BackendForeignLangs_49;
  MR_Word PragmaForeignLanguage_50;
  MR_Word MaybeForSpecificBackend_51;
  MR_Word STATE_VARIABLE_ModuleInfo_1_82;
  MR_Word STATE_VARIABLE_Specs_1_83;
  MR_Word STATE_VARIABLE_PredInfo_1_90;
  MR_Word STATE_VARIABLE_PredInfo_2_93;
  MR_Word STATE_VARIABLE_PredInfo_3_96;
  MR_Word STATE_VARIABLE_ModuleInfo_2_97;
  MR_Word Var_91;
  MR_Word Var_200;
  MR_Word Var_201;
  MR_Word Var_202;
  MR_Word Var_203;
  MR_Word Var_204;
  MR_Word Var_205;
  MR_Word Var_206;
  MR_Unsigned packed_word_1;

  if (((MR_tag((MR_Word) PredSymName_16)) == (MR_Integer) 1))
  {
    PredModuleName_24 = ((MR_Word) ((MR_hl_field(1, PredSymName_16, 0))));
    PredName_25 = ((MR_String) ((MR_hl_field(1, PredSymName_16, 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc\'/8", (MR_String) "unexpected PredSymName");
      return;
    }
  PredFormArity_27 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_pragma_var_0), PragmaVars_18);
  {
    PFSymNameArity_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_28, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
    MR_hl_field(0, PFSymNameArity_28, 1) = ((MR_Box) (PredSymName_16));
    MR_hl_field(0, PFSymNameArity_28, 2) = ((MR_Box) (PredFormArity_27));
  }
  parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_17, &UserArity_29, PredFormArity_27);
  UserArityInt_30 = (MR_Integer) (UserArity_29);
  {
    SNA_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, SNA_31, 0) = ((MR_Box) (PredSymName_16));
    MR_hl_field(0, SNA_31, 1) = ((MR_Box) (UserArityInt_30));
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_66, &Globals_32);
  libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 132, &VeryVerbose_33);
  switch (VeryVerbose_33) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String IdStr_35;

        IdStr_35 = parse_tree__parse_tree_out_sym_name__pf_sym_name_pred_form_arity_to_string_1_f_0(PFSymNameArity_28);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "% Processing \140:- pragma foreign_proc\' for ");
        mercury__io__write_string_4_p_0(ProgressStream_9, IdStr_35);
        mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "...\n");
      }
      break;
  }
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_66, &PredTable0_36);
  hlds__pred_table__predicate_table_search_pf_fqm_n_a_6_p_0(PredTable0_36, PredOrFunc_17, PredModuleName_24, PredName_25, PredFormArity_27, &MaybePredId_37);
  if ((MaybePredId_37 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Origin_39;
    MR_Word Var_79;

    {
      Var_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_79, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      MR_hl_field(0, Var_79, 1) = ((MR_Box) (PredSymName_16));
      MR_hl_field(0, Var_79, 2) = ((MR_Box) (UserArity_29));
    }
    {
      Origin_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Origin_39, 0) = ((MR_Box) (Var_79));
    }
    hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_17, PredModuleName_24, PredName_25, PredFormArity_27, PredStatus_11, (MR_Integer) 0, Context_22, Origin_39, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[7])), &PredId_38, STATE_VARIABLE_ModuleInfo_0_66, &STATE_VARIABLE_ModuleInfo_1_82, STATE_VARIABLE_Specs_0_68, &STATE_VARIABLE_Specs_1_83);
  }
  else
  {
    PredId_38 = ((MR_Word) ((MR_hl_field(1, MaybePredId_37, 0))));
    STATE_VARIABLE_ModuleInfo_1_82 = STATE_VARIABLE_ModuleInfo_0_66;
    STATE_VARIABLE_Specs_1_83 = STATE_VARIABLE_Specs_0_68;
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_1_82, PredId_38, &STATE_VARIABLE_PredInfo_1_90);
  Var_91 = (MR_Word) (PredStatus_11);
  succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_PredInfo_1_90, &STATE_VARIABLE_PredInfo_2_93);
  else
    STATE_VARIABLE_PredInfo_2_93 = STATE_VARIABLE_PredInfo_1_90;
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_2_93, &ClausesInfo0_41);
  ItemNumbers0_42 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_41, 7))));
  hlds__hlds_clauses__add_clause_item_number_5_p_0(SeqNum_23, Context_22, (MR_Integer) 1, ItemNumbers0_42, &ItemNumbers_43);
  Var_200 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_41, 0))));
  Var_201 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_41, 1))));
  Var_202 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_41, 2))));
  Var_203 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_41, 3))));
  Var_204 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_41, 4))));
  Var_205 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_41, 5))));
  Var_206 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_41, 6))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, ClausesInfo0_41, 8)));
  {
    ClausesInfo1_44 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClausesInfo1_44, 0) = ((MR_Box) (Var_200));
    MR_hl_field(0, ClausesInfo1_44, 1) = ((MR_Box) (Var_201));
    MR_hl_field(0, ClausesInfo1_44, 2) = ((MR_Box) (Var_202));
    MR_hl_field(0, ClausesInfo1_44, 3) = ((MR_Box) (Var_203));
    MR_hl_field(0, ClausesInfo1_44, 4) = ((MR_Box) (Var_204));
    MR_hl_field(0, ClausesInfo1_44, 5) = ((MR_Box) (Var_205));
    MR_hl_field(0, ClausesInfo1_44, 6) = ((MR_Box) (Var_206));
    MR_hl_field(0, ClausesInfo1_44, 7) = ((MR_Box) (ItemNumbers_43));
    MR_hl_field(0, ClausesInfo1_44, 8) = (MR_Box) (packed_word_1);
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo1_44, STATE_VARIABLE_PredInfo_2_93, &STATE_VARIABLE_PredInfo_3_96);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_38, STATE_VARIABLE_PredInfo_3_96, STATE_VARIABLE_ModuleInfo_1_82, &STATE_VARIABLE_ModuleInfo_2_97);
  libs__globals__get_maybe_thread_safe_2_p_0(Globals_32, &MaybeThreadSafe_45);
  ThreadSafe_46 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes0_15);
  switch (ThreadSafe_46) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      switch (MaybeThreadSafe_45) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 0, Attributes0_15, &Attributes_47);
          break;
        case (MR_Integer) 1:
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attributes0_15, &Attributes_47);
          break;
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      Attributes_47 = Attributes0_15;
      break;
  }
  CurrentBackend_48 = libs__globals__lookup_current_backend_1_f_0(Globals_32);
  libs__globals__get_backend_foreign_languages_2_p_0(Globals_32, &BackendForeignLangs_49);
  PragmaForeignLanguage_50 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_47);
  MaybeForSpecificBackend_51 = parse_tree__prog_data_foreign__get_for_specific_backend_1_f_0(Attributes_47);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(STATE_VARIABLE_PredInfo_3_96);
  if (succeeded)
  {
    MR_Word Pieces_52;
    MR_Word Spec_53;
    MR_Word Var_100;
    MR_Word Var_103;
    MR_Word Var_106;
    MR_Word Var_109;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_120;
    MR_Word Var_125;
    MR_Word Var_126;

    {
      Var_113 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_113, 0) = ((MR_Box) ((MR_Unsigned) 31U));
      MR_hl_field(3, Var_113, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
    }
    {
      Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_112, 0) = ((MR_Box) (Var_113));
      MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_109, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[10])));
      MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[9])));
      MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_109));
    }
    {
      Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
      MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
    }
    {
      Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])));
      MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_103));
    }
    {
      Var_118 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_118, 0) = ((MR_Box) ((MR_Unsigned) 14U));
      MR_hl_field(3, Var_118, 1) = ((MR_Box) (SNA_31));
    }
    {
      Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_117, 0) = ((MR_Box) (Var_118));
      MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_116 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_117);
    Var_126 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[14])));
    Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_126, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])));
    Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[12])), Var_125);
    Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_116, Var_120);
    Pieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_100, Var_115);
    {
      Spec_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_53, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc\'/8"));
      MR_hl_field(0, Spec_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_53, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_53, 3) = ((MR_Box) (Context_22));
      MR_hl_field(0, Spec_53, 4) = ((MR_Box) (Pieces_52));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_69 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_53));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_83));
    }
    *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_2_97;
  }
  else
  {
    MR_Word RejectCause_54;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (PragmaForeignLanguage_50)), BackendForeignLangs_49);
    succeeded = !(succeeded);
    if (succeeded)
    {
      {
        RejectCause_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RejectCause_54, 0) = (MR_Box) ((MR_Unsigned) (PragmaForeignLanguage_50));
        MR_hl_field(1, RejectCause_54, 1) = ((MR_Box) (BackendForeignLangs_49));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word SpecificBackend_55;

      succeeded = (MaybeForSpecificBackend_51 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SpecificBackend_55 = ((MR_Word) ((MR_hl_field(1, MaybeForSpecificBackend_51, 0))));
        succeeded = (SpecificBackend_55 != CurrentBackend_48);
        if (succeeded)
        {
          RejectCause_54 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_PredInfo_4_141;
      MR_Word Var_138;

      succeeded = ((MR_tag((MR_Word) ItemMercurystatus_10)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_138 = ((MR_Word) ((MR_hl_field(1, ItemMercurystatus_10, 0))));
        succeeded = (Var_138 == (MR_Word) ((MR_Unsigned) 4U));
      }
      if (succeeded)
        hlds__make_hlds__add_foreign_proc__report_bad_foreign_proc_in_dot_opt_file_4_p_0(RejectCause_54, Context_22, STATE_VARIABLE_Specs_1_83, STATE_VARIABLE_Specs_69);
      else
        *STATE_VARIABLE_Specs_69 = STATE_VARIABLE_Specs_1_83;
      hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, STATE_VARIABLE_PredInfo_3_96, &STATE_VARIABLE_PredInfo_4_141);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_38, STATE_VARIABLE_PredInfo_4_141, STATE_VARIABLE_ModuleInfo_2_97, STATE_VARIABLE_ModuleInfo_67);
    }
    else
    {
      MR_Word Procs_56;
      MR_Word ExistingProcs_57;
      MR_Word Modes_58;
      MR_Integer ProcId_59;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_3_96, &Procs_56);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_56, &ExistingProcs_57);
      parse_tree__prog_data_foreign__pragma_get_modes_2_p_0(PragmaVars_18, &Modes_58);
      succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_2_97, ExistingProcs_57, Modes_58, &ProcId_59);
      if (succeeded)
      {
        MR_Word ArgTypes_60;
        MR_Word Purity_61;
        MR_Word Markers_62;
        MR_Word ClausesInfo_63;
        MR_Word ArgInfos_64;
        MR_Word ArgNameModes_65;
        MR_Word STATE_VARIABLE_Specs_4_143;
        MR_Word STATE_VARIABLE_PredInfo_5_144;
        MR_Word STATE_VARIABLE_PredInfo_4_188;

        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_3_96, &ArgTypes_60);
        hlds__hlds_pred__pred_info_get_purity_2_p_0(STATE_VARIABLE_PredInfo_3_96, &Purity_61);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_3_96, &Markers_62);
        hlds__make_hlds__add_foreign_proc__clauses_info_add_foreign_proc_18_p_0(STATE_VARIABLE_ModuleInfo_2_97, PredOrFunc_17, PredModuleName_24, PredName_25, PredId_38, ProcId_59, ProgVarSet_19, PragmaVars_18, ArgTypes_60, Purity_61, Attributes_47, Markers_62, Context_22, PragmaImpl_21, ClausesInfo1_44, &ClausesInfo_63, STATE_VARIABLE_Specs_1_83, &STATE_VARIABLE_Specs_4_143);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_63, STATE_VARIABLE_PredInfo_3_96, &STATE_VARIABLE_PredInfo_5_144);
        hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, STATE_VARIABLE_PredInfo_5_144, &STATE_VARIABLE_PredInfo_4_188);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_38, STATE_VARIABLE_PredInfo_4_188, STATE_VARIABLE_ModuleInfo_2_97, STATE_VARIABLE_ModuleInfo_67);
        parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(PragmaVars_18, &ArgInfos_64);
        ArgNameModes_65 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[3]), ArgInfos_64);
        hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(*STATE_VARIABLE_ModuleInfo_67, PragmaImpl_21, PragmaForeignLanguage_50, ArgNameModes_65, Context_22, PFSymNameArity_28, PredId_38, ProcId_59, STATE_VARIABLE_Specs_4_143, STATE_VARIABLE_Specs_69);
      }
      else
      {
        MR_Word Var_160;
        MR_Word Var_161;
        MR_Word Var_166;
        MR_Word Var_167;
        MR_Word Var_170;
        MR_Word Var_171;
        MR_Word Var_173;
        MR_Word Var_174;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Pieces_189;
        MR_Word Spec_190;

        Var_161 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[21])));
        {
          Var_171 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_171, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_171, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
        }
        {
          Var_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_170, 0) = ((MR_Box) (Var_171));
          MR_hl_field(1, Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_167, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[22])));
          MR_hl_field(1, Var_167, 1) = ((MR_Box) (Var_170));
        }
        {
          Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 14U));
          MR_hl_field(3, Var_176, 1) = ((MR_Box) (SNA_31));
        }
        {
          Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
          MR_hl_field(1, Var_175, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[24])));
        }
        Var_174 = parse_tree__error_spec__color_as_subject_1_f_0(Var_175);
        Var_173 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_174, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])));
        Var_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_167, Var_173);
        Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_161, Var_166);
        Pieces_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[19])), Var_160);
        {
          Spec_190 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_190, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc\'/8"));
          MR_hl_field(0, Spec_190, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_190, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_190, 3) = ((MR_Box) (Context_22));
          MR_hl_field(0, Spec_190, 4) = ((MR_Box) (Pieces_189));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_69 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_190));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_83));
        }
        *STATE_VARIABLE_ModuleInfo_67 = STATE_VARIABLE_ModuleInfo_2_97;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_foreign_proc_18_p_0(
  MR_Word ModuleInfo_19,
  MR_Word PredOrFunc_20,
  MR_Word PredModuleName_21,
  MR_String PredName_22,
  MR_Word PredId_23,
  MR_Integer ProcId_24,
  MR_Word VarSet_25,
  MR_Word PragmaVars_26,
  MR_Word OrigArgTypes_27,
  MR_Word Purity_28,
  MR_Word Attributes0_29,
  MR_Word Markers_30,
  MR_Word Context_31,
  MR_Word PragmaImpl0_32,
  MR_Word STATE_VARIABLE_ClausesInfo_0_44,
  MR_Word * STATE_VARIABLE_ClausesInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  MR_bool succeeded;
  MR_Word PredInfo_35;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_19, PredId_23, &PredInfo_35);
  succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_35);
  if (succeeded)
  {
    MR_Word Globals_36;
    MR_Word AllowDefnOfBuiltin_37;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_19, &Globals_36);
    libs__globals__lookup_bool_option_3_p_0(Globals_36, (MR_Integer) 762, &AllowDefnOfBuiltin_37);
    switch (AllowDefnOfBuiltin_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SymName_38;
          MR_Integer UserArityInt_39;
          MR_Word SNA_40;
          MR_Word Pieces_41;
          MR_Word Spec_42;
          MR_Word Var_49;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_60;
          MR_Word Var_61;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word Var_73;

          hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_35, &SymName_38);
          Var_49 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_35);
          UserArityInt_39 = (MR_Integer) (Var_49);
          {
            SNA_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SNA_40, 0) = ((MR_Box) (SymName_38));
            MR_hl_field(0, SNA_40, 1) = ((MR_Box) (UserArityInt_39));
          }
          Var_55 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[56])));
          {
            Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 31U));
            MR_hl_field(3, Var_65, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[59])));
          }
          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[57])));
            MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_64));
          }
          {
            Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 14U));
            MR_hl_field(3, Var_73, 1) = ((MR_Box) (SNA_40));
          }
          {
            Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
            MR_hl_field(1, Var_72, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[24])));
          }
          Var_71 = parse_tree__error_spec__color_as_subject_1_f_0(Var_72);
          Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_71, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])));
          Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_70);
          Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_55, Var_60);
          Pieces_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[54])), Var_54);
          {
            Spec_42 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_42, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_add_foreign_proc\'/18"));
            MR_hl_field(0, Spec_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_42, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_42, 3) = ((MR_Box) (Context_31));
            MR_hl_field(0, Spec_42, 4) = ((MR_Box) (Pieces_41));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_47 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_42));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_0_46;
        break;
    }
    *STATE_VARIABLE_ClausesInfo_45 = STATE_VARIABLE_ClausesInfo_0_44;
  }
  else
  {
    MR_Word AllProcIds_43;

    AllProcIds_43 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_35);
    hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_19_p_0(ModuleInfo_19, PredOrFunc_20, PredModuleName_21, PredName_22, PredId_23, ProcId_24, AllProcIds_43, VarSet_25, PragmaVars_26, OrigArgTypes_27, Purity_28, Attributes0_29, Markers_30, Context_31, PragmaImpl0_32, STATE_VARIABLE_ClausesInfo_0_44, STATE_VARIABLE_ClausesInfo_45, STATE_VARIABLE_Specs_0_46, STATE_VARIABLE_Specs_47);
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_19_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_237;

  conv1_HeadVar__3_237 = hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__clauses_info_do_add_foreign_proc__472__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_237));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_19_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_109;

  succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_foreign_proc__449__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_109);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_109));
    succeeded = MR_TRUE;
  }
  return succeeded;
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
  MR_Word STATE_VARIABLE_ClausesInfo_0_102,
  MR_Word * STATE_VARIABLE_ClausesInfo_103,
  MR_Word STATE_VARIABLE_Specs_0_104,
  MR_Word * STATE_VARIABLE_Specs_105)
{
  MR_bool succeeded;
  MR_Word VarSet0_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_102, 0))));
  MR_Word ExplicitVarTypes_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_102, 1))));
  MR_Word VarTable_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_102, 2))));
  MR_Word RttiVarMaps_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_102, 3))));
  MR_Word TVarNameMap_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_102, 4))));
  MR_Word HeadVars_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_102, 5))));
  MR_Word ClausesRep0_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_102, 6))));
  MR_Word ItemNumbers_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_102, 7))));
  MR_Word HadSyntaxError_46 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_102, 8))) & (MR_Integer) 1);
  MR_Word Clauses0_47;
  MR_Word Globals_48;
  MR_Word Target_49;
  MR_Word NewLang_50;
  MR_Word PredFormArity_51;
  MR_Word Overridden_52;
  MR_Word Clauses1_53;
  MR_Word ArgVars_54;
  MR_Word ArgInfos_55;
  MR_Word ArgVarBag0_56;
  MR_Word ArgVarBag_57;
  MR_Word ArgVarBagAssocList_58;
  MR_Word MultiplyOccurringArgVars_62;
  MR_Word STATE_VARIABLE_Specs_1_106;

  hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_43, &Clauses0_47);
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_20, &Globals_48);
  libs__globals__get_target_2_p_0(Globals_48, &Target_49);
  NewLang_50 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes0_31);
  PredFormArity_51 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OrigArgTypes_29);
  hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(Globals_48, PredOrFunc_21, PredModuleName_22, PredName_23, PredFormArity_51, Context_33, Target_49, NewLang_50, AllProcIds_26, ProcId_25, &Overridden_52, Clauses0_47, &Clauses1_53, STATE_VARIABLE_Specs_0_104, &STATE_VARIABLE_Specs_1_106);
  parse_tree__prog_data_foreign__pragma_get_vars_and_var_infos_3_p_0(PragmaVars_28, &ArgVars_54, &ArgInfos_55);
  mercury__bag__init_1_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), &ArgVarBag0_56);
  mercury__bag__insert_list_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), ArgVars_54, ArgVarBag0_56, &ArgVarBag_57);
  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), ArgVarBag_57, &ArgVarBagAssocList_58);
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[2]), ArgVarBagAssocList_58, &MultiplyOccurringArgVars_62);
  if ((MultiplyOccurringArgVars_62 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_32, (MR_Integer) 17);
    if (!(succeeded))
      succeeded = hlds__hlds_markers__marker_is_present_2_p_0(Markers_32, (MR_Integer) 18);
    if (succeeded)
      *STATE_VARIABLE_Specs_105 = STATE_VARIABLE_Specs_1_106;
    else
    {
      MR_Word ForeignAttributePurity_79;

      ForeignAttributePurity_79 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attributes0_31);
      succeeded = (ForeignAttributePurity_79 == Purity_30);
      if (succeeded)
        *STATE_VARIABLE_Specs_105 = STATE_VARIABLE_Specs_1_106;
      else
      {
        MR_String ForeignAttributePurityStr_80;
        MR_String PurityStr_81;
        MR_Word Pieces_82;
        MR_Word Var_172;
        MR_Word Var_175;
        MR_Word Var_176;
        MR_Word Var_181;
        MR_Word Var_182;
        MR_Word Var_183;
        MR_Word Var_184;
        MR_Word Var_189;
        MR_Word Var_190;
        MR_Word Var_193;
        MR_Word Var_194;
        MR_Word Var_199;
        MR_Word Var_200;
        MR_Word Var_201;
        MR_Word Var_202;
        MR_Word UserArity_226;
        MR_Word PredSymName_227;
        MR_Word PFSymNameArity_228;
        MR_Word Spec_229;

        {
          PredSymName_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PredSymName_227, 0) = ((MR_Box) (PredModuleName_22));
          MR_hl_field(1, PredSymName_227, 1) = ((MR_Box) (PredName_23));
        }
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_21, &UserArity_226, PredFormArity_51);
        {
          PFSymNameArity_228 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFSymNameArity_228, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
          MR_hl_field(0, PFSymNameArity_228, 1) = ((MR_Box) (PredSymName_227));
          MR_hl_field(0, PFSymNameArity_228, 2) = ((MR_Box) (UserArity_226));
        }
        parse_tree__parse_tree_out_misc__purity_name_2_p_0(ForeignAttributePurity_79, &ForeignAttributePurityStr_80);
        parse_tree__parse_tree_out_misc__purity_name_2_p_0(Purity_30, &PurityStr_81);
        {
          Var_176 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_176, 0) = ((MR_Box) ((MR_Unsigned) 19U));
          MR_hl_field(3, Var_176, 1) = ((MR_Box) (PFSymNameArity_228));
        }
        {
          Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_175, 0) = ((MR_Box) (Var_176));
          MR_hl_field(1, Var_175, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[62])));
        }
        {
          Var_172 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_172, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[60])));
          MR_hl_field(1, Var_172, 1) = ((MR_Box) (Var_175));
        }
        {
          Var_184 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_184, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_184, 1) = ((MR_Box) (ForeignAttributePurityStr_80));
        }
        {
          Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_183, 0) = ((MR_Box) (Var_184));
          MR_hl_field(1, Var_183, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[35])));
        }
        Var_182 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_183);
        {
          Var_194 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_194, 0) = ((MR_Box) ((MR_Unsigned) 31U));
          MR_hl_field(3, Var_194, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
        }
        {
          Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_193, 0) = ((MR_Box) (Var_194));
          MR_hl_field(1, Var_193, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[65])));
        }
        {
          Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_190, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[63])));
          MR_hl_field(1, Var_190, 1) = ((MR_Box) (Var_193));
        }
        {
          Var_202 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_202, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_202, 1) = ((MR_Box) (PurityStr_81));
        }
        {
          Var_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_201, 0) = ((MR_Box) (Var_202));
          MR_hl_field(1, Var_201, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[24])));
        }
        Var_200 = parse_tree__error_spec__color_as_correct_1_f_0(Var_201);
        Var_199 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_200, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])));
        Var_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_190, Var_199);
        Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_182, Var_189);
        Pieces_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_172, Var_181);
        {
          Spec_229 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_229, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_do_add_foreign_proc\'/19"));
          MR_hl_field(0, Spec_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_229, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_229, 3) = ((MR_Box) (Context_33));
          MR_hl_field(0, Spec_229, 4) = ((MR_Box) (Pieces_82));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_105 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_229));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_106));
        }
      }
    }
    switch (Overridden_52) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word GoalInfo_83;
          MR_Word HeadVarList_84;
          MR_Word ForeignArgs_85;
          MR_Word Attributes_86;
          MR_Word GoalExpr_89;
          MR_Word HldsGoal0_90;
          MR_Word EmptyExplicitVarTypes_91;
          MR_Word EmptyRttiVarmaps_92;
          MR_Word HldsGoal_94;
          MR_Word VarSet_95;
          MR_Word Clause_98;
          MR_Word Clauses_99;
          MR_Word ClausesRep_100;
          MR_Word Var_216;
          MR_Word Var_217;
          MR_Word Var_219;
          MR_Word Var_221;
          MR_Word _Warnings_93;
          MR_Word Var_96;
          MR_Word Var_97;

          hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_33, Purity_30, &GoalInfo_83);
          HeadVarList_84 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), HeadVars_42);
          hlds__hlds_goal__make_foreign_args_4_p_0(HeadVarList_84, ArgInfos_55, OrigArgTypes_29, &ForeignArgs_85);
          hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(Globals_48, ArgVars_54, HeadVarList_84, OrigArgTypes_29, Attributes0_31, &Attributes_86);
          {
            GoalExpr_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, GoalExpr_89, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, GoalExpr_89, 1) = ((MR_Box) (Attributes_86));
            MR_hl_field(3, GoalExpr_89, 2) = ((MR_Box) (PredId_24));
            MR_hl_field(3, GoalExpr_89, 3) = ((MR_Box) (ProcId_25));
            MR_hl_field(3, GoalExpr_89, 4) = ((MR_Box) (ForeignArgs_85));
            MR_hl_field(3, GoalExpr_89, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, GoalExpr_89, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, GoalExpr_89, 7) = ((MR_Box) (PragmaImpl_34));
          }
          {
            HldsGoal0_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HldsGoal0_90, 0) = ((MR_Box) (GoalExpr_89));
            MR_hl_field(0, HldsGoal0_90, 1) = ((MR_Box) (GoalInfo_83));
          }
          parse_tree__vartypes__init_vartypes_1_p_0(&EmptyExplicitVarTypes_91);
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_92);
          hlds__quantification__implicitly_quantify_clause_body_general_vs_12_p_0((MR_Integer) 0, (MR_Integer) 0, HeadVarList_84, &_Warnings_93, HldsGoal0_90, &HldsGoal_94, VarSet0_37, &VarSet_95, EmptyExplicitVarTypes_91, &Var_96, EmptyRttiVarmaps_92, &Var_97);
          {
            Var_217 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_217, 0) = ((MR_Box) (ProcId_25));
            MR_hl_field(1, Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_216, 0) = ((MR_Box) (Var_217));
          }
          {
            Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_219, 0) = (MR_Box) ((MR_Unsigned) (NewLang_50));
          }
          Var_221 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
          {
            Clause_98 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Clause_98, 0) = ((MR_Box) (Var_216));
            MR_hl_field(0, Clause_98, 1) = ((MR_Box) (HldsGoal_94));
            MR_hl_field(0, Clause_98, 2) = ((MR_Box) (Var_219));
            MR_hl_field(0, Clause_98, 3) = ((MR_Box) (Context_33));
            MR_hl_field(0, Clause_98, 4) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Clause_98, 5) = ((MR_Box) (Var_221));
            MR_hl_field(0, Clause_98, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Clauses_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Clauses_99, 0) = ((MR_Box) (Clause_98));
            MR_hl_field(1, Clauses_99, 1) = ((MR_Box) (Clauses1_53));
          }
          hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_99, &ClausesRep_100);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ClausesInfo_103 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (VarSet_95));
            MR_hl_field(0, base, 1) = ((MR_Box) (ExplicitVarTypes_38));
            MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_39));
            MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_40));
            MR_hl_field(0, base, 4) = ((MR_Box) (TVarNameMap_41));
            MR_hl_field(0, base, 5) = ((MR_Box) (HeadVars_42));
            MR_hl_field(0, base, 6) = ((MR_Box) (ClausesRep_100));
            MR_hl_field(0, base, 7) = ((MR_Box) (ItemNumbers_44));
            MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (HadSyntaxError_46)));
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_ClausesInfo_103 = STATE_VARIABLE_ClausesInfo_0_102;
        break;
    }
  }
  else
  {
    MR_Word UserArity_65;
    MR_Word PredSymName_66;
    MR_Word PFSymNameArity_67;
    MR_Word Pieces1_68;
    MR_Word Pieces2_71;
    MR_Word Spec_78;
    MR_Word Var_113;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_167;
    MR_Word Var_168;
    MR_Word Var_241;
    MR_Word Var_242;

    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_21, &UserArity_65, PredFormArity_51);
    {
      PredSymName_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredSymName_66, 0) = ((MR_Box) (PredModuleName_22));
      MR_hl_field(1, PredSymName_66, 1) = ((MR_Box) (PredName_23));
    }
    {
      PFSymNameArity_67 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFSymNameArity_67, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
      MR_hl_field(0, PFSymNameArity_67, 1) = ((MR_Box) (PredSymName_66));
      MR_hl_field(0, PFSymNameArity_67, 2) = ((MR_Box) (UserArity_65));
    }
    {
      Var_120 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_120, 0) = ((MR_Box) ((MR_Unsigned) 19U));
      MR_hl_field(3, Var_120, 1) = ((MR_Box) (PFSymNameArity_67));
    }
    {
      Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_119, 0) = ((MR_Box) (Var_120));
      MR_hl_field(1, Var_119, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[71])));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[16])));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_113, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
      MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_116));
    }
    {
      Pieces1_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces1_68, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[66])));
      MR_hl_field(1, Pieces1_68, 1) = ((MR_Box) (Var_113));
    }
    Var_242 = ((MR_Word) ((MR_hl_field(1, MultiplyOccurringArgVars_62, 0))));
    Var_241 = ((MR_Word) ((MR_hl_field(1, MultiplyOccurringArgVars_62, 1))));
    if ((Var_241 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word BadVarPiece_70;
      MR_Word Var_135;
      MR_Word Var_136;
      MR_Word Var_137;
      MR_Word Var_139;

      BadVarPiece_70 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PVarSet_27, Var_242);
      {
        Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_137, 0) = ((MR_Box) (BadVarPiece_70));
        MR_hl_field(1, Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_136 = parse_tree__error_spec__color_as_subject_1_f_0(Var_137);
      Var_139 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[75])));
      Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_136, Var_139);
      Pieces2_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[73])), Var_135);
    }
    else
    {
      MR_Word BadVarPieces_75;
      MR_Word BadVarsPieces_76;
      MR_Word Var_145;
      MR_Word Var_153;
      MR_Word Var_154;

      {
        Var_145 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_145, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[0]));
        MR_hl_field(0, Var_145, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_19_p_0_2));
        MR_hl_field(0, Var_145, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_145, 3) = ((MR_Box) (PVarSet_27));
      }
      BadVarPieces_75 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_145, MultiplyOccurringArgVars_62);
      BadVarsPieces_76 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), BadVarPieces_75);
      Var_154 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[79])));
      Var_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadVarsPieces_76, Var_154);
      Pieces2_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[77])), Var_153);
    }
    Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces2_71, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[81])));
    Var_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_68, Var_168);
    {
      Spec_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_78, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_do_add_foreign_proc\'/19"));
      MR_hl_field(0, Spec_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_78, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_78, 3) = ((MR_Box) (Context_33));
      MR_hl_field(0, Spec_78, 4) = ((MR_Box) (Var_167));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_105 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_78));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_1_106));
    }
    *STATE_VARIABLE_ClausesInfo_103 = STATE_VARIABLE_ClausesInfo_0_102;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__688__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
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
                MR_hl_field(0, Var_69, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[1]));
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

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 364, &SharingAnalysis_12);
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
hlds__make_hlds__add_foreign_proc__report_bad_foreign_proc_in_dot_opt_file_4_p_0_1(
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
hlds__make_hlds__add_foreign_proc__report_bad_foreign_proc_in_dot_opt_file_4_p_0(
  MR_Word RejectCause_5,
  MR_Word Context_6,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_Word MainPieces_14;
  MR_Word Pieces_20;
  MR_Word Spec_21;

  if ((RejectCause_5 == (MR_Word) ((MR_Unsigned) 0U)))
    MainPieces_14 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[32]));
  else
  {
    MR_Word PragmaLang_8 = ((MR_Unsigned) ((MR_hl_field(1, RejectCause_5, 0))) & (MR_Integer) 3);
    MR_Word BackendForeignLangs_9 = ((MR_Word) ((MR_hl_field(1, RejectCause_5, 1))));
    MR_String PragmaLangStr_10;
    MR_Word FrontPieces_11;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;

    PragmaLangStr_10 = libs__globals__foreign_language_string_1_f_0(PragmaLang_8);
    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (PragmaLangStr_10));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[35])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[33])));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      FrontPieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FrontPieces_11, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])));
      MR_hl_field(1, FrontPieces_11, 1) = ((MR_Box) (Var_26));
    }
    if ((BackendForeignLangs_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.report_bad_foreign_proc_in_dot_opt_file\'/4", (MR_String) "BackendForeignLangs = []");
        return;
      }
    else
    {
      MR_Word Var_121 = ((MR_Word) ((MR_hl_field(1, BackendForeignLangs_9, 1))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(1, BackendForeignLangs_9, 0))));

      if ((Var_121 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String BackendLangStr_13;
        MR_Word Var_41;
        MR_Word Var_44;
        MR_Word Var_47;
        MR_Word Var_50;
        MR_Word Var_51;

        BackendLangStr_13 = libs__globals__foreign_language_string_1_f_0(Var_122);
        {
          Var_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 9U));
          MR_hl_field(3, Var_51, 1) = ((MR_Box) (BackendLangStr_13));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[39])));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[38])));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[37])));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[36])));
          MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
        }
        MainPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FrontPieces_11, Var_41);
      }
      else
      {
        MR_Word BackendLangStrs_18;
        MR_Word BackendLangsStr_19;
        MR_Word Var_61;
        MR_Word Var_72;

        BackendLangStrs_18 = mercury__list__map_2_f_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[1]), BackendForeignLangs_9);
        BackendLangsStr_19 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", BackendLangStrs_18);
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BackendLangsStr_19, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[39])));
        Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[45])), Var_72);
        MainPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FrontPieces_11, Var_61);
      }
    }
  }
  Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_14, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[53])));
  {
    Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.report_bad_foreign_proc_in_dot_opt_file\'/4"));
    MR_hl_field(0, Spec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Pieces_20));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_23 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
  }
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
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_67;
  MR_Word conv0_STATE_VARIABLE_Specs_69;

  hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_67, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_69);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_67));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_69));
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
hlds__make_hlds__add_foreign_proc____Unify____reject_cause_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__add_foreign_proc____Unify____reject_cause_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc____Compare____reject_cause_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__add_foreign_proc____Compare____reject_cause_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

  MR_register_type_ctor_info(&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_overridden_by_old_foreign_proc_0);
  MR_register_type_ctor_info(&hlds__make_hlds__add_foreign_proc__hlds__make_hlds__add_foreign_proc__type_ctor_info_reject_cause_0);
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
