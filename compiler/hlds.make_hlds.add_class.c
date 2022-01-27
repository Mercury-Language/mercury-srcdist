/*
** Automatically generated from `add_class.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module hlds.make_hlds.add_class. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_class__init
ENDINIT
*/

#include "hlds.make_hlds.add_class.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.clause_to_proc.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 155 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 158 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 161 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 164 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 167 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 170 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 173 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 176 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 179 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 182 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 185 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 188 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 701 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__701__1_2_p_0(
#line 701 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 701 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_26);

#line 376 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__376__1_2_p_0(
#line 376 "add_class.m"
  MR_Word hlds__make_hlds__add_class__WithInst_25,
#line 376 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_66);

#line 375 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__375__1_2_p_0(
#line 375 "add_class.m"
  MR_Word hlds__make_hlds__add_class__WithType_24,
#line 375 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_61);

#line 209 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__209__1_3_f_0(
#line 209 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 209 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_11,
#line 209 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__3_12);

#line 160 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__160__1_2_p_0(
#line 160 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_89,
#line 160 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__2_90);

#line 764 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__MethodName_7,
#line 764 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__MethodArity_8,
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_9,
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_10,
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 764 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16);

#line 751 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
#line 751 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_7,
#line 751 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__ClassArity_8,
#line 751 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_9,
#line 751 "add_class.m"
  MR_String hlds__make_hlds__add_class__Description_10,
#line 751 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 751 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16);

#line 734 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
#line 734 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredInfo_4,
#line 734 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13,
#line 734 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14);

#line 701 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
#line 701 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg);

#line 688 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_16,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceStatus_17,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceClause_18,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVarSet0_19,
#line 688 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__TVarSet_20,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_45,
#line 688 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_46,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_47,
#line 688 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_48,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_49,
#line 688 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_50,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_51,
#line 688 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_52);

#line 614 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(
#line 614 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_3,
#line 614 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_4);

#line 572 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_instance_constraints_5_p_0(
#line 572 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_6,
#line 572 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_7,
#line 572 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_8,
#line 572 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25,
#line 572 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26);

#line 516 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_1,
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewTypes_2,
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewTVarSet_3,
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewContext_4,
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__5_5,
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
#line 516 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7);

#line 416 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_method_modes_7_p_0(
#line 416 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 416 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2,
#line 416 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3,
#line 416 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4,
#line 416 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5,
#line 416 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
#line 416 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7);

#line 376 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0_2(
#line 376 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg);

#line 375 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0_1(
#line 375 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg);

#line 359 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0(
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_11,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_12,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_13,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_14,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_15,
#line 359 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__MaybePredIdProcId_16,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47,
#line 359 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49,
#line 359 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50);

#line 342 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_methods_10_p_0(
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_1,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_2,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_3,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_4,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__5_5,
#line 342 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__6_6,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_7,
#line 342 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_8,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_9,
#line 342 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_10);

#line 283 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_11_p_0(
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_12,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_13,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_14,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_15,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_16,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51,
#line 283 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53,
#line 283 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55,
#line 283 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);

#line 278 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(
#line 278 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_2);

#line 272 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0_2(
#line 272 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 272 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 272 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 272 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 272 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 272 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 272 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 272 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7);

#line 260 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0_1(
#line 260 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 260 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);

#line 251 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0(
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_11,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_12,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_13,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_14,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Methods_15,
#line 251 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__PredProcIds_16,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_22,
#line 251 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_23,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_24,
#line 251 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_25);

#line 240 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
#line 240 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldFunDeps0_3,
#line 240 "add_class.m"
  MR_Word hlds__make_hlds__add_class__FunDeps0_4);

#line 224 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__constraints_are_identical_6_p_0(
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVars0_7,
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVarSet_8,
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldConstraints0_9,
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_10,
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__VarSet_11,
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Constraints_12);

#line 213 "add_class.m"
static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
#line 213 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeInfo_for_T_17,
#line 213 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 213 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__N_2,
#line 213 "add_class.m"
  MR_Box hlds__make_hlds__add_class__X_3);

#line 209 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
#line 209 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 209 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 209 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2);

#line 200 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
#line 200 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 200 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_2);

#line 682 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1(
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 682 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 682 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 682 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_8,
#line 682 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_9,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_10,
#line 682 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_11);

#line 569 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_2(
#line 569 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 569 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 569 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 569 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3);

#line 567 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_1(
#line 567 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 567 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);

#line 160 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_7_p_0_3(
#line 160 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 160 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 160 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2);

#line 160 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_7_p_0_2(
#line 160 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 160 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 160 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2);

#line 89 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_7_p_0_1(
#line 89 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 89 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);


static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[47][2];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[4][3];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[5][5];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][17];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[1][7];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][14];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_10[2][1];




static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[47][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_1[1]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The superclass constraints do not match."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "The functional dependencies do not match."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 17 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "instance constraints are incompatible with"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "typeclass"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "method declaration."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: multiply defined (or overlapping)"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "instance declarations for class"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Previous instance declaration was here."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_10[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In instance declaration for class "))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "instance constraints here."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_10[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no mode declaration"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type class method predicate"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: mode declaration for type class method"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_add_class_defn_7_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_add_class_defn_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_8[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_10_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][17] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_instance_status_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_typeclass_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_10[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[35])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[39])))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1089 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1097 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1105 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1114 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0
  }
};

#line 1122 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1130 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1138 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1146 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1154 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0
  }
};

#line 1162 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0
  }
};

#line 1170 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1178 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 701 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__701__1_2_p_0(
#line 701 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 701 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_26)
#line 701 "add_class.m"
{
#line 701 "add_class.m"
  {
#line 701 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__PredOrFunc_15 == hlds__make_hlds__add_class__ClausePredOrFunc_26);

#line 701 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 701 "add_class.m"
  }
#line 701 "add_class.m"
}

#line 376 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__376__1_2_p_0(
#line 376 "add_class.m"
  MR_Word hlds__make_hlds__add_class__WithInst_25,
#line 376 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_66)
#line 376 "add_class.m"
{
#line 376 "add_class.m"
  {
#line 376 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 376 "add_class.m"
    {
#line 376 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[9], ((MR_Box) (hlds__make_hlds__add_class__WithInst_25)), ((MR_Box) (hlds__make_hlds__add_class__HeadVar__2_66)));
    }
#line 376 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 376 "add_class.m"
  }
#line 376 "add_class.m"
}

#line 375 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__375__1_2_p_0(
#line 375 "add_class.m"
  MR_Word hlds__make_hlds__add_class__WithType_24,
#line 375 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_61)
#line 375 "add_class.m"
{
#line 375 "add_class.m"
  {
#line 375 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 375 "add_class.m"
    {
#line 375 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[8], ((MR_Box) (hlds__make_hlds__add_class__WithType_24)), ((MR_Box) (hlds__make_hlds__add_class__HeadVar__2_61)));
    }
#line 375 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 375 "add_class.m"
  }
#line 375 "add_class.m"
}

#line 209 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__209__1_3_f_0(
#line 209 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 209 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_11,
#line 209 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__3_12)
#line 209 "add_class.m"
{
#line 209 "add_class.m"
  {
#line 209 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 209 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HeadVar__4_13;
#line 209 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__N_9;

#line 210 "add_class.m"
    {
#line 210 "add_class.m"
      hlds__make_hlds__add_class__N_9 = hlds__make_hlds__add_class__get_list_index_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], hlds__make_hlds__add_class__TVars_4, (MR_Integer) 1, ((MR_Box) (hlds__make_hlds__add_class__HeadVar__2_11)));
    }
#line 209 "add_class.m"
    {
#line 209 "add_class.m"
      hlds__make_hlds__add_class__HeadVar__4_13 = mercury__set__insert_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_class__HeadVar__3_12, ((MR_Box) (hlds__make_hlds__add_class__N_9)));
    }
#line 209 "add_class.m"
    return hlds__make_hlds__add_class__HeadVar__4_13;
#line 209 "add_class.m"
  }
#line 209 "add_class.m"
}

#line 160 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__160__1_2_p_0(
#line 160 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_89,
#line 160 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__2_90)
#line 160 "add_class.m"
{
#line 160 "add_class.m"
  {
#line 160 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__HeadVar__1_89)) == (MR_mktag((MR_Integer) 1)));
#line 160 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pred_52;
#line 160 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__Proc_53;
#line 160 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_91_91;

#line 162 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 162 "add_class.m"
      {
#line 162 "add_class.m"
        hlds__make_hlds__add_class__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_89, (MR_Integer) 0)));
#line 162 "add_class.m"
        hlds__make_hlds__add_class__Pred_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_91_91, (MR_Integer) 0)));
#line 162 "add_class.m"
        hlds__make_hlds__add_class__Proc_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_91_91, (MR_Integer) 1)));
#line 163 "add_class.m"
        {
#line 163 "add_class.m"
          MR_Word base;
#line 163 "add_class.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 163 "add_class.m"
          *hlds__make_hlds__add_class__HeadVar__2_90 = base;
#line 163 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pred_52));
#line 163 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__Proc_53));
#line 163 "add_class.m"
        }
#line 163 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 162 "add_class.m"
      }
#line 160 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 160 "add_class.m"
  }
#line 160 "add_class.m"
}

#line 764 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__MethodName_7,
#line 764 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__MethodArity_8,
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_9,
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_10,
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 764 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16)
#line 764 "add_class.m"
{
#line 769 "add_class.m"
  {
#line 769 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pieces_12;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg_13;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Spec_14;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_19_19;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_22_22;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_25_25;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_26_26;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_33_33;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_34_34;
#line 769 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_38_38;

#line 771 "add_class.m"
    {
#line 771 "add_class.m"
      hlds__make_hlds__add_class__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 771 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__add_class__MethodName_7));
#line 771 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__MethodArity_8));
#line 771 "add_class.m"
    }
#line 771 "add_class.m"
    {
#line 771 "add_class.m"
      hlds__make_hlds__add_class__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 771 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_21_21));
#line 771 "add_class.m"
    }
#line 772 "add_class.m"
    {
#line 772 "add_class.m"
      hlds__make_hlds__add_class__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 772 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_9));
#line 772 "add_class.m"
    }
#line 772 "add_class.m"
    {
#line 772 "add_class.m"
      hlds__make_hlds__add_class__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_26_26));
#line 772 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[31])));
#line 772 "add_class.m"
    }
#line 772 "add_class.m"
    {
#line 772 "add_class.m"
      hlds__make_hlds__add_class__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[46])));
#line 772 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_25_25));
#line 772 "add_class.m"
    }
#line 771 "add_class.m"
    {
#line 771 "add_class.m"
      hlds__make_hlds__add_class__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_20_20));
#line 771 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_22_22));
#line 771 "add_class.m"
    }
#line 770 "add_class.m"
    {
#line 770 "add_class.m"
      hlds__make_hlds__add_class__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[45])));
#line 770 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_19_19));
#line 770 "add_class.m"
    }
#line 774 "add_class.m"
    {
#line 774 "add_class.m"
      hlds__make_hlds__add_class__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 774 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_12));
#line 774 "add_class.m"
    }
#line 774 "add_class.m"
    {
#line 774 "add_class.m"
      hlds__make_hlds__add_class__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_34_34));
#line 774 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 774 "add_class.m"
    }
#line 774 "add_class.m"
    {
#line 774 "add_class.m"
      hlds__make_hlds__add_class__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 774 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_10));
#line 774 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_33_33));
#line 774 "add_class.m"
    }
#line 775 "add_class.m"
    {
#line 775 "add_class.m"
      hlds__make_hlds__add_class__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_13));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "add_class.m"
    }
#line 775 "add_class.m"
    {
#line 775 "add_class.m"
      hlds__make_hlds__add_class__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_38_38));
#line 775 "add_class.m"
    }
#line 776 "add_class.m"
    {
#line 776 "add_class.m"
      MR_Word base;
#line 776 "add_class.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16 = base;
#line 776 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_14));
#line 776 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15));
#line 776 "add_class.m"
    }
#line 769 "add_class.m"
  }
#line 764 "add_class.m"
}

#line 751 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
#line 751 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_7,
#line 751 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__ClassArity_8,
#line 751 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_9,
#line 751 "add_class.m"
  MR_String hlds__make_hlds__add_class__Description_10,
#line 751 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 751 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16)
#line 751 "add_class.m"
{
#line 755 "add_class.m"
  {
#line 755 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pieces_12;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg_13;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Spec_14;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_19_19;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_24_24;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_25_25;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_26_26;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_39_39;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_40_40;
#line 755 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_44_44;

#line 756 "add_class.m"
    {
#line 756 "add_class.m"
      hlds__make_hlds__add_class__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 756 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__Description_10));
#line 756 "add_class.m"
    }
#line 757 "add_class.m"
    {
#line 757 "add_class.m"
      hlds__make_hlds__add_class__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 757 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_7));
#line 757 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_8));
#line 757 "add_class.m"
    }
#line 757 "add_class.m"
    {
#line 757 "add_class.m"
      hlds__make_hlds__add_class__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 757 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_26_26));
#line 757 "add_class.m"
    }
#line 757 "add_class.m"
    {
#line 757 "add_class.m"
      hlds__make_hlds__add_class__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_25_25));
#line 757 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[29])));
#line 757 "add_class.m"
    }
#line 756 "add_class.m"
    {
#line 756 "add_class.m"
      hlds__make_hlds__add_class__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[44])));
#line 756 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_24_24));
#line 756 "add_class.m"
    }
#line 756 "add_class.m"
    {
#line 756 "add_class.m"
      hlds__make_hlds__add_class__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_20_20));
#line 756 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_21_21));
#line 756 "add_class.m"
    }
#line 756 "add_class.m"
    {
#line 756 "add_class.m"
      hlds__make_hlds__add_class__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[43])));
#line 756 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_19_19));
#line 756 "add_class.m"
    }
#line 760 "add_class.m"
    {
#line 760 "add_class.m"
      hlds__make_hlds__add_class__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 760 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_12));
#line 760 "add_class.m"
    }
#line 760 "add_class.m"
    {
#line 760 "add_class.m"
      hlds__make_hlds__add_class__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_40_40));
#line 760 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "add_class.m"
    }
#line 760 "add_class.m"
    {
#line 760 "add_class.m"
      hlds__make_hlds__add_class__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 760 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_9));
#line 760 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_39_39));
#line 760 "add_class.m"
    }
#line 761 "add_class.m"
    {
#line 761 "add_class.m"
      hlds__make_hlds__add_class__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_13));
#line 761 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "add_class.m"
    }
#line 761 "add_class.m"
    {
#line 761 "add_class.m"
      hlds__make_hlds__add_class__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 761 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 761 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 761 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_44_44));
#line 761 "add_class.m"
    }
#line 762 "add_class.m"
    {
#line 762 "add_class.m"
      MR_Word base;
#line 762 "add_class.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16 = base;
#line 762 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_14));
#line 762 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15));
#line 762 "add_class.m"
    }
#line 755 "add_class.m"
  }
#line 751 "add_class.m"
}

#line 734 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
#line 734 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredInfo_4,
#line 734 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13,
#line 734 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14)
#line 734 "add_class.m"
{
#line 737 "add_class.m"
  {
#line 737 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_6;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ModuleName_7;
#line 737 "add_class.m"
    MR_String hlds__make_hlds__add_class__PredName_8;
#line 737 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__Arity_9;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pieces_10;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg_11;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Spec_12;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_17_17;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_22_22;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_23_23;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_30_30;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_31_31;
#line 737 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_35_35;

#line 738 "add_class.m"
    {
#line 738 "add_class.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_class__PredInfo_4, &hlds__make_hlds__add_class__Context_6);
    }
#line 739 "add_class.m"
    {
#line 739 "add_class.m"
      hlds__make_hlds__add_class__ModuleName_7 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
#line 740 "add_class.m"
    {
#line 740 "add_class.m"
      hlds__make_hlds__add_class__PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
#line 741 "add_class.m"
    {
#line 741 "add_class.m"
      hlds__make_hlds__add_class__Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
#line 745 "add_class.m"
    {
#line 745 "add_class.m"
      hlds__make_hlds__add_class__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_class__ModuleName_7));
#line 745 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredName_8));
#line 745 "add_class.m"
    }
#line 745 "add_class.m"
    {
#line 745 "add_class.m"
      hlds__make_hlds__add_class__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 745 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_23_23));
#line 745 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_class__Arity_9));
#line 745 "add_class.m"
    }
#line 745 "add_class.m"
    {
#line 745 "add_class.m"
      hlds__make_hlds__add_class__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 745 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_22_22));
