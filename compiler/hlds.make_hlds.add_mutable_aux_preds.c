/*
** Automatically generated from `add_mutable_aux_preds.m'
** by the Mercury compiler,
** version rotd-2015-01-28
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


/* :- module hlds.make_hlds.add_mutable_aux_preds. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_mutable_aux_preds__init
ENDINIT
*/

#include "hlds.make_hlds.add_mutable_aux_preds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.foreign.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_mutable.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_foreign_proc.mih"
#include "hlds.make_hlds.add_pragma.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 156 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 159 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 162 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 165 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 168 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 171 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 174 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0;

#line 585 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_102_111_114_95_109_117_116_97_98_108_101_95_95_91_52_93_95_48_8_p_0(
#line 585 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__SymName_9,
#line 585 "add_mutable_aux_preds.m"
  MR_Integer hlds__make_hlds__add_mutable_aux_preds__Arity_10,
#line 585 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 585 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24,
#line 585 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_25,
#line 585 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26,
#line 585 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_27);

#line 328 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__328__1_2_p_0(
#line 328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_29,
#line 328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78);

#line 326 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__326__1_2_p_0(
#line 326 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDet_27,
#line 326 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72);

#line 325 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__325__1_2_p_0(
#line 325 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_26,
#line 325 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_67);

#line 324 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__324__1_2_p_0(
#line 324 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_25,
#line 324 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_62);

#line 322 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__322__1_2_p_0(
#line 322 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_22,
#line 322 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_57);

#line 321 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__321__1_2_p_0(
#line 321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_21,
#line 321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52);

#line 319 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__319__1_2_p_0(
#line 319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_20,
#line 319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_47);

#line 317 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__317__1_2_p_0(
#line 317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_19,
#line 317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_42);

#line 1624 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_erlang_mutable_initialisation_13_p_0(
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_14,
#line 1624 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_15,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet0_16,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_17,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_18,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_19,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_20,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_34,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_35,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37);

#line 1616 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__erlang_mutable_set_code_1_f_0(
#line 1616 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_3);

#line 1604 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__erlang_mutable_get_code_1_f_0(
#line 1604 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_3);

#line 1504 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_erlang_mutable_user_access_preds_13_p_0(
#line 1504 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_15,
#line 1504 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_16,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_18,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_19,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_20,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_47,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_49,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_51,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_52);

#line 1459 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_erlang_constant_mutable_access_preds_10_p_0(
#line 1459 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1459 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_15,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_16,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_30,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_31,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_32);

#line 1427 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_erlang_mutable_preds_9_p_0(
#line 1427 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10,
#line 1427 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_12,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_27,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_28,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_29,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_30,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_31,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_32);

#line 1391 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_initialisation_14_p_0(
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_15,
#line 1391 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_16,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet0_17,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_18,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_19,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_20,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_21,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_22,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_34,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_35,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_36,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38);

#line 1300 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_primitive_preds_17_p_0(
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_18,
#line 1300 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_19,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_20,
#line 1300 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_21,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_22,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_23,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_24,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_25,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_26,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_27,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_28,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_48,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_50,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_51,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_52,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53);

#line 1269 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_csharp_thread_local_mutable_pre_init_pred_13_p_0(
#line 1269 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_15,
#line 1269 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_16,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_17,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_18,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_19,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_20,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_27,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_28,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_29,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_30,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_31,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_32);

#line 1219 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_preds_10_p_0(
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_12,
#line 1219 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_34,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_35,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_36,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38);

#line 1168 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_defn_7_p_0(
#line 1168 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_8,
#line 1168 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_9,
#line 1168 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_10,
#line 1168 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 1168 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 1168 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 1168 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18);

#line 1083 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_initialisation_17_p_0(
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_18,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_19,
#line 1083 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_20,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_21,
#line 1083 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_22,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet0_23,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_24,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_25,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_26,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_27,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_28,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_44,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_45,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_46,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_48,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49);

#line 983 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_ccsj_mutable_user_access_preds_12_p_0(
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_13,
#line 983 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_14,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_16,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_17,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_55,
#line 983 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_57,
#line 983 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_58,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_59,
#line 983 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_60);

#line 833 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_primitive_preds_16_p_0(
#line 833 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_18,
#line 833 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_19,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_20,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_21,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_22,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_23,
#line 833 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_24,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_25,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_26,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_53,
#line 833 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_55,
#line 833 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_56,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_57,
#line 833 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58);

#line 791 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_ccsj_constant_mutable_access_preds_14_p_0(
#line 791 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_16,
#line 791 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_17,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_19,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_21,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_22,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33,
#line 791 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_34,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_35,
#line 791 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_36,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37,
#line 791 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38);

#line 734 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_preds_9_p_0(
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutableInfo_10,
#line 734 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_12,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_38,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_39,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41);

#line 641 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_defn_and_decl_7_p_0(
#line 641 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 641 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);

#line 566 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__decide_mutable_target_var_name_7_p_0(
#line 566 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8,
#line 566 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9,
#line 566 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 566 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 566 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12,
#line 566 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_13,
#line 566 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14);

#line 478 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 478 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 478 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 478 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3);

#line 444 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 444 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_13,
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 444 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 444 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29);

#line 328 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_8(
#line 328 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 326 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_7(
#line 326 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 325 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_6(
#line 325 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 324 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_5(
#line 324 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 322 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_4(
#line 322 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 321 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_3(
#line 321 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 319 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_2(
#line 319 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 317 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_1(
#line 317 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg);

#line 306 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 306 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_13,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 306 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36,
#line 306 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37);

#line 287 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_13,
#line 287 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_14,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_15,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_16,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_17,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_18,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_19,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_30,
#line 287 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_31,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_32,
#line 287 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_33);

#line 273 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_8_p_0(
#line 273 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 273 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 273 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 273 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 273 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 273 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 273 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 273 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 218 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_8_p_0(
#line 218 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 218 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 218 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 218 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 218 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 218 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 218 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 218 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 215 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_8_p_0(
#line 215 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 215 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 215 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 215 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 215 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 215 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 215 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 215 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);

#line 211 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_10_p_0(
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 211 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 211 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 211 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);

#line 207 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_10_p_0(
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 207 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 207 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 207 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);


static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[43][2];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[8][5];




static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[43][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "backend."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) ((MR_String) "mutable"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not a valid inst for a"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "#endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: trailed mutable in non-trailing grade."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ", MR_MUTEX_ATTR);\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[16])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: trailed mutable in non-trailed grade."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[7])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "end\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "       X = Value\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "   {get_mutable_ack, Value} ->\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "receive\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) ", self()},\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: foreign_name mutable attribute"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not yet implemented for the"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the inst"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_Integer) 22)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: multiple foreign_name attributes"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "specified for the"))
  },
  /* row 36 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) " = MR_new_thread_local_mutable_index();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) ">();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) " = runtime.ThreadLocalMutables.new_index();\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) ");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 42 */
  {
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[3])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[19])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[22])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[8][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraints_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1280 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1288 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 1296 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1304 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_mutable_aux_preds__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1312 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1320 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 1328 "hlds.make_hlds.add_mutable_aux_preds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_mutable_aux_preds__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_determinism_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
  }
};

#line 585 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_102_111_114_95_109_117_116_97_98_108_101_95_95_91_52_93_95_48_8_p_0(
#line 585 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__SymName_9,
#line 585 "add_mutable_aux_preds.m"
  MR_Integer hlds__make_hlds__add_mutable_aux_preds__Arity_10,
#line 585 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 585 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24,
#line 585 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_25,
#line 585 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26,
#line 585 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_27)
#line 585 "add_mutable_aux_preds.m"
{
#line 590 "add_mutable_aux_preds.m"
  {
#line 590 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 590 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_15;
#line 590 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_16;

#line 596 "add_mutable_aux_preds.m"
    {
#line 596 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_mutable_aux_preds__Globals_15);
    }
#line 598 "add_mutable_aux_preds.m"
    {
#line 598 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_15, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_16);
    }
#line 1374 "hlds.make_hlds.add_mutable_aux_preds.c"
    if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_16 == (MR_Integer) 0))
#line 1376 "hlds.make_hlds.add_mutable_aux_preds.c"
      {
#line 1378 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__CName_19;
#line 1380 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_20;
#line 1382 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_21;
#line 1384 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_32;

#line 619 "add_mutable_aux_preds.m"
        {
#line 619 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__SymName_9, hlds__make_hlds__add_mutable_aux_preds__Arity_10, &hlds__make_hlds__add_mutable_aux_preds__CName_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_32);
        }
#line 620 "add_mutable_aux_preds.m"
        {
#line 620 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_20, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SymName_9));
#line 620 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_20, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
        }
#line 621 "add_mutable_aux_preds.m"
        {
#line 621 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__FPEInfo_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_21, 0) = ((MR_Box) ((MR_Integer) 0));
#line 621 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_21, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_20));
#line 621 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_21, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_19));
#line 621 "add_mutable_aux_preds.m"
        }
#line 625 "add_mutable_aux_preds.m"
        {
#line 625 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_21, hlds__make_hlds__add_mutable_aux_preds__Context_11, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_27);
#line 625 "add_mutable_aux_preds.m"
          return;
        }
#line 1423 "hlds.make_hlds.add_mutable_aux_preds.c"
      }
#line 1425 "hlds.make_hlds.add_mutable_aux_preds.c"
    else
#line 1427 "hlds.make_hlds.add_mutable_aux_preds.c"
      if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_16 == (MR_Integer) 2))
#line 1429 "hlds.make_hlds.add_mutable_aux_preds.c"
        {
#line 1431 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_String hlds__make_hlds__add_mutable_aux_preds__CName_42;
#line 1433 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_43;
#line 1435 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_44;
#line 1437 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_47;

#line 619 "add_mutable_aux_preds.m"
          {
#line 619 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__SymName_9, hlds__make_hlds__add_mutable_aux_preds__Arity_10, &hlds__make_hlds__add_mutable_aux_preds__CName_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_47);
          }
#line 620 "add_mutable_aux_preds.m"
          {
#line 620 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_43, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SymName_9));
#line 620 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_43, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
          }
#line 621 "add_mutable_aux_preds.m"
          {
#line 621 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__FPEInfo_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_44, 0) = ((MR_Box) ((MR_Integer) 1));
#line 621 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_44, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_43));
#line 621 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_44, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_42));
#line 621 "add_mutable_aux_preds.m"
          }
#line 625 "add_mutable_aux_preds.m"
          {
#line 625 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_44, hlds__make_hlds__add_mutable_aux_preds__Context_11, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_27);
#line 625 "add_mutable_aux_preds.m"
            return;
          }
#line 1476 "hlds.make_hlds.add_mutable_aux_preds.c"
        }
#line 1478 "hlds.make_hlds.add_mutable_aux_preds.c"
      else
#line 1480 "hlds.make_hlds.add_mutable_aux_preds.c"
        if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_16 == (MR_Integer) 4))
#line 1482 "hlds.make_hlds.add_mutable_aux_preds.c"
          {
#line 1484 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_String hlds__make_hlds__add_mutable_aux_preds__CName_55;
#line 1486 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_56;
#line 1488 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_57;
#line 1490 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_60;

#line 619 "add_mutable_aux_preds.m"
            {
#line 619 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__SymName_9, hlds__make_hlds__add_mutable_aux_preds__Arity_10, &hlds__make_hlds__add_mutable_aux_preds__CName_55, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_60);
            }
#line 620 "add_mutable_aux_preds.m"
            {
#line 620 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_56, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SymName_9));
#line 620 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_56, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
            }
#line 621 "add_mutable_aux_preds.m"
            {
#line 621 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__FPEInfo_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_57, 0) = ((MR_Box) ((MR_Integer) 4));
#line 621 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_57, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_56));
#line 621 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_57, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_55));
#line 621 "add_mutable_aux_preds.m"
            }
#line 625 "add_mutable_aux_preds.m"
            {
#line 625 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_57, hlds__make_hlds__add_mutable_aux_preds__Context_11, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_60, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_27);
#line 625 "add_mutable_aux_preds.m"
              return;
            }
#line 1529 "hlds.make_hlds.add_mutable_aux_preds.c"
          }
#line 1531 "hlds.make_hlds.add_mutable_aux_preds.c"
        else
#line 1533 "hlds.make_hlds.add_mutable_aux_preds.c"
          if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_16 == (MR_Integer) 1))
#line 1535 "hlds.make_hlds.add_mutable_aux_preds.c"
            {
#line 629 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_25 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24;
#line 629 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_27 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26;
#line 1541 "hlds.make_hlds.add_mutable_aux_preds.c"
            }
#line 1543 "hlds.make_hlds.add_mutable_aux_preds.c"
          else
#line 1545 "hlds.make_hlds.add_mutable_aux_preds.c"
            {
#line 1547 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_String hlds__make_hlds__add_mutable_aux_preds__CName_70;
#line 1549 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71;
#line 1551 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72;
#line 1553 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_75;

#line 619 "add_mutable_aux_preds.m"
              {
#line 619 "add_mutable_aux_preds.m"
                hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__SymName_9, hlds__make_hlds__add_mutable_aux_preds__Arity_10, &hlds__make_hlds__add_mutable_aux_preds__CName_70, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_75);
              }
#line 620 "add_mutable_aux_preds.m"
              {
#line 620 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SymName_9));
#line 620 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
              }
#line 621 "add_mutable_aux_preds.m"
              {
#line 621 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 0) = ((MR_Box) ((MR_Integer) 2));
#line 621 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_71));
#line 621 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_70));
#line 621 "add_mutable_aux_preds.m"
              }
#line 625 "add_mutable_aux_preds.m"
              {
#line 625 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_72, hlds__make_hlds__add_mutable_aux_preds__Context_11, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_75, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_26, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_27);
#line 625 "add_mutable_aux_preds.m"
                return;
              }
#line 1592 "hlds.make_hlds.add_mutable_aux_preds.c"
            }
#line 590 "add_mutable_aux_preds.m"
  }
#line 585 "add_mutable_aux_preds.m"
}

#line 328 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__328__1_2_p_0(
#line 328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_29,
#line 328 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78)
#line 328 "add_mutable_aux_preds.m"
{
#line 328 "add_mutable_aux_preds.m"
  {
#line 328 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 328 "add_mutable_aux_preds.m"
    {
#line 328 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____prog_constraints_0_0(hlds__make_hlds__add_mutable_aux_preds__Constraints_29, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_78);
    }
#line 328 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 328 "add_mutable_aux_preds.m"
  }
#line 328 "add_mutable_aux_preds.m"
}

#line 326 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__326__1_2_p_0(
#line 326 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDet_27,
#line 326 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72)
#line 326 "add_mutable_aux_preds.m"
{
#line 326 "add_mutable_aux_preds.m"
  {
#line 326 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 326 "add_mutable_aux_preds.m"
    {
#line 326 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[6], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDet_27)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_72)));
    }
#line 326 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 326 "add_mutable_aux_preds.m"
  }
#line 326 "add_mutable_aux_preds.m"
}

#line 325 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__325__1_2_p_0(
#line 325 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_26,
#line 325 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_67)
#line 325 "add_mutable_aux_preds.m"
{
#line 325 "add_mutable_aux_preds.m"
  {
#line 325 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 325 "add_mutable_aux_preds.m"
    {
#line 325 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[5], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_26)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_67)));
    }
#line 325 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 325 "add_mutable_aux_preds.m"
  }
#line 325 "add_mutable_aux_preds.m"
}

#line 324 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__324__1_2_p_0(
#line 324 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_25,
#line 324 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_62)
#line 324 "add_mutable_aux_preds.m"
{
#line 324 "add_mutable_aux_preds.m"
  {
#line 324 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 324 "add_mutable_aux_preds.m"
    {
#line 324 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[4], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_25)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_62)));
    }
#line 324 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 324 "add_mutable_aux_preds.m"
  }
#line 324 "add_mutable_aux_preds.m"
}

#line 322 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__322__1_2_p_0(
#line 322 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_22,
#line 322 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_57)
#line 322 "add_mutable_aux_preds.m"
{
#line 322 "add_mutable_aux_preds.m"
  {
#line 322 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_22 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_57);

#line 322 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 322 "add_mutable_aux_preds.m"
  }
#line 322 "add_mutable_aux_preds.m"
}

#line 321 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__321__1_2_p_0(
#line 321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_21,
#line 321 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52)
#line 321 "add_mutable_aux_preds.m"
{
#line 321 "add_mutable_aux_preds.m"
  {
#line 321 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 321 "add_mutable_aux_preds.m"
    {
#line 321 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[3], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_21)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_52)));
    }
#line 321 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 321 "add_mutable_aux_preds.m"
  }
#line 321 "add_mutable_aux_preds.m"
}

#line 319 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__319__1_2_p_0(
#line 319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_20,
#line 319 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_47)
#line 319 "add_mutable_aux_preds.m"
{
#line 319 "add_mutable_aux_preds.m"
  {
#line 319 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 319 "add_mutable_aux_preds.m"
    {
#line 319 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_20)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_47)));
    }
#line 319 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 319 "add_mutable_aux_preds.m"
  }
#line 319 "add_mutable_aux_preds.m"
}

#line 317 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__317__1_2_p_0(
#line 317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_19,
#line 317 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_42)
#line 317 "add_mutable_aux_preds.m"
{
#line 317 "add_mutable_aux_preds.m"
  {
#line 317 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 317 "add_mutable_aux_preds.m"
    {
#line 317 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[0], ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_19)), ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_42)));
    }
#line 317 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 317 "add_mutable_aux_preds.m"
  }
#line 317 "add_mutable_aux_preds.m"
}

#line 1624 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_erlang_mutable_initialisation_13_p_0(
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_14,
#line 1624 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_15,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet0_16,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_17,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_18,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_19,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_20,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_34,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_35,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36,
#line 1624 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37)
#line 1624 "add_mutable_aux_preds.m"
{
#line 1632 "add_mutable_aux_preds.m"
  {
#line 1632 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredName_24;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_26;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet_27;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_28;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallExpr_29;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_31;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_41_41;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_64;
#line 1632 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_65;

#line 1635 "add_mutable_aux_preds.m"
    {
#line 1635 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredName_24 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_14, hlds__make_hlds__add_mutable_aux_preds__MutableName_15);
    }
#line 596 "add_mutable_aux_preds.m"
    {
#line 596 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__add_mutable_aux_preds__Globals_64);
    }
#line 598 "add_mutable_aux_preds.m"
    {
#line 598 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_64, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_65);
    }
#line 1877 "hlds.make_hlds.add_mutable_aux_preds.c"
    if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_65 == (MR_Integer) 0))
#line 1879 "hlds.make_hlds.add_mutable_aux_preds.c"
      {
#line 1881 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__CName_68;
#line 1883 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_69;
#line 1885 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_70;
#line 1887 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_77;

#line 619 "add_mutable_aux_preds.m"
        {
#line 619 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_24, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_68, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_77);
        }
#line 620 "add_mutable_aux_preds.m"
        {
#line 620 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_69, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_24));
#line 620 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_69, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
        }
#line 621 "add_mutable_aux_preds.m"
        {
#line 621 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__FPEInfo_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_70, 0) = ((MR_Box) ((MR_Integer) 0));
#line 621 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_70, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_69));
#line 621 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_70, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_68));
#line 621 "add_mutable_aux_preds.m"
        }
#line 625 "add_mutable_aux_preds.m"
        {
#line 625 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_70, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_77, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39);
        }
#line 1924 "hlds.make_hlds.add_mutable_aux_preds.c"
      }
#line 1926 "hlds.make_hlds.add_mutable_aux_preds.c"
    else
#line 1928 "hlds.make_hlds.add_mutable_aux_preds.c"
      if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_65 == (MR_Integer) 2))
#line 1930 "hlds.make_hlds.add_mutable_aux_preds.c"
        {
#line 1932 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_String hlds__make_hlds__add_mutable_aux_preds__CName_87;
#line 1934 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_88;
#line 1936 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_89;
#line 1938 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_92;

#line 619 "add_mutable_aux_preds.m"
          {
#line 619 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_24, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_87, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_92);
          }
#line 620 "add_mutable_aux_preds.m"
          {
#line 620 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_88, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_24));
#line 620 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_88, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
          }
#line 621 "add_mutable_aux_preds.m"
          {
#line 621 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__FPEInfo_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_89, 0) = ((MR_Box) ((MR_Integer) 1));
#line 621 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_89, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_88));
#line 621 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_89, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_87));
#line 621 "add_mutable_aux_preds.m"
          }
#line 625 "add_mutable_aux_preds.m"
          {
#line 625 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_89, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_92, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39);
          }
#line 1975 "hlds.make_hlds.add_mutable_aux_preds.c"
        }
#line 1977 "hlds.make_hlds.add_mutable_aux_preds.c"
      else
#line 1979 "hlds.make_hlds.add_mutable_aux_preds.c"
        if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_65 == (MR_Integer) 4))
#line 1981 "hlds.make_hlds.add_mutable_aux_preds.c"
          {
#line 1983 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_String hlds__make_hlds__add_mutable_aux_preds__CName_100;
#line 1985 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_101;
#line 1987 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_102;
#line 1989 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_105;

#line 619 "add_mutable_aux_preds.m"
            {
#line 619 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_24, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_100, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_105);
            }
#line 620 "add_mutable_aux_preds.m"
            {
#line 620 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_101, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_24));
#line 620 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_101, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
            }
#line 621 "add_mutable_aux_preds.m"
            {
#line 621 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__FPEInfo_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_102, 0) = ((MR_Box) ((MR_Integer) 4));
#line 621 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_102, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_101));
#line 621 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_102, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_100));
#line 621 "add_mutable_aux_preds.m"
            }
#line 625 "add_mutable_aux_preds.m"
            {
#line 625 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_102, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_105, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39);
            }
#line 2026 "hlds.make_hlds.add_mutable_aux_preds.c"
          }
#line 2028 "hlds.make_hlds.add_mutable_aux_preds.c"
        else
#line 2030 "hlds.make_hlds.add_mutable_aux_preds.c"
          if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_65 == (MR_Integer) 1))
#line 2032 "hlds.make_hlds.add_mutable_aux_preds.c"
            {
#line 629 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32;
#line 629 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36;
#line 2038 "hlds.make_hlds.add_mutable_aux_preds.c"
            }
#line 2040 "hlds.make_hlds.add_mutable_aux_preds.c"
          else
#line 2042 "hlds.make_hlds.add_mutable_aux_preds.c"
            {
#line 2044 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_String hlds__make_hlds__add_mutable_aux_preds__CName_115;
#line 2046 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_116;
#line 2048 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_117;
#line 2050 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_120;

#line 619 "add_mutable_aux_preds.m"
              {
#line 619 "add_mutable_aux_preds.m"
                hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_24, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_115, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_32, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_120);
              }
#line 620 "add_mutable_aux_preds.m"
              {
#line 620 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_116, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_24));
#line 620 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_116, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
              }
#line 621 "add_mutable_aux_preds.m"
              {
#line 621 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__FPEInfo_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_117, 0) = ((MR_Box) ((MR_Integer) 2));
#line 621 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_117, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_116));
#line 621 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_117, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_115));
#line 621 "add_mutable_aux_preds.m"
              }
#line 625 "add_mutable_aux_preds.m"
              {
#line 625 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_117, hlds__make_hlds__add_mutable_aux_preds__Context_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_120, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39);
              }
#line 2087 "hlds.make_hlds.add_mutable_aux_preds.c"
            }
#line 1644 "add_mutable_aux_preds.m"
    {
#line 1644 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_26, hlds__make_hlds__add_mutable_aux_preds__VarSet0_16, &hlds__make_hlds__add_mutable_aux_preds__VarSet_27);
    }
#line 1646 "add_mutable_aux_preds.m"
    {
#line 1646 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_26));
#line 1646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1646 "add_mutable_aux_preds.m"
    }
#line 1646 "add_mutable_aux_preds.m"
    {
#line 1646 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_28, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_28, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_41_41));
#line 1646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_28, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitTerm_18));
#line 1646 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_28, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1646 "add_mutable_aux_preds.m"
    }
#line 1648 "add_mutable_aux_preds.m"
    {
#line 1648 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_41_41));
#line 1648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1648 "add_mutable_aux_preds.m"
    }
#line 1648 "add_mutable_aux_preds.m"
    {
#line 1648 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallExpr_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallExpr_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallExpr_29, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallExpr_29, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_17));
#line 1648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallExpr_29, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 1648 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallExpr_29, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1648 "add_mutable_aux_preds.m"
    }
#line 1651 "add_mutable_aux_preds.m"
    {
#line 1651 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1651 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1651 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_28));
#line 1651 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_31, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallExpr_29));
#line 1651 "add_mutable_aux_preds.m"
    }
#line 1652 "add_mutable_aux_preds.m"
    {
#line 1652 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSet_27, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__InitPredName_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_31, hlds__make_hlds__add_mutable_aux_preds__Status_20, hlds__make_hlds__add_mutable_aux_preds__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37);
#line 1652 "add_mutable_aux_preds.m"
      return;
    }
#line 1632 "add_mutable_aux_preds.m"
  }
#line 1624 "add_mutable_aux_preds.m"
}

