/*
** Automatically generated from `add_pragma_type_spec.m'
** by the Mercury compiler,
** version rotd-2017-07-04
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module hlds.make_hlds.add_pragma.add_pragma_type_spec. */
/* :- implementation. */

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
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_item_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__318__1_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_95,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_96,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_97);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__308__1_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__1_75);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__277__1_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__1_67);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__195__1_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__1_118,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__2_119);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_5);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_11_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_12,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_13,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_15,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_16,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_26,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_28,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_29,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVars_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_17,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_18);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RecursiveVars_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_8,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_T_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_K_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_V_11,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_0_7,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_8);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_3(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_15,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_63,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65);

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_4(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_3(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_91,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_92,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_93,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_94,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_95,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_96);

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_5,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_6,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_7);


static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[29][2];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[6][3];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[1][12];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[3][5];

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[3][6];

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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 17)),
    ((MR_Box) ((MR_String) "type_spec"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on both sides of the substitution."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "multiple replacement types."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occur in the"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[27]))),
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
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[2])),
    ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_3)),
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

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
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

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
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

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__318__1_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_95,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_96,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_97)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_95, hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_96, hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_97);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__308__1_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__1_75)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__1_75)), hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20);
    }
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__277__1_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__1_67)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__VarName_35;

    {
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__1_67, &hlds__make_hlds__add_pragma__add_pragma_type_spec__VarName_35);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__VarName_35)));
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = !(hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded);
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__195__1_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__1_118,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__2_119)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__2_119 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__LambdaHeadVar__1_118));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_0_4,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_5)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_6_6;

    {
      hlds__hlds_pred__proc_info_reset_imported_structure_sharing_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_0_4, &hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_6_6);
    }
    {
      hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_6_6, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_5);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_11_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_12,
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_13,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_15,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_16,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_26,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_28,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_29,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_30)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;

    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_42;

        {
          mercury__map__keys_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_42);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_16 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_42));
        }
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_26 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25;
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_28 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27;
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_29;
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_15, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistingProcs_21;
        MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcId_22;

        {
          mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_43_43, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_44_44, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistingProcs_21);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistingProcs_21, hlds__make_hlds__add_pragma__add_pragma_type_spec__Modes_20, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcId_22);
        }
        if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcInfo_23;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_24;
            MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_ProcInfo_23;

            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_44_44, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25, hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcId_22, &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_ProcInfo_23);
            }
            hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcInfo_23 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_ProcInfo_23);
            {
              *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_26 = mercury__map__singleton_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_43_43, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_44_44, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcId_22)), ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcInfo_23)));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcId_22));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_24));
            }
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_29;
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_28 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27;
          }
        else
          {
            {
              hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_28);
            }
            {
              hlds__make_hlds__make_hlds_error__report_undefined_mode_error_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_12, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_13, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6]), hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_29, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_30);
            }
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_26 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25;
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVars_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_17,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_18)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_49_49;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_12;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Decl_13;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_14;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_15;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_19;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_20;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_28;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_29;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_32;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_41;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_42;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_46;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_54;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_55;
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_56;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_57;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_59;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_65;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_68;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_69;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_78;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_79;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_82;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_83;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_84;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_79;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_Var_29;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    switch (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__make_hlds__add_pragma__add_pragma_type_spec__Decl_13 = (MR_String) "func";
        break;
      case (MR_Integer) 0:
        hlds__make_hlds__add_pragma__add_pragma_type_spec__Decl_13 = (MR_String) "pred";
        break;
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_54 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_55 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_56 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_57 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_54));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_55));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_57));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_59));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_56));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_69, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_69));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_68));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_65));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_79 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_79 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_79);
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_78, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_79));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_84 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9, hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVars_10);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_83, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_84));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_83));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_78));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_82));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_Var_29 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVars_10, ((MR_Box) ((MR_String) "does not")), ((MR_Box) ((MR_String) "do not")));
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_29 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_Var_29);
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_28, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_29));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Decl_13));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[28])));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[26])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_32, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_28));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_32));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_49_49, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_20 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_49_49, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[21]), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_14 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_49_49, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_19, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_20);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_42, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_14));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_42));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_41));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_15));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_46));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_18 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_17));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_18;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_23;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_24;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_34;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_39;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48;
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_52;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_55;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_58;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_61;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_72;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_75;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_76;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_77;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_72;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_Var_27;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_52));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_61));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_58));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_55));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_72 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_72 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_72);
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_72));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_77 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9, hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_10);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_77));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_76));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_75));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_Var_27 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_10, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_Var_27);
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[25])));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_23 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_24, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_18 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[21]), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_23);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_18);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_34));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_39, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RecursiveVars_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_18;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_23;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_24;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_34;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_39;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48;
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_52;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_55;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_58;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_61;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_72;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_75;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_76;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_77;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_72;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_Var_27;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_52));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_62));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_61));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_58));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_55));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_72 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__RecursiveVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_72 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_72);
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_72));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_77 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9, hlds__make_hlds__add_pragma__add_pragma_type_spec__RecursiveVars_10);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_77));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_76));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_75));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_Var_27 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__RecursiveVars_10, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_Var_27);
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_27));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_23 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_24, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_18 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[21]), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_23);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_18);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_35));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_34));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_39, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_8,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_15)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_39_39;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_10;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_11;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_12;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_16;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_31;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_32;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_42;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_43;
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_44;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_45;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_47;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_50;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_53;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_56;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_57;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_67;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_70;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71;
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_72;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_67;

    {
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_10);
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_42 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_43 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_44 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_42));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_43));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_45));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_47));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_44));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_57));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_56));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_53));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_16, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_50));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_67 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_8, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_67 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_Var_67);
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_67));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_72 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_10, hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_8);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_72));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_71));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_70));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_26, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[19]));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_39_39, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[10]), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_25);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_17);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_32, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_11));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_32));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_31));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_12));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_14));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_T_7,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;

    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__H_3 = (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 0));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__DupVars0_6;

        {
          hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_T_7, hlds__make_hlds__add_pragma__add_pragma_type_spec__T_4, &hlds__make_hlds__add_pragma__add_pragma_type_spec__DupVars0_6);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_T_7, hlds__make_hlds__add_pragma__add_pragma_type_spec__H_3, hlds__make_hlds__add_pragma__add_pragma_type_spec__T_4);
        }
        if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = hlds__make_hlds__add_pragma__add_pragma_type_spec__H_3;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__DupVars0_6));
          }
        else
          *hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_type_spec__DupVars0_6;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_K_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_V_11,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_0_7,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_8)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__K_4 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 0));
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__V_5 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 1));

    {
      mercury__map__set_4_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_K_10, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_V_11, hlds__make_hlds__add_pragma__add_pragma_type_spec__K_4, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_5, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_0_7, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_8);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_3(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_HeadVar__3_97;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__318__1_3_p_0(((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_HeadVar__3_97);
    }
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_HeadVar__3_97));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__308__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1));
    }
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__277__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1));
    }
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_15,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_62,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_63,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1];
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25;

    {
      mercury__assoc_list__keys_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_15, &hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25);
    }
    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.handle_pragma_type_spec_subst\'/13", (MR_String) "empty substitution");
          return;
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars0_28;

        {
          hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars0_28);
        }
        if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_90_90;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__CalledTVarSet_32;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVarsToSub_36;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66;

            {
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, &hlds__make_hlds__add_pragma__add_pragma_type_spec__CalledTVarSet_32);
            }
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_90_90 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
            {
              mercury__varset__create_name_var_map_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_90_90, hlds__make_hlds__add_pragma__add_pragma_type_spec__CalledTVarSet_32, &hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[1]));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33));
            }
            {
              mercury__list__filter_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_66, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVarsToSub_36);
            }
            if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVarsToSub_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSubSet_37;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes0_38;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes0_39;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes_40;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars0_41;
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars_42;

                {
                  mercury__set__list_to_set_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSubSet_37);
                }
                {
                  mercury__assoc_list__values_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_15, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes0_38);
                }
                {
                  parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes0_38, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes0_39);
                }
                {
                  mercury__set__list_to_set_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes0_39, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes_40);
                }
                {
                  mercury__set__intersect_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes_40, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSubSet_37, &hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars0_41);
                }
                {
                  mercury__set__to_sorted_list_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars0_41, &hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars_42);
                }
                if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming0_43;
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToReplace_44;
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming_46;
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedVarsToSub_47;
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_49;
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_74;
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_45;

                    {
                      mercury__map__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming0_43);
                    }
                    {
                      mercury__list__append_3_p_1(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes0_39, &hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToReplace_44);
                    }
                    {
                      parse_tree__prog_util__get_new_tvars_8_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToReplace_44, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__CalledTVarSet_32, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18, hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_45, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming0_43, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming_46);
                    }
                    {
                      mercury__map__apply_to_list_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming_46, &hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedVarsToSub_47);
                    }
                    {
                      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20);
                    }
                    {
                      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_74, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[2]));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_74, 3) = ((MR_Box) (*hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20));
                    }
                    {
                      mercury__list__filter_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_74, hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedVarsToSub_47, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_49);
                    }
                    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst0_50;
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes_51;
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubAL_52;
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst_53;
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Types0_54;
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext0_55;
                        MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_TypeSubst_53;

                        {
                          mercury__map__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_88_88, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst0_50);
                        }
                        {
                          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming_46, hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes0_38, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes_51);
                        }
                        {
                          mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedVarsToSub_47, hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes_51, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SubAL_52);
                        }
                        {
                          mercury__list__foldl_4_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[2], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[5], hlds__make_hlds__add_pragma__add_pragma_type_spec__SubAL_52, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst0_50)), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_TypeSubst_53);
                        }
                        hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst_53 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_TypeSubst_53);
                        {
                          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Types0_54);
                        }
                        {
                          hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext0_55);
                        }
                        {
                          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst_53, hlds__make_hlds__add_pragma__add_pragma_type_spec__Types0_54, hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19);
                        }
                        {
                          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst_53, hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext0_55, hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21);
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst_53));
                        }
                        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64;
                      }
                    else
                      {
                        {
                          hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_49, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65);
                        }
                        *hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14];
                        *hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      }
                  }
                else
                  {
                    {
                      hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65);
                    }
                    *hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14];
                    {
                      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_90_90, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18);
                    }
                    *hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
              }
            else
              {
                {
                  hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVarsToSub_36, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65);
                }
                *hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                *hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14];
                {
                  mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_90_90, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18);
                }
                *hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
          }
        else
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_31;

            {
              mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_87_87, hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars0_28, &hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_31);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_31, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65);
            }
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14];
            {
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18);
            }
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_63 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_62;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_5;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_5 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVar_3);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_5));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Type_4));
    }
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_4(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_HeadVar__4_4;

    {
      recompilation__record_expanded_items_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_HeadVar__4_4);
    }
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_HeadVar__4_4));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_3(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_LambdaHeadVar__2_119;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__195__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 3))), ((MR_Integer) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_LambdaHeadVar__2_119);
    }
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_LambdaHeadVar__2_119));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_2(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_HeadVar__2_2;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1));
    }
    hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_HeadVar__2_2));
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_ProcInfo_5;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_ProcInfo_5);
    }
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_ProcInfo_5));
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_91,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_92,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_93,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_94,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_95,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_96)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 1)));
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ExpandedItems_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_25;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_26;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_27;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_28;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_29;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_97_97;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_98_98;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 3)));

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_91, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24);
    }
    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11, hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_21, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_22, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_26, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_27, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_28, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_29, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_91, &hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_97_97, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_95, &hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_98_98);
    }
    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_92 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_97_97;
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_94 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_93;
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_96 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_98_98;
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_132_132;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_133_133;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedSubst_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_29, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs0_31;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_32;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs1_33;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs_34;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Globals_35;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__DoTypeSpec_36;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Smart_37;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_99_99;
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_38;

        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs0_31);
        }
        {
          hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_11_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_18, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11, hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_20, &hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_32, hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs0_31, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs1_33, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_97_97, &hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_99_99, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_98_98, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_96);
        }
        hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_132_132 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
        hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_133_133 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        {
          mercury__map__map_values_only_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_132_132, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_133_133, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[3], hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs1_33, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs_34);
        }
        {
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_99_99, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Globals_35);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Globals_35, (MR_Integer) 367, &hlds__make_hlds__add_pragma__add_pragma_type_spec__DoTypeSpec_36);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Globals_35, (MR_Integer) 126, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Smart_37);
        }
        hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_32)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
          {
            hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_32, (MR_Integer) 0)));
            hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = (hlds__make_hlds__add_pragma__add_pragma_type_spec__DoTypeSpec_36 == (MR_Integer) 1);
            if (!(hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded))
              {
                {
                  hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24);
                }
                hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = !(hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded);
                if (!(hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded))
                  hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = (hlds__make_hlds__add_pragma__add_pragma_type_spec__Smart_37 == (MR_Integer) 1);
              }
          }
        if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
          {
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_134_134;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_136_136;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_138_138;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_145_145;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_146_146;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39;
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_40;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet0_41;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Args_42;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet_43;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__VarTypes0_44;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo0_45;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NonLocals_46;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo1_47;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo_48;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Goal_49;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarNameMap_51;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgsVec_52;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ClausesRep_53;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ItemNumbers_54;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RttiVarMaps_55;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers0_59;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers_60;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Proofs_61;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ConstraintMap_62;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredStatus_63;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ModuleName_64;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__OrigOrigin_65;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstDesc_66;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_67;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__VarNameRemap_69;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo0_70;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo_71;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable0_72;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredId_73;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable_74;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_75;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec0_76;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions0_77;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap0_78;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap0_79;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredProcIds_82;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec_83;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions_84;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap_85;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap_87;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_88;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__IsImported_89;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_105;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_108;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_114;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_116_116;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_117;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_121;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_122;
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_120;

            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24);
            }
            {
              parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_18, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_40);
            }
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
            {
              mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_134_134, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet0_41);
            }
            {
              parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_134_134, (MR_String) "HeadVar__", hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_40, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Args_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet0_41, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet_43);
            }
            {
              hlds__vartypes__init_vartypes_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_type_spec__VarTypes0_44);
            }
            {
              hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo0_45);
            }
            {
              parse_tree__set_of_var__list_to_set_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_134_134, hlds__make_hlds__add_pragma__add_pragma_type_spec__Args_42, &hlds__make_hlds__add_pragma__add_pragma_type_spec__NonLocals_46);
            }
            {
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__NonLocals_46, hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo0_45, &hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo1_47);
            }
            {
              hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11, hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo1_47, &hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo_48);
            }
            {
              hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Args_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo_48, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Goal_49);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_105, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_38));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_105));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Goal_49));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_136_136 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1];
            {
              mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_136_136, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarNameMap_51);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgsVec_52 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2], hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__Args_42);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_108, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_108, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ClausesRep_53);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__ItemNumbers_54 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
            }
            {
              hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_type_spec__RttiVarMaps_55);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet_43));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarNameMap_51));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__VarTypes0_44));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__VarTypes0_44));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgsVec_52));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ClausesRep_53));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ItemNumbers_54));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__RttiVarMaps_55));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, 8) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, 9) = ((MR_Box) ((MR_Integer) 0));
            }
            {
              hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers0_59);
            }
            {
              hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 22, hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers0_59, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers_60);
            }
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_138_138 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
            {
              mercury__map__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_138_138, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Proofs_61);
            }
            {
              mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_138_138, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ConstraintMap_62);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24);
            }
            if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
              {
                hlds__make_hlds__add_pragma__add_pragma_type_spec__PredStatus_63 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            else
              {
                hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredStatus_63);
              }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__ModuleName_64 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24);
            }
            {
              hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__OrigOrigin_65);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstDesc_66 = mercury__list__map_2_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[4], hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_21);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_114 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_114, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_114, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstDesc_66));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_67, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_114));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_67, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__OrigOrigin_65));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_67, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12));
            }
            {
              hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__VarNameRemap_69);
            }
            {
              hlds__hlds_pred__pred_info_init_19_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__ModuleName_64, hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecName_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_40, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11, hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_67, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredStatus_63, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers_60, hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_26, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_25, hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_27, hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_28, hlds__make_hlds__add_pragma__add_pragma_type_spec__Proofs_61, hlds__make_hlds__add_pragma__add_pragma_type_spec__ConstraintMap_62, hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_58, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarNameRemap_69, &hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo0_70);
            }
            {
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs_34, hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo0_70, &hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo_71);
            }
            {
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_99_99, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable0_72);
            }
            {
              hlds__pred_table__predicate_table_insert_4_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo_71, &hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredId_73, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable0_72, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable_74);
            }
            {
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable_74, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_99_99, &hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_116_116);
            }
            {
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_116_116, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_75);
            }
            hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_75, (MR_Integer) 0)));
            hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions0_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_75, (MR_Integer) 1)));
            hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap0_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_75, (MR_Integer) 2)));
            hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_75, (MR_Integer) 3)));
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_117, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_117, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_3));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_117, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_117, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12));
            }
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_145_145 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            {
              mercury__list__map_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_133_133, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_145_145, hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_117, hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_38, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredProcIds_82);
            }
            {
              mercury__set__insert_list_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_145_145, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredProcIds_82, hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec0_76, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec_83);
            }
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_146_146 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            {
              mercury__set__insert_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_146_146, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredId_73)), hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions0_77, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions_84);
            }
            hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_120 = (MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__PredStatus_63;
            hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_120 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
              {
                mercury__multi_map__set_4_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_146_146, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_146_146, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12)), ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredId_73)), hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap0_78, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap_85);
              }
            else
              hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap_85 = hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap0_78;
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_121, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39));
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_122 = mercury__map__to_assoc_list_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_136_136, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedSubst_30);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_16));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecName_17));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_18));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_121));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_20));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_122));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_25));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ExpandedItems_23));
            }
            {
              mercury__multi_map__set_4_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_146_146, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12)), ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_86)), hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap0_79, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap_87);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_88, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec_83));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_88, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions_84));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_88, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap_85));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_88, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap_87));
            }
            {
              hlds__hlds_module__module_info_set_type_spec_info_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_116_116, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_92);
            }
            {
              hlds__make_hlds__add_pragma__add_pragma_type_spec__IsImported_89 = hlds__status__pred_status_is_imported_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredStatus_63);
            }
            switch (hlds__make_hlds__add_pragma__add_pragma_type_spec__IsImported_89) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_94 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_93;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ItemType_90;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_124;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_126;
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_127;

                  {
                    hlds__make_hlds__add_pragma__add_pragma_type_spec__ItemType_90 = recompilation__pred_or_func_to_item_type_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39);
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_127, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_16));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_127, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_18));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_126, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ItemType_90));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_126, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_127));
                  }
                  {
                    hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_124 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_124, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[0]));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_124, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_4));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_124, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_124, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_126));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_124, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ExpandedItems_23));
                  }
                  {
                    hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_124, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_93, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_94);
                  }
                }
                break;
            }
          }
        else
          {
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_94 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_93;
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_92 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_99_99;
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1(
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_5,
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_6,
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_STATE_VARIABLE_ModuleInfo_92;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_STATE_VARIABLE_QualInfo_94;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_Specs_96;

    {
      hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_STATE_VARIABLE_ModuleInfo_92, ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_4), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_STATE_VARIABLE_QualInfo_94, ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_6), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_Specs_96);
    }
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_STATE_VARIABLE_ModuleInfo_92));
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_STATE_VARIABLE_QualInfo_94));
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_Specs_96));
  }
}