#line 745 "add_class.m"
    }
#line 745 "add_class.m"
    {
#line 745 "add_class.m"
      hlds__make_hlds__add_class__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_21_21));
#line 745 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[19])));
#line 745 "add_class.m"
    }
#line 744 "add_class.m"
    {
#line 744 "add_class.m"
      hlds__make_hlds__add_class__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[42])));
#line 744 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_20_20));
#line 744 "add_class.m"
    }
#line 743 "add_class.m"
    {
#line 743 "add_class.m"
      hlds__make_hlds__add_class__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[41])));
#line 743 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_17_17));
#line 743 "add_class.m"
    }
#line 747 "add_class.m"
    {
#line 747 "add_class.m"
      hlds__make_hlds__add_class__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 747 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_10));
#line 747 "add_class.m"
    }
#line 747 "add_class.m"
    {
#line 747 "add_class.m"
      hlds__make_hlds__add_class__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_31_31));
#line 747 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 747 "add_class.m"
    }
#line 747 "add_class.m"
    {
#line 747 "add_class.m"
      hlds__make_hlds__add_class__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 747 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_6));
#line 747 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_30_30));
#line 747 "add_class.m"
    }
#line 748 "add_class.m"
    {
#line 748 "add_class.m"
      hlds__make_hlds__add_class__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_11));
#line 748 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "add_class.m"
    }
#line 748 "add_class.m"
    {
#line 748 "add_class.m"
      hlds__make_hlds__add_class__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 748 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 748 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 748 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_35_35));
#line 748 "add_class.m"
    }
#line 749 "add_class.m"
    {
#line 749 "add_class.m"
      MR_Word base;
#line 749 "add_class.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14 = base;
#line 749 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_12));
#line 749 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13));
#line 749 "add_class.m"
    }
#line 737 "add_class.m"
  }
#line 734 "add_class.m"
}

#line 701 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
#line 701 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg)
#line 701 "add_class.m"
{
#line 701 "add_class.m"
  {
#line 701 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 701 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 701 "add_class.m"
    {
#line 701 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__701__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))));
    }
#line 701 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 701 "add_class.m"
  }
#line 701 "add_class.m"
}

#line 688 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_16,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceStatus_17,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceClause_18,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVarSet0_19,
#line 688 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__TVarSet_20,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_45,
#line 688 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_46,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_47,
#line 688 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_48,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_49,
#line 688 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_50,
#line 688 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_51,
#line 688 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_52)
#line 688 "add_class.m"
{
#line 696 "add_class.m"
  {
#line 696 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 696 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 0)));
#line 696 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 1)));
#line 696 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HeadTerms0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 2)));
#line 696 "add_class.m"
    MR_Word hlds__make_hlds__add_class__CVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 4)));
#line 696 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Body_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 5)));
#line 696 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_53_53;
#line 697 "add_class.m"
    MR_Word hlds__make_hlds__add_class___Origin_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 3)));
#line 697 "add_class.m"
    MR_Word hlds__make_hlds__add_class___ClauseContext_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 6)));
#line 697 "add_class.m"
    MR_Integer hlds__make_hlds__add_class___SeqNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 7)));
#line 706 "add_class.m"
    MR_Word hlds__make_hlds__add_class__StateVar_33;

#line 701 "add_class.m"
    {
#line 701 "add_class.m"
      hlds__make_hlds__add_class__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_53_53, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[4]));
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1));
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_53_53, 3) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_15));
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_53_53, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClausePredOrFunc_26));
#line 701 "add_class.m"
    }
#line 701 "add_class.m"
    {
#line 701 "add_class.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_class__V_53_53, (MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.produce_instance_method_clause\'/14", (MR_String) "PredOrFunc mismatch");
    }
#line 703 "add_class.m"
    {
#line 703 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__add_class__PredOrFunc_15, hlds__make_hlds__add_class__HeadTerms0_27, &hlds__make_hlds__add_class__StateVar_33);
    }
#line 706 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 704 "add_class.m"
      {
#line 704 "add_class.m"
        *hlds__make_hlds__add_class__TVarSet_20 = hlds__make_hlds__add_class__TVarSet0_19;
#line 705 "add_class.m"
        {
#line 705 "add_class.m"
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__add_class__Context_16, hlds__make_hlds__add_class__CVarSet_29, hlds__make_hlds__add_class__StateVar_33, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_51, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_52);
        }
#line 704 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_50 = hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_49;
#line 704 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_48 = hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_47;
#line 704 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_46 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_45;
#line 704 "add_class.m"
      }
#line 706 "add_class.m"
    else
#line 707 "add_class.m"
      {
#line 707 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadTerms_34;
#line 707 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__PredArity_35;
#line 707 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__Arity_36;
#line 707 "add_class.m"
        MR_Word hlds__make_hlds__add_class__OldImportStatus_39;
#line 707 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredStatus_40;
#line 707 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Goal_41;
#line 707 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet_42;
#line 707 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Warnings_43;
#line 707 "add_class.m"
        MR_Word hlds__make_hlds__add_class__SimpleCallId_44;
#line 707 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_63_63;
#line 707 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_64_64;

#line 707 "add_class.m"
        {
#line 707 "add_class.m"
          hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__add_class__HeadTerms0_27, &hlds__make_hlds__add_class__HeadTerms_34);
        }
#line 708 "add_class.m"
        {
#line 708 "add_class.m"
          hlds__make_hlds__add_class__PredArity_35 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[10], hlds__make_hlds__add_class__HeadTerms_34);
        }
#line 709 "add_class.m"
        {
#line 709 "add_class.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_class__PredOrFunc_15, &hlds__make_hlds__add_class__Arity_36, hlds__make_hlds__add_class__PredArity_35);
        }
#line 718 "add_class.m"
        hlds__make_hlds__add_class__OldImportStatus_39 = (MR_Word) hlds__make_hlds__add_class__InstanceStatus_17;
#line 719 "add_class.m"
        hlds__make_hlds__add_class__PredStatus_40 = (MR_Word) hlds__make_hlds__add_class__OldImportStatus_39;
#line 720 "add_class.m"
        {
#line 720 "add_class.m"
          hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__CVarSet_29, hlds__make_hlds__add_class__TVarSet0_19, hlds__make_hlds__add_class__HeadTerms_34, hlds__make_hlds__add_class__Body_30, hlds__make_hlds__add_class__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__PredStatus_40, hlds__make_hlds__add_class__PredOrFunc_15, hlds__make_hlds__add_class__Arity_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), &hlds__make_hlds__add_class__Goal_41, &hlds__make_hlds__add_class__VarSet_42, hlds__make_hlds__add_class__TVarSet_20, hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_49, hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_50, &hlds__make_hlds__add_class__Warnings_43, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_45, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_46, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_47, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_48, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_51, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_63_63);
        }
#line 725 "add_class.m"
        {
#line 725 "add_class.m"
          hlds__make_hlds__add_class__SimpleCallId_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 725 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_44, 0) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_15));
#line 725 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_44, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredName_25));
#line 725 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_44, 2) = ((MR_Box) (hlds__make_hlds__add_class__Arity_36));
#line 725 "add_class.m"
        }
#line 728 "add_class.m"
        {
#line 728 "add_class.m"
          hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(*hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_46, hlds__make_hlds__add_class__SimpleCallId_44, hlds__make_hlds__add_class__VarSet_42, hlds__make_hlds__add_class__Goal_41, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_63_63, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_64_64);
        }
#line 731 "add_class.m"
        {
#line 731 "add_class.m"
          hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(hlds__make_hlds__add_class__SimpleCallId_44, hlds__make_hlds__add_class__VarSet_42, hlds__make_hlds__add_class__Warnings_43, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_64_64, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_52);
#line 731 "add_class.m"
          return;
        }
#line 707 "add_class.m"
      }
#line 696 "add_class.m"
  }
#line 688 "add_class.m"
}

#line 614 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(
#line 614 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_3,
#line 614 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_4)
#line 614 "add_class.m"
{
#line 617 "add_class.m"
  {
#line 617 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_53_53;
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_55_55;
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 1)));
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 1)));
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarSetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 8)));
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarSetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 8)));
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__RenameApart_10;
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesB1_11;
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsA_12;
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsB_13;
#line 617 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__NumTVars_14;
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Renaming_15;
#line 617 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesB_16;
#line 617 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__V_54_54;
#line 618 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 0)));
#line 618 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 2)));
#line 618 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 3)));
#line 618 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 4)));
#line 618 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 5)));
#line 618 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 6)));
#line 618 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 7)));
#line 618 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 9)));
#line 619 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 0)));
#line 619 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 2)));
#line 619 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 3)));
#line 619 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 4)));
#line 619 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 5)));
#line 619 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 6)));
#line 619 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 7)));
#line 619 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 9)));
#line 625 "add_class.m"
    MR_Word hlds__make_hlds__add_class___NewVarSet_9;

#line 625 "add_class.m"
    {
#line 625 "add_class.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__VarSetA_7, hlds__make_hlds__add_class__VarSetB_8, &hlds__make_hlds__add_class___NewVarSet_9, &hlds__make_hlds__add_class__RenameApart_10);
    }
#line 626 "add_class.m"
    {
#line 626 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__RenameApart_10, hlds__make_hlds__add_class__TypesB0_6, &hlds__make_hlds__add_class__TypesB1_11);
    }
#line 628 "add_class.m"
    {
#line 628 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__TypesA_5, &hlds__make_hlds__add_class__TVarsA_12);
    }
#line 629 "add_class.m"
    {
#line 629 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__TypesB1_11, &hlds__make_hlds__add_class__TVarsB_13);
    }
#line 2223 "hlds.make_hlds.add_class.c"
    hlds__make_hlds__add_class__TypeInfo_53_53 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
#line 632 "add_class.m"
    {
#line 632 "add_class.m"
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsA_12, &hlds__make_hlds__add_class__NumTVars_14);
    }
#line 633 "add_class.m"
    {
#line 633 "add_class.m"
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsB_13, &hlds__make_hlds__add_class__V_54_54);
    }
#line 633 "add_class.m"
    hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__NumTVars_14 == hlds__make_hlds__add_class__V_54_54);
#line 617 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 617 "add_class.m"
      {
#line 635 "add_class.m"
        {
#line 635 "add_class.m"
          mercury__map__from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsB_13, hlds__make_hlds__add_class__TVarsA_12, &hlds__make_hlds__add_class__Renaming_15);
        }
#line 636 "add_class.m"
        {
#line 636 "add_class.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__Renaming_15, hlds__make_hlds__add_class__TypesB1_11, &hlds__make_hlds__add_class__TypesB_16);
        }
#line 2251 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeInfo_55_55 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[23];
#line 638 "add_class.m"
        {
#line 638 "add_class.m"
          return hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_class__TypeInfo_55_55, ((MR_Box) (hlds__make_hlds__add_class__TypesA_5)), ((MR_Box) (hlds__make_hlds__add_class__TypesB_16)));
        }
#line 617 "add_class.m"
      }
#line 617 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 617 "add_class.m"
  }
#line 614 "add_class.m"
}

#line 572 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_instance_constraints_5_p_0(
#line 572 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_6,
#line 572 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_7,
#line 572 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_8,
#line 572 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25,
#line 572 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26)
#line 572 "add_class.m"
{
#line 576 "add_class.m"
  {
#line 576 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 576 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsA_10;
#line 576 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarSetA_11;
#line 576 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ConstraintsA_12;
#line 576 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsB_13;
#line 576 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarSetB_14;
#line 576 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ConstraintsB_15;
#line 576 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
#line 576 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_28_28;
#line 577 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
#line 577 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
#line 577 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
#line 577 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
#line 577 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
#line 577 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
#line 577 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
#line 577 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
#line 577 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_64_64;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_65_65;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_66_66;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_67_67;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_68_68;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_70_70;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_71_71;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_72_72;
#line 581 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_82_82;
#line 581 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_83_83;
#line 581 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_84_84;
#line 581 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_85_85;
#line 581 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_86_86;
#line 581 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_87_87;
#line 581 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_88_88;
#line 581 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_89_89;
#line 581 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_90_90;
#line 582 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_91_91;
#line 582 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_92_92;
#line 582 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_93_93;
#line 582 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_94_94;
#line 582 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_95_95;
#line 582 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_97_97;
#line 582 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_98_98;
#line 582 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_99_99;

#line 577 "add_class.m"
    {
#line 577 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__V_27_27, &hlds__make_hlds__add_class__TVarsA_10);
    }
#line 578 "add_class.m"
    hlds__make_hlds__add_class__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
#line 578 "add_class.m"
    hlds__make_hlds__add_class__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
#line 578 "add_class.m"
    hlds__make_hlds__add_class__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
#line 578 "add_class.m"
    hlds__make_hlds__add_class__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
#line 578 "add_class.m"
    hlds__make_hlds__add_class__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
#line 578 "add_class.m"
    hlds__make_hlds__add_class__ConstraintsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
#line 578 "add_class.m"
    hlds__make_hlds__add_class__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
#line 578 "add_class.m"
    hlds__make_hlds__add_class__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
#line 578 "add_class.m"
    hlds__make_hlds__add_class__TVarSetA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
#line 578 "add_class.m"
    hlds__make_hlds__add_class__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
#line 581 "add_class.m"
    hlds__make_hlds__add_class__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
#line 581 "add_class.m"
    hlds__make_hlds__add_class__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
#line 581 "add_class.m"
    hlds__make_hlds__add_class__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
#line 581 "add_class.m"
    hlds__make_hlds__add_class__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
#line 581 "add_class.m"
    hlds__make_hlds__add_class__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
#line 581 "add_class.m"
    hlds__make_hlds__add_class__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
#line 581 "add_class.m"
    hlds__make_hlds__add_class__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
#line 581 "add_class.m"
    hlds__make_hlds__add_class__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
#line 581 "add_class.m"
    hlds__make_hlds__add_class__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
#line 581 "add_class.m"
    hlds__make_hlds__add_class__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
#line 581 "add_class.m"
    {
#line 581 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__V_28_28, &hlds__make_hlds__add_class__TVarsB_13);
    }
#line 582 "add_class.m"
    hlds__make_hlds__add_class__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
#line 582 "add_class.m"
    hlds__make_hlds__add_class__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
#line 582 "add_class.m"
    hlds__make_hlds__add_class__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
#line 582 "add_class.m"
    hlds__make_hlds__add_class__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
#line 582 "add_class.m"
    hlds__make_hlds__add_class__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
#line 582 "add_class.m"
    hlds__make_hlds__add_class__ConstraintsB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
#line 582 "add_class.m"
    hlds__make_hlds__add_class__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
#line 582 "add_class.m"
    hlds__make_hlds__add_class__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
#line 582 "add_class.m"
    hlds__make_hlds__add_class__TVarSetB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
#line 582 "add_class.m"
    hlds__make_hlds__add_class__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
#line 586 "add_class.m"
    {
#line 586 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(hlds__make_hlds__add_class__TVarsA_10, hlds__make_hlds__add_class__TVarSetA_11, hlds__make_hlds__add_class__ConstraintsA_12, hlds__make_hlds__add_class__TVarsB_13, hlds__make_hlds__add_class__TVarSetB_14, hlds__make_hlds__add_class__ConstraintsB_15);
    }
#line 590 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 590 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25;
#line 590 "add_class.m"
    else
#line 591 "add_class.m"
      {
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_7, (MR_Integer) 0)));
#line 591 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__ClassArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_7, (MR_Integer) 1)));
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ContextA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PiecesA_19;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MsgA_20;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ContextB_21;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MsgB_23;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Spec_24;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_31_31;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_32_32;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_33_33;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_40_40;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_41_41;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_51_51;
#line 591 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_52_52;
#line 592 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
#line 592 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
#line 592 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
#line 592 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
#line 592 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
#line 592 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
#line 592 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
#line 592 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
#line 592 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
#line 599 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_118_118;
#line 599 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_119_119;
#line 599 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_120_120;
#line 599 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_121_121;
#line 599 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_122_122;
#line 599 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_123_123;
#line 599 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_124_124;
#line 599 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_125_125;
#line 599 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_126_126;