#line 1616 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__erlang_mutable_set_code_1_f_0(
#line 1616 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_3)
#line 1616 "add_mutable_aux_preds.m"
{
#line 1618 "add_mutable_aux_preds.m"
  {
#line 1618 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1618 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1618 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_5_5;

#line 1620 "add_mutable_aux_preds.m"
    {
#line 1620 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_5_5 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_3, (MR_String) ", X}");
    }
#line 1619 "add_mutable_aux_preds.m"
    {
#line 1619 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_5_5);
    }
#line 1618 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1618 "add_mutable_aux_preds.m"
  }
#line 1616 "add_mutable_aux_preds.m"
}

#line 1604 "add_mutable_aux_preds.m"
static MR_String MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__erlang_mutable_get_code_1_f_0(
#line 1604 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_3)
#line 1604 "add_mutable_aux_preds.m"
{
#line 1606 "add_mutable_aux_preds.m"
  {
#line 1606 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1606 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1606 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_4_4;
#line 1606 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_6_6;

#line 1609 "add_mutable_aux_preds.m"
    {
#line 1609 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_6_6, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_3));
#line 1609 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_6_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[27])));
#line 1609 "add_mutable_aux_preds.m"
    }
#line 1608 "add_mutable_aux_preds.m"
    {
#line 1608 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_4_4, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1608 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_4_4, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_6_6));
#line 1608 "add_mutable_aux_preds.m"
    }
#line 1607 "add_mutable_aux_preds.m"
    {
#line 1607 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_4_4);
    }
#line 1606 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2;
#line 1606 "add_mutable_aux_preds.m"
  }
#line 1604 "add_mutable_aux_preds.m"
}

#line 1504 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_erlang_mutable_user_access_preds_13_p_0(
#line 1504 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_15,
#line 1504 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_16,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_18,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_19,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_20,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_47,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_49,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_51,
#line 1504 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_52)
#line 1504 "add_mutable_aux_preds.m"
{
#line 1512 "add_mutable_aux_preds.m"
  {
#line 1512 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_126_126;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_127_127;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_24;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_25;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_26;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet0_27;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__GetAttrs0_28;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__GetAttrs_29;
#line 1512 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__GetCode_30;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__GetPredName_31;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_32;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SetAttrs0_33;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SetAttrs_34;
#line 1512 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__SetCode_35;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SetPredName_36;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_37;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOStateInterface_38;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_70_70;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_72_72;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_83_83;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_86_86;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_87_87;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_90_90;
#line 1512 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_91_91;

#line 1513 "add_mutable_aux_preds.m"
    {
#line 1513 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_24 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17);
    }
#line 1514 "add_mutable_aux_preds.m"
    {
#line 1514 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Attrs_25 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 4);
    }
#line 2365 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_126_126 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1515 "add_mutable_aux_preds.m"
    {
#line 1515 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_126_126);
    }
#line 1515 "add_mutable_aux_preds.m"
    {
#line 1515 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_126_126, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_26, hlds__make_hlds__add_mutable_aux_preds__V_55_55, &hlds__make_hlds__add_mutable_aux_preds__VarSet0_27);
    }
#line 1518 "add_mutable_aux_preds.m"
    {
#line 1518 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_25, &hlds__make_hlds__add_mutable_aux_preds__GetAttrs0_28);
    }
#line 1519 "add_mutable_aux_preds.m"
    {
#line 1519 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__GetAttrs0_28, &hlds__make_hlds__add_mutable_aux_preds__GetAttrs_29);
    }
#line 1532 "add_mutable_aux_preds.m"
    {
#line 1532 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__GetPredName_31 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_15, hlds__make_hlds__add_mutable_aux_preds__MutableName_16);
    }
#line 1536 "add_mutable_aux_preds.m"
    {
#line 1536 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_18);
    }
#line 1536 "add_mutable_aux_preds.m"
    {
#line 1536 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_26));
#line 1536 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) ((MR_String) "X"));
#line 1536 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 1536 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1536 "add_mutable_aux_preds.m"
    }
#line 1536 "add_mutable_aux_preds.m"
    {
#line 1536 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 1536 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1536 "add_mutable_aux_preds.m"
    }
#line 2421 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_127_127 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1538 "add_mutable_aux_preds.m"
    {
#line 1538 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_127_127);
    }
#line 1539 "add_mutable_aux_preds.m"
    {
#line 1539 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1539 "add_mutable_aux_preds.m"
    }
#line 1545 "add_mutable_aux_preds.m"
    {
#line 1545 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Attrs_25, &hlds__make_hlds__add_mutable_aux_preds__SetAttrs0_33);
    }
#line 1546 "add_mutable_aux_preds.m"
    {
#line 1546 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__SetAttrs0_33, &hlds__make_hlds__add_mutable_aux_preds__SetAttrs_34);
    }
#line 2446 "hlds.make_hlds.add_mutable_aux_preds.c"
    if ((hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_24 == (MR_Integer) 1))
#line 2448 "hlds.make_hlds.add_mutable_aux_preds.c"
      {
#line 1522 "add_mutable_aux_preds.m"
        {
#line 1522 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__GetCode_30 = hlds__make_hlds__add_mutable_aux_preds__erlang_mutable_get_code_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14);
        }
#line 1549 "add_mutable_aux_preds.m"
        {
#line 1549 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__SetCode_35 = hlds__make_hlds__add_mutable_aux_preds__erlang_mutable_set_code_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14);
        }
#line 2460 "hlds.make_hlds.add_mutable_aux_preds.c"
      }
#line 2462 "hlds.make_hlds.add_mutable_aux_preds.c"
    else
#line 2464 "hlds.make_hlds.add_mutable_aux_preds.c"
      {
#line 2466 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 2468 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_77_77;

#line 1530 "add_mutable_aux_preds.m"
        {
#line 1530 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_59_59 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14, (MR_String) "})");
        }
#line 1529 "add_mutable_aux_preds.m"
        {
#line 1529 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__GetCode_30 = mercury__string__f_43_43_2_f_0((MR_String) "X = get({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_59_59);
        }
#line 1554 "add_mutable_aux_preds.m"
        {
#line 1554 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_77_77 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14, (MR_String) "}, X)");
        }
#line 1553 "add_mutable_aux_preds.m"
        {
#line 1553 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__SetCode_35 = mercury__string__f_43_43_2_f_0((MR_String) "put({\'MR_thread_local_mutable\', ", hlds__make_hlds__add_mutable_aux_preds__V_77_77);
        }
#line 2491 "hlds.make_hlds.add_mutable_aux_preds.c"
      }
#line 1539 "add_mutable_aux_preds.m"
    {
#line 1539 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1539 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__GetCode_30));
#line 1539 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_70_70));
#line 1539 "add_mutable_aux_preds.m"
    }
#line 1533 "add_mutable_aux_preds.m"
    {
#line 1533 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1533 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__GetAttrs_29));
#line 1533 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_32, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__GetPredName_31));
#line 1533 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_32, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1533 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_32, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_62_62));
#line 1533 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_32, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSet0_27));
#line 1533 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_32, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 1533 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_32, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_69_69));
#line 1533 "add_mutable_aux_preds.m"
    }
#line 1541 "add_mutable_aux_preds.m"
    {
#line 1541 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_32, hlds__make_hlds__add_mutable_aux_preds__Status_20, hlds__make_hlds__add_mutable_aux_preds__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_72_72, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73);
    }
#line 1556 "add_mutable_aux_preds.m"
    {
#line 1556 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__SetPredName_36 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_15, hlds__make_hlds__add_mutable_aux_preds__MutableName_16);
    }
#line 1560 "add_mutable_aux_preds.m"
    {
#line 1560 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_83_83 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_18);
    }
#line 1560 "add_mutable_aux_preds.m"
    {
#line 1560 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1560 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_26));
#line 1560 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) ((MR_String) "X"));
#line 1560 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_83_83));
#line 1560 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1560 "add_mutable_aux_preds.m"
    }
#line 1560 "add_mutable_aux_preds.m"
    {
#line 1560 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1560 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 1560 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1560 "add_mutable_aux_preds.m"
    }
#line 1562 "add_mutable_aux_preds.m"
    {
#line 1562 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_86_86 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_127_127);
    }
#line 1563 "add_mutable_aux_preds.m"
    {
#line 1563 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1563 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetCode_35));
#line 1563 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_87_87, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_70_70));
#line 1563 "add_mutable_aux_preds.m"
    }
#line 1557 "add_mutable_aux_preds.m"
    {
#line 1557 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1557 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetAttrs_34));
#line 1557 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_37, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetPredName_36));
#line 1557 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_37, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1557 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_37, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_80_80));
#line 1557 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_37, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSet0_27));
#line 1557 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_37, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_86_86));
#line 1557 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_37, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_87_87));
#line 1557 "add_mutable_aux_preds.m"
    }
#line 1565 "add_mutable_aux_preds.m"
    {
#line 1565 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_37, hlds__make_hlds__add_mutable_aux_preds__Status_20, hlds__make_hlds__add_mutable_aux_preds__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_72_72, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_90_90, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_91_91);
    }
#line 1568 "add_mutable_aux_preds.m"
    {
#line 1568 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IOStateInterface_38 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_17);
    }
#line 1600 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__IOStateInterface_38 == (MR_Integer) 0))
#line 1601 "add_mutable_aux_preds.m"
      {
#line 1601 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_90_90;
#line 1601 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_49;
#line 1601 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_52 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_91_91;
#line 1601 "add_mutable_aux_preds.m"
      }
#line 1600 "add_mutable_aux_preds.m"
    else
#line 1570 "add_mutable_aux_preds.m"
      {
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IO_39;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet_40;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Ctxt_41;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CallSemipureGetExpr_43;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__GetPredExpr_44;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__SetPredArgs_45;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__SetPredExpr_46;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_93_93;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_94_94;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_95_95;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_99_99;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_100_100;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_107_107;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_108_108;
#line 1570 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_109_109;

#line 1571 "add_mutable_aux_preds.m"
        {
#line 1571 "add_mutable_aux_preds.m"
          mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_126_126, (MR_String) "IO", &hlds__make_hlds__add_mutable_aux_preds__IO_39, hlds__make_hlds__add_mutable_aux_preds__VarSet0_27, &hlds__make_hlds__add_mutable_aux_preds__VarSet_40);
        }
#line 1572 "add_mutable_aux_preds.m"
        {
#line 1572 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Ctxt_41 = mercury__term__context_init_0_f_0();
        }
#line 1578 "add_mutable_aux_preds.m"
        {
#line 1578 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_93_93, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_26));
#line 1578 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_93_93, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Ctxt_41));
#line 1578 "add_mutable_aux_preds.m"
        }
#line 1578 "add_mutable_aux_preds.m"
        {
#line 1578 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_95_95, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO_39));
#line 1578 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_95_95, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Ctxt_41));
#line 1578 "add_mutable_aux_preds.m"
        }
#line 1578 "add_mutable_aux_preds.m"
        {
#line 1578 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_95_95));
#line 1578 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1578 "add_mutable_aux_preds.m"
        }
#line 1578 "add_mutable_aux_preds.m"
        {
#line 1578 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_95_95));
#line 1578 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_96_96));
#line 1578 "add_mutable_aux_preds.m"
        }
#line 1578 "add_mutable_aux_preds.m"
        {
#line 1578 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__SetPredArgs_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1578 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__SetPredArgs_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_93_93));
#line 1578 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__SetPredArgs_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_94_94));
#line 1578 "add_mutable_aux_preds.m"
        }
#line 1580 "add_mutable_aux_preds.m"
        {
#line 1580 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_26));
#line 1580 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_100_100, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1580 "add_mutable_aux_preds.m"
        }
#line 1580 "add_mutable_aux_preds.m"
        {
#line 1580 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_100_100));
#line 1580 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1580 "add_mutable_aux_preds.m"
        }
#line 1580 "add_mutable_aux_preds.m"
        {
#line 1580 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__CallSemipureGetExpr_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1580 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSemipureGetExpr_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1580 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSemipureGetExpr_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1580 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSemipureGetExpr_43, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__GetPredName_31));
#line 1580 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSemipureGetExpr_43, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_99_99));
#line 1580 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSemipureGetExpr_43, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1580 "add_mutable_aux_preds.m"
        }
#line 1582 "add_mutable_aux_preds.m"
        {
#line 1582 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__GetPredExpr_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1582 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__GetPredExpr_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1582 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__GetPredExpr_44, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1582 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__GetPredExpr_44, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1582 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__GetPredExpr_44, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallSemipureGetExpr_43));
#line 1582 "add_mutable_aux_preds.m"
        }
#line 1584 "add_mutable_aux_preds.m"
        {
#line 1584 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSet_40, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__GetPredName_31, hlds__make_hlds__add_mutable_aux_preds__SetPredArgs_45, hlds__make_hlds__add_mutable_aux_preds__GetPredExpr_44, hlds__make_hlds__add_mutable_aux_preds__Status_20, hlds__make_hlds__add_mutable_aux_preds__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_90_90, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_107_107, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_108_108, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_91_91, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_109_109);
        }
#line 1595 "add_mutable_aux_preds.m"
        {
#line 1595 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__SetPredExpr_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1595 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__SetPredExpr_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1595 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__SetPredExpr_46, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1595 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__SetPredExpr_46, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetPredName_36));
#line 1595 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__SetPredExpr_46, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_99_99));
#line 1595 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__SetPredExpr_46, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1595 "add_mutable_aux_preds.m"
        }
#line 1597 "add_mutable_aux_preds.m"
        {
#line 1597 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSet_40, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__SetPredName_36, hlds__make_hlds__add_mutable_aux_preds__SetPredArgs_45, hlds__make_hlds__add_mutable_aux_preds__SetPredExpr_46, hlds__make_hlds__add_mutable_aux_preds__Status_20, hlds__make_hlds__add_mutable_aux_preds__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_107_107, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_108_108, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_109_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_52);
#line 1597 "add_mutable_aux_preds.m"
          return;
        }
#line 1570 "add_mutable_aux_preds.m"
      }
#line 1512 "add_mutable_aux_preds.m"
  }
#line 1504 "add_mutable_aux_preds.m"
}

#line 1459 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_erlang_constant_mutable_access_preds_10_p_0(
#line 1459 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 1459 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_13,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_15,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_16,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_30,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_31,
#line 1459 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_32)
#line 1459 "add_mutable_aux_preds.m"
{
#line 1466 "add_mutable_aux_preds.m"
  {
#line 1466 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_64_64 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_19;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet_20;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_21;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_22;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_23;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_24;
#line 1466 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__GetCode_25;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_26;
#line 1466 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__SetCode_27;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_28;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_34_34;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_41_41;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_46_46;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_47_47;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_50_50;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_51_51;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_54_54;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_67_67;
#line 1466 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 1466 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_83_83;

#line 1467 "add_mutable_aux_preds.m"
    {
#line 1467 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_34_34 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_64_64);
    }
#line 1467 "add_mutable_aux_preds.m"
    {
#line 1467 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_64_64, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_19, hlds__make_hlds__add_mutable_aux_preds__V_34_34, &hlds__make_hlds__add_mutable_aux_preds__VarSet_20);
    }
#line 1468 "add_mutable_aux_preds.m"
    {
#line 1468 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InstVarSet_21 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 1469 "add_mutable_aux_preds.m"
    {
#line 1469 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Attrs_22 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 4);
    }
#line 1470 "add_mutable_aux_preds.m"
    {
#line 1470 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Attrs_22, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_23);
    }
#line 1471 "add_mutable_aux_preds.m"
    {
#line 1471 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_23, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_24);
    }
#line 1609 "add_mutable_aux_preds.m"
    {
#line 1609 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1609 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11));
#line 1609 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[27])));
#line 1609 "add_mutable_aux_preds.m"
    }
#line 1608 "add_mutable_aux_preds.m"
    {
#line 1608 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1608 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_67_67, 0) = ((MR_Box) ((MR_String) "\'ML_erlang_global_server\' ! {get_mutable, "));
#line 1608 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_69_69));
#line 1608 "add_mutable_aux_preds.m"
    }
#line 1607 "add_mutable_aux_preds.m"
    {
#line 1607 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__GetCode_25 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_67_67);
    }
#line 1477 "add_mutable_aux_preds.m"
    {
#line 1477 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_38_38 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
    }
#line 1479 "add_mutable_aux_preds.m"
    {
#line 1479 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_43_43 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_14);
    }
#line 1479 "add_mutable_aux_preds.m"
    {
#line 1479 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1479 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_19));
#line 1479 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_41_41, 1) = ((MR_Box) ((MR_String) "X"));
#line 1479 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_41_41, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 1479 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_41_41, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1479 "add_mutable_aux_preds.m"
    }
#line 1479 "add_mutable_aux_preds.m"
    {
#line 1479 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1479 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_41_41));
#line 1479 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1479 "add_mutable_aux_preds.m"
    }
#line 1482 "add_mutable_aux_preds.m"
    {
#line 1482 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1482 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_15));
#line 1482 "add_mutable_aux_preds.m"
    }
#line 1482 "add_mutable_aux_preds.m"
    {
#line 1482 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1482 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__GetCode_25));
#line 1482 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 1482 "add_mutable_aux_preds.m"
    }
#line 1475 "add_mutable_aux_preds.m"
    {
#line 1475 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1475 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_26, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_24));
#line 1475 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_38_38));
#line 1475 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_26, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1475 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_26, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_40_40));
#line 1475 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_26, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSet_20));
#line 1475 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_26, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_21));
#line 1475 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_26, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_46_46));
#line 1475 "add_mutable_aux_preds.m"
    }
#line 1484 "add_mutable_aux_preds.m"
    {
#line 1484 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_26, hlds__make_hlds__add_mutable_aux_preds__Status_16, hlds__make_hlds__add_mutable_aux_preds__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_31, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_50_50);
    }
#line 1620 "add_mutable_aux_preds.m"
    {
#line 1620 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_83_83 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11, (MR_String) ", X}");
    }
#line 1619 "add_mutable_aux_preds.m"
    {
#line 1619 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__SetCode_27 = mercury__string__f_43_43_2_f_0((MR_String) "\'ML_erlang_global_server\' ! {set_mutable, ", hlds__make_hlds__add_mutable_aux_preds__V_83_83);
    }
#line 1490 "add_mutable_aux_preds.m"
    {
#line 1490 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_51_51 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MutableName_13);
    }
#line 1492 "add_mutable_aux_preds.m"
    {
#line 1492 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_56_56 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_14);
    }
#line 1492 "add_mutable_aux_preds.m"
    {
#line 1492 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_19));
#line 1492 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_54_54, 1) = ((MR_Box) ((MR_String) "X"));
#line 1492 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_54_54, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_56_56));
#line 1492 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_54_54, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1492 "add_mutable_aux_preds.m"
    }
#line 1492 "add_mutable_aux_preds.m"
    {
#line 1492 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1492 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_54_54));
#line 1492 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1492 "add_mutable_aux_preds.m"
    }
#line 1495 "add_mutable_aux_preds.m"
    {
#line 1495 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1495 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetCode_27));
#line 1495 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 1495 "add_mutable_aux_preds.m"
    }
#line 1489 "add_mutable_aux_preds.m"
    {
#line 1489 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1489 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_28, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_22));
#line 1489 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_28, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_51_51));
#line 1489 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_28, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1489 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_28, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 1489 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_28, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSet_20));
#line 1489 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_28, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_21));
#line 1489 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_28, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_59_59));
#line 1489 "add_mutable_aux_preds.m"
    }
#line 1497 "add_mutable_aux_preds.m"
    {
#line 1497 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_28, hlds__make_hlds__add_mutable_aux_preds__Status_16, hlds__make_hlds__add_mutable_aux_preds__Context_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49_49, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_32);
#line 1497 "add_mutable_aux_preds.m"
      return;
    }
#line 1466 "add_mutable_aux_preds.m"
  }
#line 1459 "add_mutable_aux_preds.m"
}

#line 1427 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_erlang_mutable_preds_9_p_0(
#line 1427 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10,
#line 1427 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_12,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_27,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_28,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_29,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_30,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_31,
#line 1427 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_32)
#line 1427 "add_mutable_aux_preds.m"
{
#line 1433 "add_mutable_aux_preds.m"
  {
#line 1433 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_16;
#line 1433 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_17;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_19;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_20;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Varset_22;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_23;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_25;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_26;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_34_34;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_36_36;
#line 1433 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37_37;
#line 1435 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_18;
#line 1435 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_24;

#line 1434 "add_mutable_aux_preds.m"
    {
#line 1434 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_16);
    }
#line 1435 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutableName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 0)));
#line 1435 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 1)));
#line 1435 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InitTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 2)));
#line 1435 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 3)));
#line 1435 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 4)));
#line 1435 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Varset_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 5)));
#line 1435 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 6)));
#line 1435 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_10, (MR_Integer) 7)));
#line 1437 "add_mutable_aux_preds.m"
    {
#line 1437 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_25 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21);
    }
#line 1445 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__IsConstant_25 == (MR_Integer) 0))
#line 1446 "add_mutable_aux_preds.m"
      {
#line 1447 "add_mutable_aux_preds.m"
        {
#line 1447 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_26 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MutableName_17);
        }
#line 1449 "add_mutable_aux_preds.m"
        {
#line 1449 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_erlang_mutable_user_access_preds_13_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11, hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MutableName_17, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21, hlds__make_hlds__add_mutable_aux_preds__Inst_20, hlds__make_hlds__add_mutable_aux_preds__Context_23, hlds__make_hlds__add_mutable_aux_preds__Status_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_36_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_29, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_34_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_31, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37_37);
        }
#line 1446 "add_mutable_aux_preds.m"
      }
#line 1445 "add_mutable_aux_preds.m"
    else
#line 1439 "add_mutable_aux_preds.m"
      {
#line 1440 "add_mutable_aux_preds.m"
        {
#line 1440 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_26 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MutableName_17);
        }
#line 1442 "add_mutable_aux_preds.m"
        {
#line 1442 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_erlang_constant_mutable_access_preds_10_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11, hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MutableName_17, hlds__make_hlds__add_mutable_aux_preds__Inst_20, hlds__make_hlds__add_mutable_aux_preds__Context_23, hlds__make_hlds__add_mutable_aux_preds__Status_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_27, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_36_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_31, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37_37);
        }
#line 1439 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_34_34 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_29;
#line 1439 "add_mutable_aux_preds.m"
      }
#line 1453 "add_mutable_aux_preds.m"
    {
#line 1453 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_erlang_mutable_initialisation_13_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MutableName_17, hlds__make_hlds__add_mutable_aux_preds__Varset_22, hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_26, hlds__make_hlds__add_mutable_aux_preds__InitTerm_19, hlds__make_hlds__add_mutable_aux_preds__Context_23, hlds__make_hlds__add_mutable_aux_preds__Status_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_36_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_28, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_34_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_30, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_32);
#line 1453 "add_mutable_aux_preds.m"
      return;
    }
#line 1433 "add_mutable_aux_preds.m"
  }
#line 1427 "add_mutable_aux_preds.m"
}

#line 1391 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_initialisation_14_p_0(
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_15,
#line 1391 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_16,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet0_17,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_18,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_19,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_20,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_21,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_22,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_34,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_35,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_36,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37,
#line 1391 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38)
#line 1391 "add_mutable_aux_preds.m"
{
#line 1399 "add_mutable_aux_preds.m"
  {
#line 1399 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredName_26;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_28;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet_29;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_30;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_31;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_32;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_39;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_40_40;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_42_42;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_44_44;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_49_49;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_70;
#line 1399 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_71;

#line 1402 "add_mutable_aux_preds.m"
    {
#line 1402 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredName_26 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_15, hlds__make_hlds__add_mutable_aux_preds__MutableName_16);
    }
#line 596 "add_mutable_aux_preds.m"
    {
#line 596 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33, &hlds__make_hlds__add_mutable_aux_preds__Globals_70);
    }
#line 598 "add_mutable_aux_preds.m"
    {
#line 598 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_70, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_71);
    }
#line 3316 "hlds.make_hlds.add_mutable_aux_preds.c"
    if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_71 == (MR_Integer) 0))
#line 3318 "hlds.make_hlds.add_mutable_aux_preds.c"
      {
#line 3320 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__CName_74;
#line 3322 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_75;
#line 3324 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_76;
#line 3326 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_83;

#line 619 "add_mutable_aux_preds.m"
        {
#line 619 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_26, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_74, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_83);
        }
#line 620 "add_mutable_aux_preds.m"
        {
#line 620 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_26));
#line 620 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_75, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
        }
#line 621 "add_mutable_aux_preds.m"
        {
#line 621 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__FPEInfo_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_76, 0) = ((MR_Box) ((MR_Integer) 0));
#line 621 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_75));
#line 621 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_76, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_74));
#line 621 "add_mutable_aux_preds.m"
        }
#line 625 "add_mutable_aux_preds.m"
        {
#line 625 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_76, hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_83, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_40_40);
        }
#line 3363 "hlds.make_hlds.add_mutable_aux_preds.c"
      }
#line 3365 "hlds.make_hlds.add_mutable_aux_preds.c"
    else
#line 3367 "hlds.make_hlds.add_mutable_aux_preds.c"
      if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_71 == (MR_Integer) 2))
