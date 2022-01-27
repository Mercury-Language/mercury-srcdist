/*
** Automatically generated from `add_pragma_type_spec.m'
** by the Mercury compiler,
** version DEV
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
#include "enum.mih"
#include "getopt_io.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
#include "hlds.hlds_data.mih"
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
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.vartypes.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "hlds.make_hlds.add_pragma.add_foreign_enum.mih"
#include "hlds.make_hlds.add_pragma.add_pragma_tabling.mih"




#line 163 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 166 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 169 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 172 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 175 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_item_id_0;

#line 178 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 181 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 184 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 187 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 190 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 315 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__315__1_3_p_0(
#line 315 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_96,
#line 315 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_97,
#line 315 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_98);

#line 305 "add_pragma_type_spec.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__305__1_2_p_0(
#line 305 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20,
#line 305 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_75);

#line 275 "add_pragma_type_spec.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__275__1_3_p_0(
#line 275 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17,
#line 275 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33,
#line 275 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_67);

#line 193 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__193__1_3_p_0(
#line 193 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12,
#line 193 "add_pragma_type_spec.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_115,
#line 193 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_116);

#line 485 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
#line 485 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_0_4,
#line 485 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_5);

#line 454 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_11_p_0(
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_12,
#line 454 "add_pragma_type_spec.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_13,
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14,
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_15,
#line 454 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_16,
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25,
#line 454 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_26,
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27,
#line 454 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_28,
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_29,
#line 454 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_30);

#line 412 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(
#line 412 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
#line 412 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
#line 412 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
#line 412 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVars_10,
#line 412 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_17,
#line 412 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_18);

#line 398 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(
#line 398 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
#line 398 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
#line 398 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
#line 398 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_10,
#line 398 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15,
#line 398 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16);

#line 386 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(
#line 386 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
#line 386 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
#line 386 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
#line 386 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RecursiveVars_10,
#line 386 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15,
#line 386 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16);

#line 373 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(
#line 373 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6,
#line 373 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_7,
#line 373 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_8,
#line 373 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_14,
#line 373 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_15);

#line 362 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
#line 362 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_T_7,
#line 362 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1,
#line 362 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2);

#line 356 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0(
#line 356 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_K_10,
#line 356 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_V_11,
#line 356 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1,
#line 356 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_0_7,
#line 356 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_8);

#line 315 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_3(
#line 315 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 315 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
#line 315 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2,
#line 315 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3);

#line 305 "add_pragma_type_spec.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2(
#line 305 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 305 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1);

#line 275 "add_pragma_type_spec.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1(
#line 275 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 275 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1);

#line 246 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0(
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14,
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_15,
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16,
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22,
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_62,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_63,
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65);

#line 233 "add_pragma_type_spec.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(
#line 233 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1);

#line 219 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_4(
#line 219 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 219 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
#line 219 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2);

#line 192 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_3(
#line 192 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 192 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
#line 192 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2);

#line 174 "add_pragma_type_spec.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_2(
#line 174 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 174 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1);

#line 98 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_1(
#line 98 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 98 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
#line 98 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2);

#line 78 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10,
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11,
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12,
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_88,
#line 78 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_89,
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_90,
#line 78 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_91,
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_92,
#line 78 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_93);

#line 74 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1(
#line 74 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 74 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
#line 74 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2,
#line 74 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3,
#line 74 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_4,
#line 74 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_5,
#line 74 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_6,
#line 74 "add_pragma_type_spec.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
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



#line 795 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 803 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 811 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 820 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 829 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__set_ordlist__pti_set_ordlist_1__plain_recompilation__type_ctor_info_item_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &recompilation__recompilation__type_ctor_info_item_id_0
  }
};

#line 837 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 845 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 854 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 862 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_pragma__add_pragma_type_spec__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 870 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_pragma__add_pragma_type_spec__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_pragma__add_pragma_type_spec__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 315 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__315__1_3_p_0(
#line 315 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_96,
#line 315 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_97,
#line 315 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_98)
#line 315 "add_pragma_type_spec.m"
{
#line 315 "add_pragma_type_spec.m"
  {
#line 315 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;

#line 315 "add_pragma_type_spec.m"
    {
#line 315 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_96, hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_97, hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_98);
#line 315 "add_pragma_type_spec.m"
      return;
    }
#line 315 "add_pragma_type_spec.m"
  }
#line 315 "add_pragma_type_spec.m"
}

#line 305 "add_pragma_type_spec.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__305__1_2_p_0(
#line 305 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20,
#line 305 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_75)
#line 305 "add_pragma_type_spec.m"
{
#line 305 "add_pragma_type_spec.m"
  {
#line 305 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;

#line 306 "add_pragma_type_spec.m"
    {
#line 306 "add_pragma_type_spec.m"
      return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = mercury__list__member_2_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_75)), hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20);
    }
#line 305 "add_pragma_type_spec.m"
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 305 "add_pragma_type_spec.m"
  }
#line 305 "add_pragma_type_spec.m"
}

#line 275 "add_pragma_type_spec.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__275__1_3_p_0(
#line 275 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17,
#line 275 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33,
#line 275 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_67)
#line 275 "add_pragma_type_spec.m"
{
#line 275 "add_pragma_type_spec.m"
  {
#line 275 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 275 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__VarName_35;

#line 276 "add_pragma_type_spec.m"
    {
#line 276 "add_pragma_type_spec.m"
      mercury__varset__lookup_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_67, &hlds__make_hlds__add_pragma__add_pragma_type_spec__VarName_35);
    }
#line 277 "add_pragma_type_spec.m"
    {
#line 277 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__VarName_35)));
    }
#line 277 "add_pragma_type_spec.m"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = !(hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded);
#line 275 "add_pragma_type_spec.m"
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 275 "add_pragma_type_spec.m"
  }
#line 275 "add_pragma_type_spec.m"
}

#line 193 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__193__1_3_p_0(
#line 193 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12,
#line 193 "add_pragma_type_spec.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_115,
#line 193 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_116)
#line 193 "add_pragma_type_spec.m"
{
#line 193 "add_pragma_type_spec.m"
  {
#line 193 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;

#line 193 "add_pragma_type_spec.m"
    {
#line 193 "add_pragma_type_spec.m"
      MR_Word base;
#line 193 "add_pragma_type_spec.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 193 "add_pragma_type_spec.m"
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__3_116 = base;
#line 193 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12));
#line 193 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_115));
#line 193 "add_pragma_type_spec.m"
    }
#line 193 "add_pragma_type_spec.m"
  }
#line 193 "add_pragma_type_spec.m"
}

#line 485 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(
#line 485 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_0_4,
#line 485 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_5)
#line 485 "add_pragma_type_spec.m"
{
#line 488 "add_pragma_type_spec.m"
  {
#line 488 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 488 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_6_6;

#line 489 "add_pragma_type_spec.m"
    {
#line 489 "add_pragma_type_spec.m"
      hlds__hlds_pred__proc_info_reset_imported_structure_sharing_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_0_4, &hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_6_6);
    }
#line 490 "add_pragma_type_spec.m"
    {
#line 490 "add_pragma_type_spec.m"
      hlds__hlds_pred__proc_info_reset_imported_structure_reuse_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_6_6, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ProcInfo_5);
#line 490 "add_pragma_type_spec.m"
      return;
    }
#line 488 "add_pragma_type_spec.m"
  }
#line 485 "add_pragma_type_spec.m"
}

#line 454 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_11_p_0(
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_12,
#line 454 "add_pragma_type_spec.m"
  MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_13,
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14,
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_15,
#line 454 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_16,
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25,
#line 454 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_26,
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27,
#line 454 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_28,
#line 454 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_29,
#line 454 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_30)
#line 454 "add_pragma_type_spec.m"
{
#line 463 "add_pragma_type_spec.m"
  {
#line 463 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;

#line 463 "add_pragma_type_spec.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 480 "add_pragma_type_spec.m"
      {
#line 480 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_42;

#line 481 "add_pragma_type_spec.m"
        {
#line 481 "add_pragma_type_spec.m"
          mercury__map__keys_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_42);
        }
#line 482 "add_pragma_type_spec.m"
        {
#line 482 "add_pragma_type_spec.m"
          MR_Word base;
#line 482 "add_pragma_type_spec.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "add_pragma_type_spec.m"
          *hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_16 = base;
#line 482 "add_pragma_type_spec.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_42));
#line 482 "add_pragma_type_spec.m"
        }
#line 480 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_26 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25;
#line 480 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_28 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27;
#line 480 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_29;
#line 480 "add_pragma_type_spec.m"
      }
#line 463 "add_pragma_type_spec.m"
    else
#line 463 "add_pragma_type_spec.m"
      {
#line 463 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_43_43 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 463 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_44_44 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 463 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Modes_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_15, (MR_Integer) 0)));
#line 463 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistingProcs_21;
#line 473 "add_pragma_type_spec.m"
        MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcId_22;

#line 464 "add_pragma_type_spec.m"
        {
#line 464 "add_pragma_type_spec.m"
          mercury__map__to_assoc_list_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_43_43, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_44_44, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistingProcs_21);
        }
#line 466 "add_pragma_type_spec.m"
        {
#line 466 "add_pragma_type_spec.m"
          hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = hlds__hlds_code_util__get_procedure_matching_argmodes_4_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistingProcs_21, hlds__make_hlds__add_pragma__add_pragma_type_spec__Modes_20, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcId_22);
        }
#line 473 "add_pragma_type_spec.m"
        if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
#line 469 "add_pragma_type_spec.m"
          {
#line 469 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcInfo_23;
#line 469 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_24;
#line 469 "add_pragma_type_spec.m"
            MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_ProcInfo_23;

#line 469 "add_pragma_type_spec.m"
            {
#line 469 "add_pragma_type_spec.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_44_44, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25, hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcId_22, &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_ProcInfo_23);
            }
#line 469 "add_pragma_type_spec.m"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcInfo_23 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_ProcInfo_23);
#line 470 "add_pragma_type_spec.m"
            {
#line 470 "add_pragma_type_spec.m"
              *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_26 = mercury__map__singleton_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_43_43, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_44_44, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcId_22)), ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcInfo_23)));
            }
#line 471 "add_pragma_type_spec.m"
            {
#line 471 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcId_22));
#line 471 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "add_pragma_type_spec.m"
            }
#line 472 "add_pragma_type_spec.m"
            {
#line 472 "add_pragma_type_spec.m"
              MR_Word base;
#line 472 "add_pragma_type_spec.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "add_pragma_type_spec.m"
              *hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_16 = base;
#line 472 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_24));
#line 472 "add_pragma_type_spec.m"
            }
#line 469 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_30 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_29;
#line 469 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_28 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27;
#line 469 "add_pragma_type_spec.m"
          }
#line 473 "add_pragma_type_spec.m"
        else
#line 474 "add_pragma_type_spec.m"
          {
#line 474 "add_pragma_type_spec.m"
            {
#line 474 "add_pragma_type_spec.m"
              hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_27, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_28);
            }
#line 475 "add_pragma_type_spec.m"
            {
#line 475 "add_pragma_type_spec.m"
              hlds__make_hlds__make_hlds_error__undefined_mode_error_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_12, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_13, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6]), hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_29, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_30);
            }
#line 477 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 474 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_26 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Procs_0_25;
#line 474 "add_pragma_type_spec.m"
          }
#line 463 "add_pragma_type_spec.m"
      }
#line 463 "add_pragma_type_spec.m"
  }
#line 454 "add_pragma_type_spec.m"
}

#line 412 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(
#line 412 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
#line 412 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
#line 412 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
#line 412 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVars_10,
#line 412 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_17,
#line 412 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_18)
#line 412 "add_pragma_type_spec.m"
{
#line 417 "add_pragma_type_spec.m"
  {
#line 417 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_49_49;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_12;
#line 417 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Decl_13;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_14;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_15;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_19_19;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_20_20;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_28_28;
#line 417 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_29_29;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_32_32;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_41_41;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_42_42;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_46_46;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_54;
#line 417 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_55;
#line 417 "add_pragma_type_spec.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_56;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_57;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_59_59;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_65_65;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_68_68;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_69_69;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_78_78;
#line 417 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_79_79;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_82_82;
#line 417 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_83_83;
#line 417 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_84_84;
#line 448 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_79_79;
#line 428 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_V_29_29;

#line 418 "add_pragma_type_spec.m"
    {
#line 418 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_12 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 422 "add_pragma_type_spec.m"
#line 422 "add_pragma_type_spec.m"
    switch (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_12) {
#line 422 "add_pragma_type_spec.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 422 "add_pragma_type_spec.m"
      case (MR_Integer) 1:
#line 424 "add_pragma_type_spec.m"
        hlds__make_hlds__add_pragma__add_pragma_type_spec__Decl_13 = (MR_String) "func";
#line 422 "add_pragma_type_spec.m"
        break;
#line 422 "add_pragma_type_spec.m"
      case (MR_Integer) 0:
#line 421 "add_pragma_type_spec.m"
        hlds__make_hlds__add_pragma__add_pragma_type_spec__Decl_13 = (MR_String) "pred";
#line 422 "add_pragma_type_spec.m"
        break;
#line 422 "add_pragma_type_spec.m"
    }
#line 1323 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 437 "add_pragma_type_spec.m"
    {
#line 437 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_54 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 438 "add_pragma_type_spec.m"
    {
#line 438 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_55 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 439 "add_pragma_type_spec.m"
    {
#line 439 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_56 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 440 "add_pragma_type_spec.m"
    {
#line 440 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_57 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 441 "add_pragma_type_spec.m"
    {
#line 441 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_54));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_55));
#line 441 "add_pragma_type_spec.m"
    }
#line 441 "add_pragma_type_spec.m"
    {
#line 441 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_57));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_59_59));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_56));
#line 441 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_58));
#line 443 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_69_69));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
#line 443 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_65_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17])));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_68_68));
#line 443 "add_pragma_type_spec.m"
    }
#line 442 "add_pragma_type_spec.m"
    {
#line 442 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_65_65));
#line 442 "add_pragma_type_spec.m"
    }
#line 442 "add_pragma_type_spec.m"
    {
#line 442 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62));
#line 442 "add_pragma_type_spec.m"
    }
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_79_79 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
#line 448 "add_pragma_type_spec.m"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__V_79_79 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_79_79);
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_78_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_78_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_79_79));
#line 448 "add_pragma_type_spec.m"
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_84_84 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVars_10);
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_84_84));
#line 449 "add_pragma_type_spec.m"
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_83_83));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_82_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "add_pragma_type_spec.m"
    }
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_78_78));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_82_82));
#line 448 "add_pragma_type_spec.m"
    }
#line 428 "add_pragma_type_spec.m"
    {
#line 428 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_V_29_29 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVars_10, ((MR_Box) ((MR_String) "does not")), ((MR_Box) ((MR_String) "do not")));
    }
#line 428 "add_pragma_type_spec.m"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__V_29_29 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_V_29_29);
#line 428 "add_pragma_type_spec.m"
    {
#line 428 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 428 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_29_29));
#line 428 "add_pragma_type_spec.m"
    }
#line 429 "add_pragma_type_spec.m"
    {
#line 429 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 429 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Decl_13));
#line 429 "add_pragma_type_spec.m"
    }
#line 429 "add_pragma_type_spec.m"
    {
#line 429 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36));
#line 429 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[28])));
#line 429 "add_pragma_type_spec.m"
    }
#line 429 "add_pragma_type_spec.m"
    {
#line 429 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[26])));
#line 429 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_32_32, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35));
#line 429 "add_pragma_type_spec.m"
    }
#line 428 "add_pragma_type_spec.m"
    {
#line 428 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_28_28));
#line 428 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_32_32));
#line 428 "add_pragma_type_spec.m"
    }
#line 427 "add_pragma_type_spec.m"
    {
#line 427 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_49_49, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27);
    }
#line 427 "add_pragma_type_spec.m"
    {
#line 427 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_20_20 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_49_49, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[21]), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25);
    }
#line 426 "add_pragma_type_spec.m"
    {
#line 426 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_14 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_49_49, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_19_19, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_20_20);
    }
#line 430 "add_pragma_type_spec.m"
    {
#line 430 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 430 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_14));
#line 430 "add_pragma_type_spec.m"
    }
#line 430 "add_pragma_type_spec.m"
    {
#line 430 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_42_42));
#line 430 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "add_pragma_type_spec.m"
    }
#line 430 "add_pragma_type_spec.m"
    {
#line 430 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 430 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_15, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8));
#line 430 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_15, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_41_41));
#line 430 "add_pragma_type_spec.m"
    }
#line 431 "add_pragma_type_spec.m"
    {
#line 431 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_15));
#line 431 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "add_pragma_type_spec.m"
    }
#line 431 "add_pragma_type_spec.m"
    {
#line 431 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 431 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 431 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_46_46));
#line 431 "add_pragma_type_spec.m"
    }
#line 432 "add_pragma_type_spec.m"
    {
#line 432 "add_pragma_type_spec.m"
      MR_Word base;
#line 432 "add_pragma_type_spec.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "add_pragma_type_spec.m"
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_18 = base;
#line 432 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_16));
#line 432 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_17));
#line 432 "add_pragma_type_spec.m"
    }
#line 417 "add_pragma_type_spec.m"
  }
#line 412 "add_pragma_type_spec.m"
}

#line 398 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(
#line 398 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
#line 398 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
#line 398 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
#line 398 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_10,
#line 398 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15,
#line 398 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16)
#line 398 "add_pragma_type_spec.m"
{
#line 403 "add_pragma_type_spec.m"
  {
#line 403 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_18_18;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_23_23;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_24_24;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26;
#line 403 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_34_34;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_39_39;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47;
#line 403 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48;
#line 403 "add_pragma_type_spec.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_52_52;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_55_55;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_58_58;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_61_61;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71;
#line 403 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_72_72;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_75_75;
#line 403 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_76_76;
#line 403 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_77_77;
#line 448 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_72_72;
#line 406 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_V_27_27;

#line 437 "add_pragma_type_spec.m"
    {
#line 437 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 438 "add_pragma_type_spec.m"
    {
#line 438 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 439 "add_pragma_type_spec.m"
    {
#line 439 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 440 "add_pragma_type_spec.m"
    {
#line 440 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 441 "add_pragma_type_spec.m"
    {
#line 441 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48));
#line 441 "add_pragma_type_spec.m"
    }
#line 441 "add_pragma_type_spec.m"
    {
#line 441 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_52_52));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49));
#line 441 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51));
#line 443 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
#line 443 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17])));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_61_61));
#line 443 "add_pragma_type_spec.m"
    }
#line 442 "add_pragma_type_spec.m"
    {
#line 442 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_58_58));
#line 442 "add_pragma_type_spec.m"
    }
#line 442 "add_pragma_type_spec.m"
    {
#line 442 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_55_55));
#line 442 "add_pragma_type_spec.m"
    }
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_72_72 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
#line 448 "add_pragma_type_spec.m"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__V_72_72 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_72_72);
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_72_72));
#line 448 "add_pragma_type_spec.m"
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_77_77 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_10);
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_77_77));
#line 449 "add_pragma_type_spec.m"
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_76_76));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "add_pragma_type_spec.m"
    }
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_75_75));
#line 448 "add_pragma_type_spec.m"
    }
#line 406 "add_pragma_type_spec.m"
    {
#line 406 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_V_27_27 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_10, ((MR_Box) ((MR_String) "has")), ((MR_Box) ((MR_String) "have")));
    }
#line 406 "add_pragma_type_spec.m"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_V_27_27);
#line 406 "add_pragma_type_spec.m"
    {
#line 406 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 406 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27));
#line 406 "add_pragma_type_spec.m"
    }
#line 406 "add_pragma_type_spec.m"
    {
#line 406 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26));
#line 406 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[25])));
#line 406 "add_pragma_type_spec.m"
    }
#line 405 "add_pragma_type_spec.m"
    {
#line 405 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_23_23 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_24_24, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25);
    }
#line 405 "add_pragma_type_spec.m"
    {
#line 405 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_18_18 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[21]), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_23_23);
    }
#line 404 "add_pragma_type_spec.m"
    {
#line 404 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_18_18);
    }
#line 408 "add_pragma_type_spec.m"
    {
#line 408 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 408 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12));
#line 408 "add_pragma_type_spec.m"
    }
#line 408 "add_pragma_type_spec.m"
    {
#line 408 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35));
#line 408 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "add_pragma_type_spec.m"
    }
#line 408 "add_pragma_type_spec.m"
    {
#line 408 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8));
#line 408 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_34_34));
#line 408 "add_pragma_type_spec.m"
    }
#line 409 "add_pragma_type_spec.m"
    {
#line 409 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13));
#line 409 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "add_pragma_type_spec.m"
    }
#line 409 "add_pragma_type_spec.m"
    {
#line 409 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 409 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 409 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_39_39));
#line 409 "add_pragma_type_spec.m"
    }
#line 410 "add_pragma_type_spec.m"
    {
#line 410 "add_pragma_type_spec.m"
      MR_Word base;
#line 410 "add_pragma_type_spec.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "add_pragma_type_spec.m"
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16 = base;
#line 410 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14));
#line 410 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15));
#line 410 "add_pragma_type_spec.m"
    }
#line 403 "add_pragma_type_spec.m"
  }
#line 398 "add_pragma_type_spec.m"
}

#line 386 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(
#line 386 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7,
#line 386 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8,
#line 386 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9,
#line 386 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RecursiveVars_10,
#line 386 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15,
#line 386 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16)
#line 386 "add_pragma_type_spec.m"
{
#line 389 "add_pragma_type_spec.m"
  {
#line 389 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_18_18;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_23_23;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_24_24;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26;
#line 389 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_34_34;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_39_39;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47;
#line 389 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48;
#line 389 "add_pragma_type_spec.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_52_52;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_55_55;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_58_58;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_61_61;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71;
#line 389 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_72_72;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_75_75;
#line 389 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_76_76;
#line 389 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_77_77;
#line 448 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_72_72;
#line 392 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_V_27_27;

#line 437 "add_pragma_type_spec.m"
    {
#line 437 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 438 "add_pragma_type_spec.m"
    {
#line 438 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 439 "add_pragma_type_spec.m"
    {
#line 439 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 440 "add_pragma_type_spec.m"
    {
#line 440 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_7);
    }
#line 441 "add_pragma_type_spec.m"
    {
#line 441 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_47));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_48));
#line 441 "add_pragma_type_spec.m"
    }
#line 441 "add_pragma_type_spec.m"
    {
#line 441 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_50));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_52_52));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_49));
#line 441 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_51));
#line 443 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_62_62));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
#line 443 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_58_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17])));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_61_61));
#line 443 "add_pragma_type_spec.m"
    }
#line 442 "add_pragma_type_spec.m"
    {
#line 442 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_55_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_58_58));
#line 442 "add_pragma_type_spec.m"
    }
#line 442 "add_pragma_type_spec.m"
    {
#line 442 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_55_55));
#line 442 "add_pragma_type_spec.m"
    }
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_72_72 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__RecursiveVars_10, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
#line 448 "add_pragma_type_spec.m"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__V_72_72 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_72_72);
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_72_72));
#line 448 "add_pragma_type_spec.m"
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_77_77 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_9, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_type_spec__RecursiveVars_10);
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_77_77));
#line 449 "add_pragma_type_spec.m"
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_76_76));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "add_pragma_type_spec.m"
    }
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_75_75));
#line 448 "add_pragma_type_spec.m"
    }
#line 392 "add_pragma_type_spec.m"
    {
#line 392 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_V_27_27 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__RecursiveVars_10, ((MR_Box) ((MR_String) "occurs")), ((MR_Box) ((MR_String) "occur")));
    }
#line 392 "add_pragma_type_spec.m"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_V_27_27);
#line 392 "add_pragma_type_spec.m"
    {
#line 392 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 392 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_27_27));
#line 392 "add_pragma_type_spec.m"
    }
#line 392 "add_pragma_type_spec.m"
    {
#line 392 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26));
#line 392 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[23])));
#line 392 "add_pragma_type_spec.m"
    }
#line 391 "add_pragma_type_spec.m"
    {
#line 391 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_23_23 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_24_24, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25);
    }
#line 391 "add_pragma_type_spec.m"
    {
#line 391 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_18_18 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[21]), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_23_23);
    }
#line 390 "add_pragma_type_spec.m"
    {
#line 390 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_42_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_18_18);
    }
#line 394 "add_pragma_type_spec.m"
    {
#line 394 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 394 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_12));
#line 394 "add_pragma_type_spec.m"
    }
#line 394 "add_pragma_type_spec.m"
    {
#line 394 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_35_35));
#line 394 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "add_pragma_type_spec.m"
    }
#line 394 "add_pragma_type_spec.m"
    {
#line 394 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 394 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_8));
#line 394 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_34_34));
#line 394 "add_pragma_type_spec.m"
    }
#line 395 "add_pragma_type_spec.m"
    {
#line 395 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_13));
#line 395 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "add_pragma_type_spec.m"
    }
#line 395 "add_pragma_type_spec.m"
    {
#line 395 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 395 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 395 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_39_39));
#line 395 "add_pragma_type_spec.m"
    }
#line 396 "add_pragma_type_spec.m"
    {
#line 396 "add_pragma_type_spec.m"
      MR_Word base;
#line 396 "add_pragma_type_spec.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_pragma_type_spec.m"
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_16 = base;
#line 396 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_14));
#line 396 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_15));
#line 396 "add_pragma_type_spec.m"
    }
#line 389 "add_pragma_type_spec.m"
  }
#line 386 "add_pragma_type_spec.m"
}

#line 373 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(
#line 373 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6,
#line 373 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_7,
#line 373 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_8,
#line 373 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_14,
#line 373 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_15)
#line 373 "add_pragma_type_spec.m"
{
#line 376 "add_pragma_type_spec.m"
  {
#line 376 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_39_39;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_10;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_11;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_12;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_16_16;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_31_31;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_32_32;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_42;
#line 376 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_43;
#line 376 "add_pragma_type_spec.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_44;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_45;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_47_47;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_50_50;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_53_53;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_56_56;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_57_57;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66;
#line 376 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_67_67;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_70_70;
#line 376 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71;
#line 376 "add_pragma_type_spec.m"
    MR_String hlds__make_hlds__add_pragma__add_pragma_type_spec__V_72_72;
#line 448 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_67_67;

#line 377 "add_pragma_type_spec.m"
    {
#line 377 "add_pragma_type_spec.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_10);
    }
#line 2369 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 437 "add_pragma_type_spec.m"
    {
#line 437 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_42 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6);
    }
#line 438 "add_pragma_type_spec.m"
    {
#line 438 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_43 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6);
    }
#line 439 "add_pragma_type_spec.m"
    {
#line 439 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_44 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6);
    }
#line 440 "add_pragma_type_spec.m"
    {
#line 440 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_45 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo_6);
    }
#line 441 "add_pragma_type_spec.m"
    {
#line 441 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Module_42));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_47_47, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Name_43));
#line 441 "add_pragma_type_spec.m"
    }
#line 441 "add_pragma_type_spec.m"
    {
#line 441 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_45));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_47_47));
#line 441 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_44));
#line 441 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SimpleCallId_46));
#line 443 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_56_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_57_57));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[13])));
#line 443 "add_pragma_type_spec.m"
    }
#line 443 "add_pragma_type_spec.m"
    {
#line 443 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_53_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[17])));
#line 443 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_56_56));
#line 443 "add_pragma_type_spec.m"
    }
#line 442 "add_pragma_type_spec.m"
    {
#line 442 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_50_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[16])));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_53_53));
#line 442 "add_pragma_type_spec.m"
    }
#line 442 "add_pragma_type_spec.m"
    {
#line 442 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_16_16, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[15])));
#line 442 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_50_50));
#line 442 "add_pragma_type_spec.m"
    }
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_67_67 = parse_tree__error_util__choose_number_3_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_8, ((MR_Box) ((MR_String) "variable")), ((MR_Box) ((MR_String) "variables")));
    }
#line 448 "add_pragma_type_spec.m"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__V_67_67 = ((MR_String) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_V_67_67);
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_67_67));
#line 448 "add_pragma_type_spec.m"
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_72_72 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_10, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_8);
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_72_72));
#line 449 "add_pragma_type_spec.m"
    }
#line 449 "add_pragma_type_spec.m"
    {
#line 449 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_71_71));
#line 449 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "add_pragma_type_spec.m"
    }
#line 448 "add_pragma_type_spec.m"
    {
#line 448 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66));
#line 448 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_70_70));
#line 448 "add_pragma_type_spec.m"
    }
#line 381 "add_pragma_type_spec.m"
    {
#line 381 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_26_26, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[19]));
    }
#line 380 "add_pragma_type_spec.m"
    {
#line 380 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_39_39, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[10]), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_25_25);
    }
#line 378 "add_pragma_type_spec.m"
    {
#line 378 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_11 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_39_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_16_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_17_17);
    }
#line 382 "add_pragma_type_spec.m"
    {
#line 382 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 382 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Pieces_11));
#line 382 "add_pragma_type_spec.m"
    }
#line 382 "add_pragma_type_spec.m"
    {
#line 382 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_32_32));
#line 382 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 382 "add_pragma_type_spec.m"
    }
#line 382 "add_pragma_type_spec.m"
    {
#line 382 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 382 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_12, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_7));
#line 382 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_12, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_31_31));
#line 382 "add_pragma_type_spec.m"
    }
#line 383 "add_pragma_type_spec.m"
    {
#line 383 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Msg_12));
#line 383 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 383 "add_pragma_type_spec.m"
    }
#line 383 "add_pragma_type_spec.m"
    {
#line 383 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 383 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 383 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 383 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36));
#line 383 "add_pragma_type_spec.m"
    }
#line 384 "add_pragma_type_spec.m"
    {
#line 384 "add_pragma_type_spec.m"
      MR_Word base;
#line 384 "add_pragma_type_spec.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "add_pragma_type_spec.m"
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_15 = base;
#line 384 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Spec_13));
#line 384 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_14));
#line 384 "add_pragma_type_spec.m"
    }
#line 376 "add_pragma_type_spec.m"
  }
#line 373 "add_pragma_type_spec.m"
}

#line 362 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(
#line 362 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_T_7,
#line 362 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1,
#line 362 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2)
#line 362 "add_pragma_type_spec.m"
{
#line 364 "add_pragma_type_spec.m"
  {
#line 364 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;

#line 364 "add_pragma_type_spec.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "add_pragma_type_spec.m"
      *hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 364 "add_pragma_type_spec.m"
    else
#line 365 "add_pragma_type_spec.m"
      {
#line 365 "add_pragma_type_spec.m"
        MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__H_3 = (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 0));
#line 365 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 1)));
#line 365 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__DupVars0_6;

#line 366 "add_pragma_type_spec.m"
        {
#line 366 "add_pragma_type_spec.m"
          hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_T_7, hlds__make_hlds__add_pragma__add_pragma_type_spec__T_4, &hlds__make_hlds__add_pragma__add_pragma_type_spec__DupVars0_6);
        }
#line 367 "add_pragma_type_spec.m"
        {
#line 367 "add_pragma_type_spec.m"
          hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_T_7, hlds__make_hlds__add_pragma__add_pragma_type_spec__H_3, hlds__make_hlds__add_pragma__add_pragma_type_spec__T_4);
        }
#line 369 "add_pragma_type_spec.m"
        if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
#line 368 "add_pragma_type_spec.m"
          {
#line 368 "add_pragma_type_spec.m"
            MR_Word base;
#line 368 "add_pragma_type_spec.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2 = base;
#line 368 "add_pragma_type_spec.m"
            MR_hl_field(MR_mktag(1), base, 0) = hlds__make_hlds__add_pragma__add_pragma_type_spec__H_3;
#line 368 "add_pragma_type_spec.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__DupVars0_6));
#line 368 "add_pragma_type_spec.m"
          }
#line 369 "add_pragma_type_spec.m"
        else
#line 370 "add_pragma_type_spec.m"
          *hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_type_spec__DupVars0_6;
#line 365 "add_pragma_type_spec.m"
      }
#line 364 "add_pragma_type_spec.m"
  }
#line 362 "add_pragma_type_spec.m"
}

#line 356 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__map_set_from_pair_3_p_0(
#line 356 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_K_10,
#line 356 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_V_11,
#line 356 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1,
#line 356 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_0_7,
#line 356 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_8)
#line 356 "add_pragma_type_spec.m"
{
#line 359 "add_pragma_type_spec.m"
  {
#line 359 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 359 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__K_4 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 0));
#line 359 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__V_5 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 1));

#line 360 "add_pragma_type_spec.m"
    {
#line 360 "add_pragma_type_spec.m"
      mercury__map__set_4_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_K_10, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_for_V_11, hlds__make_hlds__add_pragma__add_pragma_type_spec__K_4, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_5, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_0_7, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Map_8);
#line 360 "add_pragma_type_spec.m"
      return;
    }
#line 359 "add_pragma_type_spec.m"
  }
#line 356 "add_pragma_type_spec.m"
}

#line 315 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_3(
#line 315 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 315 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
#line 315 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2,
#line 315 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3)
#line 315 "add_pragma_type_spec.m"
{
#line 315 "add_pragma_type_spec.m"
  {
#line 315 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
#line 315 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_HeadVar__3_98;

#line 315 "add_pragma_type_spec.m"
    {
#line 315 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__315__1_3_p_0(((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_HeadVar__3_98);
    }
#line 315 "add_pragma_type_spec.m"
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_HeadVar__3_98));
#line 315 "add_pragma_type_spec.m"
  }
#line 315 "add_pragma_type_spec.m"
}

#line 305 "add_pragma_type_spec.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2(
#line 305 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 305 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1)
#line 305 "add_pragma_type_spec.m"
{
#line 305 "add_pragma_type_spec.m"
  {
#line 305 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 305 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;

#line 305 "add_pragma_type_spec.m"
    {
#line 305 "add_pragma_type_spec.m"
      return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__305__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1));
    }
#line 305 "add_pragma_type_spec.m"
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 305 "add_pragma_type_spec.m"
  }
#line 305 "add_pragma_type_spec.m"
}

#line 275 "add_pragma_type_spec.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1(
#line 275 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 275 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1)
#line 275 "add_pragma_type_spec.m"
{
#line 275 "add_pragma_type_spec.m"
  {
#line 275 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 275 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;

#line 275 "add_pragma_type_spec.m"
    {
#line 275 "add_pragma_type_spec.m"
      return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__handle_pragma_type_spec_subst__275__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1));
    }
#line 275 "add_pragma_type_spec.m"
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 275 "add_pragma_type_spec.m"
  }
#line 275 "add_pragma_type_spec.m"
}

#line 246 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0(
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14,
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_15,
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16,
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22,
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_62,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_63,
#line 246 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64,
#line 246 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65)
#line 246 "add_pragma_type_spec.m"
{
#line 253 "add_pragma_type_spec.m"
  {
#line 253 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 253 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1];
#line 253 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_89_89 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 253 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25;

#line 254 "add_pragma_type_spec.m"
    {
#line 254 "add_pragma_type_spec.m"
      mercury__assoc_list__keys_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_89_89, hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_15, &hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25);
    }
#line 258 "add_pragma_type_spec.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "add_pragma_type_spec.m"
      {
#line 257 "add_pragma_type_spec.m"
        {
#line 257 "add_pragma_type_spec.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_pragma.add_pragma_type_spec", (MR_String) "predicate \140hlds.make_hlds.add_pragma.add_pragma_type_spec.handle_pragma_type_spec_subst\'/13", (MR_String) "empty substitution");
#line 257 "add_pragma_type_spec.m"
          return;
        }
#line 256 "add_pragma_type_spec.m"
      }
#line 258 "add_pragma_type_spec.m"
    else
#line 259 "add_pragma_type_spec.m"
      {
#line 259 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars0_28;

#line 260 "add_pragma_type_spec.m"
        {
#line 260 "add_pragma_type_spec.m"
          hlds__make_hlds__add_pragma__add_pragma_type_spec__find_duplicate_list_elements_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars0_28);
        }
#line 271 "add_pragma_type_spec.m"
        if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars0_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "add_pragma_type_spec.m"
          {
#line 272 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_91_91;
#line 272 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__CalledTVarSet_32;
#line 272 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33;
#line 272 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVarsToSub_36;
#line 272 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66;

#line 273 "add_pragma_type_spec.m"
            {
#line 273 "add_pragma_type_spec.m"
              hlds__hlds_pred__pred_info_get_typevarset_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, &hlds__make_hlds__add_pragma__add_pragma_type_spec__CalledTVarSet_32);
            }
#line 2883 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_91_91 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0;
#line 274 "add_pragma_type_spec.m"
            {
#line 274 "add_pragma_type_spec.m"
              mercury__varset__create_name_var_map_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_91_91, hlds__make_hlds__add_pragma__add_pragma_type_spec__CalledTVarSet_32, &hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33);
            }
#line 275 "add_pragma_type_spec.m"
            {
#line 275 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 275 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[1]));
#line 275 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_1));
#line 275 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 275 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17));
#line 275 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33));
#line 275 "add_pragma_type_spec.m"
            }
#line 275 "add_pragma_type_spec.m"
            {
#line 275 "add_pragma_type_spec.m"
              mercury__list__filter_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_66_66, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVarsToSub_36);
            }
#line 343 "add_pragma_type_spec.m"
            if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVarsToSub_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 280 "add_pragma_type_spec.m"
              {
#line 280 "add_pragma_type_spec.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSubSet_37;
#line 280 "add_pragma_type_spec.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes0_38;
#line 280 "add_pragma_type_spec.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes0_39;
#line 280 "add_pragma_type_spec.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes_40;
#line 280 "add_pragma_type_spec.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars0_41;
#line 280 "add_pragma_type_spec.m"
                MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars_42;

#line 282 "add_pragma_type_spec.m"
                {
#line 282 "add_pragma_type_spec.m"
                  mercury__set__list_to_set_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSubSet_37);
                }
#line 284 "add_pragma_type_spec.m"
                {
#line 284 "add_pragma_type_spec.m"
                  mercury__assoc_list__values_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_89_89, hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_15, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes0_38);
                }
#line 285 "add_pragma_type_spec.m"
                {
#line 285 "add_pragma_type_spec.m"
                  parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes0_38, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes0_39);
                }
#line 286 "add_pragma_type_spec.m"
                {
#line 286 "add_pragma_type_spec.m"
                  mercury__set__list_to_set_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes0_39, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes_40);
                }
#line 288 "add_pragma_type_spec.m"
                {
#line 288 "add_pragma_type_spec.m"
                  mercury__set__intersect_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes_40, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSubSet_37, &hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars0_41);
                }
#line 289 "add_pragma_type_spec.m"
                {
#line 289 "add_pragma_type_spec.m"
                  mercury__set__to_sorted_list_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars0_41, &hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars_42);
                }
#line 333 "add_pragma_type_spec.m"
                if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "add_pragma_type_spec.m"
                  {
#line 292 "add_pragma_type_spec.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming0_43;
#line 292 "add_pragma_type_spec.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToReplace_44;
#line 292 "add_pragma_type_spec.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming_46;
#line 292 "add_pragma_type_spec.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedVarsToSub_47;
#line 292 "add_pragma_type_spec.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_49;
#line 292 "add_pragma_type_spec.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_74_74;
#line 296 "add_pragma_type_spec.m"
                    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_45_45;

#line 293 "add_pragma_type_spec.m"
                    {
#line 293 "add_pragma_type_spec.m"
                      mercury__map__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming0_43);
                    }
#line 294 "add_pragma_type_spec.m"
                    {
#line 294 "add_pragma_type_spec.m"
                      mercury__list__append_3_p_1(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarsInSubstTypes0_39, &hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToReplace_44);
                    }
#line 296 "add_pragma_type_spec.m"
                    {
#line 296 "add_pragma_type_spec.m"
                      parse_tree__prog_util__get_new_tvars_8_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToReplace_44, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__CalledTVarSet_32, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18, hlds__make_hlds__add_pragma__add_pragma_type_spec__NameVarIndex0_33, &hlds__make_hlds__add_pragma__add_pragma_type_spec__V_45_45, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming0_43, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming_46);
                    }
#line 302 "add_pragma_type_spec.m"
                    {
#line 302 "add_pragma_type_spec.m"
                      mercury__map__apply_to_list_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarsToSub_25, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming_46, &hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedVarsToSub_47);
                    }
#line 304 "add_pragma_type_spec.m"
                    {
#line 304 "add_pragma_type_spec.m"
                      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20);
                    }
#line 305 "add_pragma_type_spec.m"
                    {
#line 305 "add_pragma_type_spec.m"
                      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 305 "add_pragma_type_spec.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_74_74, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_4[2]));
#line 305 "add_pragma_type_spec.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0_2));
#line 305 "add_pragma_type_spec.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 305 "add_pragma_type_spec.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_74_74, 3) = ((MR_Box) (*hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20));
#line 305 "add_pragma_type_spec.m"
                    }
#line 305 "add_pragma_type_spec.m"
                    {
#line 305 "add_pragma_type_spec.m"
                      mercury__list__filter_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_74_74, hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedVarsToSub_47, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_49);
                    }
#line 325 "add_pragma_type_spec.m"
                    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "add_pragma_type_spec.m"
                      {
#line 309 "add_pragma_type_spec.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst0_50;
#line 309 "add_pragma_type_spec.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes_51;
#line 309 "add_pragma_type_spec.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubAL_52;
#line 309 "add_pragma_type_spec.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst_53;
#line 309 "add_pragma_type_spec.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Types0_54;
#line 309 "add_pragma_type_spec.m"
                        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext0_55;
#line 315 "add_pragma_type_spec.m"
                        MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_TypeSubst_53;

#line 310 "add_pragma_type_spec.m"
                        {
#line 310 "add_pragma_type_spec.m"
                          mercury__map__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_89_89, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst0_50);
                        }
#line 311 "add_pragma_type_spec.m"
                        {
#line 311 "add_pragma_type_spec.m"
                          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarRenaming_46, hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes0_38, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes_51);
                        }
#line 313 "add_pragma_type_spec.m"
                        {
#line 313 "add_pragma_type_spec.m"
                          mercury__assoc_list__from_corresponding_lists_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_89_89, hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedVarsToSub_47, hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstTypes_51, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SubAL_52);
                        }
#line 315 "add_pragma_type_spec.m"
                        {
#line 315 "add_pragma_type_spec.m"
                          mercury__list__foldl_4_p_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[2], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[5], hlds__make_hlds__add_pragma__add_pragma_type_spec__SubAL_52, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst0_50)), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_TypeSubst_53);
                        }
#line 315 "add_pragma_type_spec.m"
                        hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst_53 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_TypeSubst_53);
#line 319 "add_pragma_type_spec.m"
                        {
#line 319 "add_pragma_type_spec.m"
                          hlds__hlds_pred__pred_info_get_arg_types_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Types0_54);
                        }
#line 320 "add_pragma_type_spec.m"
                        {
#line 320 "add_pragma_type_spec.m"
                          hlds__hlds_pred__pred_info_get_class_context_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext0_55);
                        }
#line 321 "add_pragma_type_spec.m"
                        {
#line 321 "add_pragma_type_spec.m"
                          parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst_53, hlds__make_hlds__add_pragma__add_pragma_type_spec__Types0_54, hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19);
                        }
#line 322 "add_pragma_type_spec.m"
                        {
#line 322 "add_pragma_type_spec.m"
                          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraints_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst_53, hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext0_55, hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21);
                        }
#line 324 "add_pragma_type_spec.m"
                        {
#line 324 "add_pragma_type_spec.m"
                          MR_Word base;
#line 324 "add_pragma_type_spec.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 324 "add_pragma_type_spec.m"
                          *hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22 = base;
#line 324 "add_pragma_type_spec.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSubst_53));
#line 324 "add_pragma_type_spec.m"
                        }
#line 309 "add_pragma_type_spec.m"
                        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64;
#line 309 "add_pragma_type_spec.m"
                      }
#line 325 "add_pragma_type_spec.m"
                    else
#line 326 "add_pragma_type_spec.m"
                      {
#line 327 "add_pragma_type_spec.m"
                        {
#line 327 "add_pragma_type_spec.m"
                          hlds__make_hlds__add_pragma__add_pragma_type_spec__report_subst_existq_tvars_5_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__SubExistQVars_49, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65);
                        }
#line 329 "add_pragma_type_spec.m"
                        *hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 330 "add_pragma_type_spec.m"
                        *hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14];
#line 331 "add_pragma_type_spec.m"
                        *hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "add_pragma_type_spec.m"
                      }
#line 292 "add_pragma_type_spec.m"
                  }
#line 333 "add_pragma_type_spec.m"
                else
#line 334 "add_pragma_type_spec.m"
                  {
#line 335 "add_pragma_type_spec.m"
                    {
#line 335 "add_pragma_type_spec.m"
                      hlds__make_hlds__add_pragma__add_pragma_type_spec__report_recursive_subst_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__RecSubstTVars_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65);
                    }
#line 337 "add_pragma_type_spec.m"
                    *hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "add_pragma_type_spec.m"
                    *hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 339 "add_pragma_type_spec.m"
                    *hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14];
#line 340 "add_pragma_type_spec.m"
                    {
#line 340 "add_pragma_type_spec.m"
                      mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_91_91, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18);
                    }
#line 341 "add_pragma_type_spec.m"
                    *hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 334 "add_pragma_type_spec.m"
                  }
#line 280 "add_pragma_type_spec.m"
              }
#line 343 "add_pragma_type_spec.m"
            else
#line 344 "add_pragma_type_spec.m"
              {
#line 345 "add_pragma_type_spec.m"
                {
#line 345 "add_pragma_type_spec.m"
                  hlds__make_hlds__add_pragma__add_pragma_type_spec__report_unknown_vars_to_subst_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__UnknownVarsToSub_36, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65);
                }
#line 347 "add_pragma_type_spec.m"
                *hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "add_pragma_type_spec.m"
                *hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 349 "add_pragma_type_spec.m"
                *hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14];
#line 350 "add_pragma_type_spec.m"
                {
#line 350 "add_pragma_type_spec.m"
                  mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_91_91, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18);
                }
#line 351 "add_pragma_type_spec.m"
                *hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 344 "add_pragma_type_spec.m"
              }
#line 272 "add_pragma_type_spec.m"
          }
#line 271 "add_pragma_type_spec.m"
        else
#line 262 "add_pragma_type_spec.m"
          {
#line 262 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_31;

#line 263 "add_pragma_type_spec.m"
            {
#line 263 "add_pragma_type_spec.m"
              mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_88_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars0_28, &hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_31);
            }
#line 264 "add_pragma_type_spec.m"
            {
#line 264 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__report_multiple_subst_vars_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__MultiSubstVars_31, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_65);
            }
#line 266 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 267 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 268 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_21 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[14];
#line 269 "add_pragma_type_spec.m"
            {
#line 269 "add_pragma_type_spec.m"
              mercury__varset__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_18);
            }
#line 270 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 262 "add_pragma_type_spec.m"
          }
#line 259 "add_pragma_type_spec.m"
      }
#line 253 "add_pragma_type_spec.m"
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_63 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_62;
#line 253 "add_pragma_type_spec.m"
  }
#line 246 "add_pragma_type_spec.m"
}

#line 233 "add_pragma_type_spec.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(
#line 233 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1)
#line 233 "add_pragma_type_spec.m"
{
#line 235 "add_pragma_type_spec.m"
  {
#line 235 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 235 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2;
#line 235 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVar_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Type_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__1_1, (MR_Integer) 1)));
#line 235 "add_pragma_type_spec.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__V_5_5;

#line 235 "add_pragma_type_spec.m"
    {
#line 235 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__V_5_5 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVar_3);
    }
#line 235 "add_pragma_type_spec.m"
    {
#line 235 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 235 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_5_5));
#line 235 "add_pragma_type_spec.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Type_4));
#line 235 "add_pragma_type_spec.m"
    }
#line 235 "add_pragma_type_spec.m"
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__HeadVar__2_2;
#line 235 "add_pragma_type_spec.m"
  }
#line 233 "add_pragma_type_spec.m"
}

#line 219 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_4(
#line 219 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 219 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
#line 219 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2)
#line 219 "add_pragma_type_spec.m"
{
#line 219 "add_pragma_type_spec.m"
  {
#line 219 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
#line 219 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_HeadVar__4_4;

#line 219 "add_pragma_type_spec.m"
    {
#line 219 "add_pragma_type_spec.m"
      recompilation__record_expanded_items_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_HeadVar__4_4);
    }
#line 219 "add_pragma_type_spec.m"
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_HeadVar__4_4));
#line 219 "add_pragma_type_spec.m"
  }
#line 219 "add_pragma_type_spec.m"
}

#line 192 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_3(
#line 192 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 192 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
#line 192 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2)
#line 192 "add_pragma_type_spec.m"
{
#line 192 "add_pragma_type_spec.m"
  {
#line 192 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
#line 192 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_HeadVar__3_116;

#line 192 "add_pragma_type_spec.m"
    {
#line 192 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__IntroducedFrom__pred__add_pragma_type_spec_for_pred__193__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 3))), ((MR_Integer) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_HeadVar__3_116);
    }
#line 192 "add_pragma_type_spec.m"
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_HeadVar__3_116));
#line 192 "add_pragma_type_spec.m"
  }
#line 192 "add_pragma_type_spec.m"
}

#line 174 "add_pragma_type_spec.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_2(
#line 174 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 174 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1)
#line 174 "add_pragma_type_spec.m"
{
#line 174 "add_pragma_type_spec.m"
  {
#line 174 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2;
#line 174 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
#line 174 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_HeadVar__2_2;

#line 174 "add_pragma_type_spec.m"
    {
#line 174 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_HeadVar__2_2 = hlds__make_hlds__add_pragma__add_pragma_type_spec__subst_desc_1_f_0(((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1));
    }
#line 174 "add_pragma_type_spec.m"
    hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_HeadVar__2_2));
#line 174 "add_pragma_type_spec.m"
    return hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2;
#line 174 "add_pragma_type_spec.m"
  }
#line 174 "add_pragma_type_spec.m"
}

#line 98 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_1(
#line 98 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 98 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
#line 98 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2)
#line 98 "add_pragma_type_spec.m"
{
#line 98 "add_pragma_type_spec.m"
  {
#line 98 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
#line 98 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_ProcInfo_5;

#line 98 "add_pragma_type_spec.m"
    {
#line 98 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__reset_imported_structure_sharing_reuse_2_p_0(((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_ProcInfo_5);
    }
#line 98 "add_pragma_type_spec.m"
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_ProcInfo_5));
#line 98 "add_pragma_type_spec.m"
  }
#line 98 "add_pragma_type_spec.m"
}

#line 78 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10,
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11,
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12,
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_88,
#line 78 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_89,
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_90,
#line 78 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_91,
#line 78 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_92,
#line 78 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_93)
#line 78 "add_pragma_type_spec.m"
{
#line 84 "add_pragma_type_spec.m"
  {
#line 84 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 0)));
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 1)));
#line 84 "add_pragma_type_spec.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 2)));
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 4)));
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 5)));
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 6)));
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ExpandedItems_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 7)));
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24;
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_25;
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_26;
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_27;
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_28;
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_29;
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_94_94;
#line 84 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_95_95;
#line 85 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo0_10, (MR_Integer) 3)));

#line 87 "add_pragma_type_spec.m"
    {
#line 87 "add_pragma_type_spec.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_88, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24);
    }
#line 88 "add_pragma_type_spec.m"
    {
#line 88 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_subst_13_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11, hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_21, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet0_22, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_25, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_26, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_27, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_28, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_29, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_88, &hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_94_94, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_92, &hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_95_95);
    }
#line 229 "add_pragma_type_spec.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "add_pragma_type_spec.m"
      {
#line 230 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_89 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_94_94;
#line 230 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_91 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_90;
#line 230 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_93 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_95_95;
#line 230 "add_pragma_type_spec.m"
      }
#line 229 "add_pragma_type_spec.m"
    else
#line 92 "add_pragma_type_spec.m"
      {
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_128_128;
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_129_129;
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedSubst_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstOk_29, (MR_Integer) 0)));
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs0_31;
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_32;
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs1_33;
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs_34;
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Globals_35;
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__DoTypeSpec_36;
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Smart_37;
#line 92 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_96_96;
#line 226 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_38;

#line 93 "add_pragma_type_spec.m"
        {
#line 93 "add_pragma_type_spec.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs0_31);
        }
#line 94 "add_pragma_type_spec.m"
        {
#line 94 "add_pragma_type_spec.m"
          hlds__make_hlds__add_pragma__add_pragma_type_spec__handle_pragma_type_spec_modes_11_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_18, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11, hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_20, &hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_32, hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs0_31, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs1_33, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_94_94, &hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_96_96, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_95_95, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_93);
        }
#line 3495 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
        hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_128_128 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 3497 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
        hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_129_129 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 98 "add_pragma_type_spec.m"
        {
#line 98 "add_pragma_type_spec.m"
          mercury__map__map_values_only_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_128_128, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_128_128, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_129_129, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[3], hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs1_33, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs_34);
        }
#line 100 "add_pragma_type_spec.m"
        {
#line 100 "add_pragma_type_spec.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_96_96, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Globals_35);
        }
#line 101 "add_pragma_type_spec.m"
        {
#line 101 "add_pragma_type_spec.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Globals_35, (MR_Integer) 363, &hlds__make_hlds__add_pragma__add_pragma_type_spec__DoTypeSpec_36);
        }
#line 103 "add_pragma_type_spec.m"
        {
#line 103 "add_pragma_type_spec.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Globals_35, (MR_Integer) 116, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Smart_37);
        }
#line 106 "add_pragma_type_spec.m"
        hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_32)) == (MR_mktag((MR_Integer) 1)));
#line 106 "add_pragma_type_spec.m"
        if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
#line 106 "add_pragma_type_spec.m"
          {
#line 106 "add_pragma_type_spec.m"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeProcIds_32, (MR_Integer) 0)));
#line 116 "add_pragma_type_spec.m"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = (hlds__make_hlds__add_pragma__add_pragma_type_spec__DoTypeSpec_36 == (MR_Integer) 1);
#line 117 "add_pragma_type_spec.m"
            if (!(hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded))
#line 117 "add_pragma_type_spec.m"
              {
#line 117 "add_pragma_type_spec.m"
                {
#line 117 "add_pragma_type_spec.m"
                  hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24);
                }
#line 117 "add_pragma_type_spec.m"
                hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = !(hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded);
#line 117 "add_pragma_type_spec.m"
                if (!(hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded))
#line 118 "add_pragma_type_spec.m"
                  hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = (hlds__make_hlds__add_pragma__add_pragma_type_spec__Smart_37 == (MR_Integer) 1);
#line 117 "add_pragma_type_spec.m"
              }
#line 106 "add_pragma_type_spec.m"
          }
#line 226 "add_pragma_type_spec.m"
        if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
#line 125 "add_pragma_type_spec.m"
          {
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_130_130;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_132_132;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_134_134;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_141_141;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_142_142;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39;
#line 125 "add_pragma_type_spec.m"
            MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_40;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet0_41;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Args_42;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet_43;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__VarTypes0_44;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo0_45;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NonLocals_46;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo1_47;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo_48;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Goal_49;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarNameMap_51;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgsVec_52;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ClausesRep_53;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__RttiVarMaps_54;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers0_57;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers_58;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Proofs_59;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ConstraintMap_60;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Status_61;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ModuleName_62;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__OrigOrigin_63;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstDesc_64;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_65;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__VarNameRemap_66;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo0_67;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo_68;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable0_69;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredId_70;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable_71;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_72;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec0_73;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions0_74;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap0_75;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap0_76;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredProcIds_79;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec_80;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions_81;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap_82;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap_84;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_85;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__IsImported_86;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_102_102;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_105_105;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_108_108;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_111_111;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_113_113;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_114_114;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_117_117;
#line 125 "add_pragma_type_spec.m"
            MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_118_118;

#line 125 "add_pragma_type_spec.m"
            {
#line 125 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24);
            }
#line 126 "add_pragma_type_spec.m"
            {
#line 126 "add_pragma_type_spec.m"
              parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_18, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_40);
            }
#line 3679 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_130_130 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 127 "add_pragma_type_spec.m"
            {
#line 127 "add_pragma_type_spec.m"
              mercury__varset__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_130_130, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet0_41);
            }
#line 128 "add_pragma_type_spec.m"
            {
#line 128 "add_pragma_type_spec.m"
              parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_130_130, (MR_String) "HeadVar__", hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_40, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Args_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet0_41, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet_43);
            }
#line 137 "add_pragma_type_spec.m"
            {
#line 137 "add_pragma_type_spec.m"
              hlds__vartypes__init_vartypes_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_type_spec__VarTypes0_44);
            }
#line 138 "add_pragma_type_spec.m"
            {
#line 138 "add_pragma_type_spec.m"
              hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo0_45);
            }
#line 139 "add_pragma_type_spec.m"
            {
#line 139 "add_pragma_type_spec.m"
              parse_tree__set_of_var__list_to_set_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_130_130, hlds__make_hlds__add_pragma__add_pragma_type_spec__Args_42, &hlds__make_hlds__add_pragma__add_pragma_type_spec__NonLocals_46);
            }
#line 140 "add_pragma_type_spec.m"
            {
#line 140 "add_pragma_type_spec.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__NonLocals_46, hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo0_45, &hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo1_47);
            }
#line 141 "add_pragma_type_spec.m"
            {
#line 141 "add_pragma_type_spec.m"
              hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11, hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo1_47, &hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo_48);
            }
#line 148 "add_pragma_type_spec.m"
            {
#line 148 "add_pragma_type_spec.m"
              hlds__make_hlds__qual_info__do_construct_pred_or_func_call_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Args_42, hlds__make_hlds__add_pragma__add_pragma_type_spec__GoalInfo_48, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Goal_49);
            }
#line 150 "add_pragma_type_spec.m"
            {
#line 150 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 150 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_102_102, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_38));
#line 150 "add_pragma_type_spec.m"
            }
#line 150 "add_pragma_type_spec.m"
            {
#line 150 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 150 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_102_102));
#line 150 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Goal_49));
#line 150 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11));
#line 150 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "add_pragma_type_spec.m"
            }
#line 3745 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_132_132 = (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[1];
#line 152 "add_pragma_type_spec.m"
            {
#line 152 "add_pragma_type_spec.m"
              mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_132_132, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarNameMap_51);
            }
#line 153 "add_pragma_type_spec.m"
            {
#line 153 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgsVec_52 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[2], hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__Args_42);
            }
#line 154 "add_pragma_type_spec.m"
            {
#line 154 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 154 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_105_105, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Clause_50));
#line 154 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_105_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 154 "add_pragma_type_spec.m"
            }
#line 154 "add_pragma_type_spec.m"
            {
#line 154 "add_pragma_type_spec.m"
              hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__V_105_105, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ClausesRep_53);
            }
#line 155 "add_pragma_type_spec.m"
            {
#line 155 "add_pragma_type_spec.m"
              hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_pragma__add_pragma_type_spec__RttiVarMaps_54);
            }
#line 159 "add_pragma_type_spec.m"
            {
#line 159 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__V_108_108 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
            }
#line 157 "add_pragma_type_spec.m"
            {
#line 157 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 157 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgVarSet_43));
#line 157 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__VarTypes0_44));
#line 157 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarNameMap_51));
#line 157 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__VarTypes0_44));
#line 157 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ArgsVec_52));
#line 157 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ClausesRep_53));
#line 157 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_108_108));
#line 157 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__RttiVarMaps_54));
#line 157 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56, 8) = ((MR_Box) ((MR_Integer) 0));
#line 157 "add_pragma_type_spec.m"
            }
#line 161 "add_pragma_type_spec.m"
            {
#line 161 "add_pragma_type_spec.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers0_57);
            }
#line 162 "add_pragma_type_spec.m"
            {
#line 162 "add_pragma_type_spec.m"
              hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 20, hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers0_57, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers_58);
            }
#line 3816 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 163 "add_pragma_type_spec.m"
            {
#line 163 "add_pragma_type_spec.m"
              mercury__map__init_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_134_134, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Proofs_59);
            }
#line 164 "add_pragma_type_spec.m"
            {
#line 164 "add_pragma_type_spec.m"
              mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_134_134, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ConstraintMap_60);
            }
#line 166 "add_pragma_type_spec.m"
            {
#line 166 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24);
            }
#line 168 "add_pragma_type_spec.m"
            if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
#line 167 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Status_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 168 "add_pragma_type_spec.m"
            else
#line 169 "add_pragma_type_spec.m"
              {
#line 169 "add_pragma_type_spec.m"
                hlds__hlds_pred__pred_info_get_import_status_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Status_61);
              }
#line 172 "add_pragma_type_spec.m"
            {
#line 172 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__ModuleName_62 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24);
            }
#line 173 "add_pragma_type_spec.m"
            {
#line 173 "add_pragma_type_spec.m"
              hlds__hlds_pred__pred_info_get_origin_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__OrigOrigin_63);
            }
#line 174 "add_pragma_type_spec.m"
            {
#line 174 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstDesc_64 = mercury__list__map_2_f_0((MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[0], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_2[4], hlds__make_hlds__add_pragma__add_pragma_type_spec__Subst_21);
            }
#line 176 "add_pragma_type_spec.m"
            {
#line 176 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__V_111_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_111_111, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 176 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_111_111, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SubstDesc_64));
#line 176 "add_pragma_type_spec.m"
            }
#line 175 "add_pragma_type_spec.m"
            {
#line 175 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 175 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_65, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_111_111));
#line 175 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_65, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__OrigOrigin_63));
#line 175 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_65, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12));
#line 175 "add_pragma_type_spec.m"
            }
#line 177 "add_pragma_type_spec.m"
            {
#line 177 "add_pragma_type_spec.m"
              hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredInfo0_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__VarNameRemap_66);
            }
#line 178 "add_pragma_type_spec.m"
            {
#line 178 "add_pragma_type_spec.m"
              hlds__hlds_pred__pred_info_init_18_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__ModuleName_62, hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecName_17, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_40, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_11, hlds__make_hlds__add_pragma__add_pragma_type_spec__Origin_65, hlds__make_hlds__add_pragma__add_pragma_type_spec__Status_61, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_pragma__add_pragma_type_spec__Markers_58, hlds__make_hlds__add_pragma__add_pragma_type_spec__Types_26, hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_25, hlds__make_hlds__add_pragma__add_pragma_type_spec__ExistQVars_27, hlds__make_hlds__add_pragma__add_pragma_type_spec__ClassContext_28, hlds__make_hlds__add_pragma__add_pragma_type_spec__Proofs_59, hlds__make_hlds__add_pragma__add_pragma_type_spec__ConstraintMap_60, hlds__make_hlds__add_pragma__add_pragma_type_spec__Clauses_56, hlds__make_hlds__add_pragma__add_pragma_type_spec__VarNameRemap_66, &hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo0_67);
            }
#line 182 "add_pragma_type_spec.m"
            {
#line 182 "add_pragma_type_spec.m"
              hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Procs_34, hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo0_67, &hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo_68);
            }
#line 183 "add_pragma_type_spec.m"
            {
#line 183 "add_pragma_type_spec.m"
              hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_96_96, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable0_69);
            }
#line 184 "add_pragma_type_spec.m"
            {
#line 184 "add_pragma_type_spec.m"
              hlds__pred_table__predicate_table_insert_4_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredInfo_68, &hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredId_70, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable0_69, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable_71);
            }
#line 186 "add_pragma_type_spec.m"
            {
#line 186 "add_pragma_type_spec.m"
              hlds__hlds_module__module_info_set_predicate_table_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredTable_71, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_96_96, &hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_113_113);
            }
#line 189 "add_pragma_type_spec.m"
            {
#line 189 "add_pragma_type_spec.m"
              hlds__hlds_module__module_info_get_type_spec_info_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_113_113, &hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_72);
            }
#line 190 "add_pragma_type_spec.m"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec0_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_72, (MR_Integer) 0)));
#line 190 "add_pragma_type_spec.m"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions0_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_72, (MR_Integer) 1)));
#line 190 "add_pragma_type_spec.m"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap0_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_72, (MR_Integer) 2)));
#line 190 "add_pragma_type_spec.m"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap0_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo0_72, (MR_Integer) 3)));
#line 192 "add_pragma_type_spec.m"
            {
#line 192 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 192 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_114_114, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_5[0]));
#line 192 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_114_114, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_3));
#line 192 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_114_114, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 192 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_114_114, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12));
#line 192 "add_pragma_type_spec.m"
            }
#line 3938 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_141_141 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 192 "add_pragma_type_spec.m"
            {
#line 192 "add_pragma_type_spec.m"
              mercury__list__map_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_129_129, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_141_141, hlds__make_hlds__add_pragma__add_pragma_type_spec__V_114_114, hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcIds_38, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredProcIds_79);
            }
#line 195 "add_pragma_type_spec.m"
            {
#line 195 "add_pragma_type_spec.m"
              mercury__set__insert_list_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_141_141, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredProcIds_79, hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec0_73, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec_80);
            }
#line 3950 "hlds.make_hlds.add_pragma.add_pragma_type_spec.c"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_142_142 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 196 "add_pragma_type_spec.m"
            {
#line 196 "add_pragma_type_spec.m"
              mercury__set__insert_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_142_142, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredId_70)), hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions0_74, &hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions_81);
            }
#line 198 "add_pragma_type_spec.m"
            hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded = (hlds__make_hlds__add_pragma__add_pragma_type_spec__Status_61 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 203 "add_pragma_type_spec.m"
            if (hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded)
#line 202 "add_pragma_type_spec.m"
              {
#line 202 "add_pragma_type_spec.m"
                mercury__multi_map__set_4_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_142_142, hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_142_142, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12)), ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__NewPredId_70)), hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap0_75, &hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap_82);
              }
#line 203 "add_pragma_type_spec.m"
            else
#line 204 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap_82 = hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap0_75;
#line 207 "add_pragma_type_spec.m"
            {
#line 207 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 207 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_117_117, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39));
#line 207 "add_pragma_type_spec.m"
            }
#line 207 "add_pragma_type_spec.m"
            {
#line 207 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__V_118_118 = mercury__map__to_assoc_list_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeInfo_132_132, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_pragma__add_pragma_type_spec__RenamedSubst_30);
            }
#line 206 "add_pragma_type_spec.m"
            {
#line 206 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 206 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_16));
#line 206 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecName_17));
#line 206 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_18));
#line 206 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_117_117));
#line 206 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybeModes_20));
#line 206 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83, 5) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_118_118));
#line 206 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83, 6) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TVarSet_25));
#line 206 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83, 7) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ExpandedItems_23));
#line 206 "add_pragma_type_spec.m"
            }
#line 209 "add_pragma_type_spec.m"
            {
#line 209 "add_pragma_type_spec.m"
              mercury__multi_map__set_4_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeCtorInfo_142_142, (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_type_spec_0, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PredId_12)), ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_83)), hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap0_76, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap_84);
            }
#line 210 "add_pragma_type_spec.m"
            {
#line 210 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 210 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_85, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ProcsToSpec_80));
#line 210 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_85, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ForceVersions_81));
#line 210 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_85, 2) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SpecMap_82));
#line 210 "add_pragma_type_spec.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_85, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__PragmaMap_84));
#line 210 "add_pragma_type_spec.m"
            }
#line 212 "add_pragma_type_spec.m"
            {
#line 212 "add_pragma_type_spec.m"
              hlds__hlds_module__module_info_set_type_spec_info_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__TypeSpecInfo_85, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_113_113, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_89);
            }
#line 214 "add_pragma_type_spec.m"
            {
#line 214 "add_pragma_type_spec.m"
              hlds__make_hlds__add_pragma__add_pragma_type_spec__IsImported_86 = parse_tree__status__status_is_imported_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Status_61);
            }
#line 223 "add_pragma_type_spec.m"
#line 223 "add_pragma_type_spec.m"
            switch (hlds__make_hlds__add_pragma__add_pragma_type_spec__IsImported_86) {
#line 223 "add_pragma_type_spec.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 223 "add_pragma_type_spec.m"
              case (MR_Integer) 0:
#line 224 "add_pragma_type_spec.m"
                *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_91 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_90;
#line 223 "add_pragma_type_spec.m"
                break;
#line 223 "add_pragma_type_spec.m"
              case (MR_Integer) 1:
#line 216 "add_pragma_type_spec.m"
                {
#line 216 "add_pragma_type_spec.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__ItemType_87;
#line 216 "add_pragma_type_spec.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_120_120;
#line 216 "add_pragma_type_spec.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_122_122;
#line 216 "add_pragma_type_spec.m"
                  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_123_123;

#line 217 "add_pragma_type_spec.m"
                  {
#line 217 "add_pragma_type_spec.m"
                    hlds__make_hlds__add_pragma__add_pragma_type_spec__ItemType_87 = recompilation__pred_or_func_to_item_type_1_f_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_39);
                  }
#line 220 "add_pragma_type_spec.m"
                  {
#line 220 "add_pragma_type_spec.m"
                    hlds__make_hlds__add_pragma__add_pragma_type_spec__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "add_pragma_type_spec.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_123_123, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_16));
#line 220 "add_pragma_type_spec.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_123_123, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_18));
#line 220 "add_pragma_type_spec.m"
                  }
#line 220 "add_pragma_type_spec.m"
                  {
#line 220 "add_pragma_type_spec.m"
                    hlds__make_hlds__add_pragma__add_pragma_type_spec__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "add_pragma_type_spec.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ItemType_87));
#line 220 "add_pragma_type_spec.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_122_122, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_123_123));
#line 220 "add_pragma_type_spec.m"
                  }
#line 219 "add_pragma_type_spec.m"
                  {
#line 219 "add_pragma_type_spec.m"
                    hlds__make_hlds__add_pragma__add_pragma_type_spec__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 219 "add_pragma_type_spec.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_120_120, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_6[0]));
#line 219 "add_pragma_type_spec.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_120_120, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0_4));
#line 219 "add_pragma_type_spec.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 219 "add_pragma_type_spec.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_120_120, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__V_122_122));
#line 219 "add_pragma_type_spec.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_120_120, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__ExpandedItems_23));
#line 219 "add_pragma_type_spec.m"
                  }
#line 218 "add_pragma_type_spec.m"
                  {
#line 218 "add_pragma_type_spec.m"
                    hlds__make_hlds__qual_info__apply_to_recompilation_info_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__V_120_120, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_90, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_91);
#line 218 "add_pragma_type_spec.m"
                    return;
                  }
#line 216 "add_pragma_type_spec.m"
                }
#line 223 "add_pragma_type_spec.m"
                break;
#line 223 "add_pragma_type_spec.m"
            }
#line 125 "add_pragma_type_spec.m"
          }
#line 226 "add_pragma_type_spec.m"
        else
#line 227 "add_pragma_type_spec.m"
          {
#line 227 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_91 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_90;
#line 227 "add_pragma_type_spec.m"
            *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_89 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_96_96;
#line 227 "add_pragma_type_spec.m"
          }
#line 92 "add_pragma_type_spec.m"
      }
#line 84 "add_pragma_type_spec.m"
  }
#line 78 "add_pragma_type_spec.m"
}

#line 74 "add_pragma_type_spec.m"
static void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1(
#line 74 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg,
#line 74 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1,
#line 74 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2,
#line 74 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3,
#line 74 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_4,
#line 74 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_5,
#line 74 "add_pragma_type_spec.m"
  MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_6,
#line 74 "add_pragma_type_spec.m"
  MR_Box * hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_7)
#line 74 "add_pragma_type_spec.m"
{
#line 74 "add_pragma_type_spec.m"
  {
#line 74 "add_pragma_type_spec.m"
    MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__closure = hlds__make_hlds__add_pragma__add_pragma_type_spec__closure_arg;
#line 74 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_STATE_VARIABLE_ModuleInfo_89;
#line 74 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_STATE_VARIABLE_QualInfo_91;
#line 74 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_Specs_93;

#line 74 "add_pragma_type_spec.m"
    {
#line 74 "add_pragma_type_spec.m"
      hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_for_pred_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_2), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_STATE_VARIABLE_ModuleInfo_89, ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_4), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_STATE_VARIABLE_QualInfo_91, ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_6), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_Specs_93);
    }
#line 74 "add_pragma_type_spec.m"
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv2_STATE_VARIABLE_ModuleInfo_89));
#line 74 "add_pragma_type_spec.m"
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv1_STATE_VARIABLE_QualInfo_91));
#line 74 "add_pragma_type_spec.m"
    *hlds__make_hlds__add_pragma__add_pragma_type_spec__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__conv0_STATE_VARIABLE_Specs_93));
#line 74 "add_pragma_type_spec.m"
  }
#line 74 "add_pragma_type_spec.m"
}

#line 18 "add_pragma_type_spec.m"
void MR_CALL 
hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0(
#line 18 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9,
#line 18 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_10,
#line 18 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_28,
#line 18 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_29,
#line 18 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_30,
#line 18 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_31,
#line 18 "add_pragma_type_spec.m"
  MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_32,
#line 18 "add_pragma_type_spec.m"
  MR_Word * hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_33)
#line 18 "add_pragma_type_spec.m"
{
#line 54 "add_pragma_type_spec.m"
  {
#line 54 "add_pragma_type_spec.m"
    MR_bool hlds__make_hlds__add_pragma__add_pragma_type_spec__succeeded;
#line 54 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 0)));
#line 54 "add_pragma_type_spec.m"
    MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 2)));
#line 54 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybePredOrFunc_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 3)));
#line 54 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__Preds_22;
#line 54 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredIds_25;
#line 55 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 1)));
#line 55 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 4)));
#line 55 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 5)));
#line 55 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 6)));
#line 55 "add_pragma_type_spec.m"
    MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9, (MR_Integer) 7)));

#line 57 "add_pragma_type_spec.m"
    {
#line 57 "add_pragma_type_spec.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_28, &hlds__make_hlds__add_pragma__add_pragma_type_spec__Preds_22);
    }
#line 63 "add_pragma_type_spec.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybePredOrFunc_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 64 "add_pragma_type_spec.m"
      {
#line 65 "add_pragma_type_spec.m"
        {
#line 65 "add_pragma_type_spec.m"
          hlds__pred_table__predicate_table_lookup_sym_arity_5_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Preds_22, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_16, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredIds_25);
        }
#line 64 "add_pragma_type_spec.m"
      }
#line 63 "add_pragma_type_spec.m"
    else
#line 59 "add_pragma_type_spec.m"
      {
#line 59 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_pragma__add_pragma_type_spec__MaybePredOrFunc_17, (MR_Integer) 0)));
#line 59 "add_pragma_type_spec.m"
        MR_Integer hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_24;

#line 60 "add_pragma_type_spec.m"
        {
#line 60 "add_pragma_type_spec.m"
          parse_tree__prog_util__adjust_func_arity_3_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_23, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_16, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_24);
        }
#line 61 "add_pragma_type_spec.m"
        {
#line 61 "add_pragma_type_spec.m"
          hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__Preds_22, (MR_Integer) 0, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredOrFunc_23, hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredArity_24, &hlds__make_hlds__add_pragma__add_pragma_type_spec__PredIds_25);
        }
#line 59 "add_pragma_type_spec.m"
      }
#line 72 "add_pragma_type_spec.m"
    if ((hlds__make_hlds__add_pragma__add_pragma_type_spec__PredIds_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 69 "add_pragma_type_spec.m"
      {
#line 70 "add_pragma_type_spec.m"
        {
#line 70 "add_pragma_type_spec.m"
          hlds__make_hlds__make_hlds_error__undefined_pred_or_func_error_6_p_0(hlds__make_hlds__add_pragma__add_pragma_type_spec__SymName_14, hlds__make_hlds__add_pragma__add_pragma_type_spec__Arity_16, hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_10, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[6]), hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_33);
        }
#line 69 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_29 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_28;
#line 69 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_31 = hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_30;
#line 69 "add_pragma_type_spec.m"
      }
#line 72 "add_pragma_type_spec.m"
    else
#line 73 "add_pragma_type_spec.m"
      {
#line 73 "add_pragma_type_spec.m"
        MR_Word hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36;
#line 74 "add_pragma_type_spec.m"
        MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv5_STATE_VARIABLE_ModuleInfo_29;
#line 74 "add_pragma_type_spec.m"
        MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv4_STATE_VARIABLE_QualInfo_31;
#line 74 "add_pragma_type_spec.m"
        MR_Box hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_STATE_VARIABLE_Specs_33;

#line 74 "add_pragma_type_spec.m"
        {
#line 74 "add_pragma_type_spec.m"
          hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 74 "add_pragma_type_spec.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36, 0) = ((MR_Box) (&hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_3[0]));
#line 74 "add_pragma_type_spec.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__add_pragma_type_spec_8_p_0_1));
#line 74 "add_pragma_type_spec.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 74 "add_pragma_type_spec.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36, 3) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__TSInfo_9));
#line 74 "add_pragma_type_spec.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36, 4) = ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__Context_10));
#line 74 "add_pragma_type_spec.m"
        }
#line 74 "add_pragma_type_spec.m"
        {
#line 74 "add_pragma_type_spec.m"
          mercury__list__foldl3_8_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0, (MR_Word) &hlds__make_hlds__add_pragma__add_pragma_type_spec_scalar_common_1[0], hlds__make_hlds__add_pragma__add_pragma_type_spec__V_36_36, hlds__make_hlds__add_pragma__add_pragma_type_spec__PredIds_25, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_0_28)), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv5_STATE_VARIABLE_ModuleInfo_29, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_0_30)), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv4_STATE_VARIABLE_QualInfo_31, ((MR_Box) (hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_0_32)), &hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_STATE_VARIABLE_Specs_33);
        }
#line 74 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_ModuleInfo_29 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv5_STATE_VARIABLE_ModuleInfo_29);
#line 74 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_QualInfo_31 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv4_STATE_VARIABLE_QualInfo_31);
#line 74 "add_pragma_type_spec.m"
        *hlds__make_hlds__add_pragma__add_pragma_type_spec__STATE_VARIABLE_Specs_33 = ((MR_Word) hlds__make_hlds__add_pragma__add_pragma_type_spec__conv3_STATE_VARIABLE_Specs_33);
#line 73 "add_pragma_type_spec.m"
      }
#line 54 "add_pragma_type_spec.m"
  }
#line 18 "add_pragma_type_spec.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_pragma.add_pragma_type_spec. */