#line 595 "add_class.m"
        {
#line 595 "add_class.m"
          hlds__make_hlds__add_class__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 595 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_16));
#line 595 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_17));
#line 595 "add_class.m"
        }
#line 595 "add_class.m"
        {
#line 595 "add_class.m"
          hlds__make_hlds__add_class__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "add_class.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 595 "add_class.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_32_32, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_33_33));
#line 595 "add_class.m"
        }
#line 595 "add_class.m"
        {
#line 595 "add_class.m"
          hlds__make_hlds__add_class__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 595 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_32_32));
#line 595 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[22])));
#line 595 "add_class.m"
        }
#line 594 "add_class.m"
        {
#line 594 "add_class.m"
          hlds__make_hlds__add_class__PiecesA_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 594 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PiecesA_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[37])));
#line 594 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PiecesA_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_31_31));
#line 594 "add_class.m"
        }
#line 597 "add_class.m"
        {
#line 597 "add_class.m"
          hlds__make_hlds__add_class__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 597 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_class__PiecesA_19));
#line 597 "add_class.m"
        }
#line 597 "add_class.m"
        {
#line 597 "add_class.m"
          hlds__make_hlds__add_class__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_41_41));
#line 597 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "add_class.m"
        }
#line 597 "add_class.m"
        {
#line 597 "add_class.m"
          hlds__make_hlds__add_class__MsgA_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 597 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgA_20, 0) = ((MR_Box) (hlds__make_hlds__add_class__ContextA_18));
#line 597 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgA_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_40_40));
#line 597 "add_class.m"
        }
#line 599 "add_class.m"
        hlds__make_hlds__add_class__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
#line 599 "add_class.m"
        hlds__make_hlds__add_class__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
#line 599 "add_class.m"
        hlds__make_hlds__add_class__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
#line 599 "add_class.m"
        hlds__make_hlds__add_class__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
#line 599 "add_class.m"
        hlds__make_hlds__add_class__ContextB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
#line 599 "add_class.m"
        hlds__make_hlds__add_class__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
#line 599 "add_class.m"
        hlds__make_hlds__add_class__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
#line 599 "add_class.m"
        hlds__make_hlds__add_class__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
#line 599 "add_class.m"
        hlds__make_hlds__add_class__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
#line 599 "add_class.m"
        hlds__make_hlds__add_class__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
#line 601 "add_class.m"
        {
#line 601 "add_class.m"
          hlds__make_hlds__add_class__MsgB_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 601 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgB_23, 0) = ((MR_Box) (hlds__make_hlds__add_class__ContextB_21));
#line 601 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgB_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[40])));
#line 601 "add_class.m"
        }
#line 604 "add_class.m"
        {
#line 604 "add_class.m"
          hlds__make_hlds__add_class__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_class__MsgB_23));
#line 604 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "add_class.m"
        }
#line 604 "add_class.m"
        {
#line 604 "add_class.m"
          hlds__make_hlds__add_class__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_class__MsgA_20));
#line 604 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_52_52));
#line 604 "add_class.m"
        }
#line 603 "add_class.m"
        {
#line 603 "add_class.m"
          hlds__make_hlds__add_class__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 603 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 603 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_51_51));
#line 603 "add_class.m"
        }
#line 605 "add_class.m"
        {
#line 605 "add_class.m"
          MR_Word base;
#line 605 "add_class.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_class.m"
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26 = base;
#line 605 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_24));
#line 605 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25));
#line 605 "add_class.m"
        }
#line 591 "add_class.m"
      }
#line 576 "add_class.m"
  }
#line 572 "add_class.m"
}

#line 516 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_1,
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewTypes_2,
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewTVarSet_3,
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewContext_4,
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__5_5,
#line 516 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
#line 516 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7)
#line 516 "add_class.m"
{
#line 521 "add_class.m"
  while (MR_TRUE)
#line 521 "add_class.m"
    {
#line 521 "add_class.m"
      /* tailcall optimized into a loop */
#line 521 "add_class.m"
      {
#line 521 "add_class.m"
        MR_bool hlds__make_hlds__add_class__succeeded;

#line 521 "add_class.m"
        if ((hlds__make_hlds__add_class__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 521 "add_class.m"
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 521 "add_class.m"
        else
#line 524 "add_class.m"
          {
#line 524 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherInstanceDefn_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__5_5, (MR_Integer) 0)));
#line 524 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherInstanceDefns_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__5_5, (MR_Integer) 1)));
#line 524 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 1)));
#line 524 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherContext_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 4)));
#line 524 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherInstanceBody_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 6)));
#line 524 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherTVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 8)));
#line 524 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77;
#line 525 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 0)));
#line 525 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 2)));
#line 525 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 3)));
#line 525 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 5)));
#line 525 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 7)));
#line 525 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 9)));
#line 528 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Renaming_34;
#line 528 "add_class.m"
            MR_Word hlds__make_hlds__add_class__NewOtherTypes_35;
#line 528 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_32_32;
#line 529 "add_class.m"
            MR_Word hlds__make_hlds__add_class___MergedTVarSet_33;
#line 533 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_36_36;

#line 528 "add_class.m"
            hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__OtherInstanceBody_28)) == (MR_mktag((MR_Integer) 1)));
#line 528 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 528 "add_class.m"
              {
#line 528 "add_class.m"
                hlds__make_hlds__add_class__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherInstanceBody_28, (MR_Integer) 0)));
#line 529 "add_class.m"
                {
#line 529 "add_class.m"
                  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__NewTVarSet_3, hlds__make_hlds__add_class__OtherTVarSet_30, &hlds__make_hlds__add_class___MergedTVarSet_33, &hlds__make_hlds__add_class__Renaming_34);
                }
#line 531 "add_class.m"
                {
#line 531 "add_class.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__Renaming_34, hlds__make_hlds__add_class__OtherTypes_23, &hlds__make_hlds__add_class__NewOtherTypes_35);
                }
#line 533 "add_class.m"
                {
#line 533 "add_class.m"
                  hlds__make_hlds__add_class__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(hlds__make_hlds__add_class__NewTypes_2, hlds__make_hlds__add_class__NewOtherTypes_35, &hlds__make_hlds__add_class__V_36_36);
                }
#line 528 "add_class.m"
              }
#line 548 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 535 "add_class.m"
              {
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__ClassName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_1, (MR_Integer) 0)));
#line 535 "add_class.m"
                MR_Integer hlds__make_hlds__add_class__ClassArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_1, (MR_Integer) 1)));
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__NewPieces_39;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__NewMsg_40;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__OtherMsg_42;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__Spec_43;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_48_48;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_51_51;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_52_52;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_53_53;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_60_60;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_61_61;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_66_66;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_74_74;
#line 535 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_75_75;

#line 539 "add_class.m"
                {
#line 539 "add_class.m"
                  hlds__make_hlds__add_class__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 539 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_37));
#line 539 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_38));
#line 539 "add_class.m"
                }
#line 539 "add_class.m"
                {
#line 539 "add_class.m"
                  hlds__make_hlds__add_class__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "add_class.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 539 "add_class.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_53_53));
#line 539 "add_class.m"
                }
#line 539 "add_class.m"
                {
#line 539 "add_class.m"
                  hlds__make_hlds__add_class__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_52_52));
#line 539 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[19])));
#line 539 "add_class.m"
                }
#line 538 "add_class.m"
                {
#line 538 "add_class.m"
                  hlds__make_hlds__add_class__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 538 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[33])));
#line 538 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_51_51));
#line 538 "add_class.m"
                }
#line 537 "add_class.m"
                {
#line 537 "add_class.m"
                  hlds__make_hlds__add_class__NewPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewPieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[32])));
#line 537 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewPieces_39, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_48_48));
#line 537 "add_class.m"
                }
#line 541 "add_class.m"
                {
#line 541 "add_class.m"
                  hlds__make_hlds__add_class__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 541 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewPieces_39));
#line 541 "add_class.m"
                }
#line 541 "add_class.m"
                {
#line 541 "add_class.m"
                  hlds__make_hlds__add_class__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 541 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_61_61));
#line 541 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 541 "add_class.m"
                }
#line 541 "add_class.m"
                {
#line 541 "add_class.m"
                  hlds__make_hlds__add_class__NewMsg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewMsg_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewContext_4));
#line 541 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewMsg_40, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_60_60));
#line 541 "add_class.m"
                }
#line 543 "add_class.m"
                {
#line 543 "add_class.m"
                  hlds__make_hlds__add_class__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_class__OtherContext_26));
#line 543 "add_class.m"
                }
#line 543 "add_class.m"
                {
#line 543 "add_class.m"
                  hlds__make_hlds__add_class__OtherMsg_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 543 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_66_66));
#line 543 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 543 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
#line 543 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[36])));
#line 543 "add_class.m"
                }
#line 546 "add_class.m"
                {
#line 546 "add_class.m"
                  hlds__make_hlds__add_class__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_class__OtherMsg_42));
#line 546 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 546 "add_class.m"
                }
#line 546 "add_class.m"
                {
#line 546 "add_class.m"
                  hlds__make_hlds__add_class__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 546 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewMsg_40));
#line 546 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_75_75));
#line 546 "add_class.m"
                }
#line 545 "add_class.m"
                {
#line 545 "add_class.m"
                  hlds__make_hlds__add_class__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 545 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 545 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_43, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_74_74));
#line 545 "add_class.m"
                }
#line 547 "add_class.m"
                {
#line 547 "add_class.m"
                  hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 547 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_43));
#line 547 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6));
#line 547 "add_class.m"
                }
#line 535 "add_class.m"
              }
#line 548 "add_class.m"
            else
#line 548 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 554 "add_class.m"
            /* direct tailcall eliminated */
#line 554 "add_class.m"
            {
#line 554 "add_class.m"
              MR_Word hlds__make_hlds__add_class__HeadVar__5__tmp_copy_5 = hlds__make_hlds__add_class__OtherInstanceDefns_20;
#line 554 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77;

#line 554 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 554 "add_class.m"
              hlds__make_hlds__add_class__HeadVar__5_5 = hlds__make_hlds__add_class__HeadVar__5__tmp_copy_5;
#line 554 "add_class.m"
            }
#line 554 "add_class.m"
            continue;
#line 524 "add_class.m"
          }
#line 521 "add_class.m"
      }
#line 521 "add_class.m"
      break;
#line 521 "add_class.m"
    }
#line 516 "add_class.m"
}

#line 416 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_method_modes_7_p_0(
#line 416 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 416 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2,
#line 416 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3,
#line 416 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4,
#line 416 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5,
#line 416 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
#line 416 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7)
#line 416 "add_class.m"
{
#line 422 "add_class.m"
  while (MR_TRUE)
#line 422 "add_class.m"
    {
#line 422 "add_class.m"
      /* tailcall optimized into a loop */
#line 422 "add_class.m"
      {
#line 422 "add_class.m"
        MR_bool hlds__make_hlds__add_class__succeeded;

#line 422 "add_class.m"
        if ((hlds__make_hlds__add_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 422 "add_class.m"
          {
#line 422 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 422 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 422 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 422 "add_class.m"
          }
#line 422 "add_class.m"
        else
#line 423 "add_class.m"
          {
#line 423 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Method_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 0)));
#line 423 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Methods_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 1)));
#line 423 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72;
#line 423 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74;
#line 423 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75;

#line 467 "add_class.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_17)) == (MR_mktag((MR_Integer) 0))))
#line 426 "add_class.m"
              {
#line 426 "add_class.m"
                MR_Word hlds__make_hlds__add_class__QualPredOrFuncName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 0)));
#line 426 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PorF_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 1)));
#line 426 "add_class.m"
                MR_Word hlds__make_hlds__add_class__TypesAndModes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 2)));
#line 426 "add_class.m"
                MR_Word hlds__make_hlds__add_class__ModuleName_34;
#line 426 "add_class.m"
                MR_String hlds__make_hlds__add_class__PredOrFuncName_35;
#line 426 "add_class.m"
                MR_Integer hlds__make_hlds__add_class__PredArity_37;
#line 426 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PredTable_38;
#line 426 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PredIds_39;
#line 425 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 3)));
#line 425 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 4)));
#line 425 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 5)));
#line 425 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 6)));
#line 425 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 7)));
#line 425 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 8)));
#line 425 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 9)));
#line 425 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 10)));
#line 425 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 11)));

#line 429 "add_class.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__add_class__QualPredOrFuncName_22)) == (MR_mktag((MR_Integer) 1))))
#line 428 "add_class.m"
                  {
#line 428 "add_class.m"
                    hlds__make_hlds__add_class__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__QualPredOrFuncName_22, (MR_Integer) 0)));
#line 428 "add_class.m"
                    hlds__make_hlds__add_class__PredOrFuncName_35 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__QualPredOrFuncName_22, (MR_Integer) 1)));
#line 428 "add_class.m"
                  }
#line 429 "add_class.m"
                else
#line 430 "add_class.m"
                  {
#line 433 "add_class.m"
                    {
#line 433 "add_class.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "unqualified func");
#line 433 "add_class.m"
                      return;
                    }
#line 430 "add_class.m"
                  }
#line 435 "add_class.m"
                {
#line 435 "add_class.m"
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__add_class__TypesAndModes_24, &hlds__make_hlds__add_class__PredArity_37);
                }
#line 436 "add_class.m"
                {
#line 436 "add_class.m"
                  hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, &hlds__make_hlds__add_class__PredTable_38);
                }
#line 437 "add_class.m"
                {
#line 437 "add_class.m"
                  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(hlds__make_hlds__add_class__PredTable_38, (MR_Integer) 0, hlds__make_hlds__add_class__PorF_23, hlds__make_hlds__add_class__ModuleName_34, hlds__make_hlds__add_class__PredOrFuncName_35, hlds__make_hlds__add_class__PredArity_37, &hlds__make_hlds__add_class__PredIds_39);
                }
#line 461 "add_class.m"
                if ((hlds__make_hlds__add_class__PredIds_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 464 "add_class.m"
                  {
#line 465 "add_class.m"
                    {
#line 465 "add_class.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "number of preds != 1");
#line 465 "add_class.m"
                      return;
                    }
#line 464 "add_class.m"
                  }
#line 461 "add_class.m"
                else
#line 461 "add_class.m"
                  {
#line 461 "add_class.m"
                    MR_Word hlds__make_hlds__add_class__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_39, (MR_Integer) 1)));
#line 461 "add_class.m"
                    MR_Word hlds__make_hlds__add_class__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_39, (MR_Integer) 0)));