void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0(
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_10,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_28,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_29,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_30,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_31,
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_32,
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_33)
{
  {
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybePredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Preds_22;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredIds_25;
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 7)));

    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_28, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Preds_22);
    }
    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybePredOrFunc_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Preds_22, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_16, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredIds_25);
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybePredOrFunc_17, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_24;

        {
          parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_23, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_16, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_24);
        }
        {
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Preds_22, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_23, hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredIds_25);
        }
      }
    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__PredIds_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__make_hlds__make_hlds_error__report_undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6]), hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_33);
        }
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_28;
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_31 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_30;
      }
    else
      {
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36;
        MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv5_STATE_VARIABLE_ModuleInfo_29;
        MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv4_STATE_VARIABLE_QualInfo_31;
        MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_STATE_VARIABLE_Specs_33;

        {
          hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[0]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_10));
        }
        {
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[0], hlds__make_hlds__add_pragma__add_pragma_type_spec__Var_36, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredIds_25, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_28)), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv5_STATE_VARIABLE_ModuleInfo_29, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_30)), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv4_STATE_VARIABLE_QualInfo_31, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_32)), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_STATE_VARIABLE_Specs_33);
        }
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_29 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv5_STATE_VARIABLE_ModuleInfo_29);
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_31 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv4_STATE_VARIABLE_QualInfo_31);
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_33 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_STATE_VARIABLE_Specs_33);
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

/* :- end_module hlds.make_hlds.add_pragma.add_pragma_type_spec. */
