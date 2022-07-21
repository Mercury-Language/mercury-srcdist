/*
** Automatically generated from `add_pragma_type_spec.m'
** by the Mercury compiler,
** version rotd-2022-07-21
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
#include "parse_tree.error_util.mih"
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




static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_recomp_item_id_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__359__1_2_p_0(
  MR_Word ExistQVars_38,
  MR_Word LambdaHeadVar__1_62);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__330__1_3_p_0(
  MR_Word TVarSet0_11,
  MR_Word NameVarIndex0_22,
  MR_Word LambdaHeadVar__1_60);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__240__1_3_p_0(
  MR_Word PredId_16,
  MR_Integer LambdaHeadVar__1_133,
  MR_Word * LambdaHeadVar__2_134);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * STATE_VARIABLE_ProcInfo_5);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0(
  MR_Word TSInfo0_12,
  MR_Word UserArity_13,
  MR_Word MaybeArgModes_14,
  MR_Word Context_15,
  MR_Word PredId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_107,
  MR_Word * STATE_VARIABLE_ModuleInfo_108,
  MR_Word STATE_VARIABLE_QualInfo_0_109,
  MR_Word * STATE_VARIABLE_QualInfo_110,
  MR_Word STATE_VARIABLE_Specs_0_111,
  MR_Word * STATE_VARIABLE_Specs_112);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_12_p_0(
  MR_Word PredId_13,
  MR_Word PredInfo_14,
  MR_Word TVarSet_15,
  MR_Word MaybeArgModes_16,
  MR_Word Context_17,
  MR_Word * MaybeProcIds_18,
  MR_Word STATE_VARIABLE_Procs_0_29,
  MR_Word * STATE_VARIABLE_Procs_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_7_p_0(
  MR_Word Context_8,
  MR_Word Subst_9,
  MR_Word PredInfo0_10,
  MR_Word TVarSet0_11,
  MR_Word * MaybeSubstResult_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56);

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
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Context_6,
  MR_Word SubExistQVars_7,
  MR_Word * Spec_8);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[1][14];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_7[1][7];




static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[4])))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the existentially quantified type"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the substitution includes"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "on both sides of the substitution."))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "multiple replacement types."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occur in the"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[2])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[3])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_2)),
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
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
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
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



static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__maybe__pti_maybe_1__plain_list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
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

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__359__1_2_p_0(
  MR_Word ExistQVars_38,
  MR_Word LambdaHeadVar__1_62)
{
  MR_bool succeeded;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), ((MR_Box) (LambdaHeadVar__1_62)), ExistQVars_38);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__330__1_3_p_0(
  MR_Word TVarSet0_11,
  MR_Word NameVarIndex0_22,
  MR_Word LambdaHeadVar__1_60)
{
  MR_bool succeeded;
  MR_String VarName_24;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_11, LambdaHeadVar__1_60, &VarName_24);
  succeeded = mercury__map__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), NameVarIndex0_22, ((MR_Box) (VarName_24)));
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__240__1_3_p_0(
  MR_Word PredId_16,
  MR_Integer LambdaHeadVar__1_133,
  MR_Word * LambdaHeadVar__2_134)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_134 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaHeadVar__1_133));
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
  MR_Word TVar_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Type_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer Var_5;

  Var_5 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVar_3);
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
    MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Type_4));
  }
  return HeadVar__2_2;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_HeadVar__4_4;

  recompilation__record_expanded_items_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv3_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__4_4));
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_LambdaHeadVar__2_134;

  hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__240__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_134);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_134));
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_2(
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
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_1(
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
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0(
  MR_Word TSInfo0_12,
  MR_Word UserArity_13,
  MR_Word MaybeArgModes_14,
  MR_Word Context_15,
  MR_Word PredId_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_107,
  MR_Word * STATE_VARIABLE_ModuleInfo_108,
  MR_Word STATE_VARIABLE_QualInfo_0_109,
  MR_Word * STATE_VARIABLE_QualInfo_110,
  MR_Word STATE_VARIABLE_Specs_0_111,
  MR_Word * STATE_VARIABLE_Specs_112)
{
  MR_bool succeeded;
  MR_Word PFUMM0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 0))));
  MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 1))));
  MR_Word SpecModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 2))));
  MR_Word Subst_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 3))));
  MR_Word TVarSet0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 4))));
  MR_Word ExpandedItems_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 5))));
  MR_String UnqualName_26;
  MR_Word MaybePredOrFunc0_27;
  MR_Word Transform_30;
  MR_String SpecName_31;
  MR_Word PredInfo0_32;
  MR_Word MaybeSubstResult_33;
  MR_Word STATE_VARIABLE_ModuleInfo_113_113;
  MR_Word _Arity_28;
  MR_Word _MaybeModes_29;

  UnqualName_26 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_21);
  parse_tree__prog_item__pfumm_to_maybe_pf_arity_maybe_modes_4_p_0(PFUMM0_20, &MaybePredOrFunc0_27, &_Arity_28, &_MaybeModes_29);
  {
    Transform_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Transform_30, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(3), Transform_30, 1) = ((MR_Box) (MaybePredOrFunc0_27));
    MR_hl_field(MR_mktag(3), Transform_30, 2) = ((MR_Box) (TVarSet0_24));
    MR_hl_field(MR_mktag(3), Transform_30, 3) = ((MR_Box) (Subst_23));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(UnqualName_26, Transform_30, &SpecName_31);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_107, PredId_16, &PredInfo0_32);
  hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_7_p_0(Context_15, Subst_23, PredInfo0_32, TVarSet0_24, &MaybeSubstResult_33, STATE_VARIABLE_ModuleInfo_0_107, &STATE_VARIABLE_ModuleInfo_113_113);
  if (((MR_tag((MR_Word) MaybeSubstResult_33)) == (MR_Integer) 0))
  {
    MR_Word SubstSpecs_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSubstResult_33, (MR_Integer) 0))));

    *STATE_VARIABLE_Specs_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), SubstSpecs_106, STATE_VARIABLE_Specs_0_111);
    *STATE_VARIABLE_ModuleInfo_108 = STATE_VARIABLE_ModuleInfo_113_113;
    *STATE_VARIABLE_QualInfo_110 = STATE_VARIABLE_QualInfo_0_109;
  }
  else
  {
    MR_Word TVarSet_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubstResult_33, (MR_Integer) 0))));
    MR_Word Types_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubstResult_33, (MR_Integer) 1))));
    MR_Word ExistQVars_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubstResult_33, (MR_Integer) 2))));
    MR_Word ClassContext_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubstResult_33, (MR_Integer) 3))));
    MR_Word RenamedSubst_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSubstResult_33, (MR_Integer) 4))));
    MR_Word ProcTable0_39;
    MR_Word MaybeProcIds_40;
    MR_Word ProcTable1_41;
    MR_Word ProcTable_42;
    MR_Word Globals_43;
    MR_Word OptTuple_44;
    MR_Word DoTypeSpec_45;
    MR_Word Smart_46;
    MR_Word STATE_VARIABLE_ModuleInfo_114_114;
    MR_Word ProcIds_47;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_32, &ProcTable0_39);
    hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_12_p_0(PredId_16, PredInfo0_32, TVarSet0_24, MaybeArgModes_14, Context_15, &MaybeProcIds_40, ProcTable0_39, &ProcTable1_41, STATE_VARIABLE_ModuleInfo_113_113, &STATE_VARIABLE_ModuleInfo_114_114, STATE_VARIABLE_Specs_0_111, STATE_VARIABLE_Specs_112);
    mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[3]), ProcTable1_41, &ProcTable_42);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_114_114, &Globals_43);
    libs__globals__get_opt_tuple_2_p_0(Globals_43, &OptTuple_44);
    DoTypeSpec_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_44, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    libs__globals__lookup_bool_option_3_p_0(Globals_43, (MR_Integer) 151, &Smart_46);
    succeeded = (MaybeProcIds_40 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ProcIds_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcIds_40, (MR_Integer) 0))));
      succeeded = (DoTypeSpec_45 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_32);
        succeeded = !(succeeded);
        if (!(succeeded))
          succeeded = (Smart_46 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word ArgVarSet0_48;
      MR_Word PredOrFunc_49;
      MR_Word PredFormArity_50;
      MR_Integer PredFormArityInt_51;
      MR_Word ArgVars_52;
      MR_Word ArgVarSet_53;
      MR_Word GoalInfo0_54;
      MR_Word NonLocals_55;
      MR_Word GoalInfo1_56;
      MR_Word GoalInfo_57;
      MR_Word Goal_58;
      MR_Word Clause_59;
      MR_Word ExplicitVarTypes_60;
      MR_Word VarTable_61;
      MR_Word RttiVarMaps_62;
      MR_Word TVarNameMap_63;
      MR_Word ArgsVec_64;
      MR_Word ClausesRep_65;
      MR_Word ItemNumbers_66;
      MR_Word Clauses_67;
      MR_Word Markers0_68;
      MR_Word Markers_69;
      MR_Word Proofs_70;
      MR_Word ConstraintMap_71;
      MR_Word PredStatus_72;
      MR_Word OrigOrigin_73;
      MR_Word SubstDesc_74;
      MR_Word Origin_75;
      MR_Word VarNameRemap_78;
      MR_Word NewPredInfo0_79;
      MR_Word NewPredInfo_80;
      MR_Word PredTable0_81;
      MR_Word NewPredId_82;
      MR_Word PredTable_83;
      MR_Word TypeSpecInfo0_84;
      MR_Word ProcsToSpec0_85;
      MR_Word ForceVersions0_86;
      MR_Word SpecMap0_87;
      MR_Word PragmaMap0_88;
      MR_Word PredProcIds_91;
      MR_Word ProcsToSpec_92;
      MR_Word ForceVersions_93;
      MR_Word SpecMap_94;
      MR_Word ModesOrArity_95;
      MR_Word PFUMM_97;
      MR_Word TSInfo_98;
      MR_Word PragmaMap_99;
      MR_Word TypeSpecInfo_100;
      MR_Word IsImported_101;
      MR_Word Var_119;
      MR_Word Var_122;
      MR_Word Var_129;
      MR_Word STATE_VARIABLE_ModuleInfo_131_131;
      MR_Word Var_132;
      MR_Word Var_135;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ArgVarSet0_48);
      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_54);
      {
        Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_119, 0) = ((MR_Box) (ProcIds_47));
      }
      parse_tree__vartypes__init_vartypes_1_p_0(&ExplicitVarTypes_60);
      parse_tree__var_table__init_var_table_1_p_0(&VarTable_61);
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_62);
      mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), &TVarNameMap_63);
      ItemNumbers_66 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_32, &Markers0_68);
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, Markers0_68, &Markers_69);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_70);
      mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_71);
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_32);
      if (succeeded)
        PredStatus_72 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
      else
        hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_32, &PredStatus_72);
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_32, &OrigOrigin_73);
      SubstDesc_74 = mercury__one_or_more__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[1]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[4]), Subst_23);
      {
        Var_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_129, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_129, 1) = ((MR_Box) (SubstDesc_74));
      }
      {
        Origin_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Origin_75, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), Origin_75, 1) = ((MR_Box) (Var_129));
        MR_hl_field(MR_mktag(3), Origin_75, 2) = ((MR_Box) (OrigOrigin_73));
        MR_hl_field(MR_mktag(3), Origin_75, 3) = ((MR_Box) (PredId_16));
      }
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_32, &VarNameRemap_78);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_114_114, &PredTable0_81);
      {
        Var_132 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_132, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_132, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_3));
        MR_hl_field(MR_mktag(0), Var_132, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_132, 3) = ((MR_Box) (PredId_16));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_132, ProcIds_47, &PredProcIds_91);
      if ((MaybeArgModes_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ModesOrArity_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ModesOrArity_95, 0) = ((MR_Box) (UserArity_13));
        }
      else
      {
        MR_Word ArgModes_96 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_14, (MR_Integer) 0))));

        {
          ModesOrArity_95 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ModesOrArity_95, 0) = ((MR_Box) (ArgModes_96));
        }
      }
      PredOrFunc_49 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_32);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_49, UserArity_13, &PredFormArity_50);
      PredFormArityInt_51 = (MR_Integer) (PredFormArity_50);
      parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeadVar__", PredFormArityInt_51, &ArgVars_52, ArgVarSet0_48, &ArgVarSet_53);
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_52, &NonLocals_55);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_55, GoalInfo0_54, &GoalInfo1_56);
      hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, GoalInfo1_56, &GoalInfo_57);
      hlds__make_hlds__qual_info__construct_pred_or_func_call_6_p_0(PredId_16, PredOrFunc_49, SymName_21, ArgVars_52, GoalInfo_57, &Goal_58);
      {
        Clause_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Clause_59, 0) = ((MR_Box) (Var_119));
        MR_hl_field(MR_mktag(0), Clause_59, 1) = ((MR_Box) (Goal_58));
        MR_hl_field(MR_mktag(0), Clause_59, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Clause_59, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), Clause_59, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (Clause_59));
        MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__hlds_clauses__set_clause_list_2_p_0(Var_122, &ClausesRep_65);
      ArgsVec_64 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), PredOrFunc_49, ArgVars_52);
      {
        Clauses_67 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Clauses_67, 0) = ((MR_Box) (ArgVarSet_53));
        MR_hl_field(MR_mktag(0), Clauses_67, 1) = ((MR_Box) (ExplicitVarTypes_60));
        MR_hl_field(MR_mktag(0), Clauses_67, 2) = ((MR_Box) (VarTable_61));
        MR_hl_field(MR_mktag(0), Clauses_67, 3) = ((MR_Box) (RttiVarMaps_62));
        MR_hl_field(MR_mktag(0), Clauses_67, 4) = ((MR_Box) (TVarNameMap_63));
        MR_hl_field(MR_mktag(0), Clauses_67, 5) = ((MR_Box) (ArgsVec_64));
        MR_hl_field(MR_mktag(0), Clauses_67, 6) = ((MR_Box) (ClausesRep_65));
        MR_hl_field(MR_mktag(0), Clauses_67, 7) = ((MR_Box) (ItemNumbers_66));
        MR_hl_field(MR_mktag(0), Clauses_67, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      }
      hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_49, SpecModuleName_22, SpecName_31, PredFormArity_50, Context_15, Origin_75, PredStatus_72, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[2]), Markers_69, Types_35, TVarSet_34, ExistQVars_36, ClassContext_37, Proofs_70, ConstraintMap_71, Clauses_67, VarNameRemap_78, &NewPredInfo0_79);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_42, NewPredInfo0_79, &NewPredInfo_80);
      hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_80, &NewPredId_82, PredTable0_81, &PredTable_83);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_83, STATE_VARIABLE_ModuleInfo_114_114, &STATE_VARIABLE_ModuleInfo_131_131);
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_ModuleInfo_131_131, &TypeSpecInfo0_84);
      ProcsToSpec0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_84, (MR_Integer) 0))));
      ForceVersions0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_84, (MR_Integer) 1))));
      SpecMap0_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_84, (MR_Integer) 2))));
      PragmaMap0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_84, (MR_Integer) 3))));
      mercury__set__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PredProcIds_91, ProcsToSpec0_85, &ProcsToSpec_92);
      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (NewPredId_82)), ForceVersions0_86, &ForceVersions_93);
      Var_135 = (MR_Word) (PredStatus_72);
      succeeded = (Var_135 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        mercury__multi_map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_16)), ((MR_Box) (NewPredId_82)), SpecMap0_87, &SpecMap_94);
      else
        SpecMap_94 = SpecMap0_87;
      switch (PredOrFunc_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            PFUMM_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PFUMM_97, 0) = ((MR_Box) (ModesOrArity_95));
          }
          break;
        case (MR_Integer) 0:
          {
            PFUMM_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PFUMM_97, 0) = ((MR_Box) (ModesOrArity_95));
          }
          break;
      }
      {
        TSInfo_98 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TSInfo_98, 0) = ((MR_Box) (PFUMM_97));
        MR_hl_field(MR_mktag(0), TSInfo_98, 1) = ((MR_Box) (SymName_21));
        MR_hl_field(MR_mktag(0), TSInfo_98, 2) = ((MR_Box) (SpecModuleName_22));
        MR_hl_field(MR_mktag(0), TSInfo_98, 3) = ((MR_Box) (RenamedSubst_38));
        MR_hl_field(MR_mktag(0), TSInfo_98, 4) = ((MR_Box) (TVarSet_34));
        MR_hl_field(MR_mktag(0), TSInfo_98, 5) = ((MR_Box) (ExpandedItems_25));
      }
      mercury__multi_map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), ((MR_Box) (PredId_16)), ((MR_Box) (TSInfo_98)), PragmaMap0_88, &PragmaMap_99);
      {
        TypeSpecInfo_100 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeSpecInfo_100, 0) = ((MR_Box) (ProcsToSpec_92));
        MR_hl_field(MR_mktag(0), TypeSpecInfo_100, 1) = ((MR_Box) (ForceVersions_93));
        MR_hl_field(MR_mktag(0), TypeSpecInfo_100, 2) = ((MR_Box) (SpecMap_94));
        MR_hl_field(MR_mktag(0), TypeSpecInfo_100, 3) = ((MR_Box) (PragmaMap_99));
      }
      hlds__hlds_module__module_info_set_type_spec_info_3_p_0(TypeSpecInfo_100, STATE_VARIABLE_ModuleInfo_131_131, STATE_VARIABLE_ModuleInfo_108);
      IsImported_101 = hlds__status__pred_status_is_imported_1_f_0(PredStatus_72);
      switch (IsImported_101) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_QualInfo_110 = STATE_VARIABLE_QualInfo_0_109;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemType_102;
            MR_Integer UserArityInt_103;
            MR_Word ItemName_104;
            MR_Word ItemId_105;
            MR_Word Var_137;

            ItemType_102 = recompilation__pred_or_func_to_recomp_item_type_1_f_0(PredOrFunc_49);
            UserArityInt_103 = (MR_Integer) (UserArity_13);
            {
              ItemName_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemName_104, 0) = ((MR_Box) (SymName_21));
              MR_hl_field(MR_mktag(0), ItemName_104, 1) = ((MR_Box) (UserArityInt_103));
            }
            {
              ItemId_105 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ItemId_105, 0) = (MR_Box) ((MR_Unsigned) (ItemType_102));
              MR_hl_field(MR_mktag(0), ItemId_105, 1) = ((MR_Box) (ItemName_104));
            }
            {
              Var_137 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_137, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_4));
              MR_hl_field(MR_mktag(0), Var_137, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_137, 3) = ((MR_Box) (ItemId_105));
              MR_hl_field(MR_mktag(0), Var_137, 4) = ((MR_Box) (ExpandedItems_25));
            }
            hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(Var_137, STATE_VARIABLE_QualInfo_0_109, STATE_VARIABLE_QualInfo_110);
          }
          break;
      }
    }
    else
    {
      *STATE_VARIABLE_QualInfo_110 = STATE_VARIABLE_QualInfo_0_109;
      *STATE_VARIABLE_ModuleInfo_108 = STATE_VARIABLE_ModuleInfo_114_114;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_12_p_0(
  MR_Word PredId_13,
  MR_Word PredInfo_14,
  MR_Word TVarSet_15,
  MR_Word MaybeArgModes_16,
  MR_Word Context_17,
  MR_Word * MaybeProcIds_18,
  MR_Word STATE_VARIABLE_Procs_0_29,
  MR_Word * STATE_VARIABLE_Procs_30,
  MR_Word STATE_VARIABLE_ModuleInfo_0_31,
  MR_Word * STATE_VARIABLE_ModuleInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  MR_bool succeeded;

  if ((MaybeArgModes_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ProcIds_44;

    mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_Procs_0_29, &ProcIds_44);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeProcIds_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcIds_44));
    }
    *STATE_VARIABLE_Procs_30 = STATE_VARIABLE_Procs_0_29;
    *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
  }
  else
  {
    MR_Word ArgModes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_16, (MR_Integer) 0))));
    MR_Word ExistingProcs_23;
    MR_Integer ProcId_24;

    mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_Procs_0_29, &ExistingProcs_23);
    succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(ExistingProcs_23, ArgModes_22, STATE_VARIABLE_ModuleInfo_0_31, &ProcId_24);
    if (succeeded)
    {
      MR_Word ProcInfo_25;
      MR_Word ProcIds_26;
      MR_Box conv0_ProcInfo_25;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), STATE_VARIABLE_Procs_0_29, ((MR_Box) (ProcId_24)), &conv0_ProcInfo_25);
      ProcInfo_25 = ((MR_Word) (conv0_ProcInfo_25));
      *STATE_VARIABLE_Procs_30 = mercury__map__singleton_2_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_24)), ((MR_Box) (ProcInfo_25)));
      {
        ProcIds_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ProcIds_26, 0) = ((MR_Box) (ProcId_24));
        MR_hl_field(MR_mktag(1), ProcIds_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeProcIds_18 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcIds_26));
      }
      *STATE_VARIABLE_Specs_34 = STATE_VARIABLE_Specs_0_33;
    }
    else
    {
      MR_Word VarSet_27;

      mercury__varset__coerce_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), TVarSet_15, &VarSet_27);
      hlds__make_hlds_error__report_undeclared_mode_error_9_p_0(STATE_VARIABLE_ModuleInfo_0_31, PredId_13, PredInfo_14, VarSet_27, ArgModes_22, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6])), Context_17, STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
      *MaybeProcIds_18 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Procs_30 = STATE_VARIABLE_Procs_0_29;
    }
  }
  *STATE_VARIABLE_ModuleInfo_32 = STATE_VARIABLE_ModuleInfo_0_31;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__359__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__330__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_7_p_0(
  MR_Word Context_8,
  MR_Word Subst_9,
  MR_Word PredInfo0_10,
  MR_Word TVarSet0_11,
  MR_Word * MaybeSubstResult_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_55,
  MR_Word * STATE_VARIABLE_ModuleInfo_56)
{
  MR_bool succeeded;
  MR_Word SubstList_14;
  MR_Word VarsToSub_15;
  MR_Word MultiSubstVars0_16;

  SubstList_14 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0]), Subst_9);
  mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubstList_14, &VarsToSub_15);
  hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), VarsToSub_15, &MultiSubstVars0_16);
  if ((MultiSubstVars0_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word CalledTVarSet_21;
    MR_Word NameVarIndex0_22;
    MR_Word UnknownVarsToSub_25;
    MR_Word Var_59;

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_10, &CalledTVarSet_21);
    mercury__varset__create_name_var_map_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), CalledTVarSet_21, &NameVarIndex0_22);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (TVarSet0_11));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (NameVarIndex0_22));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), Var_59, VarsToSub_15, &UnknownVarsToSub_25);
    if ((UnknownVarsToSub_25 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarsToSubSet_26;
      MR_Word SubstTypes0_27;
      MR_Word TVarsInSubstTypes0_28;
      MR_Word TVarsInSubstTypes_29;
      MR_Word RecSubstTVars0_30;
      MR_Word RecSubstTVars_31;

      mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), VarsToSub_15, &VarsToSubSet_26);
      mercury__assoc_list__values_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubstList_14, &SubstTypes0_27);
      parse_tree__prog_type__type_vars_in_types_2_p_0(SubstTypes0_27, &TVarsInSubstTypes0_28);
      mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), TVarsInSubstTypes0_28, &TVarsInSubstTypes_29);
      mercury__set__intersect_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), TVarsInSubstTypes_29, VarsToSubSet_26, &RecSubstTVars0_30);
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), RecSubstTVars0_30, &RecSubstTVars_31);
      if ((RecSubstTVars_31 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word TVarRenaming0_32;
        MR_Word VarsToReplace_33;
        MR_Word TVarSet_34;
        MR_Word TVarRenaming_36;
        MR_Word RenamedVarsToSub_37;
        MR_Word ExistQVars_38;
        MR_Word SubExistQVars_40;
        MR_Word Var_61;
        MR_Word Var_35;

        mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), &TVarRenaming0_32);
        mercury__list__append_3_p_1((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), VarsToSub_15, TVarsInSubstTypes0_28, &VarsToReplace_33);
        parse_tree__prog_util__get_new_tvars_8_p_0(VarsToReplace_33, TVarSet0_11, CalledTVarSet_21, &TVarSet_34, NameVarIndex0_22, &Var_35, TVarRenaming0_32, &TVarRenaming_36);
        mercury__map__apply_to_list_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), VarsToSub_15, TVarRenaming_36, &RenamedVarsToSub_37);
        hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_10, &ExistQVars_38);
        {
          Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_7_p_0_2));
          MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (ExistQVars_38));
        }
        mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), Var_61, RenamedVarsToSub_37, &SubExistQVars_40);
        if ((SubExistQVars_40 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SubstTypes_41;
          MR_Word SubAL_42;
          MR_Word TypeSubst_43;
          MR_Word Types0_44;
          MR_Word ClassContext0_45;
          MR_Word Types_46;
          MR_Word ClassContext_47;
          MR_Word RenamedSubst_48;

          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_36, SubstTypes0_27, &SubstTypes_41);
          mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedVarsToSub_37, SubstTypes_41, &SubAL_42);
          mercury__map__from_assoc_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), SubAL_42, &TypeSubst_43);
          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_10, &Types0_44);
          hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_10, &ClassContext0_45);
          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeSubst_43, Types0_44, &Types_46);
          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(TypeSubst_43, ClassContext0_45, &ClassContext_47);
          mercury__one_or_more__det_list_to_one_or_more_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0]), SubAL_42, &RenamedSubst_48);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSubstResult_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TVarSet_34));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Types_46));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ExistQVars_38));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ClassContext_47));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (RenamedSubst_48));
          }
        }
        else
        {
          MR_Word Var_63;
          MR_Word Spec_71;

          hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_4_p_0(PredInfo0_10, Context_8, SubExistQVars_40, &Spec_71);
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Spec_71));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *MaybeSubstResult_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_63));
          }
        }
      }
      else
      {
        MR_Word Var_65;
        MR_Word Spec_74;

        hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_5_p_0(PredInfo0_10, Context_8, TVarSet0_11, RecSubstTVars_31, &Spec_74);
        {
          Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Spec_74));
          MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeSubstResult_12 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_65));
        }
      }
    }
    else
    {
      MR_Word Var_67;
      MR_Word Spec_77;

      hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_5_p_0(PredInfo0_10, Context_8, TVarSet0_11, UnknownVarsToSub_25, &Spec_77);
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Spec_77));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *MaybeSubstResult_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_67));
      }
    }
  }
  else
  {
    MR_Word MultiSubstVars_19;
    MR_Word Spec_20;
    MR_Word Var_57;

    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), MultiSubstVars0_16, &MultiSubstVars_19);
    hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_5_p_0(PredInfo0_10, Context_8, TVarSet0_11, MultiSubstVars_19, &Spec_20);
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Spec_20));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeSubstResult_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_57));
    }
  }
  *STATE_VARIABLE_ModuleInfo_56 = STATE_VARIABLE_ModuleInfo_0_55;
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
  MR_Word Var_63;
  MR_String Var_64;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_String Var_69;
  MR_Box conv0_Var_64;
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
  Module_44 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_45 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_46 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_47 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Module_44));
    MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Name_45));
  }
  {
    PFSymNameArity_48 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PFSymNameArity_48, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_47));
    MR_hl_field(MR_mktag(0), PFSymNameArity_48, 1) = ((MR_Box) (Var_49));
    MR_hl_field(MR_mktag(0), PFSymNameArity_48, 2) = ((MR_Box) (PredFormArity_46));
  }
  {
    Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (PFSymNameArity_48));
  }
  {
    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[26])));
  }
  {
    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5])));
    MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[22])));
    MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_52));
  }
  conv0_Var_64 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_64 = ((MR_String) (conv0_Var_64));
  {
    Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_64));
  }
  Var_69 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, UnknownVars_9);
  {
    Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (Var_69));
  }
  {
    Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_63));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_67));
  }
  conv1_Var_24 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownVars_9, ((MR_Box) ((MR_String) "does not")), ((MR_Box) ((MR_String) "do not")));
  Var_24 = ((MR_String) (conv1_Var_24));
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_23, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_23, 1) = ((MR_Box) (Var_24));
  }
  {
    Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Decl_12));
  }
  {
    Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
    MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[21])));
  }
  {
    Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[19])));
    MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
  }
  {
    Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_27));
  }
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_21, Var_22);
  Var_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14])), Var_20);
  Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_14, Var_15);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Spec_10 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_unknown_vars_to_subst\'/5"));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Pieces_13));
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
  MR_Word Module_37;
  MR_String Name_38;
  MR_Word PredFormArity_39;
  MR_Word PredOrFunc_40;
  MR_Word PFSymNameArity_41;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_56;
  MR_String Var_57;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_String Var_62;
  MR_Box conv0_Var_57;
  MR_Box conv1_Var_22;

  Module_37 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_38 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_39 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_40 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Module_37));
    MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Name_38));
  }
  {
    PFSymNameArity_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PFSymNameArity_41, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_40));
    MR_hl_field(MR_mktag(0), PFSymNameArity_41, 1) = ((MR_Box) (Var_42));
    MR_hl_field(MR_mktag(0), PFSymNameArity_41, 2) = ((MR_Box) (PredFormArity_39));
  }
  {
    Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (PFSymNameArity_41));
  }
  {
    Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[26])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5])));
    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[22])));
    MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_45));
  }
  conv0_Var_57 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MultiSubstVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_57 = ((MR_String) (conv0_Var_57));
  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
  }
  Var_62 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, MultiSubstVars_9);
  {
    Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_56));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_60));
  }
  conv1_Var_22 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MultiSubstVars_9, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
  Var_22 = ((MR_String) (conv1_Var_22));
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[18])));
  }
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_19, Var_20);
  Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14])), Var_18);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_12, Var_13);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Spec_10 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_multiple_subst_vars\'/5"));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Pieces_11));
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
  MR_Word Module_37;
  MR_String Name_38;
  MR_Word PredFormArity_39;
  MR_Word PredOrFunc_40;
  MR_Word PFSymNameArity_41;
  MR_Word Var_42;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_56;
  MR_String Var_57;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_String Var_62;
  MR_Box conv0_Var_57;
  MR_Box conv1_Var_22;

  Module_37 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
  Name_38 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
  PredFormArity_39 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_6);
  PredOrFunc_40 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
  {
    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Module_37));
    MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Name_38));
  }
  {
    PFSymNameArity_41 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PFSymNameArity_41, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_40));
    MR_hl_field(MR_mktag(0), PFSymNameArity_41, 1) = ((MR_Box) (Var_42));
    MR_hl_field(MR_mktag(0), PFSymNameArity_41, 2) = ((MR_Box) (PredFormArity_39));
  }
  {
    Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (PFSymNameArity_41));
  }
  {
    Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[26])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5])));
    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[22])));
    MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_45));
  }
  conv0_Var_57 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RecursiveVars_9, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_57 = ((MR_String) (conv0_Var_57));
  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
  }
  Var_62 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_8, RecursiveVars_9);
  {
    Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_56));
    MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_60));
  }
  conv1_Var_22 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RecursiveVars_9, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
  Var_22 = ((MR_String) (conv1_Var_22));
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Var_22));
  }
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Var_21));
    MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
  }
  Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_19, Var_20);
  Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14])), Var_18);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_12, Var_13);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Spec_10 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_recursive_subst\'/5"));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Context_7));
    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Pieces_11));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_4_p_0(
  MR_Word PredInfo_5,
  MR_Word Context_6,
  MR_Word SubExistQVars_7,
  MR_Word * Spec_8)
{
  MR_Word TVarSet_9;
  MR_Word Pieces_10;
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Module_32;
  MR_String Name_33;
  MR_Word PredFormArity_34;
  MR_Word PredOrFunc_35;
  MR_Word PFSymNameArity_36;
  MR_Word Var_37;
  MR_Word Var_40;
  MR_Word Var_43;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_51;
  MR_String Var_52;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_String Var_57;
  MR_Box conv0_Var_52;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_5, &TVarSet_9);
  Module_32 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_5);
  Name_33 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
  PredFormArity_34 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_5);
  PredOrFunc_35 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_5);
  {
    Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Module_32));
    MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Name_33));
  }
  {
    PFSymNameArity_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PFSymNameArity_36, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_35));
    MR_hl_field(MR_mktag(0), PFSymNameArity_36, 1) = ((MR_Box) (Var_37));
    MR_hl_field(MR_mktag(0), PFSymNameArity_36, 2) = ((MR_Box) (PredFormArity_34));
  }
  {
    Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_47, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(3), Var_47, 1) = ((MR_Box) (PFSymNameArity_36));
  }
  {
    Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
    MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[26])));
  }
  {
    Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5])));
    MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
  }
  {
    Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[22])));
    MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_40));
  }
  conv0_Var_52 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubExistQVars_7, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_52 = ((MR_String) (conv0_Var_52));
  {
    Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
  }
  Var_57 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_9, SubExistQVars_7);
  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
    MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_51));
    MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_55));
  }
  Var_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_21, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[12])));
  Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[10])), Var_20);
  Pieces_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_11, Var_12);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    *Spec_8 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_subst_existq_tvars\'/4"));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Context_6));
    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Pieces_10));
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
    MR_Box H_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word T_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word DupVars0_6;

    hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(TypeInfo_for_T_7, T_4, &DupVars0_6);
    succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_7, H_3, T_4);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = H_3;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DupVars0_6));
      }
    else
      *HeadVar__2_2 = DupVars0_6;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_2(
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
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_108;
  MR_Word conv2_STATE_VARIABLE_QualInfo_110;
  MR_Word conv1_STATE_VARIABLE_Specs_112;

  hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_108, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_QualInfo_110, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_Specs_112);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_108));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_QualInfo_110));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_112));
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = hlds__hlds_error_util__project_user_arity_int_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0(
  MR_Word TSInfo_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_36,
  MR_Word * STATE_VARIABLE_ModuleInfo_37,
  MR_Word STATE_VARIABLE_QualInfo_0_38,
  MR_Word * STATE_VARIABLE_QualInfo_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  MR_Word PFUMM_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo_9, (MR_Integer) 0))));
  MR_Word SymName_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo_9, (MR_Integer) 1))));
  MR_Word PredTable_20;
  MR_Word MaybePredOrFunc_23;
  MR_Word UserArity_26;
  MR_Word MaybeModes_27;
  MR_Word PredIds_28;
  MR_Word AllArityPredIds_29;
  MR_Integer UserArityInt_30;
  MR_Word STATE_VARIABLE_Specs_45_45;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_36, &PredTable_20);
  switch (MR_tag((MR_Word) PFUMM_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_78 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFUMM_14, (MR_Integer) 0))));
        MR_Word PredFormArity_81;

        MaybePredOrFunc_23 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[1]));
        if (((MR_tag((MR_Word) ModesOrArity_78)) == (MR_Integer) 1))
        {
          UserArity_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModesOrArity_78, (MR_Integer) 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_26, &PredFormArity_81);
          MaybeModes_27 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Modes_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity_78, (MR_Integer) 0))));

          PredFormArity_81 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_74);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_26, PredFormArity_81);
          {
            MaybeModes_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeModes_27, 0) = ((MR_Box) (Modes_74));
          }
        }
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 0, SymName_15, PredFormArity_81, &PredIds_28);
        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 0, SymName_15, &AllArityPredIds_29);
        UserArityInt_30 = (MR_Integer) (UserArity_26);
        STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_40;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ModesOrArity_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PFUMM_14, (MR_Integer) 0))));
        MR_Word PredFormArity_25;

        MaybePredOrFunc_23 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[0]));
        if (((MR_tag((MR_Word) ModesOrArity_21)) == (MR_Integer) 1))
        {
          UserArity_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModesOrArity_21, (MR_Integer) 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 1, UserArity_26, &PredFormArity_25);
          MaybeModes_27 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Modes_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity_21, (MR_Integer) 0))));

          PredFormArity_25 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_24);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 1, &UserArity_26, PredFormArity_25);
          {
            MaybeModes_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeModes_27, 0) = ((MR_Box) (Modes_24));
          }
        }
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 1, SymName_15, PredFormArity_25, &PredIds_28);
        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 1, SymName_15, &AllArityPredIds_29);
        UserArityInt_30 = (MR_Integer) (UserArity_26);
        STATE_VARIABLE_Specs_45_45 = STATE_VARIABLE_Specs_0_40;
      }
      break;
    case (MR_Integer) 2:
      {
        UserArity_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PFUMM_14, (MR_Integer) 0))));
        hlds__make_hlds__add_pragma__maybe_warn_about_pfumm_unknown_7_p_0(STATE_VARIABLE_ModuleInfo_0_36, (MR_String) "type_spec", PFUMM_14, SymName_15, Context_10, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_45_45);
        UserArityInt_30 = (MR_Integer) (UserArity_26);
        MaybePredOrFunc_23 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeModes_27 = (MR_Word) ((MR_Unsigned) 0U);
        hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(PredTable_20, (MR_Integer) 0, SymName_15, UserArity_26, &PredIds_28);
        hlds__pred_table__predicate_table_lookup_sym_4_p_0(PredTable_20, (MR_Integer) 0, SymName_15, &AllArityPredIds_29);
      }
      break;
  }
  if ((PredIds_28 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word PredIdTable_31;
    MR_Word OtherUserArities_32;
    MR_Word OtherUserArityInts_33;

    hlds__hlds_module__module_info_get_pred_id_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_36, &PredIdTable_31);
    hlds__hlds_error_util__find_user_arities_other_than_4_p_0(PredIdTable_31, AllArityPredIds_29, UserArity_26, &OtherUserArities_32);
    OtherUserArityInts_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[2]), OtherUserArities_32);
    hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(MaybePredOrFunc_23, SymName_15, UserArityInt_30, OtherUserArityInts_33, Context_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6])), STATE_VARIABLE_Specs_45_45, STATE_VARIABLE_Specs_41);
    *STATE_VARIABLE_ModuleInfo_37 = STATE_VARIABLE_ModuleInfo_0_36;
    *STATE_VARIABLE_QualInfo_39 = STATE_VARIABLE_QualInfo_0_38;
  }
  else
  {
    MR_Word Var_57;
    MR_Box conv6_STATE_VARIABLE_ModuleInfo_37;
    MR_Box conv5_STATE_VARIABLE_QualInfo_39;
    MR_Box conv4_STATE_VARIABLE_Specs_41;

    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_57, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_57, 3) = ((MR_Box) (TSInfo_9));
      MR_hl_field(MR_mktag(0), Var_57, 4) = ((MR_Box) (UserArity_26));
      MR_hl_field(MR_mktag(0), Var_57, 5) = ((MR_Box) (MaybeModes_27));
      MR_hl_field(MR_mktag(0), Var_57, 6) = ((MR_Box) (Context_10));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[0]), Var_57, PredIds_28, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_36)), &conv6_STATE_VARIABLE_ModuleInfo_37, ((MR_Box) (STATE_VARIABLE_QualInfo_0_38)), &conv5_STATE_VARIABLE_QualInfo_39, ((MR_Box) (STATE_VARIABLE_Specs_45_45)), &conv4_STATE_VARIABLE_Specs_41);
    *STATE_VARIABLE_ModuleInfo_37 = ((MR_Word) (conv6_STATE_VARIABLE_ModuleInfo_37));
    *STATE_VARIABLE_QualInfo_39 = ((MR_Word) (conv5_STATE_VARIABLE_QualInfo_39));
    *STATE_VARIABLE_Specs_41 = ((MR_Word) (conv4_STATE_VARIABLE_Specs_41));
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