#line 461 "add_class.m"
                    if ((hlds__make_hlds__add_class__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 440 "add_class.m"
                      {
#line 440 "add_class.m"
                        MR_Word hlds__make_hlds__add_class__PredInfo0_41;

#line 441 "add_class.m"
                        {
#line 441 "add_class.m"
                          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, hlds__make_hlds__add_class__V_89_89, &hlds__make_hlds__add_class__PredInfo0_41);
                        }
#line 452 "add_class.m"
#line 452 "add_class.m"
                        switch (hlds__make_hlds__add_class__PorF_23) {
#line 452 "add_class.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 452 "add_class.m"
                          case (MR_Integer) 1:
#line 443 "add_class.m"
                            {
#line 443 "add_class.m"
                              MR_Word hlds__make_hlds__add_class__PredInfo_42;
#line 443 "add_class.m"
                              MR_Word hlds__make_hlds__add_class__MaybeProc_43;

#line 444 "add_class.m"
                              {
#line 444 "add_class.m"
                                check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(hlds__make_hlds__add_class__PredInfo0_41, &hlds__make_hlds__add_class__PredInfo_42, &hlds__make_hlds__add_class__MaybeProc_43);
                              }
#line 447 "add_class.m"
                              if ((hlds__make_hlds__add_class__MaybeProc_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "add_class.m"
                                {
#line 446 "add_class.m"
                                  hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 446 "add_class.m"
                                  hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 446 "add_class.m"
                                }
#line 447 "add_class.m"
                              else
#line 448 "add_class.m"
                                {
#line 448 "add_class.m"
                                  MR_Integer hlds__make_hlds__add_class__ProcId_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybeProc_43, (MR_Integer) 0)));
#line 448 "add_class.m"
                                  MR_Word hlds__make_hlds__add_class__NewPredProc_45;
#line 448 "add_class.m"
                                  MR_Word hlds__make_hlds__add_class__V_73_73;

#line 449 "add_class.m"
                                  {
#line 449 "add_class.m"
                                    hlds__make_hlds__add_class__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 449 "add_class.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_89_89));
#line 449 "add_class.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_class__ProcId_44));
#line 449 "add_class.m"
                                  }
#line 449 "add_class.m"
                                  {
#line 449 "add_class.m"
                                    hlds__make_hlds__add_class__NewPredProc_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 449 "add_class.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewPredProc_45, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_73_73));
#line 449 "add_class.m"
                                  }
#line 450 "add_class.m"
                                  {
#line 450 "add_class.m"
                                    hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "add_class.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewPredProc_45));
#line 450 "add_class.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2));
#line 450 "add_class.m"
                                  }
#line 451 "add_class.m"
                                  {
#line 451 "add_class.m"
                                    hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_class__V_89_89, hlds__make_hlds__add_class__PredInfo_42, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75);
                                  }
#line 448 "add_class.m"
                                }
#line 443 "add_class.m"
                              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 443 "add_class.m"
                            }
#line 452 "add_class.m"
                            break;
#line 452 "add_class.m"
                          case (MR_Integer) 0:
#line 453 "add_class.m"
                            {
#line 453 "add_class.m"
                              MR_Word hlds__make_hlds__add_class__Procs_46;

#line 454 "add_class.m"
                              {
#line 454 "add_class.m"
                                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_class__PredInfo0_41, &hlds__make_hlds__add_class__Procs_46);
                              }
#line 455 "add_class.m"
                              {
#line 455 "add_class.m"
                                hlds__make_hlds__add_class__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_class__Procs_46);
                              }
#line 457 "add_class.m"
                              if (hlds__make_hlds__add_class__succeeded)
#line 456 "add_class.m"
                                {
#line 456 "add_class.m"
                                  hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(hlds__make_hlds__add_class__PredInfo0_41, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72);
                                }
#line 457 "add_class.m"
                              else
#line 457 "add_class.m"
                                hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 453 "add_class.m"
                              hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 453 "add_class.m"
                              hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 453 "add_class.m"
                            }
#line 452 "add_class.m"
                            break;
#line 452 "add_class.m"
                        }
#line 440 "add_class.m"
                      }
#line 461 "add_class.m"
                    else
#line 464 "add_class.m"
                      {
#line 465 "add_class.m"
                        {
#line 465 "add_class.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "number of preds != 1");
#line 465 "add_class.m"
                          return;
                        }
#line 464 "add_class.m"
                      }
#line 461 "add_class.m"
                  }
#line 426 "add_class.m"
              }
#line 467 "add_class.m"
            else
#line 468 "add_class.m"
              {
#line 468 "add_class.m"
                hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 468 "add_class.m"
                hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 468 "add_class.m"
                hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 468 "add_class.m"
              }
#line 470 "add_class.m"
            /* direct tailcall eliminated */
#line 470 "add_class.m"
            {
#line 470 "add_class.m"
              MR_Word hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_class__Methods_18;
#line 470 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0__tmp_copy_2 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74;
#line 470 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75;
#line 470 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72;

#line 470 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 470 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4;
#line 470 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0__tmp_copy_2;
#line 470 "add_class.m"
              hlds__make_hlds__add_class__HeadVar__1_1 = hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1;
#line 470 "add_class.m"
            }
#line 470 "add_class.m"
            continue;
#line 423 "add_class.m"
          }
#line 422 "add_class.m"
      }
#line 422 "add_class.m"
      break;
#line 422 "add_class.m"
    }
#line 416 "add_class.m"
}

#line 376 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0_2(
#line 376 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg)
#line 376 "add_class.m"
{
#line 376 "add_class.m"
  {
#line 376 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 376 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 376 "add_class.m"
    {
#line 376 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__376__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))));
    }
#line 376 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 376 "add_class.m"
  }
#line 376 "add_class.m"
}

#line 375 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0_1(
#line 375 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg)
#line 375 "add_class.m"
{
#line 375 "add_class.m"
  {
#line 375 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 375 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 375 "add_class.m"
    {
#line 375 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__375__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))));
    }
#line 375 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 375 "add_class.m"
  }
#line 375 "add_class.m"
}

#line 359 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0(
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_11,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_12,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_13,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_14,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_15,
#line 359 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__MaybePredIdProcId_16,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47,
#line 359 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48,
#line 359 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49,
#line 359 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50)
#line 359 "add_class.m"
{
#line 365 "add_class.m"
  {
#line 365 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 365 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldImportStatus_19 = (MR_Word) hlds__make_hlds__add_class__TypeClassStatus_13;
#line 365 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredStatus_20 = (MR_Word) hlds__make_hlds__add_class__OldImportStatus_19;

#line 394 "add_class.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_15)) == (MR_mktag((MR_Integer) 0))))
#line 372 "add_class.m"
      {
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 0)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 1)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypesAndModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 2)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__WithType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 3)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__WithInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 4)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybeDetism_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 5)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 6)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstVarSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 7)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ExistQVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 8)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Purity_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 9)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Constraints0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 10)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 11)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Origin_33;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClassParamTypes_34;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__UnivConstraints0_35;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ExistConstraints_36;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__UnivConstraints_37;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Constraints_38;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Markers0_39;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Markers_40;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_57_57;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_62_62;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_67_67;
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_68_68;

#line 375 "add_class.m"
        {
#line 375 "add_class.m"
          hlds__make_hlds__add_class__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 375 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[2]));
#line 375 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_method_10_p_0_1));
#line 375 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 375 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 3) = ((MR_Box) (hlds__make_hlds__add_class__WithType_24));
#line 375 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 375 "add_class.m"
        }
#line 375 "add_class.m"
        {
#line 375 "add_class.m"
          mercury__require__expect_4_p_0(hlds__make_hlds__add_class__V_57_57, (MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/10", (MR_String) "WithType != no");
        }
#line 376 "add_class.m"
        {
#line 376 "add_class.m"
          hlds__make_hlds__add_class__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 376 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_62_62, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[3]));
#line 376 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_method_10_p_0_2));
#line 376 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 376 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_62_62, 3) = ((MR_Box) (hlds__make_hlds__add_class__WithInst_25));
#line 376 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_62_62, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 376 "add_class.m"
        }
#line 376 "add_class.m"
        {
#line 376 "add_class.m"
          mercury__require__expect_4_p_0(hlds__make_hlds__add_class__V_62_62, (MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/10", (MR_String) "WithInst != no");
        }
#line 378 "add_class.m"
        {
#line 378 "add_class.m"
          hlds__make_hlds__add_class__Origin_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "add_class.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Origin_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 378 "add_class.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Origin_33, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredName_21));
#line 378 "add_class.m"
        }
#line 382 "add_class.m"
        {
#line 382 "add_class.m"
          hlds__make_hlds__add_class__V_67_67 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 382 "add_class.m"
        {
#line 382 "add_class.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_class__V_67_67, hlds__make_hlds__add_class__ClassParamVars_12, &hlds__make_hlds__add_class__ClassParamTypes_34);
        }
#line 384 "add_class.m"
        hlds__make_hlds__add_class__UnivConstraints0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints0_31, (MR_Integer) 0)));
#line 384 "add_class.m"
        hlds__make_hlds__add_class__ExistConstraints_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints0_31, (MR_Integer) 1)));
#line 385 "add_class.m"
        {
#line 385 "add_class.m"
          hlds__make_hlds__add_class__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 385 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_11));
#line 385 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamTypes_34));
#line 385 "add_class.m"
        }
#line 386 "add_class.m"
        {
#line 386 "add_class.m"
          hlds__make_hlds__add_class__UnivConstraints_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__UnivConstraints_37, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_68_68));
#line 386 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__UnivConstraints_37, 1) = ((MR_Box) (hlds__make_hlds__add_class__UnivConstraints0_35));
#line 386 "add_class.m"
        }
#line 387 "add_class.m"
        {
#line 387 "add_class.m"
          hlds__make_hlds__add_class__Constraints_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 387 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints_38, 0) = ((MR_Box) (hlds__make_hlds__add_class__UnivConstraints_37));
#line 387 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints_38, 1) = ((MR_Box) (hlds__make_hlds__add_class__ExistConstraints_36));
#line 387 "add_class.m"
        }
#line 388 "add_class.m"
        {
#line 388 "add_class.m"
          hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_class__Markers0_39);
        }
#line 389 "add_class.m"
        {
#line 389 "add_class.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 9, hlds__make_hlds__add_class__Markers0_39, &hlds__make_hlds__add_class__Markers_40);
        }
#line 390 "add_class.m"
        {
#line 390 "add_class.m"
          hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_class__Origin_33, hlds__make_hlds__add_class__TypeVarSet_27, hlds__make_hlds__add_class__InstVarSet_28, hlds__make_hlds__add_class__ExistQVars_29, hlds__make_hlds__add_class__PredOrFunc_22, hlds__make_hlds__add_class__PredName_21, hlds__make_hlds__add_class__TypesAndModes_23, hlds__make_hlds__add_class__MaybeDetism_26, hlds__make_hlds__add_class__Purity_30, hlds__make_hlds__add_class__Constraints_38, hlds__make_hlds__add_class__Markers_40, hlds__make_hlds__add_class__Context_32, hlds__make_hlds__add_class__PredStatus_20, hlds__make_hlds__add_class__NeedQual_14, hlds__make_hlds__add_class__MaybePredIdProcId_16, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50);
#line 390 "add_class.m"
          return;
        }
#line 372 "add_class.m"
      }
#line 394 "add_class.m"
    else
#line 396 "add_class.m"
      {
#line 396 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybePredOrFunc_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 1)));
#line 396 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Modes_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 2)));
#line 396 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybeDet_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 4)));
#line 396 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 5)));
#line 396 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredName_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 0)));
#line 396 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Context_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 6)));
#line 395 "add_class.m"
        MR_Word hlds__make_hlds__add_class___WithInst_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 3)));

#line 403 "add_class.m"
        if ((hlds__make_hlds__add_class__MaybePredOrFunc_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "add_class.m"
          {
#line 407 "add_class.m"
            {
#line 407 "add_class.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/10", (MR_String) "no pred_or_func on mode declaration");
#line 407 "add_class.m"
              return;
            }
#line 404 "add_class.m"
          }
#line 403 "add_class.m"
        else
#line 398 "add_class.m"
          {
#line 398 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredIdProcId_46;
#line 398 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredOrFunc_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybePredOrFunc_41, (MR_Integer) 0)));

#line 399 "add_class.m"
            {
#line 399 "add_class.m"
              hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_class__VarSet_45, hlds__make_hlds__add_class__PredName_74, hlds__make_hlds__add_class__Modes_42, hlds__make_hlds__add_class__MaybeDet_44, hlds__make_hlds__add_class__PredStatus_20, hlds__make_hlds__add_class__Context_76, hlds__make_hlds__add_class__PredOrFunc_72, (MR_Integer) 1, &hlds__make_hlds__add_class__PredIdProcId_46, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50);
            }
#line 402 "add_class.m"
            {
#line 402 "add_class.m"
              MR_Word base;
#line 402 "add_class.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "add_class.m"
              *hlds__make_hlds__add_class__MaybePredIdProcId_16 = base;
#line 402 "add_class.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__PredIdProcId_46));
#line 402 "add_class.m"
            }
#line 398 "add_class.m"
          }
#line 396 "add_class.m"
      }
#line 365 "add_class.m"
  }
#line 359 "add_class.m"
}

#line 342 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_methods_10_p_0(
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_1,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_2,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_3,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_4,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__5_5,
#line 342 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__6_6,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_7,
#line 342 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_8,
#line 342 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_9,
#line 342 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_10)
#line 342 "add_class.m"
{
#line 348 "add_class.m"
  {
#line 348 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 348 "add_class.m"
    if ((hlds__make_hlds__add_class__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 348 "add_class.m"
      {
#line 348 "add_class.m"
        *hlds__make_hlds__add_class__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_10 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_9;
#line 348 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_8 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_7;
#line 348 "add_class.m"
      }
#line 348 "add_class.m"
    else
#line 351 "add_class.m"
      {
#line 351 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Method_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__5_5, (MR_Integer) 0)));
#line 351 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Methods_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__5_5, (MR_Integer) 1)));
#line 351 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybePredProcId_27;
#line 351 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybePredProcIds_28;
#line 351 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35_35;
#line 351 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_36_36;

#line 352 "add_class.m"
        {
#line 352 "add_class.m"
          hlds__make_hlds__add_class__module_add_class_method_10_p_0(hlds__make_hlds__add_class__ClassName_1, hlds__make_hlds__add_class__ClassParamVars_2, hlds__make_hlds__add_class__TypeClassStatus_3, hlds__make_hlds__add_class__NeedQual_4, hlds__make_hlds__add_class__Method_25, &hlds__make_hlds__add_class__MaybePredProcId_27, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_7, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35_35, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_9, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_36_36);
        }
#line 355 "add_class.m"
        {
#line 355 "add_class.m"
          hlds__make_hlds__add_class__add_class_pred_or_func_methods_10_p_0(hlds__make_hlds__add_class__ClassName_1, hlds__make_hlds__add_class__ClassParamVars_2, hlds__make_hlds__add_class__TypeClassStatus_3, hlds__make_hlds__add_class__NeedQual_4, hlds__make_hlds__add_class__Methods_26, &hlds__make_hlds__add_class__MaybePredProcIds_28, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35_35, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_8, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_36_36, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_10);
        }
#line 351 "add_class.m"
        {
#line 351 "add_class.m"
          MR_Word base;
#line 351 "add_class.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "add_class.m"
          *hlds__make_hlds__add_class__HeadVar__6_6 = base;
#line 351 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__MaybePredProcId_27));
#line 351 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__MaybePredProcIds_28));
#line 351 "add_class.m"
        }
#line 351 "add_class.m"
      }
#line 348 "add_class.m"
  }
#line 342 "add_class.m"
}

#line 283 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_11_p_0(
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_12,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_13,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_14,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_15,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_16,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51,
#line 283 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53,
#line 283 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54,
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55,
#line 283 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56)
#line 283 "add_class.m"
{
#line 292 "add_class.m"
  {
#line 292 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 292 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredName_32;
#line 292 "add_class.m"
    MR_Word hlds__make_hlds__add_class__MaybePredOrFunc_33;
#line 292 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Modes_34;
#line 292 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_38;
#line 292 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredTable_39;
#line 292 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__PredArity_40;
#line 292 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredOrFunc_41;
#line 292 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredIds_42;

#line 296 "add_class.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_16)) == (MR_mktag((MR_Integer) 0))))
#line 294 "add_class.m"
      {
#line 295 "add_class.m"
        {
#line 295 "add_class.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/11", (MR_String) "pred_or_func method item");
#line 295 "add_class.m"
          return;
        }
#line 294 "add_class.m"
      }
#line 296 "add_class.m"
    else
#line 297 "add_class.m"
      {
#line 297 "add_class.m"
        MR_Word hlds__make_hlds__add_class___WithInst_35;
#line 297 "add_class.m"
        MR_Word hlds__make_hlds__add_class___MaybeDetism_36;
#line 297 "add_class.m"
        MR_Word hlds__make_hlds__add_class___VarSet_37;

#line 297 "add_class.m"
        hlds__make_hlds__add_class__PredName_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 0)));
#line 297 "add_class.m"
        hlds__make_hlds__add_class__MaybePredOrFunc_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 1)));