#line 3369 "hlds.make_hlds.add_mutable_aux_preds.c"
        {
#line 3371 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_String hlds__make_hlds__add_mutable_aux_preds__CName_93;
#line 3373 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_94;
#line 3375 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_95;
#line 3377 "hlds.make_hlds.add_mutable_aux_preds.c"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_98;

#line 619 "add_mutable_aux_preds.m"
          {
#line 619 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_26, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_93, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_98);
          }
#line 620 "add_mutable_aux_preds.m"
          {
#line 620 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_94, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_26));
#line 620 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_94, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
          }
#line 621 "add_mutable_aux_preds.m"
          {
#line 621 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__FPEInfo_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_95, 0) = ((MR_Box) ((MR_Integer) 1));
#line 621 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_95, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_94));
#line 621 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_95, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_93));
#line 621 "add_mutable_aux_preds.m"
          }
#line 625 "add_mutable_aux_preds.m"
          {
#line 625 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_95, hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_98, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_40_40);
          }
#line 3414 "hlds.make_hlds.add_mutable_aux_preds.c"
        }
#line 3416 "hlds.make_hlds.add_mutable_aux_preds.c"
      else
#line 3418 "hlds.make_hlds.add_mutable_aux_preds.c"
        if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_71 == (MR_Integer) 4))
#line 3420 "hlds.make_hlds.add_mutable_aux_preds.c"
          {
#line 3422 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_String hlds__make_hlds__add_mutable_aux_preds__CName_106;
#line 3424 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_107;
#line 3426 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_108;
#line 3428 "hlds.make_hlds.add_mutable_aux_preds.c"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_111;

#line 619 "add_mutable_aux_preds.m"
            {
#line 619 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_26, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_106, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_111);
            }
#line 620 "add_mutable_aux_preds.m"
            {
#line 620 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_107, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_26));
#line 620 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_107, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
            }
#line 621 "add_mutable_aux_preds.m"
            {
#line 621 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__FPEInfo_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_108, 0) = ((MR_Box) ((MR_Integer) 4));
#line 621 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_108, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_107));
#line 621 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_108, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_106));
#line 621 "add_mutable_aux_preds.m"
            }
#line 625 "add_mutable_aux_preds.m"
            {
#line 625 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_108, hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_111, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_40_40);
            }
#line 3465 "hlds.make_hlds.add_mutable_aux_preds.c"
          }
#line 3467 "hlds.make_hlds.add_mutable_aux_preds.c"
        else
#line 3469 "hlds.make_hlds.add_mutable_aux_preds.c"
          if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_71 == (MR_Integer) 1))
#line 3471 "hlds.make_hlds.add_mutable_aux_preds.c"
            {
#line 629 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_39 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33;
#line 629 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_40_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37;
#line 3477 "hlds.make_hlds.add_mutable_aux_preds.c"
            }
#line 3479 "hlds.make_hlds.add_mutable_aux_preds.c"
          else
#line 3481 "hlds.make_hlds.add_mutable_aux_preds.c"
            {
#line 3483 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_String hlds__make_hlds__add_mutable_aux_preds__CName_121;
#line 3485 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_122;
#line 3487 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__FPEInfo_123;
#line 3489 "hlds.make_hlds.add_mutable_aux_preds.c"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_126;

#line 619 "add_mutable_aux_preds.m"
              {
#line 619 "add_mutable_aux_preds.m"
                hlds__hlds_module__module_info_new_user_init_pred_5_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_26, (MR_Integer) 0, &hlds__make_hlds__add_mutable_aux_preds__CName_121, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_126);
              }
#line 620 "add_mutable_aux_preds.m"
              {
#line 620 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 620 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_122, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitPredName_26));
#line 620 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 620 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_122, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "add_mutable_aux_preds.m"
              }
#line 621 "add_mutable_aux_preds.m"
              {
#line 621 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__FPEInfo_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 621 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_123, 0) = ((MR_Box) ((MR_Integer) 2));
#line 621 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_123, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredNameModesPF_122));
#line 621 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_123, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CName_121));
#line 621 "add_mutable_aux_preds.m"
              }
#line 625 "add_mutable_aux_preds.m"
              {
#line 625 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_export_7_p_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28]))), hlds__make_hlds__add_mutable_aux_preds__FPEInfo_123, hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_32_126, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_40_40);
              }
#line 3526 "hlds.make_hlds.add_mutable_aux_preds.c"
            }
#line 1408 "add_mutable_aux_preds.m"
    {
#line 1408 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_28, hlds__make_hlds__add_mutable_aux_preds__VarSet0_17, &hlds__make_hlds__add_mutable_aux_preds__VarSet_29);
    }
#line 1410 "add_mutable_aux_preds.m"
    {
#line 1410 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_28));
#line 1410 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_21));
#line 1410 "add_mutable_aux_preds.m"
    }
#line 1410 "add_mutable_aux_preds.m"
    {
#line 1410 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1410 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_30, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_21));
#line 1410 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_30, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_42_42));
#line 1410 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_30, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitTerm_20));
#line 1410 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_30, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1410 "add_mutable_aux_preds.m"
    }
#line 1412 "add_mutable_aux_preds.m"
    {
#line 1412 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_42_42));
#line 1412 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1412 "add_mutable_aux_preds.m"
    }
#line 1412 "add_mutable_aux_preds.m"
    {
#line 1412 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1412 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1412 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_21));
#line 1412 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_31, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_19));
#line 1412 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_31, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_44_44));
#line 1412 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_31, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1412 "add_mutable_aux_preds.m"
    }
#line 1415 "add_mutable_aux_preds.m"
    {
#line 1415 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_31));
#line 1415 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1415 "add_mutable_aux_preds.m"
    }
#line 1415 "add_mutable_aux_preds.m"
    {
#line 1415 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_30));
#line 1415 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_49_49, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 1415 "add_mutable_aux_preds.m"
    }
#line 1415 "add_mutable_aux_preds.m"
    {
#line 1415 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1415 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_18));
#line 1415 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_49_49));
#line 1415 "add_mutable_aux_preds.m"
    }
#line 1414 "add_mutable_aux_preds.m"
    {
#line 1414 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_32 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__add_mutable_aux_preds__Context_21, hlds__make_hlds__add_mutable_aux_preds__V_48_48);
    }
#line 1419 "add_mutable_aux_preds.m"
    {
#line 1419 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSet_29, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__InitPredName_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_32, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_40_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38);
#line 1419 "add_mutable_aux_preds.m"
      return;
    }
#line 1399 "add_mutable_aux_preds.m"
  }
#line 1391 "add_mutable_aux_preds.m"
}

