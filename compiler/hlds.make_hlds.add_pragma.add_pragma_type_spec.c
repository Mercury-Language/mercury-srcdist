/*
** Automatically generated from `add_pragma_type_spec.m'
** by the Mercury compiler,
** version rotd-2017-12-28
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_tags.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
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
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
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
#include "random.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_foreign_enum.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"




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
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__320__1_3_p_0(
  MR_Word HeadVar__1_95,
  MR_Word HeadVar__2_96,
  MR_Word * HeadVar__3_97);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__310__1_2_p_0(
  MR_Word ExistQVars_20,
  MR_Word LambdaHeadVar__1_75);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__279__1_3_p_0(
  MR_Word TVarSet0_17,
  MR_Word NameVarIndex0_33,
  MR_Word LambdaHeadVar__1_67);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__197__1_3_p_0(
  MR_Word PredId_12,
  MR_Integer LambdaHeadVar__1_118,
  MR_Word * LambdaHeadVar__2_119);

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
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(
  MR_Word TSInfo0_10,
  MR_Word Context_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_91,
  MR_Word * STATE_VARIABLE_ModuleInfo_92,
  MR_Word STATE_VARIABLE_QualInfo_0_93,
  MR_Word * STATE_VARIABLE_QualInfo_94,
  MR_Word STATE_VARIABLE_Specs_0_95,
  MR_Word * STATE_VARIABLE_Specs_96);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_11_p_0(
  MR_Word SymName_12,
  MR_Integer Arity_13,
  MR_Word Context_14,
  MR_Word MaybeModes_15,
  MR_Word * MaybeProcIds_16,
  MR_Word STATE_VARIABLE_Procs_0_25,
  MR_Word * STATE_VARIABLE_Procs_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

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
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word MultiSubstVars_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word RecursiveVars_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word SubExistQVars_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

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


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[29][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[6][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[1][12];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[3][6];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[3][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[1][7];




static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[29][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "the existentially quantified type"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: the substitution includes"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on both sides of the substitution."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "multiple replacement types."))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occur in the"))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0)),
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_item_id_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0)),
    ((MR_Box) (&recompilation__recompilation__type_ctor_info_recompilation_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__320__1_3_p_0(
  MR_Word HeadVar__1_95,
  MR_Word HeadVar__2_96,
  MR_Word * HeadVar__3_97)
{
  {
    hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, HeadVar__1_95, HeadVar__2_96, HeadVar__3_97);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__310__1_2_p_0(
  MR_Word ExistQVars_20,
  MR_Word LambdaHeadVar__1_75)
{
  {
    MR_bool succeeded;

    succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], ((MR_Box) (LambdaHeadVar__1_75)), ExistQVars_20);
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__279__1_3_p_0(
  MR_Word TVarSet0_17,
  MR_Word NameVarIndex0_33,
  MR_Word LambdaHeadVar__1_67)
{
  {
    MR_bool succeeded;
    MR_String VarName_35;

    mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet0_17, LambdaHeadVar__1_67, &VarName_35);
    succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], NameVarIndex0_33, ((MR_Box) (VarName_35)));
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__197__1_3_p_0(
  MR_Word PredId_12,
  MR_Integer LambdaHeadVar__1_118,
  MR_Word * LambdaHeadVar__2_119)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
    *LambdaHeadVar__2_119 = base;
    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (PredId_12));
    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LambdaHeadVar__1_118));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * STATE_VARIABLE_ProcInfo_5)
{
  {
    MR_Word STATE_VARIABLE_ProcInfo_6_6;

    hlds__hlds_pred__proc_info_reset_imported_structure_sharing_2_p_0(STATE_VARIABLE_ProcInfo_0_4, &STATE_VARIABLE_ProcInfo_6_6);
    hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_p_0(STATE_VARIABLE_ProcInfo_6_6, STATE_VARIABLE_ProcInfo_5);
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Map_0_7,
  MR_Word * STATE_VARIABLE_Map_8)
{
  {
    MR_Box K_4 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
    MR_Box V_5 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1));

    mercury__map__set_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, K_4, V_5, STATE_VARIABLE_Map_0_7, STATE_VARIABLE_Map_8);
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Var_5;

    Var_5 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVar_3);
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (Type_4));
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_4;

    recompilation__record_expanded_items_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv3_HeadVar__4_4);
    *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__4_4));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_LambdaHeadVar__2_119;

    hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__197__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) wrapper_arg_1), &conv2_LambdaHeadVar__2_119);
    *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_119));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ProcInfo_5;

    hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(((MR_Word) wrapper_arg_1), &conv0_STATE_VARIABLE_ProcInfo_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_STATE_VARIABLE_ProcInfo_5));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(
  MR_Word TSInfo0_10,
  MR_Word Context_11,
  MR_Word PredId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_91,
  MR_Word * STATE_VARIABLE_ModuleInfo_92,
  MR_Word STATE_VARIABLE_QualInfo_0_93,
  MR_Word * STATE_VARIABLE_QualInfo_94,
  MR_Word STATE_VARIABLE_Specs_0_95,
  MR_Word * STATE_VARIABLE_Specs_96)
{
  {
    MR_bool succeeded;
    MR_Word SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo0_10, (MR_Integer) 0)));
    MR_Word SpecName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo0_10, (MR_Integer) 1)));
    MR_Integer Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TSInfo0_10, (MR_Integer) 2)));
    MR_Word MaybeModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo0_10, (MR_Integer) 4)));
    MR_Word Subst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo0_10, (MR_Integer) 5)));
    MR_Word TVarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo0_10, (MR_Integer) 6)));
    MR_Word ExpandedItems_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo0_10, (MR_Integer) 7)));
    MR_Word PredInfo0_24;
    MR_Word TVarSet_25;
    MR_Word Types_26;
    MR_Word ExistQVars_27;
    MR_Word ClassContext_28;
    MR_Word SubstOk_29;
    MR_Word STATE_VARIABLE_ModuleInfo_97_97;
    MR_Word STATE_VARIABLE_Specs_98_98;
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo0_10, (MR_Integer) 3)));

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_91, PredId_12, &PredInfo0_24);
    hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0(Context_11, Subst_21, PredInfo0_24, TVarSet0_22, &TVarSet_25, &Types_26, &ExistQVars_27, &ClassContext_28, &SubstOk_29, STATE_VARIABLE_ModuleInfo_0_91, &STATE_VARIABLE_ModuleInfo_97_97, STATE_VARIABLE_Specs_0_95, &STATE_VARIABLE_Specs_98_98);
    if ((SubstOk_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_ModuleInfo_92 = STATE_VARIABLE_ModuleInfo_97_97;
      *STATE_VARIABLE_QualInfo_94 = STATE_VARIABLE_QualInfo_0_93;
      *STATE_VARIABLE_Specs_96 = STATE_VARIABLE_Specs_98_98;
    }
    else
    {
      MR_Word TypeCtorInfo_132_132;
      MR_Word TypeCtorInfo_133_133;
      MR_Word RenamedSubst_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubstOk_29, (MR_Integer) 0)));
      MR_Word Procs0_31;
      MR_Word MaybeProcIds_32;
      MR_Word Procs1_33;
      MR_Word Procs_34;
      MR_Word Globals_35;
      MR_Word DoTypeSpec_36;
      MR_Word Smart_37;
      MR_Word STATE_VARIABLE_ModuleInfo_99_99;
      MR_Word ProcIds_38;

      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_24, &Procs0_31);
      hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_11_p_0(SymName_16, Arity_18, Context_11, MaybeModes_20, &MaybeProcIds_32, Procs0_31, &Procs1_33, STATE_VARIABLE_ModuleInfo_97_97, &STATE_VARIABLE_ModuleInfo_99_99, STATE_VARIABLE_Specs_98_98, STATE_VARIABLE_Specs_96);
      TypeCtorInfo_132_132 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      TypeCtorInfo_133_133 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
      mercury__map__map_values_only_3_p_0(TypeCtorInfo_132_132, TypeCtorInfo_132_132, TypeCtorInfo_133_133, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[4], Procs1_33, &Procs_34);
      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_99_99, &Globals_35);
      libs__globals__lookup_bool_option_3_p_0(Globals_35, (MR_Integer) 370, &DoTypeSpec_36);
      libs__globals__lookup_bool_option_3_p_0(Globals_35, (MR_Integer) 128, &Smart_37);
      succeeded = ((MR_tag((MR_Word) MaybeProcIds_32)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ProcIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeProcIds_32, (MR_Integer) 0)));
        succeeded = (DoTypeSpec_36 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_24);
          succeeded = !(succeeded);
          if (!(succeeded))
            succeeded = (Smart_37 == (MR_Integer) 1);
        }
      }
      if (succeeded)
      {
        MR_Word TypeCtorInfo_134_134;
        MR_Word TypeInfo_136_136;
        MR_Word TypeCtorInfo_138_138;
        MR_Word TypeCtorInfo_145_145;
        MR_Word TypeCtorInfo_146_146;
        MR_Word PredOrFunc_39;
        MR_Integer PredArity_40;
        MR_Word ArgVarSet0_41;
        MR_Word Args_42;
        MR_Word ArgVarSet_43;
        MR_Word VarTypes0_44;
        MR_Word GoalInfo0_45;
        MR_Word NonLocals_46;
        MR_Word GoalInfo1_47;
        MR_Word GoalInfo_48;
        MR_Word Goal_49;
        MR_Word Clause_50;
        MR_Word TVarNameMap_51;
        MR_Word ArgsVec_52;
        MR_Word ClausesRep_53;
        MR_Word ItemNumbers_54;
        MR_Word RttiVarMaps_55;
        MR_Word Clauses_58;
        MR_Word Markers0_59;
        MR_Word Markers_60;
        MR_Word Proofs_61;
        MR_Word ConstraintMap_62;
        MR_Word PredStatus_63;
        MR_Word ModuleName_64;
        MR_Word OrigOrigin_65;
        MR_Word SubstDesc_66;
        MR_Word Origin_67;
        MR_Word VarNameRemap_69;
        MR_Word NewPredInfo0_70;
        MR_Word NewPredInfo_71;
        MR_Word PredTable0_72;
        MR_Word NewPredId_73;
        MR_Word PredTable_74;
        MR_Word TypeSpecInfo0_75;
        MR_Word ProcsToSpec0_76;
        MR_Word ForceVersions0_77;
        MR_Word SpecMap0_78;
        MR_Word PragmaMap0_79;
        MR_Word PredProcIds_82;
        MR_Word ProcsToSpec_83;
        MR_Word ForceVersions_84;
        MR_Word SpecMap_85;
        MR_Word TSInfo_86;
        MR_Word PragmaMap_87;
        MR_Word TypeSpecInfo_88;
        MR_Word IsImported_89;
        MR_Word Var_105;
        MR_Word Var_108;
        MR_Word Var_114;
        MR_Word STATE_VARIABLE_ModuleInfo_116_116;
        MR_Word Var_117;
        MR_Word Var_121;
        MR_Word Var_122;
        MR_Word Var_120;

        PredOrFunc_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo0_24);
        parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_39, Arity_18, &PredArity_40);
        TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        mercury__varset__init_1_p_0(TypeCtorInfo_134_134, &ArgVarSet0_41);
        parse_tree__prog_util__make_n_fresh_vars_5_p_0(TypeCtorInfo_134_134, (MR_String) "HeadVar__", PredArity_40, &Args_42, ArgVarSet0_41, &ArgVarSet_43);
        hlds__vartypes__init_vartypes_1_p_0(&VarTypes0_44);
        hlds__hlds_goal__goal_info_init_1_p_0(&GoalInfo0_45);
        parse_tree__set_of_var__list_to_set_2_p_0(TypeCtorInfo_134_134, Args_42, &NonLocals_46);
        hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_46, GoalInfo0_45, &GoalInfo1_47);
        hlds__hlds_goal__goal_info_set_context_3_p_0(Context_11, GoalInfo1_47, &GoalInfo_48);
        hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_p_0(PredId_12, PredOrFunc_39, SymName_16, Args_42, GoalInfo_48, &Goal_49);
        {
          Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_105, 0) = ((MR_Box) (ProcIds_38));
        }
        {
          Clause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Clause_50, 0) = ((MR_Box) (Var_105));
          MR_hl_field(MR_mktag(0), Clause_50, 1) = ((MR_Box) (Goal_49));
          MR_hl_field(MR_mktag(0), Clause_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), Clause_50, 3) = ((MR_Box) (Context_11));
          MR_hl_field(MR_mktag(0), Clause_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        TypeInfo_136_136 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1];
        mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, TypeInfo_136_136, &TVarNameMap_51);
        ArgsVec_52 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2], PredOrFunc_39, Args_42);
        {
          Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (Clause_50));
          MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        hlds__hlds_clauses__set_clause_list_2_p_0(Var_108, &ClausesRep_53);
        ItemNumbers_54 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&RttiVarMaps_55);
        {
          Clauses_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Clauses_58, 0) = ((MR_Box) (ArgVarSet_43));
          MR_hl_field(MR_mktag(0), Clauses_58, 1) = ((MR_Box) (TVarNameMap_51));
          MR_hl_field(MR_mktag(0), Clauses_58, 2) = ((MR_Box) (VarTypes0_44));
          MR_hl_field(MR_mktag(0), Clauses_58, 3) = ((MR_Box) (VarTypes0_44));
          MR_hl_field(MR_mktag(0), Clauses_58, 4) = ((MR_Box) (ArgsVec_52));
          MR_hl_field(MR_mktag(0), Clauses_58, 5) = ((MR_Box) (ClausesRep_53));
          MR_hl_field(MR_mktag(0), Clauses_58, 6) = ((MR_Box) (ItemNumbers_54));
          MR_hl_field(MR_mktag(0), Clauses_58, 7) = ((MR_Box) (RttiVarMaps_55));
          MR_hl_field(MR_mktag(0), Clauses_58, 8) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), Clauses_58, 9) = ((MR_Box) ((MR_Integer) 0));
        }
        hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo0_24, &Markers0_59);
        hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, Markers0_59, &Markers_60);
        TypeCtorInfo_138_138 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
        mercury__map__init_1_p_0(TypeCtorInfo_138_138, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &Proofs_61);
        mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, TypeCtorInfo_138_138, &ConstraintMap_62);
        succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo0_24);
        if (succeeded)
        {
          PredStatus_63 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        else
          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo0_24, &PredStatus_63);
        ModuleName_64 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo0_24);
        hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo0_24, &OrigOrigin_65);
        SubstDesc_66 = mercury__list__map_2_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[5], Subst_21);
        {
          Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), Var_114, 1) = ((MR_Box) (SubstDesc_66));
        }
        {
          Origin_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Origin_67, 0) = ((MR_Box) (Var_114));
          MR_hl_field(MR_mktag(2), Origin_67, 1) = ((MR_Box) (OrigOrigin_65));
          MR_hl_field(MR_mktag(2), Origin_67, 2) = ((MR_Box) (PredId_12));
        }
        hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(PredInfo0_24, &VarNameRemap_69);
        hlds__hlds_pred__pred_info_init_19_p_0(ModuleName_64, SpecName_17, PredArity_40, PredOrFunc_39, Context_11, Origin_67, PredStatus_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), Markers_60, Types_26, TVarSet_25, ExistQVars_27, ClassContext_28, Proofs_61, ConstraintMap_62, Clauses_58, VarNameRemap_69, &NewPredInfo0_70);
        hlds__hlds_pred__pred_info_set_proc_table_3_p_0(Procs_34, NewPredInfo0_70, &NewPredInfo_71);
        hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_99_99, &PredTable0_72);
        hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_71, &NewPredId_73, PredTable0_72, &PredTable_74);
        hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_74, STATE_VARIABLE_ModuleInfo_99_99, &STATE_VARIABLE_ModuleInfo_116_116);
        hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_ModuleInfo_116_116, &TypeSpecInfo0_75);
        ProcsToSpec0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo0_75, (MR_Integer) 0)));
        ForceVersions0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo0_75, (MR_Integer) 1)));
        SpecMap0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo0_75, (MR_Integer) 2)));
        PragmaMap0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeSpecInfo0_75, (MR_Integer) 3)));
        {
          Var_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_117, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[2]));
          MR_hl_field(MR_mktag(0), Var_117, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_3));
          MR_hl_field(MR_mktag(0), Var_117, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_117, 3) = ((MR_Box) (PredId_12));
        }
        TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
        mercury__list__map_3_p_0(TypeCtorInfo_133_133, TypeCtorInfo_145_145, Var_117, ProcIds_38, &PredProcIds_82);
        mercury__set__insert_list_3_p_0(TypeCtorInfo_145_145, PredProcIds_82, ProcsToSpec0_76, &ProcsToSpec_83);
        TypeCtorInfo_146_146 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        mercury__set__insert_3_p_0(TypeCtorInfo_146_146, ((MR_Box) (NewPredId_73)), ForceVersions0_77, &ForceVersions_84);
        Var_120 = (MR_Word) PredStatus_63;
        succeeded = (Var_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          mercury__multi_map__set_4_p_0(TypeCtorInfo_146_146, TypeCtorInfo_146_146, ((MR_Box) (PredId_12)), ((MR_Box) (NewPredId_73)), SpecMap0_78, &SpecMap_85);
        else
          SpecMap_85 = SpecMap0_78;
        {
          Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (PredOrFunc_39));
        }
        Var_122 = mercury__map__to_assoc_list_1_f_0(TypeInfo_136_136, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, RenamedSubst_30);
        {
          TSInfo_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TSInfo_86, 0) = ((MR_Box) (SymName_16));
          MR_hl_field(MR_mktag(0), TSInfo_86, 1) = ((MR_Box) (SpecName_17));
          MR_hl_field(MR_mktag(0), TSInfo_86, 2) = ((MR_Box) (Arity_18));
          MR_hl_field(MR_mktag(0), TSInfo_86, 3) = ((MR_Box) (Var_121));
          MR_hl_field(MR_mktag(0), TSInfo_86, 4) = ((MR_Box) (MaybeModes_20));
          MR_hl_field(MR_mktag(0), TSInfo_86, 5) = ((MR_Box) (Var_122));
          MR_hl_field(MR_mktag(0), TSInfo_86, 6) = ((MR_Box) (TVarSet_25));
          MR_hl_field(MR_mktag(0), TSInfo_86, 7) = ((MR_Box) (ExpandedItems_23));
        }
        mercury__multi_map__set_4_p_0(TypeCtorInfo_146_146, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, ((MR_Box) (PredId_12)), ((MR_Box) (TSInfo_86)), PragmaMap0_79, &PragmaMap_87);
        {
          TypeSpecInfo_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeSpecInfo_88, 0) = ((MR_Box) (ProcsToSpec_83));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_88, 1) = ((MR_Box) (ForceVersions_84));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_88, 2) = ((MR_Box) (SpecMap_85));
          MR_hl_field(MR_mktag(0), TypeSpecInfo_88, 3) = ((MR_Box) (PragmaMap_87));
        }
        hlds__hlds_module__module_info_set_type_spec_info_3_p_0(TypeSpecInfo_88, STATE_VARIABLE_ModuleInfo_116_116, STATE_VARIABLE_ModuleInfo_92);
        IsImported_89 = hlds__status__pred_status_is_imported_1_f_0(PredStatus_63);
        switch (IsImported_89) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_QualInfo_94 = STATE_VARIABLE_QualInfo_0_93;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ItemType_90;
              MR_Word Var_124;
              MR_Word Var_126;
              MR_Word Var_127;

              ItemType_90 = recompilation__pred_or_func_to_item_type_1_f_0(PredOrFunc_39);
              {
                Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (SymName_16));
                MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (Arity_18));
              }
              {
                Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_126, 0) = ((MR_Box) (ItemType_90));
                MR_hl_field(MR_mktag(0), Var_126, 1) = ((MR_Box) (Var_127));
              }
              {
                Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_124, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[0]));
                MR_hl_field(MR_mktag(0), Var_124, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_4));
                MR_hl_field(MR_mktag(0), Var_124, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), Var_124, 3) = ((MR_Box) (Var_126));
                MR_hl_field(MR_mktag(0), Var_124, 4) = ((MR_Box) (ExpandedItems_23));
              }
              hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(Var_124, STATE_VARIABLE_QualInfo_0_93, STATE_VARIABLE_QualInfo_94);
            }
            break;
        }
      }
      else
      {
        *STATE_VARIABLE_QualInfo_94 = STATE_VARIABLE_QualInfo_0_93;
        *STATE_VARIABLE_ModuleInfo_92 = STATE_VARIABLE_ModuleInfo_99_99;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_11_p_0(
  MR_Word SymName_12,
  MR_Integer Arity_13,
  MR_Word Context_14,
  MR_Word MaybeModes_15,
  MR_Word * MaybeProcIds_16,
  MR_Word STATE_VARIABLE_Procs_0_25,
  MR_Word * STATE_VARIABLE_Procs_26,
  MR_Word STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * STATE_VARIABLE_ModuleInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_bool succeeded;

    if ((MaybeModes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word ProcIds_42;

      mercury__map__keys_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, STATE_VARIABLE_Procs_0_25, &ProcIds_42);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeProcIds_16 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcIds_42));
      }
      *STATE_VARIABLE_Procs_26 = STATE_VARIABLE_Procs_0_25;
      *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
    }
    else
    {
      MR_Word TypeCtorInfo_43_43 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0;
      MR_Word TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
      MR_Word Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeModes_15, (MR_Integer) 0)));
      MR_Word ExistingProcs_21;
      MR_Integer ProcId_22;

      mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_43_43, TypeCtorInfo_44_44, STATE_VARIABLE_Procs_0_25, &ExistingProcs_21);
      succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(ExistingProcs_21, Modes_20, STATE_VARIABLE_ModuleInfo_0_27, &ProcId_22);
      if (succeeded)
      {
        MR_Word ProcInfo_23;
        MR_Word ProcIds_24;
        MR_Box conv0_ProcInfo_23;

        mercury__map__lookup_3_p_0(TypeCtorInfo_43_43, TypeCtorInfo_44_44, STATE_VARIABLE_Procs_0_25, ((MR_Box) (ProcId_22)), &conv0_ProcInfo_23);
        ProcInfo_23 = ((MR_Word) conv0_ProcInfo_23);
        *STATE_VARIABLE_Procs_26 = mercury__map__singleton_2_f_0(TypeCtorInfo_43_43, TypeCtorInfo_44_44, ((MR_Box) (ProcId_22)), ((MR_Box) (ProcInfo_23)));
        {
          ProcIds_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ProcIds_24, 0) = ((MR_Box) (ProcId_22));
          MR_hl_field(MR_mktag(1), ProcIds_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeProcIds_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ProcIds_24));
        }
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
        *STATE_VARIABLE_ModuleInfo_28 = STATE_VARIABLE_ModuleInfo_0_27;
      }
      else
      {
        hlds__hlds_module__module_info_incr_errors_2_p_0(STATE_VARIABLE_ModuleInfo_0_27, STATE_VARIABLE_ModuleInfo_28);
        hlds__make_hlds__make_hlds_error__report_undefined_mode_error_6_p_0(SymName_12, Arity_13, Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6]), STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
        *MaybeProcIds_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *STATE_VARIABLE_Procs_26 = STATE_VARIABLE_Procs_0_25;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_97;

    hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__320__1_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__3_97);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_97));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__310__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__279__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
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
  {
    MR_bool succeeded;
    MR_Word TypeInfo_87_87 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1];
    MR_Word TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word VarsToSub_25;

    mercury__assoc_list__keys_2_p_0(TypeInfo_87_87, TypeCtorInfo_88_88, Subst_15, &VarsToSub_25);
    if ((Subst_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.handle_pragma_type_spec_subst\'/13", (MR_String) "empty substitution");
        return;
      }
    }
    else
    {
      MR_Word MultiSubstVars0_28;

      hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(TypeInfo_87_87, VarsToSub_25, &MultiSubstVars0_28);
      if ((MultiSubstVars0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word TypeCtorInfo_90_90;
        MR_Word CalledTVarSet_32;
        MR_Word NameVarIndex0_33;
        MR_Word UnknownVarsToSub_36;
        MR_Word Var_66;

        hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo0_16, &CalledTVarSet_32);
        TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
        mercury__varset__create_name_var_map_2_p_0(TypeCtorInfo_90_90, CalledTVarSet_32, &NameVarIndex0_33);
        {
          Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_66, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1));
          MR_hl_field(MR_mktag(0), Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_66, 3) = ((MR_Box) (TVarSet0_17));
          MR_hl_field(MR_mktag(0), Var_66, 4) = ((MR_Box) (NameVarIndex0_33));
        }
        mercury__list__filter_3_p_0(TypeInfo_87_87, Var_66, VarsToSub_25, &UnknownVarsToSub_36);
        if ((UnknownVarsToSub_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word VarsToSubSet_37;
          MR_Word SubstTypes0_38;
          MR_Word TVarsInSubstTypes0_39;
          MR_Word TVarsInSubstTypes_40;
          MR_Word RecSubstTVars0_41;
          MR_Word RecSubstTVars_42;

          mercury__set__list_to_set_2_p_0(TypeInfo_87_87, VarsToSub_25, &VarsToSubSet_37);
          mercury__assoc_list__values_2_p_0(TypeInfo_87_87, TypeCtorInfo_88_88, Subst_15, &SubstTypes0_38);
          parse_tree__prog_type__type_vars_list_2_p_0(SubstTypes0_38, &TVarsInSubstTypes0_39);
          mercury__set__list_to_set_2_p_0(TypeInfo_87_87, TVarsInSubstTypes0_39, &TVarsInSubstTypes_40);
          mercury__set__intersect_3_p_0(TypeInfo_87_87, TVarsInSubstTypes_40, VarsToSubSet_37, &RecSubstTVars0_41);
          mercury__set__to_sorted_list_2_p_0(TypeInfo_87_87, RecSubstTVars0_41, &RecSubstTVars_42);
          if ((RecSubstTVars_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word TVarRenaming0_43;
            MR_Word VarsToReplace_44;
            MR_Word TVarRenaming_46;
            MR_Word RenamedVarsToSub_47;
            MR_Word SubExistQVars_49;
            MR_Word Var_74;
            MR_Word Var_45;

            mercury__map__init_1_p_0(TypeInfo_87_87, TypeInfo_87_87, &TVarRenaming0_43);
            mercury__list__append_3_p_1(TypeInfo_87_87, VarsToSub_25, TVarsInSubstTypes0_39, &VarsToReplace_44);
            parse_tree__prog_util__get_new_tvars_8_p_0(VarsToReplace_44, TVarSet0_17, CalledTVarSet_32, TVarSet_18, NameVarIndex0_33, &Var_45, TVarRenaming0_43, &TVarRenaming_46);
            mercury__map__apply_to_list_3_p_0(TypeInfo_87_87, TypeInfo_87_87, VarsToSub_25, TVarRenaming_46, &RenamedVarsToSub_47);
            hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(PredInfo0_16, ExistQVars_20);
            {
              Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Var_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2));
              MR_hl_field(MR_mktag(0), Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_74, 3) = ((MR_Box) (*ExistQVars_20));
            }
            mercury__list__filter_3_p_0(TypeInfo_87_87, Var_74, RenamedVarsToSub_47, &SubExistQVars_49);
            if ((SubExistQVars_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word TypeSubst0_50;
              MR_Word SubstTypes_51;
              MR_Word SubAL_52;
              MR_Word TypeSubst_53;
              MR_Word Types0_54;
              MR_Word ClassContext0_55;
              MR_Box conv1_TypeSubst_53;

              mercury__map__init_1_p_0(TypeInfo_87_87, TypeCtorInfo_88_88, &TypeSubst0_50);
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(TVarRenaming_46, SubstTypes0_38, &SubstTypes_51);
              mercury__assoc_list__from_corresponding_lists_3_p_0(TypeInfo_87_87, TypeCtorInfo_88_88, RenamedVarsToSub_47, SubstTypes_51, &SubAL_52);
              mercury__list__foldl_4_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[2], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[3], SubAL_52, ((MR_Box) (TypeSubst0_50)), &conv1_TypeSubst_53);
              TypeSubst_53 = ((MR_Word) conv1_TypeSubst_53);
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo0_16, &Types0_54);
              hlds__hlds_pred__pred_info_get_class_context_2_p_0(PredInfo0_16, &ClassContext0_55);
              parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(TypeSubst_53, Types0_54, Types_19);
              parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(TypeSubst_53, ClassContext0_55, ClassContext_21);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *SubstOk_22 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypeSubst_53));
              }
              *STATE_VARIABLE_Specs_65 = STATE_VARIABLE_Specs_0_64;
            }
            else
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(PredInfo0_16, Context_14, SubExistQVars_49, STATE_VARIABLE_Specs_0_64, STATE_VARIABLE_Specs_65);
              *Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[28];
              *SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          }
          else
          {
            hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(PredInfo0_16, Context_14, TVarSet0_17, RecSubstTVars_42, STATE_VARIABLE_Specs_0_64, STATE_VARIABLE_Specs_65);
            *ExistQVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[28];
            mercury__varset__init_1_p_0(TypeCtorInfo_90_90, TVarSet_18);
            *SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        }
        else
        {
          hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(PredInfo0_16, Context_14, TVarSet0_17, UnknownVarsToSub_36, STATE_VARIABLE_Specs_0_64, STATE_VARIABLE_Specs_65);
          *ExistQVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[28];
          mercury__varset__init_1_p_0(TypeCtorInfo_90_90, TVarSet_18);
          *SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
      }
      else
      {
        MR_Word MultiSubstVars_31;

        mercury__list__sort_and_remove_dups_2_p_0(TypeInfo_87_87, MultiSubstVars0_28, &MultiSubstVars_31);
        hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(PredInfo0_16, Context_14, TVarSet0_17, MultiSubstVars_31, STATE_VARIABLE_Specs_0_64, STATE_VARIABLE_Specs_65);
        *ExistQVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[28];
        mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_18);
        *SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
    *STATE_VARIABLE_ModuleInfo_63 = STATE_VARIABLE_ModuleInfo_0_62;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word UnknownVars_10,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word TypeCtorInfo_49_49;
    MR_Word PredOrFunc_12;
    MR_String Decl_13;
    MR_Word Pieces_14;
    MR_Word Msg_15;
    MR_Word Spec_16;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_46;
    MR_Word Module_54;
    MR_String Name_55;
    MR_Integer Arity_56;
    MR_Word PredOrFunc_57;
    MR_Word SimpleCallId_58;
    MR_Word Var_59;
    MR_Word Var_62;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_78;
    MR_String Var_79;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_String Var_84;
    MR_Box conv0_Var_79;
    MR_Box conv1_Var_29;

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
    TypeCtorInfo_49_49 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    Module_54 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
    Name_55 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
    Arity_56 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_7);
    PredOrFunc_57 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Module_54));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Name_55));
    }
    {
      SimpleCallId_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SimpleCallId_58, 0) = ((MR_Box) (PredOrFunc_57));
      MR_hl_field(MR_mktag(0), SimpleCallId_58, 1) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), SimpleCallId_58, 2) = ((MR_Box) (Arity_56));
    }
    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (SimpleCallId_58));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_62));
    }
    conv0_Var_79 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, UnknownVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    Var_79 = ((MR_String) conv0_Var_79);
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) (Var_79));
    }
    Var_84 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_9, UnknownVars_10);
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_83, 1) = ((MR_Box) (Var_84));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_82));
    }
    conv1_Var_29 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, UnknownVars_10, ((MR_Box) ((MR_String) "does not")), ((MR_Box) ((MR_String) "do not")));
    Var_29 = ((MR_String) conv1_Var_29);
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Decl_13));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27])));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[25])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_32));
    }
    Var_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_49, Var_26, Var_27);
    Var_20 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_49, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[20]), Var_25);
    Pieces_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_49_49, Var_19, Var_20);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_42, 0) = ((MR_Box) (Pieces_14));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Msg_15));
      MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_46));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word MultiSubstVars_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word TypeCtorInfo_42_42 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Spec_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_String Var_27;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_39;
    MR_Word Module_47;
    MR_String Name_48;
    MR_Integer Arity_49;
    MR_Word PredOrFunc_50;
    MR_Word SimpleCallId_51;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_71;
    MR_String Var_72;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_String Var_77;
    MR_Box conv0_Var_72;
    MR_Box conv1_Var_27;

    Module_47 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
    Name_48 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
    Arity_49 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_7);
    PredOrFunc_50 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Module_47));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Name_48));
    }
    {
      SimpleCallId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SimpleCallId_51, 0) = ((MR_Box) (PredOrFunc_50));
      MR_hl_field(MR_mktag(0), SimpleCallId_51, 1) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), SimpleCallId_51, 2) = ((MR_Box) (Arity_49));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (SimpleCallId_51));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_55));
    }
    conv0_Var_72 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, MultiSubstVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    Var_72 = ((MR_String) conv0_Var_72);
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
    }
    Var_77 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_9, MultiSubstVars_10);
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_75));
    }
    conv1_Var_27 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, MultiSubstVars_10, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
    Var_27 = ((MR_String) conv1_Var_27);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24])));
    }
    Var_23 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_42, Var_24, Var_25);
    Var_18 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[20]), Var_23);
    Pieces_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_42, Var_17, Var_18);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Pieces_12));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(
  MR_Word PredInfo_7,
  MR_Word Context_8,
  MR_Word TVarSet_9,
  MR_Word RecursiveVars_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_Word TypeCtorInfo_42_42 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word Pieces_12;
    MR_Word Msg_13;
    MR_Word Spec_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_String Var_27;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_39;
    MR_Word Module_47;
    MR_String Name_48;
    MR_Integer Arity_49;
    MR_Word PredOrFunc_50;
    MR_Word SimpleCallId_51;
    MR_Word Var_52;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_71;
    MR_String Var_72;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_String Var_77;
    MR_Box conv0_Var_72;
    MR_Box conv1_Var_27;

    Module_47 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_7);
    Name_48 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_7);
    Arity_49 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_7);
    PredOrFunc_50 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_7);
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (Module_47));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Name_48));
    }
    {
      SimpleCallId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SimpleCallId_51, 0) = ((MR_Box) (PredOrFunc_50));
      MR_hl_field(MR_mktag(0), SimpleCallId_51, 1) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), SimpleCallId_51, 2) = ((MR_Box) (Arity_49));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (SimpleCallId_51));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_55));
    }
    conv0_Var_72 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, RecursiveVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    Var_72 = ((MR_String) conv0_Var_72);
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
    }
    Var_77 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_9, RecursiveVars_10);
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_75));
    }
    conv1_Var_27 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, RecursiveVars_10, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    Var_27 = ((MR_String) conv1_Var_27);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[22])));
    }
    Var_23 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_42, Var_24, Var_25);
    Var_18 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[20]), Var_23);
    Pieces_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_42_42, Var_17, Var_18);
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (Pieces_12));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_13, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_13, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Msg_13));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_14, 2) = ((MR_Box) (Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(
  MR_Word PredInfo_6,
  MR_Word Context_7,
  MR_Word SubExistQVars_8,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word TypeCtorInfo_39_39;
    MR_Word TVarSet_10;
    MR_Word Pieces_11;
    MR_Word Msg_12;
    MR_Word Spec_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_36;
    MR_Word Module_42;
    MR_String Name_43;
    MR_Integer Arity_44;
    MR_Word PredOrFunc_45;
    MR_Word SimpleCallId_46;
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

    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_6, &TVarSet_10);
    TypeCtorInfo_39_39 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    Module_42 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_6);
    Name_43 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_6);
    Arity_44 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_6);
    PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_6);
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Module_42));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Name_43));
    }
    {
      SimpleCallId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), SimpleCallId_46, 0) = ((MR_Box) (PredOrFunc_45));
      MR_hl_field(MR_mktag(0), SimpleCallId_46, 1) = ((MR_Box) (Var_47));
      MR_hl_field(MR_mktag(0), SimpleCallId_46, 2) = ((MR_Box) (Arity_44));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (SimpleCallId_46));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14])));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_50));
    }
    conv0_Var_67 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, SubExistQVars_8, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    Var_67 = ((MR_String) conv0_Var_67);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) (Var_67));
    }
    Var_72 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, TVarSet_10, SubExistQVars_8);
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_71, 1) = ((MR_Box) (Var_72));
    }
    {
      Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_70));
    }
    Var_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_39_39, Var_26, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[18]));
    Var_17 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_39_39, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[10]), Var_25);
    Pieces_11 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_39_39, Var_16, Var_17);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (Pieces_11));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_12, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Msg_12, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Msg_12));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_13, 2) = ((MR_Box) (Var_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box H_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word DupVars0_6;

      hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(TypeInfo_for_T_7, T_4, &DupVars0_6);
      succeeded = mercury__list__member_2_p_0(TypeInfo_for_T_7, H_3, T_4);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = H_3;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (DupVars0_6));
        }
      else
        *HeadVar__2_2 = DupVars0_6;
    }
  }
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
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_92;
    MR_Word conv1_STATE_VARIABLE_QualInfo_94;
    MR_Word conv0_STATE_VARIABLE_Specs_96;

    hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_STATE_VARIABLE_ModuleInfo_92, ((MR_Word) wrapper_arg_4), &conv1_STATE_VARIABLE_QualInfo_94, ((MR_Word) wrapper_arg_6), &conv0_STATE_VARIABLE_Specs_96);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_92));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_QualInfo_94));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_Specs_96));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0(
  MR_Word TSInfo_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_29,
  MR_Word * STATE_VARIABLE_ModuleInfo_30,
  MR_Word STATE_VARIABLE_QualInfo_0_31,
  MR_Word * STATE_VARIABLE_QualInfo_32,
  MR_Word STATE_VARIABLE_Specs_0_33,
  MR_Word * STATE_VARIABLE_Specs_34)
{
  {
    MR_Word SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo_9, (MR_Integer) 0)));
    MR_Integer Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TSInfo_9, (MR_Integer) 2)));
    MR_Word MaybePredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo_9, (MR_Integer) 3)));
    MR_Word Preds_22;
    MR_Word PredIds_25;
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo_9, (MR_Integer) 1)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo_9, (MR_Integer) 4)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo_9, (MR_Integer) 5)));
    MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo_9, (MR_Integer) 6)));
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), TSInfo_9, (MR_Integer) 7)));

    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_29, &Preds_22);
    if ((MaybePredOrFunc_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(Preds_22, (MR_Integer) 0, SymName_14, Arity_16, &PredIds_25);
    }
    else
    {
      MR_Word PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybePredOrFunc_17, (MR_Integer) 0)));
      MR_Integer PredArity_24;

      parse_tree__prog_util__adjust_func_arity_3_p_0(PredOrFunc_23, Arity_16, &PredArity_24);
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(Preds_22, (MR_Integer) 0, PredOrFunc_23, SymName_14, PredArity_24, &PredIds_25);
    }
    if ((PredIds_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      hlds__make_hlds__make_hlds_error__report_undefined_pred_or_func_error_7_p_0(SymName_14, Arity_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Context_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6]), STATE_VARIABLE_Specs_0_33, STATE_VARIABLE_Specs_34);
      *STATE_VARIABLE_ModuleInfo_30 = STATE_VARIABLE_ModuleInfo_0_29;
      *STATE_VARIABLE_QualInfo_32 = STATE_VARIABLE_QualInfo_0_31;
    }
    else
    {
      MR_Word Var_37;
      MR_Box conv5_STATE_VARIABLE_ModuleInfo_30;
      MR_Box conv4_STATE_VARIABLE_QualInfo_32;
      MR_Box conv3_STATE_VARIABLE_Specs_34;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[0]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (TSInfo_9));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (Context_10));
      }
      mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[0], Var_37, PredIds_25, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_29)), &conv5_STATE_VARIABLE_ModuleInfo_30, ((MR_Box) (STATE_VARIABLE_QualInfo_0_31)), &conv4_STATE_VARIABLE_QualInfo_32, ((MR_Box) (STATE_VARIABLE_Specs_0_33)), &conv3_STATE_VARIABLE_Specs_34);
      *STATE_VARIABLE_ModuleInfo_30 = ((MR_Word) conv5_STATE_VARIABLE_ModuleInfo_30);
      *STATE_VARIABLE_QualInfo_32 = ((MR_Word) conv4_STATE_VARIABLE_QualInfo_32);
      *STATE_VARIABLE_Specs_34 = ((MR_Word) conv3_STATE_VARIABLE_Specs_34);
    }
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