#line 297 "add_class.m"
        hlds__make_hlds__add_class__Modes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 2)));
#line 297 "add_class.m"
        hlds__make_hlds__add_class___WithInst_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 3)));
#line 297 "add_class.m"
        hlds__make_hlds__add_class___MaybeDetism_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 4)));
#line 297 "add_class.m"
        hlds__make_hlds__add_class___VarSet_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 5)));
#line 297 "add_class.m"
        hlds__make_hlds__add_class__Context_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 6)));
#line 297 "add_class.m"
      }
#line 300 "add_class.m"
    {
#line 300 "add_class.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53, &hlds__make_hlds__add_class__PredTable_39);
    }
#line 301 "add_class.m"
    {
#line 301 "add_class.m"
      hlds__make_hlds__add_class__PredArity_40 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_class__Modes_34);
    }
#line 307 "add_class.m"
    if ((hlds__make_hlds__add_class__MaybePredOrFunc_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 303 "add_class.m"
      {
#line 306 "add_class.m"
        {
#line 306 "add_class.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/11", (MR_String) "unexpanded \140with_inst\140 annotation");
#line 306 "add_class.m"
          return;
        }
#line 303 "add_class.m"
      }
#line 307 "add_class.m"
    else
#line 308 "add_class.m"
      hlds__make_hlds__add_class__PredOrFunc_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybePredOrFunc_33, (MR_Integer) 0)));
#line 310 "add_class.m"
    {
#line 310 "add_class.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_class__PredTable_39, (MR_Integer) 0, hlds__make_hlds__add_class__PredOrFunc_41, hlds__make_hlds__add_class__PredName_32, hlds__make_hlds__add_class__PredArity_40, &hlds__make_hlds__add_class__PredIds_42);
    }
#line 316 "add_class.m"
    if ((hlds__make_hlds__add_class__PredIds_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 313 "add_class.m"
      {
#line 314 "add_class.m"
        {
#line 314 "add_class.m"
          hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(hlds__make_hlds__add_class__PredName_32, hlds__make_hlds__add_class__PredArity_40, hlds__make_hlds__add_class__PredOrFunc_41, hlds__make_hlds__add_class__Context_38, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);
        }
#line 313 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51;
#line 313 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53;
#line 313 "add_class.m"
      }
#line 316 "add_class.m"
    else
#line 317 "add_class.m"
      {
#line 317 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadPredId_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_42, (MR_Integer) 0)));
#line 317 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TailPredIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_42, (MR_Integer) 1)));

#line 335 "add_class.m"
        if ((hlds__make_hlds__add_class__TailPredIds_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 319 "add_class.m"
          {
#line 319 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredInfo_46;
#line 319 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredMarkers_47;

#line 321 "add_class.m"
            {
#line 321 "add_class.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__add_class__HeadPredId_43, &hlds__make_hlds__add_class__PredInfo_46);
            }
#line 322 "add_class.m"
            {
#line 322 "add_class.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_class__PredInfo_46, &hlds__make_hlds__add_class__PredMarkers_47);
            }
#line 323 "add_class.m"
            {
#line 323 "add_class.m"
              hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__PredMarkers_47, (MR_Integer) 9);
            }
#line 328 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 326 "add_class.m"
              {
#line 326 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PredProcId_48;

#line 324 "add_class.m"
                {
#line 324 "add_class.m"
                  hlds__make_hlds__add_class__module_add_class_method_10_p_0(hlds__make_hlds__add_class__ClassName_12, hlds__make_hlds__add_class__ClassParamVars_13, hlds__make_hlds__add_class__TypeClassStatus_14, hlds__make_hlds__add_class__NeedQual_15, hlds__make_hlds__add_class__Method_16, &hlds__make_hlds__add_class__PredProcId_48, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);
                }
#line 327 "add_class.m"
                {
#line 327 "add_class.m"
                  mercury__list__cons_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_class__PredProcId_48)), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51, hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52);
#line 327 "add_class.m"
                  return;
                }
#line 326 "add_class.m"
              }
#line 328 "add_class.m"
            else
#line 332 "add_class.m"
              {
#line 332 "add_class.m"
                {
#line 332 "add_class.m"
                  hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(hlds__make_hlds__add_class__PredName_32, hlds__make_hlds__add_class__PredArity_40, hlds__make_hlds__add_class__PredOrFunc_41, hlds__make_hlds__add_class__Context_38, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);
                }
#line 332 "add_class.m"
                *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53;
#line 332 "add_class.m"
                *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51;
#line 332 "add_class.m"
              }
#line 319 "add_class.m"
          }
#line 335 "add_class.m"
        else
#line 336 "add_class.m"
          {
#line 338 "add_class.m"
            {
#line 338 "add_class.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/11", (MR_String) "multiple preds matching method mode");
#line 338 "add_class.m"
              return;
            }
#line 336 "add_class.m"
          }
#line 317 "add_class.m"
      }
#line 292 "add_class.m"
  }
#line 283 "add_class.m"
}

#line 278 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(
#line 278 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_2)
#line 278 "add_class.m"
{
#line 281 "add_class.m"
  {
#line 281 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_2)) == (MR_mktag((MR_Integer) 1)));
#line 281 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_3_3;
#line 281 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_4_4;
#line 281 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_5_5;
#line 281 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_6_6;
#line 281 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_7_7;
#line 281 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_8_8;
#line 281 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_9_9;

#line 281 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 281 "add_class.m"
      {
#line 281 "add_class.m"
        hlds__make_hlds__add_class__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 0)));
#line 281 "add_class.m"
        hlds__make_hlds__add_class__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 1)));
#line 281 "add_class.m"
        hlds__make_hlds__add_class__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 2)));
#line 281 "add_class.m"
        hlds__make_hlds__add_class__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 3)));
#line 281 "add_class.m"
        hlds__make_hlds__add_class__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 4)));
#line 281 "add_class.m"
        hlds__make_hlds__add_class__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 5)));
#line 281 "add_class.m"
        hlds__make_hlds__add_class__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 6)));
#line 281 "add_class.m"
      }
#line 281 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 281 "add_class.m"
  }
#line 278 "add_class.m"
}

#line 272 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0_2(
#line 272 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 272 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 272 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 272 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 272 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 272 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 272 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 272 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7)
#line 272 "add_class.m"
{
#line 272 "add_class.m"
  {
#line 272 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 272 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_52;
#line 272 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_54;
#line 272 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_56;

#line 272 "add_class.m"
    {
#line 272 "add_class.m"
      hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_52, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_4), &hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_54, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_6), &hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_56);
    }
#line 272 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_52));
#line 272 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_54));
#line 272 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_56));
#line 272 "add_class.m"
  }
#line 272 "add_class.m"
}

#line 260 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0_1(
#line 260 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 260 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
#line 260 "add_class.m"
{
#line 260 "add_class.m"
  {
#line 260 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 260 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 260 "add_class.m"
    {
#line 260 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
#line 260 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 260 "add_class.m"
  }
#line 260 "add_class.m"
}

#line 251 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0(
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_11,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_12,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_13,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_14,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Methods_15,
#line 251 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__PredProcIds_16,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_22,
#line 251 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_23,
#line 251 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_24,
#line 251 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_25)
#line 251 "add_class.m"
{
#line 259 "add_class.m"
  {
#line 259 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 259 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 259 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ModeMethods_19;
#line 259 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredOrFuncMethods_20;
#line 259 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_27_27;
#line 259 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_28_28;
#line 259 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_29_29;
#line 259 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_30_30;
#line 259 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_31_31;
#line 259 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_32_32;
#line 259 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_33_33;
#line 271 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_31_31;
#line 271 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_32_32;
#line 271 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_33_33;

#line 260 "add_class.m"
    {
#line 260 "add_class.m"
      mercury__list__filter_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_37_37, (MR_Word) &hlds__make_hlds__add_class_scalar_common_2[3], hlds__make_hlds__add_class__Methods_15, &hlds__make_hlds__add_class__ModeMethods_19, &hlds__make_hlds__add_class__PredOrFuncMethods_20);
    }
#line 263 "add_class.m"
    {
#line 263 "add_class.m"
      hlds__make_hlds__add_class__add_class_pred_or_func_methods_10_p_0(hlds__make_hlds__add_class__ClassName_11, hlds__make_hlds__add_class__ClassParamVars_12, hlds__make_hlds__add_class__TypeClassStatus_13, hlds__make_hlds__add_class__NeedQual_14, hlds__make_hlds__add_class__PredOrFuncMethods_20, &hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_27_27, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_22, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_28_28, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_24, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_29_29);
    }
#line 272 "add_class.m"
    {
#line 272 "add_class.m"
      hlds__make_hlds__add_class__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 272 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_9[0]));
#line 272 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_10_p_0_2));
#line 272 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 272 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 3) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_11));
#line 272 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_12));
#line 272 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 5) = ((MR_Box) (hlds__make_hlds__add_class__TypeClassStatus_13));
#line 272 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 6) = ((MR_Box) (hlds__make_hlds__add_class__NeedQual_14));
#line 272 "add_class.m"
    }
#line 271 "add_class.m"
    {
#line 271 "add_class.m"
      mercury__list__foldl3_8_p_0(hlds__make_hlds__add_class__TypeCtorInfo_37_37, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[7], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__V_30_30, hlds__make_hlds__add_class__ModeMethods_19, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_27_27)), &hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_31_31, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_28_28)), &hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_32_32, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_29_29)), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_33_33);
    }
#line 271 "add_class.m"
    hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_31_31 = ((MR_Word) hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_31_31);
#line 271 "add_class.m"
    hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_32_32);
#line 271 "add_class.m"
    hlds__make_hlds__add_class__STATE_VARIABLE_Specs_33_33 = ((MR_Word) hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_33_33);
#line 275 "add_class.m"
    {
#line 275 "add_class.m"
      hlds__make_hlds__add_class__check_method_modes_7_p_0(hlds__make_hlds__add_class__Methods_15, hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_31_31, hlds__make_hlds__add_class__PredProcIds_16, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_32_32, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_23, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_33_33, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_25);
#line 275 "add_class.m"
      return;
    }
#line 259 "add_class.m"
  }
#line 251 "add_class.m"
}

#line 240 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
#line 240 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldFunDeps0_3,
#line 240 "add_class.m"
  MR_Word hlds__make_hlds__add_class__FunDeps0_4)
#line 240 "add_class.m"
{
#line 243 "add_class.m"
  {
#line 243 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 243 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeCtorInfo_7_7 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
#line 243 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldFunDeps_5;
#line 243 "add_class.m"
    MR_Word hlds__make_hlds__add_class__FunDeps_6;

#line 247 "add_class.m"
    {
#line 247 "add_class.m"
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_7_7, hlds__make_hlds__add_class__OldFunDeps0_3, &hlds__make_hlds__add_class__OldFunDeps_5);
    }
#line 248 "add_class.m"
    {
#line 248 "add_class.m"
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_7_7, hlds__make_hlds__add_class__FunDeps0_4, &hlds__make_hlds__add_class__FunDeps_6);
    }
#line 249 "add_class.m"
    {
#line 249 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[17], ((MR_Box) (hlds__make_hlds__add_class__OldFunDeps_5)), ((MR_Box) (hlds__make_hlds__add_class__FunDeps_6)));
    }
#line 243 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 243 "add_class.m"
  }
#line 240 "add_class.m"
}

#line 224 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__constraints_are_identical_6_p_0(
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVars0_7,
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVarSet_8,
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldConstraints0_9,
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_10,
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__VarSet_11,
#line 224 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Constraints_12)
#line 224 "add_class.m"
{
#line 229 "add_class.m"
  {
#line 229 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 229 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_19_19;
#line 229 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Renaming_14;
#line 229 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldConstraints1_15;
#line 229 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldVars_16;
#line 229 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarRenaming_17;
#line 229 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldConstraints_18;
#line 230 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_13_13;

#line 230 "add_class.m"
    {
#line 230 "add_class.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__VarSet_11, hlds__make_hlds__add_class__OldVarSet_8, &hlds__make_hlds__add_class__V_13_13, &hlds__make_hlds__add_class__Renaming_14);
    }
#line 231 "add_class.m"
    {
#line 231 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(hlds__make_hlds__add_class__Renaming_14, hlds__make_hlds__add_class__OldConstraints0_9, &hlds__make_hlds__add_class__OldConstraints1_15);
    }
#line 233 "add_class.m"
    {
#line 233 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(hlds__make_hlds__add_class__Renaming_14, hlds__make_hlds__add_class__OldVars0_7, &hlds__make_hlds__add_class__OldVars_16);
    }
#line 4305 "hlds.make_hlds.add_class.c"
    hlds__make_hlds__add_class__TypeInfo_19_19 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
#line 235 "add_class.m"
    {
#line 235 "add_class.m"
      mercury__map__from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__TypeInfo_19_19, hlds__make_hlds__add_class__TypeInfo_19_19, hlds__make_hlds__add_class__OldVars_16, hlds__make_hlds__add_class__Vars_10, &hlds__make_hlds__add_class__VarRenaming_17);
    }
#line 236 "add_class.m"
    {
#line 236 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(hlds__make_hlds__add_class__VarRenaming_17, hlds__make_hlds__add_class__OldConstraints1_15, &hlds__make_hlds__add_class__OldConstraints_18);
    }
#line 238 "add_class.m"
    {
#line 238 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[16], ((MR_Box) (hlds__make_hlds__add_class__OldConstraints_18)), ((MR_Box) (hlds__make_hlds__add_class__Constraints_12)));
    }
#line 229 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 229 "add_class.m"
  }
#line 224 "add_class.m"
}

#line 213 "add_class.m"
static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
#line 213 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeInfo_for_T_17,
#line 213 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 213 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__N_2,
#line 213 "add_class.m"
  MR_Box hlds__make_hlds__add_class__X_3)