#line 1300 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_primitive_preds_17_p_0(
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_18,
#line 1300 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_19,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_20,
#line 1300 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_21,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_22,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_23,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_24,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_25,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_26,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_27,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_28,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_48,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_50,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_51,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_52,
#line 1300 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53)
#line 1300 "add_mutable_aux_preds.m"
{
#line 1310 "add_mutable_aux_preds.m"
  {
#line 1310 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_123_123;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_124_124;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__GetAttrs0_33;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__GetAttrs_34;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_35;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet_36;
#line 1310 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__GetCode_37;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_39;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SetAttrs_40;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_41;
#line 1310 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TrailCode_42;
#line 1310 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__SetCode_46;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_47;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_57_57;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_73_73;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_82_82;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_84_84;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_99_99;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_109_109;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_111_111;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_112_112;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_114_114;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_116_116;
#line 1310 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_117_117;
#line 1310 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_118_118;

#line 1311 "add_mutable_aux_preds.m"
    {
#line 1311 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_23);
    }
#line 1315 "add_mutable_aux_preds.m"
    {
#line 1315 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_24, &hlds__make_hlds__add_mutable_aux_preds__GetAttrs0_33);
    }
#line 1316 "add_mutable_aux_preds.m"
    {
#line 1316 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__GetAttrs0_33, &hlds__make_hlds__add_mutable_aux_preds__GetAttrs_34);
    }
#line 3755 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_123_123 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1317 "add_mutable_aux_preds.m"
    {
#line 1317 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_57_57 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_123_123);
    }
#line 1317 "add_mutable_aux_preds.m"
    {
#line 1317 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_123_123, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_35, hlds__make_hlds__add_mutable_aux_preds__V_57_57, &hlds__make_hlds__add_mutable_aux_preds__VarSet_36);
    }
#line 1321 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 == (MR_Integer) 1))
#line 1319 "add_mutable_aux_preds.m"
      {
#line 1319 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_71_71;

#line 1320 "add_mutable_aux_preds.m"
        {
#line 1320 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_71_71 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_19, (MR_String) ";\n");
        }
#line 1320 "add_mutable_aux_preds.m"
        {
#line 1320 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__GetCode_37 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_71_71);
        }
#line 1319 "add_mutable_aux_preds.m"
      }
#line 1321 "add_mutable_aux_preds.m"
    else
#line 1321 "add_mutable_aux_preds.m"
      if ((hlds__make_hlds__add_mutable_aux_preds__Lang_18 == (MR_Integer) 1))
#line 1327 "add_mutable_aux_preds.m"
        {
#line 1327 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__Cast_38;
#line 1327 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 1327 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_60_60;
#line 1327 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 1327 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 1329 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_125_125;

#line 1329 "add_mutable_aux_preds.m"
          {
#line 1329 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_125_125 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 1329 "add_mutable_aux_preds.m"
          {
#line 1329 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_22, hlds__make_hlds__add_mutable_aux_preds__V_125_125);
          }
#line 1331 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1330 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Cast_38 = (MR_String) "(int) ";
#line 1331 "add_mutable_aux_preds.m"
          else
#line 1332 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__Cast_38 = (MR_String) "";
#line 1336 "add_mutable_aux_preds.m"
          {
#line 1336 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_19));
#line 1336 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[41])));
#line 1336 "add_mutable_aux_preds.m"
          }
#line 1335 "add_mutable_aux_preds.m"
          {
#line 1335 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "runtime.ThreadLocalMutables.get("));
#line 1335 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 1335 "add_mutable_aux_preds.m"
          }
#line 1335 "add_mutable_aux_preds.m"
          {
#line 1335 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Cast_38));
#line 1335 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_61_61));
#line 1335 "add_mutable_aux_preds.m"
          }
#line 1335 "add_mutable_aux_preds.m"
          {
#line 1335 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) ((MR_String) "\tX = "));
#line 1335 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_60_60));
#line 1335 "add_mutable_aux_preds.m"
          }
#line 1334 "add_mutable_aux_preds.m"
          {
#line 1334 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__GetCode_37 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_58_58);
          }
#line 1327 "add_mutable_aux_preds.m"
        }
#line 1321 "add_mutable_aux_preds.m"
      else
#line 1322 "add_mutable_aux_preds.m"
        {
#line 1322 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_68_68;

#line 1325 "add_mutable_aux_preds.m"
          {
#line 1325 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_19, (MR_String) ".get();\n");
          }
#line 1325 "add_mutable_aux_preds.m"
          {
#line 1325 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__GetCode_37 = mercury__string__f_43_43_2_f_0((MR_String) "\tX = ", hlds__make_hlds__add_mutable_aux_preds__V_68_68);
          }
#line 1322 "add_mutable_aux_preds.m"
        }
#line 1340 "add_mutable_aux_preds.m"
    {
#line 1340 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_73_73 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_20, hlds__make_hlds__add_mutable_aux_preds__MutableName_21);
    }
#line 1342 "add_mutable_aux_preds.m"
    {
#line 1342 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_78_78 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_25);
    }
#line 1342 "add_mutable_aux_preds.m"
    {
#line 1342 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_35));
#line 1342 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) ((MR_String) "X"));
#line 1342 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 1342 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_26));
#line 1342 "add_mutable_aux_preds.m"
    }
#line 1342 "add_mutable_aux_preds.m"
    {
#line 1342 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_76_76));
#line 1342 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1342 "add_mutable_aux_preds.m"
    }
#line 3923 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_124_124 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 1344 "add_mutable_aux_preds.m"
    {
#line 1344 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_80_80 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_124_124);
    }
#line 1345 "add_mutable_aux_preds.m"
    {
#line 1345 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_82_82, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1345 "add_mutable_aux_preds.m"
    }
#line 1345 "add_mutable_aux_preds.m"
    {
#line 1345 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__GetCode_37));
#line 1345 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_82_82));
#line 1345 "add_mutable_aux_preds.m"
    }
#line 1339 "add_mutable_aux_preds.m"
    {
#line 1339 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1339 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_39, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__GetAttrs_34));
#line 1339 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_39, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_73_73));
#line 1339 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_39, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1339 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_39, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 1339 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_39, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSet_36));
#line 1339 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_39, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_80_80));
#line 1339 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_39, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 1339 "add_mutable_aux_preds.m"
    }
#line 1347 "add_mutable_aux_preds.m"
    {
#line 1347 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__GetFCInfo_39, hlds__make_hlds__add_mutable_aux_preds__Status_28, hlds__make_hlds__add_mutable_aux_preds__Context_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_84_84, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_52, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85);
    }
#line 1352 "add_mutable_aux_preds.m"
    {
#line 1352 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_24, &hlds__make_hlds__add_mutable_aux_preds__SetAttrs_40);
    }
#line 1353 "add_mutable_aux_preds.m"
    {
#line 1353 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_41 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_23);
    }
#line 1357 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_41 == (MR_Integer) 0))
#line 1358 "add_mutable_aux_preds.m"
      {
#line 1358 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_44;
#line 1358 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_45;
#line 1358 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_97_97;

#line 1360 "add_mutable_aux_preds.m"
        {
#line 1360 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Msg_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1360 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_44, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1360 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[42])));
#line 1360 "add_mutable_aux_preds.m"
        }
#line 1361 "add_mutable_aux_preds.m"
        {
#line 1361 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_97_97, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_44));
#line 1361 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "add_mutable_aux_preds.m"
        }
#line 1361 "add_mutable_aux_preds.m"
        {
#line 1361 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__Spec_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1361 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1361 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_45, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_97_97));
#line 1361 "add_mutable_aux_preds.m"
        }
#line 1362 "add_mutable_aux_preds.m"
        {
#line 1362 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1362 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_99_99, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_45));
#line 1362 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_99_99, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85));
#line 1362 "add_mutable_aux_preds.m"
        }
#line 1364 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__TrailCode_42 = (MR_String) "";
#line 1358 "add_mutable_aux_preds.m"
      }
#line 1357 "add_mutable_aux_preds.m"
    else
#line 1355 "add_mutable_aux_preds.m"
      {
#line 1356 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__TrailCode_42 = (MR_String) "";
#line 1355 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_99_99 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_85_85;
#line 1355 "add_mutable_aux_preds.m"
      }
#line 1369 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_32 == (MR_Integer) 1))
#line 1367 "add_mutable_aux_preds.m"
      {
#line 1367 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_107_107;

#line 1368 "add_mutable_aux_preds.m"
        {
#line 1368 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_107_107 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_19, (MR_String) " = X;\n");
        }
#line 1368 "add_mutable_aux_preds.m"
        {
#line 1368 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__SetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_107_107);
        }
#line 1367 "add_mutable_aux_preds.m"
      }
#line 1369 "add_mutable_aux_preds.m"
    else
#line 1369 "add_mutable_aux_preds.m"
      if ((hlds__make_hlds__add_mutable_aux_preds__Lang_18 == (MR_Integer) 1))
#line 1374 "add_mutable_aux_preds.m"
        {
#line 1374 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_101_101;

#line 1377 "add_mutable_aux_preds.m"
          {
#line 1377 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_101_101 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_19, (MR_String) ", X);\n");
          }
#line 1376 "add_mutable_aux_preds.m"
          {
#line 1376 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__SetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\truntime.ThreadLocalMutables.set(", hlds__make_hlds__add_mutable_aux_preds__V_101_101);
          }
#line 1374 "add_mutable_aux_preds.m"
        }
#line 1369 "add_mutable_aux_preds.m"
      else
#line 1370 "add_mutable_aux_preds.m"
        {
#line 1370 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__V_104_104;

#line 1372 "add_mutable_aux_preds.m"
          {
#line 1372 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_104_104 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_19, (MR_String) ".set(X);\n");
          }
#line 1372 "add_mutable_aux_preds.m"
          {
#line 1372 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__SetCode_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", hlds__make_hlds__add_mutable_aux_preds__V_104_104);
          }
#line 1370 "add_mutable_aux_preds.m"
        }
#line 1380 "add_mutable_aux_preds.m"
    {
#line 1380 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_109_109 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_20, hlds__make_hlds__add_mutable_aux_preds__MutableName_21);
    }
#line 1382 "add_mutable_aux_preds.m"
    {
#line 1382 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_114_114 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_25);
    }
#line 1382 "add_mutable_aux_preds.m"
    {
#line 1382 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1382 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_112_112, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_35));
#line 1382 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_112_112, 1) = ((MR_Box) ((MR_String) "X"));
#line 1382 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_112_112, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_114_114));
#line 1382 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_112_112, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_26));
#line 1382 "add_mutable_aux_preds.m"
    }
#line 1382 "add_mutable_aux_preds.m"
    {
#line 1382 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_111_111, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_112_112));
#line 1382 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1382 "add_mutable_aux_preds.m"
    }
#line 1383 "add_mutable_aux_preds.m"
    {
#line 1383 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_116_116 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_124_124);
    }
#line 1384 "add_mutable_aux_preds.m"
    {
#line 1384 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_118_118 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TrailCode_42, hlds__make_hlds__add_mutable_aux_preds__SetCode_46);
    }
#line 1384 "add_mutable_aux_preds.m"
    {
#line 1384 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1384 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_117_117, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_118_118));
#line 1384 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_117_117, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_82_82));
#line 1384 "add_mutable_aux_preds.m"
    }
#line 1379 "add_mutable_aux_preds.m"
    {
#line 1379 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1379 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetAttrs_40));
#line 1379 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_47, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_109_109));
#line 1379 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_47, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1379 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_47, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_111_111));
#line 1379 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_47, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSet_36));
#line 1379 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_47, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_116_116));
#line 1379 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_47, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_117_117));
#line 1379 "add_mutable_aux_preds.m"
    }
#line 1386 "add_mutable_aux_preds.m"
    {
#line 1386 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__SetFCInfo_47, hlds__make_hlds__add_mutable_aux_preds__Status_28, hlds__make_hlds__add_mutable_aux_preds__Context_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_84_84, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_99_99, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53);
    }
#line 1310 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_50;
#line 1310 "add_mutable_aux_preds.m"
  }
#line 1300 "add_mutable_aux_preds.m"
}

#line 1269 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_csharp_thread_local_mutable_pre_init_pred_13_p_0(
#line 1269 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_15,
#line 1269 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_16,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_17,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_18,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_19,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_20,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_27,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_28,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_29,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_30,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_31,
#line 1269 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_32)
#line 1269 "add_mutable_aux_preds.m"
{
#line 1277 "add_mutable_aux_preds.m"
  {
#line 1277 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1277 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__PreInitCode_24;
#line 1277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_25;
#line 1277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_26;
#line 1277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 1277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_39_39;
#line 1277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;
#line 1277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_41_41;
#line 1277 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_42_42;

#line 1279 "add_mutable_aux_preds.m"
    {
#line 1279 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14));
#line 1279 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[40])));
#line 1279 "add_mutable_aux_preds.m"
    }
#line 1278 "add_mutable_aux_preds.m"
    {
#line 1278 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitCode_24 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_33_33);
    }
#line 1281 "add_mutable_aux_preds.m"
    {
#line 1281 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_25 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_15, hlds__make_hlds__add_mutable_aux_preds__MutableName_16);
    }
#line 1287 "add_mutable_aux_preds.m"
    {
#line 1287 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_39_39 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 1288 "add_mutable_aux_preds.m"
    {
#line 1288 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_40_40 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 1289 "add_mutable_aux_preds.m"
    {
#line 1289 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1289 "add_mutable_aux_preds.m"
    }
#line 1289 "add_mutable_aux_preds.m"
    {
#line 1289 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitCode_24));
#line 1289 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_42_42));
#line 1289 "add_mutable_aux_preds.m"
    }
#line 1283 "add_mutable_aux_preds.m"
    {
#line 1283 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1283 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_26, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_17));
#line 1283 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_25));
#line 1283 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_26, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1283 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1283 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_26, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_39_39));
#line 1283 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_26, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_40_40));
#line 1283 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_26, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_41_41));
#line 1283 "add_mutable_aux_preds.m"
    }
#line 1291 "add_mutable_aux_preds.m"
    {
#line 1291 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_26, hlds__make_hlds__add_mutable_aux_preds__Status_20, hlds__make_hlds__add_mutable_aux_preds__Context_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_27, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_28, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_32);
    }
#line 1295 "add_mutable_aux_preds.m"
    {
#line 1295 "add_mutable_aux_preds.m"
      MR_Word base;
#line 1295 "add_mutable_aux_preds.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1295 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_18 = base;
#line 1295 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1295 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_19));
#line 1295 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_25));
#line 1295 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1295 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1295 "add_mutable_aux_preds.m"
    }
#line 1277 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_30 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_29;
#line 1277 "add_mutable_aux_preds.m"
  }
#line 1269 "add_mutable_aux_preds.m"
}

#line 1219 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_preds_10_p_0(
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_12,
#line 1219 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_34,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_35,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_36,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37,
#line 1219 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38)
#line 1219 "add_mutable_aux_preds.m"
{
#line 1225 "add_mutable_aux_preds.m"
  {
#line 1225 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_18;
#line 1225 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_19;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_20;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_21;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_22;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_23;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Varset_24;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_25;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_27;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs0_28;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_29;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_31;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_32;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_47_47;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_48_48;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_51_51;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52_52;
#line 1225 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53;
#line 1227 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_26;
#line 1256 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;

#line 1226 "add_mutable_aux_preds.m"
    {
#line 1226 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_18);
    }
#line 1227 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, (MR_Integer) 0)));
#line 1227 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, (MR_Integer) 1)));
#line 1227 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InitTerm_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, (MR_Integer) 2)));
#line 1227 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, (MR_Integer) 3)));
#line 1227 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, (MR_Integer) 4)));
#line 1227 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Varset_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, (MR_Integer) 5)));
#line 1227 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, (MR_Integer) 6)));
#line 1227 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_11, (MR_Integer) 7)));
#line 1229 "add_mutable_aux_preds.m"
    {
#line 1229 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_27 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_23);
    }
#line 1230 "add_mutable_aux_preds.m"
    {
#line 1230 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Attrs0_28 = parse_tree__prog_data__default_attributes_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Lang_12);
    }
#line 1234 "add_mutable_aux_preds.m"
    {
#line 1234 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_may_duplicate_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[2]), hlds__make_hlds__add_mutable_aux_preds__Attrs0_28, &hlds__make_hlds__add_mutable_aux_preds__Attrs_29);
    }
#line 1243 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__IsConstant_27 == (MR_Integer) 0))
#line 1244 "add_mutable_aux_preds.m"
      {
#line 1244 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41_41;
#line 1244 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42_42;
#line 1244 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43;

#line 1245 "add_mutable_aux_preds.m"
        {
#line 1245 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_31 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_19);
        }
#line 1247 "add_mutable_aux_preds.m"
        {
#line 1247 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_primitive_preds_17_p_0(hlds__make_hlds__add_mutable_aux_preds__Lang_12, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_19, hlds__make_hlds__add_mutable_aux_preds__Type_20, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_23, hlds__make_hlds__add_mutable_aux_preds__Attrs_29, hlds__make_hlds__add_mutable_aux_preds__Inst_22, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Context_25, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_35, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43);
        }
#line 1250 "add_mutable_aux_preds.m"
        {
#line 1250 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_ccsj_mutable_user_access_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_19, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_23, hlds__make_hlds__add_mutable_aux_preds__Lang_12, hlds__make_hlds__add_mutable_aux_preds__Context_25, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_42_42, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_48_48, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_43_43, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49);
        }
#line 1244 "add_mutable_aux_preds.m"
      }
#line 1243 "add_mutable_aux_preds.m"
    else
#line 1237 "add_mutable_aux_preds.m"
      {
#line 1238 "add_mutable_aux_preds.m"
        {
#line 1238 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_31 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_19);
        }
#line 1240 "add_mutable_aux_preds.m"
        {
#line 1240 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_ccsj_constant_mutable_access_preds_14_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_19, hlds__make_hlds__add_mutable_aux_preds__Attrs_29, hlds__make_hlds__add_mutable_aux_preds__Inst_22, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Context_25, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_47_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_35, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_48_48, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49);
        }
#line 1237 "add_mutable_aux_preds.m"
      }
#line 1256 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__Lang_12 == (MR_Integer) 1);
#line 1256 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1256 "add_mutable_aux_preds.m"
      {
#line 1257 "add_mutable_aux_preds.m"
        {
#line 1257 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_50_50 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_23);
        }
#line 1257 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__V_50_50 == (MR_Integer) 0);
#line 1256 "add_mutable_aux_preds.m"
      }
#line 1262 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1259 "add_mutable_aux_preds.m"
      {
#line 1259 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__add_csharp_thread_local_mutable_pre_init_pred_13_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_13, hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_19, hlds__make_hlds__add_mutable_aux_preds__Attrs_29, &hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_32, hlds__make_hlds__add_mutable_aux_preds__Context_25, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_51_51, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53);
      }
#line 1262 "add_mutable_aux_preds.m"
    else
#line 1263 "add_mutable_aux_preds.m"
      {
#line 1263 "add_mutable_aux_preds.m"
        {
#line 1263 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_25));
#line 1263 "add_mutable_aux_preds.m"
        }
#line 1263 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49;
#line 1263 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52_52 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_48_48;
#line 1263 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_51_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_47_47;
#line 1263 "add_mutable_aux_preds.m"
      }
#line 1265 "add_mutable_aux_preds.m"
    {
#line 1265 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_initialisation_14_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_19, hlds__make_hlds__add_mutable_aux_preds__Varset_24, hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_32, hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_31, hlds__make_hlds__add_mutable_aux_preds__InitTerm_21, hlds__make_hlds__add_mutable_aux_preds__Context_25, hlds__make_hlds__add_mutable_aux_preds__Status_14, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_51_51, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38);
#line 1265 "add_mutable_aux_preds.m"
      return;
    }
#line 1225 "add_mutable_aux_preds.m"
  }
#line 1219 "add_mutable_aux_preds.m"
}

#line 1168 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_defn_7_p_0(
#line 1168 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_8,
#line 1168 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_9,
#line 1168 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_10,
#line 1168 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 1168 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 1168 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 1168 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18)
#line 1168 "add_mutable_aux_preds.m"
{
#line 1173 "add_mutable_aux_preds.m"
  {
#line 1173 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1173 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_15;
#line 1173 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_16;
#line 1173 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_49_49;

#line 1189 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__Lang_8 == (MR_Integer) 1))
#line 1175 "add_mutable_aux_preds.m"
      {
#line 1175 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_14;
#line 1175 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;
#line 1175 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_42_42;
#line 1175 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;
#line 1175 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;

#line 1183 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11 == (MR_Integer) 1))
#line 1180 "add_mutable_aux_preds.m"
          {
#line 1178 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;

#line 1178 "add_mutable_aux_preds.m"
            {
#line 1178 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_53_53 = parse_tree__builtin_lib_types__int_type_0_f_0();
            }
#line 1178 "add_mutable_aux_preds.m"
            {
#line 1178 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_10, hlds__make_hlds__add_mutable_aux_preds__V_53_53);
            }
#line 1180 "add_mutable_aux_preds.m"
            if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1179 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeStr_14 = (MR_String) "int";
#line 1180 "add_mutable_aux_preds.m"
            else
#line 1181 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TypeStr_14 = (MR_String) "object";
#line 1180 "add_mutable_aux_preds.m"
          }
#line 1183 "add_mutable_aux_preds.m"
        else
#line 1185 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TypeStr_14 = (MR_String) "int";
#line 1188 "add_mutable_aux_preds.m"
        {
#line 1188 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_9));
#line 1188 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38])));
#line 1188 "add_mutable_aux_preds.m"
        }
#line 1188 "add_mutable_aux_preds.m"
        {
#line 1188 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) ((MR_String) " "));
#line 1188 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 1188 "add_mutable_aux_preds.m"
        }
#line 1188 "add_mutable_aux_preds.m"
        {
#line 1188 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_14));
#line 1188 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 1188 "add_mutable_aux_preds.m"
        }
#line 1188 "add_mutable_aux_preds.m"
        {
#line 1188 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 0) = ((MR_Box) ((MR_String) "static "));
#line 1188 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_42_42));
#line 1188 "add_mutable_aux_preds.m"
        }
#line 1187 "add_mutable_aux_preds.m"
        {
#line 1187 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__DefnBody_15 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_40_40);
        }
#line 1175 "add_mutable_aux_preds.m"
      }
#line 1189 "add_mutable_aux_preds.m"
    else
#line 1189 "add_mutable_aux_preds.m"
      if ((hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11 == (MR_Integer) 1))
#line 1190 "add_mutable_aux_preds.m"
        {
#line 1190 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_31_31;
#line 1190 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 1190 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_34_34;
#line 1190 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 1190 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_51;
#line 1195 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_54_54;

#line 1195 "add_mutable_aux_preds.m"
          {
#line 1195 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_54_54 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 1195 "add_mutable_aux_preds.m"
          {
#line 1195 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_10, hlds__make_hlds__add_mutable_aux_preds__V_54_54);
          }
#line 1197 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1196 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_51 = (MR_String) "int";
#line 1197 "add_mutable_aux_preds.m"
          else
#line 1198 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_51 = (MR_String) "java.lang.Object";
#line 1201 "add_mutable_aux_preds.m"
          {
#line 1201 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_9));
#line 1201 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[38])));
#line 1201 "add_mutable_aux_preds.m"
          }
#line 1201 "add_mutable_aux_preds.m"
          {
#line 1201 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 0) = ((MR_Box) ((MR_String) " "));
#line 1201 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 1201 "add_mutable_aux_preds.m"
          }
#line 1201 "add_mutable_aux_preds.m"
          {
#line 1201 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_51));
#line 1201 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_34_34));
#line 1201 "add_mutable_aux_preds.m"
          }
#line 1201 "add_mutable_aux_preds.m"
          {
#line 1201 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_31_31, 0) = ((MR_Box) ((MR_String) "static "));
#line 1201 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_33_33));
#line 1201 "add_mutable_aux_preds.m"
          }
#line 1200 "add_mutable_aux_preds.m"
          {
#line 1200 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_15 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_31_31);
          }
#line 1190 "add_mutable_aux_preds.m"
        }
#line 1189 "add_mutable_aux_preds.m"
      else
#line 1203 "add_mutable_aux_preds.m"
        {
#line 1203 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19;
#line 1203 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_21_21;
#line 1203 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_22_22;
#line 1203 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_24_24;
#line 1203 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 1203 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_27_27;
#line 1203 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TypeStr_52;
#line 1205 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;

#line 1205 "add_mutable_aux_preds.m"
          {
#line 1205 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_55_55 = parse_tree__builtin_lib_types__int_type_0_f_0();
          }
#line 1205 "add_mutable_aux_preds.m"
          {
#line 1205 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(hlds__make_hlds__add_mutable_aux_preds__Type_10, hlds__make_hlds__add_mutable_aux_preds__V_55_55);
          }
#line 1207 "add_mutable_aux_preds.m"
          if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 1206 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_52 = (MR_String) "java.lang.Integer";
#line 1207 "add_mutable_aux_preds.m"
          else
#line 1208 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeStr_52 = (MR_String) "java.lang.Object";
#line 1213 "add_mutable_aux_preds.m"
          {
#line 1213 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_52));
#line 1213 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[39])));
#line 1213 "add_mutable_aux_preds.m"
          }
#line 1213 "add_mutable_aux_preds.m"
          {
#line 1213 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) ((MR_String) " = new java.lang.InheritableThreadLocal<"));
#line 1213 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_27_27));
#line 1213 "add_mutable_aux_preds.m"
          }
#line 1212 "add_mutable_aux_preds.m"
          {
#line 1212 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_9));
#line 1212 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 1212 "add_mutable_aux_preds.m"
          }
#line 1211 "add_mutable_aux_preds.m"
          {
#line 1211 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 0) = ((MR_Box) ((MR_String) "> "));
#line 1211 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_24_24));
#line 1211 "add_mutable_aux_preds.m"
          }
#line 1211 "add_mutable_aux_preds.m"
          {
#line 1211 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeStr_52));
#line 1211 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_22_22));
#line 1211 "add_mutable_aux_preds.m"
          }
#line 1211 "add_mutable_aux_preds.m"
          {
#line 1211 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 0) = ((MR_Box) ((MR_String) "static java.lang.ThreadLocal<"));
#line 1211 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_21_21));
#line 1211 "add_mutable_aux_preds.m"
          }
#line 1210 "add_mutable_aux_preds.m"
          {
#line 1210 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__DefnBody_15 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_19_19);
          }
#line 1203 "add_mutable_aux_preds.m"
        }
#line 1216 "add_mutable_aux_preds.m"
    {
#line 1216 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_15));
#line 1216 "add_mutable_aux_preds.m"
    }
#line 1216 "add_mutable_aux_preds.m"
    {
#line 1216 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_16, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Lang_8));
#line 1216 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_16, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_49_49));
#line 1216 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_16, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 1216 "add_mutable_aux_preds.m"
    }
#line 1217 "add_mutable_aux_preds.m"
    {
#line 1217 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__DefnForeignBodyCode_16, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18);
#line 1217 "add_mutable_aux_preds.m"
      return;
    }
#line 1173 "add_mutable_aux_preds.m"
  }
#line 1168 "add_mutable_aux_preds.m"
}

#line 1083 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_initialisation_17_p_0(
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_18,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_19,
#line 1083 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_20,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_21,
#line 1083 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_22,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet0_23,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_24,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_25,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_26,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_27,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_28,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_44,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_45,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_46,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_48,
#line 1083 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49)
#line 1083 "add_mutable_aux_preds.m"
{
#line 1092 "add_mutable_aux_preds.m"
  {
#line 1092 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_100_100;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredName_32;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_34;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet_35;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_36;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_38;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_77_77;
#line 1092 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_78_78;

#line 1095 "add_mutable_aux_preds.m"
    {
#line 1095 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InitPredName_32 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_21, hlds__make_hlds__add_mutable_aux_preds__MutableName_22);
    }
#line 1097 "add_mutable_aux_preds.m"
    {
#line 1097 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_112_97_115_115_95_51_95_105_110_105_116_105_97_108_105_115_101_95_102_111_114_95_109_117_116_97_98_108_101_95_95_91_52_93_95_48_8_p_0(hlds__make_hlds__add_mutable_aux_preds__InitPredName_32, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Context_27, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_44, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
    }
#line 4974 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_100_100 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1101 "add_mutable_aux_preds.m"
    {
#line 1101 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_100_100, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_34, hlds__make_hlds__add_mutable_aux_preds__VarSet0_23, &hlds__make_hlds__add_mutable_aux_preds__VarSet_35);
    }
#line 1103 "add_mutable_aux_preds.m"
    {
#line 1103 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_34));
#line 1103 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1103 "add_mutable_aux_preds.m"
    }
#line 1103 "add_mutable_aux_preds.m"
    {
#line 1103 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1103 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_36, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1103 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_36, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 1103 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_36, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitTerm_25));
#line 1103 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_36, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1103 "add_mutable_aux_preds.m"
    }
#line 1110 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__IsConstant_18 == (MR_Integer) 0))
#line 1111 "add_mutable_aux_preds.m"
      {
#line 1111 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__PreInitCode_39;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_40;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_42;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_43;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_72_72;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_73_73;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_85_85;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_86_86;
#line 1111 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_87_87;

#line 1122 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_19 == (MR_Integer) 1))
#line 1113 "add_mutable_aux_preds.m"
          {
#line 1113 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 1113 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 1113 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 1113 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds__V_64_64;

#line 1118 "add_mutable_aux_preds.m"
            {
#line 1118 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_64_64 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_20);
            }
#line 1118 "add_mutable_aux_preds.m"
            {
#line 1118 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1118 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_64_64));
#line 1118 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[20])));
#line 1118 "add_mutable_aux_preds.m"
            }
#line 1117 "add_mutable_aux_preds.m"
            {
#line 1117 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1117 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "   pthread_mutex_init(&"));
#line 1117 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 1117 "add_mutable_aux_preds.m"
            }
#line 1116 "add_mutable_aux_preds.m"
            {
#line 1116 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 1116 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_61_61));
#line 1116 "add_mutable_aux_preds.m"
            }
#line 1115 "add_mutable_aux_preds.m"
            {
#line 1115 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInitCode_39 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_59_59);
            }
#line 1113 "add_mutable_aux_preds.m"
          }
#line 1122 "add_mutable_aux_preds.m"
        else
#line 1123 "add_mutable_aux_preds.m"
          {
#line 1123 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;

#line 1125 "add_mutable_aux_preds.m"
            {
#line 1125 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_20));
#line 1125 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[37])));
#line 1125 "add_mutable_aux_preds.m"
            }
#line 1124 "add_mutable_aux_preds.m"
            {
#line 1124 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__PreInitCode_39 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_55_55);
            }
#line 1123 "add_mutable_aux_preds.m"
          }
#line 1129 "add_mutable_aux_preds.m"
        {
#line 1129 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_40 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_21, hlds__make_hlds__add_mutable_aux_preds__MutableName_22);
        }
#line 1135 "add_mutable_aux_preds.m"
        {
#line 1135 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_72_72 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_100_100);
        }
#line 1136 "add_mutable_aux_preds.m"
        {
#line 1136 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_73_73 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 1137 "add_mutable_aux_preds.m"
        {
#line 1137 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1137 "add_mutable_aux_preds.m"
        }
#line 1137 "add_mutable_aux_preds.m"
        {
#line 1137 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1137 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitCode_39));
#line 1137 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 1137 "add_mutable_aux_preds.m"
        }
#line 1131 "add_mutable_aux_preds.m"
        {
#line 1131 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_26));
#line 1131 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_40));
#line 1131 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1131 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1131 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_72_72));
#line 1131 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_73_73));
#line 1131 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_74_74));
#line 1131 "add_mutable_aux_preds.m"
        }
#line 1139 "add_mutable_aux_preds.m"
        {
#line 1139 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__PreInitFCInfo_41, hlds__make_hlds__add_mutable_aux_preds__Status_28, hlds__make_hlds__add_mutable_aux_preds__Context_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_77_77, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_78_78);
        }
#line 1143 "add_mutable_aux_preds.m"
        {
#line 1143 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1143 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_42, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1143 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_42, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PreInitPredName_40));
#line 1143 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1143 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_42, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1143 "add_mutable_aux_preds.m"
        }
#line 1145 "add_mutable_aux_preds.m"
        {
#line 1145 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 1145 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "add_mutable_aux_preds.m"
        }
#line 1145 "add_mutable_aux_preds.m"
        {
#line 1145 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1145 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1145 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_43, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_24));
#line 1145 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_43, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 1145 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_43, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1145 "add_mutable_aux_preds.m"
        }
#line 1148 "add_mutable_aux_preds.m"
        {
#line 1148 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_87_87, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallSetPredExpr_43));
#line 1148 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "add_mutable_aux_preds.m"
        }
#line 1148 "add_mutable_aux_preds.m"
        {
#line 1148 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_36));
#line 1148 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_87_87));
#line 1148 "add_mutable_aux_preds.m"
        }
#line 1148 "add_mutable_aux_preds.m"
        {
#line 1148 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallPreInitExpr_42));
#line 1148 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_86_86));
#line 1148 "add_mutable_aux_preds.m"
        }
#line 1147 "add_mutable_aux_preds.m"
        {
#line 1147 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_38 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__add_mutable_aux_preds__Context_27, hlds__make_hlds__add_mutable_aux_preds__V_85_85);
        }
#line 1111 "add_mutable_aux_preds.m"
      }
#line 1110 "add_mutable_aux_preds.m"
    else
#line 1105 "add_mutable_aux_preds.m"
      {
#line 1105 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CallExpr_37;
#line 1105 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_89_89;

#line 1107 "add_mutable_aux_preds.m"
        {
#line 1107 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 1107 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1107 "add_mutable_aux_preds.m"
        }
#line 1107 "add_mutable_aux_preds.m"
        {
#line 1107 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__CallExpr_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallExpr_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1107 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallExpr_37, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1107 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallExpr_37, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_24));
#line 1107 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallExpr_37, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_89_89));
#line 1107 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallExpr_37, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1107 "add_mutable_aux_preds.m"
        }
#line 1109 "add_mutable_aux_preds.m"
        {
#line 1109 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1109 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_38, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_27));
#line 1109 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_38, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnifyExpr_36));
#line 1109 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_38, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallExpr_37));
#line 1109 "add_mutable_aux_preds.m"
        }
#line 1105 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_77_77 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50;
#line 1105 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_78_78 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 1105 "add_mutable_aux_preds.m"
      }
#line 1153 "add_mutable_aux_preds.m"
    {
#line 1153 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSet_35, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__InitPredName_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__InitPredExpr_38, hlds__make_hlds__add_mutable_aux_preds__Status_28, hlds__make_hlds__add_mutable_aux_preds__Context_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_77_77, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_45, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_78_78, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49);
#line 1153 "add_mutable_aux_preds.m"
      return;
    }
#line 1092 "add_mutable_aux_preds.m"
  }
#line 1083 "add_mutable_aux_preds.m"
}

#line 983 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_ccsj_mutable_user_access_preds_12_p_0(
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_13,
#line 983 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_14,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Lang_16,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_17,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_18,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_55,
#line 983 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_57,
#line 983 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_58,
#line 983 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_59,
#line 983 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_60)
#line 983 "add_mutable_aux_preds.m"
{
#line 990 "add_mutable_aux_preds.m"
  {
#line 990 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_128_128 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_22;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet0_23;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockPredName_24;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_25;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_26;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_27;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__GetterPredName_28;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__SetterPredName_29;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallGetterExpr_30;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CallSetterExpr_31;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_34;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_36;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredArgs_37;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_38;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetPredName_39;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetPredArgs_40;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetPredExpr_41;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IOStateInterface_42;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_67_67;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_72_72;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_73_73;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_85_85;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_91_91;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_92_92;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_93_93;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_94_94;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_95_95;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_100_100;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_101_101;
#line 990 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_102_102;

#line 991 "add_mutable_aux_preds.m"
    {
#line 991 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_62_62 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_128_128);
    }
#line 991 "add_mutable_aux_preds.m"
    {
#line 991 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_128_128, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_22, hlds__make_hlds__add_mutable_aux_preds__V_62_62, &hlds__make_hlds__add_mutable_aux_preds__VarSet0_23);
    }
#line 993 "add_mutable_aux_preds.m"
    {
#line 993 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__LockPredName_24 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_13, hlds__make_hlds__add_mutable_aux_preds__MutableName_14);
    }
#line 994 "add_mutable_aux_preds.m"
    {
#line 994 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_25 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_13, hlds__make_hlds__add_mutable_aux_preds__MutableName_14);
    }
#line 995 "add_mutable_aux_preds.m"
    {
#line 995 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 995 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 995 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 995 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_26, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockPredName_24));
#line 995 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_26, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 995 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_26, 4) = ((MR_Box) ((MR_Integer) 2));
#line 995 "add_mutable_aux_preds.m"
    }
#line 996 "add_mutable_aux_preds.m"
    {
#line 996 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 996 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 996 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_27, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 996 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_27, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockPredName_25));
#line 996 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_27, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 996 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_27, 4) = ((MR_Box) ((MR_Integer) 2));
#line 996 "add_mutable_aux_preds.m"
    }
#line 999 "add_mutable_aux_preds.m"
    {
#line 999 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__GetterPredName_28 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_13, hlds__make_hlds__add_mutable_aux_preds__MutableName_14);
    }
#line 1000 "add_mutable_aux_preds.m"
    {
#line 1000 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__SetterPredName_29 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_13, hlds__make_hlds__add_mutable_aux_preds__MutableName_14);
    }
#line 1002 "add_mutable_aux_preds.m"
    {
#line 1002 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_22));
#line 1002 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1002 "add_mutable_aux_preds.m"
    }
#line 1002 "add_mutable_aux_preds.m"
    {
#line 1002 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_67_67, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 1002 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1002 "add_mutable_aux_preds.m"
    }
#line 1001 "add_mutable_aux_preds.m"
    {
#line 1001 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallGetterExpr_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallGetterExpr_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1001 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallGetterExpr_30, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1001 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallGetterExpr_30, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__GetterPredName_28));
#line 1001 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallGetterExpr_30, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_67_67));
#line 1001 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallGetterExpr_30, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1001 "add_mutable_aux_preds.m"
    }
#line 1004 "add_mutable_aux_preds.m"
    {
#line 1004 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_73_73 = mercury__term__context_init_0_f_0();
    }
#line 1004 "add_mutable_aux_preds.m"
    {
#line 1004 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_22));
#line 1004 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_72_72, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_73_73));
#line 1004 "add_mutable_aux_preds.m"
    }
#line 1004 "add_mutable_aux_preds.m"
    {
#line 1004 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_72_72));
#line 1004 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1004 "add_mutable_aux_preds.m"
    }
#line 1003 "add_mutable_aux_preds.m"
    {
#line 1003 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__CallSetterExpr_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetterExpr_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetterExpr_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetterExpr_31, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetterPredName_29));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetterExpr_31, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_71_71));
#line 1003 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CallSetterExpr_31, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1003 "add_mutable_aux_preds.m"
    }
#line 1006 "add_mutable_aux_preds.m"
    {
#line 1006 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_36 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_13, hlds__make_hlds__add_mutable_aux_preds__MutableName_14);
    }
#line 1007 "add_mutable_aux_preds.m"
    {
#line 1007 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__StdSetPredName_39 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_13, hlds__make_hlds__add_mutable_aux_preds__MutableName_14);
    }
#line 1015 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__Lang_16 == (MR_Integer) 0))
#line 1010 "add_mutable_aux_preds.m"
      {
#line 1010 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 1010 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 1010 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 1010 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 1010 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;

#line 1012 "add_mutable_aux_preds.m"
        {
#line 1012 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallUnlockExpr_27));
#line 1012 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "add_mutable_aux_preds.m"
        }
#line 1012 "add_mutable_aux_preds.m"
        {
#line 1012 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallGetterExpr_30));
#line 1012 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 1012 "add_mutable_aux_preds.m"
        }
#line 1012 "add_mutable_aux_preds.m"
        {
#line 1012 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1012 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_26));
#line 1012 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_77_77));
#line 1012 "add_mutable_aux_preds.m"
        }
#line 1011 "add_mutable_aux_preds.m"
        {
#line 1011 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_34 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__V_76_76);
        }
#line 1014 "add_mutable_aux_preds.m"
        {
#line 1014 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallSetterExpr_31));
#line 1014 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 1014 "add_mutable_aux_preds.m"
        }
#line 1014 "add_mutable_aux_preds.m"
        {
#line 1014 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CallLockExpr_26));
#line 1014 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 1014 "add_mutable_aux_preds.m"
        }
#line 1013 "add_mutable_aux_preds.m"
        {
#line 1013 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__StdSetPredExpr_41 = parse_tree__prog_util__goal_list_to_conj_2_f_0(hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__V_80_80);
        }
#line 1010 "add_mutable_aux_preds.m"
      }
#line 1015 "add_mutable_aux_preds.m"
    else
#line 1018 "add_mutable_aux_preds.m"
      {
#line 1022 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_34 = hlds__make_hlds__add_mutable_aux_preds__CallGetterExpr_30;
#line 1023 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__StdSetPredExpr_41 = hlds__make_hlds__add_mutable_aux_preds__CallSetterExpr_31;
#line 1018 "add_mutable_aux_preds.m"
      }
#line 1028 "add_mutable_aux_preds.m"
    {
#line 1028 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_85_85 = mercury__term__context_init_0_f_0();
    }
#line 1028 "add_mutable_aux_preds.m"
    {
#line 1028 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_22));
#line 1028 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_85_85));
#line 1028 "add_mutable_aux_preds.m"
    }
#line 1028 "add_mutable_aux_preds.m"
    {
#line 1028 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__StdGetPredArgs_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdGetPredArgs_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_84_84));
#line 1028 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdGetPredArgs_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1028 "add_mutable_aux_preds.m"
    }
#line 1029 "add_mutable_aux_preds.m"
    {
#line 1029 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1029 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1029 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_38, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1029 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_38, 2) = ((MR_Box) ((MR_Integer) 1));
#line 1029 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_38, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_34));
#line 1029 "add_mutable_aux_preds.m"
    }
#line 1031 "add_mutable_aux_preds.m"
    {
#line 1031 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSet0_23, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_36, hlds__make_hlds__add_mutable_aux_preds__StdGetPredArgs_37, hlds__make_hlds__add_mutable_aux_preds__StdGetPredExpr_38, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_55, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_91_91, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_57, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_92_92, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_59, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_93_93);
    }
#line 1037 "add_mutable_aux_preds.m"
    {
#line 1037 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_95_95 = mercury__term__context_init_0_f_0();
    }
#line 1037 "add_mutable_aux_preds.m"
    {
#line 1037 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_94_94, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_22));
#line 1037 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_94_94, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_95_95));
#line 1037 "add_mutable_aux_preds.m"
    }
#line 1037 "add_mutable_aux_preds.m"
    {
#line 1037 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__StdSetPredArgs_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdSetPredArgs_40, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_94_94));
#line 1037 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__StdSetPredArgs_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1037 "add_mutable_aux_preds.m"
    }
#line 1039 "add_mutable_aux_preds.m"
    {
#line 1039 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSet0_23, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdSetPredName_39, hlds__make_hlds__add_mutable_aux_preds__StdSetPredArgs_40, hlds__make_hlds__add_mutable_aux_preds__StdSetPredExpr_41, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_91_91, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_100_100, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_92_92, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_101_101, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_93_93, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_102_102);
    }
#line 1043 "add_mutable_aux_preds.m"
    {
#line 1043 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IOStateInterface_42 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
    }
#line 1077 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__IOStateInterface_42 == (MR_Integer) 0))
#line 1078 "add_mutable_aux_preds.m"
      {
#line 1078 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_100_100;
#line 1078 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_58 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_101_101;
#line 1078 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_60 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_102_102;
#line 1078 "add_mutable_aux_preds.m"
      }
#line 1077 "add_mutable_aux_preds.m"
    else
#line 1045 "add_mutable_aux_preds.m"
      {
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IO0_43;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet1_44;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IO_45;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet_46;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_47;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_48;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_50;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_51;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_53;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_54;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_106_106;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_107_107;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_108_108;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_109_109;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_118_118;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_119_119;
#line 1045 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_120_120;

#line 1046 "add_mutable_aux_preds.m"
        {
#line 1046 "add_mutable_aux_preds.m"
          mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_128_128, (MR_String) "IO0", &hlds__make_hlds__add_mutable_aux_preds__IO0_43, hlds__make_hlds__add_mutable_aux_preds__VarSet0_23, &hlds__make_hlds__add_mutable_aux_preds__VarSet1_44);
        }
#line 1047 "add_mutable_aux_preds.m"
        {
#line 1047 "add_mutable_aux_preds.m"
          mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_128_128, (MR_String) "IO", &hlds__make_hlds__add_mutable_aux_preds__IO_45, hlds__make_hlds__add_mutable_aux_preds__VarSet1_44, &hlds__make_hlds__add_mutable_aux_preds__VarSet_46);
        }
#line 1049 "add_mutable_aux_preds.m"
        {
#line 1049 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO0_43));
#line 1049 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1049 "add_mutable_aux_preds.m"
        }
#line 1049 "add_mutable_aux_preds.m"
        {
#line 1049 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IO_45));
#line 1049 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1049 "add_mutable_aux_preds.m"
        }
#line 1049 "add_mutable_aux_preds.m"
        {
#line 1049 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_109_109));
#line 1049 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "add_mutable_aux_preds.m"
        }
#line 1049 "add_mutable_aux_preds.m"
        {
#line 1049 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_107_107));
#line 1049 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_106_106, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_108_108));
#line 1049 "add_mutable_aux_preds.m"
        }
#line 1048 "add_mutable_aux_preds.m"
        {
#line 1048 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_47, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 1048 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_47, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_106_106));
#line 1048 "add_mutable_aux_preds.m"
        }
#line 1050 "add_mutable_aux_preds.m"
        {
#line 1050 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1050 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1050 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_48, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_107_107));
#line 1050 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_48, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_109_109));
#line 1050 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_48, 4) = ((MR_Box) ((MR_Integer) 2));
#line 1050 "add_mutable_aux_preds.m"
        }
#line 1057 "add_mutable_aux_preds.m"
        {
#line 1057 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1057 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_50, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ImpureGetExpr_34));
#line 1057 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_50, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_48));
#line 1057 "add_mutable_aux_preds.m"
        }
#line 1059 "add_mutable_aux_preds.m"
        {
#line 1059 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1059 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_51, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1059 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_51, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1059 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_51, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOGetPredExpr_50));
#line 1059 "add_mutable_aux_preds.m"
        }
#line 1060 "add_mutable_aux_preds.m"
        {
#line 1060 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSet_46, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdGetPredName_36, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_47, hlds__make_hlds__add_mutable_aux_preds__PureIOGetPredExpr_51, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_100_100, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_118_118, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_101_101, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_119_119, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_102_102, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_120_120);
        }
#line 1071 "add_mutable_aux_preds.m"
        {
#line 1071 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_53, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1071 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__StdSetPredExpr_41));
#line 1071 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_53, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__CopyIOExpr_48));
#line 1071 "add_mutable_aux_preds.m"
        }
#line 1073 "add_mutable_aux_preds.m"
        {
#line 1073 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1073 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_54, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 1073 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_54, 2) = ((MR_Box) ((MR_Integer) 0));
#line 1073 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_54, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOSetPredExpr_53));
#line 1073 "add_mutable_aux_preds.m"
        }
#line 1074 "add_mutable_aux_preds.m"
        {
#line 1074 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_clause__module_add_clause_15_p_0(hlds__make_hlds__add_mutable_aux_preds__VarSet_46, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__StdSetPredName_39, hlds__make_hlds__add_mutable_aux_preds__IOPredArgs_47, hlds__make_hlds__add_mutable_aux_preds__PureIOSetPredExpr_54, hlds__make_hlds__add_mutable_aux_preds__Status_18, hlds__make_hlds__add_mutable_aux_preds__Context_17, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_118_118, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_56, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_119_119, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_58, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_120_120, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_60);
#line 1074 "add_mutable_aux_preds.m"
          return;
        }
#line 1045 "add_mutable_aux_preds.m"
      }
#line 990 "add_mutable_aux_preds.m"
  }
#line 983 "add_mutable_aux_preds.m"
}

#line 833 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_primitive_preds_16_p_0(
#line 833 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_18,
#line 833 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_19,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_20,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_21,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_22,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_23,
#line 833 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_24,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_25,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_26,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_53,
#line 833 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_55,
#line 833 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_56,
#line 833 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_57,
#line 833 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58)
#line 833 "add_mutable_aux_preds.m"
{
#line 842 "add_mutable_aux_preds.m"
  {
#line 842 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_171_171;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_172_172;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_30;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_31;
#line 842 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_32;
#line 842 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_33;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_34;
#line 842 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_35;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_36;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs0_37;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_38;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_39;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet_40;
#line 842 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_41;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_42;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_44;
#line 842 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TrailCode_45;
#line 842 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__SetCode_51;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_52;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_73_73;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_79_79;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_81_81;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_82_82;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_96_96;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_99_99;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_100_100;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_101_101;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_104_104;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_105_105;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_109_109;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_119_119;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_121_121;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_122_122;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_124_124;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_126_126;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_127_127;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_130_130;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_131_131;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_146_146;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_157_157;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_159_159;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_160_160;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_162_162;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_164_164;
#line 842 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_165_165;
#line 842 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_166_166;

#line 843 "add_mutable_aux_preds.m"
    {
#line 843 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_30 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_20);
    }
#line 844 "add_mutable_aux_preds.m"
    {
#line 844 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_21, &hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_31);
    }
#line 848 "add_mutable_aux_preds.m"
    {
#line 848 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_32 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17);
    }
#line 864 "add_mutable_aux_preds.m"
    {
#line 864 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_73_73 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MutableName_19);
    }
#line 6098 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_171_171 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 867 "add_mutable_aux_preds.m"
    {
#line 867 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_76_76 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_171_171);
    }
#line 6105 "hlds.make_hlds.add_mutable_aux_preds.c"
    hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_172_172 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0;
#line 868 "add_mutable_aux_preds.m"
    {
#line 868 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_172_172);
    }
#line 869 "add_mutable_aux_preds.m"
    {
#line 869 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 869 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_25));
#line 869 "add_mutable_aux_preds.m"
    }
#line 890 "add_mutable_aux_preds.m"
    {
#line 890 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_96_96 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MutableName_19);
    }
#line 893 "add_mutable_aux_preds.m"
    {
#line 893 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_99_99 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_171_171);
    }
#line 894 "add_mutable_aux_preds.m"
    {
#line 894 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_100_100 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_172_172);
    }
#line 902 "add_mutable_aux_preds.m"
    {
#line 902 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_21, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs0_37);
    }
#line 903 "add_mutable_aux_preds.m"
    {
#line 903 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs0_37, &hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_38);
    }
#line 904 "add_mutable_aux_preds.m"
    {
#line 904 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_109_109 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_171_171);
    }
#line 904 "add_mutable_aux_preds.m"
    {
#line 904 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_171_171, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_39, hlds__make_hlds__add_mutable_aux_preds__V_109_109, &hlds__make_hlds__add_mutable_aux_preds__VarSet_40);
    }
#line 914 "add_mutable_aux_preds.m"
    {
#line 914 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_119_119 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MutableName_19);
    }
#line 916 "add_mutable_aux_preds.m"
    {
#line 916 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_124_124 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_22);
    }
#line 916 "add_mutable_aux_preds.m"
    {
#line 916 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 1) = ((MR_Box) ((MR_String) "X"));
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_124_124));
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_122_122, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_23));
#line 916 "add_mutable_aux_preds.m"
    }
#line 916 "add_mutable_aux_preds.m"
    {
#line 916 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_122_122));
#line 916 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 916 "add_mutable_aux_preds.m"
    }
#line 918 "add_mutable_aux_preds.m"
    {
#line 918 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_126_126 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_172_172);
    }
#line 926 "add_mutable_aux_preds.m"
    {
#line 926 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs_21, &hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43);
    }
#line 927 "add_mutable_aux_preds.m"
    {
#line 927 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_44 = parse_tree__prog_item__mutable_var_trailed_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_20);
    }
#line 6204 "hlds.make_hlds.add_mutable_aux_preds.c"
    if ((hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_30 == (MR_Integer) 1))
#line 6206 "hlds.make_hlds.add_mutable_aux_preds.c"
      {
#line 6208 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_60_60;
#line 6210 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;
#line 6212 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 6214 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 6216 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 6218 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 6220 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_83_83;
#line 6222 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_85_85;
#line 6224 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_86_86;
#line 6226 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 6228 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_89_89;
#line 6230 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_91_91;
#line 6232 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_117_117;

#line 856 "add_mutable_aux_preds.m"
        {
#line 856 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_68_68 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_32, (MR_String) "\");\n#endif\n");
        }
#line 856 "add_mutable_aux_preds.m"
        {
#line 856 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                \"", hlds__make_hlds__add_mutable_aux_preds__V_68_68);
        }
#line 855 "add_mutable_aux_preds.m"
        {
#line 855 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_65_65 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_32, hlds__make_hlds__add_mutable_aux_preds__V_66_66);
        }
#line 855 "add_mutable_aux_preds.m"
        {
#line 855 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_LOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_65_65);
        }
#line 858 "add_mutable_aux_preds.m"
        {
#line 858 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 858 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 858 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 858 "add_mutable_aux_preds.m"
        }
#line 854 "add_mutable_aux_preds.m"
        {
#line 854 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 854 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_62_62));
#line 854 "add_mutable_aux_preds.m"
        }
#line 853 "add_mutable_aux_preds.m"
        {
#line 853 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_33 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_60_60);
        }
#line 882 "add_mutable_aux_preds.m"
        {
#line 882 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_91_91 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_32, (MR_String) "\");\n#endif\n");
        }
#line 882 "add_mutable_aux_preds.m"
        {
#line 882 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) ",\n                \"", hlds__make_hlds__add_mutable_aux_preds__V_91_91);
        }
#line 881 "add_mutable_aux_preds.m"
        {
#line 881 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_88_88 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__MutableMutexVarName_32, hlds__make_hlds__add_mutable_aux_preds__V_89_89);
        }
#line 881 "add_mutable_aux_preds.m"
        {
#line 881 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) "  MR_UNLOCK(&", hlds__make_hlds__add_mutable_aux_preds__V_88_88);
        }
#line 884 "add_mutable_aux_preds.m"
        {
#line 884 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 884 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_86_86));
#line 884 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 884 "add_mutable_aux_preds.m"
        }
#line 880 "add_mutable_aux_preds.m"
        {
#line 880 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 880 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 880 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_85_85));
#line 880 "add_mutable_aux_preds.m"
        }
#line 879 "add_mutable_aux_preds.m"
        {
#line 879 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_35 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_83_83);
        }
#line 907 "add_mutable_aux_preds.m"
        {
#line 907 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_117_117 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ";\n");
        }
#line 907 "add_mutable_aux_preds.m"
        {
#line 907 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_41 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_117_117);
        }
#line 956 "add_mutable_aux_preds.m"
        {
#line 956 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__SetCode_51 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) " = X;\n");
        }
#line 6340 "hlds.make_hlds.add_mutable_aux_preds.c"
      }
#line 6342 "hlds.make_hlds.add_mutable_aux_preds.c"
    else
#line 6344 "hlds.make_hlds.add_mutable_aux_preds.c"
      {
#line 6346 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_111_111;
#line 6348 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_112_112;
#line 6350 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_114_114;
#line 6352 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_151_151;
#line 6354 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_152_152;
#line 6356 "hlds.make_hlds.add_mutable_aux_preds.c"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_154_154;

#line 861 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_33 = (MR_String) "";
#line 887 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_35 = (MR_String) "";
#line 911 "add_mutable_aux_preds.m"
        {
#line 911 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_114_114 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ");\n");
        }
#line 911 "add_mutable_aux_preds.m"
        {
#line 911 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_112_112 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_114_114);
        }
#line 911 "add_mutable_aux_preds.m"
        {
#line 911 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_111_111 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_24, hlds__make_hlds__add_mutable_aux_preds__V_112_112);
        }
#line 910 "add_mutable_aux_preds.m"
        {
#line 910 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_41 = mercury__string__f_43_43_2_f_0((MR_String) "MR_get_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_111_111);
        }
#line 960 "add_mutable_aux_preds.m"
        {
#line 960 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_154_154 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ");\n");
        }
#line 960 "add_mutable_aux_preds.m"
        {
#line 960 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_152_152 = mercury__string__f_43_43_2_f_0((MR_String) ", X, ", hlds__make_hlds__add_mutable_aux_preds__V_154_154);
        }
#line 960 "add_mutable_aux_preds.m"
        {
#line 960 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_151_151 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeName_24, hlds__make_hlds__add_mutable_aux_preds__V_152_152);
        }
#line 959 "add_mutable_aux_preds.m"
        {
#line 959 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__SetCode_51 = mercury__string__f_43_43_2_f_0((MR_String) "MR_set_thread_local_mutable(", hlds__make_hlds__add_mutable_aux_preds__V_151_151);
        }
#line 6403 "hlds.make_hlds.add_mutable_aux_preds.c"
      }
#line 869 "add_mutable_aux_preds.m"
    {
#line 869 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 869 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockForeignProcBody_33));
#line 869 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_79_79));
#line 869 "add_mutable_aux_preds.m"
    }
#line 863 "add_mutable_aux_preds.m"
    {
#line 863 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 863 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_34, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_31));
#line 863 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_73_73));
#line 863 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_34, 2) = ((MR_Box) ((MR_Integer) 0));
#line 863 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_34, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 863 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_34, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_76_76));
#line 863 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_34, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_77_77));
#line 863 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_34, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 863 "add_mutable_aux_preds.m"
    }
#line 871 "add_mutable_aux_preds.m"
    {
#line 871 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__LockFCInfo_34, hlds__make_hlds__add_mutable_aux_preds__Status_26, hlds__make_hlds__add_mutable_aux_preds__Context_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_81_81, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_57, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_82_82);
    }
#line 895 "add_mutable_aux_preds.m"
    {
#line 895 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 895 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_101_101, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnlockForeignProcBody_35));
#line 895 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_101_101, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_79_79));
#line 895 "add_mutable_aux_preds.m"
    }
#line 889 "add_mutable_aux_preds.m"
    {
#line 889 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 889 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockAndUnlockAttrs_31));
#line 889 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_36, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_96_96));
#line 889 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_36, 2) = ((MR_Box) ((MR_Integer) 0));
#line 889 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_36, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 889 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_36, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_99_99));
#line 889 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_36, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_100_100));
#line 889 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_36, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_101_101));
#line 889 "add_mutable_aux_preds.m"
    }
#line 897 "add_mutable_aux_preds.m"
    {
#line 897 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnlockFCInfo_36, hlds__make_hlds__add_mutable_aux_preds__Status_26, hlds__make_hlds__add_mutable_aux_preds__Context_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_81_81, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_104_104, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_82_82, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_105_105);
    }
#line 919 "add_mutable_aux_preds.m"
    {
#line 919 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 919 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetCode_41));
#line 919 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_127_127, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_79_79));
#line 919 "add_mutable_aux_preds.m"
    }
#line 913 "add_mutable_aux_preds.m"
    {
#line 913 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_42, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeGetAttrs_38));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_42, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_119_119));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_42, 2) = ((MR_Box) ((MR_Integer) 0));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_42, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_121_121));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_42, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSet_40));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_42, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_126_126));
#line 913 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_42, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_127_127));
#line 913 "add_mutable_aux_preds.m"
    }
#line 921 "add_mutable_aux_preds.m"
    {
#line 921 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeGetFCInfo_42, hlds__make_hlds__add_mutable_aux_preds__Status_26, hlds__make_hlds__add_mutable_aux_preds__Context_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_104_104, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_130_130, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_105_105, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_131_131);
    }
#line 931 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__TrailMutableUpdates_44 == (MR_Integer) 0))
#line 932 "add_mutable_aux_preds.m"
      {
#line 932 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_46;
#line 932 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__UseTrail_47;

#line 936 "add_mutable_aux_preds.m"
        {
#line 936 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_130_130, &hlds__make_hlds__add_mutable_aux_preds__Globals_46);
        }
#line 937 "add_mutable_aux_preds.m"
        {
#line 937 "add_mutable_aux_preds.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_46, (MR_Integer) 216, &hlds__make_hlds__add_mutable_aux_preds__UseTrail_47);
        }
#line 942 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__UseTrail_47 == (MR_Integer) 0))
#line 943 "add_mutable_aux_preds.m"
          {
#line 943 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_49;
#line 943 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_50;
#line 943 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_144_144;

#line 946 "add_mutable_aux_preds.m"
            {
#line 946 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Msg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 946 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_49, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_25));
#line 946 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[36])));
#line 946 "add_mutable_aux_preds.m"
            }
#line 947 "add_mutable_aux_preds.m"
            {
#line 947 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_49));
#line 947 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "add_mutable_aux_preds.m"
            }
#line 947 "add_mutable_aux_preds.m"
            {
#line 947 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Spec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 947 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 947 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_50, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_144_144));
#line 947 "add_mutable_aux_preds.m"
            }
#line 948 "add_mutable_aux_preds.m"
            {
#line 948 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 948 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_146_146, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_50));
#line 948 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_146_146, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_131_131));
#line 948 "add_mutable_aux_preds.m"
            }
#line 951 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 943 "add_mutable_aux_preds.m"
          }
#line 942 "add_mutable_aux_preds.m"
        else
#line 939 "add_mutable_aux_preds.m"
          {
#line 939 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds__V_148_148;

#line 941 "add_mutable_aux_preds.m"
            {
#line 941 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_148_148 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_17, (MR_String) ");\n");
            }
#line 940 "add_mutable_aux_preds.m"
            {
#line 940 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = mercury__string__f_43_43_2_f_0((MR_String) "MR_trail_current_value(&", hlds__make_hlds__add_mutable_aux_preds__V_148_148);
            }
#line 939 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_146_146 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_131_131;
#line 939 "add_mutable_aux_preds.m"
          }
#line 932 "add_mutable_aux_preds.m"
      }
#line 931 "add_mutable_aux_preds.m"
    else
#line 929 "add_mutable_aux_preds.m"
      {
#line 930 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__TrailCode_45 = (MR_String) "";
#line 929 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_146_146 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_131_131;
#line 929 "add_mutable_aux_preds.m"
      }
#line 963 "add_mutable_aux_preds.m"
    {
#line 963 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_157_157 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_18, hlds__make_hlds__add_mutable_aux_preds__MutableName_19);
    }
#line 965 "add_mutable_aux_preds.m"
    {
#line 965 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_162_162 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_22);
    }
#line 965 "add_mutable_aux_preds.m"
    {
#line 965 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 965 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_39));
#line 965 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_160_160, 1) = ((MR_Box) ((MR_String) "X"));
#line 965 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_160_160, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_162_162));
#line 965 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_160_160, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_23));
#line 965 "add_mutable_aux_preds.m"
    }
#line 965 "add_mutable_aux_preds.m"
    {
#line 965 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_160_160));
#line 965 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 965 "add_mutable_aux_preds.m"
    }
#line 967 "add_mutable_aux_preds.m"
    {
#line 967 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_164_164 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_172_172);
    }
#line 968 "add_mutable_aux_preds.m"
    {
#line 968 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_166_166 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TrailCode_45, hlds__make_hlds__add_mutable_aux_preds__SetCode_51);
    }
#line 968 "add_mutable_aux_preds.m"
    {
#line 968 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_165_165 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 968 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_166_166));
#line 968 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_165_165, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_79_79));
#line 968 "add_mutable_aux_preds.m"
    }
#line 962 "add_mutable_aux_preds.m"
    {
#line 962 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 962 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_52, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__UnsafeSetAttrs_43));
#line 962 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_52, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_157_157));
#line 962 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_52, 2) = ((MR_Box) ((MR_Integer) 0));
#line 962 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_52, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_159_159));
#line 962 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_52, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSet_40));
#line 962 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_52, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_164_164));
#line 962 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_52, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_165_165));
#line 962 "add_mutable_aux_preds.m"
    }
#line 970 "add_mutable_aux_preds.m"
    {
#line 970 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__UnsafeSetFCInfo_52, hlds__make_hlds__add_mutable_aux_preds__Status_26, hlds__make_hlds__add_mutable_aux_preds__Context_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_130_130, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_146_146, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58);
    }
#line 842 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_56 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_55;
#line 842 "add_mutable_aux_preds.m"
  }
