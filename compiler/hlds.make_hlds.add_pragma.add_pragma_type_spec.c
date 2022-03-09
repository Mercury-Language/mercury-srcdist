/*
** Automatically generated from `add_pragma_type_spec.m'
** by the Mercury compiler,
** version rotd-2022-03-09
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_constr_util.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_item_id_0;

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__376__1_3_p_0(
  MR_Word HeadVar__1_95,
  MR_Word HeadVar__2_96,
  MR_Word * HeadVar__3_97);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__365__1_2_p_0(
  MR_Word ExistQVars_20,
  MR_Word LambdaHeadVar__1_75);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__334__1_3_p_0(
  MR_Word TVarSet0_17,
  MR_Word NameVarIndex0_33,
  MR_Word LambdaHeadVar__1_67);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__237__1_3_p_0(
  MR_Word PredId_16,
  MR_Integer LambdaHeadVar__1_130,
  MR_Word * LambdaHeadVar__2_131);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * STATE_VARIABLE_ProcInfo_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_7,
  MR_Word * STATE_VARIABLE_Map_8);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_100,
  MR_Word * STATE_VARIABLE_ModuleInfo_101,
  MR_Word STATE_VARIABLE_QualInfo_0_102,
  MR_Word * STATE_VARIABLE_QualInfo_103,
  MR_Word STATE_VARIABLE_Specs_0_104,
  MR_Word * STATE_VARIABLE_Specs_105);

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

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0(
  MR_Word Context_14,
  MR_Word Subst_15,
  MR_Word PredInfo0_16,
  MR_Word TVarSet0_17,
  MR_Word * TVarSet_18,
  MR_Word * Types_19,
  MR_Word * ExistQVars_20,
  MR_Word * ClassContext_21,
  MR_Word * SubstOk_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * STATE_VARIABLE_ModuleInfo_63,
  MR_Word STATE_VARIABLE_Specs_0_64,
  MR_Word * STATE_VARIABLE_Specs_65);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word UnknownVars_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word MultiSubstVars_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word RecursiveVars_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word SubExistQVars_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

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


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[28][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[7][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[3][1];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[4][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[1][14];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[3][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_7[1][7];




static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[28][2] = {
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
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the existentially quantified type"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error: the substitution includes"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "on both sides of the substitution."))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "multiple replacement types."))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[18]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occur in the"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[21]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[25])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[7][3] = {
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
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[2])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[3][6] = {
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
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row   2 */
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
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_item_id_0)),
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&recompilation__recompilation__type_ctor_info_item_id_0)
  }
};

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__376__1_3_p_0(
  MR_Word HeadVar__1_95,
  MR_Word HeadVar__2_96,
  MR_Word * HeadVar__3_97)
{
  hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), HeadVar__1_95, HeadVar__2_96, HeadVar__3_97);
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__365__1_2_p_0(
  MR_Word ExistQVars_20,
  MR_Word LambdaHeadVar__1_75)
{
  MR_bool succeeded;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), ((MR_Box) (LambdaHeadVar__1_75)), ExistQVars_20);
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__334__1_3_p_0(
  MR_Word TVarSet0_17,
  MR_Word NameVarIndex0_33,
  MR_Word LambdaHeadVar__1_67)
{
  MR_bool succeeded;
  MR_String VarName_35;

  mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet0_17, LambdaHeadVar__1_67, &VarName_35);
  succeeded = mercury__map__contains_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), NameVarIndex0_33, ((MR_Box) (VarName_35)));
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__237__1_3_p_0(
  MR_Word PredId_16,
  MR_Integer LambdaHeadVar__1_130,
  MR_Word * LambdaHeadVar__2_131)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_131 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_16));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaHeadVar__1_130));
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

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_7,
  MR_Word * STATE_VARIABLE_Map_8)
{
  MR_Box K_4 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
  MR_Box V_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));

  mercury__map__set_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, K_4, V_5, STATE_VARIABLE_Map_0_7, STATE_VARIABLE_Map_8);
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
  MR_Word conv2_LambdaHeadVar__2_131;

  hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__237__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_131);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_131));
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
  MR_Word STATE_VARIABLE_ModuleInfo_0_100,
  MR_Word * STATE_VARIABLE_ModuleInfo_101,
  MR_Word STATE_VARIABLE_QualInfo_0_102,
  MR_Word * STATE_VARIABLE_QualInfo_103,
  MR_Word STATE_VARIABLE_Specs_0_104,
  MR_Word * STATE_VARIABLE_Specs_105)
{
  MR_bool succeeded;
  MR_Word SymName_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 1))));
  MR_Word SpecSymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 2))));
  MR_Word Subst_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 3))));
  MR_Word TVarSet0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 4))));
  MR_Word ExpandedItems_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSInfo0_12, (MR_Integer) 5))));
  MR_Word SpecModuleName_26;
  MR_String SpecName_27;
  MR_Word PredInfo0_29;
  MR_Word TVarSet_30;
  MR_Word Types_31;
  MR_Word ExistQVars_32;
  MR_Word ClassContext_33;
  MR_Word SubstOk_34;
  MR_Word STATE_VARIABLE_ModuleInfo_108_108;
  MR_Word STATE_VARIABLE_Specs_109_109;

  if (((MR_tag((MR_Word) SpecSymName_22)) == (MR_Integer) 1))
  {
    SpecModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SpecSymName_22, (MR_Integer) 0))));
    SpecName_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), SpecSymName_22, (MR_Integer) 1))));
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.add_pragma_type_spec_for_pred\'/11", (MR_String) "unqualified SpecSymName");
      return;
    }
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_100, PredId_16, &PredInfo0_29);
  hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0(Context_15, Subst_23, PredInfo0_29, TVarSet0_24, &TVarSet_30, &Types_31, &ExistQVars_32, &ClassContext_33, &SubstOk_34, STATE_VARIABLE_ModuleInfo_0_100, &STATE_VARIABLE_ModuleInfo_108_108, STATE_VARIABLE_Specs_0_104, &STATE_VARIABLE_Specs_109_109);
  if ((SubstOk_34 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_101 = STATE_VARIABLE_ModuleInfo_108_108;
    *STATE_VARIABLE_QualInfo_103 = STATE_VARIABLE_QualInfo_0_102;
    *STATE_VARIABLE_Specs_105 = STATE_VARIABLE_Specs_109_109;
  }
  else
  {
    MR_Word RenamedSubst_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SubstOk_34, (MR_Integer) 0))));
    MR_Word Procs0_36;
    MR_Word MaybeProcIds_37;
    MR_Word Procs1_38;
    MR_Word Procs_39;
    MR_Word Globals_40;
    MR_Word OptTuple_41;
    MR_Word DoTypeSpec_42;
    MR_Word Smart_43;
    MR_Word STATE_VARIABLE_ModuleInfo_110_110;
    MR_Word ProcIds_44;

    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_29, &Procs0_36);
    hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_12_p_0(PredId_16, PredInfo0_29, TVarSet0_24, MaybeArgModes_14, Context_15, &MaybeProcIds_37, Procs0_36, &Procs1_38, STATE_VARIABLE_ModuleInfo_108_108, &STATE_VARIABLE_ModuleInfo_110_110, STATE_VARIABLE_Specs_109_109, STATE_VARIABLE_Specs_105);
    mercury__map__map_values_only_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[5]), Procs1_38, &Procs_39);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_110_110, &Globals_40);
    libs__globals__get_opt_tuple_2_p_0(Globals_40, &OptTuple_41);
    DoTypeSpec_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_41, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    libs__globals__lookup_bool_option_3_p_0(Globals_40, (MR_Integer) 148, &Smart_43);
    succeeded = (MaybeProcIds_37 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ProcIds_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeProcIds_37, (MR_Integer) 0))));
      succeeded = (DoTypeSpec_42 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_29);
        succeeded = !(succeeded);
        if (!(succeeded))
          succeeded = (Smart_43 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word ArgVarSet0_45;
      MR_Word PredOrFunc_46;
      MR_Word PredFormArity_47;
      MR_Integer PredFormArityInt_48;
      MR_Word ArgVars_49;
      MR_Word ArgVarSet_50;
      MR_Word VarTypes0_51;
      MR_Word GoalInfo0_52;
      MR_Word NonLocals_53;
      MR_Word GoalInfo1_54;
      MR_Word GoalInfo_55;
      MR_Word Goal_56;
      MR_Word Clause_57;
      MR_Word TVarNameMap_58;
      MR_Word ArgsVec_59;
      MR_Word ClausesRep_60;
      MR_Word ItemNumbers_61;
      MR_Word RttiVarMaps_62;
      MR_Word Clauses_63;
      MR_Word Markers0_64;
      MR_Word Markers_65;
      MR_Word Proofs_66;
      MR_Word ConstraintMap_67;
      MR_Word PredStatus_68;
      MR_Word OrigOrigin_69;
      MR_Word SubstDesc_70;
      MR_Word Origin_71;
      MR_Word VarNameRemap_74;
      MR_Word NewPredInfo0_75;
      MR_Word NewPredInfo_76;
      MR_Word PredTable0_77;
      MR_Word NewPredId_78;
      MR_Word PredTable_79;
      MR_Word TypeSpecInfo0_80;
      MR_Word ProcsToSpec0_81;
      MR_Word ForceVersions0_82;
      MR_Word SpecMap0_83;
      MR_Word PragmaMap0_84;
      MR_Word PredProcIds_87;
      MR_Word ProcsToSpec_88;
      MR_Word ForceVersions_89;
      MR_Word SpecMap_90;
      MR_Word ModesOrArity_91;
      MR_Word PFUMM_93;
      MR_Word TSInfo_94;
      MR_Word PragmaMap_95;
      MR_Word TypeSpecInfo_96;
      MR_Word IsImported_97;
      MR_Word Var_115;
      MR_Word Var_118;
      MR_Word Var_126;
      MR_Word STATE_VARIABLE_ModuleInfo_128_128;
      MR_Word Var_129;
      MR_Word Var_133;
      MR_Word Var_132;

      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &ArgVarSet0_45);
      hlds__vartypes__init_vartypes_1_p_0(&VarTypes0_51);
      hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_52);
      {
        Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (ProcIds_44));
      }
      mercury__map__init_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), &TVarNameMap_58);
      ItemNumbers_61 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
      hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_62);
      hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_29, &Markers0_64);
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 21, Markers0_64, &Markers_65);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &Proofs_66);
      mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &ConstraintMap_67);
      succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_29);
      if (succeeded)
        PredStatus_68 = (MR_Word) (((MR_Box) ((MR_Unsigned) 0U)));
      else
        hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_29, &PredStatus_68);
      hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_29, &OrigOrigin_69);
      SubstDesc_70 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[1]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[6]), Subst_23);
      {
        Var_126 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_126, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_126, 1) = ((MR_Box) (SubstDesc_70));
      }
      {
        Origin_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Origin_71, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Origin_71, 1) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(3), Origin_71, 2) = ((MR_Box) (OrigOrigin_69));
        MR_hl_field(MR_mktag(3), Origin_71, 3) = ((MR_Box) (PredId_16));
      }
      hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_29, &VarNameRemap_74);
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_110_110, &PredTable0_77);
      {
        Var_129 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[2]));
        MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_3));
        MR_hl_field(MR_mktag(0), Var_129, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_129, 3) = ((MR_Box) (PredId_16));
      }
      mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_129, ProcIds_44, &PredProcIds_87);
      if ((MaybeArgModes_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          ModesOrArity_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ModesOrArity_91, 0) = ((MR_Box) (UserArity_13));
        }
      else
      {
        MR_Word ArgModes_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArgModes_14, (MR_Integer) 0))));

        {
          ModesOrArity_91 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ModesOrArity_91, 0) = ((MR_Box) (ArgModes_92));
        }
      }
      PredOrFunc_46 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_29);
      parse_tree__prog_util__user_arity_pred_form_arity_3_p_0(PredOrFunc_46, UserArity_13, &PredFormArity_47);
      PredFormArityInt_48 = (MR_Integer) (PredFormArity_47);
      parse_tree__prog_util__make_n_fresh_vars_5_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), (MR_String) "HeadVar__", PredFormArityInt_48, &ArgVars_49, ArgVarSet0_45, &ArgVarSet_50);
      parse_tree__set_of_var__list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_49, &NonLocals_53);
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_53, GoalInfo0_52, &GoalInfo1_54);
      hlds__hlds_goal__goal_info_set_context_3_p_0(Context_15, GoalInfo1_54, &GoalInfo_55);
      hlds__make_hlds__qual_info__construct_pred_or_func_call_6_p_0(PredId_16, PredOrFunc_46, SymName_21, ArgVars_49, GoalInfo_55, &Goal_56);
      {
        Clause_57 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Clause_57, 0) = ((MR_Box) (Var_115));
        MR_hl_field(MR_mktag(0), Clause_57, 1) = ((MR_Box) (Goal_56));
        MR_hl_field(MR_mktag(0), Clause_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Clause_57, 3) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), Clause_57, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (Clause_57));
        MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      hlds__hlds_clauses__set_clause_list_2_p_0(Var_118, &ClausesRep_60);
      ArgsVec_59 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2]), PredOrFunc_46, ArgVars_49);
      {
        Clauses_63 = (MR_Word) MR_new_object(MR_Word, (9 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Clauses_63, 0) = ((MR_Box) (ArgVarSet_50));
        MR_hl_field(MR_mktag(0), Clauses_63, 1) = ((MR_Box) (TVarNameMap_58));
        MR_hl_field(MR_mktag(0), Clauses_63, 2) = ((MR_Box) (VarTypes0_51));
        MR_hl_field(MR_mktag(0), Clauses_63, 3) = ((MR_Box) (VarTypes0_51));
        MR_hl_field(MR_mktag(0), Clauses_63, 4) = ((MR_Box) (ArgsVec_59));
        MR_hl_field(MR_mktag(0), Clauses_63, 5) = ((MR_Box) (ClausesRep_60));
        MR_hl_field(MR_mktag(0), Clauses_63, 6) = ((MR_Box) (ItemNumbers_61));
        MR_hl_field(MR_mktag(0), Clauses_63, 7) = ((MR_Box) (RttiVarMaps_62));
        MR_hl_field(MR_mktag(0), Clauses_63, 8) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
      }
      hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_46, SpecModuleName_26, SpecName_27, PredFormArity_47, Context_15, Origin_71, PredStatus_68, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[2]), Markers_65, Types_31, TVarSet_30, ExistQVars_32, ClassContext_33, Proofs_66, ConstraintMap_67, Clauses_63, VarNameRemap_74, &NewPredInfo0_75);
      hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_39, NewPredInfo0_75, &NewPredInfo_76);
      hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_76, &NewPredId_78, PredTable0_77, &PredTable_79);
      hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_79, STATE_VARIABLE_ModuleInfo_110_110, &STATE_VARIABLE_ModuleInfo_128_128);
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_ModuleInfo_128_128, &TypeSpecInfo0_80);
      ProcsToSpec0_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 0))));
      ForceVersions0_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 1))));
      SpecMap0_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 2))));
      PragmaMap0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo0_80, (MR_Integer) 3))));
      mercury__set__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PredProcIds_87, ProcsToSpec0_81, &ProcsToSpec_88);
      mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (NewPredId_78)), ForceVersions0_82, &ForceVersions_89);
      Var_132 = (MR_Word) (PredStatus_68);
      succeeded = (Var_132 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        mercury__multi_map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), ((MR_Box) (PredId_16)), ((MR_Box) (NewPredId_78)), SpecMap0_83, &SpecMap_90);
      else
        SpecMap_90 = SpecMap0_83;
      switch (PredOrFunc_46) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            PFUMM_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PFUMM_93, 0) = ((MR_Box) (ModesOrArity_91));
          }
          break;
        case (MR_Integer) 0:
          {
            PFUMM_93 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PFUMM_93, 0) = ((MR_Box) (ModesOrArity_91));
          }
          break;
      }
      Var_133 = mercury__map__to_assoc_list_1_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedSubst_35);
      {
        TSInfo_94 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TSInfo_94, 0) = ((MR_Box) (PFUMM_93));
        MR_hl_field(MR_mktag(0), TSInfo_94, 1) = ((MR_Box) (SymName_21));
        MR_hl_field(MR_mktag(0), TSInfo_94, 2) = ((MR_Box) (SpecSymName_22));
        MR_hl_field(MR_mktag(0), TSInfo_94, 3) = ((MR_Box) (Var_133));
        MR_hl_field(MR_mktag(0), TSInfo_94, 4) = ((MR_Box) (TVarSet_30));
        MR_hl_field(MR_mktag(0), TSInfo_94, 5) = ((MR_Box) (ExpandedItems_25));
      }
      mercury__multi_map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0), ((MR_Box) (PredId_16)), ((MR_Box) (TSInfo_94)), PragmaMap0_84, &PragmaMap_95);
      {
        TypeSpecInfo_96 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeSpecInfo_96, 0) = ((MR_Box) (ProcsToSpec_88));
        MR_hl_field(MR_mktag(0), TypeSpecInfo_96, 1) = ((MR_Box) (ForceVersions_89));
        MR_hl_field(MR_mktag(0), TypeSpecInfo_96, 2) = ((MR_Box) (SpecMap_90));
        MR_hl_field(MR_mktag(0), TypeSpecInfo_96, 3) = ((MR_Box) (PragmaMap_95));
      }
      hlds__hlds_module__module_info_set_type_spec_info_3_p_0(TypeSpecInfo_96, STATE_VARIABLE_ModuleInfo_128_128, STATE_VARIABLE_ModuleInfo_101);
      IsImported_97 = hlds__status__pred_status_is_imported_1_f_0(PredStatus_68);
      switch (IsImported_97) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_QualInfo_103 = STATE_VARIABLE_QualInfo_0_102;
          break;
        case (MR_Integer) 1:
          {
            MR_Word ItemType_98;
            MR_Integer UserArityInt_99;
            MR_Word Var_135;
            MR_Word Var_137;
            MR_Word Var_138;

            ItemType_98 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_46);
            UserArityInt_99 = (MR_Integer) (UserArity_13);
            {
              Var_138 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_138, 0) = ((MR_Box) (SymName_21));
              MR_hl_field(MR_mktag(0), Var_138, 1) = ((MR_Box) (UserArityInt_99));
            }
            {
              Var_137 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_137, 0) = (MR_Box) ((MR_Unsigned) (ItemType_98));
              MR_hl_field(MR_mktag(0), Var_137, 1) = ((MR_Box) (Var_138));
            }
            {
              Var_135 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_7[0]));
              MR_hl_field(MR_mktag(0), Var_135, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0_4));
              MR_hl_field(MR_mktag(0), Var_135, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), Var_135, 3) = ((MR_Box) (Var_137));
              MR_hl_field(MR_mktag(0), Var_135, 4) = ((MR_Box) (ExpandedItems_25));
            }
            hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(Var_135, STATE_VARIABLE_QualInfo_0_102, STATE_VARIABLE_QualInfo_103);
          }
          break;
      }
    }
    else
    {
      *STATE_VARIABLE_QualInfo_103 = STATE_VARIABLE_QualInfo_0_102;
      *STATE_VARIABLE_ModuleInfo_101 = STATE_VARIABLE_ModuleInfo_110_110;
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

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_97;

  hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__376__1_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_97);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_97));
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__365__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__334__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0(
  MR_Word Context_14,
  MR_Word Subst_15,
  MR_Word PredInfo0_16,
  MR_Word TVarSet0_17,
  MR_Word * TVarSet_18,
  MR_Word * Types_19,
  MR_Word * ExistQVars_20,
  MR_Word * ClassContext_21,
  MR_Word * SubstOk_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * STATE_VARIABLE_ModuleInfo_63,
  MR_Word STATE_VARIABLE_Specs_0_64,
  MR_Word * STATE_VARIABLE_Specs_65)
{
  MR_bool succeeded;
  MR_Word VarsToSub_25;

  mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_15, &VarsToSub_25);
  if ((Subst_15 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.handle_pragma_type_spec_subst\'/13", (MR_String) "empty substitution");
      return;
    }
  else
  {
    MR_Word MultiSubstVars0_28;

    hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), VarsToSub_25, &MultiSubstVars0_28);
    if ((MultiSubstVars0_28 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word CalledTVarSet_32;
      MR_Word NameVarIndex0_33;
      MR_Word UnknownVarsToSub_36;
      MR_Word Var_66;

      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_16, &CalledTVarSet_32);
      mercury__varset__create_name_var_map_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), CalledTVarSet_32, &NameVarIndex0_33);
      {
        Var_66 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1));
        MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (TVarSet0_17));
        MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (NameVarIndex0_33));
      }
      mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), Var_66, VarsToSub_25, &UnknownVarsToSub_36);
      if ((UnknownVarsToSub_36 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word VarsToSubSet_37;
        MR_Word SubstTypes0_38;
        MR_Word TVarsInSubstTypes0_39;
        MR_Word TVarsInSubstTypes_40;
        MR_Word RecSubstTVars0_41;
        MR_Word RecSubstTVars_42;

        mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), VarsToSub_25, &VarsToSubSet_37);
        mercury__assoc_list__values_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), Subst_15, &SubstTypes0_38);
        parse_tree__prog_type__type_vars_list_2_p_0(SubstTypes0_38, &TVarsInSubstTypes0_39);
        mercury__set__list_to_set_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), TVarsInSubstTypes0_39, &TVarsInSubstTypes_40);
        mercury__set__intersect_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), TVarsInSubstTypes_40, VarsToSubSet_37, &RecSubstTVars0_41);
        mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), RecSubstTVars0_41, &RecSubstTVars_42);
        if ((RecSubstTVars_42 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word TVarRenaming0_43;
          MR_Word VarsToReplace_44;
          MR_Word TVarRenaming_46;
          MR_Word RenamedVarsToSub_47;
          MR_Word SubExistQVars_49;
          MR_Word Var_74;
          MR_Word Var_45;

          mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), &TVarRenaming0_43);
          mercury__list__append_3_p_1((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), VarsToSub_25, TVarsInSubstTypes0_39, &VarsToReplace_44);
          parse_tree__prog_util__get_new_tvars_8_p_0(VarsToReplace_44, TVarSet0_17, CalledTVarSet_32, TVarSet_18, NameVarIndex0_33, &Var_45, TVarRenaming0_43, &TVarRenaming_46);
          mercury__map__apply_to_list_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), VarsToSub_25, TVarRenaming_46, &RenamedVarsToSub_47);
          hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_16, ExistQVars_20);
          {
            Var_74 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2));
            MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (*ExistQVars_20));
          }
          mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), Var_74, RenamedVarsToSub_47, &SubExistQVars_49);
          if ((SubExistQVars_49 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word TypeSubst0_50;
            MR_Word SubstTypes_51;
            MR_Word SubAL_52;
            MR_Word TypeSubst_53;
            MR_Word Types0_54;
            MR_Word ClassContext0_55;
            MR_Box conv1_TypeSubst_53;

            mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), &TypeSubst0_50);
            parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_46, SubstTypes0_38, &SubstTypes_51);
            mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0), RenamedVarsToSub_47, SubstTypes_51, &SubAL_52);
            mercury__list__foldl_4_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[2]), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[4]), SubAL_52, ((MR_Box) (TypeSubst0_50)), &conv1_TypeSubst_53);
            TypeSubst_53 = ((MR_Word) (conv1_TypeSubst_53));
            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_16, &Types0_54);
            hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_16, &ClassContext0_55);
            parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeSubst_53, Types0_54, Types_19);
            parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(TypeSubst_53, ClassContext0_55, ClassContext_21);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *SubstOk_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeSubst_53));
            }
            *STATE_VARIABLE_Specs_65 = STATE_VARIABLE_Specs_0_64;
          }
          else
          {
            hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(PredInfo0_16, Context_14, SubExistQVars_49, STATE_VARIABLE_Specs_0_64, STATE_VARIABLE_Specs_65);
            *Types_19 = (MR_Word) ((MR_Unsigned) 0U);
            *ClassContext_21 = (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[7]);
            *SubstOk_22 = (MR_Word) ((MR_Unsigned) 0U);
          }
        }
        else
        {
          hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(PredInfo0_16, Context_14, TVarSet0_17, RecSubstTVars_42, STATE_VARIABLE_Specs_0_64, STATE_VARIABLE_Specs_65);
          *ExistQVars_20 = (MR_Word) ((MR_Unsigned) 0U);
          *Types_19 = (MR_Word) ((MR_Unsigned) 0U);
          *ClassContext_21 = (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[7]);
          mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_18);
          *SubstOk_22 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
      {
        hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(PredInfo0_16, Context_14, TVarSet0_17, UnknownVarsToSub_36, STATE_VARIABLE_Specs_0_64, STATE_VARIABLE_Specs_65);
        *ExistQVars_20 = (MR_Word) ((MR_Unsigned) 0U);
        *Types_19 = (MR_Word) ((MR_Unsigned) 0U);
        *ClassContext_21 = (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[7]);
        mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_18);
        *SubstOk_22 = (MR_Word) ((MR_Unsigned) 0U);
      }
    }
    else
    {
      MR_Word MultiSubstVars_31;

      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), MultiSubstVars0_28, &MultiSubstVars_31);
      hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(PredInfo0_16, Context_14, TVarSet0_17, MultiSubstVars_31, STATE_VARIABLE_Specs_0_64, STATE_VARIABLE_Specs_65);
      *ExistQVars_20 = (MR_Word) ((MR_Unsigned) 0U);
      *Types_19 = (MR_Word) ((MR_Unsigned) 0U);
      *ClassContext_21 = (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[7]);
      mercury__varset__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_18);
      *SubstOk_22 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
  *STATE_VARIABLE_ModuleInfo_63 = STATE_VARIABLE_ModuleInfo_0_62;
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word UnknownVars_10,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  MR_Word PredOrFunc_12;
  MR_String Decl_13;
  MR_Word Pieces_14;
  MR_Word Spec_15;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word Var_27;
  MR_String Var_28;
  MR_Word Var_31;
  MR_Word Var_34;
  MR_Word Var_35;
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
  MR_Word Var_73;
  MR_String Var_74;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_String Var_79;
  MR_Box conv0_Var_74;
  MR_Box conv1_Var_28;

  PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
  switch (PredOrFunc_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      Decl_13 = (MR_String) "func";
      break;
    case (MR_Integer) 0:
      Decl_13 = (MR_String) "pred";
      break;
  }
  Module_49 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
  Name_50 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
  PredFormArity_51 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_7);
  PredOrFunc_52 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
  {
    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Module_49));
    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Name_50));
  }
  {
    PFSymNameArity_53 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PFSymNameArity_53, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_52));
    MR_hl_field(MR_mktag(0), PFSymNameArity_53, 1) = ((MR_Box) (Var_54));
    MR_hl_field(MR_mktag(0), PFSymNameArity_53, 2) = ((MR_Box) (PredFormArity_51));
  }
  {
    Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (PFSymNameArity_53));
  }
  {
    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27])));
  }
  {
    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5])));
    MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_57));
  }
  conv0_Var_74 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_74 = ((MR_String) (conv0_Var_74));
  {
    Var_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_73, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_73, 1) = ((MR_Box) (Var_74));
  }
  Var_79 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_9, UnknownVars_10);
  {
    Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
    MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_73));
    MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_77));
  }
  conv1_Var_28 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), UnknownVars_10, ((MR_Box) ((MR_String) "does not")), ((MR_Box) ((MR_String) "do not")));
  Var_28 = ((MR_String) (conv1_Var_28));
  {
    Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (Var_28));
  }
  {
    Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 28U));
    MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Decl_13));
  }
  {
    Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
    MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[22])));
  }
  {
    Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[20])));
    MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
  }
  {
    Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_31));
  }
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_25, Var_26);
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])), Var_24);
  Pieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_18, Var_19);
  {
    Spec_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_15, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_unknown_vars_to_subst\'/6"));
    MR_hl_field(MR_mktag(1), Spec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_15, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_15, 3) = ((MR_Box) (Context_8));
    MR_hl_field(MR_mktag(1), Spec_15, 4) = ((MR_Box) (Pieces_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_17 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_15));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_16));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word MultiSubstVars_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_Word Pieces_12;
  MR_Word Spec_13;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_String Var_26;
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
  MR_Word Var_66;
  MR_String Var_67;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_String Var_72;
  MR_Box conv0_Var_67;
  MR_Box conv1_Var_26;

  Module_42 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
  Name_43 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
  PredFormArity_44 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_7);
  PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
  {
    Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Module_42));
    MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Name_43));
  }
  {
    PFSymNameArity_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PFSymNameArity_46, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_45));
    MR_hl_field(MR_mktag(0), PFSymNameArity_46, 1) = ((MR_Box) (Var_47));
    MR_hl_field(MR_mktag(0), PFSymNameArity_46, 2) = ((MR_Box) (PredFormArity_44));
  }
  {
    Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (PFSymNameArity_46));
  }
  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27])));
  }
  {
    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5])));
    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_50));
  }
  conv0_Var_67 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MultiSubstVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_67 = ((MR_String) (conv0_Var_67));
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
  }
  Var_72 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_9, MultiSubstVars_10);
  {
    Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_66));
    MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_70));
  }
  conv1_Var_26 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MultiSubstVars_10, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
  Var_26 = ((MR_String) (conv1_Var_26));
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[19])));
  }
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_23, Var_24);
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])), Var_22);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_16, Var_17);
  {
    Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_multiple_subst_vars\'/6"));
    MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Context_8));
    MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (Pieces_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_15 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word RecursiveVars_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  MR_Word Pieces_12;
  MR_Word Spec_13;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_String Var_26;
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
  MR_Word Var_66;
  MR_String Var_67;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_String Var_72;
  MR_Box conv0_Var_67;
  MR_Box conv1_Var_26;

  Module_42 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
  Name_43 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
  PredFormArity_44 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_7);
  PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
  {
    Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Module_42));
    MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Name_43));
  }
  {
    PFSymNameArity_46 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), PFSymNameArity_46, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_45));
    MR_hl_field(MR_mktag(0), PFSymNameArity_46, 1) = ((MR_Box) (Var_47));
    MR_hl_field(MR_mktag(0), PFSymNameArity_46, 2) = ((MR_Box) (PredFormArity_44));
  }
  {
    Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 12U));
    MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (PFSymNameArity_46));
  }
  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27])));
  }
  {
    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5])));
    MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_50));
  }
  conv0_Var_67 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RecursiveVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_67 = ((MR_String) (conv0_Var_67));
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
  }
  Var_72 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_9, RecursiveVars_10);
  {
    Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
    MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_66));
    MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_70));
  }
  conv1_Var_26 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RecursiveVars_10, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
  Var_26 = ((MR_String) (conv1_Var_26));
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (Var_26));
  }
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17])));
  }
  Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_23, Var_24);
  Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])), Var_22);
  Pieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_16, Var_17);
  {
    Spec_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_13, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_recursive_subst\'/6"));
    MR_hl_field(MR_mktag(1), Spec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_13, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_13, 3) = ((MR_Box) (Context_8));
    MR_hl_field(MR_mktag(1), Spec_13, 4) = ((MR_Box) (Pieces_12));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_15 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word SubExistQVars_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  MR_Word TVarSet_10;
  MR_Word Pieces_11;
  MR_Word Spec_12;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_24;
  MR_Word Var_25;
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
  MR_Word Var_61;
  MR_String Var_62;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_String Var_67;
  MR_Box conv0_Var_62;

  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &TVarSet_10);
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
    MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24])));
    MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5])));
    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Var_45));
  }
  conv0_Var_62 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SubExistQVars_8, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
  Var_62 = ((MR_String) (conv0_Var_62));
  {
    Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
  }
  Var_67 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0), TVarSet_10, SubExistQVars_8);
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
    MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_65));
  }
  Var_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_25, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
  Var_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[11])), Var_24);
  Pieces_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_15, Var_16);
  {
    Spec_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Spec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.report_subst_existq_tvars\'/5"));
    MR_hl_field(MR_mktag(1), Spec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(1), Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 40U));
    MR_hl_field(MR_mktag(1), Spec_12, 3) = ((MR_Box) (Context_7));
    MR_hl_field(MR_mktag(1), Spec_12, 4) = ((MR_Box) (Pieces_11));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_Specs_14 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
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
  MR_Word conv3_STATE_VARIABLE_ModuleInfo_101;
  MR_Word conv2_STATE_VARIABLE_QualInfo_103;
  MR_Word conv1_STATE_VARIABLE_Specs_105;

  hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_ModuleInfo_101, ((MR_Word) (wrapper_arg_4)), &conv2_STATE_VARIABLE_QualInfo_103, ((MR_Word) (wrapper_arg_6)), &conv1_STATE_VARIABLE_Specs_105);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_ModuleInfo_101));
  *wrapper_arg_5 = ((MR_Box) (conv2_STATE_VARIABLE_QualInfo_103));
  *wrapper_arg_7 = ((MR_Box) (conv1_STATE_VARIABLE_Specs_105));
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
  MR_Word STATE_VARIABLE_Specs_43_43;

  hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_36, &PredTable_20);
  switch (MR_tag((MR_Word) PFUMM_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ModesOrArity_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PFUMM_14, (MR_Integer) 0))));
        MR_Word PredFormArity_84;

        MaybePredOrFunc_23 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[1]));
        if (((MR_tag((MR_Word) ModesOrArity_81)) == (MR_Integer) 1))
        {
          UserArity_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModesOrArity_81, (MR_Integer) 0))));
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_0((MR_Integer) 0, UserArity_26, &PredFormArity_84);
          MaybeModes_27 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word Modes_77 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModesOrArity_81, (MR_Integer) 0))));

          PredFormArity_84 = parse_tree__prog_data__arg_list_arity_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Modes_77);
          parse_tree__prog_util__user_arity_pred_form_arity_3_p_1((MR_Integer) 0, &UserArity_26, PredFormArity_84);
          {
            MaybeModes_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeModes_27, 0) = ((MR_Box) (Modes_77));
          }
        }
        hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 0, SymName_15, PredFormArity_84, &PredIds_28);
        hlds__pred_table__predicate_table_lookup_pf_sym_5_p_0(PredTable_20, (MR_Integer) 0, (MR_Integer) 0, SymName_15, &AllArityPredIds_29);
        UserArityInt_30 = (MR_Integer) (UserArity_26);
        STATE_VARIABLE_Specs_43_43 = STATE_VARIABLE_Specs_0_40;
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
        STATE_VARIABLE_Specs_43_43 = STATE_VARIABLE_Specs_0_40;
      }
      break;
    case (MR_Integer) 2:
      {
        UserArity_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), PFUMM_14, (MR_Integer) 0))));
        hlds__make_hlds__add_pragma__maybe_warn_about_pfumm_unknown_7_p_0(STATE_VARIABLE_ModuleInfo_0_36, (MR_String) "type_spec", PFUMM_14, SymName_15, Context_10, STATE_VARIABLE_Specs_0_40, &STATE_VARIABLE_Specs_43_43);
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
    OtherUserArityInts_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_user_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[3]), OtherUserArities_32);
    hlds__make_hlds_error__report_undefined_pred_or_func_error_8_p_0(MaybePredOrFunc_23, SymName_15, UserArityInt_30, OtherUserArityInts_33, Context_10, (MR_Word) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6])), STATE_VARIABLE_Specs_43_43, STATE_VARIABLE_Specs_41);
    *STATE_VARIABLE_ModuleInfo_37 = STATE_VARIABLE_ModuleInfo_0_36;
    *STATE_VARIABLE_QualInfo_39 = STATE_VARIABLE_QualInfo_0_38;
  }
  else
  {
    MR_Word Var_48;
    MR_Box conv6_STATE_VARIABLE_ModuleInfo_37;
    MR_Box conv5_STATE_VARIABLE_QualInfo_39;
    MR_Box conv4_STATE_VARIABLE_Specs_41;

    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (TSInfo_9));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (UserArity_26));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (MaybeModes_27));
      MR_hl_field(MR_mktag(0), Var_48, 6) = ((MR_Box) (Context_10));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0), (MR_Word) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[0]), Var_48, PredIds_28, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_36)), &conv6_STATE_VARIABLE_ModuleInfo_37, ((MR_Box) (STATE_VARIABLE_QualInfo_0_38)), &conv5_STATE_VARIABLE_QualInfo_39, ((MR_Box) (STATE_VARIABLE_Specs_43_43)), &conv4_STATE_VARIABLE_Specs_41);
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