#line 213 "add_class.m"
{
#line 215 "add_class.m"
  while (MR_TRUE)
#line 215 "add_class.m"
    {
#line 215 "add_class.m"
      /* tailcall optimized into a loop */
#line 215 "add_class.m"
      {
#line 215 "add_class.m"
        MR_bool hlds__make_hlds__add_class__succeeded;
#line 215 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__HeadVar__4_4;

#line 215 "add_class.m"
        if ((hlds__make_hlds__add_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 215 "add_class.m"
          {
#line 216 "add_class.m"
            {
#line 216 "add_class.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "function \140hlds.make_hlds.add_class.get_list_index\'/3", (MR_String) "element not found");
            }
#line 215 "add_class.m"
          }
#line 215 "add_class.m"
        else
#line 217 "add_class.m"
          {
#line 217 "add_class.m"
            MR_Box hlds__make_hlds__add_class__E_11 = (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 0));
#line 217 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Es_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 1)));

#line 218 "add_class.m"
            {
#line 218 "add_class.m"
              hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_class__TypeInfo_for_T_17, hlds__make_hlds__add_class__X_3, hlds__make_hlds__add_class__E_11);
            }
#line 217 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 219 "add_class.m"
              hlds__make_hlds__add_class__HeadVar__4_4 = hlds__make_hlds__add_class__N_2;
#line 217 "add_class.m"
            else
#line 221 "add_class.m"
              {
#line 221 "add_class.m"
                MR_Integer hlds__make_hlds__add_class__V_15_15 = (hlds__make_hlds__add_class__N_2 + (MR_Integer) 1);

#line 221 "add_class.m"
                /* direct tailcall eliminated */
#line 221 "add_class.m"
                {
#line 221 "add_class.m"
                  MR_Word hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_class__Es_12;
#line 221 "add_class.m"
                  MR_Integer hlds__make_hlds__add_class__N__tmp_copy_2 = hlds__make_hlds__add_class__V_15_15;

#line 221 "add_class.m"
                  hlds__make_hlds__add_class__N_2 = hlds__make_hlds__add_class__N__tmp_copy_2;
#line 221 "add_class.m"
                  hlds__make_hlds__add_class__HeadVar__1_1 = hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1;
#line 221 "add_class.m"
                }
#line 221 "add_class.m"
                continue;
#line 221 "add_class.m"
              }
#line 217 "add_class.m"
          }
#line 215 "add_class.m"
        return hlds__make_hlds__add_class__HeadVar__4_4;
#line 215 "add_class.m"
      }
#line 215 "add_class.m"
      break;
#line 215 "add_class.m"
    }
#line 213 "add_class.m"
}

#line 209 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
#line 209 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 209 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 209 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2)
#line 209 "add_class.m"
{
#line 209 "add_class.m"
  {
#line 209 "add_class.m"
    MR_Box hlds__make_hlds__add_class__wrapper_arg_3;
#line 209 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 209 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_HeadVar__4_13;

#line 209 "add_class.m"
    {
#line 209 "add_class.m"
      hlds__make_hlds__add_class__conv0_HeadVar__4_13 = hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__209__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2));
    }
#line 209 "add_class.m"
    hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv0_HeadVar__4_13));
#line 209 "add_class.m"
    return hlds__make_hlds__add_class__wrapper_arg_3;
#line 209 "add_class.m"
  }
#line 209 "add_class.m"
}

#line 200 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
#line 200 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 200 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_2)
#line 200 "add_class.m"
{
#line 202 "add_class.m"
  {
#line 202 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 202 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HeadVar__3_3;
#line 202 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Domain0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__2_2, (MR_Integer) 0)));
#line 202 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Range0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Domain_7;
#line 202 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Range_8;
#line 202 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_15_15;
#line 202 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Func_29;
#line 202 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_33_33;
#line 208 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv1_Domain_7;
#line 208 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv2_Range_8;

#line 208 "add_class.m"
    {
#line 208 "add_class.m"
      hlds__make_hlds__add_class__V_15_15 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 209 "add_class.m"
    {
#line 209 "add_class.m"
      hlds__make_hlds__add_class__Func_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 209 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[0]));
#line 209 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 1) = ((MR_Box) (hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1));
#line 209 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 209 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 3) = ((MR_Box) (hlds__make_hlds__add_class__TVars_4));
#line 209 "add_class.m"
    }
#line 208 "add_class.m"
    {
#line 208 "add_class.m"
      hlds__make_hlds__add_class__conv1_Domain_7 = mercury__list__foldl_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[6], hlds__make_hlds__add_class__Func_29, hlds__make_hlds__add_class__Domain0_5, ((MR_Box) (hlds__make_hlds__add_class__V_15_15)));
    }
#line 208 "add_class.m"
    hlds__make_hlds__add_class__Domain_7 = ((MR_Word) hlds__make_hlds__add_class__conv1_Domain_7);
#line 208 "add_class.m"
    {
#line 208 "add_class.m"
      hlds__make_hlds__add_class__V_33_33 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 208 "add_class.m"
    {
#line 208 "add_class.m"
      hlds__make_hlds__add_class__conv2_Range_8 = mercury__list__foldl_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[6], hlds__make_hlds__add_class__Func_29, hlds__make_hlds__add_class__Range0_6, ((MR_Box) (hlds__make_hlds__add_class__V_33_33)));
    }
#line 208 "add_class.m"
    hlds__make_hlds__add_class__Range_8 = ((MR_Word) hlds__make_hlds__add_class__conv2_Range_8);
#line 202 "add_class.m"
    {
#line 202 "add_class.m"
      hlds__make_hlds__add_class__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 202 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_class__Domain_7));
#line 202 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_class__Range_8));
#line 202 "add_class.m"
    }
#line 202 "add_class.m"
    return hlds__make_hlds__add_class__HeadVar__3_3;
#line 202 "add_class.m"
  }
#line 200 "add_class.m"
}

#line 682 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1(
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 682 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 682 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 682 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_8,
#line 682 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_9,
#line 682 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_10,
#line 682 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_11)
#line 682 "add_class.m"
{
#line 682 "add_class.m"
  {
#line 682 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 682 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv4_TVarSet_20;
#line 682 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_46;
#line 682 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_48;
#line 682 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_50;
#line 682 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_52;

#line 682 "add_class.m"
    {
#line 682 "add_class.m"
      hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv4_TVarSet_20, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_4), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_46, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_6), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_48, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_8), &hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_50, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_10), &hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_52);
    }
#line 682 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv4_TVarSet_20));
#line 682 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_46));
#line 682 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_48));
#line 682 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_9 = ((MR_Box) (hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_50));
#line 682 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_11 = ((MR_Box) (hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_52));
#line 682 "add_class.m"
  }
#line 682 "add_class.m"
}

#line 38 "add_class.m"
void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(
#line 38 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceProcDefn_17,
#line 38 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_18,
#line 38 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__PredArity_19,
#line 38 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ArgTypes_20,
#line 38 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Markers_21,
#line 38 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_22,
#line 38 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceStatus_23,
#line 38 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__ClausesInfo_24,
#line 38 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_48,
#line 38 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_49,
#line 38 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_50,
#line 38 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_51,
#line 38 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_52,
#line 38 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_53,
#line 38 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54,
#line 38 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55)
#line 38 "add_class.m"
{
#line 645 "add_class.m"
  {
#line 645 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 645 "add_class.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__InstanceProcDefn_17)) == (MR_mktag((MR_Integer) 1))))
#line 678 "add_class.m"
      {
#line 678 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstanceClauses_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__InstanceProcDefn_17, (MR_Integer) 0)));
#line 678 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClausesInfo0_47;
#line 678 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_56_56;
#line 678 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_57_57;
#line 681 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_49;
#line 681 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_51;
#line 681 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_53;
#line 681 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv6_ClausesInfo_24;
#line 681 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_55;

#line 680 "add_class.m"
        {
#line 680 "add_class.m"
          hlds__make_hlds__add_class__V_56_56 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        }
#line 679 "add_class.m"
        {
#line 679 "add_class.m"
          hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__PredArity_19, hlds__make_hlds__add_class__V_56_56, &hlds__make_hlds__add_class__ClausesInfo0_47);
        }
#line 682 "add_class.m"
        {
#line 682 "add_class.m"
          hlds__make_hlds__add_class__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 682 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_6[0]));
#line 682 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1));
#line 682 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 682 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 3) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_18));
#line 682 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 4) = ((MR_Box) (hlds__make_hlds__add_class__Context_22));
#line 682 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 5) = ((MR_Box) (hlds__make_hlds__add_class__InstanceStatus_23));
#line 682 "add_class.m"
        }
#line 681 "add_class.m"
        {
#line 681 "add_class.m"
          mercury__list__foldl5_12_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[4], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0, (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__V_57_57, hlds__make_hlds__add_class__InstanceClauses_46, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_48)), &hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_49, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_50)), &hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_51, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_52)), &hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_53, ((MR_Box) (hlds__make_hlds__add_class__ClausesInfo0_47)), &hlds__make_hlds__add_class__conv6_ClausesInfo_24, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54)), &hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_55);
        }
#line 681 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_49 = ((MR_Word) hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_49);
#line 681 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_51 = ((MR_Word) hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_51);
#line 681 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_53 = ((MR_Word) hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_53);
#line 681 "add_class.m"
        *hlds__make_hlds__add_class__ClausesInfo_24 = ((MR_Word) hlds__make_hlds__add_class__conv6_ClausesInfo_24);
#line 681 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55 = ((MR_Word) hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_55);
#line 678 "add_class.m"
      }
#line 645 "add_class.m"
    else
#line 645 "add_class.m"
      {
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_76_76;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstancePredName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceProcDefn_17, (MR_Integer) 0)));
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo0_30;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo1_31;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadVars_32;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NonLocals_33;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo2_34;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo_35;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet0_36;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet_37;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__IntroducedGoal_38;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__IntroducedClause_39;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TVarNameMap_40;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarTypes_41;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadVarVec_42;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClausesRep_43;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__RttiVarMaps_44;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_67_67;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_72_72;
#line 645 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_75_75;

#line 648 "add_class.m"
        {
#line 648 "add_class.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__add_class__GoalInfo0_30);
        }
#line 649 "add_class.m"
        {
#line 649 "add_class.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__add_class__Context_22, hlds__make_hlds__add_class__GoalInfo0_30, &hlds__make_hlds__add_class__GoalInfo1_31);
        }
#line 4775 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 660 "add_class.m"
        {
#line 660 "add_class.m"
          mercury__varset__init_1_p_0(hlds__make_hlds__add_class__TypeCtorInfo_76_76, &hlds__make_hlds__add_class__VarSet0_36);
        }
#line 661 "add_class.m"
        {
#line 661 "add_class.m"
          parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_class__TypeCtorInfo_76_76, (MR_String) "HeadVar__", hlds__make_hlds__add_class__PredArity_19, &hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__VarSet0_36, &hlds__make_hlds__add_class__VarSet_37);
        }
#line 650 "add_class.m"
        {
#line 650 "add_class.m"
          parse_tree__set_of_var__list_to_set_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_76_76, hlds__make_hlds__add_class__HeadVars_32, &hlds__make_hlds__add_class__NonLocals_33);
        }
#line 651 "add_class.m"
        {
#line 651 "add_class.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_class__NonLocals_33, hlds__make_hlds__add_class__GoalInfo1_31, &hlds__make_hlds__add_class__GoalInfo2_34);
        }
#line 652 "add_class.m"
        {
#line 652 "add_class.m"
          hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__Markers_21, (MR_Integer) 12);
        }
#line 654 "add_class.m"
        if (hlds__make_hlds__add_class__succeeded)
#line 653 "add_class.m"
          {
#line 653 "add_class.m"
            {
#line 653 "add_class.m"
              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_class__GoalInfo2_34, &hlds__make_hlds__add_class__GoalInfo_35);
            }
#line 653 "add_class.m"
          }
#line 654 "add_class.m"
        else
#line 656 "add_class.m"
          {
#line 654 "add_class.m"
            {
#line 654 "add_class.m"
              hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__Markers_21, (MR_Integer) 13);
            }
#line 656 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 655 "add_class.m"
              {
#line 655 "add_class.m"
                {
#line 655 "add_class.m"
                  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_class__GoalInfo2_34, &hlds__make_hlds__add_class__GoalInfo_35);
                }
#line 655 "add_class.m"
              }
#line 656 "add_class.m"
            else
#line 657 "add_class.m"
              hlds__make_hlds__add_class__GoalInfo_35 = hlds__make_hlds__add_class__GoalInfo2_34;
#line 656 "add_class.m"
          }
#line 662 "add_class.m"
        {
#line 662 "add_class.m"
          hlds__make_hlds__add_class__V_67_67 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 662 "add_class.m"
        {
#line 662 "add_class.m"
          hlds__make_hlds__qual_info__construct_pred_or_func_call_8_p_0(hlds__make_hlds__add_class__V_67_67, hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__InstancePredName_29, hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__GoalInfo_35, &hlds__make_hlds__add_class__IntroducedGoal_38, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_52, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_53);
        }
#line 664 "add_class.m"
        {
#line 664 "add_class.m"
          hlds__make_hlds__add_class__IntroducedClause_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 664 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 1) = ((MR_Box) (hlds__make_hlds__add_class__IntroducedGoal_38));
#line 664 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 3) = ((MR_Box) (hlds__make_hlds__add_class__Context_22));
#line 664 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "add_class.m"
        }
#line 667 "add_class.m"
        {
#line 667 "add_class.m"
          mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], &hlds__make_hlds__add_class__TVarNameMap_40);
        }
#line 668 "add_class.m"
        {
#line 668 "add_class.m"
          hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__ArgTypes_20, &hlds__make_hlds__add_class__VarTypes_41);
        }
#line 669 "add_class.m"
        {
#line 669 "add_class.m"
          hlds__make_hlds__add_class__HeadVarVec_42 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[3], hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__HeadVars_32);
        }
#line 670 "add_class.m"
        {
#line 670 "add_class.m"
          hlds__make_hlds__add_class__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_class__IntroducedClause_39));
#line 670 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "add_class.m"
        }
#line 670 "add_class.m"
        {
#line 670 "add_class.m"
          hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_class__V_72_72, &hlds__make_hlds__add_class__ClausesRep_43);
        }
#line 671 "add_class.m"
        {
#line 671 "add_class.m"
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_class__RttiVarMaps_44);
        }
#line 674 "add_class.m"
        {
#line 674 "add_class.m"
          hlds__make_hlds__add_class__V_75_75 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        }
#line 673 "add_class.m"
        {
#line 673 "add_class.m"
          MR_Word base;
#line 673 "add_class.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 673 "add_class.m"
          *hlds__make_hlds__add_class__ClausesInfo_24 = base;
#line 673 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_37));
#line 673 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__VarTypes_41));
#line 673 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_class__TVarNameMap_40));
#line 673 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_class__VarTypes_41));
#line 673 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_class__HeadVarVec_42));
#line 673 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_class__ClausesRep_43));
#line 673 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_class__V_75_75));
#line 673 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_class__RttiVarMaps_44));
#line 673 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 673 "add_class.m"
        }
#line 645 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_49 = hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_48;
#line 645 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_51 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_50;
#line 645 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54;
#line 645 "add_class.m"
      }
#line 645 "add_class.m"
  }
#line 38 "add_class.m"
}

#line 569 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_2(
#line 569 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 569 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 569 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 569 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3)
#line 569 "add_class.m"
{
#line 569 "add_class.m"
  {
#line 569 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 569 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26;

#line 569 "add_class.m"
    {
#line 569 "add_class.m"
      hlds__make_hlds__add_class__check_instance_constraints_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26);
    }
#line 569 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26));
#line 569 "add_class.m"
  }
#line 569 "add_class.m"
}