#line 833 "add_mutable_aux_preds.m"
}

#line 791 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_ccsj_constant_mutable_access_preds_14_p_0(
#line 791 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_16,
#line 791 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MutableName_17,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_18,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_19,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_21,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_22,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33,
#line 791 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_34,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_35,
#line 791 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_36,
#line 791 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37,
#line 791 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38)
#line 791 "add_mutable_aux_preds.m"
{
#line 799 "add_mutable_aux_preds.m"
  {
#line 799 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_73_73 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__X_26;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet_27;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_29;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_30;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_31;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_32;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_40_40;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_46_46;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;
#line 799 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_51_51;
#line 799 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_64_64;
#line 799 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 799 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__V_67_67;

#line 800 "add_mutable_aux_preds.m"
    {
#line 800 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_40_40 = mercury__varset__init_0_f_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_73_73);
    }
#line 800 "add_mutable_aux_preds.m"
    {
#line 800 "add_mutable_aux_preds.m"
      mercury__varset__new_named_var_4_p_0(hlds__make_hlds__add_mutable_aux_preds__TypeCtorInfo_73_73, (MR_String) "X", &hlds__make_hlds__add_mutable_aux_preds__X_26, hlds__make_hlds__add_mutable_aux_preds__V_40_40, &hlds__make_hlds__add_mutable_aux_preds__VarSet_27);
    }
#line 801 "add_mutable_aux_preds.m"
    {
#line 801 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 802 "add_mutable_aux_preds.m"
    {
#line 802 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_purity_3_p_0((MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Attrs_18, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_29);
    }
#line 803 "add_mutable_aux_preds.m"
    {
#line 803 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_thread_safe_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs0_29, &hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_30);
    }
#line 806 "add_mutable_aux_preds.m"
    {
#line 806 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_43_43 = parse_tree__prog_mutable__mutable_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MutableName_17);
    }
#line 808 "add_mutable_aux_preds.m"
    {
#line 808 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_48_48 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_19);
    }
#line 808 "add_mutable_aux_preds.m"
    {
#line 808 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 808 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_26));
#line 808 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 1) = ((MR_Box) ((MR_String) "X"));
#line 808 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_48_48));
#line 808 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20));
#line 808 "add_mutable_aux_preds.m"
    }
#line 808 "add_mutable_aux_preds.m"
    {
#line 808 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_46_46));
#line 808 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 808 "add_mutable_aux_preds.m"
    }
#line 811 "add_mutable_aux_preds.m"
    {
#line 811 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) ";\n");
    }
#line 811 "add_mutable_aux_preds.m"
    {
#line 811 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "X = ", hlds__make_hlds__add_mutable_aux_preds__V_53_53);
    }
#line 811 "add_mutable_aux_preds.m"
    {
#line 811 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 811 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_21));
#line 811 "add_mutable_aux_preds.m"
    }
#line 811 "add_mutable_aux_preds.m"
    {
#line 811 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 811 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_51_51));
#line 811 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_55_55));
#line 811 "add_mutable_aux_preds.m"
    }
#line 804 "add_mutable_aux_preds.m"
    {
#line 804 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 804 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_31, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ConstantGetAttrs_30));
#line 804 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 804 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_31, 2) = ((MR_Box) ((MR_Integer) 0));
#line 804 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_31, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 804 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_31, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSet_27));
#line 804 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_31, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28));
#line 804 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_31, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 804 "add_mutable_aux_preds.m"
    }
#line 813 "add_mutable_aux_preds.m"
    {
#line 813 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetFCInfo_31, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_33, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_37, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58);
    }
#line 820 "add_mutable_aux_preds.m"
    {
#line 820 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_59_59 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MutableName_17);
    }
#line 822 "add_mutable_aux_preds.m"
    {
#line 822 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_64_64 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_19);
    }
#line 822 "add_mutable_aux_preds.m"
    {
#line 822 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 822 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__X_26));
#line 822 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) ((MR_String) "X"));
#line 822 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_64_64));
#line 822 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_20));
#line 822 "add_mutable_aux_preds.m"
    }
#line 822 "add_mutable_aux_preds.m"
    {
#line 822 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_62_62));
#line 822 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "add_mutable_aux_preds.m"
    }
#line 825 "add_mutable_aux_preds.m"
    {
#line 825 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_67_67 = mercury__string__f_43_43_2_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_15, (MR_String) " = X;\n");
    }
#line 825 "add_mutable_aux_preds.m"
    {
#line 825 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 825 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_67_67));
#line 825 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_55_55));
#line 825 "add_mutable_aux_preds.m"
    }
#line 819 "add_mutable_aux_preds.m"
    {
#line 819 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 819 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Attrs_18));
#line 819 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_32, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_59_59));
#line 819 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_32, 2) = ((MR_Box) ((MR_Integer) 0));
#line 819 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_32, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_61_61));
#line 819 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_32, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__VarSet_27));
#line 819 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_32, 5) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_28));
#line 819 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_32, 6) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 819 "add_mutable_aux_preds.m"
    }
#line 827 "add_mutable_aux_preds.m"
    {
#line 827 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_foreign_proc__add_pragma_foreign_proc_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetFCInfo_32, hlds__make_hlds__add_mutable_aux_preds__Status_22, hlds__make_hlds__add_mutable_aux_preds__Context_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_38);
    }
#line 799 "add_mutable_aux_preds.m"
    *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_36 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_35;
#line 799 "add_mutable_aux_preds.m"
  }
#line 791 "add_mutable_aux_preds.m"
}

#line 734 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_preds_9_p_0(
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutableInfo_10,
#line 734 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_12,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_38,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_39,
#line 734 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40,
#line 734 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41)
#line 734 "add_mutable_aux_preds.m"
{
#line 740 "add_mutable_aux_preds.m"
  {
#line 740 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_16;
#line 740 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_17;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_18;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitTerm_19;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_20;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__VarSet_22;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_23;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_25;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_26;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_27;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_28;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__AlwaysBoxed_29;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_30;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs0_31;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs1_32;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Attrs_33;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_34;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_53_53;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_54_54;
#line 740 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55;
#line 742 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_24;

#line 741 "add_mutable_aux_preds.m"
    {
#line 741 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_16);
    }
#line 742 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_17 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutableInfo_10, (MR_Integer) 0)));
#line 742 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Type_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutableInfo_10, (MR_Integer) 1)));
#line 742 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InitTerm_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutableInfo_10, (MR_Integer) 2)));
#line 742 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Inst_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutableInfo_10, (MR_Integer) 3)));
#line 742 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutableInfo_10, (MR_Integer) 4)));
#line 742 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__VarSet_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutableInfo_10, (MR_Integer) 5)));
#line 742 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutableInfo_10, (MR_Integer) 6)));
#line 742 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutableInfo_10, (MR_Integer) 7)));
#line 744 "add_mutable_aux_preds.m"
    {
#line 744 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_25 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21);
    }
#line 745 "add_mutable_aux_preds.m"
    {
#line 745 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_26 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21);
    }
#line 749 "add_mutable_aux_preds.m"
    {
#line 749 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__Globals_27);
    }
#line 750 "add_mutable_aux_preds.m"
    {
#line 750 "add_mutable_aux_preds.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_27, (MR_Integer) 252, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_28);
    }
#line 755 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_28 == (MR_Integer) 0))
#line 752 "add_mutable_aux_preds.m"
      {
#line 753 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__AlwaysBoxed_29 = (MR_Integer) 1;
#line 754 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_30 = (MR_Integer) 1;
#line 752 "add_mutable_aux_preds.m"
      }
#line 755 "add_mutable_aux_preds.m"
    else
#line 756 "add_mutable_aux_preds.m"
      {
#line 757 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__AlwaysBoxed_29 = (MR_Integer) 0;
#line 758 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_30 = (MR_Integer) 0;
#line 756 "add_mutable_aux_preds.m"
      }
#line 760 "add_mutable_aux_preds.m"
    {
#line 760 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__Attrs0_31 = parse_tree__prog_data__default_attributes_1_f_0((MR_Integer) 0);
    }
#line 761 "add_mutable_aux_preds.m"
    {
#line 761 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_box_policy_3_p_0(hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_30, hlds__make_hlds__add_mutable_aux_preds__Attrs0_31, &hlds__make_hlds__add_mutable_aux_preds__Attrs1_32);
    }
#line 762 "add_mutable_aux_preds.m"
    {
#line 762 "add_mutable_aux_preds.m"
      parse_tree__prog_data__set_may_call_mercury_3_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Attrs1_32, &hlds__make_hlds__add_mutable_aux_preds__Attrs_33);
    }
#line 771 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__IsConstant_25 == (MR_Integer) 0))
#line 772 "add_mutable_aux_preds.m"
      {
#line 772 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_35;
#line 772 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 772 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47;
#line 772 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48;

#line 773 "add_mutable_aux_preds.m"
        {
#line 773 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_34 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_17);
        }
#line 728 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__AlwaysBoxed_29 == (MR_Integer) 0))
#line 730 "add_mutable_aux_preds.m"
          {
#line 730 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TypeName_35 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Type_18);
          }
#line 728 "add_mutable_aux_preds.m"
        else
#line 728 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TypeName_35 = (MR_String) "MR_Word";
#line 777 "add_mutable_aux_preds.m"
        {
#line 777 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_primitive_preds_16_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11, hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_17, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21, hlds__make_hlds__add_mutable_aux_preds__Attrs_33, hlds__make_hlds__add_mutable_aux_preds__Inst_20, hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_30, hlds__make_hlds__add_mutable_aux_preds__TypeName_35, hlds__make_hlds__add_mutable_aux_preds__Context_23, hlds__make_hlds__add_mutable_aux_preds__Status_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48);
        }
#line 780 "add_mutable_aux_preds.m"
        {
#line 780 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_ccsj_mutable_user_access_preds_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_17, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_21, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Context_23, hlds__make_hlds__add_mutable_aux_preds__Status_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55);
        }
#line 772 "add_mutable_aux_preds.m"
      }
#line 771 "add_mutable_aux_preds.m"
    else
#line 765 "add_mutable_aux_preds.m"
      {
#line 766 "add_mutable_aux_preds.m"
        {
#line 766 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_34 = parse_tree__prog_mutable__mutable_secret_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_17);
        }
#line 768 "add_mutable_aux_preds.m"
        {
#line 768 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_ccsj_constant_mutable_access_preds_14_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11, hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_17, hlds__make_hlds__add_mutable_aux_preds__Attrs_33, hlds__make_hlds__add_mutable_aux_preds__Inst_20, hlds__make_hlds__add_mutable_aux_preds__BoxPolicy_30, hlds__make_hlds__add_mutable_aux_preds__Context_23, hlds__make_hlds__add_mutable_aux_preds__Status_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_40, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55);
        }
#line 765 "add_mutable_aux_preds.m"
      }
#line 783 "add_mutable_aux_preds.m"
    {
#line 783 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_initialisation_17_p_0(hlds__make_hlds__add_mutable_aux_preds__IsConstant_25, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_26, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_11, hlds__make_hlds__add_mutable_aux_preds__ModuleName_16, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_17, hlds__make_hlds__add_mutable_aux_preds__VarSet_22, hlds__make_hlds__add_mutable_aux_preds__InitSetPredName_34, hlds__make_hlds__add_mutable_aux_preds__InitTerm_19, hlds__make_hlds__add_mutable_aux_preds__Attrs_33, hlds__make_hlds__add_mutable_aux_preds__Context_23, hlds__make_hlds__add_mutable_aux_preds__Status_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_53_53, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_37, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_41);
#line 783 "add_mutable_aux_preds.m"
      return;
    }
#line 740 "add_mutable_aux_preds.m"
  }
#line 734 "add_mutable_aux_preds.m"
}

