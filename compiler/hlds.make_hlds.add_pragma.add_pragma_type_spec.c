/*
** Automatically generated from `add_pragma_type_spec.m'
** by the Mercury compiler,
** version rotd-2022-12-31
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


// :- module hlds.make_hlds.add_pragma.add_pragma_type_spec.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_pragma__add_pragma_type_spec__init
ENDINIT
*/

#include "hlds.make_hlds.add_pragma.add_pragma_type_spec.mih"


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
#include "counter.mih"
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
#include "ll_backend.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
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
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.fact_table.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.make_hlds_types.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"




static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_recomp_item_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__374__1_2_p_0(
  MR_Word ExistQVars_35,
  MR_Word LambdaHeadVar__1_57);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__345__1_3_p_0(
  MR_Word TVarSet0_7,
  MR_Word NameVarIndex0_19,
  MR_Word LambdaHeadVar__1_55);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__record_type_specialization__273__1_3_p_0(
  MR_Word PredId_12,
  MR_Integer LambdaHeadVar__1_37,
  MR_Word * LambdaHeadVar__2_38);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * STATE_VARIABLE_ProcInfo_5);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(
  MR_Word TSInfo0_10,
  MR_Word Context_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_QualInfo_0_46,
  MR_Word * STATE_VARIABLE_QualInfo_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredId_10,
  MR_Word PredInfo_11,
  MR_Word ProcTable_12,
  MR_Word TVarSet_13,
  MR_Word Context_14,
  MR_Word PFUMM0_15,
  MR_Word * MaybeSpecProcs_16);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_5_p_0(
  MR_Word PredInfo0_6,
  MR_Word TVarSet0_7,
  MR_Word Subst_8,
  MR_Word Context_9,
  MR_Word * MaybeSubstResult_10);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word UnknownVars_9,
  MR_Word * Spec_10);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word MultiSubstVars_9,
  MR_Word * Spec_10);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word RecursiveVars_9,
  MR_Word * Spec_10);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word SymName_9,
  MR_Word UserArity_10,
  MR_Word PredStatus_11,
  MR_Word TSInfo_12,
  MR_Word STATE_VARIABLE_QualInfo_0_20,
  MR_Word * STATE_VARIABLE_QualInfo_21);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__record_type_specialization_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__record_type_specialization_10_p_0(
  MR_Word TSInfo0_11,
  MR_Word PredId_12,
  MR_Word SpecPredId_13,
  MR_Word SpecPredStatus_14,
  MR_Word SpecProcIds_15,
  MR_Word RenamedSubst_16,
  MR_Word TVarSet_17,
  MR_Word PFUMM_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_type_spec_version_of_pred_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_type_spec_version_of_pred_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_type_spec_version_of_pred_15_p_0(
  MR_Word PredId_16,
  MR_Word PredInfo0_17,
  MR_Word PredFormArity_18,
  MR_Word TSInfo0_19,
  MR_Word TVarSet_20,
  MR_Word Types_21,
  MR_Word ExistQVars_22,
  MR_Word ClassContext_23,
  MR_Word SpecProcTable0_24,
  MR_Word SpecProcIds_25,
  MR_Word Context_26,
  MR_Word * SpecPredId_27,
  MR_Word * SpecPredStatus_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_77,
  MR_Word * STATE_VARIABLE_ModuleInfo_78);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[28][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[1][12];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[3][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_7[1][7];




static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[28][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[4]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 32U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5])))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the existentially quantified type"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error: the substitution includes"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "on both sides of the substitution."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "multiple replacement types."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "occur in the"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[25])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2])),
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
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_type_spec_version_of_pred_15_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_type_spec_version_of_pred_15_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[3][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[3][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_recomp_item_id_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_recomp_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_recomp_item_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__374__1_2_p_0(
  MR_Word ExistQVars_35,
  MR_Word LambdaHeadVar__1_57)
{
  MR_bool succeeded;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), ((MR_Box) (LambdaHeadVar__1_57)), ExistQVars_35);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__345__1_3_p_0(
  MR_Word TVarSet0_7,
  MR_Word NameVarIndex0_19,
  MR_Word LambdaHeadVar__1_55)
{
  MR_bool succeeded;
  MR_String VarName_21;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_7, LambdaHeadVar__1_55, &VarName_21);
  succeeded = mercury__map__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), NameVarIndex0_19, ((MR_Box) (VarName_21)));
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__record_type_specialization__273__1_3_p_0(
  MR_Word PredId_12,
  MR_Integer LambdaHeadVar__1_37,
  MR_Word * LambdaHeadVar__2_38)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_38 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (PredId_12));
    MR_hl_field(0, base, 1) = ((MR_Box) (LambdaHeadVar__1_37));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * STATE_VARIABLE_ProcInfo_5)
{
  MR_Word STATE_VARIABLE_ProcInfo_6_6;

  hlds__hlds_pred__proc_info_reset_imported_structure_sharing_2_p_0(STATE_VARIABLE_ProcInfo_0_4, &STATE_VARIABLE_ProcInfo_6_6);
  hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_p_0(STATE_VARIABLE_ProcInfo_6_6, STATE_VARIABLE_ProcInfo_5);
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;
  MR_Word TVar_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Type_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
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
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(
  MR_Word TSInfo0_10,
  MR_Word Context_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_QualInfo_0_46,
  MR_Word * STATE_VARIABLE_QualInfo_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  MR_bool succeeded;
  MR_Word PFUMM0_16 = ((MR_Word) ((MR_hl_field(0, TSInfo0_10, (MR_Integer) 0))));
  MR_Word SymName_17 = ((MR_Word) ((MR_hl_field(0, TSInfo0_10, (MR_Integer) 1))));
  MR_Word Subst_19 = ((MR_Word) ((MR_hl_field(0, TSInfo0_10, (MR_Integer) 3))));
  MR_Word TVarSet0_20 = ((MR_Word) ((MR_hl_field(0, TSInfo0_10, (MR_Integer) 4))));
  MR_Word PredInfo0_22;
  MR_Word MaybeSubstResult_23;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_44, PredId_12, &PredInfo0_22);
  hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_5_p_0(PredInfo0_22, TVarSet0_20, Subst_19, Context_11, &MaybeSubstResult_23);
  if (((MR_tag((MR_Word) MaybeSubstResult_23)) == (MR_Integer) 0))
  {
    MR_Word SubstSpecs_43 = ((MR_Word) ((MR_hl_field(0, MaybeSubstResult_23, (MR_Integer) 0))));

    *STATE_VARIABLE_Specs_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), SubstSpecs_43, STATE_VARIABLE_Specs_0_48);
    *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
    *STATE_VARIABLE_QualInfo_47 = STATE_VARIABLE_QualInfo_0_46;
  }
  else
  {
    MR_Word TVarSet_24 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, (MR_Integer) 0))));
    MR_Word Types_25 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, (MR_Integer) 1))));
    MR_Word ExistQVars_26 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, (MR_Integer) 2))));
    MR_Word ClassContext_27 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, (MR_Integer) 3))));
    MR_Word RenamedSubst_28 = ((MR_Word) ((MR_hl_field(1, MaybeSubstResult_23, (MR_Integer) 4))));
    MR_Word ProcTable0_29;
    MR_Word MaybeSpecProcs_30;
    MR_Word Globals_31;
    MR_Word OptTuple_32;
    MR_Word DoTypeSpec_33;
    MR_Word Smart_34;
    MR_Word SpecProcTable0_35;
    MR_Word SpecProcIds_36;
    MR_Word UserArity_37;
    MR_Word PredFormArity_38;
    MR_Word PFUMM_39;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_22, &ProcTable0_29);
    hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_8_p_0(STATE_VARIABLE_ModuleInfo_0_44, PredId_12, PredInfo0_22, ProcTable0_29, TVarSet0_20, Context_11, PFUMM0_16, &MaybeSpecProcs_30);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_44, &Globals_31);
    libs__globals__get_opt_tuple_2_p_0(Globals_31, &OptTuple_32);
    DoTypeSpec_33 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_32, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    libs__globals__lookup_bool_option_3_p_0(Globals_31, (MR_Integer) 152, &Smart_34);
    succeeded = ((MR_tag((MR_Word) MaybeSpecProcs_30)) == (MR_Integer) 1);
    if (succeeded)
    {
      SpecProcTable0_35 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, (MR_Integer) 0))));
      SpecProcIds_36 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, (MR_Integer) 1))));
      UserArity_37 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, (MR_Integer) 2))));
      PredFormArity_38 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, (MR_Integer) 3))));
      PFUMM_39 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProcs_30, (MR_Integer) 4))));
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
      MR_Word SpecPredId_40;
      MR_Word SpecPredStatus_41;
      MR_Word PredOrFunc_42;
      MR_Word STATE_VARIABLE_ModuleInfo_51_51;

      hlds__make_hlds__add_pragma__add_pragma_type_spec__add_type_spec_version_of_pred_15_p_0(PredId_12, PredInfo0_22, PredFormArity_38, TSInfo0_10, TVarSet_24, Types_25, ExistQVars_26, ClassContext_27, SpecProcTable0_35, SpecProcIds_36, Context_11, &SpecPredId_40, &SpecPredStatus_41, STATE_VARIABLE_ModuleInfo_0_44, &STATE_VARIABLE_ModuleInfo_51_51);
      hlds__make_hlds__add_pragma__add_pragma_type_spec__record_type_specialization_10_p_0(TSInfo0_10, PredId_12, SpecPredId_40, SpecPredStatus_41, SpecProcIds_36, RenamedSubst_28, TVarSet_24, PFUMM_39, STATE_VARIABLE_ModuleInfo_51_51, STATE_VARIABLE_ModuleInfo_45);
      PredOrFunc_42 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_22);
      hlds__make_hlds__add_pragma__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0(PredOrFunc_42, SymName_17, UserArity_37, SpecPredStatus_41, TSInfo0_10, STATE_VARIABLE_QualInfo_0_46, STATE_VARIABLE_QualInfo_47);
      *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
    }
    else
    {
      MR_Word Var_55;

      Var_55 = parse_tree__maybe_error__get_any_errors5_1_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pred_form_arity_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pred_func_or_unknown_maybe_modes_0), MaybeSpecProcs_30);
      *STATE_VARIABLE_Specs_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), Var_55, STATE_VARIABLE_Specs_0_48);
      *STATE_VARIABLE_QualInfo_47 = STATE_VARIABLE_QualInfo_0_46;
      *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_8_p_0(
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
        MR_Word ModesOrArity_127 = ((MR_Word) ((MR_hl_field(0, PFUMM0_15, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) ModesOrArity_127)) == (MR_Integer) 1))
        {
          MR_Word ProcIds_57;
          MR_Word PredFormArity_58;
          MR_Word UserArity_59 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_127, (MR_Integer) 0))));

          mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_12, &ProcIds_57);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_59, &PredFormArity_58);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpecProcs_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ProcTable_12));
            MR_hl_field(1, base, 1) = ((MR_Box) (ProcIds_57));
            MR_hl_field(1, base, 2) = ((MR_Box) (UserArity_59));
            MR_hl_field(1, base, 3) = ((MR_Box) (PredFormArity_58));
            MR_hl_field(1, base, 4) = ((MR_Box) (PFUMM0_15));
          }
        }
        else
        {
          MR_Word ArgModes_88 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_127, (MR_Integer) 0))));
          MR_Word PredFormArity_89;
          MR_Integer ProcId_74;
          MR_Word ProcInfo_75;

          PredFormArity_89 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgModes_88);
          succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_5_p_0(ModuleInfo_9, ProcTable_12, ArgModes_88, &ProcId_74, &ProcInfo_75);
          if (succeeded)
          {
            MR_Word SpecProcTable_62;
            MR_Word UserArity_63;
            MR_Word Var_64;

            SpecProcTable_62 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_74)), ((MR_Box) (ProcInfo_75)));
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_63, PredFormArity_89);
            {
              Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_64, 0) = ((MR_Box) (ProcId_74));
              MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *MaybeSpecProcs_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SpecProcTable_62));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_64));
              MR_hl_field(1, base, 2) = ((MR_Box) (UserArity_63));
              MR_hl_field(1, base, 3) = ((MR_Box) (PredFormArity_89));
              MR_hl_field(1, base, 4) = ((MR_Box) (PFUMM0_15));
            }
          }
          else
          {
            MR_Word VarSet_68;
            MR_Word Specs_70;

            mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TVarSet_13, &VarSet_68);
            hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(ModuleInfo_9, PredId_10, PredInfo_11, VarSet_68, ArgModes_88, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[7])), Context_14, (MR_Word) ((MR_Unsigned) 0U), &Specs_70);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MaybeSpecProcs_16 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Specs_70));
            }
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_17 = ((MR_Word) ((MR_hl_field(1, PFUMM0_15, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) ModesOrArity_17)) == (MR_Integer) 1))
        {
          MR_Word ProcIds_29;
          MR_Word PredFormArity_41;
          MR_Word UserArity_42 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_17, (MR_Integer) 0))));

          mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_12, &ProcIds_29);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_42, &PredFormArity_41);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpecProcs_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ProcTable_12));
            MR_hl_field(1, base, 1) = ((MR_Box) (ProcIds_29));
            MR_hl_field(1, base, 2) = ((MR_Box) (UserArity_42));
            MR_hl_field(1, base, 3) = ((MR_Box) (PredFormArity_41));
            MR_hl_field(1, base, 4) = ((MR_Box) (PFUMM0_15));
          }
        }
        else
        {
          MR_Word ArgModes_20 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_17, (MR_Integer) 0))));
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

            SpecProcTable_24 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_22)), ((MR_Box) (ProcInfo_23)));
            parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_25, PredFormArity_21);
            {
              Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_30, 0) = ((MR_Box) (ProcId_22));
              MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *MaybeSpecProcs_16 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (SpecProcTable_24));
              MR_hl_field(1, base, 1) = ((MR_Box) (Var_30));
              MR_hl_field(1, base, 2) = ((MR_Box) (UserArity_25));
              MR_hl_field(1, base, 3) = ((MR_Box) (PredFormArity_21));
              MR_hl_field(1, base, 4) = ((MR_Box) (PFUMM0_15));
            }
          }
          else
          {
            MR_Word VarSet_26;
            MR_Word Specs_28;

            mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TVarSet_13, &VarSet_26);
            hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(ModuleInfo_9, PredId_10, PredInfo_11, VarSet_26, ArgModes_20, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[7])), Context_14, (MR_Word) ((MR_Unsigned) 0U), &Specs_28);
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
        MR_Word PredOrFunc_43;
        MR_Word PFUMM_44;
        MR_Word PredFormArity_45;
        MR_Word UserArity_46 = ((MR_Word) ((MR_hl_field(2, PFUMM0_15, (MR_Integer) 0))));
        MR_Word ProcIds_47;

        mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_12, &ProcIds_47);
        PredOrFunc_43 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_11);
        switch (PredOrFunc_43) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_40;

              {
                Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_40, 0) = ((MR_Box) (UserArity_46));
              }
              {
                PFUMM_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, PFUMM_44, 0) = ((MR_Box) (Var_40));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word Var_39;

              {
                Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_39, 0) = ((MR_Box) (UserArity_46));
              }
              {
                PFUMM_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PFUMM_44, 0) = ((MR_Box) (Var_39));
              }
            }
            break;
        }
        parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_43, UserArity_46, &PredFormArity_45);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpecProcs_16 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (ProcTable_12));
          MR_hl_field(1, base, 1) = ((MR_Box) (ProcIds_47));
          MR_hl_field(1, base, 2) = ((MR_Box) (UserArity_46));
          MR_hl_field(1, base, 3) = ((MR_Box) (PredFormArity_45));
          MR_hl_field(1, base, 4) = ((MR_Box) (PFUMM_44));
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__374__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__345__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_5_p_0(
  MR_Word PredInfo0_6,
  MR_Word TVarSet0_7,
  MR_Word Subst_8,
  MR_Word Context_9,
  MR_Word * MaybeSubstResult_10)
{
  MR_bool succeeded;
  MR_Word SubstList_11;
  MR_Word VarsToSub_12;
  MR_Word MultiSubstVars0_13;

  SubstList_11 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[1]), Subst_8);
  mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubstList_11, &VarsToSub_12);
  hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), VarsToSub_12, &MultiSubstVars0_13);
  if ((MultiSubstVars0_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word CalledTVarSet_18;
    MR_Word NameVarIndex0_19;
    MR_Word UnknownVarsToSub_22;
    MR_Word Var_54;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_6, &CalledTVarSet_18);
    mercury__varset__create_name_var_map_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), CalledTVarSet_18, &NameVarIndex0_19);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_54, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[1]));
      MR_hl_field(0, Var_54, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_5_p_0_1));
      MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_54, 3) = ((MR_Box) (TVarSet0_7));
      MR_hl_field(0, Var_54, 4) = ((MR_Box) (NameVarIndex0_19));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), Var_54, VarsToSub_12, &UnknownVarsToSub_22);
    if ((UnknownVarsToSub_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarsToSubSet_23;
      MR_Word SubstTypes0_24;
      MR_Word TVarsInSubstTypes0_25;
      MR_Word TVarsInSubstTypes_26;
      MR_Word RecSubstTVars0_27;
      MR_Word RecSubstTVars_28;

      mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), VarsToSub_12, &VarsToSubSet_23);
      mercury__assoc_list__values_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubstList_11, &SubstTypes0_24);
      parse_tree__prog_type__type_vars_in_types_2_p_0(SubstTypes0_24, &TVarsInSubstTypes0_25);
      mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), TVarsInSubstTypes0_25, &TVarsInSubstTypes_26);
      mercury__set__intersect_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), TVarsInSubstTypes_26, VarsToSubSet_23, &RecSubstTVars0_27);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), RecSubstTVars0_27, &RecSubstTVars_28);
      if ((RecSubstTVars_28 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TVarRenaming0_29;
        MR_Word VarsToReplace_30;
        MR_Word TVarSet_31;
        MR_Word TVarRenaming_33;
        MR_Word RenamedVarsToSub_34;
        MR_Word ExistQVars_35;
        MR_Word SubExistQVars_37;
        MR_Word Var_56;
        MR_Word Var_32;

        mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), &TVarRenaming0_29);
        mercury__list__append_3_p_1((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), VarsToSub_12, TVarsInSubstTypes0_25, &VarsToReplace_30);
        parse_tree__prog_util__get_new_tvars_8_p_0(VarsToReplace_30, TVarSet0_7, CalledTVarSet_18, &TVarSet_31, NameVarIndex0_19, &Var_32, TVarRenaming0_29, &TVarRenaming_33);
        mercury__map__apply_to_list_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), VarsToSub_12, TVarRenaming_33, &RenamedVarsToSub_34);
        hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_6, &ExistQVars_35);
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[2]));
          MR_hl_field(0, Var_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_5_p_0_2));
          MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_56, 3) = ((MR_Box) (ExistQVars_35));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), Var_56, RenamedVarsToSub_34, &SubExistQVars_37);
        if ((SubExistQVars_37 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SubstTypes_38;
          MR_Word SubAL_39;
          MR_Word TypeSubst_40;
          MR_Word Types0_41;
          MR_Word ClassContext0_42;
          MR_Word Types_43;
          MR_Word ClassContext_44;
          MR_Word RenamedSubst_45;

          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_33, SubstTypes0_24, &SubstTypes_38);
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedVarsToSub_34, SubstTypes_38, &SubAL_39);
          mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubAL_39, &TypeSubst_40);
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_6, &Types0_41);
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_6, &ClassContext0_42);
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeSubst_40, Types0_41, &Types_43);
          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(TypeSubst_40, ClassContext0_42, &ClassContext_44);
          mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[1]), SubAL_39, &RenamedSubst_45);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSubstResult_10 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (TVarSet_31));
            MR_hl_field(1, base, 1) = ((MR_Box) (Types_43));
            MR_hl_field(1, base, 2) = ((MR_Box) (ExistQVars_35));
            MR_hl_field(1, base, 3) = ((MR_Box) (ClassContext_44));
            MR_hl_field(1, base, 4) = ((MR_Box) (RenamedSubst_45));
          }
        }
        else
        {
          MR_Word Var_58;
          MR_Word Spec_66;
          MR_Word TVarSet_77;
          MR_Word Pieces_78;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_82;
          MR_Word Var_83;
          MR_Word Module_92;
          MR_String Name_93;
          MR_Word PredFormArity_94;
          MR_Word PredOrFunc_95;
          MR_Word PFSymNameArity_96;
          MR_Word Var_97;
          MR_Word Var_100;
          MR_Word Var_103;
          MR_Word Var_106;
          MR_Word Var_107;
          MR_Word Var_109;
          MR_String Var_110;
          MR_Word Var_113;
          MR_Word Var_114;
          MR_String Var_115;
          MR_Box conv0_Var_110;

          hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_6, &TVarSet_77);
          Module_92 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_6);
          Name_93 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo0_6);
          PredFormArity_94 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo0_6);
          PredOrFunc_95 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_6);
          {
            Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_97, 0) = ((MR_Box) (Module_92));
            MR_hl_field(1, Var_97, 1) = ((MR_Box) (Name_93));
          }
          {
            PFSymNameArity_96 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, PFSymNameArity_96, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_95));
            MR_hl_field(0, PFSymNameArity_96, 1) = ((MR_Box) (Var_97));
            MR_hl_field(0, PFSymNameArity_96, 2) = ((MR_Box) (PredFormArity_94));
          }
          {
            Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 13U));
            MR_hl_field(3, Var_107, 1) = ((MR_Box) (PFSymNameArity_96));
          }
          {
            Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
            MR_hl_field(1, Var_106, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27])));
          }
          {
            Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_103, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24])));
            MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_106));
          }
          {
            Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_100, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6])));
            MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_103));
          }
          {
            Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_79, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
            MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_100));
          }
          conv0_Var_110 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubExistQVars_37, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
          Var_110 = ((MR_String) (conv0_Var_110));
          {
            Var_109 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 6U));
            MR_hl_field(3, Var_109, 1) = ((MR_Box) (Var_110));
          }
          Var_115 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_77, SubExistQVars_37);
          {
            Var_114 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_114, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_114, 1) = ((MR_Box) (Var_115));
          }
          {
            Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_113, 0) = ((MR_Box) (Var_114));
            MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (Var_109));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_113));
          }
          Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
          Var_80 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[11])), Var_82);
          Pieces_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_80);
          {
            Spec_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Spec_66, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_subst_existq_tvars\'/4"));
            MR_hl_field(1, Spec_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Spec_66, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(1, Spec_66, 3) = ((MR_Box) (Context_9));
            MR_hl_field(1, Spec_66, 4) = ((MR_Box) (Pieces_78));
          }
          {
            Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_58, 0) = ((MR_Box) (Spec_66));
            MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSubstResult_10 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_58));
          }
        }
      }
      else
      {
        MR_Word Var_60;
        MR_Word Spec_69;

        hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_5_p_0(PredInfo0_6, Context_9, TVarSet0_7, RecSubstTVars_28, &Spec_69);
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (Spec_69));
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
    else
    {
      MR_Word Var_62;
      MR_Word Spec_72;

      hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0(PredInfo0_6, Context_9, TVarSet0_7, UnknownVarsToSub_22, &Spec_72);
      {
        Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_62, 0) = ((MR_Box) (Spec_72));
        MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSubstResult_10 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_62));
      }
    }
  }
  else
  {
    MR_Word MultiSubstVars_16;
    MR_Word Spec_17;
    MR_Word Var_52;

    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), MultiSubstVars0_13, &MultiSubstVars_16);
    hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_5_p_0(PredInfo0_6, Context_9, TVarSet0_7, MultiSubstVars_16, &Spec_17);
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Spec_17));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSubstResult_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_52));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word UnknownVars_9,
  MR_Word * Spec_10)
{
  MR_Word PredOrFunc_11;
  MR_String Decl_12;
  MR_Word Pieces_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_String Var_24;
  MR_Word Var_27;
  MR_Word Var_30;
  MR_Word Var_31;
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
  MR_Word Var_59;
  MR_String Var_60;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_String Var_65;
  MR_Box conv0_Var_60;
  MR_Box conv1_Var_24;

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
    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_57, 1) = ((MR_Box) (PFSymNameArity_46));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27])));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6])));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_50));
  }
  conv0_Var_60 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_60 = ((MR_String) (conv0_Var_60));
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) (Var_60));
  }
  Var_65 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, UnknownVars_9);
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_63));
  }
  conv1_Var_24 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownVars_9, ((MR_Box) ((MR_String) "does not")), ((MR_Box) ((MR_String) "do not")));
  Var_24 = ((MR_String) (conv1_Var_24));
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 31U));
    MR_hl_field(3, Var_31, 1) = ((MR_Box) (Decl_12));
  }
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[22])));
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[20])));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_27));
  }
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_21, Var_22);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])), Var_20);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_14, Var_15);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Spec_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_unknown_vars_to_subst\'/5"));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(1, base, 4) = ((MR_Box) (Pieces_13));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word MultiSubstVars_9,
  MR_Word * Spec_10)
{
  MR_Word Pieces_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_String Var_22;
  MR_Word Module_35;
  MR_String Name_36;
  MR_Word PredFormArity_37;
  MR_Word PredOrFunc_38;
  MR_Word PFSymNameArity_39;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_String Var_53;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_String Var_58;
  MR_Box conv0_Var_53;
  MR_Box conv1_Var_22;

  Module_35 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_36 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_37 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Module_35));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Name_36));
  }
  {
    PFSymNameArity_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_39, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
    MR_hl_field(0, PFSymNameArity_39, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, PFSymNameArity_39, 2) = ((MR_Box) (PredFormArity_37));
  }
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (PFSymNameArity_39));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27])));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_43));
  }
  conv0_Var_53 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MultiSubstVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_53 = ((MR_String) (conv0_Var_53));
  {
    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
  }
  Var_58 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, MultiSubstVars_9);
  {
    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_56));
  }
  conv1_Var_22 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MultiSubstVars_9, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
  Var_22 = ((MR_String) (conv1_Var_22));
  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[19])));
  }
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_20);
  Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])), Var_18);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, Var_13);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Spec_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_multiple_subst_vars\'/5"));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(1, base, 4) = ((MR_Box) (Pieces_11));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word TVarSet_8,
  MR_Word RecursiveVars_9,
  MR_Word * Spec_10)
{
  MR_Word Pieces_11;
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_String Var_22;
  MR_Word Module_35;
  MR_String Name_36;
  MR_Word PredFormArity_37;
  MR_Word PredOrFunc_38;
  MR_Word PFSymNameArity_39;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_52;
  MR_String Var_53;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_String Var_58;
  MR_Box conv0_Var_53;
  MR_Box conv1_Var_22;

  Module_35 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_36 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_37 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_38 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (Module_35));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Name_36));
  }
  {
    PFSymNameArity_39 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PFSymNameArity_39, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_38));
    MR_hl_field(0, PFSymNameArity_39, 1) = ((MR_Box) (Var_40));
    MR_hl_field(0, PFSymNameArity_39, 2) = ((MR_Box) (PredFormArity_37));
  }
  {
    Var_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_50, 0) = ((MR_Box) ((MR_Unsigned) 13U));
    MR_hl_field(3, Var_50, 1) = ((MR_Box) (PFSymNameArity_39));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27])));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_49));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6])));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_43));
  }
  conv0_Var_53 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RecursiveVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_53 = ((MR_String) (conv0_Var_53));
  {
    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
  }
  Var_58 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, RecursiveVars_9);
  {
    Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_57, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_19, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_19, 1) = ((MR_Box) (Var_56));
  }
  conv1_Var_22 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RecursiveVars_9, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
  Var_22 = ((MR_String) (conv1_Var_22));
  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17])));
  }
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_19, Var_20);
  Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])), Var_18);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_12, Var_13);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Spec_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_recursive_subst\'/5"));
    MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(1, base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(1, base, 4) = ((MR_Box) (Pieces_11));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box H_3 = (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0));
    MR_Word T_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word DupVars0_6;

    hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(TypeInfo_for_T_7, T_4, &DupVars0_6);
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
hlds__make_hlds__add_pragma__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  recompilation__record_expanded_items_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0(
  MR_Word PredOrFunc_8,
  MR_Word SymName_9,
  MR_Word UserArity_10,
  MR_Word PredStatus_11,
  MR_Word TSInfo_12,
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
        MR_Word ExpandedItems_19;
        MR_Word Var_22;

        ItemType_15 = recompilation__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_8);
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
        ExpandedItems_19 = ((MR_Word) ((MR_hl_field(0, TSInfo_12, (MR_Integer) 5))));
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_7[0]));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__maybe_record_type_spec_in_qual_info_7_p_0_1));
          MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_22, 3) = ((MR_Box) (ItemId_18));
          MR_hl_field(0, Var_22, 4) = ((MR_Box) (ExpandedItems_19));
        }
        hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(Var_22, STATE_VARIABLE_QualInfo_0_20, STATE_VARIABLE_QualInfo_21);
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__record_type_specialization_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_38;

  hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__record_type_specialization__273__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv0_LambdaHeadVar__2_38);
  *wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_38));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__record_type_specialization_10_p_0(
  MR_Word TSInfo0_11,
  MR_Word PredId_12,
  MR_Word SpecPredId_13,
  MR_Word SpecPredStatus_14,
  MR_Word SpecProcIds_15,
  MR_Word RenamedSubst_16,
  MR_Word TVarSet_17,
  MR_Word PFUMM_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  MR_bool succeeded;
  MR_Word TypeSpecInfo0_20;
  MR_Word ProcsToSpec0_21;
  MR_Word ForceVersions0_22;
  MR_Word SpecMap0_23;
  MR_Word PragmaMap0_24;
  MR_Word SpecPredProcIds_27;
  MR_Word ProcsToSpec_28;
  MR_Word ForceVersions_29;
  MR_Word SpecMap_30;
  MR_Word TSInfo_31;
  MR_Word PragmaMap_32;
  MR_Word TypeSpecInfo_33;
  MR_Word Var_36;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_50;
  MR_Word Var_39;

  hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &TypeSpecInfo0_20);
  ProcsToSpec0_21 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_20, (MR_Integer) 0))));
  ForceVersions0_22 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_20, (MR_Integer) 1))));
  SpecMap0_23 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_20, (MR_Integer) 2))));
  PragmaMap0_24 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo0_20, (MR_Integer) 3))));
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[0]));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__record_type_specialization_10_p_0_1));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_36, 3) = ((MR_Box) (PredId_12));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_36, SpecProcIds_15, &SpecPredProcIds_27);
  mercury__set__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SpecPredProcIds_27, ProcsToSpec0_21, &ProcsToSpec_28);
  mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (SpecPredId_13)), ForceVersions0_22, &ForceVersions_29);
  Var_39 = (MR_Word) (SpecPredStatus_14);
  succeeded = (Var_39 == (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    mercury__multi_map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_12)), ((MR_Box) (SpecPredId_13)), SpecMap0_23, &SpecMap_30);
  else
    SpecMap_30 = SpecMap0_23;
  Var_46 = ((MR_Word) ((MR_hl_field(0, TSInfo0_11, (MR_Integer) 1))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, TSInfo0_11, (MR_Integer) 2))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, TSInfo0_11, (MR_Integer) 5))));
  {
    TSInfo_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TSInfo_31, 0) = ((MR_Box) (PFUMM_18));
    MR_hl_field(0, TSInfo_31, 1) = ((MR_Box) (Var_46));
    MR_hl_field(0, TSInfo_31, 2) = ((MR_Box) (Var_47));
    MR_hl_field(0, TSInfo_31, 3) = ((MR_Box) (RenamedSubst_16));
    MR_hl_field(0, TSInfo_31, 4) = ((MR_Box) (TVarSet_17));
    MR_hl_field(0, TSInfo_31, 5) = ((MR_Box) (Var_50));
  }
  mercury__multi_map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), ((MR_Box) (PredId_12)), ((MR_Box) (TSInfo_31)), PragmaMap0_24, &PragmaMap_32);
  {
    TypeSpecInfo_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeSpecInfo_33, 0) = ((MR_Box) (ProcsToSpec_28));
    MR_hl_field(0, TypeSpecInfo_33, 1) = ((MR_Box) (ForceVersions_29));
    MR_hl_field(0, TypeSpecInfo_33, 2) = ((MR_Box) (SpecMap_30));
    MR_hl_field(0, TypeSpecInfo_33, 3) = ((MR_Box) (PragmaMap_32));
  }
  hlds__hlds_module__module_info_set_type_spec_info_3_p_0(TypeSpecInfo_33, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_type_spec_version_of_pred_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_type_spec_version_of_pred_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ProcInfo_5;

  hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_STATE_VARIABLE_ProcInfo_5);
  *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_5));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_type_spec_version_of_pred_15_p_0(
  MR_Word PredId_16,
  MR_Word PredInfo0_17,
  MR_Word PredFormArity_18,
  MR_Word TSInfo0_19,
  MR_Word TVarSet_20,
  MR_Word Types_21,
  MR_Word ExistQVars_22,
  MR_Word ClassContext_23,
  MR_Word SpecProcTable0_24,
  MR_Word SpecProcIds_25,
  MR_Word Context_26,
  MR_Word * SpecPredId_27,
  MR_Word * SpecPredStatus_28,
  MR_Word STATE_VARIABLE_ModuleInfo_0_77,
  MR_Word * STATE_VARIABLE_ModuleInfo_78)
{
  MR_bool succeeded;
  MR_Word PFUMM0_30 = ((MR_Word) ((MR_hl_field(0, TSInfo0_19, (MR_Integer) 0))));
  MR_Word SymName_31 = ((MR_Word) ((MR_hl_field(0, TSInfo0_19, (MR_Integer) 1))));
  MR_Word SpecModuleName_32 = ((MR_Word) ((MR_hl_field(0, TSInfo0_19, (MR_Integer) 2))));
  MR_Word Subst_33 = ((MR_Word) ((MR_hl_field(0, TSInfo0_19, (MR_Integer) 3))));
  MR_Word TVarSet0_34 = ((MR_Word) ((MR_hl_field(0, TSInfo0_19, (MR_Integer) 4))));
  MR_Word SpecProcTable_36;
  MR_Word ArgVarSet0_37;
  MR_Integer PredFormArityInt_38;
  MR_Word ArgVars_39;
  MR_Word ArgVarSet_40;
  MR_Word GoalInfo0_41;
  MR_Word NonLocals_42;
  MR_Word GoalInfo1_43;
  MR_Word GoalInfo_44;
  MR_Word PredOrFunc_45;
  MR_Word Goal_46;
  MR_Word Clause_47;
  MR_Word ExplicitVarTypes_48;
  MR_Word VarTable_49;
  MR_Word RttiVarMaps_50;
  MR_Word TVarNameMap_51;
  MR_Word ArgsVec_52;
  MR_Word ClausesRep_53;
  MR_Word ItemNumbers_54;
  MR_Word Clauses_55;
  MR_Word Markers0_56;
  MR_Word Markers_57;
  MR_Word Proofs_58;
  MR_Word ConstraintMap_59;
  MR_Word MaybePredOrFunc0_60;
  MR_String UnqualName_63;
  MR_Word Transform_64;
  MR_String SpecName_65;
  MR_Word OrigOrigin_66;
  MR_Word SubstDesc_67;
  MR_Word PredTransform_68;
  MR_Word Origin_69;
  MR_Word VarNameRemap_72;
  MR_Word SpecPredInfo0_73;
  MR_Word SpecPredInfo_74;
  MR_Word PredTable0_75;
  MR_Word PredTable_76;
  MR_Word Var_81;
  MR_Word Var_84;
  MR_Word _Arity_61;
  MR_Word _MaybeModes_62;

  mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[3]), SpecProcTable0_24, &SpecProcTable_36);
  mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ArgVarSet0_37);
  PredFormArityInt_38 = (MR_Integer) (PredFormArity_18);
  parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeadVar__", PredFormArityInt_38, &ArgVars_39, ArgVarSet0_37, &ArgVarSet_40);
  hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_41);
  parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_39, &NonLocals_42);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_42, GoalInfo0_41, &GoalInfo1_43);
  hlds__hlds_goal__goal_info_set_context_3_p_0(Context_26, GoalInfo1_43, &GoalInfo_44);
  PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_17);
  hlds__make_hlds__qual_info__construct_pred_or_func_call_6_p_0(PredId_16, PredOrFunc_45, SymName_31, ArgVars_39, GoalInfo_44, &Goal_46);
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (SpecProcIds_25));
  }
  {
    Clause_47 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Clause_47, 0) = ((MR_Box) (Var_81));
    MR_hl_field(0, Clause_47, 1) = ((MR_Box) (Goal_46));
    MR_hl_field(0, Clause_47, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Clause_47, 3) = ((MR_Box) (Context_26));
    MR_hl_field(0, Clause_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__vartypes__init_vartypes_1_p_0(&ExplicitVarTypes_48);
  parse_tree__var_table__init_var_table_1_p_0(&VarTable_49);
  hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_50);
  mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), &TVarNameMap_51);
  ArgsVec_52 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[3]), PredOrFunc_45, ArgVars_39);
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (Clause_47));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  hlds__hlds_clauses__set_clause_list_2_p_0(Var_84, &ClausesRep_53);
  ItemNumbers_54 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
  {
    Clauses_55 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Clauses_55, 0) = ((MR_Box) (ArgVarSet_40));
    MR_hl_field(0, Clauses_55, 1) = ((MR_Box) (ExplicitVarTypes_48));
    MR_hl_field(0, Clauses_55, 2) = ((MR_Box) (VarTable_49));
    MR_hl_field(0, Clauses_55, 3) = ((MR_Box) (RttiVarMaps_50));
    MR_hl_field(0, Clauses_55, 4) = ((MR_Box) (TVarNameMap_51));
    MR_hl_field(0, Clauses_55, 5) = ((MR_Box) (ArgsVec_52));
    MR_hl_field(0, Clauses_55, 6) = ((MR_Box) (ClausesRep_53));
    MR_hl_field(0, Clauses_55, 7) = ((MR_Box) (ItemNumbers_54));
    MR_hl_field(0, Clauses_55, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
  }
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_17, &Markers0_56);
  hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_56, &Markers_57);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_58);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_59);
  succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_17);
  if (succeeded)
    *SpecPredStatus_28 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
  else
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_17, SpecPredStatus_28);
  parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM0_30, &MaybePredOrFunc0_60, &_Arity_61, &_MaybeModes_62);
  UnqualName_63 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_31);
  {
    Transform_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_64, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(3, Transform_64, 1) = ((MR_Box) (MaybePredOrFunc0_60));
    MR_hl_field(3, Transform_64, 2) = ((MR_Box) (TVarSet0_34));
    MR_hl_field(3, Transform_64, 3) = ((MR_Box) (Subst_33));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(UnqualName_63, Transform_64, &SpecName_65);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_17, &OrigOrigin_66);
  SubstDesc_67 = mercury__one_or_more__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[1]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[2]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[4]), Subst_33);
  {
    PredTransform_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, PredTransform_68, 0) = ((MR_Box) (SubstDesc_67));
  }
  {
    Origin_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Origin_69, 0) = ((MR_Box) (PredTransform_68));
    MR_hl_field(2, Origin_69, 1) = ((MR_Box) (OrigOrigin_66));
    MR_hl_field(2, Origin_69, 2) = ((MR_Box) (PredId_16));
  }
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_17, &VarNameRemap_72);
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_45, SpecModuleName_32, SpecName_65, PredFormArity_18, Context_26, Origin_69, *SpecPredStatus_28, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[2]), Markers_57, Types_21, TVarSet_20, ExistQVars_22, ClassContext_23, Proofs_58, ConstraintMap_59, Clauses_55, VarNameRemap_72, &SpecPredInfo0_73);
  hlds__hlds_pred__pred_info_set_proc_table_3_p_0(SpecProcTable_36, SpecPredInfo0_73, &SpecPredInfo_74);
  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_77, &PredTable0_75);
  hlds__pred_table__predicate_table_insert_4_p_0(SpecPredInfo_74, SpecPredId_27, PredTable0_75, &PredTable_76);
  hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_76, STATE_VARIABLE_ModuleInfo_0_77, STATE_VARIABLE_ModuleInfo_78);
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1(
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
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_45;
  MR_Word conv1_STATE_VARIABLE_QualInfo_47;
  MR_Word conv0_STATE_VARIABLE_Specs_49;

  hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_45, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_QualInfo_47, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_Specs_49);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_45));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_47));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_49));
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0(
  MR_Word TSInfo_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_33,
  MR_Word * STATE_VARIABLE_ModuleInfo_34,
  MR_Word STATE_VARIABLE_QualInfo_0_35,
  MR_Word * STATE_VARIABLE_QualInfo_36,
  MR_Word STATE_VARIABLE_Specs_0_37,
  MR_Word * STATE_VARIABLE_Specs_38)
{
  MR_Word PFUMM_14 = ((MR_Word) ((MR_hl_field(0, TSInfo_9, (MR_Integer) 0))));
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(0, TSInfo_9, (MR_Integer) 1))));
  MR_Word PredTable_20;
  MR_Word MaybePredOrFunc_23;
  MR_Word UserArity_26;
  MR_Word PredIds_27;
  MR_Word AllArityPredIds_28;
  MR_Word STATE_VARIABLE_Specs_42_42;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &PredTable_20);
  switch (MR_tag((MR_Word) PFUMM_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_70 = ((MR_Word) ((MR_hl_field(0, PFUMM_14, (MR_Integer) 0))));
        MR_Word PredFormArity_73;

        MaybePredOrFunc_23 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[1]));
        if (((MR_tag((MR_Word) ModesOrArity_70)) == (MR_Integer) 1))
        {
          UserArity_26 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_70, (MR_Integer) 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_26, &PredFormArity_73);
        }
        else
        {
          MR_Word Modes_66 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_70, (MR_Integer) 0))));

          PredFormArity_73 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_66);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_26, PredFormArity_73);
        }
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 0, SymName_15, PredFormArity_73, &PredIds_27);
        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 0, SymName_15, &AllArityPredIds_28);
        STATE_VARIABLE_Specs_42_42 = STATE_VARIABLE_Specs_0_37;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_21 = ((MR_Word) ((MR_hl_field(1, PFUMM_14, (MR_Integer) 0))));
        MR_Word PredFormArity_25;

        MaybePredOrFunc_23 = (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[0]));
        if (((MR_tag((MR_Word) ModesOrArity_21)) == (MR_Integer) 1))
        {
          UserArity_26 = ((MR_Word) ((MR_hl_field(1, ModesOrArity_21, (MR_Integer) 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_26, &PredFormArity_25);
        }
        else
        {
          MR_Word Modes_24 = ((MR_Word) ((MR_hl_field(0, ModesOrArity_21, (MR_Integer) 0))));

          PredFormArity_25 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_24);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_26, PredFormArity_25);
        }
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 1, SymName_15, PredFormArity_25, &PredIds_27);
        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 1, SymName_15, &AllArityPredIds_28);
        STATE_VARIABLE_Specs_42_42 = STATE_VARIABLE_Specs_0_37;
      }
      break;
    case (MR_Integer) 2:
      {
        UserArity_26 = ((MR_Word) ((MR_hl_field(2, PFUMM_14, (MR_Integer) 0))));
        hlds__make_hlds__add_pragma__maybe_warn_about_pfumm_unknown_7_p_0(STATE_VARIABLE_ModuleInfo_0_33, (MR_String) "type_spec", PFUMM_14, SymName_15, Context_10, STATE_VARIABLE_Specs_0_37, &STATE_VARIABLE_Specs_42_42);
        MaybePredOrFunc_23 = (MR_Word) ((MR_Unsigned) 0U);
        hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_20, (MR_Integer) 0, SymName_15, UserArity_26, &PredIds_27);
        hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable_20, (MR_Integer) 0, SymName_15, &AllArityPredIds_28);
      }
      break;
  }
  if ((PredIds_27 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredIdTable_29;
    MR_Word OtherUserArities_30;

    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_33, &PredIdTable_29);
    hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable_29, AllArityPredIds_28, UserArity_26, &OtherUserArities_30);
    hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(MaybePredOrFunc_23, SymName_15, UserArity_26, OtherUserArities_30, Context_10, (MR_Word) (MR_mkword(1, &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[7])), STATE_VARIABLE_Specs_42_42, STATE_VARIABLE_Specs_38);
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
      Var_53 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[0]));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1));
      MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_53, 3) = ((MR_Box) (TSInfo_9));
      MR_hl_field(0, Var_53, 4) = ((MR_Box) (Context_10));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[0]), Var_53, PredIds_27, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_33)), &conv5_STATE_VARIABLE_ModuleInfo_34, ((MR_Box) (STATE_VARIABLE_QualInfo_0_35)), &conv4_STATE_VARIABLE_QualInfo_36, ((MR_Box) (STATE_VARIABLE_Specs_42_42)), &conv3_STATE_VARIABLE_Specs_38);
    *STATE_VARIABLE_ModuleInfo_34 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_34));
    *STATE_VARIABLE_QualInfo_36 = ((MR_Word) (conv4_STATE_VARIABLE_QualInfo_36));
    *STATE_VARIABLE_Specs_38 = ((MR_Word) (conv3_STATE_VARIABLE_Specs_38));
  }
}

void mercury__hlds__make_hlds__add_pragma__add_pragma_type_spec__init(void)
{
}

void mercury__hlds__make_hlds__add_pragma__add_pragma_type_spec__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_pragma__add_pragma_type_spec__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_pragma__add_pragma_type_spec__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_pragma.add_pragma_type_spec.