#line 567 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_1(
#line 567 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 567 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
#line 567 "add_class.m"
{
#line 567 "add_class.m"
  {
#line 567 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 567 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 567 "add_class.m"
    {
#line 567 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
#line 567 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 567 "add_class.m"
  }
#line 567 "add_class.m"
}

#line 29 "add_class.m"
void MR_CALL 
hlds__make_hlds__add_class__module_add_instance_defn_13_p_0(
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceModuleName_14,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Constraints_15,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_16,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Types_17,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OriginalTypes_18,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceBody0_19,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__VarSet_20,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceStatus_21,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_22,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_36,
#line 29 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_37,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_38,
#line 29 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_39)
#line 29 "add_class.m"
{
#line 474 "add_class.m"
  {
#line 474 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 474 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Classes_25;
#line 474 "add_class.m"
    MR_Word hlds__make_hlds__add_class__InstanceTable0_26;
#line 474 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__ClassArity_27;
#line 474 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassId_28;
#line 474 "add_class.m"
    MR_Word hlds__make_hlds__add_class__InstanceBody_29;
#line 480 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_30_30;
#line 480 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv0_V_30_30;

#line 475 "add_class.m"
    {
#line 475 "add_class.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_class__Classes_25);
    }
#line 476 "add_class.m"
    {
#line 476 "add_class.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_36, &hlds__make_hlds__add_class__InstanceTable0_26);
    }
#line 477 "add_class.m"
    {
#line 477 "add_class.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_class__Types_17, &hlds__make_hlds__add_class__ClassArity_27);
    }
#line 478 "add_class.m"
    {
#line 478 "add_class.m"
      hlds__make_hlds__add_class__ClassId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_28, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_16));
#line 478 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_28, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_27));
#line 478 "add_class.m"
    }
#line 479 "add_class.m"
    {
#line 479 "add_class.m"
      hlds__make_hlds__state_var__expand_bang_states_instance_body_2_p_0(hlds__make_hlds__add_class__InstanceBody0_19, &hlds__make_hlds__add_class__InstanceBody_29);
    }
#line 480 "add_class.m"
    {
#line 480 "add_class.m"
      hlds__make_hlds__add_class__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__make_hlds__add_class__Classes_25, ((MR_Box) (hlds__make_hlds__add_class__ClassId_28)), &hlds__make_hlds__add_class__conv0_V_30_30);
    }
#line 480 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 480 "add_class.m"
      {
#line 480 "add_class.m"
        hlds__make_hlds__add_class__V_30_30 = ((MR_Word) hlds__make_hlds__add_class__conv0_V_30_30);
#line 480 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 480 "add_class.m"
      }
#line 494 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 481 "add_class.m"
      {
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_51_51;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeInfo_52_52;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_17_82;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ProofMap_32;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewInstanceDefn_33;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__OldInstanceDefns_34;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstanceTable_35;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_40_40;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_42_42;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewTypes_60;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewContext_63;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewInstanceBody_65;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewTVarSet_67;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__EquivInstanceDefns_77;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_78_78;
#line 481 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_79_79;
#line 486 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv1_OldInstanceDefns_34;
#line 505 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_59_59;
#line 505 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_61_61;
#line 505 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_62_62;
#line 505 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_64_64;
#line 505 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_66_66;
#line 505 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_68_68;
#line 508 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_69_69;
#line 569 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_39;

#line 482 "add_class.m"
        {
#line 482 "add_class.m"
          mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_class__ProofMap_32);
        }
#line 483 "add_class.m"
        {
#line 483 "add_class.m"
          hlds__make_hlds__add_class__NewInstanceDefn_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 483 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__InstanceModuleName_14));
#line 483 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, 1) = ((MR_Box) (hlds__make_hlds__add_class__Types_17));
#line 483 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, 2) = ((MR_Box) (hlds__make_hlds__add_class__OriginalTypes_18));
#line 483 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, 3) = ((MR_Box) (hlds__make_hlds__add_class__InstanceStatus_21));
#line 483 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, 4) = ((MR_Box) (hlds__make_hlds__add_class__Context_22));
#line 483 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, 5) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_15));
#line 483 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, 6) = ((MR_Box) (hlds__make_hlds__add_class__InstanceBody_29));
#line 483 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_20));
#line 483 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, 9) = ((MR_Box) (hlds__make_hlds__add_class__ProofMap_32));
#line 483 "add_class.m"
        }
#line 5187 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_51_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 5189 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeInfo_52_52 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[2];
#line 486 "add_class.m"
        {
#line 486 "add_class.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__add_class__TypeCtorInfo_51_51, hlds__make_hlds__add_class__TypeInfo_52_52, hlds__make_hlds__add_class__InstanceTable0_26, ((MR_Box) (hlds__make_hlds__add_class__ClassId_28)), &hlds__make_hlds__add_class__conv1_OldInstanceDefns_34);
        }
#line 486 "add_class.m"
        hlds__make_hlds__add_class__OldInstanceDefns_34 = ((MR_Word) hlds__make_hlds__add_class__conv1_OldInstanceDefns_34);
#line 505 "add_class.m"
        hlds__make_hlds__add_class__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, (MR_Integer) 0)));
#line 505 "add_class.m"
        hlds__make_hlds__add_class__NewTypes_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, (MR_Integer) 1)));
#line 505 "add_class.m"
        hlds__make_hlds__add_class__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, (MR_Integer) 2)));
#line 505 "add_class.m"
        hlds__make_hlds__add_class__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, (MR_Integer) 3)));
#line 505 "add_class.m"
        hlds__make_hlds__add_class__NewContext_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, (MR_Integer) 4)));
#line 505 "add_class.m"
        hlds__make_hlds__add_class__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, (MR_Integer) 5)));
#line 505 "add_class.m"
        hlds__make_hlds__add_class__NewInstanceBody_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, (MR_Integer) 6)));
#line 505 "add_class.m"
        hlds__make_hlds__add_class__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, (MR_Integer) 7)));
#line 505 "add_class.m"
        hlds__make_hlds__add_class__NewTVarSet_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, (MR_Integer) 8)));
#line 505 "add_class.m"
        hlds__make_hlds__add_class__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_33, (MR_Integer) 9)));
#line 508 "add_class.m"
        hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__NewInstanceBody_65)) == (MR_mktag((MR_Integer) 1)));
#line 508 "add_class.m"
        if (hlds__make_hlds__add_class__succeeded)
#line 508 "add_class.m"
          {
#line 508 "add_class.m"
            hlds__make_hlds__add_class__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewInstanceBody_65, (MR_Integer) 0)));
#line 510 "add_class.m"
            {
#line 510 "add_class.m"
              hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(hlds__make_hlds__add_class__ClassId_28, hlds__make_hlds__add_class__NewTypes_60, hlds__make_hlds__add_class__NewTVarSet_67, hlds__make_hlds__add_class__NewContext_63, hlds__make_hlds__add_class__OldInstanceDefns_34, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_38, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_40_40);
            }
#line 508 "add_class.m"
          }
#line 508 "add_class.m"
        else
#line 512 "add_class.m"
          hlds__make_hlds__add_class__STATE_VARIABLE_Specs_40_40 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_38;
#line 567 "add_class.m"
        {
#line 567 "add_class.m"
          hlds__make_hlds__add_class__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 567 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_78_78, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[1]));
#line 567 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_78_78, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_1));
#line 567 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_78_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 567 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_78_78, 3) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_33));
#line 567 "add_class.m"
        }
#line 5251 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_17_82 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 567 "add_class.m"
        {
#line 567 "add_class.m"
          mercury__list__filter_3_p_0(hlds__make_hlds__add_class__TypeCtorInfo_17_82, hlds__make_hlds__add_class__V_78_78, hlds__make_hlds__add_class__OldInstanceDefns_34, &hlds__make_hlds__add_class__EquivInstanceDefns_77);
        }
#line 569 "add_class.m"
        {
#line 569 "add_class.m"
          hlds__make_hlds__add_class__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 569 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_79_79, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_5[0]));
#line 569 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_79_79, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_2));
#line 569 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_79_79, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 569 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_79_79, 3) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_33));
#line 569 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_79_79, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassId_28));
#line 569 "add_class.m"
        }
#line 569 "add_class.m"
        {
#line 569 "add_class.m"
          mercury__list__foldl_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_17_82, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__V_79_79, hlds__make_hlds__add_class__EquivInstanceDefns_77, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_40_40)), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_39);
        }
#line 569 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_39 = ((MR_Word) hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_39);
#line 491 "add_class.m"
        {
#line 491 "add_class.m"
          hlds__make_hlds__add_class__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_33));
#line 491 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_class__OldInstanceDefns_34));
#line 491 "add_class.m"
        }
#line 491 "add_class.m"
        {
#line 491 "add_class.m"
          mercury__map__det_update_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_51_51, hlds__make_hlds__add_class__TypeInfo_52_52, ((MR_Box) (hlds__make_hlds__add_class__ClassId_28)), ((MR_Box) (hlds__make_hlds__add_class__V_42_42)), hlds__make_hlds__add_class__InstanceTable0_26, &hlds__make_hlds__add_class__InstanceTable_35);
        }
#line 493 "add_class.m"
        {
#line 493 "add_class.m"
          hlds__hlds_module__module_info_set_instance_table_3_p_0(hlds__make_hlds__add_class__InstanceTable_35, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_36, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_37);
#line 493 "add_class.m"
          return;
        }
#line 481 "add_class.m"
      }
#line 494 "add_class.m"
    else
#line 495 "add_class.m"
      {
#line 495 "add_class.m"
        {
#line 495 "add_class.m"
          hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(hlds__make_hlds__add_class__ClassName_16, hlds__make_hlds__add_class__ClassArity_27, hlds__make_hlds__add_class__Context_22, (MR_String) "instance declaration", hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_38, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_39);
        }
#line 495 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_37 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_36;
#line 495 "add_class.m"
      }
#line 474 "add_class.m"
  }
#line 29 "add_class.m"
}

#line 160 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_7_p_0_3(
#line 160 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 160 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 160 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2)
#line 160 "add_class.m"
{
#line 160 "add_class.m"
  {
#line 160 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 160 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 160 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv3_HeadVar__2_90;

#line 160 "add_class.m"
    {
#line 160 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__160__1_2_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), &hlds__make_hlds__add_class__conv3_HeadVar__2_90);
    }
#line 160 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 160 "add_class.m"
      {
#line 160 "add_class.m"
        *hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv3_HeadVar__2_90));
#line 160 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 160 "add_class.m"
      }
#line 160 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 160 "add_class.m"
  }
#line 160 "add_class.m"
}

#line 160 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_7_p_0_2(
#line 160 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 160 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 160 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2)
#line 160 "add_class.m"
{
#line 160 "add_class.m"
  {
#line 160 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 160 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 160 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_HeadVar__2_90;

#line 160 "add_class.m"
    {
#line 160 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__160__1_2_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), &hlds__make_hlds__add_class__conv2_HeadVar__2_90);
    }
#line 160 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 160 "add_class.m"
      {
#line 160 "add_class.m"
        *hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv2_HeadVar__2_90));
#line 160 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 160 "add_class.m"
      }
#line 160 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 160 "add_class.m"
  }
#line 160 "add_class.m"
}

#line 89 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_7_p_0_1(
#line 89 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 89 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
#line 89 "add_class.m"
{
#line 89 "add_class.m"
  {
#line 89 "add_class.m"
    MR_Box hlds__make_hlds__add_class__wrapper_arg_2;
#line 89 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 89 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_HeadVar__3_3;

#line 89 "add_class.m"
    {
#line 89 "add_class.m"
      hlds__make_hlds__add_class__conv0_HeadVar__3_3 = hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
#line 89 "add_class.m"
    hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv0_HeadVar__3_3));
#line 89 "add_class.m"
    return hlds__make_hlds__add_class__wrapper_arg_2;
#line 89 "add_class.m"
  }
#line 89 "add_class.m"
}

#line 24 "add_class.m"
void MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_7_p_0(
#line 24 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ItemTypeClassInfo_8,
#line 24 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus0_9,
#line 24 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_10,
#line 24 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_62,
#line 24 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_63,
#line 24 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_64,
#line 24 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_65)
#line 24 "add_class.m"
{
#line 76 "add_class.m"
  {
#line 76 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_103_103;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_8, (MR_Integer) 0)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassParamVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_8, (MR_Integer) 1)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Constraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_8, (MR_Integer) 2)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__FunDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_8, (MR_Integer) 3)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Interface_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_8, (MR_Integer) 4)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_8, (MR_Integer) 5)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_8, (MR_Integer) 6)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Classes0_21;
#line 76 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__ClassArity_22;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassId_23;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeClassStatus1_24;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HLDSFunDeps_26;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_66_66;
#line 77 "add_class.m"
    MR_Integer hlds__make_hlds__add_class___SeqNum_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_8, (MR_Integer) 7)));
#line 5492 "hlds.make_hlds.add_class.c"
    MR_Word hlds__make_hlds__add_class__OldDefn_27;
#line 91 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv1_OldDefn_27;

#line 79 "add_class.m"
    {
#line 79 "add_class.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_class__Classes0_21);
    }
#line 5502 "hlds.make_hlds.add_class.c"
    hlds__make_hlds__add_class__TypeInfo_103_103 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
#line 80 "add_class.m"
    {
#line 80 "add_class.m"
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_103_103, hlds__make_hlds__add_class__ClassParamVars_14, &hlds__make_hlds__add_class__ClassArity_22);
    }
#line 81 "add_class.m"
    {
#line 81 "add_class.m"
      hlds__make_hlds__add_class__ClassId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 81 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_23, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_13));
#line 81 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_23, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_22));
#line 81 "add_class.m"
    }
#line 85 "add_class.m"
    if ((hlds__make_hlds__add_class__Interface_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "add_class.m"
      {
#line 84 "add_class.m"
        hlds__status__typeclass_make_status_abstract_2_p_0(hlds__make_hlds__add_class__TypeClassStatus0_9, &hlds__make_hlds__add_class__TypeClassStatus1_24);
      }
#line 85 "add_class.m"
    else
#line 87 "add_class.m"
      hlds__make_hlds__add_class__TypeClassStatus1_24 = hlds__make_hlds__add_class__TypeClassStatus0_9;
#line 89 "add_class.m"
    {
#line 89 "add_class.m"
      hlds__make_hlds__add_class__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 89 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_66_66, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[0]));
#line 89 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_defn_7_p_0_1));
#line 89 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_66_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 89 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_66_66, 3) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_14));
#line 89 "add_class.m"
    }
#line 89 "add_class.m"
    {
#line 89 "add_class.m"
      hlds__make_hlds__add_class__HLDSFunDeps_26 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, hlds__make_hlds__add_class__V_66_66, hlds__make_hlds__add_class__FunDeps_16);
    }
#line 91 "add_class.m"
    {
#line 91 "add_class.m"
      hlds__make_hlds__add_class__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__make_hlds__add_class__Classes0_21, ((MR_Box) (hlds__make_hlds__add_class__ClassId_23)), &hlds__make_hlds__add_class__conv1_OldDefn_27);
    }
#line 91 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 91 "add_class.m"
      {
#line 91 "add_class.m"
        hlds__make_hlds__add_class__OldDefn_27 = ((MR_Word) hlds__make_hlds__add_class__conv1_OldDefn_27);
#line 91 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 91 "add_class.m"
      }
#line 5564 "hlds.make_hlds.add_class.c"
    if (hlds__make_hlds__add_class__succeeded)
#line 5566 "hlds.make_hlds.add_class.c"
      {
#line 5568 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldTypeClassStatus_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 0)));
#line 5570 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldConstraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 1)));
#line 5572 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldFunDeps_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 2)));
#line 5574 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldClassParamVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 4)));
#line 5576 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldInterface_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 6)));
#line 5578 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldMethods_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 7)));
#line 5580 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldVarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 8)));
#line 5582 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 9)));
#line 5584 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__TypeClassStatus_38;
#line 5586 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassMethods0_40;
#line 5588 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassInterface_41;
#line 93 "add_class.m"
        MR_Word hlds__make_hlds__add_class___OldAncestors_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 3)));
#line 93 "add_class.m"
        MR_Word hlds__make_hlds__add_class___OldKinds_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 5)));

#line 98 "add_class.m"
        {
#line 98 "add_class.m"
          hlds__status__typeclass_combine_status_3_p_0(hlds__make_hlds__add_class__TypeClassStatus1_24, hlds__make_hlds__add_class__OldTypeClassStatus_28, &hlds__make_hlds__add_class__TypeClassStatus_38);
        }