#line 641 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_defn_and_decl_7_p_0(
#line 641 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_9,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_10,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 641 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26,
#line 641 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27)
#line 641 "add_mutable_aux_preds.m"
{
#line 646 "add_mutable_aux_preds.m"
  {
#line 646 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 646 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 646 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 646 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20;
#line 646 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DeclBody_22;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23;
#line 646 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__DefnBody_24;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_51_51;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_59_59;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_61_61;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_65_65;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_66_66;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_69_69;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_71_71;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_75_75;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_78_78;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_80_80;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_81_81;
#line 646 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_84_84;

#line 673 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11 == (MR_Integer) 1))
#line 656 "add_mutable_aux_preds.m"
      {
#line 656 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_16;
#line 656 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17;

#line 730 "add_mutable_aux_preds.m"
        {
#line 730 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Type_9);
        }
#line 728 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = (MR_String) "MR_Word";
#line 664 "add_mutable_aux_preds.m"
        {
#line 664 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__Globals_16);
        }
#line 665 "add_mutable_aux_preds.m"
        {
#line 665 "add_mutable_aux_preds.m"
          libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_16, (MR_Integer) 252, &hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17);
        }
#line 669 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__HighLevelCode_17 == (MR_Integer) 0))
#line 668 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15;
#line 669 "add_mutable_aux_preds.m"
        else
#line 671 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14;
#line 656 "add_mutable_aux_preds.m"
      }
#line 673 "add_mutable_aux_preds.m"
    else
#line 674 "add_mutable_aux_preds.m"
      {
#line 677 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__TypeName_18 = (MR_String) "MR_Unsigned";
#line 678 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 679 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15 = hlds__make_hlds__add_mutable_aux_preds__TypeName_18;
#line 674 "add_mutable_aux_preds.m"
      }
#line 685 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsConstant_10 == (MR_Integer) 1);
#line 686 "add_mutable_aux_preds.m"
    if (!(hlds__make_hlds__add_mutable_aux_preds__succeeded))
#line 686 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_11 == (MR_Integer) 0);
#line 691 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 689 "add_mutable_aux_preds.m"
      {
#line 689 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 690 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 689 "add_mutable_aux_preds.m"
      }
#line 691 "add_mutable_aux_preds.m"
    else
#line 692 "add_mutable_aux_preds.m"
      {
#line 692 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21;
#line 692 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_34_34;
#line 692 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 692 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;

#line 692 "add_mutable_aux_preds.m"
        {
#line 692 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21 = parse_tree__prog_mutable__mutable_mutex_var_name_1_f_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8);
        }
#line 695 "add_mutable_aux_preds.m"
        {
#line 695 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MutexVarName_21));
#line 695 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[17])));
#line 695 "add_mutable_aux_preds.m"
        }
#line 695 "add_mutable_aux_preds.m"
        {
#line 695 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 0) = ((MR_Box) ((MR_String) "    extern MercuryLock "));
#line 695 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_34_34, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 695 "add_mutable_aux_preds.m"
        }
#line 694 "add_mutable_aux_preds.m"
        {
#line 694 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 694 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_34_34));
#line 694 "add_mutable_aux_preds.m"
        }
#line 700 "add_mutable_aux_preds.m"
        {
#line 700 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) ((MR_String) "    MercuryLock "));
#line 700 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 700 "add_mutable_aux_preds.m"
        }
#line 699 "add_mutable_aux_preds.m"
        {
#line 699 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 0) = ((MR_Box) ((MR_String) "#ifdef MR_THREAD_SAFE\n"));
#line 699 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_43_43));
#line 699 "add_mutable_aux_preds.m"
        }
#line 692 "add_mutable_aux_preds.m"
      }
#line 710 "add_mutable_aux_preds.m"
    {
#line 710 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 0) = ((MR_Box) ((MR_String) "#endif\n"));
#line 710 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDeclStrs_19));
#line 710 "add_mutable_aux_preds.m"
    }
#line 709 "add_mutable_aux_preds.m"
    {
#line 709 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 709 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_69_69, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_71_71));
#line 709 "add_mutable_aux_preds.m"
    }
#line 709 "add_mutable_aux_preds.m"
    {
#line 709 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 709 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_69_69));
#line 709 "add_mutable_aux_preds.m"
    }
#line 709 "add_mutable_aux_preds.m"
    {
#line 709 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 0) = ((MR_Box) ((MR_String) " "));
#line 709 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_68_68));
#line 709 "add_mutable_aux_preds.m"
    }
#line 709 "add_mutable_aux_preds.m"
    {
#line 709 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LowLevelTypeName_15));
#line 709 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_66_66));
#line 709 "add_mutable_aux_preds.m"
    }
#line 709 "add_mutable_aux_preds.m"
    {
#line 709 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 709 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_65_65));
#line 709 "add_mutable_aux_preds.m"
    }
#line 708 "add_mutable_aux_preds.m"
    {
#line 708 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 0) = ((MR_Box) ((MR_String) "#else\n"));
#line 708 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_63_63));
#line 708 "add_mutable_aux_preds.m"
    }
#line 707 "add_mutable_aux_preds.m"
    {
#line 707 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 707 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_59_59, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_61_61));
#line 707 "add_mutable_aux_preds.m"
    }
#line 707 "add_mutable_aux_preds.m"
    {
#line 707 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 707 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_59_59));
#line 707 "add_mutable_aux_preds.m"
    }
#line 707 "add_mutable_aux_preds.m"
    {
#line 707 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 0) = ((MR_Box) ((MR_String) " "));
#line 707 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_56_56, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_58_58));
#line 707 "add_mutable_aux_preds.m"
    }
#line 707 "add_mutable_aux_preds.m"
    {
#line 707 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__HighLevelTypeName_14));
#line 707 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_56_56));
#line 707 "add_mutable_aux_preds.m"
    }
#line 707 "add_mutable_aux_preds.m"
    {
#line 707 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) ((MR_String) "    extern "));
#line 707 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_55_55));
#line 707 "add_mutable_aux_preds.m"
    }
#line 706 "add_mutable_aux_preds.m"
    {
#line 706 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 0) = ((MR_Box) ((MR_String) "#ifdef MR_HIGHLEVEL_CODE\n"));
#line 706 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_53_53));
#line 706 "add_mutable_aux_preds.m"
    }
#line 705 "add_mutable_aux_preds.m"
    {
#line 705 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DeclBody_22 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_51_51);
    }
#line 712 "add_mutable_aux_preds.m"
    {
#line 712 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 712 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DeclBody_22));
#line 712 "add_mutable_aux_preds.m"
    }
#line 711 "add_mutable_aux_preds.m"
    {
#line 711 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 711 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 0) = ((MR_Box) ((MR_Integer) 0));
#line 711 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 1) = ((MR_Box) ((MR_Integer) 1));
#line 711 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_75_75));
#line 711 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 711 "add_mutable_aux_preds.m"
    }
#line 713 "add_mutable_aux_preds.m"
    {
#line 713 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_decl_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignDeclCode_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76);
    }
#line 716 "add_mutable_aux_preds.m"
    {
#line 716 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 0) = ((MR_Box) ((MR_String) ";\n"));
#line 716 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_81_81, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__LockDefnStrs_20));
#line 716 "add_mutable_aux_preds.m"
    }
#line 716 "add_mutable_aux_preds.m"
    {
#line 716 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_8));
#line 716 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_80_80, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_81_81));
#line 716 "add_mutable_aux_preds.m"
    }
#line 716 "add_mutable_aux_preds.m"
    {
#line 716 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 0) = ((MR_Box) ((MR_String) " "));
#line 716 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_80_80));
#line 716 "add_mutable_aux_preds.m"
    }
#line 716 "add_mutable_aux_preds.m"
    {
#line 716 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeName_18));
#line 716 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_78_78));
#line 716 "add_mutable_aux_preds.m"
    }
#line 715 "add_mutable_aux_preds.m"
    {
#line 715 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__DefnBody_24 = mercury__string__append_list_1_f_0(hlds__make_hlds__add_mutable_aux_preds__V_77_77);
    }
#line 717 "add_mutable_aux_preds.m"
    {
#line 717 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__DefnBody_24));
#line 717 "add_mutable_aux_preds.m"
    }
#line 717 "add_mutable_aux_preds.m"
    {
#line 717 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 0) = ((MR_Box) ((MR_Integer) 0));
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_84_84));
#line 717 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_12));
#line 717 "add_mutable_aux_preds.m"
    }
#line 718 "add_mutable_aux_preds.m"
    {
#line 718 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_add_foreign_body_code_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignBodyCode_25, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_27);
#line 718 "add_mutable_aux_preds.m"
      return;
    }
#line 646 "add_mutable_aux_preds.m"
  }
#line 641 "add_mutable_aux_preds.m"
}

#line 566 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__decide_mutable_target_var_name_7_p_0(
#line 566 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8,
#line 566 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9,
#line 566 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_10,
#line 566 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11,
#line 566 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12,
#line 566 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_13,
#line 566 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14)
#line 566 "add_mutable_aux_preds.m"
{
#line 571 "add_mutable_aux_preds.m"
  {
#line 571 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 571 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15;

#line 572 "add_mutable_aux_preds.m"
    {
#line 572 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_9);
    }
#line 577 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "add_mutable_aux_preds.m"
      {
#line 576 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11);
      }
#line 577 "add_mutable_aux_preds.m"
    else
#line 578 "add_mutable_aux_preds.m"
      {
#line 578 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_15, (MR_Integer) 0)));
#line 580 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds___Specs_17;

#line 580 "add_mutable_aux_preds.m"
        {
#line 580 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_8, hlds__make_hlds__add_mutable_aux_preds__Context_13, hlds__make_hlds__add_mutable_aux_preds__ModuleName_10, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_12, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_16, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_mutable_aux_preds___Specs_17);
        }
#line 578 "add_mutable_aux_preds.m"
      }
#line 571 "add_mutable_aux_preds.m"
  }
#line 566 "add_mutable_aux_preds.m"
}

#line 478 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(
#line 478 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1,
#line 478 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2,
#line 478 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3)
#line 478 "add_mutable_aux_preds.m"
{
#line 481 "add_mutable_aux_preds.m"
  {
#line 481 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;

#line 481 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "add_mutable_aux_preds.m"
    else
#line 483 "add_mutable_aux_preds.m"
      {
#line 483 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 483 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10;
#line 486 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__V_11_11;

#line 484 "add_mutable_aux_preds.m"
        {
#line 484 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_6, hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2, &hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9);
        }
#line 486 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 0)));
#line 486 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ForeignName_5, (MR_Integer) 1)));
#line 487 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__succeeded = (hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_10 == hlds__make_hlds__add_mutable_aux_preds__HeadVar__2_2);
#line 489 "add_mutable_aux_preds.m"
        if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 488 "add_mutable_aux_preds.m"
          {
#line 488 "add_mutable_aux_preds.m"
            MR_Word base;
#line 488 "add_mutable_aux_preds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = base;
#line 488 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ForeignName_5));
#line 488 "add_mutable_aux_preds.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9));
#line 488 "add_mutable_aux_preds.m"
          }
#line 489 "add_mutable_aux_preds.m"
        else
#line 490 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__HeadVar__3_3 = hlds__make_hlds__add_mutable_aux_preds__TailMatchingForeignNames_9;
#line 483 "add_mutable_aux_preds.m"
      }
#line 481 "add_mutable_aux_preds.m"
  }
#line 478 "add_mutable_aux_preds.m"
}

#line 444 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10,
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_11,
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_12,
#line 444 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_13,
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14,
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15,
#line 444 "add_mutable_aux_preds.m"
  MR_String * hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16,
#line 444 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28,
#line 444 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29)
#line 444 "add_mutable_aux_preds.m"
{
#line 451 "add_mutable_aux_preds.m"
  {
#line 451 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 451 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18;

#line 452 "add_mutable_aux_preds.m"
    {
#line 452 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__get_matching_foreign_names_3_p_0(hlds__make_hlds__add_mutable_aux_preds__ForeignNames_15, hlds__make_hlds__add_mutable_aux_preds__ForeignLanguage_14, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18);
    }
#line 458 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "add_mutable_aux_preds.m"
      {
#line 457 "add_mutable_aux_preds.m"
        {
#line 457 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_13);
        }
#line 455 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 455 "add_mutable_aux_preds.m"
      }
#line 458 "add_mutable_aux_preds.m"
    else
#line 458 "add_mutable_aux_preds.m"
      {
#line 458 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 1)));
#line 458 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__TargetMutableNames_18, (MR_Integer) 0)));

#line 458 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__V_55_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 459 "add_mutable_aux_preds.m"
          {
#line 459 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 0)));

#line 459 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_56_56, (MR_Integer) 1)));
#line 459 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28;
#line 459 "add_mutable_aux_preds.m"
          }
#line 458 "add_mutable_aux_preds.m"
        else
#line 463 "add_mutable_aux_preds.m"
          {
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_23;
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24;
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_25;
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_26;
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_27;
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_36_36;
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_37_37;
#line 463 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_46_46;
#line 463 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__V_50_50;

#line 464 "add_mutable_aux_preds.m"
            {
#line 464 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleInfo_10, &hlds__make_hlds__add_mutable_aux_preds__Globals_23);
            }
#line 465 "add_mutable_aux_preds.m"
            {
#line 465 "add_mutable_aux_preds.m"
              libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_23, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 468 "add_mutable_aux_preds.m"
            {
#line 468 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_38_38 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_24);
            }
#line 468 "add_mutable_aux_preds.m"
            {
#line 468 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 468 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_38_38));
#line 468 "add_mutable_aux_preds.m"
            }
#line 468 "add_mutable_aux_preds.m"
            {
#line 468 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_37_37));
#line 468 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
#line 468 "add_mutable_aux_preds.m"
            }
#line 467 "add_mutable_aux_preds.m"
            {
#line 467 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[35])));
#line 467 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_36_36));
#line 467 "add_mutable_aux_preds.m"
            }
#line 466 "add_mutable_aux_preds.m"
            {
#line 466 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[34])));
#line 466 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_33_33));
#line 466 "add_mutable_aux_preds.m"
            }
#line 470 "add_mutable_aux_preds.m"
            {
#line 470 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 470 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_25));
#line 470 "add_mutable_aux_preds.m"
            }
#line 470 "add_mutable_aux_preds.m"
            {
#line 470 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_46_46));
#line 470 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "add_mutable_aux_preds.m"
            }
#line 470 "add_mutable_aux_preds.m"
            {
#line 470 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Msg_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 470 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_11));
#line 470 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_26, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 470 "add_mutable_aux_preds.m"
            }
#line 471 "add_mutable_aux_preds.m"
            {
#line 471 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_26));
#line 471 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "add_mutable_aux_preds.m"
            }
#line 471 "add_mutable_aux_preds.m"
            {
#line 471 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__Spec_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 471 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 471 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_27, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 471 "add_mutable_aux_preds.m"
            }
#line 472 "add_mutable_aux_preds.m"
            {
#line 472 "add_mutable_aux_preds.m"
              MR_Word base;
#line 472 "add_mutable_aux_preds.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_29 = base;
#line 472 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_27));
#line 472 "add_mutable_aux_preds.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_28));
#line 472 "add_mutable_aux_preds.m"
            }
#line 475 "add_mutable_aux_preds.m"
            {
#line 475 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_16 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_12, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_13);
            }
#line 463 "add_mutable_aux_preds.m"
          }
#line 458 "add_mutable_aux_preds.m"
      }
#line 451 "add_mutable_aux_preds.m"
  }
#line 444 "add_mutable_aux_preds.m"
}

#line 328 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_8(
#line 328 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 328 "add_mutable_aux_preds.m"
{
#line 328 "add_mutable_aux_preds.m"
  {
#line 328 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 328 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 328 "add_mutable_aux_preds.m"
    {
#line 328 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__328__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 328 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 328 "add_mutable_aux_preds.m"
  }
#line 328 "add_mutable_aux_preds.m"
}

#line 326 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_7(
#line 326 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 326 "add_mutable_aux_preds.m"
{
#line 326 "add_mutable_aux_preds.m"
  {
#line 326 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 326 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 326 "add_mutable_aux_preds.m"
    {
#line 326 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__326__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 326 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 326 "add_mutable_aux_preds.m"
  }
#line 326 "add_mutable_aux_preds.m"
}

#line 325 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_6(
#line 325 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 325 "add_mutable_aux_preds.m"
{
#line 325 "add_mutable_aux_preds.m"
  {
#line 325 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 325 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 325 "add_mutable_aux_preds.m"
    {
#line 325 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__325__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 325 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 325 "add_mutable_aux_preds.m"
  }
#line 325 "add_mutable_aux_preds.m"
}

#line 324 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_5(
#line 324 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 324 "add_mutable_aux_preds.m"
{
#line 324 "add_mutable_aux_preds.m"
  {
#line 324 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 324 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 324 "add_mutable_aux_preds.m"
    {
#line 324 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__324__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 324 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 324 "add_mutable_aux_preds.m"
  }
#line 324 "add_mutable_aux_preds.m"
}

#line 322 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_4(
#line 322 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 322 "add_mutable_aux_preds.m"
{
#line 322 "add_mutable_aux_preds.m"
  {
#line 322 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 322 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 322 "add_mutable_aux_preds.m"
    {
#line 322 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__322__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 322 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 322 "add_mutable_aux_preds.m"
  }
#line 322 "add_mutable_aux_preds.m"
}

#line 321 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_3(
#line 321 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 321 "add_mutable_aux_preds.m"
{
#line 321 "add_mutable_aux_preds.m"
  {
#line 321 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 321 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 321 "add_mutable_aux_preds.m"
    {
#line 321 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__321__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 321 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 321 "add_mutable_aux_preds.m"
  }
#line 321 "add_mutable_aux_preds.m"
}

#line 319 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_2(
#line 319 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 319 "add_mutable_aux_preds.m"
{
#line 319 "add_mutable_aux_preds.m"
  {
#line 319 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 319 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 319 "add_mutable_aux_preds.m"
    {
#line 319 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__319__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 319 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 319 "add_mutable_aux_preds.m"
  }
#line 319 "add_mutable_aux_preds.m"
}

#line 317 "add_mutable_aux_preds.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_1(
#line 317 "add_mutable_aux_preds.m"
  MR_Box hlds__make_hlds__add_mutable_aux_preds__closure_arg)
#line 317 "add_mutable_aux_preds.m"
{
#line 317 "add_mutable_aux_preds.m"
  {
#line 317 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 317 "add_mutable_aux_preds.m"
    MR_Box hlds__make_hlds__add_mutable_aux_preds__closure = hlds__make_hlds__add_mutable_aux_preds__closure_arg;

#line 317 "add_mutable_aux_preds.m"
    {
#line 317 "add_mutable_aux_preds.m"
      return hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__make_hlds__add_mutable_aux_preds__IntroducedFrom__pred__add_pred_decl_info_for_mutable_aux_pred__317__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__closure, (MR_Integer) 4))));
    }
#line 317 "add_mutable_aux_preds.m"
    return hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 317 "add_mutable_aux_preds.m"
  }
#line 317 "add_mutable_aux_preds.m"
}

#line 306 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 306 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_13,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_14,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 306 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 306 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36,
#line 306 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37)
#line 306 "add_mutable_aux_preds.m"
{
#line 312 "add_mutable_aux_preds.m"
  {
#line 312 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_19;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_20;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ExistQVars_21;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_22;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_23;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_24;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithType_25;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WithInst_26;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeDet_27;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_28;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Constraints_29;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_30;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_32;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_38_38;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_42_42;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_43_43;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_47_47;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_53_53;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_63_63;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_68_68;
#line 312 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_74_74;
#line 314 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Origin_18;
#line 314 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_31;
#line 331 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_33_33;

#line 313 "add_mutable_aux_preds.m"
    {
#line 313 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_11));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Name_12));
#line 313 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_13));
#line 313 "add_mutable_aux_preds.m"
    }
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___Origin_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 0)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 1)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__InstVarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 2)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__ExistQVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 3)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 4)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__PredName_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 5)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 6)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithType_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 7)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__WithInst_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 8)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__MaybeDet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 9)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Purity_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 10)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 11)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 12)));
#line 314 "add_mutable_aux_preds.m"
    hlds__make_hlds__add_mutable_aux_preds___SeqNum_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemPredDecl_10, (MR_Integer) 13)));
