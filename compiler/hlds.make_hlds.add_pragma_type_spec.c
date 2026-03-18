/*
** Automatically generated from `add_pragma_type_spec.m'
** by the Mercury compiler,
** version rotd-2026-03-18
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


// :- module hlds.make_hlds.add_pragma_type_spec.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma_type_spec__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma_type_spec.mih"


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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "hlds.hlds_error_util.mih"
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
#include "hlds.make_hlds_error.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.build_eqv_maps.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.prog_type_scan.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__item_types__type_ctor_info_recomp_item_id_0;

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__638__1_2_f_0(
  MR_Word VarSet_6,
  MR_Word HeadVar__2_23);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__record_type_specialization__511__1_3_p_0(
  MR_Word PredId_12,
  MR_Integer LambdaHeadVar__1_45,
  MR_Word * LambdaHeadVar__2_46);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__check_pragma_type_spec_subst__265__1_1_f_0(
  MR_Word LambdaHeadVar__1_66);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__247__1_2_p_0(
  MR_Word ExistQVars_38,
  MR_Word LambdaHeadVar__1_65);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__219__1_3_p_0(
  MR_Word TVarSet0_7,
  MR_Word NameVarIndex0_23,
  MR_Word LambdaHeadVar__1_63);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__206__1_3_p_0(
  MR_Word LambdaHeadVar__1_57,
  MR_Word * LambdaHeadVar__2_58,
  MR_Word * LambdaHeadVar__3_59);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__tvar_subst_desc_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * STATE_VARIABLE_ProcInfo_5);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_for_pred_8_p_0(
  MR_Word TypeSpec_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_QualInfo_0_47,
  MR_Word * STATE_VARIABLE_QualInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word SymName_9,
  MR_Word UserArity_10,
  MR_Word PredStatus_11,
  MR_Word TypeSpecInfo_12,
  MR_Word STATE_VARIABLE_QualInfo_0_20,
  MR_Word * STATE_VARIABLE_QualInfo_21);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0(
  MR_Word TypeSpecInfo0_11,
  MR_Word PredId_12,
  MR_Word ForcingPredId_13,
  MR_Word SpecPredStatus_14,
  MR_Word SpecProcIds_15,
  MR_Word RenamedSubst_16,
  MR_Word TVarSet_17,
  MR_Word PFUMM_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_forcing_caller_of_pred_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_forcing_caller_of_pred_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_forcing_caller_of_pred_14_p_0(
  MR_Word PredId_15,
  MR_Word PredInfo0_16,
  MR_Word PredFormArity_17,
  MR_Word TypeSpecInfo0_18,
  MR_Word TVarSet_19,
  MR_Word Types_20,
  MR_Word ExistQVars_21,
  MR_Word Constraints_22,
  MR_Word ForcingProcTable0_23,
  MR_Word ApplicableModes_24,
  MR_Word * ForcingPredId_25,
  MR_Word * ForcingPredStatus_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_78,
  MR_Word * STATE_VARIABLE_ModuleInfo_79);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__find_pred_procs_to_type_spec_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ProcTable_12,
  MR_Word TVarSet_13,
  MR_Word Context_14,
  MR_Word PFUMM0_15,
  MR_Word * MaybeSpecProcs_16);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0(
  MR_Word PredInfo0_6,
  MR_Word TVarSet0_7,
  MR_Word Subst_8,
  MR_Word Context_9,
  MR_Word * MaybeSubstResult_10);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word UnknownVars_9,
  MR_Word * Spec_10);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word MultiSubstVars_9,
  MR_Word * Spec_10);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word RecursiveVars_9,
  MR_Word * Spec_10);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Context_6,
  MR_Word SubExistQVars_7,
  MR_Word * Spec_8);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_1[27][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_4[1][11];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_5[4][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_6[4][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_7[1][7];




static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_1[27][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error: the substitution includes the"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "existentially quantified"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "on both sides of the substitution."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "multiple replacement types."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[13])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[13])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_2[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[2])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_forcing_caller_of_pred_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[3])),
    ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_forcing_caller_of_pred_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_3[3][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_5[4][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_6[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma_type_spec_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__item_types__type_ctor_info_recomp_item_id_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__record_uses__recompilation__record_uses__type_ctor_info_recompilation_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__item_types__type_ctor_info_recomp_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&recompilation__item_types__recompilation__item_types__type_ctor_info_recomp_item_id_0) }
};

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__638__1_2_f_0(
  MR_Word VarSet_6,
  MR_Word HeadVar__2_23)
{
  MR_Word HeadVar__3_24;

  HeadVar__3_24 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), VarSet_6, HeadVar__2_23);
  return HeadVar__3_24;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__record_type_specialization__511__1_3_p_0(
  MR_Word PredId_12,
  MR_Integer LambdaHeadVar__1_45,
  MR_Word * LambdaHeadVar__2_46)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_46 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredId_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (LambdaHeadVar__1_45));
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__check_pragma_type_spec_subst__265__1_1_f_0(
  MR_Word LambdaHeadVar__1_66)
{
  MR_Word LambdaHeadVar__2_67;
  MR_Word TVar_78 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_66, 0))));
  MR_Word Type_79 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_66, 1))));

  {
    LambdaHeadVar__2_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_67, 0) = ((MR_Box) (TVar_78));
    MR_hl_field(0, LambdaHeadVar__2_67, 1) = ((MR_Box) (Type_79));
  }
  return LambdaHeadVar__2_67;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__247__1_2_p_0(
  MR_Word ExistQVars_38,
  MR_Word LambdaHeadVar__1_65)
{
  MR_bool succeeded;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), ((MR_Box) (LambdaHeadVar__1_65)), ExistQVars_38);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__219__1_3_p_0(
  MR_Word TVarSet0_7,
  MR_Word NameVarIndex0_23,
  MR_Word LambdaHeadVar__1_63)
{
  MR_bool succeeded;
  MR_String VarName_25;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_7, LambdaHeadVar__1_63, &VarName_25);
  succeeded = mercury__map__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), NameVarIndex0_23, ((MR_Box) (VarName_25)));
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__206__1_3_p_0(
  MR_Word LambdaHeadVar__1_57,
  MR_Word * LambdaHeadVar__2_58,
  MR_Word * LambdaHeadVar__3_59)
{
  *LambdaHeadVar__2_58 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_57, 0))));
  *LambdaHeadVar__3_59 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_57, 1))));
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma_type_spec__tvar_subst_desc_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word TVar_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Word Type_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Integer Var_5;

  Var_5 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVar_3);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (Type_4));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * STATE_VARIABLE_ProcInfo_5)
{
  MR_Word STATE_VARIABLE_ProcInfo_1_6;

  hlds__hlds_pred__proc_info_reset_imported_structure_sharing_2_p_0(STATE_VARIABLE_ProcInfo_0_4, &STATE_VARIABLE_ProcInfo_1_6);
  hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_p_0(STATE_VARIABLE_ProcInfo_1_6, STATE_VARIABLE_ProcInfo_5);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_for_pred_8_p_0(
  MR_Word TypeSpec_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_45,
  MR_Word * STATE_VARIABLE_ModuleInfo_46,
  MR_Word STATE_VARIABLE_QualInfo_0_47,
  MR_Word * STATE_VARIABLE_QualInfo_48,
  MR_Word STATE_VARIABLE_Specs_0_49,
  MR_Word * STATE_VARIABLE_Specs_50)
{
  MR_bool succeeded;
  MR_Word PFUMM0_14 = ((MR_Word) ((MR_hl_field(0, TypeSpec_9, 0))));
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, TypeSpec_9, 1))));
  MR_Word Subst_17 = ((MR_Word) ((MR_hl_field(0, TypeSpec_9, 3))));
  MR_Word TVarSet0_18 = ((MR_Word) ((MR_hl_field(0, TypeSpec_9, 4))));
  MR_Word Context_20 = ((MR_Word) ((MR_hl_field(0, TypeSpec_9, 6))));
  MR_Word PredInfo0_22;
  MR_Word MaybeSubstResult_23;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_45, PredId_10, &PredInfo0_22);
  hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0(PredInfo0_22, TVarSet0_18, Subst_17, Context_20, &MaybeSubstResult_23);
  if (((MR_tag((MR_Word) MaybeSubstResult_23)) == (MR_Integer) 0))
  {
    MR_Word SubstSpecs_44 = ((MR_Word) ((MR_hl_field(0, MaybeSubstResult_23, 0))));

    *STATE_VARIABLE_Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SubstSpecs_44, STATE_VARIABLE_Specs_0_49);
    *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_0_45;
    *STATE_VARIABLE_QualInfo_48 = STATE_VARIABLE_QualInfo_0_47;
  }
  else
  {
    MR_Word TVarSet_24 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, 0))));
    MR_Word Types_25 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, 1))));
    MR_Word ExistQVars_26 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, 2))));
    MR_Word ClassContext_27 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, 3))));
    MR_Word RenamedSubst_28 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, 4))));
    MR_Word ProcTable0_29;
    MR_Word MaybeSpecProcs_30;
    MR_Word Globals_31;
    MR_Word OptTuple_32;
    MR_Word DoTypeSpec_33;
    MR_Word Smart_34;
    MR_Word ForcingProcTable0_35;
    MR_Word ApplicableModes_36;
    MR_Word ForcingProcIds_37;
    MR_Word UserArity_38;
    MR_Word PredFormArity_39;
    MR_Word PFUMM_40;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_22, &ProcTable0_29);
    hlds__make_hlds__add_pragma_type_spec__find_pred_procs_to_type_spec_8_p_0(STATE_VARIABLE_ModuleInfo_0_45, PredId_10, PredInfo0_22, ProcTable0_29, TVarSet0_18, Context_20, PFUMM0_14, &MaybeSpecProcs_30);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_45, &Globals_31);
    libs__globals__get_opt_tuple_2_p_0(Globals_31, &OptTuple_32);
    DoTypeSpec_33 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_32, 0))) >> 1)) & (MR_Integer) 1);
    libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 654, &Smart_34);
    succeeded = ((MR_tag((MR_Word) MaybeSpecProcs_30)) == (MR_Integer) 1);
    if (succeeded)
    {
      ForcingProcTable0_35 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 0))));
      ApplicableModes_36 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 1))));
      ForcingProcIds_37 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 2))));
      UserArity_38 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 3))));
      PredFormArity_39 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 4))));
      PFUMM_40 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, 5))));
      succeeded = (DoTypeSpec_33 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_22);
        succeeded = !(succeeded);
        if (!(succeeded))
          succeeded = (Smart_34 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word ForcingPredId_41;
      MR_Word ForcingPredStatus_42;
      MR_Word PredOrFunc_43;
      MR_Word STATE_VARIABLE_ModuleInfo_1_52;

      hlds__make_hlds__add_pragma_type_spec__add_forcing_caller_of_pred_14_p_0(PredId_10, PredInfo0_22, PredFormArity_39, TypeSpec_9, TVarSet_24, Types_25, ExistQVars_26, ClassContext_27, ForcingProcTable0_35, ApplicableModes_36, &ForcingPredId_41, &ForcingPredStatus_42, STATE_VARIABLE_ModuleInfo_0_45, &STATE_VARIABLE_ModuleInfo_1_52);
      hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0(TypeSpec_9, PredId_10, ForcingPredId_41, ForcingPredStatus_42, ForcingProcIds_37, RenamedSubst_28, TVarSet_24, PFUMM_40, STATE_VARIABLE_ModuleInfo_1_52, STATE_VARIABLE_ModuleInfo_46);
      PredOrFunc_43 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_22);
      hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0(PredOrFunc_43, SymName_15, UserArity_38, ForcingPredStatus_42, TypeSpec_9, STATE_VARIABLE_QualInfo_0_47, STATE_VARIABLE_QualInfo_48);
      *STATE_VARIABLE_Specs_50 = STATE_VARIABLE_Specs_0_49;
    }
    else
    {
      MR_Word Var_56;

      Var_56 = parse_tree__maybe_error__get_any_errors6_1_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[0]), (MR_Word) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_applicable_modes_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_func_or_unknown_maybe_modes_0), MaybeSpecProcs_30);
      *STATE_VARIABLE_Specs_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_56, STATE_VARIABLE_Specs_0_49);
      *STATE_VARIABLE_QualInfo_48 = STATE_VARIABLE_QualInfo_0_47;
      *STATE_VARIABLE_ModuleInfo_46 = STATE_VARIABLE_ModuleInfo_0_45;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  recompilation__record_uses__record_gathered_item_deps_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word SymName_9,
  MR_Word UserArity_10,
  MR_Word PredStatus_11,
  MR_Word TypeSpecInfo_12,
  MR_Word STATE_VARIABLE_QualInfo_0_20,
  MR_Word * STATE_VARIABLE_QualInfo_21)
{
  MR_Word IsImported_14;

  IsImported_14 = hlds__status__pred_status_is_imported_1_f_0(PredStatus_11);
  switch (IsImported_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_QualInfo_21 = STATE_VARIABLE_QualInfo_0_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Word ItemType_15;
        MR_Integer UserArityInt_16;
        MR_Word ItemName_17;
        MR_Word ItemId_18;
        MR_Word ItemRecompDeps_19;
        MR_Word Var_22;

        ItemType_15 = recompilation__item_types__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_8);
        UserArityInt_16 = (MR_Integer) (UserArity_10);
        {
          ItemName_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemName_17, 0) = ((MR_Box) (SymName_9));
          MR_hl_field(0, ItemName_17, 1) = ((MR_Box) (UserArityInt_16));
        }
        {
          ItemId_18 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ItemId_18, 0) = (MR_Box) ((MR_Unsigned) (ItemType_15));
          MR_hl_field(0, ItemId_18, 1) = ((MR_Box) (ItemName_17));
        }
        ItemRecompDeps_19 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_12, 5))));
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_7[0]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0_1));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (ItemId_18));
          MR_hl_field(0, Var_22, 4) = ((MR_Box) (ItemRecompDeps_19));
        }
        hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(Var_22, STATE_VARIABLE_QualInfo_0_20, STATE_VARIABLE_QualInfo_21);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_46;

  hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__record_type_specialization__511__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_46);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_46));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0(
  MR_Word TypeSpecInfo0_11,
  MR_Word PredId_12,
  MR_Word ForcingPredId_13,
  MR_Word SpecPredStatus_14,
  MR_Word SpecProcIds_15,
  MR_Word RenamedSubst_16,
  MR_Word TVarSet_17,
  MR_Word PFUMM_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_42,
  MR_Word * STATE_VARIABLE_ModuleInfo_43)
{
  MR_bool succeeded;
  MR_Word TypeSpecTables0_20;
  MR_Word ProcsToSpec0_21;
  MR_Word ForcingPredIds0_22;
  MR_Word BaseToForcingMap0_23;
  MR_Word PragmaMap0_24;
  MR_Word SpecPredProcIds_27;
  MR_Word ProcsToSpec_28;
  MR_Word ForcingPredIds_29;
  MR_Word BaseToForcingMap_30;
  MR_Word SymName_32;
  MR_Word SpecModuleName_33;
  MR_Word ExpandedItems_36;
  MR_Word Context_37;
  MR_Word SeqNum_38;
  MR_Word TypeSpecInfo_39;
  MR_Word PragmaMap_40;
  MR_Word TypeSpecTables_41;
  MR_Word Var_44;
  MR_Word Var_47;

  hlds__hlds_module__module_info_get_type_spec_tables_2_p_0(STATE_VARIABLE_ModuleInfo_0_42, &TypeSpecTables0_20);
  ProcsToSpec0_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables0_20, 0))));
  ForcingPredIds0_22 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables0_20, 1))));
  BaseToForcingMap0_23 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables0_20, 2))));
  PragmaMap0_24 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables0_20, 3))));
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[3]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__record_type_specialization_10_p_0_1));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (PredId_12));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_44, SpecProcIds_15, &SpecPredProcIds_27);
  mercury__set__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SpecPredProcIds_27, ProcsToSpec0_21, &ProcsToSpec_28);
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (ForcingPredId_13)), ForcingPredIds0_22, &ForcingPredIds_29);
  Var_47 = (MR_Word) (SpecPredStatus_14);
  succeeded = (Var_47 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    mercury__multi_map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), ((MR_Box) (ForcingPredId_13)), BaseToForcingMap0_23, &BaseToForcingMap_30);
  else
    BaseToForcingMap_30 = BaseToForcingMap0_23;
  SymName_32 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_11, 1))));
  SpecModuleName_33 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_11, 2))));
  ExpandedItems_36 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_11, 5))));
  Context_37 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_11, 6))));
  SeqNum_38 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_11, 7))));
  {
    TypeSpecInfo_39 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeSpecInfo_39, 0) = ((MR_Box) (PFUMM_18));
    MR_hl_field(0, TypeSpecInfo_39, 1) = ((MR_Box) (SymName_32));
    MR_hl_field(0, TypeSpecInfo_39, 2) = ((MR_Box) (SpecModuleName_33));
    MR_hl_field(0, TypeSpecInfo_39, 3) = ((MR_Box) (RenamedSubst_16));
    MR_hl_field(0, TypeSpecInfo_39, 4) = ((MR_Box) (TVarSet_17));
    MR_hl_field(0, TypeSpecInfo_39, 5) = ((MR_Box) (ExpandedItems_36));
    MR_hl_field(0, TypeSpecInfo_39, 6) = ((MR_Box) (Context_37));
    MR_hl_field(0, TypeSpecInfo_39, 7) = ((MR_Box) (SeqNum_38));
  }
  mercury__one_or_more_map__add_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_decl_pragma_type_spec_info_0), ((MR_Box) (PredId_12)), ((MR_Box) (TypeSpecInfo_39)), PragmaMap0_24, &PragmaMap_40);
  {
    TypeSpecTables_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeSpecTables_41, 0) = ((MR_Box) (ProcsToSpec_28));
    MR_hl_field(0, TypeSpecTables_41, 1) = ((MR_Box) (ForcingPredIds_29));
    MR_hl_field(0, TypeSpecTables_41, 2) = ((MR_Box) (BaseToForcingMap_30));
    MR_hl_field(0, TypeSpecTables_41, 3) = ((MR_Box) (PragmaMap_40));
  }
  hlds__hlds_module__module_info_set_type_spec_tables_3_p_0(TypeSpecTables_41, STATE_VARIABLE_ModuleInfo_0_42, STATE_VARIABLE_ModuleInfo_43);
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_forcing_caller_of_pred_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__make_hlds__add_pragma_type_spec__tvar_subst_desc_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_forcing_caller_of_pred_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_5;

  hlds__make_hlds__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ProcInfo_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_5));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_forcing_caller_of_pred_14_p_0(
  MR_Word PredId_15,
  MR_Word PredInfo0_16,
  MR_Word PredFormArity_17,
  MR_Word TypeSpecInfo0_18,
  MR_Word TVarSet_19,
  MR_Word Types_20,
  MR_Word ExistQVars_21,
  MR_Word Constraints_22,
  MR_Word ForcingProcTable0_23,
  MR_Word ApplicableModes_24,
  MR_Word * ForcingPredId_25,
  MR_Word * ForcingPredStatus_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_78,
  MR_Word * STATE_VARIABLE_ModuleInfo_79)
{
  MR_bool succeeded;
  MR_Word PFUMM0_28 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_18, 0))));
  MR_Word SymName_29 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_18, 1))));
  MR_Word SpecModuleName_30 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_18, 2))));
  MR_Word Subst_31 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_18, 3))));
  MR_Word TVarSet0_32 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_18, 4))));
  MR_Word ForcingProcTable_36;
  MR_Word ArgVarSet0_37;
  MR_Integer PredFormArityInt_38;
  MR_Word ArgVars_39;
  MR_Word ArgVarSet_40;
  MR_Word PredContext_41;
  MR_Word GoalInfo0_42;
  MR_Word NonLocals_43;
  MR_Word GoalInfo1_44;
  MR_Word GoalInfo_45;
  MR_Word PredOrFunc_46;
  MR_Word Goal_47;
  MR_Word Clause_48;
  MR_Word ExplicitVarTypes_49;
  MR_Word VarTable_50;
  MR_Word RttiVarMaps_51;
  MR_Word TVarNameMap_52;
  MR_Word ArgsVec_53;
  MR_Word ClausesRep_54;
  MR_Word ItemNumbers_55;
  MR_Word Clauses_56;
  MR_Word Markers0_57;
  MR_Word Markers_58;
  MR_Word Proofs_59;
  MR_Word ConstraintMap_60;
  MR_Word MaybePredOrFunc0_61;
  MR_String UnqualName_64;
  MR_Word Transform_65;
  MR_String SpecName_66;
  MR_Word OrigOrigin_67;
  MR_Word SubstDesc_68;
  MR_Word PredTransform_69;
  MR_Word Origin_70;
  MR_Word VarNameRemap_73;
  MR_Word ForcingPredInfo0_74;
  MR_Word ForcingPredInfo_75;
  MR_Word PredTable0_76;
  MR_Word PredTable_77;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word _Arity_62;
  MR_Word _MaybeModes_63;

  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[5]), ForcingProcTable0_23, &ForcingProcTable_36);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ArgVarSet0_37);
  PredFormArityInt_38 = (MR_Integer) (PredFormArity_17);
  parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeadVar__", PredFormArityInt_38, &ArgVars_39, ArgVarSet0_37, &ArgVarSet_40);
  hlds__hlds_pred__pred_info_get_context_2_p_0(PredInfo0_16, &PredContext_41);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_42);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_39, &NonLocals_43);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_43, GoalInfo0_42, &GoalInfo1_44);
  hlds__hlds_goal__goal_info_set_context_3_p_0(PredContext_41, GoalInfo1_44, &GoalInfo_45);
  PredOrFunc_46 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_16);
  hlds__make_hlds__qual_info__construct_pred_or_func_call_6_p_0(PredId_15, PredOrFunc_46, SymName_29, ArgVars_39, GoalInfo_45, &Goal_47);
  Var_84 = hlds__hlds_clauses__init_unused_statevar_arg_map_0_f_0();
  {
    Clause_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Clause_48, 0) = ((MR_Box) (ApplicableModes_24));
    MR_hl_field(0, Clause_48, 1) = ((MR_Box) (Goal_47));
    MR_hl_field(0, Clause_48, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Clause_48, 3) = ((MR_Box) (PredContext_41));
    MR_hl_field(0, Clause_48, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Clause_48, 5) = ((MR_Box) (Var_84));
    MR_hl_field(0, Clause_48, 6) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  parse_tree__vartypes__init_vartypes_1_p_0(&ExplicitVarTypes_49);
  parse_tree__var_table__init_var_table_1_p_0(&VarTable_50);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_51);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), &TVarNameMap_52);
  ArgsVec_53 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[3]), PredOrFunc_46, ArgVars_39);
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (Clause_48));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_clauses__set_clause_list_2_p_0(Var_86, &ClausesRep_54);
  ItemNumbers_55 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  {
    Clauses_56 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Clauses_56, 0) = ((MR_Box) (ArgVarSet_40));
    MR_hl_field(0, Clauses_56, 1) = ((MR_Box) (ExplicitVarTypes_49));
    MR_hl_field(0, Clauses_56, 2) = ((MR_Box) (VarTable_50));
    MR_hl_field(0, Clauses_56, 3) = ((MR_Box) (RttiVarMaps_51));
    MR_hl_field(0, Clauses_56, 4) = ((MR_Box) (TVarNameMap_52));
    MR_hl_field(0, Clauses_56, 5) = ((MR_Box) (ArgsVec_53));
    MR_hl_field(0, Clauses_56, 6) = ((MR_Box) (ClausesRep_54));
    MR_hl_field(0, Clauses_56, 7) = ((MR_Box) (ItemNumbers_55));
    MR_hl_field(0, Clauses_56, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_16, &Markers0_57);
  hlds__hlds_markers__add_marker_3_p_0((MR_Integer) 23, Markers0_57, &Markers_58);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_59);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_60);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_16);
  if (succeeded)
    *ForcingPredStatus_26 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_16, ForcingPredStatus_26);
  parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM0_28, &MaybePredOrFunc0_61, &_Arity_62, &_MaybeModes_63);
  UnqualName_64 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_29);
  {
    Transform_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_65, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Transform_65, 1) = ((MR_Box) (MaybePredOrFunc0_61));
    MR_hl_field(3, Transform_65, 2) = ((MR_Box) (TVarSet0_32));
    MR_hl_field(3, Transform_65, 3) = ((MR_Box) (Subst_31));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(UnqualName_64, Transform_65, &SpecName_66);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_16, &OrigOrigin_67);
  SubstDesc_68 = mercury__one_or_more__map_2_f_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[2]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[6]), Subst_31);
  {
    PredTransform_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredTransform_69, 0) = ((MR_Box) (SubstDesc_68));
  }
  {
    Origin_70 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Origin_70, 0) = ((MR_Box) (PredTransform_69));
    MR_hl_field(2, Origin_70, 1) = ((MR_Box) (OrigOrigin_67));
    MR_hl_field(2, Origin_70, 2) = ((MR_Box) (PredId_15));
  }
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_16, &VarNameRemap_73);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_46, SpecModuleName_30, SpecName_66, PredFormArity_17, PredContext_41, Origin_70, *ForcingPredStatus_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_3[0]), Markers_58, Types_20, TVarSet_19, ExistQVars_21, Constraints_22, Proofs_59, ConstraintMap_60, Clauses_56, VarNameRemap_73, &ForcingPredInfo0_74);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ForcingProcTable_36, ForcingPredInfo0_74, &ForcingPredInfo_75);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_78, &PredTable0_76);
  hlds__pred_table__predicate_table_insert_4_p_0(ForcingPredInfo_75, ForcingPredId_25, PredTable0_76, &PredTable_77);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_77, STATE_VARIABLE_ModuleInfo_0_78, STATE_VARIABLE_ModuleInfo_79);
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__find_pred_procs_to_type_spec_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ProcTable_12,
  MR_Word TVarSet_13,
  MR_Word Context_14,
  MR_Word PFUMM0_15,
  MR_Word * MaybeSpecProcs_16)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) PFUMM0_15)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_138 = ((MR_Word) ((MR_hl_field(0, PFUMM0_15, 0))));

        if (((MR_tag((MR_Word) ModesOrArity_138)) == (MR_Integer) 1))
        {
          MR_Word ProcIds_62;
          MR_Word PredFormArity_64;
          MR_Word UserArity_65 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_138, 0))));

          mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_12, &ProcIds_62);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_65, &PredFormArity_64);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpecProcs_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ProcTable_12));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, base, 2) = ((MR_Box) (ProcIds_62));
            MR_hl_field(1, base, 3) = ((MR_Box) (UserArity_65));
            MR_hl_field(1, base, 4) = ((MR_Box) (PredFormArity_64));
            MR_hl_field(1, base, 5) = ((MR_Box) (PFUMM0_15));
          }
        }
        else
        {
          MR_Word ArgModes_96 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_138, 0))));
          MR_Word PredFormArity_97;
          MR_Integer ProcId_81;
          MR_Word ProcInfo_82;

          PredFormArity_97 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_96);
          succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(ModuleInfo_9, ProcTable_12, ArgModes_96, &ProcId_81, &ProcInfo_82);
          if (succeeded)
          {
            MR_Word SpecProcTable_68;
            MR_Word UserArity_69;
            MR_Word Var_70;
            MR_Word Var_71;

            SpecProcTable_68 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_81)), ((MR_Box) (ProcInfo_82)));
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_69, PredFormArity_97);
            {
              Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_71, 0) = ((MR_Box) (ProcId_81));
              MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *MaybeSpecProcs_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SpecProcTable_68));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_70));
              MR_hl_field(1, base, 2) = ((MR_Box) (Var_71));
              MR_hl_field(1, base, 3) = ((MR_Box) (UserArity_69));
              MR_hl_field(1, base, 4) = ((MR_Box) (PredFormArity_97));
              MR_hl_field(1, base, 5) = ((MR_Box) (PFUMM0_15));
            }
          }
          else
          {
            MR_Word VarSet_75;
            MR_Word Specs_77;

            mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TVarSet_13, &VarSet_75);
            hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(ModuleInfo_9, PredId_10, PredInfo_11, VarSet_75, ArgModes_96, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[7])), Context_14, (MR_Word) ((MR_Unsigned) 0U), &Specs_77);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSpecProcs_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_77));
            }
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_17 = ((MR_Word) ((MR_hl_field(1, PFUMM0_15, 0))));

        if (((MR_tag((MR_Word) ModesOrArity_17)) == (MR_Integer) 1))
        {
          MR_Word ProcIds_29;
          MR_Word PredFormArity_46;
          MR_Word UserArity_47 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_17, 0))));

          mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_12, &ProcIds_29);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_47, &PredFormArity_46);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpecProcs_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ProcTable_12));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, base, 2) = ((MR_Box) (ProcIds_29));
            MR_hl_field(1, base, 3) = ((MR_Box) (UserArity_47));
            MR_hl_field(1, base, 4) = ((MR_Box) (PredFormArity_46));
            MR_hl_field(1, base, 5) = ((MR_Box) (PFUMM0_15));
          }
        }
        else
        {
          MR_Word ArgModes_20 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_17, 0))));
          MR_Word PredFormArity_21;
          MR_Integer ProcId_22;
          MR_Word ProcInfo_23;

          PredFormArity_21 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_20);
          succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(ModuleInfo_9, ProcTable_12, ArgModes_20, &ProcId_22, &ProcInfo_23);
          if (succeeded)
          {
            MR_Word SpecProcTable_24;
            MR_Word UserArity_25;
            MR_Word Var_30;
            MR_Word Var_31;

            SpecProcTable_24 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_22)), ((MR_Box) (ProcInfo_23)));
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_25, PredFormArity_21);
            {
              Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_31, 0) = ((MR_Box) (ProcId_22));
              MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
              *MaybeSpecProcs_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SpecProcTable_24));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_30));
              MR_hl_field(1, base, 2) = ((MR_Box) (Var_31));
              MR_hl_field(1, base, 3) = ((MR_Box) (UserArity_25));
              MR_hl_field(1, base, 4) = ((MR_Box) (PredFormArity_21));
              MR_hl_field(1, base, 5) = ((MR_Box) (PFUMM0_15));
            }
          }
          else
          {
            MR_Word VarSet_26;
            MR_Word Specs_28;

            mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TVarSet_13, &VarSet_26);
            hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(ModuleInfo_9, PredId_10, PredInfo_11, VarSet_26, ArgModes_20, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[7])), Context_14, (MR_Word) ((MR_Unsigned) 0U), &Specs_28);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSpecProcs_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_28));
            }
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word PredOrFunc_48;
        MR_Word PFUMM_49;
        MR_Word PredFormArity_50;
        MR_Word UserArity_51 = ((MR_Word) ((MR_hl_field(2, PFUMM0_15, 0))));
        MR_Word ProcIds_52;

        mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_12, &ProcIds_52);
        PredOrFunc_48 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
        switch (PredOrFunc_48) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_44;

              {
                Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_44, 0) = ((MR_Box) (UserArity_51));
              }
              {
                PFUMM_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PFUMM_49, 0) = ((MR_Box) (Var_44));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_43;

              {
                Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_43, 0) = ((MR_Box) (UserArity_51));
              }
              {
                PFUMM_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PFUMM_49, 0) = ((MR_Box) (Var_43));
              }
            }
            break;
        }
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_48, UserArity_51, &PredFormArity_50);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpecProcs_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ProcTable_12));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, base, 2) = ((MR_Box) (ProcIds_52));
          MR_hl_field(1, base, 3) = ((MR_Box) (UserArity_51));
          MR_hl_field(1, base, 4) = ((MR_Box) (PredFormArity_50));
          MR_hl_field(1, base, 5) = ((MR_Box) (PFUMM_49));
        }
      }
      break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_67;

  conv2_LambdaHeadVar__2_67 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__check_pragma_type_spec_subst__265__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_67));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__247__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__219__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_58;
  MR_Word conv0_LambdaHeadVar__3_59;

  hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__pred__check_pragma_type_spec_subst__206__1_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LambdaHeadVar__2_58, &conv0_LambdaHeadVar__3_59);
  *wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_58));
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_59));
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0(
  MR_Word PredInfo0_6,
  MR_Word TVarSet0_7,
  MR_Word Subst_8,
  MR_Word Context_9,
  MR_Word * MaybeSubstResult_10)
{
  MR_bool succeeded;
  MR_Word SubstList_11;
  MR_Word VarsToSub_15;
  MR_Word SubstTypes0_16;
  MR_Word MultiSubstVars0_17;

  SubstList_11 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), Subst_8);
  mercury__list__map2_4_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[3]), SubstList_11, &VarsToSub_15, &SubstTypes0_16);
  hlds__make_hlds__add_pragma_type_spec__find_duplicate_list_elements_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), VarsToSub_15, &MultiSubstVars0_17);
  if ((MultiSubstVars0_17 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word CalledTVarSet_22;
    MR_Word NameVarIndex0_23;
    MR_Word UnknownVarsToSub_26;
    MR_Word Var_62;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_6, &CalledTVarSet_22);
    mercury__varset__create_name_var_map_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), CalledTVarSet_22, &NameVarIndex0_23);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[2]));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_2));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_62, 3) = ((MR_Box) (TVarSet0_7));
      MR_hl_field(0, Var_62, 4) = ((MR_Box) (NameVarIndex0_23));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), Var_62, VarsToSub_15, &UnknownVarsToSub_26);
    if ((UnknownVarsToSub_26 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarsToSubSet_27;
      MR_Word TVarsInSubstTypes0_28;
      MR_Word TVarsInSubstTypes_29;
      MR_Word RecSubstTVars0_30;
      MR_Word RecSubstTVars_31;

      mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), VarsToSub_15, &VarsToSubSet_27);
      parse_tree__prog_type_scan__type_vars_in_types_2_p_0(SubstTypes0_16, &TVarsInSubstTypes0_28);
      mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), TVarsInSubstTypes0_28, &TVarsInSubstTypes_29);
      mercury__set__intersect_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), TVarsInSubstTypes_29, VarsToSubSet_27, &RecSubstTVars0_30);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), RecSubstTVars0_30, &RecSubstTVars_31);
      if ((RecSubstTVars_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TVarRenaming0_32;
        MR_Word VarsToReplace_33;
        MR_Word TVarSet_34;
        MR_Word TVarRenaming_36;
        MR_Word RenamedVarsToSub_37;
        MR_Word ExistQVars_38;
        MR_Word SubExistQVars_40;
        MR_Word Var_64;
        MR_Word Var_35;

        mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), &TVarRenaming0_32);
        mercury__list__append_3_p_1((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), VarsToSub_15, TVarsInSubstTypes0_28, &VarsToReplace_33);
        parse_tree__prog_util__get_new_tvars_8_p_0(VarsToReplace_33, TVarSet0_7, CalledTVarSet_22, &TVarSet_34, NameVarIndex0_23, &Var_35, TVarRenaming0_32, &TVarRenaming_36);
        mercury__map__apply_to_list_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), VarsToSub_15, TVarRenaming_36, &RenamedVarsToSub_37);
        hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_6, &ExistQVars_38);
        {
          Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_64, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_6[0]));
          MR_hl_field(0, Var_64, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__check_pragma_type_spec_subst_5_p_0_3));
          MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_64, 3) = ((MR_Box) (ExistQVars_38));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), Var_64, RenamedVarsToSub_37, &SubExistQVars_40);
        if ((SubExistQVars_40 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SubstTypes_41;
          MR_Word SubAL_42;
          MR_Word TypeSubst_43;
          MR_Word Types0_44;
          MR_Word ClassContext0_45;
          MR_Word Types_46;
          MR_Word ClassContext_47;
          MR_Word RenamedSubsts_49;
          MR_Word OoMRenamedSubsts_50;

          parse_tree__prog_type_subst__apply_renaming_to_types_3_p_0(TVarRenaming_36, SubstTypes0_16, &SubstTypes_41);
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedVarsToSub_37, SubstTypes_41, &SubAL_42);
          mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubAL_42, &TypeSubst_43);
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_6, &Types0_44);
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_6, &ClassContext0_45);
          parse_tree__prog_type_subst__apply_rec_subst_to_types_3_p_0(TypeSubst_43, Types0_44, &Types_46);
          parse_tree__prog_type_subst__apply_rec_subst_to_univ_exist_constraints_3_p_0(TypeSubst_43, ClassContext0_45, &ClassContext_47);
          RenamedSubsts_49 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[1]), (MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_2[4]), SubAL_42);
          mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tvar_subst_0), RenamedSubsts_49, &OoMRenamedSubsts_50);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSubstResult_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (TVarSet_34));
            MR_hl_field(1, base, 1) = ((MR_Box) (Types_46));
            MR_hl_field(1, base, 2) = ((MR_Box) (ExistQVars_38));
            MR_hl_field(1, base, 3) = ((MR_Box) (ClassContext_47));
            MR_hl_field(1, base, 4) = ((MR_Box) (OoMRenamedSubsts_50));
          }
        }
        else
        {
          MR_Word Var_68;
          MR_Word Spec_80;

          hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0(PredInfo0_6, Context_9, SubExistQVars_40, &Spec_80);
          {
            Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_68, 0) = ((MR_Box) (Spec_80));
            MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSubstResult_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_68));
          }
        }
      }
      else
      {
        MR_Word Var_70;
        MR_Word Spec_83;

        hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0(PredInfo0_6, Context_9, TVarSet0_7, RecSubstTVars_31, &Spec_83);
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (Spec_83));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSubstResult_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
        }
      }
    }
    else
    {
      MR_Word Var_72;
      MR_Word Spec_86;

      hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0(PredInfo0_6, Context_9, TVarSet0_7, UnknownVarsToSub_26, &Spec_86);
      {
        Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_72, 0) = ((MR_Box) (Spec_86));
        MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSubstResult_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_72));
      }
    }
  }
  else
  {
    MR_Word MultiSubstVars_20;
    MR_Word Spec_21;
    MR_Word Var_60;

    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), MultiSubstVars0_17, &MultiSubstVars_20);
    hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0(PredInfo0_6, Context_9, TVarSet0_7, MultiSubstVars_20, &Spec_21);
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (Spec_21));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSubstResult_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_60));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_24;

  conv1_HeadVar__3_24 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__638__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_24));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word UnknownVars_9,
  MR_Word * Spec_10)
{
  MR_Word PredOrFunc_11;
  MR_String Decl_12;
  MR_String DoOrDoesNotOccur_13;
  MR_Word Pieces_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Module_49;
  MR_String Name_50;
  MR_Word PredFormArity_51;
  MR_Word PredOrFunc_52;
  MR_Word PFSymNameArity_53;
  MR_Word Var_54;
  MR_Word Var_57;
  MR_Word Var_60;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word VarPieces_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_String Var_70;
  MR_Word Var_74;
  MR_Box conv0_DoOrDoesNotOccur_13;
  MR_Box conv2_Var_70;

  PredOrFunc_11 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  switch (PredOrFunc_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Decl_12 = (MR_String) "func";
      break;
    case (MR_Integer) 0:
      Decl_12 = (MR_String) "pred";
      break;
  }
  conv0_DoOrDoesNotOccur_13 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownVars_9, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
  DoOrDoesNotOccur_13 = ((MR_String) (conv0_DoOrDoesNotOccur_13));
  Module_49 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_50 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_51 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Module_49));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Name_50));
  }
  {
    PFSymNameArity_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_53, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_52));
    MR_hl_field(0, PFSymNameArity_53, 1) = ((MR_Box) (Var_54));
    MR_hl_field(0, PFSymNameArity_53, 2) = ((MR_Box) (PredFormArity_51));
  }
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (PFSymNameArity_53));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[26])));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[6])));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[0]));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0_1));
    MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_67, 3) = ((MR_Box) (TVarSet_8));
  }
  VarPieces_66 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_67, UnknownVars_9);
  conv2_Var_70 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_70 = ((MR_String) (conv2_Var_70));
  {
    Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_69, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (Var_69));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_74 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), VarPieces_66);
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_74);
  {
    Var_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_30, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_30, 1) = ((MR_Box) (DoOrDoesNotOccur_13));
  }
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_28 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_29);
  {
    Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 35U));
    MR_hl_field(3, Var_36, 1) = ((MR_Box) (Decl_12));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[22])));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[20])));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  Var_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_28, Var_32);
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_24, Var_27);
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[15])), Var_23);
  Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_17, Var_18);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.report_unknown_vars_to_subst\'/5"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_14));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_24;

  conv1_HeadVar__3_24 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__638__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_24));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word MultiSubstVars_9,
  MR_Word * Spec_10)
{
  MR_String HasOrHave_11;
  MR_Word Pieces_12;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Module_42;
  MR_String Name_43;
  MR_Word PredFormArity_44;
  MR_Word PredOrFunc_45;
  MR_Word PFSymNameArity_46;
  MR_Word Var_47;
  MR_Word Var_50;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word VarPieces_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_String Var_63;
  MR_Word Var_67;
  MR_Box conv0_HasOrHave_11;
  MR_Box conv2_Var_63;

  conv0_HasOrHave_11 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MultiSubstVars_9, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
  HasOrHave_11 = ((MR_String) (conv0_HasOrHave_11));
  Module_42 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_43 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_44 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Module_42));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Name_43));
  }
  {
    PFSymNameArity_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_46, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_45));
    MR_hl_field(0, PFSymNameArity_46, 1) = ((MR_Box) (Var_47));
    MR_hl_field(0, PFSymNameArity_46, 2) = ((MR_Box) (PredFormArity_44));
  }
  {
    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Var_57, 1) = ((MR_Box) (PFSymNameArity_46));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[26])));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[6])));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_60, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[0]));
    MR_hl_field(0, Var_60, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__report_multiple_subst_vars_5_p_0_1));
    MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_60, 3) = ((MR_Box) (TVarSet_8));
  }
  VarPieces_59 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, MultiSubstVars_9);
  conv2_Var_63 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MultiSubstVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_63 = ((MR_String) (conv2_Var_63));
  {
    Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_67 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), VarPieces_59);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_61, Var_67);
  {
    Var_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_28, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_28, 1) = ((MR_Box) (HasOrHave_11));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[19])));
  }
  Var_26 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_27);
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[13])));
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_25);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[15])), Var_21);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.report_multiple_subst_vars\'/5"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_12));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_24;

  conv1_HeadVar__3_24 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__638__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_24));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word RecursiveVars_9,
  MR_Word * Spec_10)
{
  MR_String OccurOrOccurs_11;
  MR_Word Pieces_12;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Module_44;
  MR_String Name_45;
  MR_Word PredFormArity_46;
  MR_Word PredOrFunc_47;
  MR_Word PFSymNameArity_48;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word VarPieces_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_String Var_65;
  MR_Word Var_69;
  MR_Box conv0_OccurOrOccurs_11;
  MR_Box conv2_Var_65;

  conv0_OccurOrOccurs_11 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RecursiveVars_9, ((MR_Box) ((MR_String) "does not occur")), ((MR_Box) ((MR_String) "do not occur")));
  OccurOrOccurs_11 = ((MR_String) (conv0_OccurOrOccurs_11));
  Module_44 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_45 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_46 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_47 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Module_44));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Name_45));
  }
  {
    PFSymNameArity_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_48, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_47));
    MR_hl_field(0, PFSymNameArity_48, 1) = ((MR_Box) (Var_49));
    MR_hl_field(0, PFSymNameArity_48, 2) = ((MR_Box) (PredFormArity_46));
  }
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (PFSymNameArity_48));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[26])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[6])));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[0]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__report_recursive_subst_5_p_0_1));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (TVarSet_8));
  }
  VarPieces_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, RecursiveVars_9);
  conv2_Var_65 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RecursiveVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_65 = ((MR_String) (conv2_Var_65));
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_69 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), VarPieces_61);
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_69);
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (OccurOrOccurs_11));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_30 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[17])));
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_30, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[13])));
  Var_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_26, Var_29);
  Var_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_22, Var_25);
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[15])), Var_21);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_15, Var_16);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.report_recursive_subst\'/5"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_12));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_24;

  conv1_HeadVar__3_24 = hlds__make_hlds__add_pragma_type_spec__IntroducedFrom__func__report_variables__638__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__3_24));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Context_6,
  MR_Word SubExistQVars_7,
  MR_Word * Spec_8)
{
  MR_Word TVarSet_9;
  MR_String TypeOrTypes_10;
  MR_Word Pieces_11;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Module_44;
  MR_String Name_45;
  MR_Word PredFormArity_46;
  MR_Word PredOrFunc_47;
  MR_Word PFSymNameArity_48;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_55;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word VarPieces_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_String Var_65;
  MR_Word Var_69;
  MR_Box conv0_TypeOrTypes_10;
  MR_Box conv2_Var_65;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_5, &TVarSet_9);
  conv0_TypeOrTypes_10 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubExistQVars_7, ((MR_Box) ((MR_String) "type")), ((MR_Box) ((MR_String) "types")));
  TypeOrTypes_10 = ((MR_String) (conv0_TypeOrTypes_10));
  Module_44 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
  Name_45 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
  PredFormArity_46 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_5);
  PredOrFunc_47 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Module_44));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Name_45));
  }
  {
    PFSymNameArity_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_48, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_47));
    MR_hl_field(0, PFSymNameArity_48, 1) = ((MR_Box) (Var_49));
    MR_hl_field(0, PFSymNameArity_48, 2) = ((MR_Box) (PredFormArity_46));
  }
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 16U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (PFSymNameArity_48));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[26])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[6])));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_52));
  }
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) (TypeOrTypes_10));
  }
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
    MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[10])));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_25));
  }
  Var_21 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_22);
  {
    Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_62, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_5[0]));
    MR_hl_field(0, Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__report_subst_existq_tvars_4_p_0_1));
    MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_62, 3) = ((MR_Box) (TVarSet_9));
  }
  VarPieces_61 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_62, SubExistQVars_7);
  conv2_Var_65 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubExistQVars_7, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_65 = ((MR_String) (conv2_Var_65));
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_69 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[12])), VarPieces_61);
  Var_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_69);
  Var_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_29, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[13])));
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_28);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[9])), Var_20);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_14, Var_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    *Spec_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma_type_spec.report_subst_existq_tvars\'/4"));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 44U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_6));
    MR_hl_field(0, base, 4) = ((MR_Box) (Pieces_11));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box H_3 = (MR_hl_field(1, HeadVar__1_1, 0));
    MR_Word T_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word DupVars0_6;

    hlds__make_hlds__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(TypeInfo_for_T_7, T_4, &DupVars0_6);
    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_7, H_3, T_4);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(1, base, 0) = H_3;
        MR_hl_field(1, base, 1) = ((MR_Box) (DupVars0_6));
      }
    else
      *HeadVar__2_2 = DupVars0_6;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_46;
  MR_Word conv1_STATE_VARIABLE_QualInfo_48;
  MR_Word conv0_STATE_VARIABLE_Specs_50;

  hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_for_pred_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_46, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_48, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_50);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_46));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_48));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_50));
}

void MR_CALL 
hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0(
  MR_Word TypeSpec_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word STATE_VARIABLE_QualInfo_0_35,
  MR_Word * STATE_VARIABLE_QualInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_Word PFUMM_12 = ((MR_Word) ((MR_hl_field(0, TypeSpec_8, 0))));
  MR_Word SymName_13 = ((MR_Word) ((MR_hl_field(0, TypeSpec_8, 1))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(0, TypeSpec_8, 6))));
  MR_Word PredTable_20;
  MR_Word MaybePredOrFunc_23;
  MR_Word UserArity_26;
  MR_Word PredIds_27;
  MR_Word AllArityPredIds_28;
  MR_Word STATE_VARIABLE_Specs_1_42;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &PredTable_20);
  switch (MR_tag((MR_Word) PFUMM_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_70 = ((MR_Word) ((MR_hl_field(0, PFUMM_12, 0))));
        MR_Word PredFormArity_73;

        MaybePredOrFunc_23 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_3[2]));
        if (((MR_tag((MR_Word) ModesOrArity_70)) == (MR_Integer) 1))
        {
          UserArity_26 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_70, 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_26, &PredFormArity_73);
        }
        else
        {
          MR_Word Modes_66 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_70, 0))));

          PredFormArity_73 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_66);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_26, PredFormArity_73);
        }
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 0, SymName_13, PredFormArity_73, &PredIds_27);
        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 0, SymName_13, &AllArityPredIds_28);
        STATE_VARIABLE_Specs_1_42 = STATE_VARIABLE_Specs_0_37;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_21 = ((MR_Word) ((MR_hl_field(1, PFUMM_12, 0))));
        MR_Word PredFormArity_25;

        MaybePredOrFunc_23 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_3[1]));
        if (((MR_tag((MR_Word) ModesOrArity_21)) == (MR_Integer) 1))
        {
          UserArity_26 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_21, 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_26, &PredFormArity_25);
        }
        else
        {
          MR_Word Modes_24 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_21, 0))));

          PredFormArity_25 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_24);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_26, PredFormArity_25);
        }
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 1, SymName_13, PredFormArity_25, &PredIds_27);
        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 1, SymName_13, &AllArityPredIds_28);
        STATE_VARIABLE_Specs_1_42 = STATE_VARIABLE_Specs_0_37;
      }
      break;
    case (MR_Integer) 2:
      {
        UserArity_26 = ((MR_Word) ((MR_hl_field(2, PFUMM_12, 0))));
        hlds__make_hlds_error__maybe_warn_about_pfumm_unknown_7_p_0(STATE_VARIABLE_ModuleInfo_0_33, (MR_String) "type_spec", PFUMM_12, SymName_13, Context_18, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_1_42);
        MaybePredOrFunc_23 = (MR_Word) ((MR_Unsigned) 0U);
        hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_20, (MR_Integer) 0, SymName_13, UserArity_26, &PredIds_27);
        hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable_20, (MR_Integer) 0, SymName_13, &AllArityPredIds_28);
      }
      break;
  }
  if ((PredIds_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredIdTable_29;
    MR_Word OtherUserArities_30;

    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &PredIdTable_29);
    hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable_29, AllArityPredIds_28, UserArity_26, &OtherUserArities_30);
    hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(MaybePredOrFunc_23, SymName_13, UserArity_26, OtherUserArities_30, Context_18, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma_type_spec_scalar_common_1[7])), STATE_VARIABLE_Specs_1_42, STATE_VARIABLE_Specs_38);
    *STATE_VARIABLE_ModuleInfo_34 = STATE_VARIABLE_ModuleInfo_0_33;
    *STATE_VARIABLE_QualInfo_36 = STATE_VARIABLE_QualInfo_0_35;
  }
  else
  {
    MR_Word Var_53;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_34;
    MR_Box conv4_STATE_VARIABLE_QualInfo_36;
    MR_Box conv3_STATE_VARIABLE_Specs_38;

    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_4[0]));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma_type_spec__add_pragma_type_spec_7_p_0_1));
      MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_53, 3) = ((MR_Box) (TypeSpec_8));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma_type_spec_scalar_common_1[0]), Var_53, PredIds_27, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_33)), &conv5_STATE_VARIABLE_ModuleInfo_34, ((MR_Box) (STATE_VARIABLE_QualInfo_0_35)), &conv4_STATE_VARIABLE_QualInfo_36, ((MR_Box) (STATE_VARIABLE_Specs_1_42)), &conv3_STATE_VARIABLE_Specs_38);
    *STATE_VARIABLE_ModuleInfo_34 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_34));
    *STATE_VARIABLE_QualInfo_36 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_36));
    *STATE_VARIABLE_Specs_38 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_38));
  }
}

void mercury__hlds__make_hlds__add_pragma_type_spec__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma_type_spec__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_pragma_type_spec__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma_type_spec__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma_type_spec.