#line 104 "add_class.m"
        if ((hlds__make_hlds__add_class__OldInterface_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 105 "add_class.m"
          {
#line 106 "add_class.m"
            hlds__make_hlds__add_class__ClassMethods0_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 107 "add_class.m"
            hlds__make_hlds__add_class__ClassInterface_41 = hlds__make_hlds__add_class__Interface_17;
#line 105 "add_class.m"
          }
#line 104 "add_class.m"
        else
#line 101 "add_class.m"
          {
#line 102 "add_class.m"
            hlds__make_hlds__add_class__ClassMethods0_40 = hlds__make_hlds__add_class__OldMethods_35;
#line 103 "add_class.m"
            hlds__make_hlds__add_class__ClassInterface_41 = hlds__make_hlds__add_class__OldInterface_34;
#line 101 "add_class.m"
          }
#line 111 "add_class.m"
        {
#line 111 "add_class.m"
          hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(hlds__make_hlds__add_class__OldClassParamVars_32, hlds__make_hlds__add_class__OldVarSet_36, hlds__make_hlds__add_class__OldConstraints_29, hlds__make_hlds__add_class__ClassParamVars_14, hlds__make_hlds__add_class__VarSet_18, hlds__make_hlds__add_class__Constraints_15);
        }
#line 111 "add_class.m"
        hlds__make_hlds__add_class__succeeded = !(hlds__make_hlds__add_class__succeeded);
#line 5627 "hlds.make_hlds.add_class.c"
        if (hlds__make_hlds__add_class__succeeded)
#line 5629 "hlds.make_hlds.add_class.c"
          {
#line 116 "add_class.m"
            {
#line 116 "add_class.m"
              hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_class__ClassName_13, hlds__make_hlds__add_class__ClassArity_22, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_19, hlds__make_hlds__add_class__OldContext_37, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[13]), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_65);
            }
#line 151 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_63 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_62;
#line 5638 "hlds.make_hlds.add_class.c"
          }
#line 5640 "hlds.make_hlds.add_class.c"
        else
#line 5642 "hlds.make_hlds.add_class.c"
          {
#line 120 "add_class.m"
            {
#line 120 "add_class.m"
              hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(hlds__make_hlds__add_class__OldFunDeps_30, hlds__make_hlds__add_class__HLDSFunDeps_26);
            }
#line 120 "add_class.m"
            hlds__make_hlds__add_class__succeeded = !(hlds__make_hlds__add_class__succeeded);
#line 5651 "hlds.make_hlds.add_class.c"
            if (hlds__make_hlds__add_class__succeeded)
#line 5653 "hlds.make_hlds.add_class.c"
              {
#line 124 "add_class.m"
                {
#line 124 "add_class.m"
                  hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_class__ClassName_13, hlds__make_hlds__add_class__ClassArity_22, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_19, hlds__make_hlds__add_class__OldContext_37, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[15]), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_65);
                }
#line 151 "add_class.m"
                *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_63 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_62;
#line 5662 "hlds.make_hlds.add_class.c"
              }
#line 5664 "hlds.make_hlds.add_class.c"
            else
#line 5666 "hlds.make_hlds.add_class.c"
              {
#line 5668 "hlds.make_hlds.add_class.c"
                MR_Word hlds__make_hlds__add_class__ErrorOrPrevDef_154;
#line 5670 "hlds.make_hlds.add_class.c"
                MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_74_155;
#line 128 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_44_44;
#line 129 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_45_45;

#line 128 "add_class.m"
                hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__Interface_17)) == (MR_mktag((MR_Integer) 1)));
#line 128 "add_class.m"
                if (hlds__make_hlds__add_class__succeeded)
#line 128 "add_class.m"
                  {
#line 128 "add_class.m"
                    hlds__make_hlds__add_class__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_17, (MR_Integer) 0)));
#line 129 "add_class.m"
                    hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__OldInterface_34)) == (MR_mktag((MR_Integer) 1)));
#line 129 "add_class.m"
                    if (hlds__make_hlds__add_class__succeeded)
#line 129 "add_class.m"
                      hlds__make_hlds__add_class__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OldInterface_34, (MR_Integer) 0)));
#line 128 "add_class.m"
                  }
#line 139 "add_class.m"
                if (hlds__make_hlds__add_class__succeeded)
#line 137 "add_class.m"
                  {
#line 131 "add_class.m"
                    MR_Word hlds__make_hlds__add_class__V_83_83 = (MR_Word) hlds__make_hlds__add_class__TypeClassStatus_38;

#line 131 "add_class.m"
                    hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__V_83_83 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "add_class.m"
                    if (hlds__make_hlds__add_class__succeeded)
#line 133 "add_class.m"
                      hlds__make_hlds__add_class__STATE_VARIABLE_Specs_74_155 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_64;
#line 133 "add_class.m"
                    else
#line 134 "add_class.m"
                      {
#line 135 "add_class.m"
                        {
#line 135 "add_class.m"
                          hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_class__ClassName_13, hlds__make_hlds__add_class__ClassArity_22, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_19, hlds__make_hlds__add_class__OldContext_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_64, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_74_155);
                        }
#line 134 "add_class.m"
                      }
#line 138 "add_class.m"
                    hlds__make_hlds__add_class__ErrorOrPrevDef_154 = (MR_Integer) 1;
#line 137 "add_class.m"
                  }
#line 139 "add_class.m"
                else
#line 140 "add_class.m"
                  {
#line 140 "add_class.m"
                    hlds__make_hlds__add_class__ErrorOrPrevDef_154 = (MR_Integer) 0;
#line 140 "add_class.m"
                    hlds__make_hlds__add_class__STATE_VARIABLE_Specs_74_155 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_64;
#line 140 "add_class.m"
                  }
#line 152 "add_class.m"
#line 152 "add_class.m"
                switch (hlds__make_hlds__add_class__ErrorOrPrevDef_154) {
#line 152 "add_class.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 152 "add_class.m"
                  case (MR_Integer) 0:
#line 153 "add_class.m"
                    {
#line 153 "add_class.m"
                      MR_Word hlds__make_hlds__add_class__ClassMethods_55;
#line 153 "add_class.m"
                      MR_Word hlds__make_hlds__add_class__Kinds_57;
#line 153 "add_class.m"
                      MR_Word hlds__make_hlds__add_class__ClassDefn_58;
#line 153 "add_class.m"
                      MR_Word hlds__make_hlds__add_class__Classes_59;
#line 153 "add_class.m"
                      MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_87;

#line 171 "add_class.m"
                      if ((hlds__make_hlds__add_class__Interface_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 172 "add_class.m"
                        {
#line 173 "add_class.m"
                          hlds__make_hlds__add_class__ClassMethods_55 = hlds__make_hlds__add_class__ClassMethods0_40;
#line 172 "add_class.m"
                          hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_87 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_62;
#line 172 "add_class.m"
                          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_74_155;
#line 172 "add_class.m"
                        }
#line 171 "add_class.m"
                      else
#line 155 "add_class.m"
                        {
#line 155 "add_class.m"
                          MR_Word hlds__make_hlds__add_class__TypeCtorInfo_111_111;
#line 155 "add_class.m"
                          MR_Word hlds__make_hlds__add_class__Methods_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_17, (MR_Integer) 0)));
#line 155 "add_class.m"
                          MR_Word hlds__make_hlds__add_class__PredProcIds0_48;
#line 155 "add_class.m"
                          MR_Word hlds__make_hlds__add_class__PredProcIds1_54;

#line 156 "add_class.m"
                          {
#line 156 "add_class.m"
                            hlds__make_hlds__add_class__module_add_class_interface_10_p_0(hlds__make_hlds__add_class__ClassName_13, hlds__make_hlds__add_class__ClassParamVars_14, hlds__make_hlds__add_class__TypeClassStatus_38, hlds__make_hlds__add_class__NeedQual_10, hlds__make_hlds__add_class__Methods_47, &hlds__make_hlds__add_class__PredProcIds0_48, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_74_155, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_65);
                          }
#line 5781 "hlds.make_hlds.add_class.c"
                          hlds__make_hlds__add_class__TypeCtorInfo_111_111 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
#line 165 "add_class.m"
                          {
#line 165 "add_class.m"
                            mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], hlds__make_hlds__add_class__TypeCtorInfo_111_111, (MR_Word) &hlds__make_hlds__add_class_scalar_common_2[1], hlds__make_hlds__add_class__PredProcIds0_48, &hlds__make_hlds__add_class__PredProcIds1_54);
                          }
#line 170 "add_class.m"
                          {
#line 170 "add_class.m"
                            mercury__list__sort_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_111_111, hlds__make_hlds__add_class__PredProcIds1_54, &hlds__make_hlds__add_class__ClassMethods_55);
                          }
#line 155 "add_class.m"
                        }
#line 181 "add_class.m"
                      {
#line 181 "add_class.m"
                        hlds__make_hlds__add_class__Kinds_57 = mercury__map__init_0_f_0(hlds__make_hlds__add_class__TypeInfo_103_103, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
                      }
#line 182 "add_class.m"
                      {
#line 182 "add_class.m"
                        hlds__make_hlds__add_class__ClassDefn_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 182 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_58, 0) = ((MR_Box) (hlds__make_hlds__add_class__TypeClassStatus_38));
#line 182 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_58, 1) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_15));
#line 182 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_58, 2) = ((MR_Box) (hlds__make_hlds__add_class__HLDSFunDeps_26));
#line 182 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_58, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_58, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_14));
#line 182 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_58, 5) = ((MR_Box) (hlds__make_hlds__add_class__Kinds_57));
#line 182 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_58, 6) = ((MR_Box) (hlds__make_hlds__add_class__ClassInterface_41));
#line 182 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_58, 7) = ((MR_Box) (hlds__make_hlds__add_class__ClassMethods_55));
#line 182 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_58, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_18));
#line 182 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_58, 9) = ((MR_Box) (hlds__make_hlds__add_class__Context_19));
#line 182 "add_class.m"
                      }
#line 185 "add_class.m"
                      {
#line 185 "add_class.m"
                        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, ((MR_Box) (hlds__make_hlds__add_class__ClassId_23)), ((MR_Box) (hlds__make_hlds__add_class__ClassDefn_58)), hlds__make_hlds__add_class__Classes0_21, &hlds__make_hlds__add_class__Classes_59);
                      }
#line 186 "add_class.m"
                      {
#line 186 "add_class.m"
                        hlds__hlds_module__module_info_set_class_table_3_p_0(hlds__make_hlds__add_class__Classes_59, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_87, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_63);
#line 186 "add_class.m"
                        return;
                      }
#line 153 "add_class.m"
                    }
#line 152 "add_class.m"
                    break;
#line 152 "add_class.m"
                  case (MR_Integer) 1:
#line 151 "add_class.m"
                    {
#line 151 "add_class.m"
                      *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_63 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_62;
#line 151 "add_class.m"
                      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_74_155;
#line 151 "add_class.m"
                    }
#line 152 "add_class.m"
                    break;
#line 152 "add_class.m"
                }
#line 5856 "hlds.make_hlds.add_class.c"
              }
#line 5858 "hlds.make_hlds.add_class.c"
          }
#line 5860 "hlds.make_hlds.add_class.c"
      }
#line 5862 "hlds.make_hlds.add_class.c"
    else
#line 5864 "hlds.make_hlds.add_class.c"
      {
#line 5866 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_113_150;
#line 5868 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Instances0_60;
#line 5870 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Instances_61;
#line 5872 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassMethods_139;
#line 5874 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Kinds_141;
#line 5876 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassDefn_142;
#line 5878 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Classes_143;
#line 5880 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_145;
#line 5882 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_92_146;

#line 171 "add_class.m"
        if ((hlds__make_hlds__add_class__Interface_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 172 "add_class.m"
          {
#line 173 "add_class.m"
            hlds__make_hlds__add_class__ClassMethods_139 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 172 "add_class.m"
            hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_145 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_62;
#line 172 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_65 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_64;
#line 172 "add_class.m"
          }
#line 171 "add_class.m"
        else
#line 155 "add_class.m"
          {
#line 155 "add_class.m"
            MR_Word hlds__make_hlds__add_class__TypeCtorInfo_111_123;
#line 155 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Methods_118 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_17, (MR_Integer) 0)));
#line 155 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredProcIds0_119;
#line 155 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredProcIds1_121;

#line 156 "add_class.m"
            {
#line 156 "add_class.m"
              hlds__make_hlds__add_class__module_add_class_interface_10_p_0(hlds__make_hlds__add_class__ClassName_13, hlds__make_hlds__add_class__ClassParamVars_14, hlds__make_hlds__add_class__TypeClassStatus1_24, hlds__make_hlds__add_class__NeedQual_10, hlds__make_hlds__add_class__Methods_118, &hlds__make_hlds__add_class__PredProcIds0_119, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_62, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_145, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_64, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_65);
            }
#line 5915 "hlds.make_hlds.add_class.c"
            hlds__make_hlds__add_class__TypeCtorInfo_111_123 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
#line 165 "add_class.m"
            {
#line 165 "add_class.m"
              mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], hlds__make_hlds__add_class__TypeCtorInfo_111_123, (MR_Word) &hlds__make_hlds__add_class_scalar_common_2[2], hlds__make_hlds__add_class__PredProcIds0_119, &hlds__make_hlds__add_class__PredProcIds1_121);
            }
#line 170 "add_class.m"
            {
#line 170 "add_class.m"
              mercury__list__sort_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_111_123, hlds__make_hlds__add_class__PredProcIds1_121, &hlds__make_hlds__add_class__ClassMethods_139);
            }
#line 155 "add_class.m"
          }
#line 181 "add_class.m"
        {
#line 181 "add_class.m"
          hlds__make_hlds__add_class__Kinds_141 = mercury__map__init_0_f_0(hlds__make_hlds__add_class__TypeInfo_103_103, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 182 "add_class.m"
        {
#line 182 "add_class.m"
          hlds__make_hlds__add_class__ClassDefn_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 182 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_142, 0) = ((MR_Box) (hlds__make_hlds__add_class__TypeClassStatus1_24));
#line 182 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_142, 1) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_15));
#line 182 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_142, 2) = ((MR_Box) (hlds__make_hlds__add_class__HLDSFunDeps_26));
#line 182 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_142, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_142, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_14));
#line 182 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_142, 5) = ((MR_Box) (hlds__make_hlds__add_class__Kinds_141));
#line 182 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_142, 6) = ((MR_Box) (hlds__make_hlds__add_class__Interface_17));
#line 182 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_142, 7) = ((MR_Box) (hlds__make_hlds__add_class__ClassMethods_139));
#line 182 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_142, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_18));
#line 182 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_142, 9) = ((MR_Box) (hlds__make_hlds__add_class__Context_19));
#line 182 "add_class.m"
        }
#line 5960 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_113_150 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 185 "add_class.m"
        {
#line 185 "add_class.m"
          mercury__map__set_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_113_150, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, ((MR_Box) (hlds__make_hlds__add_class__ClassId_23)), ((MR_Box) (hlds__make_hlds__add_class__ClassDefn_142)), hlds__make_hlds__add_class__Classes0_21, &hlds__make_hlds__add_class__Classes_143);
        }
#line 186 "add_class.m"
        {
#line 186 "add_class.m"
          hlds__hlds_module__module_info_set_class_table_3_p_0(hlds__make_hlds__add_class__Classes_143, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_145, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_92_146);
        }
#line 192 "add_class.m"
        {
#line 192 "add_class.m"
          hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_92_146, &hlds__make_hlds__add_class__Instances0_60);
        }
#line 193 "add_class.m"
        {
#line 193 "add_class.m"
          mercury__map__det_insert_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_113_150, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__add_class__ClassId_23)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__add_class__Instances0_60, &hlds__make_hlds__add_class__Instances_61);
        }
#line 194 "add_class.m"
        {
#line 194 "add_class.m"
          hlds__hlds_module__module_info_set_instance_table_3_p_0(hlds__make_hlds__add_class__Instances_61, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_92_146, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_63);
#line 194 "add_class.m"
          return;
        }
#line 5989 "hlds.make_hlds.add_class.c"
      }
#line 76 "add_class.m"
  }
#line 24 "add_class.m"
}

void mercury__hlds__make_hlds__add_class__init(void)
{
}

void mercury__hlds__make_hlds__add_class__init_type_tables(void)
{
}

void mercury__hlds__make_hlds__add_class__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_class. */
