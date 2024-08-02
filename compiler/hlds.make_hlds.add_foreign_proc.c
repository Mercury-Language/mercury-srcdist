/*
** Automatically generated from `add_foreign_proc.m'
** by the Mercury compiler,
** version rotd-2024-08-02
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
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
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
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__701__1_2_p_0(
  MR_Word LaterOverridden_32,
  MR_Word HeadVar__2_70);

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__clauses_info_do_add_foreign_proc__486__1_2_f_0(
  MR_Word PVarSet_27,
  MR_Word HeadVar__2_237);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_foreign_proc__463__1_2_p_0(
  MR_Word LambdaHeadVar__1_111,
  MR_Word * LambdaHeadVar__2_112);

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
hlds__make_hlds__add_foreign_proc__clauses_info_add_foreign_proc_19_p_0(
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
  MR_Word STATE_VARIABLE_ClausesInfo_0_45,
  MR_Word * STATE_VARIABLE_ClausesInfo_46,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50);

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_20_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_20_p_0(
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
  MR_Word STATE_VARIABLE_ClausesInfo_0_103,
  MR_Word * STATE_VARIABLE_ClausesInfo_104,
  MR_Word STATE_VARIABLE_ModuleInfo_0_105,
  MR_Word * STATE_VARIABLE_ModuleInfo_106,
  MR_Word STATE_VARIABLE_Specs_0_107,
  MR_Word * STATE_VARIABLE_Specs_108);

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
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57);

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


static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[97][2];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_2[4][3];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_3[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_5[1][6];




static /* final */ const MR_Box hlds__make_hlds__add_foreign_proc_scalar_common_1[97][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "name"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration is"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "ambiguous."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declarations are allowed only for predicates and"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "functions defined in the current module, but"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "imported."))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[26]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "undeclared mode"))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[30]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[33]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it is not for the current grade."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "whose backend attribute states that"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration in a .opt file"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[38])))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration in a .opt file for a foreign language,"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[44]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which differs from"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the only language supported by the current backend,"))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which are"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[50]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "languages supported by the current backend,"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "which is not one of the"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for the current grade."))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "You will need to rebuild this file"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "was generated for a different grade."))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[59])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This indicates that the .opt file"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[19]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "you cannot redefine"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[65]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a builtin"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "such as"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[68]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: foreign clause for"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has purity"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[71]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but that"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has been declared"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[80]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variable"))
  },
  /* row  83 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[82]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "occurs more than once"))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "variables"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "each occur more than once"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in the argument list."))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[90]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "duplicate"))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[92]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[7])))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for this mode of"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The first one was here."))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[95]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])))
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
    ((MR_Box) (hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_20_p_0_1)),
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
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__701__1_2_p_0(
  MR_Word LaterOverridden_32,
  MR_Word HeadVar__2_70)
{
  MR_bool succeeded = (LaterOverridden_32 == HeadVar__2_70);

  return succeeded;
}

static MR_Word MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__clauses_info_do_add_foreign_proc__486__1_2_f_0(
  MR_Word PVarSet_27,
  MR_Word HeadVar__2_237)
{
  MR_Word HeadVar__3_238;

  HeadVar__3_238 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PVarSet_27, HeadVar__2_237);
  return HeadVar__3_238;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_foreign_proc__463__1_2_p_0(
  MR_Word LambdaHeadVar__1_111,
  MR_Word * LambdaHeadVar__2_112)
{
  MR_bool succeeded;
  MR_Integer Occurrences_62;

  *LambdaHeadVar__2_112 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_111, (MR_Integer) 0))));
  Occurrences_62 = ((MR_Integer) ((MR_hl_field(0, LambdaHeadVar__1_111, (MR_Integer) 1))));
  succeeded = (Occurrences_62 > (MR_Integer) 1);
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 3);
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_70,
  MR_Word * STATE_VARIABLE_ModuleInfo_71,
  MR_Word STATE_VARIABLE_Specs_0_72,
  MR_Word * STATE_VARIABLE_Specs_73)
{
  MR_bool succeeded;
  MR_Word Attributes0_15 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, (MR_Integer) 0))));
  MR_Word PredSymName_16 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, (MR_Integer) 1))));
  MR_Word PredOrFunc_17 = ((MR_Unsigned) ((MR_hl_field(0, FPInfo_12, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word PragmaVars_18 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, (MR_Integer) 3))));
  MR_Word ProgVarSet_19 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, (MR_Integer) 4))));
  MR_Word PragmaImpl_21 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, (MR_Integer) 6))));
  MR_Word Context_22 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, (MR_Integer) 7))));
  MR_Word SeqNum_23 = ((MR_Word) ((MR_hl_field(0, FPInfo_12, (MR_Integer) 8))));
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
  MR_Word PredIds_37;
  MR_Word PredId_39;
  MR_Word ClausesInfo0_45;
  MR_Word ItemNumbers0_46;
  MR_Word ItemNumbers_47;
  MR_Word ClausesInfo1_48;
  MR_Word MaybeThreadSafe_49;
  MR_Word ThreadSafe_50;
  MR_Word Attributes_51;
  MR_Word CurrentBackend_52;
  MR_Word BackendForeignLangs_53;
  MR_Word PragmaForeignLanguage_54;
  MR_Word MaybeForSpecificBackend_55;
  MR_Word STATE_VARIABLE_ModuleInfo_87_87;
  MR_Word STATE_VARIABLE_Specs_88_88;
  MR_Word STATE_VARIABLE_PredInfo_135_135;
  MR_Word STATE_VARIABLE_PredInfo_138_138;
  MR_Word STATE_VARIABLE_PredInfo_141_141;
  MR_Word STATE_VARIABLE_ModuleInfo_142_142;
  MR_Word Var_136;
  MR_Word Var_246;
  MR_Word Var_247;
  MR_Word Var_248;
  MR_Word Var_249;
  MR_Word Var_250;
  MR_Word Var_251;
  MR_Word Var_252;
  MR_Unsigned packed_word_2;

  if (((MR_tag((MR_Word) PredSymName_16)) == (MR_Integer) 1))
  {
    PredModuleName_24 = ((MR_Word) ((MR_hl_field(1, PredSymName_16, (MR_Integer) 0))));
    PredName_25 = ((MR_String) ((MR_hl_field(1, PredSymName_16, (MR_Integer) 1))));
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
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_70, &Globals_32);
  libs__globals__lookup_bool_option_3_p_0(Globals_32, (MR_Integer) 76, &VeryVerbose_33);
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
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_70, &PredTable0_36);
  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(PredTable0_36, (MR_Integer) 0, PredOrFunc_17, PredModuleName_24, PredName_25, PredFormArity_27, &PredIds_37);
  if ((PredIds_37 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Origin_38;
    MR_Word Var_84;

    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_84, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      MR_hl_field(0, Var_84, 1) = ((MR_Box) (PredSymName_16));
      MR_hl_field(0, Var_84, 2) = ((MR_Box) (UserArity_29));
    }
    {
      Origin_38 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Origin_38, 0) = ((MR_Box) (Var_84));
    }
    hlds__make_hlds__add_pred__add_implicit_pred_decl_report_error_14_p_0(PredOrFunc_17, PredModuleName_24, PredName_25, PredFormArity_27, PredStatus_11, (MR_Integer) 0, Context_22, Origin_38, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[7])), &PredId_39, STATE_VARIABLE_ModuleInfo_0_70, &STATE_VARIABLE_ModuleInfo_87_87, STATE_VARIABLE_Specs_0_72, &STATE_VARIABLE_Specs_88_88);
  }
  else
  {
    MR_Word Var_267 = ((MR_Word) ((MR_hl_field(1, PredIds_37, (MR_Integer) 1))));
    MR_Word Var_268 = ((MR_Word) ((MR_hl_field(1, PredIds_37, (MR_Integer) 0))));

    if ((Var_267 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PredId_39 = Var_268;
      STATE_VARIABLE_ModuleInfo_87_87 = STATE_VARIABLE_ModuleInfo_0_70;
      STATE_VARIABLE_Specs_88_88 = STATE_VARIABLE_Specs_0_72;
    }
    else
    {
      MR_Word AmbiPieces_42;
      MR_Word AmbiSpec_43;
      MR_Word Var_97;
      MR_Word Var_100;
      MR_Word Var_101;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_111;
      MR_Word Var_122;
      MR_Word Var_123;

      PredId_39 = Var_268;
      {
        Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 28U));
        MR_hl_field(3, Var_101, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
      }
      {
        Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
        MR_hl_field(1, Var_100, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[10])));
      }
      {
        Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[8])));
        MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
      }
      {
        Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 11U));
        MR_hl_field(3, Var_109, 1) = ((MR_Box) (SNA_31));
      }
      {
        Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_108, 0) = ((MR_Box) (Var_109));
        MR_hl_field(1, Var_108, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_107 = parse_tree__error_spec__color_as_subject_1_f_0(Var_108);
      Var_123 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[17])));
      Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])));
      Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[15])), Var_122);
      Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_107, Var_111);
      AmbiPieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_97, Var_106);
      {
        AmbiSpec_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, AmbiSpec_43, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc\'/8"));
        MR_hl_field(0, AmbiSpec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, AmbiSpec_43, 2) = ((MR_Box) ((MR_Unsigned) 44U));
        MR_hl_field(0, AmbiSpec_43, 3) = ((MR_Box) (Context_22));
        MR_hl_field(0, AmbiSpec_43, 4) = ((MR_Box) (AmbiPieces_42));
      }
      {
        STATE_VARIABLE_Specs_88_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_88_88, 0) = ((MR_Box) (AmbiSpec_43));
        MR_hl_field(1, STATE_VARIABLE_Specs_88_88, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_72));
      }
      STATE_VARIABLE_ModuleInfo_87_87 = STATE_VARIABLE_ModuleInfo_0_70;
    }
  }
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_87_87, PredId_39, &STATE_VARIABLE_PredInfo_135_135);
  Var_136 = (MR_Word) (PredStatus_11);
  succeeded = (Var_136 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    hlds__hlds_pred__pred_info_set_status_3_p_0((MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), STATE_VARIABLE_PredInfo_135_135, &STATE_VARIABLE_PredInfo_138_138);
  else
    STATE_VARIABLE_PredInfo_138_138 = STATE_VARIABLE_PredInfo_135_135;
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(STATE_VARIABLE_PredInfo_138_138, &ClausesInfo0_45);
  ItemNumbers0_46 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_45, (MR_Integer) 7))));
  hlds__hlds_clauses__add_clause_item_number_5_p_0(SeqNum_23, Context_22, (MR_Integer) 1, ItemNumbers0_46, &ItemNumbers_47);
  Var_246 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_45, (MR_Integer) 0))));
  Var_247 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_45, (MR_Integer) 1))));
  Var_248 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_45, (MR_Integer) 2))));
  Var_249 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_45, (MR_Integer) 3))));
  Var_250 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_45, (MR_Integer) 4))));
  Var_251 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_45, (MR_Integer) 5))));
  Var_252 = ((MR_Word) ((MR_hl_field(0, ClausesInfo0_45, (MR_Integer) 6))));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, ClausesInfo0_45, (MR_Integer) 8)));
  {
    ClausesInfo1_48 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ClausesInfo1_48, 0) = ((MR_Box) (Var_246));
    MR_hl_field(0, ClausesInfo1_48, 1) = ((MR_Box) (Var_247));
    MR_hl_field(0, ClausesInfo1_48, 2) = ((MR_Box) (Var_248));
    MR_hl_field(0, ClausesInfo1_48, 3) = ((MR_Box) (Var_249));
    MR_hl_field(0, ClausesInfo1_48, 4) = ((MR_Box) (Var_250));
    MR_hl_field(0, ClausesInfo1_48, 5) = ((MR_Box) (Var_251));
    MR_hl_field(0, ClausesInfo1_48, 6) = ((MR_Box) (Var_252));
    MR_hl_field(0, ClausesInfo1_48, 7) = ((MR_Box) (ItemNumbers_47));
    MR_hl_field(0, ClausesInfo1_48, 8) = (MR_Box) (packed_word_2);
  }
  hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo1_48, STATE_VARIABLE_PredInfo_138_138, &STATE_VARIABLE_PredInfo_141_141);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_39, STATE_VARIABLE_PredInfo_141_141, STATE_VARIABLE_ModuleInfo_87_87, &STATE_VARIABLE_ModuleInfo_142_142);
  libs__globals__get_maybe_thread_safe_2_p_0(Globals_32, &MaybeThreadSafe_49);
  ThreadSafe_50 = parse_tree__prog_data_foreign__get_thread_safe_1_f_0(Attributes0_15);
  switch (ThreadSafe_50) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
      switch (MaybeThreadSafe_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 0, Attributes0_15, &Attributes_51);
          break;
        case (MR_Integer) 1:
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, Attributes0_15, &Attributes_51);
          break;
      }
      break;
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      Attributes_51 = Attributes0_15;
      break;
  }
  CurrentBackend_52 = libs__globals__lookup_current_backend_1_f_0(Globals_32);
  libs__globals__get_backend_foreign_languages_2_p_0(Globals_32, &BackendForeignLangs_53);
  PragmaForeignLanguage_54 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes_51);
  MaybeForSpecificBackend_55 = parse_tree__prog_data_foreign__get_for_specific_backend_1_f_0(Attributes_51);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(STATE_VARIABLE_PredInfo_141_141);
  if (succeeded)
  {
    MR_Word Pieces_56;
    MR_Word Spec_57;
    MR_Word Var_145;
    MR_Word Var_148;
    MR_Word Var_151;
    MR_Word Var_154;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_165;
    MR_Word Var_170;
    MR_Word Var_171;

    {
      Var_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_158, 0) = ((MR_Box) ((MR_Unsigned) 28U));
      MR_hl_field(3, Var_158, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
    }
    {
      Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_157, 0) = ((MR_Box) (Var_158));
      MR_hl_field(1, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_154, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[21])));
      MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_157));
    }
    {
      Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_151, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[20])));
      MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_154));
    }
    {
      Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_148, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
      MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_151));
    }
    {
      Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_145, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[19])));
      MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_148));
    }
    {
      Var_163 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_163, 0) = ((MR_Box) ((MR_Unsigned) 11U));
      MR_hl_field(3, Var_163, 1) = ((MR_Box) (SNA_31));
    }
    {
      Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_162, 0) = ((MR_Box) (Var_163));
      MR_hl_field(1, Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_161 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_162);
    Var_171 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[25])));
    Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_171, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])));
    Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[23])), Var_170);
    Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_161, Var_165);
    Pieces_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_145, Var_160);
    {
      Spec_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_57, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc\'/8"));
      MR_hl_field(0, Spec_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_57, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_57, 3) = ((MR_Box) (Context_22));
      MR_hl_field(0, Spec_57, 4) = ((MR_Box) (Pieces_56));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_73 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_57));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_88_88));
    }
    *STATE_VARIABLE_ModuleInfo_71 = STATE_VARIABLE_ModuleInfo_142_142;
  }
  else
  {
    MR_Word RejectCause_58;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (PragmaForeignLanguage_54)), BackendForeignLangs_53);
    succeeded = !(succeeded);
    if (succeeded)
    {
      {
        RejectCause_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RejectCause_58, 0) = (MR_Box) ((MR_Unsigned) (PragmaForeignLanguage_54));
        MR_hl_field(1, RejectCause_58, 1) = ((MR_Box) (BackendForeignLangs_53));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word SpecificBackend_59;

      succeeded = (MaybeForSpecificBackend_55 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        SpecificBackend_59 = ((MR_Word) ((MR_hl_field(1, MaybeForSpecificBackend_55, (MR_Integer) 0))));
        succeeded = (SpecificBackend_59 != CurrentBackend_52);
        if (succeeded)
        {
          RejectCause_58 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_PredInfo_186_186;
      MR_Word Var_183;

      succeeded = ((MR_tag((MR_Word) ItemMercurystatus_10)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_183 = ((MR_Word) ((MR_hl_field(1, ItemMercurystatus_10, (MR_Integer) 0))));
        succeeded = (Var_183 == (MR_Word) ((MR_Unsigned) 4U));
      }
      if (succeeded)
        hlds__make_hlds__add_foreign_proc__report_bad_foreign_proc_in_dot_opt_file_4_p_0(RejectCause_58, Context_22, STATE_VARIABLE_Specs_88_88, STATE_VARIABLE_Specs_73);
      else
        *STATE_VARIABLE_Specs_73 = STATE_VARIABLE_Specs_88_88;
      hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, STATE_VARIABLE_PredInfo_141_141, &STATE_VARIABLE_PredInfo_186_186);
      hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_39, STATE_VARIABLE_PredInfo_186_186, STATE_VARIABLE_ModuleInfo_142_142, STATE_VARIABLE_ModuleInfo_71);
    }
    else
    {
      MR_Word Procs_60;
      MR_Word ExistingProcs_61;
      MR_Word Modes_62;
      MR_Integer ProcId_63;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(STATE_VARIABLE_PredInfo_141_141, &Procs_60);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), Procs_60, &ExistingProcs_61);
      parse_tree__prog_data_foreign__pragma_get_modes_2_p_0(PragmaVars_18, &Modes_62);
      succeeded = hlds__hlds_code_util__get_procedure_matching_declmodes_with_renaming_4_p_0(STATE_VARIABLE_ModuleInfo_142_142, ExistingProcs_61, Modes_62, &ProcId_63);
      if (succeeded)
      {
        MR_Word ArgTypes_64;
        MR_Word Purity_65;
        MR_Word Markers_66;
        MR_Word ClausesInfo_67;
        MR_Word ArgInfos_68;
        MR_Word ArgNameModes_69;
        MR_Word STATE_VARIABLE_ModuleInfo_188_188;
        MR_Word STATE_VARIABLE_Specs_189_189;
        MR_Word STATE_VARIABLE_PredInfo_190_190;
        MR_Word STATE_VARIABLE_PredInfo_186_234;

        hlds__hlds_pred__pred_info_get_arg_types_2_p_0(STATE_VARIABLE_PredInfo_141_141, &ArgTypes_64);
        hlds__hlds_pred__pred_info_get_purity_2_p_0(STATE_VARIABLE_PredInfo_141_141, &Purity_65);
        hlds__hlds_pred__pred_info_get_markers_2_p_0(STATE_VARIABLE_PredInfo_141_141, &Markers_66);
        hlds__make_hlds__add_foreign_proc__clauses_info_add_foreign_proc_19_p_0(PredOrFunc_17, PredModuleName_24, PredName_25, PredId_39, ProcId_63, ProgVarSet_19, PragmaVars_18, ArgTypes_64, Purity_65, Attributes_51, Markers_66, Context_22, PragmaImpl_21, ClausesInfo1_48, &ClausesInfo_67, STATE_VARIABLE_ModuleInfo_142_142, &STATE_VARIABLE_ModuleInfo_188_188, STATE_VARIABLE_Specs_88_88, &STATE_VARIABLE_Specs_189_189);
        hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(ClausesInfo_67, STATE_VARIABLE_PredInfo_141_141, &STATE_VARIABLE_PredInfo_190_190);
        hlds__hlds_pred__pred_info_update_goal_type_3_p_0((MR_Integer) 2, STATE_VARIABLE_PredInfo_190_190, &STATE_VARIABLE_PredInfo_186_234);
        hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_39, STATE_VARIABLE_PredInfo_186_234, STATE_VARIABLE_ModuleInfo_188_188, STATE_VARIABLE_ModuleInfo_71);
        parse_tree__prog_data_foreign__pragma_get_var_infos_2_p_0(PragmaVars_18, &ArgInfos_68);
        ArgNameModes_69 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_box_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[3]), ArgInfos_68);
        hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(*STATE_VARIABLE_ModuleInfo_71, PragmaImpl_21, PragmaForeignLanguage_54, ArgNameModes_69, Context_22, PFSymNameArity_28, PredId_39, ProcId_63, STATE_VARIABLE_Specs_189_189, STATE_VARIABLE_Specs_73);
      }
      else
      {
        MR_Word Var_206;
        MR_Word Var_207;
        MR_Word Var_212;
        MR_Word Var_213;
        MR_Word Var_216;
        MR_Word Var_217;
        MR_Word Var_219;
        MR_Word Var_220;
        MR_Word Var_221;
        MR_Word Var_222;
        MR_Word Pieces_235;
        MR_Word Spec_236;

        Var_207 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[31])));
        {
          Var_217 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_217, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_217, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
        }
        {
          Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_216, 0) = ((MR_Box) (Var_217));
          MR_hl_field(1, Var_216, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_213, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[32])));
          MR_hl_field(1, Var_213, 1) = ((MR_Box) (Var_216));
        }
        {
          Var_222 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_222, 0) = ((MR_Box) ((MR_Unsigned) 11U));
          MR_hl_field(3, Var_222, 1) = ((MR_Box) (SNA_31));
        }
        {
          Var_221 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_221, 0) = ((MR_Box) (Var_222));
          MR_hl_field(1, Var_221, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[34])));
        }
        Var_220 = parse_tree__error_spec__color_as_subject_1_f_0(Var_221);
        Var_219 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_220, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])));
        Var_212 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_213, Var_219);
        Var_206 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_207, Var_212);
        Pieces_235 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[29])), Var_206);
        {
          Spec_236 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_236, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc\'/8"));
          MR_hl_field(0, Spec_236, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_236, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_236, 3) = ((MR_Box) (Context_22));
          MR_hl_field(0, Spec_236, 4) = ((MR_Box) (Pieces_235));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_73 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_236));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_88_88));
        }
        *STATE_VARIABLE_ModuleInfo_71 = STATE_VARIABLE_ModuleInfo_142_142;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_add_foreign_proc_19_p_0(
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
  MR_Word STATE_VARIABLE_ClausesInfo_0_45,
  MR_Word * STATE_VARIABLE_ClausesInfo_46,
  MR_Word STATE_VARIABLE_ModuleInfo_0_47,
  MR_Word * STATE_VARIABLE_ModuleInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  MR_bool succeeded;
  MR_Word PredInfo_36;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_47, PredId_23, &PredInfo_36);
  succeeded = hlds__hlds_pred__pred_info_is_builtin_1_p_0(PredInfo_36);
  if (succeeded)
  {
    MR_Word Globals_37;
    MR_Word AllowDefnOfBuiltin_38;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_47, &Globals_37);
    libs__globals__lookup_bool_option_3_p_0(Globals_37, (MR_Integer) 344, &AllowDefnOfBuiltin_38);
    switch (AllowDefnOfBuiltin_38) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SymName_39;
          MR_Integer UserArityInt_40;
          MR_Word SNA_41;
          MR_Word Pieces_42;
          MR_Word Spec_43;
          MR_Word Var_52;
          MR_Word Var_57;
          MR_Word Var_58;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_73;
          MR_Word Var_74;
          MR_Word Var_75;
          MR_Word Var_76;

          hlds__hlds_pred__pred_info_get_sym_name_2_p_0(PredInfo_36, &SymName_39);
          Var_52 = hlds__hlds_pred__pred_info_user_arity_1_f_0(PredInfo_36);
          UserArityInt_40 = (MR_Integer) (Var_52);
          {
            SNA_41 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, SNA_41, 0) = ((MR_Box) (SymName_39));
            MR_hl_field(0, SNA_41, 1) = ((MR_Box) (UserArityInt_40));
          }
          Var_58 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[66])));
          {
            Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 28U));
            MR_hl_field(3, Var_68, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_20));
          }
          {
            Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(1, Var_67, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[69])));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[67])));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
          }
          {
            Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 11U));
            MR_hl_field(3, Var_76, 1) = ((MR_Box) (SNA_41));
          }
          {
            Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
            MR_hl_field(1, Var_75, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[34])));
          }
          Var_74 = parse_tree__error_spec__color_as_subject_1_f_0(Var_75);
          Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])));
          Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_64, Var_73);
          Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_58, Var_63);
          Pieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[64])), Var_57);
          {
            Spec_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Spec_43, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_add_foreign_proc\'/19"));
            MR_hl_field(0, Spec_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Spec_43, 2) = ((MR_Box) ((MR_Unsigned) 44U));
            MR_hl_field(0, Spec_43, 3) = ((MR_Box) (Context_31));
            MR_hl_field(0, Spec_43, 4) = ((MR_Box) (Pieces_42));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_50 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Spec_43));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_49));
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
        break;
    }
    *STATE_VARIABLE_ModuleInfo_48 = STATE_VARIABLE_ModuleInfo_0_47;
    *STATE_VARIABLE_ClausesInfo_46 = STATE_VARIABLE_ClausesInfo_0_45;
  }
  else
  {
    MR_Word AllProcIds_44;

    AllProcIds_44 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_36);
    hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_20_p_0(PredOrFunc_20, PredModuleName_21, PredName_22, PredId_23, ProcId_24, AllProcIds_44, VarSet_25, PragmaVars_26, OrigArgTypes_27, Purity_28, Attributes0_29, Markers_30, Context_31, PragmaImpl0_32, STATE_VARIABLE_ClausesInfo_0_45, STATE_VARIABLE_ClausesInfo_46, STATE_VARIABLE_ModuleInfo_0_47, STATE_VARIABLE_ModuleInfo_48, STATE_VARIABLE_Specs_0_49, STATE_VARIABLE_Specs_50);
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_20_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_238;

  conv1_HeadVar__3_238 = hlds__make_hlds__add_foreign_proc__IntroducedFrom__func__clauses_info_do_add_foreign_proc__486__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_238));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_112;

  succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__clauses_info_do_add_foreign_proc__463__1_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_112);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_112));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_20_p_0(
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
  MR_Word STATE_VARIABLE_ClausesInfo_0_103,
  MR_Word * STATE_VARIABLE_ClausesInfo_104,
  MR_Word STATE_VARIABLE_ModuleInfo_0_105,
  MR_Word * STATE_VARIABLE_ModuleInfo_106,
  MR_Word STATE_VARIABLE_Specs_0_107,
  MR_Word * STATE_VARIABLE_Specs_108)
{
  MR_bool succeeded;
  MR_Word VarSet0_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 0))));
  MR_Word ExplicitVarTypes_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 1))));
  MR_Word VarTable_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 2))));
  MR_Word RttiVarMaps_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 3))));
  MR_Word TVarNameMap_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 4))));
  MR_Word HeadVars_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 5))));
  MR_Word ClausesRep0_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 6))));
  MR_Word ItemNumbers_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 7))));
  MR_Word HadSyntaxError_47 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_ClausesInfo_0_103, (MR_Integer) 8))) & (MR_Integer) 1);
  MR_Word Clauses0_48;
  MR_Word Globals_49;
  MR_Word Target_50;
  MR_Word NewLang_51;
  MR_Word PredFormArity_52;
  MR_Word Overridden_53;
  MR_Word Clauses1_54;
  MR_Word ArgVars_55;
  MR_Word ArgInfos_56;
  MR_Word ArgVarBag0_57;
  MR_Word ArgVarBag_58;
  MR_Word ArgVarBagAssocList_59;
  MR_Word MultiplyOccurringArgVars_63;
  MR_Word STATE_VARIABLE_Specs_109_109;

  hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(ClausesRep0_44, &Clauses0_48);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_105, &Globals_49);
  libs__globals__get_target_2_p_0(Globals_49, &Target_50);
  NewLang_51 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attributes0_31);
  PredFormArity_52 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), OrigArgTypes_29);
  hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(Globals_49, PredOrFunc_21, PredModuleName_22, PredName_23, PredFormArity_52, Context_33, Target_50, NewLang_51, AllProcIds_26, ProcId_25, &Overridden_53, Clauses0_48, &Clauses1_54, STATE_VARIABLE_Specs_0_107, &STATE_VARIABLE_Specs_109_109);
  parse_tree__prog_data_foreign__pragma_get_vars_and_var_infos_3_p_0(PragmaVars_28, &ArgVars_55, &ArgInfos_56);
  mercury__bag__init_1_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), &ArgVarBag0_57);
  mercury__bag__insert_list_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), ArgVars_55, ArgVarBag0_57, &ArgVarBag_58);
  mercury__bag__to_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), ArgVarBag_58, &ArgVarBagAssocList_59);
  mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_2[2]), ArgVarBagAssocList_59, &MultiplyOccurringArgVars_63);
  if ((MultiplyOccurringArgVars_63 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_32, (MR_Integer) 16);
    if (!(succeeded))
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_32, (MR_Integer) 17);
    if (succeeded)
      *STATE_VARIABLE_Specs_108 = STATE_VARIABLE_Specs_109_109;
    else
    {
      MR_Word ForeignAttributePurity_80;

      ForeignAttributePurity_80 = parse_tree__prog_data_foreign__get_purity_1_f_0(Attributes0_31);
      succeeded = (ForeignAttributePurity_80 == Purity_30);
      if (succeeded)
        *STATE_VARIABLE_Specs_108 = STATE_VARIABLE_Specs_109_109;
      else
      {
        MR_String ForeignAttributePurityStr_81;
        MR_String PurityStr_82;
        MR_Word Pieces_83;
        MR_Word Var_175;
        MR_Word Var_178;
        MR_Word Var_179;
        MR_Word Var_184;
        MR_Word Var_185;
        MR_Word Var_186;
        MR_Word Var_187;
        MR_Word Var_192;
        MR_Word Var_193;
        MR_Word Var_196;
        MR_Word Var_197;
        MR_Word Var_202;
        MR_Word Var_203;
        MR_Word Var_204;
        MR_Word Var_205;
        MR_Word UserArity_227;
        MR_Word PredSymName_228;
        MR_Word PFSymNameArity_229;
        MR_Word Spec_230;

        {
          PredSymName_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, PredSymName_228, 0) = ((MR_Box) (PredModuleName_22));
          MR_hl_field(1, PredSymName_228, 1) = ((MR_Box) (PredName_23));
        }
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_21, &UserArity_227, PredFormArity_52);
        {
          PFSymNameArity_229 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, PFSymNameArity_229, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
          MR_hl_field(0, PFSymNameArity_229, 1) = ((MR_Box) (PredSymName_228));
          MR_hl_field(0, PFSymNameArity_229, 2) = ((MR_Box) (UserArity_227));
        }
        parse_tree__parse_tree_out_misc__purity_name_2_p_0(ForeignAttributePurity_80, &ForeignAttributePurityStr_81);
        parse_tree__parse_tree_out_misc__purity_name_2_p_0(Purity_30, &PurityStr_82);
        {
          Var_179 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_179, 0) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(3, Var_179, 1) = ((MR_Box) (PFSymNameArity_229));
        }
        {
          Var_178 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_178, 0) = ((MR_Box) (Var_179));
          MR_hl_field(1, Var_178, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[72])));
        }
        {
          Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_175, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[70])));
          MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_178));
        }
        {
          Var_187 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_187, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_187, 1) = ((MR_Box) (ForeignAttributePurityStr_81));
        }
        {
          Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_186, 0) = ((MR_Box) (Var_187));
          MR_hl_field(1, Var_186, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[45])));
        }
        Var_185 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_186);
        {
          Var_197 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_197, 0) = ((MR_Box) ((MR_Unsigned) 28U));
          MR_hl_field(3, Var_197, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
        }
        {
          Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_196, 0) = ((MR_Box) (Var_197));
          MR_hl_field(1, Var_196, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[75])));
        }
        {
          Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_193, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[73])));
          MR_hl_field(1, Var_193, 1) = ((MR_Box) (Var_196));
        }
        {
          Var_205 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_205, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_205, 1) = ((MR_Box) (PurityStr_82));
        }
        {
          Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_204, 0) = ((MR_Box) (Var_205));
          MR_hl_field(1, Var_204, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[34])));
        }
        Var_203 = parse_tree__error_spec__color_as_correct_1_f_0(Var_204);
        Var_202 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_203, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[18])));
        Var_192 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_193, Var_202);
        Var_184 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_185, Var_192);
        Pieces_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_175, Var_184);
        {
          Spec_230 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Spec_230, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_do_add_foreign_proc\'/20"));
          MR_hl_field(0, Spec_230, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Spec_230, 2) = ((MR_Box) ((MR_Unsigned) 44U));
          MR_hl_field(0, Spec_230, 3) = ((MR_Box) (Context_33));
          MR_hl_field(0, Spec_230, 4) = ((MR_Box) (Pieces_83));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_108 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Spec_230));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_109_109));
        }
      }
    }
    switch (Overridden_53) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word GoalInfo_84;
          MR_Word HeadVarList_85;
          MR_Word ForeignArgs_86;
          MR_Word Attributes_87;
          MR_Word GoalExpr_90;
          MR_Word HldsGoal0_91;
          MR_Word EmptyExplicitVarTypes_92;
          MR_Word EmptyRttiVarmaps_93;
          MR_Word HldsGoal_95;
          MR_Word VarSet_96;
          MR_Word Clause_99;
          MR_Word Clauses_100;
          MR_Word ClausesRep_101;
          MR_Word Var_219;
          MR_Word Var_220;
          MR_Word Var_222;
          MR_Word _Warnings_94;
          MR_Word Var_97;
          MR_Word Var_98;

          hlds__hlds_goal__goal_info_init_context_purity_3_p_0(Context_33, Purity_30, &GoalInfo_84);
          HeadVarList_85 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), HeadVars_43);
          hlds__hlds_goal__make_foreign_args_4_p_0(HeadVarList_85, ArgInfos_56, OrigArgTypes_29, &ForeignArgs_86);
          hlds__make_hlds__add_foreign_proc__maybe_rename_user_annotated_sharing_information_6_p_0(Globals_49, ArgVars_55, HeadVarList_85, OrigArgTypes_29, Attributes0_31, &Attributes_87);
          {
            GoalExpr_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, GoalExpr_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(3, GoalExpr_90, 1) = ((MR_Box) (Attributes_87));
            MR_hl_field(3, GoalExpr_90, 2) = ((MR_Box) (PredId_24));
            MR_hl_field(3, GoalExpr_90, 3) = ((MR_Box) (ProcId_25));
            MR_hl_field(3, GoalExpr_90, 4) = ((MR_Box) (ForeignArgs_86));
            MR_hl_field(3, GoalExpr_90, 5) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, GoalExpr_90, 6) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, GoalExpr_90, 7) = ((MR_Box) (PragmaImpl_34));
          }
          {
            HldsGoal0_91 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HldsGoal0_91, 0) = ((MR_Box) (GoalExpr_90));
            MR_hl_field(0, HldsGoal0_91, 1) = ((MR_Box) (GoalInfo_84));
          }
          parse_tree__vartypes__init_vartypes_1_p_0(&EmptyExplicitVarTypes_92);
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&EmptyRttiVarmaps_93);
          hlds__quantification__implicitly_quantify_clause_body_general_vs_12_p_0((MR_Integer) 0, (MR_Integer) 0, HeadVarList_85, &_Warnings_94, HldsGoal0_91, &HldsGoal_95, VarSet0_38, &VarSet_96, EmptyExplicitVarTypes_92, &Var_97, EmptyRttiVarmaps_93, &Var_98);
          {
            Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_220, 0) = ((MR_Box) (ProcId_25));
            MR_hl_field(1, Var_220, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_219 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_219, 0) = ((MR_Box) (Var_220));
          }
          {
            Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_222, 0) = (MR_Box) ((MR_Unsigned) (NewLang_51));
          }
          {
            Clause_99 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Clause_99, 0) = ((MR_Box) (Var_219));
            MR_hl_field(0, Clause_99, 1) = ((MR_Box) (HldsGoal_95));
            MR_hl_field(0, Clause_99, 2) = ((MR_Box) (Var_222));
            MR_hl_field(0, Clause_99, 3) = ((MR_Box) (Context_33));
            MR_hl_field(0, Clause_99, 4) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Clauses_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Clauses_100, 0) = ((MR_Box) (Clause_99));
            MR_hl_field(1, Clauses_100, 1) = ((MR_Box) (Clauses1_54));
          }
          hlds__hlds_clauses__set_clause_list_2_p_0(Clauses_100, &ClausesRep_101);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ClausesInfo_104 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (VarSet_96));
            MR_hl_field(0, base, 1) = ((MR_Box) (ExplicitVarTypes_39));
            MR_hl_field(0, base, 2) = ((MR_Box) (VarTable_40));
            MR_hl_field(0, base, 3) = ((MR_Box) (RttiVarMaps_41));
            MR_hl_field(0, base, 4) = ((MR_Box) (TVarNameMap_42));
            MR_hl_field(0, base, 5) = ((MR_Box) (HeadVars_43));
            MR_hl_field(0, base, 6) = ((MR_Box) (ClausesRep_101));
            MR_hl_field(0, base, 7) = ((MR_Box) (ItemNumbers_45));
            MR_hl_field(0, base, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) (HadSyntaxError_47)));
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_ClausesInfo_104 = STATE_VARIABLE_ClausesInfo_0_103;
        break;
    }
  }
  else
  {
    MR_Word UserArity_66;
    MR_Word PredSymName_67;
    MR_Word PFSymNameArity_68;
    MR_Word Pieces1_69;
    MR_Word Pieces2_72;
    MR_Word Spec_79;
    MR_Word Var_116;
    MR_Word Var_119;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_242;
    MR_Word Var_243;

    parse_tree__prog_util__user_arity_pred_form_arity_3_p_1(PredOrFunc_21, &UserArity_66, PredFormArity_52);
    {
      PredSymName_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PredSymName_67, 0) = ((MR_Box) (PredModuleName_22));
      MR_hl_field(1, PredSymName_67, 1) = ((MR_Box) (PredName_23));
    }
    {
      PFSymNameArity_68 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PFSymNameArity_68, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_21));
      MR_hl_field(0, PFSymNameArity_68, 1) = ((MR_Box) (PredSymName_67));
      MR_hl_field(0, PFSymNameArity_68, 2) = ((MR_Box) (UserArity_66));
    }
    {
      Var_123 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_123, 0) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(3, Var_123, 1) = ((MR_Box) (PFSymNameArity_68));
    }
    {
      Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_122, 0) = ((MR_Box) (Var_123));
      MR_hl_field(1, Var_122, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[81])));
    }
    {
      Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_119, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[26])));
      MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_119));
    }
    {
      Pieces1_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces1_69, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[76])));
      MR_hl_field(1, Pieces1_69, 1) = ((MR_Box) (Var_116));
    }
    Var_243 = ((MR_Word) ((MR_hl_field(1, MultiplyOccurringArgVars_63, (MR_Integer) 0))));
    Var_242 = ((MR_Word) ((MR_hl_field(1, MultiplyOccurringArgVars_63, (MR_Integer) 1))));
    if ((Var_242 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word BadVarPiece_71;
      MR_Word Var_138;
      MR_Word Var_139;
      MR_Word Var_140;
      MR_Word Var_142;

      BadVarPiece_71 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), PVarSet_27, Var_243);
      {
        Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_140, 0) = ((MR_Box) (BadVarPiece_71));
        MR_hl_field(1, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_139 = parse_tree__error_spec__color_as_subject_1_f_0(Var_140);
      Var_142 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[85])));
      Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_139, Var_142);
      Pieces2_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[83])), Var_138);
    }
    else
    {
      MR_Word BadVarPieces_76;
      MR_Word BadVarsPieces_77;
      MR_Word Var_148;
      MR_Word Var_156;
      MR_Word Var_157;

      {
        Var_148 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_148, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_5[0]));
        MR_hl_field(0, Var_148, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__clauses_info_do_add_foreign_proc_20_p_0_2));
        MR_hl_field(0, Var_148, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_148, 3) = ((MR_Box) (PVarSet_27));
      }
      BadVarPieces_76 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[2]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_148, MultiplyOccurringArgVars_63);
      BadVarsPieces_77 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), BadVarPieces_76);
      Var_157 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[89])));
      Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadVarsPieces_77, Var_157);
      Pieces2_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[87])), Var_156);
    }
    Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces2_72, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[91])));
    Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_69, Var_171);
    {
      Spec_79 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_79, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.clauses_info_do_add_foreign_proc\'/20"));
      MR_hl_field(0, Spec_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_79, 2) = ((MR_Box) ((MR_Unsigned) 44U));
      MR_hl_field(0, Spec_79, 3) = ((MR_Box) (Context_33));
      MR_hl_field(0, Spec_79, 4) = ((MR_Box) (Var_170));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_108 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_79));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_109_109));
    }
    *STATE_VARIABLE_ClausesInfo_104 = STATE_VARIABLE_ClausesInfo_0_103;
  }
  *STATE_VARIABLE_ModuleInfo_106 = STATE_VARIABLE_ModuleInfo_0_105;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_foreign_proc__IntroducedFrom__pred__add_foreign_proc_update_existing_clauses__701__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
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
  MR_Word STATE_VARIABLE_Specs_0_56,
  MR_Word * STATE_VARIABLE_Specs_57)
{
  MR_bool succeeded;

  if ((Clauses0_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Clauses_28 = (MR_Word) ((MR_Unsigned) 0U);
    *Overridden_26 = (MR_Integer) 1;
    *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_0_56;
  }
  else
  {
    MR_Word FirstClause0_30 = ((MR_Word) ((MR_hl_field(1, Clauses0_27, (MR_Integer) 0))));
    MR_Word LaterClauses0_31 = ((MR_Word) ((MR_hl_field(1, Clauses0_27, (MR_Integer) 1))));
    MR_Word LaterOverridden_32;
    MR_Word LaterClauses_33;
    MR_Word ApplProcIds0_34;
    MR_Word Body_35;
    MR_Word FirstClauseLang_36;
    MR_Word FirstClauseContext_37;
    MR_Word StateVarWarnings_38;
    MR_Word STATE_VARIABLE_Specs_58_58;

    hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0(Globals_16, PredOrFunc_17, PredModuleName_18, PredName_19, PredFormArity_20, NewContext_21, Target_22, NewLang_23, AllProcIds_24, NewClauseProcId_25, &LaterOverridden_32, LaterClauses0_31, &LaterClauses_33, STATE_VARIABLE_Specs_0_56, &STATE_VARIABLE_Specs_58_58);
    ApplProcIds0_34 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, (MR_Integer) 0))));
    Body_35 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, (MR_Integer) 1))));
    FirstClauseLang_36 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, (MR_Integer) 2))));
    FirstClauseContext_37 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, (MR_Integer) 3))));
    StateVarWarnings_38 = ((MR_Word) ((MR_hl_field(0, FirstClause0_30, (MR_Integer) 4))));
    if ((FirstClauseLang_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word ProcIds0_39;
      MR_Word ProcIds_40;

      switch (MR_tag((MR_Word) ApplProcIds0_34)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(ApplProcIds0_34)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ProcIds0_39 = AllProcIds_24;
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
          ProcIds0_39 = ((MR_Word) ((MR_hl_field(1, ApplProcIds0_34, (MR_Integer) 0))));
          break;
      }
      succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds0_39, ((MR_Box) (NewClauseProcId_25)), &ProcIds_40);
      if (succeeded)
        if ((ProcIds_40 == (MR_Word) ((MR_Unsigned) 0U)))
          *Clauses_28 = LaterClauses_33;
        else
        {
          MR_Word FirstClause_43;
          MR_Word Var_61;

          {
            Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_61, 0) = ((MR_Box) (ProcIds_40));
          }
          {
            FirstClause_43 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, FirstClause_43, 0) = ((MR_Box) (Var_61));
            MR_hl_field(0, FirstClause_43, 1) = ((MR_Box) (Body_35));
            MR_hl_field(0, FirstClause_43, 2) = ((MR_Box) (FirstClauseLang_36));
            MR_hl_field(0, FirstClause_43, 3) = ((MR_Box) (FirstClauseContext_37));
            MR_hl_field(0, FirstClause_43, 4) = ((MR_Box) (StateVarWarnings_38));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *Clauses_28 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (FirstClause_43));
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
      *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
    }
    else
    {
      MR_Word OldLang_44 = ((MR_Unsigned) ((MR_hl_field(1, FirstClauseLang_36, (MR_Integer) 0))) & (MR_Integer) 3);
      MR_Word ProcIds0_122;
      MR_Word ProcIds_120;

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
          ProcIds0_122 = ((MR_Word) ((MR_hl_field(1, ApplProcIds0_34, (MR_Integer) 0))));
          break;
      }
      succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ProcIds0_122, ((MR_Box) (NewClauseProcId_25)), &ProcIds_120);
      if (succeeded)
      {
        MR_Word PreferNewForeignLang_45;

        PreferNewForeignLang_45 = parse_tree__prog_foreign__prefer_foreign_language_4_f_0(Globals_16, Target_22, OldLang_44, NewLang_23);
        switch (PreferNewForeignLang_45) {
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
              succeeded = (OldLang_44 == NewLang_23);
              if (succeeded)
              {
                MR_Word PredSymName_48;
                MR_Word PFSymNameArity_49;
                MR_String OldLangStr_50;
                MR_Word PiecesA_51;
                MR_Word MsgA_53;
                MR_Word MsgB_54;
                MR_Word Spec_55;
                MR_Word Var_75;
                MR_Word Var_76;
                MR_Word Var_87;
                MR_Word Var_90;
                MR_Word Var_91;
                MR_Word Var_92;
                MR_Word Var_95;
                MR_Word Var_96;
                MR_Word Var_111;
                MR_Word Var_112;

                {
                  PredSymName_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, PredSymName_48, 0) = ((MR_Box) (PredModuleName_18));
                  MR_hl_field(1, PredSymName_48, 1) = ((MR_Box) (PredName_19));
                }
                {
                  PFSymNameArity_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, PFSymNameArity_49, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_17));
                  MR_hl_field(0, PFSymNameArity_49, 1) = ((MR_Box) (PredSymName_48));
                  MR_hl_field(0, PFSymNameArity_49, 2) = ((MR_Box) (PredFormArity_20));
                }
                OldLangStr_50 = libs__globals__foreign_language_string_1_f_0(OldLang_44);
                Var_76 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[93])));
                {
                  Var_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_91, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                  MR_hl_field(3, Var_91, 1) = ((MR_Box) (PFSymNameArity_49));
                }
                {
                  Var_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, Var_96, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, Var_96, 1) = ((MR_Box) (OldLangStr_50));
                }
                {
                  Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
                  MR_hl_field(1, Var_95, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[49])));
                }
                {
                  Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_92, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[14])));
                  MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_95));
                }
                {
                  Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
                  MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
                }
                {
                  Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_87, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[94])));
                  MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_90));
                }
                Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_76, Var_87);
                PiecesA_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[64])), Var_75);
                {
                  MsgA_53 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MsgA_53, 0) = ((MR_Box) (NewContext_21));
                  MR_hl_field(0, MsgA_53, 1) = ((MR_Box) (PiecesA_51));
                }
                {
                  MsgB_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MsgB_54, 0) = ((MR_Box) (FirstClauseContext_37));
                  MR_hl_field(0, MsgB_54, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[96])));
                }
                {
                  Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_112, 0) = ((MR_Box) (MsgB_54));
                  MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_111, 0) = ((MR_Box) (MsgA_53));
                  MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_112));
                }
                {
                  Spec_55 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Spec_55, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15"));
                  MR_hl_field(2, Spec_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(2, Spec_55, 2) = ((MR_Box) ((MR_Unsigned) 44U));
                  MR_hl_field(2, Spec_55, 3) = ((MR_Box) (Var_111));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_57 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Spec_55));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_58_58));
                }
              }
              else
                *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_67;

              if ((ProcIds_120 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                *Clauses_28 = LaterClauses_33;
                *Overridden_26 = LaterOverridden_32;
              }
              else
              {
                MR_Word Var_66;
                MR_Word FirstClause_115;

                {
                  Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_66, 0) = ((MR_Box) (ProcIds_120));
                }
                {
                  FirstClause_115 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, FirstClause_115, 0) = ((MR_Box) (Var_66));
                  MR_hl_field(0, FirstClause_115, 1) = ((MR_Box) (Body_35));
                  MR_hl_field(0, FirstClause_115, 2) = ((MR_Box) (FirstClauseLang_36));
                  MR_hl_field(0, FirstClause_115, 3) = ((MR_Box) (FirstClauseContext_37));
                  MR_hl_field(0, FirstClause_115, 4) = ((MR_Box) (StateVarWarnings_38));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Clauses_28 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (FirstClause_115));
                  MR_hl_field(1, base, 1) = ((MR_Box) (LaterClauses_33));
                }
                *Overridden_26 = LaterOverridden_32;
              }
              {
                Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_67, 0) = ((MR_Box) (&hlds__make_hlds__add_foreign_proc_scalar_common_4[1]));
                MR_hl_field(0, Var_67, 1) = ((MR_Box) (hlds__make_hlds__add_foreign_proc__add_foreign_proc_update_existing_clauses_15_p_0_1));
                MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_67, 3) = ((MR_Box) (LaterOverridden_32));
                MR_hl_field(0, Var_67, 4) = ((MR_Box) ((MR_Integer) 1));
              }
              mercury__require__expect_3_p_0(Var_67, (MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.add_foreign_proc_update_existing_clauses\'/15", (MR_String) "inconsistent old foreign_procs");
              *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
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
        *STATE_VARIABLE_Specs_57 = STATE_VARIABLE_Specs_58_58;
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

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 531, &SharingAnalysis_12);
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
    MainPieces_14 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[42]));
  else
  {
    MR_Word PragmaLang_8 = ((MR_Unsigned) ((MR_hl_field(1, RejectCause_5, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word BackendForeignLangs_9 = ((MR_Word) ((MR_hl_field(1, RejectCause_5, (MR_Integer) 1))));
    MR_String PragmaLangStr_10;
    MR_Word FrontPieces_11;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_33;

    PragmaLangStr_10 = libs__globals__foreign_language_string_1_f_0(PragmaLang_8);
    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (PragmaLangStr_10));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[45])));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[43])));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_26, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[6])));
      MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_29));
    }
    {
      FrontPieces_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FrontPieces_11, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[19])));
      MR_hl_field(1, FrontPieces_11, 1) = ((MR_Box) (Var_26));
    }
    if ((BackendForeignLangs_9 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_foreign_proc.report_bad_foreign_proc_in_dot_opt_file\'/4", (MR_String) "BackendForeignLangs = []");
        return;
      }
    else
    {
      MR_Word Var_121 = ((MR_Word) ((MR_hl_field(1, BackendForeignLangs_9, (MR_Integer) 1))));
      MR_Word Var_122 = ((MR_Word) ((MR_hl_field(1, BackendForeignLangs_9, (MR_Integer) 0))));

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
          MR_hl_field(3, Var_51, 0) = ((MR_Box) ((MR_Unsigned) 6U));
          MR_hl_field(3, Var_51, 1) = ((MR_Box) (BackendLangStr_13));
        }
        {
          Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(1, Var_50, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[49])));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[48])));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[47])));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_foreign_proc_scalar_common_1[46])));
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
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BackendLangsStr_19, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[49])));
        Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[55])), Var_72);
        MainPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), FrontPieces_11, Var_61);
      }
    }
  }
  Pieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainPieces_14, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_foreign_proc_scalar_common_1[63])));
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
  MR_Word conv1_STATE_VARIABLE_ModuleInfo_71;
  MR_Word conv0_STATE_VARIABLE_Specs_73;

  hlds__make_hlds__add_foreign_proc__add_foreign_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ModuleInfo_71, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Specs_73);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ModuleInfo_71));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_73));
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
      MR_Word ImsSubList_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ImsSubLists_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ItemMercuryStatus_19 = ((MR_Word) ((MR_hl_field(0, ImsSubList_15, (MR_Integer) 0))));
      MR_Word PragmaFPInfos_20 = ((MR_Word) ((MR_hl_field(0, ImsSubList_15, (MR_Integer) 1))));
      MR_Word PredStatus_21;
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_ModuleInfo_27_27;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Box conv3_STATE_VARIABLE_ModuleInfo_27_27;
      MR_Box conv2_STATE_VARIABLE_Specs_28_28;
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
      mercury__list__foldl2_6_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_foreign_proc_info_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__add_foreign_proc_scalar_common_1[0]), Var_26, PragmaFPInfos_20, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_3)), &conv3_STATE_VARIABLE_ModuleInfo_27_27, ((MR_Box) (STATE_VARIABLE_Specs_0_5)), &conv2_STATE_VARIABLE_Specs_28_28);
      STATE_VARIABLE_ModuleInfo_27_27 = ((MR_Word) (conv3_STATE_VARIABLE_ModuleInfo_27_27));
      STATE_VARIABLE_Specs_28_28 = ((MR_Word) (conv2_STATE_VARIABLE_Specs_28_28));
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = ImsSubLists_16;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_27_27;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_28_28;
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