#line 317 "add_mutable_aux_preds.m"
    {
#line 317 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_42_42 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 317 "add_mutable_aux_preds.m"
    {
#line 317 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 317 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[0]));
#line 317 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_1));
#line 317 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 317 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_19));
#line 317 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_38_38, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_42_42));
#line 317 "add_mutable_aux_preds.m"
    }
#line 317 "add_mutable_aux_preds.m"
    {
#line 317 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_38_38, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "TypeVarSet != varset.init");
    }
#line 319 "add_mutable_aux_preds.m"
    {
#line 319 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_47_47 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 319 "add_mutable_aux_preds.m"
    {
#line 319 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 319 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[1]));
#line 319 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_2));
#line 319 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 319 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstVarSet_20));
#line 319 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_43_43, 4) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_47_47));
#line 319 "add_mutable_aux_preds.m"
    }
#line 319 "add_mutable_aux_preds.m"
    {
#line 319 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_43_43, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "InstVarSet != varset.init");
    }
#line 321 "add_mutable_aux_preds.m"
    {
#line 321 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 321 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[2]));
#line 321 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_3));
#line 321 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 321 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ExistQVars_21));
#line 321 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "add_mutable_aux_preds.m"
    }
#line 321 "add_mutable_aux_preds.m"
    {
#line 321 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_48_48, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "ExistQVars != []");
    }
#line 322 "add_mutable_aux_preds.m"
    {
#line 322 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 322 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[3]));
#line 322 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_4));
#line 322 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 322 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_22));
#line 322 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_53_53, 4) = ((MR_Box) ((MR_Integer) 0));
#line 322 "add_mutable_aux_preds.m"
    }
#line 322 "add_mutable_aux_preds.m"
    {
#line 322 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_53_53, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "PredOrFunc != pf_predicate");
    }
#line 324 "add_mutable_aux_preds.m"
    {
#line 324 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 324 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[4]));
#line 324 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_5));
#line 324 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 324 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithType_25));
#line 324 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "add_mutable_aux_preds.m"
    }
#line 324 "add_mutable_aux_preds.m"
    {
#line 324 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_58_58, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "WithType != no");
    }
#line 325 "add_mutable_aux_preds.m"
    {
#line 325 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 325 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[5]));
#line 325 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_6));
#line 325 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 325 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__WithInst_26));
#line 325 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_63_63, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "add_mutable_aux_preds.m"
    }
#line 325 "add_mutable_aux_preds.m"
    {
#line 325 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_63_63, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "WithInst != no");
    }
#line 326 "add_mutable_aux_preds.m"
    {
#line 326 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 326 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[6]));
#line 326 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_7));
#line 326 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 326 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__MaybeDet_27));
#line 326 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_68_68, 4) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[0])));
#line 326 "add_mutable_aux_preds.m"
    }
#line 326 "add_mutable_aux_preds.m"
    {
#line 326 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_68_68, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "MaybeDet != yes(detism_det)");
    }
#line 328 "add_mutable_aux_preds.m"
    {
#line 328 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 328 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 0) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_3[7]));
#line 328 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0_8));
#line 328 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 328 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Constraints_29));
#line 328 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_74_74, 4) = ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32]));
#line 328 "add_mutable_aux_preds.m"
    }
#line 328 "add_mutable_aux_preds.m"
    {
#line 328 "add_mutable_aux_preds.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_mutable_aux_preds__V_74_74, (MR_String) "hlds.make_hlds.add_mutable_aux_preds", (MR_String) "predicate \140hlds.make_hlds.add_mutable_aux_preds.add_pred_decl_info_for_mutable_aux_pred\'/9", (MR_String) "Constraints != constraints([], [])");
    }
#line 330 "add_mutable_aux_preds.m"
    {
#line 330 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33]), &hlds__make_hlds__add_mutable_aux_preds__Markers_32);
    }
#line 331 "add_mutable_aux_preds.m"
    {
#line 331 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_17, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_19, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_20, hlds__make_hlds__add_mutable_aux_preds__ExistQVars_21, hlds__make_hlds__add_mutable_aux_preds__PredOrFunc_22, hlds__make_hlds__add_mutable_aux_preds__PredName_23, hlds__make_hlds__add_mutable_aux_preds__TypesAndModes_24, hlds__make_hlds__add_mutable_aux_preds__MaybeDet_27, hlds__make_hlds__add_mutable_aux_preds__Purity_28, hlds__make_hlds__add_mutable_aux_preds__Constraints_29, hlds__make_hlds__add_mutable_aux_preds__Markers_32, hlds__make_hlds__add_mutable_aux_preds__Context_30, hlds__make_hlds__add_mutable_aux_preds__Status_14, &hlds__make_hlds__add_mutable_aux_preds__V_33_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37);
    }
#line 312 "add_mutable_aux_preds.m"
  }
#line 306 "add_mutable_aux_preds.m"
}

#line 287 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_13,
#line 287 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_14,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Kind_15,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_16,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_17,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Purity_18,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_19,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_30,
#line 287 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_31,
#line 287 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_32,
#line 287 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_33)
#line 287 "add_mutable_aux_preds.m"
{
#line 293 "add_mutable_aux_preds.m"
  {
#line 293 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 293 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23;
#line 293 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_24;
#line 293 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__InstVarSet_25;
#line 293 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Markers_28;
#line 300 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_29_29;

#line 294 "add_mutable_aux_preds.m"
    {
#line 294 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 294 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 294 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__ModuleName_13));
#line 294 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Name_14));
#line 294 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, 3) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Kind_15));
#line 294 "add_mutable_aux_preds.m"
    }
#line 295 "add_mutable_aux_preds.m"
    {
#line 295 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_24 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0);
    }
#line 296 "add_mutable_aux_preds.m"
    {
#line 296 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__InstVarSet_25 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
    }
#line 299 "add_mutable_aux_preds.m"
    {
#line 299 "add_mutable_aux_preds.m"
      hlds__hlds_pred__marker_list_to_markers_2_p_0((MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[33]), &hlds__make_hlds__add_mutable_aux_preds__Markers_28);
    }
#line 300 "add_mutable_aux_preds.m"
    {
#line 300 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_pred__module_add_pred_or_func_18_p_0(hlds__make_hlds__add_mutable_aux_preds__PredOrigin_23, hlds__make_hlds__add_mutable_aux_preds__TypeVarSet_24, hlds__make_hlds__add_mutable_aux_preds__InstVarSet_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__PredName_16, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_17, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_2[0]), hlds__make_hlds__add_mutable_aux_preds__Purity_18, (MR_Word) &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[32], hlds__make_hlds__add_mutable_aux_preds__Markers_28, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__Status_19, &hlds__make_hlds__add_mutable_aux_preds__V_29_29, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_30, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_33);
    }
#line 293 "add_mutable_aux_preds.m"
  }
#line 287 "add_mutable_aux_preds.m"
}

#line 273 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_8_p_0(
#line 273 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 273 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 273 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 273 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 273 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 273 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 273 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 273 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 273 "add_mutable_aux_preds.m"
{
#line 278 "add_mutable_aux_preds.m"
  {
#line 278 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 278 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 279 "add_mutable_aux_preds.m"
    {
#line 279 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_pre_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 281 "add_mutable_aux_preds.m"
    {
#line 281 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 281 "add_mutable_aux_preds.m"
      return;
    }
#line 278 "add_mutable_aux_preds.m"
  }
#line 273 "add_mutable_aux_preds.m"
}

#line 218 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_8_p_0(
#line 218 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 218 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 218 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 218 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 218 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 218 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 218 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 218 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 218 "add_mutable_aux_preds.m"
{
#line 247 "add_mutable_aux_preds.m"
  {
#line 247 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 247 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 248 "add_mutable_aux_preds.m"
    {
#line 248 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_unlock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 250 "add_mutable_aux_preds.m"
    {
#line 250 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 9, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 250 "add_mutable_aux_preds.m"
      return;
    }
#line 247 "add_mutable_aux_preds.m"
  }
#line 218 "add_mutable_aux_preds.m"
}

#line 215 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_8_p_0(
#line 215 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_9,
#line 215 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_10,
#line 215 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_11,
#line 215 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_12,
#line 215 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17,
#line 215 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18,
#line 215 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19,
#line 215 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20)
#line 215 "add_mutable_aux_preds.m"
{
#line 239 "add_mutable_aux_preds.m"
  {
#line 239 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 239 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_15;

#line 240 "add_mutable_aux_preds.m"
    {
#line 240 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_15 = parse_tree__prog_mutable__mutable_lock_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10);
    }
#line 242 "add_mutable_aux_preds.m"
    {
#line 242 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_9, hlds__make_hlds__add_mutable_aux_preds__Name_10, (MR_Integer) 8, hlds__make_hlds__add_mutable_aux_preds__PredName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_11, hlds__make_hlds__add_mutable_aux_preds__Context_12, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_18, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_19, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_20);
#line 242 "add_mutable_aux_preds.m"
      return;
    }
#line 239 "add_mutable_aux_preds.m"
  }
#line 215 "add_mutable_aux_preds.m"
}

#line 211 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_10_p_0(
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 211 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 211 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 211 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 211 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24)
#line 211 "add_mutable_aux_preds.m"
{
#line 231 "add_mutable_aux_preds.m"
  {
#line 231 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 231 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_19;
#line 231 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20;
#line 231 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 231 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_26_26;

#line 232 "add_mutable_aux_preds.m"
    {
#line 232 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_19 = parse_tree__prog_mutable__mutable_unsafe_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12);
    }
#line 233 "add_mutable_aux_preds.m"
    {
#line 233 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_26_26 = parse_tree__prog_mode__in_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_14);
    }
#line 233 "add_mutable_aux_preds.m"
    {
#line 233 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_13));
#line 233 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_26_26));
#line 233 "add_mutable_aux_preds.m"
    }
#line 233 "add_mutable_aux_preds.m"
    {
#line 233 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 233 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "add_mutable_aux_preds.m"
    }
#line 234 "add_mutable_aux_preds.m"
    {
#line 234 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 5, hlds__make_hlds__add_mutable_aux_preds__PredName_19, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_15, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);
#line 234 "add_mutable_aux_preds.m"
      return;
    }
#line 231 "add_mutable_aux_preds.m"
  }
#line 211 "add_mutable_aux_preds.m"
}

#line 207 "add_mutable_aux_preds.m"
static void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_10_p_0(
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_11,
#line 207 "add_mutable_aux_preds.m"
  MR_String hlds__make_hlds__add_mutable_aux_preds__Name_12,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_13,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_15,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_16,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21,
#line 207 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22,
#line 207 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23,
#line 207 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24)
#line 207 "add_mutable_aux_preds.m"
{
#line 223 "add_mutable_aux_preds.m"
  {
#line 223 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 223 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_19;
#line 223 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20;
#line 223 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_25_25;
#line 223 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__V_26_26;

#line 224 "add_mutable_aux_preds.m"
    {
#line 224 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_19 = parse_tree__prog_mutable__mutable_unsafe_get_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12);
    }
#line 225 "add_mutable_aux_preds.m"
    {
#line 225 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_26_26 = parse_tree__prog_mode__out_mode_1_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_14);
    }
#line 225 "add_mutable_aux_preds.m"
    {
#line 225 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Type_13));
#line 225 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_26_26));
#line 225 "add_mutable_aux_preds.m"
    }
#line 225 "add_mutable_aux_preds.m"
    {
#line 225 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_25_25));
#line 225 "add_mutable_aux_preds.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 225 "add_mutable_aux_preds.m"
    }
#line 226 "add_mutable_aux_preds.m"
    {
#line 226 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_11, hlds__make_hlds__add_mutable_aux_preds__Name_12, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__PredName_19, hlds__make_hlds__add_mutable_aux_preds__ArgTypesAndModes_20, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Status_15, hlds__make_hlds__add_mutable_aux_preds__Context_16, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_21, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_22, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_23, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_24);
#line 226 "add_mutable_aux_preds.m"
      return;
    }
#line 223 "add_mutable_aux_preds.m"
  }
#line 207 "add_mutable_aux_preds.m"
}

#line 34 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_defns_8_p_0(
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9,
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_10,
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29,
#line 34 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_30,
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_31,
#line 34 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_32,
#line 34 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_33,
#line 34 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_34)
#line 34 "add_mutable_aux_preds.m"
{
#line 497 "add_mutable_aux_preds.m"
  {
#line 497 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 497 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 0)));
#line 497 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 1)));
#line 497 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 4)));
#line 497 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 6)));
#line 497 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_22;
#line 497 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_23;
#line 497 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_24;
#line 497 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_25;
#line 498 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 2)));
#line 498 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Inst_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 3)));
#line 498 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 5)));
#line 498 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 7)));

#line 500 "add_mutable_aux_preds.m"
    {
#line 500 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_22 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
    }
#line 501 "add_mutable_aux_preds.m"
    {
#line 501 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_23);
    }
#line 503 "add_mutable_aux_preds.m"
    {
#line 503 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_mutable_aux_preds__Globals_24);
    }
#line 504 "add_mutable_aux_preds.m"
    {
#line 504 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_24, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_25);
    }
#line 523 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_25 == (MR_Integer) 0))
#line 506 "add_mutable_aux_preds.m"
      {
#line 506 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_26;
#line 506 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_27;
#line 506 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44;
#line 506 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_62;

#line 572 "add_mutable_aux_preds.m"
        {
#line 572 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_62 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 577 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "add_mutable_aux_preds.m"
          {
#line 576 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_26 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_23, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_14);
          }
#line 577 "add_mutable_aux_preds.m"
        else
#line 578 "add_mutable_aux_preds.m"
          {
#line 578 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_62, (MR_Integer) 0)));
#line 580 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds___Specs_64;

#line 580 "add_mutable_aux_preds.m"
            {
#line 580 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__ModuleName_23, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_14, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_63, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_mutable_aux_preds___Specs_64);
            }
#line 578 "add_mutable_aux_preds.m"
          }
#line 516 "add_mutable_aux_preds.m"
        {
#line 516 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_27 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
        }
#line 517 "add_mutable_aux_preds.m"
        {
#line 517 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_defn_and_decl_7_p_0(hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_26, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsConstant_22, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_27, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44);
        }
#line 521 "add_mutable_aux_preds.m"
        {
#line 521 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_c_mutable_preds_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_26, hlds__make_hlds__add_mutable_aux_preds__Status_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_44_44, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_34);
#line 521 "add_mutable_aux_preds.m"
          return;
        }
#line 506 "add_mutable_aux_preds.m"
      }
#line 523 "add_mutable_aux_preds.m"
    else
#line 523 "add_mutable_aux_preds.m"
      if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_25 == (MR_Integer) 2))
#line 530 "add_mutable_aux_preds.m"
        {
#line 530 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_39;
#line 530 "add_mutable_aux_preds.m"
          MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_48;
#line 530 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_49;
#line 530 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_73;

#line 572 "add_mutable_aux_preds.m"
          {
#line 572 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_73 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
          }
#line 577 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "add_mutable_aux_preds.m"
            {
#line 576 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_48 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_23, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_14);
            }
#line 577 "add_mutable_aux_preds.m"
          else
#line 578 "add_mutable_aux_preds.m"
            {
#line 578 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_73, (MR_Integer) 0)));
#line 580 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds___Specs_75;

#line 580 "add_mutable_aux_preds.m"
              {
#line 580 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__ModuleName_23, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_14, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_74, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_48, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_mutable_aux_preds___Specs_75);
              }
#line 578 "add_mutable_aux_preds.m"
            }
#line 539 "add_mutable_aux_preds.m"
          {
#line 539 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_49 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
          }
#line 540 "add_mutable_aux_preds.m"
          {
#line 540 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_defn_7_p_0((MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_48, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_49, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_39);
          }
#line 544 "add_mutable_aux_preds.m"
          {
#line 544 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_preds_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_48, hlds__make_hlds__add_mutable_aux_preds__Status_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_34);
#line 544 "add_mutable_aux_preds.m"
            return;
          }
#line 530 "add_mutable_aux_preds.m"
        }
#line 523 "add_mutable_aux_preds.m"
      else
#line 523 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_25 == (MR_Integer) 4))
#line 547 "add_mutable_aux_preds.m"
          {
#line 547 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_50;
#line 547 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_84;

#line 572 "add_mutable_aux_preds.m"
            {
#line 572 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_84 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
            }
#line 577 "add_mutable_aux_preds.m"
            if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "add_mutable_aux_preds.m"
              {
#line 576 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_50 = parse_tree__prog_mutable__mutable_c_var_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_23, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_14);
              }
#line 577 "add_mutable_aux_preds.m"
            else
#line 578 "add_mutable_aux_preds.m"
              {
#line 578 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_84, (MR_Integer) 0)));
#line 580 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds___Specs_86;

#line 580 "add_mutable_aux_preds.m"
                {
#line 580 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__ModuleName_23, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_14, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_85, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_mutable_aux_preds___Specs_86);
                }
#line 578 "add_mutable_aux_preds.m"
              }
#line 555 "add_mutable_aux_preds.m"
            {
#line 555 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_erlang_mutable_preds_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_50, hlds__make_hlds__add_mutable_aux_preds__Status_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_34);
#line 555 "add_mutable_aux_preds.m"
              return;
            }
#line 547 "add_mutable_aux_preds.m"
          }
#line 523 "add_mutable_aux_preds.m"
        else
#line 523 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_25 == (MR_Integer) 1))
#line 558 "add_mutable_aux_preds.m"
            {
#line 558 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_30 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29;
#line 558 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_32 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_31;
#line 558 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_34 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_33;
#line 558 "add_mutable_aux_preds.m"
            }
#line 523 "add_mutable_aux_preds.m"
          else
#line 530 "add_mutable_aux_preds.m"
            {
#line 530 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_52;
#line 530 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_53;
#line 530 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_54;

#line 533 "add_mutable_aux_preds.m"
              {
#line 533 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__decide_mutable_target_var_name_7_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18, hlds__make_hlds__add_mutable_aux_preds__ModuleName_23, hlds__make_hlds__add_mutable_aux_preds__MercuryMutableName_14, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Context_20, &hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_53);
              }
#line 539 "add_mutable_aux_preds.m"
              {
#line 539 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_54 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_18);
              }
#line 540 "add_mutable_aux_preds.m"
              {
#line 540 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_defn_7_p_0((MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_53, hlds__make_hlds__add_mutable_aux_preds__Type_15, hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_54, hlds__make_hlds__add_mutable_aux_preds__Context_20, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_29, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_52);
              }
#line 544 "add_mutable_aux_preds.m"
              {
#line 544 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__add_csharp_java_mutable_preds_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ItemMutable_9, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__TargetMutableName_53, hlds__make_hlds__add_mutable_aux_preds__Status_10, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_39_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_30, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_0_31, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_QualInfo_32, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_33, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_34);
#line 544 "add_mutable_aux_preds.m"
                return;
              }
#line 530 "add_mutable_aux_preds.m"
            }
#line 497 "add_mutable_aux_preds.m"
  }
#line 34 "add_mutable_aux_preds.m"
}

#line 28 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__do_mutable_checks_6_p_0(
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_8,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39,
#line 28 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40,
#line 28 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41,
#line 28 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42)
#line 28 "add_mutable_aux_preds.m"
{
#line 338 "add_mutable_aux_preds.m"
  {
#line 338 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 338 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 0)));
#line 338 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 3)));
#line 338 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 4)));
#line 338 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 6)));
#line 338 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_19;
#line 338 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_20;
#line 338 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73;
#line 339 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 1)));
#line 339 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitTerm_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 2)));
#line 339 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 5)));
#line 339 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 7)));

#line 341 "add_mutable_aux_preds.m"
    {
#line 341 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__Globals_19);
    }
#line 342 "add_mutable_aux_preds.m"
    {
#line 342 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_19, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_20);
    }
#line 406 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_20 == (MR_Integer) 0))
#line 378 "add_mutable_aux_preds.m"
      {
#line 378 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23;
#line 378 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_24;

#line 379 "add_mutable_aux_preds.m"
        {
#line 379 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
        }
#line 380 "add_mutable_aux_preds.m"
        {
#line 380 "add_mutable_aux_preds.m"
          hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_24);
        }
#line 383 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 383 "add_mutable_aux_preds.m"
        else
#line 384 "add_mutable_aux_preds.m"
          {
#line 384 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_23, (MR_Integer) 0)));
#line 387 "add_mutable_aux_preds.m"
            MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_26;

#line 387 "add_mutable_aux_preds.m"
            {
#line 387 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__ModuleName_24, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_25, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_26, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73);
            }
#line 384 "add_mutable_aux_preds.m"
          }
#line 404 "add_mutable_aux_preds.m"
        *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39;
#line 378 "add_mutable_aux_preds.m"
      }
#line 406 "add_mutable_aux_preds.m"
    else
#line 406 "add_mutable_aux_preds.m"
      if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_20 == (MR_Integer) 2))
#line 378 "add_mutable_aux_preds.m"
        {
#line 378 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedPromisePurePragma_103;
#line 378 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_104;
#line 378 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_105;
#line 378 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_108;

#line 371 "add_mutable_aux_preds.m"
          {
#line 371 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__NeedPromisePurePragma_103 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
          }
#line 379 "add_mutable_aux_preds.m"
          {
#line 379 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_104 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
          }
#line 380 "add_mutable_aux_preds.m"
          {
#line 380 "add_mutable_aux_preds.m"
            hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_105);
          }
#line 383 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_108 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 383 "add_mutable_aux_preds.m"
          else
#line 384 "add_mutable_aux_preds.m"
            {
#line 384 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_104, (MR_Integer) 0)));
#line 387 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_97;

#line 387 "add_mutable_aux_preds.m"
              {
#line 387 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__ModuleName_105, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_98, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_97, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_108);
              }
#line 384 "add_mutable_aux_preds.m"
            }
#line 403 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__NeedPromisePurePragma_103 == (MR_Integer) 0))
#line 404 "add_mutable_aux_preds.m"
            {
#line 404 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39;
#line 404 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_108;
#line 404 "add_mutable_aux_preds.m"
            }
#line 403 "add_mutable_aux_preds.m"
          else
#line 393 "add_mutable_aux_preds.m"
            {
#line 393 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__SetPredName_27;
#line 393 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_28;
#line 393 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_29;
#line 393 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_30;

#line 394 "add_mutable_aux_preds.m"
              {
#line 394 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__SetPredName_27 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_105, hlds__make_hlds__add_mutable_aux_preds__Name_11);
              }
#line 395 "add_mutable_aux_preds.m"
              {
#line 395 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_28, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetPredName_27));
#line 395 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_28, 1) = ((MR_Box) ((MR_Integer) 3));
#line 395 "add_mutable_aux_preds.m"
              }
#line 396 "add_mutable_aux_preds.m"
              {
#line 396 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 396 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_29, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_28));
#line 396 "add_mutable_aux_preds.m"
              }
#line 397 "add_mutable_aux_preds.m"
              {
#line 397 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 397 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])))));
#line 397 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_30, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_29));
#line 397 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_30, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 397 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_30, 3) = ((MR_Box) ((MR_Integer) -1));
#line 397 "add_mutable_aux_preds.m"
              }
#line 401 "add_mutable_aux_preds.m"
              {
#line 401 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0(hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_30, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_108, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73);
              }
#line 393 "add_mutable_aux_preds.m"
            }
#line 378 "add_mutable_aux_preds.m"
        }
#line 406 "add_mutable_aux_preds.m"
      else
#line 406 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_20 == (MR_Integer) 4))
#line 378 "add_mutable_aux_preds.m"
          {
#line 378 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedPromisePurePragma_135;
#line 378 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_136;
#line 378 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_137;
#line 378 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_144;

#line 376 "add_mutable_aux_preds.m"
            {
#line 376 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__NeedPromisePurePragma_135 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
            }
#line 379 "add_mutable_aux_preds.m"
            {
#line 379 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_136 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
            }
#line 380 "add_mutable_aux_preds.m"
            {
#line 380 "add_mutable_aux_preds.m"
              hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_137);
            }
#line 383 "add_mutable_aux_preds.m"
            if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_136 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_144 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 383 "add_mutable_aux_preds.m"
            else
#line 384 "add_mutable_aux_preds.m"
              {
#line 384 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_136, (MR_Integer) 0)));
#line 387 "add_mutable_aux_preds.m"
                MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_109;

#line 387 "add_mutable_aux_preds.m"
                {
#line 387 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__ModuleName_137, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 4, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_110, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_109, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_144);
                }
#line 384 "add_mutable_aux_preds.m"
              }
#line 403 "add_mutable_aux_preds.m"
            if ((hlds__make_hlds__add_mutable_aux_preds__NeedPromisePurePragma_135 == (MR_Integer) 0))
#line 404 "add_mutable_aux_preds.m"
              {
#line 404 "add_mutable_aux_preds.m"
                *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39;
#line 404 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_144;
#line 404 "add_mutable_aux_preds.m"
              }
#line 403 "add_mutable_aux_preds.m"
            else
#line 393 "add_mutable_aux_preds.m"
              {
#line 393 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__SetPredName_114;
#line 393 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_115;
#line 393 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_116;
#line 393 "add_mutable_aux_preds.m"
                MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_117;

#line 394 "add_mutable_aux_preds.m"
                {
#line 394 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__SetPredName_114 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_137, hlds__make_hlds__add_mutable_aux_preds__Name_11);
                }
#line 395 "add_mutable_aux_preds.m"
                {
#line 395 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_115, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetPredName_114));
#line 395 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_115, 1) = ((MR_Box) ((MR_Integer) 3));
#line 395 "add_mutable_aux_preds.m"
                }
#line 396 "add_mutable_aux_preds.m"
                {
#line 396 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_116, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 396 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_116, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_115));
#line 396 "add_mutable_aux_preds.m"
                }
#line 397 "add_mutable_aux_preds.m"
                {
#line 397 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 397 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_117, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])))));
#line 397 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_117, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_116));
#line 397 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_117, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 397 "add_mutable_aux_preds.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_117, 3) = ((MR_Box) ((MR_Integer) -1));
#line 397 "add_mutable_aux_preds.m"
                }
#line 401 "add_mutable_aux_preds.m"
                {
#line 401 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0(hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_117, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_144, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73);
                }
#line 393 "add_mutable_aux_preds.m"
              }
#line 378 "add_mutable_aux_preds.m"
          }
#line 406 "add_mutable_aux_preds.m"
        else
#line 406 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_20 == (MR_Integer) 1))
#line 407 "add_mutable_aux_preds.m"
            {
#line 407 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__Pieces_31;
#line 407 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__Msg_32;
#line 407 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__Spec_33;
#line 407 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_45_45;
#line 407 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_48_48;
#line 407 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_49_49;
#line 407 "add_mutable_aux_preds.m"
              MR_String hlds__make_hlds__add_mutable_aux_preds__V_50_50;
#line 407 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_57_57;
#line 407 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_58_58;
#line 407 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__V_62_62;

#line 410 "add_mutable_aux_preds.m"
              {
#line 410 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_50_50 = libs__globals__compilation_target_string_1_f_0(hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_20);
              }
#line 410 "add_mutable_aux_preds.m"
              {
#line 410 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 410 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_49_49, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_50_50));
#line 410 "add_mutable_aux_preds.m"
              }
#line 410 "add_mutable_aux_preds.m"
              {
#line 410 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_49_49));
#line 410 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[9])));
#line 410 "add_mutable_aux_preds.m"
              }
#line 409 "add_mutable_aux_preds.m"
              {
#line 409 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[30])));
#line 409 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_48_48));
#line 409 "add_mutable_aux_preds.m"
              }
#line 408 "add_mutable_aux_preds.m"
              {
#line 408 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[29])));
#line 408 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__Pieces_31, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_45_45));
#line 408 "add_mutable_aux_preds.m"
              }
#line 412 "add_mutable_aux_preds.m"
              {
#line 412 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 412 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Pieces_31));
#line 412 "add_mutable_aux_preds.m"
              }
#line 412 "add_mutable_aux_preds.m"
              {
#line 412 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_58_58));
#line 412 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "add_mutable_aux_preds.m"
              }
#line 412 "add_mutable_aux_preds.m"
              {
#line 412 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__Msg_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 412 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_32, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 412 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Msg_32, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_57_57));
#line 412 "add_mutable_aux_preds.m"
              }
#line 413 "add_mutable_aux_preds.m"
              {
#line 413 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Msg_32));
#line 413 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "add_mutable_aux_preds.m"
              }
#line 413 "add_mutable_aux_preds.m"
              {
#line 413 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__Spec_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 413 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 413 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__Spec_33, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_62_62));
#line 413 "add_mutable_aux_preds.m"
              }
#line 414 "add_mutable_aux_preds.m"
              {
#line 414 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 414 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Spec_33));
#line 414 "add_mutable_aux_preds.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41));
#line 414 "add_mutable_aux_preds.m"
              }
#line 407 "add_mutable_aux_preds.m"
              *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39;
#line 407 "add_mutable_aux_preds.m"
            }
#line 406 "add_mutable_aux_preds.m"
          else
#line 378 "add_mutable_aux_preds.m"
            {
#line 378 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__NeedPromisePurePragma_177;
#line 378 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_178;
#line 378 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_179;
#line 378 "add_mutable_aux_preds.m"
              MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_186;

#line 366 "add_mutable_aux_preds.m"
              {
#line 366 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__NeedPromisePurePragma_177 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
              }
#line 379 "add_mutable_aux_preds.m"
              {
#line 379 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_178 = parse_tree__prog_item__mutable_var_maybe_foreign_names_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
              }
#line 380 "add_mutable_aux_preds.m"
              {
#line 380 "add_mutable_aux_preds.m"
                hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_179);
              }
#line 383 "add_mutable_aux_preds.m"
              if ((hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "add_mutable_aux_preds.m"
                hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_186 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41;
#line 383 "add_mutable_aux_preds.m"
              else
#line 384 "add_mutable_aux_preds.m"
                {
#line 384 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__ForeignNames_152 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__MaybeForeignNames_178, (MR_Integer) 0)));
#line 387 "add_mutable_aux_preds.m"
                  MR_String hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_151;

#line 387 "add_mutable_aux_preds.m"
                  {
#line 387 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__get_global_name_from_foreign_names_9_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__ModuleName_179, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__ForeignNames_152, &hlds__make_hlds__add_mutable_aux_preds___TargetMutableName_151, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_41, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_186);
                  }
#line 384 "add_mutable_aux_preds.m"
                }
#line 403 "add_mutable_aux_preds.m"
              if ((hlds__make_hlds__add_mutable_aux_preds__NeedPromisePurePragma_177 == (MR_Integer) 0))
#line 404 "add_mutable_aux_preds.m"
                {
#line 404 "add_mutable_aux_preds.m"
                  *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39;
#line 404 "add_mutable_aux_preds.m"
                  hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_186;
#line 404 "add_mutable_aux_preds.m"
                }
#line 403 "add_mutable_aux_preds.m"
              else
#line 393 "add_mutable_aux_preds.m"
                {
#line 393 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__SetPredName_156;
#line 393 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_157;
#line 393 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_158;
#line 393 "add_mutable_aux_preds.m"
                  MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_159;

#line 394 "add_mutable_aux_preds.m"
                  {
#line 394 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__SetPredName_156 = parse_tree__prog_mutable__mutable_set_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_179, hlds__make_hlds__add_mutable_aux_preds__Name_11);
                  }
#line 395 "add_mutable_aux_preds.m"
                  {
#line 395 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 395 "add_mutable_aux_preds.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_157, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetPredName_156));
#line 395 "add_mutable_aux_preds.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_157, 1) = ((MR_Box) ((MR_Integer) 3));
#line 395 "add_mutable_aux_preds.m"
                  }
#line 396 "add_mutable_aux_preds.m"
                  {
#line 396 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_158 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "add_mutable_aux_preds.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_158, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 396 "add_mutable_aux_preds.m"
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_158, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__SetPredNameArity_157));
#line 396 "add_mutable_aux_preds.m"
                  }
#line 397 "add_mutable_aux_preds.m"
                  {
#line 397 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 397 "add_mutable_aux_preds.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_159, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[28])))));
#line 397 "add_mutable_aux_preds.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_159, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePurePragma_158));
#line 397 "add_mutable_aux_preds.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_159, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 397 "add_mutable_aux_preds.m"
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_159, 3) = ((MR_Box) ((MR_Integer) -1));
#line 397 "add_mutable_aux_preds.m"
                  }
#line 401 "add_mutable_aux_preds.m"
                  {
#line 401 "add_mutable_aux_preds.m"
                    hlds__make_hlds__add_pragma__add_pass_2_pragma_6_p_0(hlds__make_hlds__add_mutable_aux_preds__IOSetPromisePureItemPragma_159, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_39, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_65_186, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73);
                  }
#line 393 "add_mutable_aux_preds.m"
                }
#line 378 "add_mutable_aux_preds.m"
            }
#line 419 "add_mutable_aux_preds.m"
    {
#line 419 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__succeeded = hlds__hlds_code_util__is_valid_mutable_inst_2_p_0(*hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40, hlds__make_hlds__add_mutable_aux_preds__Inst_14);
    }
#line 421 "add_mutable_aux_preds.m"
    if (hlds__make_hlds__add_mutable_aux_preds__succeeded)
#line 421 "add_mutable_aux_preds.m"
      *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73;
#line 421 "add_mutable_aux_preds.m"
    else
#line 425 "add_mutable_aux_preds.m"
      {
#line 425 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_34;
#line 425 "add_mutable_aux_preds.m"
        MR_String hlds__make_hlds__add_mutable_aux_preds__InstStr_35;
#line 425 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36;
#line 425 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37;
#line 425 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38;
#line 425 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_76_76;
#line 425 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_77_77;
#line 425 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_88_88;
#line 425 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_89_89;
#line 425 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__V_93_93;

#line 425 "add_mutable_aux_preds.m"
        {
#line 425 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_34 = mercury__varset__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0);
        }
#line 426 "add_mutable_aux_preds.m"
        {
#line 426 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InstStr_35 = hlds__hlds_out__hlds_out_mode__mercury_expanded_inst_to_string_3_f_0(hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__DummyInstVarset_34, *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_40);
        }
#line 428 "add_mutable_aux_preds.m"
        {
#line 428 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 428 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_mutable_aux_preds__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InstStr_35));
#line 428 "add_mutable_aux_preds.m"
        }
#line 428 "add_mutable_aux_preds.m"
        {
#line 428 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_77_77));
#line 428 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[15])));
#line 428 "add_mutable_aux_preds.m"
        }
#line 428 "add_mutable_aux_preds.m"
        {
#line 428 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_mutable_aux_preds_scalar_common_1[31])));
#line 428 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_76_76));
#line 428 "add_mutable_aux_preds.m"
        }
#line 433 "add_mutable_aux_preds.m"
        {
#line 433 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 433 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstPieces_36));
#line 433 "add_mutable_aux_preds.m"
        }
#line 433 "add_mutable_aux_preds.m"
        {
#line 433 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_89_89));
#line 433 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 433 "add_mutable_aux_preds.m"
        }
#line 433 "add_mutable_aux_preds.m"
        {
#line 433 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__Context_17));
#line 433 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_88_88));
#line 433 "add_mutable_aux_preds.m"
        }
#line 435 "add_mutable_aux_preds.m"
        {
#line 435 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_93_93, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstMsg_37));
#line 435 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_mutable_aux_preds__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "add_mutable_aux_preds.m"
        }
#line 434 "add_mutable_aux_preds.m"
        {
#line 434 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 434 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 434 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38, 2) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__V_93_93));
#line 434 "add_mutable_aux_preds.m"
        }
#line 436 "add_mutable_aux_preds.m"
        {
#line 436 "add_mutable_aux_preds.m"
          MR_Word base;
#line 436 "add_mutable_aux_preds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 436 "add_mutable_aux_preds.m"
          *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42 = base;
#line 436 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__InvalidInstSpec_38));
#line 436 "add_mutable_aux_preds.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_73_73));
#line 436 "add_mutable_aux_preds.m"
        }
#line 425 "add_mutable_aux_preds.m"
      }
#line 338 "add_mutable_aux_preds.m"
  }
#line 28 "add_mutable_aux_preds.m"
}

#line 22 "add_mutable_aux_preds.m"
void MR_CALL 
hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decls_6_p_0(
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7,
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__Status_8,
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34,
#line 22 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35,
#line 22 "add_mutable_aux_preds.m"
  MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36,
#line 22 "add_mutable_aux_preds.m"
  MR_Word * hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37)
#line 22 "add_mutable_aux_preds.m"
{
#line 70 "add_mutable_aux_preds.m"
  {
#line 70 "add_mutable_aux_preds.m"
    MR_bool hlds__make_hlds__add_mutable_aux_preds__succeeded;
#line 70 "add_mutable_aux_preds.m"
    MR_String hlds__make_hlds__add_mutable_aux_preds__Name_11 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 0)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Type_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 1)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Inst_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 3)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 4)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 6)));
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__ModuleName_19;
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__Globals_20;
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21;
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WantPreInitDecl_22;
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WantLockDecls_23;
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__WantUnsafeAccessDecls_24;
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__IsConstant_26;
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38;
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39;
#line 70 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds__PredName_78;
#line 71 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___InitValue_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 2)));
#line 71 "add_mutable_aux_preds.m"
    MR_Word hlds__make_hlds__add_mutable_aux_preds___VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 5)));
#line 71 "add_mutable_aux_preds.m"
    MR_Integer hlds__make_hlds__add_mutable_aux_preds___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_mutable_aux_preds__ItemMutable_7, (MR_Integer) 7)));

#line 73 "add_mutable_aux_preds.m"
    {
#line 73 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__ModuleName_19);
    }
#line 78 "add_mutable_aux_preds.m"
    {
#line 78 "add_mutable_aux_preds.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__Globals_20);
    }
#line 79 "add_mutable_aux_preds.m"
    {
#line 79 "add_mutable_aux_preds.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_mutable_aux_preds__Globals_20, &hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21);
    }
#line 85 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21 == (MR_Integer) 0))
#line 81 "add_mutable_aux_preds.m"
      {
#line 82 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__WantPreInitDecl_22 = (MR_Integer) 1;
#line 83 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__WantLockDecls_23 = (MR_Integer) 1;
#line 84 "add_mutable_aux_preds.m"
        hlds__make_hlds__add_mutable_aux_preds__WantUnsafeAccessDecls_24 = (MR_Integer) 1;
#line 81 "add_mutable_aux_preds.m"
      }
#line 85 "add_mutable_aux_preds.m"
    else
#line 85 "add_mutable_aux_preds.m"
      if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21 == (MR_Integer) 2))
#line 86 "add_mutable_aux_preds.m"
        {
#line 86 "add_mutable_aux_preds.m"
          MR_Word hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_25;

#line 87 "add_mutable_aux_preds.m"
          {
#line 87 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_25 = parse_tree__prog_item__mutable_var_thread_local_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
          }
#line 91 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__IsThreadLocal_25 == (MR_Integer) 1))
#line 93 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__WantPreInitDecl_22 = (MR_Integer) 0;
#line 91 "add_mutable_aux_preds.m"
          else
#line 90 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__WantPreInitDecl_22 = (MR_Integer) 1;
#line 95 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__WantLockDecls_23 = (MR_Integer) 0;
#line 96 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__WantUnsafeAccessDecls_24 = (MR_Integer) 1;
#line 86 "add_mutable_aux_preds.m"
        }
#line 85 "add_mutable_aux_preds.m"
      else
#line 85 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21 == (MR_Integer) 4))
#line 103 "add_mutable_aux_preds.m"
          {
#line 104 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__WantPreInitDecl_22 = (MR_Integer) 0;
#line 105 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__WantLockDecls_23 = (MR_Integer) 0;
#line 106 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__WantUnsafeAccessDecls_24 = (MR_Integer) 0;
#line 103 "add_mutable_aux_preds.m"
          }
#line 85 "add_mutable_aux_preds.m"
        else
#line 85 "add_mutable_aux_preds.m"
          if ((hlds__make_hlds__add_mutable_aux_preds__CompilationTarget_21 == (MR_Integer) 1))
#line 108 "add_mutable_aux_preds.m"
            {
#line 110 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__WantPreInitDecl_22 = (MR_Integer) 1;
#line 111 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__WantLockDecls_23 = (MR_Integer) 1;
#line 112 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__WantUnsafeAccessDecls_24 = (MR_Integer) 1;
#line 108 "add_mutable_aux_preds.m"
            }
#line 85 "add_mutable_aux_preds.m"
          else
#line 98 "add_mutable_aux_preds.m"
            {
#line 99 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__WantPreInitDecl_22 = (MR_Integer) 0;
#line 100 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__WantLockDecls_23 = (MR_Integer) 0;
#line 101 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__WantUnsafeAccessDecls_24 = (MR_Integer) 1;
#line 98 "add_mutable_aux_preds.m"
            }
#line 262 "add_mutable_aux_preds.m"
    {
#line 262 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__PredName_78 = parse_tree__prog_mutable__mutable_init_pred_sym_name_2_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11);
    }
#line 264 "add_mutable_aux_preds.m"
    {
#line 264 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__add_mutable_aux_pred_decl_12_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 10, hlds__make_hlds__add_mutable_aux_preds__PredName_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_0_36, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39);
    }
#line 119 "add_mutable_aux_preds.m"
    {
#line 119 "add_mutable_aux_preds.m"
      hlds__make_hlds__add_mutable_aux_preds__IsConstant_26 = parse_tree__prog_item__mutable_var_constant_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
    }
#line 185 "add_mutable_aux_preds.m"
    if ((hlds__make_hlds__add_mutable_aux_preds__IsConstant_26 == (MR_Integer) 0))
#line 121 "add_mutable_aux_preds.m"
      {
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_27;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_28;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__CreateIOInterface_29;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_60_60;
#line 121 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61_61;

#line 129 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__WantPreInitDecl_22 == (MR_Integer) 0))
#line 130 "add_mutable_aux_preds.m"
          {
#line 130 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38;
#line 130 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39;
#line 130 "add_mutable_aux_preds.m"
          }
#line 129 "add_mutable_aux_preds.m"
        else
#line 127 "add_mutable_aux_preds.m"
          {
#line 127 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__add_mutable_pre_init_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47);
          }
#line 140 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__WantLockDecls_23 == (MR_Integer) 0))
#line 141 "add_mutable_aux_preds.m"
          {
#line 141 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46;
#line 141 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47;
#line 141 "add_mutable_aux_preds.m"
          }
#line 140 "add_mutable_aux_preds.m"
        else
#line 135 "add_mutable_aux_preds.m"
          {
#line 135 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48;
#line 135 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49;

#line 136 "add_mutable_aux_preds.m"
            {
#line 136 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_mutable_lock_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_46_46, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_47_47, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49);
            }
#line 138 "add_mutable_aux_preds.m"
            {
#line 138 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_mutable_unlock_pred_decl_8_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_48_48, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_49_49, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51);
            }
#line 135 "add_mutable_aux_preds.m"
          }
#line 149 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__WantUnsafeAccessDecls_24 == (MR_Integer) 0))
#line 150 "add_mutable_aux_preds.m"
          {
#line 150 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50;
#line 150 "add_mutable_aux_preds.m"
            hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51;
#line 150 "add_mutable_aux_preds.m"
          }
#line 149 "add_mutable_aux_preds.m"
        else
#line 144 "add_mutable_aux_preds.m"
          {
#line 144 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52;
#line 144 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53;

#line 145 "add_mutable_aux_preds.m"
            {
#line 145 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_get_pred_decl_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_50_50, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_51_51, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53);
            }
#line 147 "add_mutable_aux_preds.m"
            {
#line 147 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_mutable_unsafe_set_pred_decl_10_p_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__Context_17, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_52_52, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_53_53, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55);
            }
#line 144 "add_mutable_aux_preds.m"
          }
#line 156 "add_mutable_aux_preds.m"
        {
#line 156 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_27 = parse_tree__prog_mutable__std_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
        }
#line 158 "add_mutable_aux_preds.m"
        {
#line 158 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_28 = parse_tree__prog_mutable__std_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
        }
#line 160 "add_mutable_aux_preds.m"
        {
#line 160 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__StdGetPredDecl_27, hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 0, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_54_54, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_55_55, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58);
        }
#line 163 "add_mutable_aux_preds.m"
        {
#line 163 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__StdSetPredDecl_28, hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 1, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_57_57, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_60_60, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_58_58, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61_61);
        }
#line 169 "add_mutable_aux_preds.m"
        {
#line 169 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__CreateIOInterface_29 = parse_tree__prog_item__mutable_var_attach_to_io_state_1_f_0(hlds__make_hlds__add_mutable_aux_preds__MutAttrs_15);
        }
#line 182 "add_mutable_aux_preds.m"
        if ((hlds__make_hlds__add_mutable_aux_preds__CreateIOInterface_29 == (MR_Integer) 0))
#line 183 "add_mutable_aux_preds.m"
          {
#line 183 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_60_60;
#line 183 "add_mutable_aux_preds.m"
            *hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37 = hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61_61;
#line 183 "add_mutable_aux_preds.m"
          }
#line 182 "add_mutable_aux_preds.m"
        else
#line 171 "add_mutable_aux_preds.m"
          {
#line 171 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_30;
#line 171 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_31;
#line 171 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_63_63;
#line 171 "add_mutable_aux_preds.m"
            MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_64_64;

#line 172 "add_mutable_aux_preds.m"
            {
#line 172 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_30 = parse_tree__prog_mutable__io_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
            }
#line 174 "add_mutable_aux_preds.m"
            {
#line 174 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_31 = parse_tree__prog_mutable__io_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
            }
#line 176 "add_mutable_aux_preds.m"
            {
#line 176 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__IOGetPredDecl_30, hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 2, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_60_60, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_63_63, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_61_61, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_64_64);
            }
#line 179 "add_mutable_aux_preds.m"
            {
#line 179 "add_mutable_aux_preds.m"
              hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__IOSetPredDecl_31, hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 3, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_63_63, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_64_64, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37);
#line 179 "add_mutable_aux_preds.m"
              return;
            }
#line 171 "add_mutable_aux_preds.m"
          }
#line 121 "add_mutable_aux_preds.m"
      }
#line 185 "add_mutable_aux_preds.m"
    else
#line 186 "add_mutable_aux_preds.m"
      {
#line 186 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_32;
#line 186 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_33;
#line 186 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41_41;
#line 186 "add_mutable_aux_preds.m"
        MR_Word hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42_42;

#line 191 "add_mutable_aux_preds.m"
        {
#line 191 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_32 = parse_tree__prog_mutable__constant_get_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
        }
#line 193 "add_mutable_aux_preds.m"
        {
#line 193 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_33 = parse_tree__prog_mutable__constant_set_pred_decl_5_f_0(hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, hlds__make_hlds__add_mutable_aux_preds__Type_12, hlds__make_hlds__add_mutable_aux_preds__Inst_14, hlds__make_hlds__add_mutable_aux_preds__Context_17);
        }
#line 195 "add_mutable_aux_preds.m"
        {
#line 195 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantGetPredDecl_32, hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 6, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_38_38, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_39_39, &hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42_42);
        }
#line 198 "add_mutable_aux_preds.m"
        {
#line 198 "add_mutable_aux_preds.m"
          hlds__make_hlds__add_mutable_aux_preds__add_pred_decl_info_for_mutable_aux_pred_9_p_0(hlds__make_hlds__add_mutable_aux_preds__ConstantSetPredDecl_33, hlds__make_hlds__add_mutable_aux_preds__ModuleName_19, hlds__make_hlds__add_mutable_aux_preds__Name_11, (MR_Integer) 7, hlds__make_hlds__add_mutable_aux_preds__Status_8, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_41_41, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_ModuleInfo_35, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_42_42, hlds__make_hlds__add_mutable_aux_preds__STATE_VARIABLE_Specs_37);
#line 198 "add_mutable_aux_preds.m"
          return;
        }
#line 186 "add_mutable_aux_preds.m"
      }
#line 70 "add_mutable_aux_preds.m"
  }
#line 22 "add_mutable_aux_preds.m"
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init(void)
{
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_mutable_aux_preds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_mutable_aux_preds. */
