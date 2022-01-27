/*
** Automatically generated from `add_class.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "libs.op_mode.mih"
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
#include "parse_tree.maybe_error.mih"
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




#line 157 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 160 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 163 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 166 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 169 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 172 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 175 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 178 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 181 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 184 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 187 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 190 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 724 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__724__1_2_p_0(
#line 724 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 724 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_26);

#line 381 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__381__1_2_p_0(
#line 381 "add_class.m"
  MR_Word hlds__make_hlds__add_class__WithInst_25,
#line 381 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_66);

#line 380 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__380__1_2_p_0(
#line 380 "add_class.m"
  MR_Word hlds__make_hlds__add_class__WithType_24,
#line 380 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_61);

#line 214 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__214__1_3_f_0(
#line 214 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 214 "add_class.m"
  MR_Word hlds__make_hlds__add_class__LambdaHeadVar__1_11,
#line 214 "add_class.m"
  MR_Word hlds__make_hlds__add_class__LambdaHeadVar__2_12);

#line 165 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__165__1_2_p_0(
#line 165 "add_class.m"
  MR_Word hlds__make_hlds__add_class__LambdaHeadVar__1_90,
#line 165 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__LambdaHeadVar__2_91);

#line 794 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
#line 794 "add_class.m"
  MR_Word hlds__make_hlds__add_class__MethodName_7,
#line 794 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__MethodArity_8,
#line 794 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_9,
#line 794 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_10,
#line 794 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 794 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16);

#line 781 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
#line 781 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_7,
#line 781 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__ClassArity_8,
#line 781 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_9,
#line 781 "add_class.m"
  MR_String hlds__make_hlds__add_class__Description_10,
#line 781 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 781 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16);

#line 764 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredInfo_4,
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13,
#line 764 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14);

#line 724 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
#line 724 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg);

#line 711 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_16,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceStatus_17,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceClause_18,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVarSet0_19,
#line 711 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__TVarSet_20,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47,
#line 711 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_49,
#line 711 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_50,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_51,
#line 711 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_52,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_53,
#line 711 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_54);

#line 636 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(
#line 636 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_3,
#line 636 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_4);

#line 594 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_instance_constraints_5_p_0(
#line 594 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_6,
#line 594 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_7,
#line 594 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_8,
#line 594 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25,
#line 594 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26);

#line 538 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_1,
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewTypes_2,
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewTVarSet_3,
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewContext_4,
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__5_5,
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
#line 538 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7);

#line 421 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_method_modes_7_p_0(
#line 421 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 421 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2,
#line 421 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3,
#line 421 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4,
#line 421 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5,
#line 421 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
#line 421 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7);

#line 381 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0_2(
#line 381 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg);

#line 380 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0_1(
#line 380 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg);

#line 364 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0(
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_11,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_12,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_13,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_14,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_15,
#line 364 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__MaybePredIdProcId_16,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47,
#line 364 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49,
#line 364 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50);

#line 347 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_methods_10_p_0(
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_1,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_2,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_3,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_4,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__5_5,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__6_6,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_7,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_8,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_9,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_10);

#line 288 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_11_p_0(
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_12,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_13,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_14,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_15,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_16,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51,
#line 288 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53,
#line 288 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55,
#line 288 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);

#line 283 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_2);

#line 277 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0_2(
#line 277 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 277 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 277 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 277 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 277 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 277 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 277 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 277 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7);

#line 265 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0_1(
#line 265 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 265 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);

#line 256 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0(
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_11,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_12,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_13,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_14,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Methods_15,
#line 256 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__PredProcIds_16,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_22,
#line 256 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_23,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_24,
#line 256 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_25);

#line 245 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
#line 245 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldFunDeps0_3,
#line 245 "add_class.m"
  MR_Word hlds__make_hlds__add_class__FunDeps0_4);

#line 229 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__constraints_are_identical_6_p_0(
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVars0_7,
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVarSet_8,
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldConstraints0_9,
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_10,
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__VarSet_11,
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Constraints_12);

#line 218 "add_class.m"
static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
#line 218 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeInfo_for_T_17,
#line 218 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 218 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__N_2,
#line 218 "add_class.m"
  MR_Box hlds__make_hlds__add_class__X_3);

#line 214 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
#line 214 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 214 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 214 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2);

#line 205 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
#line 205 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 205 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_2);

#line 705 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1(
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 705 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 705 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 705 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_8,
#line 705 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_9,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_10,
#line 705 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_11);

#line 591 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_2(
#line 591 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 591 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 591 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 591 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3);

#line 589 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_1(
#line 589 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 589 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);

#line 165 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_3(
#line 165 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 165 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 165 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2);

#line 165 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_2(
#line 165 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 165 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 165 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2);

#line 94 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1(
#line 94 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 94 "add_class.m"
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
    ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_3)),
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



#line 1091 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1099 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1107 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1116 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0
  }
};

#line 1124 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1132 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1140 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1148 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1156 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0
  }
};

#line 1164 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0
  }
};

#line 1172 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1180 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 724 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__724__1_2_p_0(
#line 724 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 724 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_26)
#line 724 "add_class.m"
{
#line 724 "add_class.m"
  {
#line 724 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__PredOrFunc_15 == hlds__make_hlds__add_class__ClausePredOrFunc_26);

#line 724 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 724 "add_class.m"
  }
#line 724 "add_class.m"
}

#line 381 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__381__1_2_p_0(
#line 381 "add_class.m"
  MR_Word hlds__make_hlds__add_class__WithInst_25,
#line 381 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_66)
#line 381 "add_class.m"
{
#line 381 "add_class.m"
  {
#line 381 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 381 "add_class.m"
    {
#line 381 "add_class.m"
      hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[9], ((MR_Box) (hlds__make_hlds__add_class__WithInst_25)), ((MR_Box) (hlds__make_hlds__add_class__HeadVar__2_66)));
    }
#line 381 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 381 "add_class.m"
  }
#line 381 "add_class.m"
}

#line 380 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__380__1_2_p_0(
#line 380 "add_class.m"
  MR_Word hlds__make_hlds__add_class__WithType_24,
#line 380 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_61)
#line 380 "add_class.m"
{
#line 380 "add_class.m"
  {
#line 380 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 380 "add_class.m"
    {
#line 380 "add_class.m"
      hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[8], ((MR_Box) (hlds__make_hlds__add_class__WithType_24)), ((MR_Box) (hlds__make_hlds__add_class__HeadVar__2_61)));
    }
#line 380 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 380 "add_class.m"
  }
#line 380 "add_class.m"
}

#line 214 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__214__1_3_f_0(
#line 214 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 214 "add_class.m"
  MR_Word hlds__make_hlds__add_class__LambdaHeadVar__1_11,
#line 214 "add_class.m"
  MR_Word hlds__make_hlds__add_class__LambdaHeadVar__2_12)
#line 214 "add_class.m"
{
#line 214 "add_class.m"
  {
#line 214 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 214 "add_class.m"
    MR_Word hlds__make_hlds__add_class__LambdaHeadVar__3_13;
#line 214 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__N_9;

#line 215 "add_class.m"
    {
#line 215 "add_class.m"
      hlds__make_hlds__add_class__N_9 = hlds__make_hlds__add_class__get_list_index_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], hlds__make_hlds__add_class__TVars_4, (MR_Integer) 1, ((MR_Box) (hlds__make_hlds__add_class__LambdaHeadVar__1_11)));
    }
#line 214 "add_class.m"
    {
#line 214 "add_class.m"
      hlds__make_hlds__add_class__LambdaHeadVar__3_13 = mercury__set__insert_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_class__LambdaHeadVar__2_12, ((MR_Box) (hlds__make_hlds__add_class__N_9)));
    }
#line 214 "add_class.m"
    return hlds__make_hlds__add_class__LambdaHeadVar__3_13;
#line 214 "add_class.m"
  }
#line 214 "add_class.m"
}

#line 165 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__165__1_2_p_0(
#line 165 "add_class.m"
  MR_Word hlds__make_hlds__add_class__LambdaHeadVar__1_90,
#line 165 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__LambdaHeadVar__2_91)
#line 165 "add_class.m"
{
#line 165 "add_class.m"
  {
#line 165 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__LambdaHeadVar__1_90)) == (MR_mktag((MR_Integer) 1)));
#line 165 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pred_53;
#line 165 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__Proc_54;
#line 165 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_92_92;

#line 167 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 167 "add_class.m"
      {
#line 167 "add_class.m"
        hlds__make_hlds__add_class__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__LambdaHeadVar__1_90, (MR_Integer) 0)));
#line 167 "add_class.m"
        hlds__make_hlds__add_class__Pred_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_92_92, (MR_Integer) 0)));
#line 167 "add_class.m"
        hlds__make_hlds__add_class__Proc_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_92_92, (MR_Integer) 1)));
#line 168 "add_class.m"
        {
#line 168 "add_class.m"
          MR_Word base;
#line 168 "add_class.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 168 "add_class.m"
          *hlds__make_hlds__add_class__LambdaHeadVar__2_91 = base;
#line 168 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pred_53));
#line 168 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__Proc_54));
#line 168 "add_class.m"
        }
#line 168 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 167 "add_class.m"
      }
#line 165 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 165 "add_class.m"
  }
#line 165 "add_class.m"
}

#line 794 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
#line 794 "add_class.m"
  MR_Word hlds__make_hlds__add_class__MethodName_7,
#line 794 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__MethodArity_8,
#line 794 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_9,
#line 794 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_10,
#line 794 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 794 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16)
#line 794 "add_class.m"
{
#line 799 "add_class.m"
  {
#line 799 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pieces_12;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg_13;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Spec_14;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_19_19;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_22_22;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_25_25;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_26_26;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_33_33;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_34_34;
#line 799 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_38_38;

#line 801 "add_class.m"
    {
#line 801 "add_class.m"
      hlds__make_hlds__add_class__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 801 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__add_class__MethodName_7));
#line 801 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__MethodArity_8));
#line 801 "add_class.m"
    }
#line 801 "add_class.m"
    {
#line 801 "add_class.m"
      hlds__make_hlds__add_class__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 801 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_21_21));
#line 801 "add_class.m"
    }
#line 802 "add_class.m"
    {
#line 802 "add_class.m"
      hlds__make_hlds__add_class__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 802 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_9));
#line 802 "add_class.m"
    }
#line 802 "add_class.m"
    {
#line 802 "add_class.m"
      hlds__make_hlds__add_class__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_26_26));
#line 802 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[31])));
#line 802 "add_class.m"
    }
#line 802 "add_class.m"
    {
#line 802 "add_class.m"
      hlds__make_hlds__add_class__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[46])));
#line 802 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_25_25));
#line 802 "add_class.m"
    }
#line 801 "add_class.m"
    {
#line 801 "add_class.m"
      hlds__make_hlds__add_class__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_20_20));
#line 801 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_22_22));
#line 801 "add_class.m"
    }
#line 800 "add_class.m"
    {
#line 800 "add_class.m"
      hlds__make_hlds__add_class__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[45])));
#line 800 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_19_19));
#line 800 "add_class.m"
    }
#line 804 "add_class.m"
    {
#line 804 "add_class.m"
      hlds__make_hlds__add_class__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 804 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_12));
#line 804 "add_class.m"
    }
#line 804 "add_class.m"
    {
#line 804 "add_class.m"
      hlds__make_hlds__add_class__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_34_34));
#line 804 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 804 "add_class.m"
    }
#line 804 "add_class.m"
    {
#line 804 "add_class.m"
      hlds__make_hlds__add_class__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 804 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_10));
#line 804 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_33_33));
#line 804 "add_class.m"
    }
#line 805 "add_class.m"
    {
#line 805 "add_class.m"
      hlds__make_hlds__add_class__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_13));
#line 805 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "add_class.m"
    }
#line 805 "add_class.m"
    {
#line 805 "add_class.m"
      hlds__make_hlds__add_class__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 805 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 805 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_38_38));
#line 805 "add_class.m"
    }
#line 806 "add_class.m"
    {
#line 806 "add_class.m"
      MR_Word base;
#line 806 "add_class.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16 = base;
#line 806 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_14));
#line 806 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15));
#line 806 "add_class.m"
    }
#line 799 "add_class.m"
  }
#line 794 "add_class.m"
}

#line 781 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
#line 781 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_7,
#line 781 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__ClassArity_8,
#line 781 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_9,
#line 781 "add_class.m"
  MR_String hlds__make_hlds__add_class__Description_10,
#line 781 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 781 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16)
#line 781 "add_class.m"
{
#line 785 "add_class.m"
  {
#line 785 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pieces_12;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg_13;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Spec_14;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_19_19;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_24_24;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_25_25;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_26_26;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_39_39;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_40_40;
#line 785 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_44_44;

#line 786 "add_class.m"
    {
#line 786 "add_class.m"
      hlds__make_hlds__add_class__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 786 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__Description_10));
#line 786 "add_class.m"
    }
#line 787 "add_class.m"
    {
#line 787 "add_class.m"
      hlds__make_hlds__add_class__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 787 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_7));
#line 787 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_8));
#line 787 "add_class.m"
    }
#line 787 "add_class.m"
    {
#line 787 "add_class.m"
      hlds__make_hlds__add_class__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 787 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_26_26));
#line 787 "add_class.m"
    }
#line 787 "add_class.m"
    {
#line 787 "add_class.m"
      hlds__make_hlds__add_class__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_25_25));
#line 787 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[29])));
#line 787 "add_class.m"
    }
#line 786 "add_class.m"
    {
#line 786 "add_class.m"
      hlds__make_hlds__add_class__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[44])));
#line 786 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_24_24));
#line 786 "add_class.m"
    }
#line 786 "add_class.m"
    {
#line 786 "add_class.m"
      hlds__make_hlds__add_class__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_20_20));
#line 786 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_21_21));
#line 786 "add_class.m"
    }
#line 786 "add_class.m"
    {
#line 786 "add_class.m"
      hlds__make_hlds__add_class__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[43])));
#line 786 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_19_19));
#line 786 "add_class.m"
    }
#line 790 "add_class.m"
    {
#line 790 "add_class.m"
      hlds__make_hlds__add_class__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 790 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_12));
#line 790 "add_class.m"
    }
#line 790 "add_class.m"
    {
#line 790 "add_class.m"
      hlds__make_hlds__add_class__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_40_40));
#line 790 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 790 "add_class.m"
    }
#line 790 "add_class.m"
    {
#line 790 "add_class.m"
      hlds__make_hlds__add_class__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 790 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_9));
#line 790 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_39_39));
#line 790 "add_class.m"
    }
#line 791 "add_class.m"
    {
#line 791 "add_class.m"
      hlds__make_hlds__add_class__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_13));
#line 791 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "add_class.m"
    }
#line 791 "add_class.m"
    {
#line 791 "add_class.m"
      hlds__make_hlds__add_class__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 791 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 791 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 791 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_44_44));
#line 791 "add_class.m"
    }
#line 792 "add_class.m"
    {
#line 792 "add_class.m"
      MR_Word base;
#line 792 "add_class.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16 = base;
#line 792 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_14));
#line 792 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15));
#line 792 "add_class.m"
    }
#line 785 "add_class.m"
  }
#line 781 "add_class.m"
}

#line 764 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredInfo_4,
#line 764 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13,
#line 764 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14)
#line 764 "add_class.m"
{
#line 767 "add_class.m"
  {
#line 767 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_6;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ModuleName_7;
#line 767 "add_class.m"
    MR_String hlds__make_hlds__add_class__PredName_8;
#line 767 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__Arity_9;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pieces_10;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg_11;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Spec_12;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_17_17;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_22_22;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_23_23;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_30_30;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_31_31;
#line 767 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_35_35;

#line 768 "add_class.m"
    {
#line 768 "add_class.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_class__PredInfo_4, &hlds__make_hlds__add_class__Context_6);
    }
#line 769 "add_class.m"
    {
#line 769 "add_class.m"
      hlds__make_hlds__add_class__ModuleName_7 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
#line 770 "add_class.m"
    {
#line 770 "add_class.m"
      hlds__make_hlds__add_class__PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
#line 771 "add_class.m"
    {
#line 771 "add_class.m"
      hlds__make_hlds__add_class__Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
#line 775 "add_class.m"
    {
#line 775 "add_class.m"
      hlds__make_hlds__add_class__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_class__ModuleName_7));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredName_8));
#line 775 "add_class.m"
    }
#line 775 "add_class.m"
    {
#line 775 "add_class.m"
      hlds__make_hlds__add_class__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_23_23));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_class__Arity_9));
#line 775 "add_class.m"
    }
#line 775 "add_class.m"
    {
#line 775 "add_class.m"
      hlds__make_hlds__add_class__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_22_22));
#line 775 "add_class.m"
    }
#line 775 "add_class.m"
    {
#line 775 "add_class.m"
      hlds__make_hlds__add_class__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_21_21));
#line 775 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[19])));
#line 775 "add_class.m"
    }
#line 774 "add_class.m"
    {
#line 774 "add_class.m"
      hlds__make_hlds__add_class__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[42])));
#line 774 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_20_20));
#line 774 "add_class.m"
    }
#line 773 "add_class.m"
    {
#line 773 "add_class.m"
      hlds__make_hlds__add_class__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[41])));
#line 773 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_17_17));
#line 773 "add_class.m"
    }
#line 777 "add_class.m"
    {
#line 777 "add_class.m"
      hlds__make_hlds__add_class__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 777 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_10));
#line 777 "add_class.m"
    }
#line 777 "add_class.m"
    {
#line 777 "add_class.m"
      hlds__make_hlds__add_class__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_31_31));
#line 777 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 777 "add_class.m"
    }
#line 777 "add_class.m"
    {
#line 777 "add_class.m"
      hlds__make_hlds__add_class__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 777 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_6));
#line 777 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_30_30));
#line 777 "add_class.m"
    }
#line 778 "add_class.m"
    {
#line 778 "add_class.m"
      hlds__make_hlds__add_class__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_11));
#line 778 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "add_class.m"
    }
#line 778 "add_class.m"
    {
#line 778 "add_class.m"
      hlds__make_hlds__add_class__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 778 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 778 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_35_35));
#line 778 "add_class.m"
    }
#line 779 "add_class.m"
    {
#line 779 "add_class.m"
      MR_Word base;
#line 779 "add_class.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14 = base;
#line 779 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_12));
#line 779 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13));
#line 779 "add_class.m"
    }
#line 767 "add_class.m"
  }
#line 764 "add_class.m"
}

#line 724 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
#line 724 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg)
#line 724 "add_class.m"
{
#line 724 "add_class.m"
  {
#line 724 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 724 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 724 "add_class.m"
    {
#line 724 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__724__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))));
    }
#line 724 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 724 "add_class.m"
  }
#line 724 "add_class.m"
}

#line 711 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_16,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceStatus_17,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceClause_18,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVarSet0_19,
#line 711 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__TVarSet_20,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47,
#line 711 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_49,
#line 711 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_50,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_51,
#line 711 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_52,
#line 711 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_53,
#line 711 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_54)
#line 711 "add_class.m"
{
#line 719 "add_class.m"
  {
#line 719 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 719 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 0)));
#line 719 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 1)));
#line 719 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HeadTerms0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 2)));
#line 719 "add_class.m"
    MR_Word hlds__make_hlds__add_class__CVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 4)));
#line 719 "add_class.m"
    MR_Word hlds__make_hlds__add_class__MaybeBodyGoal_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 5)));
#line 719 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_55_55;
#line 720 "add_class.m"
    MR_Word hlds__make_hlds__add_class___Origin_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 3)));
#line 720 "add_class.m"
    MR_Word hlds__make_hlds__add_class___ClauseContext_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 6)));
#line 720 "add_class.m"
    MR_Integer hlds__make_hlds__add_class___SeqNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 7)));
#line 726 "add_class.m"
    MR_Word hlds__make_hlds__add_class__StateVar_33;

#line 724 "add_class.m"
    {
#line 724 "add_class.m"
      hlds__make_hlds__add_class__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 724 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_55_55, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[4]));
#line 724 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_55_55, 1) = ((MR_Box) (hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1));
#line 724 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 724 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_55_55, 3) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_15));
#line 724 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_55_55, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClausePredOrFunc_26));
#line 724 "add_class.m"
    }
#line 724 "add_class.m"
    {
#line 724 "add_class.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_class__V_55_55, (MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.produce_instance_method_clause\'/14", (MR_String) "PredOrFunc mismatch");
    }
#line 726 "add_class.m"
    {
#line 726 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__add_class__PredOrFunc_15, hlds__make_hlds__add_class__HeadTerms0_27, &hlds__make_hlds__add_class__StateVar_33);
    }
#line 726 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 727 "add_class.m"
      {
#line 727 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_59_59;
#line 727 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_61_61;

#line 727 "add_class.m"
        *hlds__make_hlds__add_class__TVarSet_20 = hlds__make_hlds__add_class__TVarSet0_19;
#line 728 "add_class.m"
        {
#line 728 "add_class.m"
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__add_class__Context_16, hlds__make_hlds__add_class__CVarSet_29, hlds__make_hlds__add_class__StateVar_33, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_59_59);
        }
#line 729 "add_class.m"
        {
#line 729 "add_class.m"
          hlds__make_hlds__add_class__V_61_61 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, hlds__make_hlds__add_class__MaybeBodyGoal_30);
        }
#line 729 "add_class.m"
        {
#line 729 "add_class.m"
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_class__V_61_61, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_59_59);
        }
#line 727 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_52 = hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_51;
#line 727 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_50 = hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_49;
#line 727 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47;
#line 727 "add_class.m"
      }
#line 726 "add_class.m"
    else
#line 735 "add_class.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__MaybeBodyGoal_30)) == (MR_mktag((MR_Integer) 0))))
#line 732 "add_class.m"
      {
#line 732 "add_class.m"
        MR_Word hlds__make_hlds__add_class__BodyGoalSpecs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MaybeBodyGoal_30, (MR_Integer) 0)));

#line 733 "add_class.m"
        *hlds__make_hlds__add_class__TVarSet_20 = hlds__make_hlds__add_class__TVarSet0_19;
#line 734 "add_class.m"
        {
#line 734 "add_class.m"
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_54 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_class__BodyGoalSpecs_34, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_53);
        }
#line 732 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47;
#line 732 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_50 = hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_49;
#line 732 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_52 = hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_51;
#line 732 "add_class.m"
      }
#line 735 "add_class.m"
    else
#line 736 "add_class.m"
      {
#line 736 "add_class.m"
        MR_Word hlds__make_hlds__add_class__BodyGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybeBodyGoal_30, (MR_Integer) 0)));
#line 736 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadTerms_36;
#line 736 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__PredArity_37;
#line 736 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__Arity_38;
#line 736 "add_class.m"
        MR_Word hlds__make_hlds__add_class__OldImportStatus_41;
#line 736 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredStatus_42;
#line 736 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Goal_43;
#line 736 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet_44;
#line 736 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Warnings_45;
#line 736 "add_class.m"
        MR_Word hlds__make_hlds__add_class__SimpleCallId_46;
#line 736 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_67_67;
#line 736 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_68_68;

#line 737 "add_class.m"
        {
#line 737 "add_class.m"
          hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__add_class__HeadTerms0_27, &hlds__make_hlds__add_class__HeadTerms_36);
        }
#line 738 "add_class.m"
        {
#line 738 "add_class.m"
          hlds__make_hlds__add_class__PredArity_37 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[10], hlds__make_hlds__add_class__HeadTerms_36);
        }
#line 739 "add_class.m"
        {
#line 739 "add_class.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_class__PredOrFunc_15, &hlds__make_hlds__add_class__Arity_38, hlds__make_hlds__add_class__PredArity_37);
        }
#line 747 "add_class.m"
        hlds__make_hlds__add_class__OldImportStatus_41 = (MR_Word) hlds__make_hlds__add_class__InstanceStatus_17;
#line 748 "add_class.m"
        hlds__make_hlds__add_class__PredStatus_42 = (MR_Word) hlds__make_hlds__add_class__OldImportStatus_41;
#line 749 "add_class.m"
        {
#line 749 "add_class.m"
          hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__CVarSet_29, hlds__make_hlds__add_class__TVarSet0_19, hlds__make_hlds__add_class__HeadTerms_36, hlds__make_hlds__add_class__BodyGoal_35, hlds__make_hlds__add_class__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__PredStatus_42, hlds__make_hlds__add_class__PredOrFunc_15, hlds__make_hlds__add_class__Arity_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), &hlds__make_hlds__add_class__Goal_43, &hlds__make_hlds__add_class__VarSet_44, hlds__make_hlds__add_class__TVarSet_20, &hlds__make_hlds__add_class__Warnings_45, hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_51, hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_52, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_49, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_50, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_53, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_67_67);
        }
#line 754 "add_class.m"
        {
#line 754 "add_class.m"
          hlds__make_hlds__add_class__SimpleCallId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 754 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_46, 0) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_15));
#line 754 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_46, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredName_25));
#line 754 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_46, 2) = ((MR_Box) (hlds__make_hlds__add_class__Arity_38));
#line 754 "add_class.m"
        }
#line 757 "add_class.m"
        {
#line 757 "add_class.m"
          hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(*hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__add_class__SimpleCallId_46, hlds__make_hlds__add_class__VarSet_44, hlds__make_hlds__add_class__Goal_43, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_67_67, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_68_68);
        }
#line 760 "add_class.m"
        {
#line 760 "add_class.m"
          hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(hlds__make_hlds__add_class__SimpleCallId_46, hlds__make_hlds__add_class__VarSet_44, hlds__make_hlds__add_class__Warnings_45, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_68_68, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_54);
        }
#line 736 "add_class.m"
      }
#line 719 "add_class.m"
  }
#line 711 "add_class.m"
}

#line 636 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(
#line 636 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_3,
#line 636 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_4)
#line 636 "add_class.m"
{
#line 639 "add_class.m"
  {
#line 639 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_53_53;
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_55_55;
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 1)));
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 1)));
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarSetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 8)));
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarSetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 8)));
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__RenameApart_10;
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesB1_11;
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsA_12;
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsB_13;
#line 639 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__NumTVars_14;
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Renaming_15;
#line 639 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesB_16;
#line 639 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__V_54_54;
#line 640 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 0)));
#line 640 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 2)));
#line 640 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 3)));
#line 640 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 4)));
#line 640 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 5)));
#line 640 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 6)));
#line 640 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 7)));
#line 640 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 9)));
#line 641 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 0)));
#line 641 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 2)));
#line 641 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 3)));
#line 641 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 4)));
#line 641 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 5)));
#line 641 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 6)));
#line 641 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 7)));
#line 641 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 9)));
#line 647 "add_class.m"
    MR_Word hlds__make_hlds__add_class___NewVarSet_9;

#line 647 "add_class.m"
    {
#line 647 "add_class.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__VarSetA_7, hlds__make_hlds__add_class__VarSetB_8, &hlds__make_hlds__add_class___NewVarSet_9, &hlds__make_hlds__add_class__RenameApart_10);
    }
#line 648 "add_class.m"
    {
#line 648 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__RenameApart_10, hlds__make_hlds__add_class__TypesB0_6, &hlds__make_hlds__add_class__TypesB1_11);
    }
#line 650 "add_class.m"
    {
#line 650 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__TypesA_5, &hlds__make_hlds__add_class__TVarsA_12);
    }
#line 651 "add_class.m"
    {
#line 651 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__TypesB1_11, &hlds__make_hlds__add_class__TVarsB_13);
    }
#line 2264 "hlds.make_hlds.add_class.c"
    hlds__make_hlds__add_class__TypeInfo_53_53 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
#line 654 "add_class.m"
    {
#line 654 "add_class.m"
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsA_12, &hlds__make_hlds__add_class__NumTVars_14);
    }
#line 655 "add_class.m"
    {
#line 655 "add_class.m"
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsB_13, &hlds__make_hlds__add_class__V_54_54);
    }
#line 655 "add_class.m"
    hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__NumTVars_14 == hlds__make_hlds__add_class__V_54_54);
#line 639 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 639 "add_class.m"
      {
#line 657 "add_class.m"
        {
#line 657 "add_class.m"
          mercury__map__from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsB_13, hlds__make_hlds__add_class__TVarsA_12, &hlds__make_hlds__add_class__Renaming_15);
        }
#line 658 "add_class.m"
        {
#line 658 "add_class.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__Renaming_15, hlds__make_hlds__add_class__TypesB1_11, &hlds__make_hlds__add_class__TypesB_16);
        }
#line 2292 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeInfo_55_55 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[23];
#line 660 "add_class.m"
        {
#line 660 "add_class.m"
          hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_class__TypeInfo_55_55, ((MR_Box) (hlds__make_hlds__add_class__TypesA_5)), ((MR_Box) (hlds__make_hlds__add_class__TypesB_16)));
        }
#line 639 "add_class.m"
      }
#line 639 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 639 "add_class.m"
  }
#line 636 "add_class.m"
}

#line 594 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_instance_constraints_5_p_0(
#line 594 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_6,
#line 594 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_7,
#line 594 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_8,
#line 594 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25,
#line 594 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26)
#line 594 "add_class.m"
{
#line 598 "add_class.m"
  {
#line 598 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 598 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsA_10;
#line 598 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarSetA_11;
#line 598 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ConstraintsA_12;
#line 598 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsB_13;
#line 598 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarSetB_14;
#line 598 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ConstraintsB_15;
#line 598 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
#line 598 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_28_28;
#line 599 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
#line 599 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
#line 599 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
#line 599 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
#line 599 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
#line 599 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
#line 599 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
#line 599 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
#line 599 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
#line 600 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_64_64;
#line 600 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_65_65;
#line 600 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_66_66;
#line 600 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_67_67;
#line 600 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_68_68;
#line 600 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_70_70;
#line 600 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_71_71;
#line 600 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_72_72;
#line 603 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_82_82;
#line 603 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_83_83;
#line 603 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_84_84;
#line 603 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_85_85;
#line 603 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_86_86;
#line 603 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_87_87;
#line 603 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_88_88;
#line 603 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_89_89;
#line 603 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_90_90;
#line 604 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_91_91;
#line 604 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_92_92;
#line 604 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_93_93;
#line 604 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_94_94;
#line 604 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_95_95;
#line 604 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_97_97;
#line 604 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_98_98;
#line 604 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_99_99;

#line 599 "add_class.m"
    {
#line 599 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__V_27_27, &hlds__make_hlds__add_class__TVarsA_10);
    }
#line 600 "add_class.m"
    hlds__make_hlds__add_class__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
#line 600 "add_class.m"
    hlds__make_hlds__add_class__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
#line 600 "add_class.m"
    hlds__make_hlds__add_class__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
#line 600 "add_class.m"
    hlds__make_hlds__add_class__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
#line 600 "add_class.m"
    hlds__make_hlds__add_class__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
#line 600 "add_class.m"
    hlds__make_hlds__add_class__ConstraintsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
#line 600 "add_class.m"
    hlds__make_hlds__add_class__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
#line 600 "add_class.m"
    hlds__make_hlds__add_class__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
#line 600 "add_class.m"
    hlds__make_hlds__add_class__TVarSetA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
#line 600 "add_class.m"
    hlds__make_hlds__add_class__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
#line 603 "add_class.m"
    hlds__make_hlds__add_class__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
#line 603 "add_class.m"
    hlds__make_hlds__add_class__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
#line 603 "add_class.m"
    hlds__make_hlds__add_class__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
#line 603 "add_class.m"
    hlds__make_hlds__add_class__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
#line 603 "add_class.m"
    hlds__make_hlds__add_class__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
#line 603 "add_class.m"
    hlds__make_hlds__add_class__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
#line 603 "add_class.m"
    hlds__make_hlds__add_class__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
#line 603 "add_class.m"
    hlds__make_hlds__add_class__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
#line 603 "add_class.m"
    hlds__make_hlds__add_class__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
#line 603 "add_class.m"
    hlds__make_hlds__add_class__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
#line 603 "add_class.m"
    {
#line 603 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__V_28_28, &hlds__make_hlds__add_class__TVarsB_13);
    }
#line 604 "add_class.m"
    hlds__make_hlds__add_class__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
#line 604 "add_class.m"
    hlds__make_hlds__add_class__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
#line 604 "add_class.m"
    hlds__make_hlds__add_class__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
#line 604 "add_class.m"
    hlds__make_hlds__add_class__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
#line 604 "add_class.m"
    hlds__make_hlds__add_class__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
#line 604 "add_class.m"
    hlds__make_hlds__add_class__ConstraintsB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
#line 604 "add_class.m"
    hlds__make_hlds__add_class__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
#line 604 "add_class.m"
    hlds__make_hlds__add_class__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
#line 604 "add_class.m"
    hlds__make_hlds__add_class__TVarSetB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
#line 604 "add_class.m"
    hlds__make_hlds__add_class__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
#line 608 "add_class.m"
    {
#line 608 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(hlds__make_hlds__add_class__TVarsA_10, hlds__make_hlds__add_class__TVarSetA_11, hlds__make_hlds__add_class__ConstraintsA_12, hlds__make_hlds__add_class__TVarsB_13, hlds__make_hlds__add_class__TVarSetB_14, hlds__make_hlds__add_class__ConstraintsB_15);
    }
#line 607 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 607 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25;
#line 607 "add_class.m"
    else
#line 613 "add_class.m"
      {
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_7, (MR_Integer) 0)));
#line 613 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__ClassArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_7, (MR_Integer) 1)));
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ContextA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PiecesA_19;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MsgA_20;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ContextB_21;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MsgB_23;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Spec_24;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_31_31;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_32_32;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_33_33;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_40_40;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_41_41;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_51_51;
#line 613 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_52_52;
#line 614 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
#line 614 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
#line 614 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
#line 614 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
#line 614 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
#line 614 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
#line 614 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
#line 614 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
#line 614 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
#line 621 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_118_118;
#line 621 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_119_119;
#line 621 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_120_120;
#line 621 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_121_121;
#line 621 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_122_122;
#line 621 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_123_123;
#line 621 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_124_124;
#line 621 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_125_125;
#line 621 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_126_126;

#line 617 "add_class.m"
        {
#line 617 "add_class.m"
          hlds__make_hlds__add_class__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 617 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_16));
#line 617 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_17));
#line 617 "add_class.m"
        }
#line 617 "add_class.m"
        {
#line 617 "add_class.m"
          hlds__make_hlds__add_class__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "add_class.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 617 "add_class.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_32_32, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_33_33));
#line 617 "add_class.m"
        }
#line 617 "add_class.m"
        {
#line 617 "add_class.m"
          hlds__make_hlds__add_class__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_32_32));
#line 617 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[22])));
#line 617 "add_class.m"
        }
#line 616 "add_class.m"
        {
#line 616 "add_class.m"
          hlds__make_hlds__add_class__PiecesA_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PiecesA_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[37])));
#line 616 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PiecesA_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_31_31));
#line 616 "add_class.m"
        }
#line 619 "add_class.m"
        {
#line 619 "add_class.m"
          hlds__make_hlds__add_class__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 619 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_class__PiecesA_19));
#line 619 "add_class.m"
        }
#line 619 "add_class.m"
        {
#line 619 "add_class.m"
          hlds__make_hlds__add_class__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_41_41));
#line 619 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "add_class.m"
        }
#line 619 "add_class.m"
        {
#line 619 "add_class.m"
          hlds__make_hlds__add_class__MsgA_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgA_20, 0) = ((MR_Box) (hlds__make_hlds__add_class__ContextA_18));
#line 619 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgA_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_40_40));
#line 619 "add_class.m"
        }
#line 621 "add_class.m"
        hlds__make_hlds__add_class__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
#line 621 "add_class.m"
        hlds__make_hlds__add_class__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
#line 621 "add_class.m"
        hlds__make_hlds__add_class__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
#line 621 "add_class.m"
        hlds__make_hlds__add_class__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
#line 621 "add_class.m"
        hlds__make_hlds__add_class__ContextB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
#line 621 "add_class.m"
        hlds__make_hlds__add_class__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
#line 621 "add_class.m"
        hlds__make_hlds__add_class__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
#line 621 "add_class.m"
        hlds__make_hlds__add_class__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
#line 621 "add_class.m"
        hlds__make_hlds__add_class__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
#line 621 "add_class.m"
        hlds__make_hlds__add_class__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
#line 623 "add_class.m"
        {
#line 623 "add_class.m"
          hlds__make_hlds__add_class__MsgB_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 623 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgB_23, 0) = ((MR_Box) (hlds__make_hlds__add_class__ContextB_21));
#line 623 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgB_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[40])));
#line 623 "add_class.m"
        }
#line 626 "add_class.m"
        {
#line 626 "add_class.m"
          hlds__make_hlds__add_class__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_class__MsgB_23));
#line 626 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 626 "add_class.m"
        }
#line 626 "add_class.m"
        {
#line 626 "add_class.m"
          hlds__make_hlds__add_class__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_class__MsgA_20));
#line 626 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_52_52));
#line 626 "add_class.m"
        }
#line 625 "add_class.m"
        {
#line 625 "add_class.m"
          hlds__make_hlds__add_class__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 625 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 625 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_51_51));
#line 625 "add_class.m"
        }
#line 627 "add_class.m"
        {
#line 627 "add_class.m"
          MR_Word base;
#line 627 "add_class.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "add_class.m"
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26 = base;
#line 627 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_24));
#line 627 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25));
#line 627 "add_class.m"
        }
#line 613 "add_class.m"
      }
#line 598 "add_class.m"
  }
#line 594 "add_class.m"
}

#line 538 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_1,
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewTypes_2,
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewTVarSet_3,
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewContext_4,
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__5_5,
#line 538 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
#line 538 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7)
#line 538 "add_class.m"
{
#line 543 "add_class.m"
  while (MR_TRUE)
#line 543 "add_class.m"
    {
#line 543 "add_class.m"
      /* tailcall optimized into a loop */
#line 543 "add_class.m"
      {
#line 543 "add_class.m"
        MR_bool hlds__make_hlds__add_class__succeeded;

#line 543 "add_class.m"
        if ((hlds__make_hlds__add_class__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 543 "add_class.m"
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 543 "add_class.m"
        else
#line 546 "add_class.m"
          {
#line 546 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherInstanceDefn_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__5_5, (MR_Integer) 0)));
#line 546 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherInstanceDefns_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__5_5, (MR_Integer) 1)));
#line 546 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 1)));
#line 546 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherContext_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 4)));
#line 546 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherInstanceBody_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 6)));
#line 546 "add_class.m"
            MR_Word hlds__make_hlds__add_class__OtherTVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 8)));
#line 546 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77;
#line 547 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 0)));
#line 547 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 2)));
#line 547 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 3)));
#line 547 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 5)));
#line 547 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 7)));
#line 547 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 9)));
#line 550 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Renaming_34;
#line 550 "add_class.m"
            MR_Word hlds__make_hlds__add_class__NewOtherTypes_35;
#line 550 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_32_32;
#line 551 "add_class.m"
            MR_Word hlds__make_hlds__add_class___MergedTVarSet_33;
#line 555 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_36_36;

#line 550 "add_class.m"
            hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__OtherInstanceBody_28)) == (MR_mktag((MR_Integer) 1)));
#line 550 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 550 "add_class.m"
              {
#line 550 "add_class.m"
                hlds__make_hlds__add_class__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherInstanceBody_28, (MR_Integer) 0)));
#line 551 "add_class.m"
                {
#line 551 "add_class.m"
                  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__NewTVarSet_3, hlds__make_hlds__add_class__OtherTVarSet_30, &hlds__make_hlds__add_class___MergedTVarSet_33, &hlds__make_hlds__add_class__Renaming_34);
                }
#line 553 "add_class.m"
                {
#line 553 "add_class.m"
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__Renaming_34, hlds__make_hlds__add_class__OtherTypes_23, &hlds__make_hlds__add_class__NewOtherTypes_35);
                }
#line 555 "add_class.m"
                {
#line 555 "add_class.m"
                  hlds__make_hlds__add_class__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(hlds__make_hlds__add_class__NewTypes_2, hlds__make_hlds__add_class__NewOtherTypes_35, &hlds__make_hlds__add_class__V_36_36);
                }
#line 550 "add_class.m"
              }
#line 549 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 557 "add_class.m"
              {
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__ClassName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_1, (MR_Integer) 0)));
#line 557 "add_class.m"
                MR_Integer hlds__make_hlds__add_class__ClassArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_1, (MR_Integer) 1)));
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__NewPieces_39;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__NewMsg_40;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__OtherMsg_42;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__Spec_43;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_48_48;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_51_51;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_52_52;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_53_53;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_60_60;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_61_61;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_66_66;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_74_74;
#line 557 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_75_75;

#line 561 "add_class.m"
                {
#line 561 "add_class.m"
                  hlds__make_hlds__add_class__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 561 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_37));
#line 561 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_53_53, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_38));
#line 561 "add_class.m"
                }
#line 561 "add_class.m"
                {
#line 561 "add_class.m"
                  hlds__make_hlds__add_class__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "add_class.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 561 "add_class.m"
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_53_53));
#line 561 "add_class.m"
                }
#line 561 "add_class.m"
                {
#line 561 "add_class.m"
                  hlds__make_hlds__add_class__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_52_52));
#line 561 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[19])));
#line 561 "add_class.m"
                }
#line 560 "add_class.m"
                {
#line 560 "add_class.m"
                  hlds__make_hlds__add_class__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_48_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[33])));
#line 560 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_48_48, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_51_51));
#line 560 "add_class.m"
                }
#line 559 "add_class.m"
                {
#line 559 "add_class.m"
                  hlds__make_hlds__add_class__NewPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewPieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[32])));
#line 559 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewPieces_39, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_48_48));
#line 559 "add_class.m"
                }
#line 563 "add_class.m"
                {
#line 563 "add_class.m"
                  hlds__make_hlds__add_class__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 563 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_61_61, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewPieces_39));
#line 563 "add_class.m"
                }
#line 563 "add_class.m"
                {
#line 563 "add_class.m"
                  hlds__make_hlds__add_class__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_61_61));
#line 563 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "add_class.m"
                }
#line 563 "add_class.m"
                {
#line 563 "add_class.m"
                  hlds__make_hlds__add_class__NewMsg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 563 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewMsg_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewContext_4));
#line 563 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewMsg_40, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_60_60));
#line 563 "add_class.m"
                }
#line 565 "add_class.m"
                {
#line 565 "add_class.m"
                  hlds__make_hlds__add_class__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 565 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_class__OtherContext_26));
#line 565 "add_class.m"
                }
#line 565 "add_class.m"
                {
#line 565 "add_class.m"
                  hlds__make_hlds__add_class__OtherMsg_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 565 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_66_66));
#line 565 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 1) = ((MR_Box) ((MR_Integer) 0));
#line 565 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
#line 565 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[36])));
#line 565 "add_class.m"
                }
#line 568 "add_class.m"
                {
#line 568 "add_class.m"
                  hlds__make_hlds__add_class__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_75_75, 0) = ((MR_Box) (hlds__make_hlds__add_class__OtherMsg_42));
#line 568 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 568 "add_class.m"
                }
#line 568 "add_class.m"
                {
#line 568 "add_class.m"
                  hlds__make_hlds__add_class__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewMsg_40));
#line 568 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_75_75));
#line 568 "add_class.m"
                }
#line 567 "add_class.m"
                {
#line 567 "add_class.m"
                  hlds__make_hlds__add_class__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 567 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 567 "add_class.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_43, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_74_74));
#line 567 "add_class.m"
                }
#line 569 "add_class.m"
                {
#line 569 "add_class.m"
                  hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_43));
#line 569 "add_class.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6));
#line 569 "add_class.m"
                }
#line 557 "add_class.m"
              }
#line 549 "add_class.m"
            else
#line 549 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 576 "add_class.m"
            /* direct tailcall eliminated */
#line 576 "add_class.m"
            {
#line 576 "add_class.m"
              MR_Word hlds__make_hlds__add_class__HeadVar__5__tmp_copy_5 = hlds__make_hlds__add_class__OtherInstanceDefns_20;
#line 576 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77;

#line 576 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 576 "add_class.m"
              hlds__make_hlds__add_class__HeadVar__5_5 = hlds__make_hlds__add_class__HeadVar__5__tmp_copy_5;
#line 576 "add_class.m"
            }
#line 576 "add_class.m"
            continue;
#line 546 "add_class.m"
          }
#line 543 "add_class.m"
      }
#line 543 "add_class.m"
      break;
#line 543 "add_class.m"
    }
#line 538 "add_class.m"
}

#line 421 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_method_modes_7_p_0(
#line 421 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 421 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2,
#line 421 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3,
#line 421 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4,
#line 421 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5,
#line 421 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
#line 421 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7)
#line 421 "add_class.m"
{
#line 427 "add_class.m"
  while (MR_TRUE)
#line 427 "add_class.m"
    {
#line 427 "add_class.m"
      /* tailcall optimized into a loop */
#line 427 "add_class.m"
      {
#line 427 "add_class.m"
        MR_bool hlds__make_hlds__add_class__succeeded;

#line 427 "add_class.m"
        if ((hlds__make_hlds__add_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "add_class.m"
          {
#line 427 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 427 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 427 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 427 "add_class.m"
          }
#line 427 "add_class.m"
        else
#line 428 "add_class.m"
          {
#line 428 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Method_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 0)));
#line 428 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Methods_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 1)));
#line 428 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72;
#line 428 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74;
#line 428 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75;

#line 472 "add_class.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_17)) == (MR_mktag((MR_Integer) 0))))
#line 431 "add_class.m"
              {
#line 431 "add_class.m"
                MR_Word hlds__make_hlds__add_class__QualPredOrFuncName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 0)));
#line 431 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PorF_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 1)));
#line 431 "add_class.m"
                MR_Word hlds__make_hlds__add_class__TypesAndModes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 2)));
#line 431 "add_class.m"
                MR_Word hlds__make_hlds__add_class__ModuleName_34;
#line 431 "add_class.m"
                MR_String hlds__make_hlds__add_class__PredOrFuncName_35;
#line 431 "add_class.m"
                MR_Integer hlds__make_hlds__add_class__PredArity_37;
#line 431 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PredTable_38;
#line 431 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PredIds_39;
#line 430 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 3)));
#line 430 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 4)));
#line 430 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 5)));
#line 430 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 6)));
#line 430 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 7)));
#line 430 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 8)));
#line 430 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 9)));
#line 430 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 10)));
#line 430 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 11)));

#line 434 "add_class.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__add_class__QualPredOrFuncName_22)) == (MR_mktag((MR_Integer) 1))))
#line 433 "add_class.m"
                  {
#line 433 "add_class.m"
                    hlds__make_hlds__add_class__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__QualPredOrFuncName_22, (MR_Integer) 0)));
#line 433 "add_class.m"
                    hlds__make_hlds__add_class__PredOrFuncName_35 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__QualPredOrFuncName_22, (MR_Integer) 1)));
#line 433 "add_class.m"
                  }
#line 434 "add_class.m"
                else
#line 435 "add_class.m"
                  {
#line 438 "add_class.m"
                    {
#line 438 "add_class.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "unqualified func");
#line 438 "add_class.m"
                      return;
                    }
#line 435 "add_class.m"
                  }
#line 440 "add_class.m"
                {
#line 440 "add_class.m"
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__add_class__TypesAndModes_24, &hlds__make_hlds__add_class__PredArity_37);
                }
#line 441 "add_class.m"
                {
#line 441 "add_class.m"
                  hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, &hlds__make_hlds__add_class__PredTable_38);
                }
#line 442 "add_class.m"
                {
#line 442 "add_class.m"
                  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(hlds__make_hlds__add_class__PredTable_38, (MR_Integer) 0, hlds__make_hlds__add_class__PorF_23, hlds__make_hlds__add_class__ModuleName_34, hlds__make_hlds__add_class__PredOrFuncName_35, hlds__make_hlds__add_class__PredArity_37, &hlds__make_hlds__add_class__PredIds_39);
                }
#line 466 "add_class.m"
                if ((hlds__make_hlds__add_class__PredIds_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 469 "add_class.m"
                  {
#line 470 "add_class.m"
                    {
#line 470 "add_class.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "number of preds != 1");
#line 470 "add_class.m"
                      return;
                    }
#line 469 "add_class.m"
                  }
#line 466 "add_class.m"
                else
#line 466 "add_class.m"
                  {
#line 466 "add_class.m"
                    MR_Word hlds__make_hlds__add_class__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_39, (MR_Integer) 1)));
#line 466 "add_class.m"
                    MR_Word hlds__make_hlds__add_class__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_39, (MR_Integer) 0)));

#line 466 "add_class.m"
                    if ((hlds__make_hlds__add_class__V_88_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "add_class.m"
                      {
#line 445 "add_class.m"
                        MR_Word hlds__make_hlds__add_class__PredInfo0_41;

#line 446 "add_class.m"
                        {
#line 446 "add_class.m"
                          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, hlds__make_hlds__add_class__V_89_89, &hlds__make_hlds__add_class__PredInfo0_41);
                        }
#line 457 "add_class.m"
#line 457 "add_class.m"
                        switch (hlds__make_hlds__add_class__PorF_23) {
#line 457 "add_class.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 457 "add_class.m"
                          case (MR_Integer) 1:
#line 448 "add_class.m"
                            {
#line 448 "add_class.m"
                              MR_Word hlds__make_hlds__add_class__PredInfo_42;
#line 448 "add_class.m"
                              MR_Word hlds__make_hlds__add_class__MaybeProc_43;

#line 449 "add_class.m"
                              {
#line 449 "add_class.m"
                                check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(hlds__make_hlds__add_class__PredInfo0_41, &hlds__make_hlds__add_class__PredInfo_42, &hlds__make_hlds__add_class__MaybeProc_43);
                              }
#line 452 "add_class.m"
                              if ((hlds__make_hlds__add_class__MaybeProc_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 451 "add_class.m"
                                {
#line 451 "add_class.m"
                                  hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 451 "add_class.m"
                                  hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 451 "add_class.m"
                                }
#line 452 "add_class.m"
                              else
#line 453 "add_class.m"
                                {
#line 453 "add_class.m"
                                  MR_Integer hlds__make_hlds__add_class__ProcId_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybeProc_43, (MR_Integer) 0)));
#line 453 "add_class.m"
                                  MR_Word hlds__make_hlds__add_class__NewPredProc_45;
#line 453 "add_class.m"
                                  MR_Word hlds__make_hlds__add_class__V_73_73;

#line 454 "add_class.m"
                                  {
#line 454 "add_class.m"
                                    hlds__make_hlds__add_class__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 454 "add_class.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_89_89));
#line 454 "add_class.m"
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_73_73, 1) = ((MR_Box) (hlds__make_hlds__add_class__ProcId_44));
#line 454 "add_class.m"
                                  }
#line 454 "add_class.m"
                                  {
#line 454 "add_class.m"
                                    hlds__make_hlds__add_class__NewPredProc_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 454 "add_class.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewPredProc_45, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_73_73));
#line 454 "add_class.m"
                                  }
#line 455 "add_class.m"
                                  {
#line 455 "add_class.m"
                                    hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "add_class.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewPredProc_45));
#line 455 "add_class.m"
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2));
#line 455 "add_class.m"
                                  }
#line 456 "add_class.m"
                                  {
#line 456 "add_class.m"
                                    hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_class__V_89_89, hlds__make_hlds__add_class__PredInfo_42, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75);
                                  }
#line 453 "add_class.m"
                                }
#line 448 "add_class.m"
                              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 448 "add_class.m"
                            }
#line 457 "add_class.m"
                            break;
#line 457 "add_class.m"
                          case (MR_Integer) 0:
#line 458 "add_class.m"
                            {
#line 458 "add_class.m"
                              MR_Word hlds__make_hlds__add_class__Procs_46;

#line 459 "add_class.m"
                              {
#line 459 "add_class.m"
                                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_class__PredInfo0_41, &hlds__make_hlds__add_class__Procs_46);
                              }
#line 460 "add_class.m"
                              {
#line 460 "add_class.m"
                                hlds__make_hlds__add_class__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_class__Procs_46);
                              }
#line 460 "add_class.m"
                              if (hlds__make_hlds__add_class__succeeded)
#line 461 "add_class.m"
                                {
#line 461 "add_class.m"
                                  hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(hlds__make_hlds__add_class__PredInfo0_41, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72);
                                }
#line 460 "add_class.m"
                              else
#line 460 "add_class.m"
                                hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 458 "add_class.m"
                              hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 458 "add_class.m"
                              hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 458 "add_class.m"
                            }
#line 457 "add_class.m"
                            break;
#line 457 "add_class.m"
                        }
#line 445 "add_class.m"
                      }
#line 466 "add_class.m"
                    else
#line 469 "add_class.m"
                      {
#line 470 "add_class.m"
                        {
#line 470 "add_class.m"
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "number of preds != 1");
#line 470 "add_class.m"
                          return;
                        }
#line 469 "add_class.m"
                      }
#line 466 "add_class.m"
                  }
#line 431 "add_class.m"
              }
#line 472 "add_class.m"
            else
#line 473 "add_class.m"
              {
#line 473 "add_class.m"
                hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 473 "add_class.m"
                hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 473 "add_class.m"
                hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 473 "add_class.m"
              }
#line 475 "add_class.m"
            /* direct tailcall eliminated */
#line 475 "add_class.m"
            {
#line 475 "add_class.m"
              MR_Word hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_class__Methods_18;
#line 475 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0__tmp_copy_2 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74;
#line 475 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75;
#line 475 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72;

#line 475 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 475 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4;
#line 475 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0__tmp_copy_2;
#line 475 "add_class.m"
              hlds__make_hlds__add_class__HeadVar__1_1 = hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1;
#line 475 "add_class.m"
            }
#line 475 "add_class.m"
            continue;
#line 428 "add_class.m"
          }
#line 427 "add_class.m"
      }
#line 427 "add_class.m"
      break;
#line 427 "add_class.m"
    }
#line 421 "add_class.m"
}

#line 381 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0_2(
#line 381 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg)
#line 381 "add_class.m"
{
#line 381 "add_class.m"
  {
#line 381 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 381 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 381 "add_class.m"
    {
#line 381 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__381__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))));
    }
#line 381 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 381 "add_class.m"
  }
#line 381 "add_class.m"
}

#line 380 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0_1(
#line 380 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg)
#line 380 "add_class.m"
{
#line 380 "add_class.m"
  {
#line 380 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 380 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 380 "add_class.m"
    {
#line 380 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__380__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))));
    }
#line 380 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 380 "add_class.m"
  }
#line 380 "add_class.m"
}

#line 364 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_10_p_0(
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_11,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_12,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_13,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_14,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_15,
#line 364 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__MaybePredIdProcId_16,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47,
#line 364 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48,
#line 364 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49,
#line 364 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50)
#line 364 "add_class.m"
{
#line 370 "add_class.m"
  {
#line 370 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 370 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldImportStatus_19 = (MR_Word) hlds__make_hlds__add_class__TypeClassStatus_13;
#line 370 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredStatus_20 = (MR_Word) hlds__make_hlds__add_class__OldImportStatus_19;

#line 399 "add_class.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_15)) == (MR_mktag((MR_Integer) 0))))
#line 377 "add_class.m"
      {
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 0)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 1)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypesAndModes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 2)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__WithType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 3)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__WithInst_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 4)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybeDetism_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 5)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeVarSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 6)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstVarSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 7)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ExistQVars_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 8)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Purity_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 9)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Constraints0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 10)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Context_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_15, (MR_Integer) 11)));
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Origin_33;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClassParamTypes_34;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__UnivConstraints0_35;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ExistConstraints_36;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__UnivConstraints_37;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Constraints_38;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Markers0_39;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Markers_40;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_57_57;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_62_62;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_67_67;
#line 377 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_68_68;

#line 380 "add_class.m"
        {
#line 380 "add_class.m"
          hlds__make_hlds__add_class__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 380 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[2]));
#line 380 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_method_10_p_0_1));
#line 380 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 380 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 3) = ((MR_Box) (hlds__make_hlds__add_class__WithType_24));
#line 380 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 380 "add_class.m"
        }
#line 380 "add_class.m"
        {
#line 380 "add_class.m"
          mercury__require__expect_4_p_0(hlds__make_hlds__add_class__V_57_57, (MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/10", (MR_String) "WithType != no");
        }
#line 381 "add_class.m"
        {
#line 381 "add_class.m"
          hlds__make_hlds__add_class__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 381 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_62_62, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[3]));
#line 381 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_62_62, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_method_10_p_0_2));
#line 381 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 381 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_62_62, 3) = ((MR_Box) (hlds__make_hlds__add_class__WithInst_25));
#line 381 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_62_62, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "add_class.m"
        }
#line 381 "add_class.m"
        {
#line 381 "add_class.m"
          mercury__require__expect_4_p_0(hlds__make_hlds__add_class__V_62_62, (MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/10", (MR_String) "WithInst != no");
        }
#line 383 "add_class.m"
        {
#line 383 "add_class.m"
          hlds__make_hlds__add_class__Origin_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "add_class.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Origin_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 383 "add_class.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Origin_33, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredName_21));
#line 383 "add_class.m"
        }
#line 387 "add_class.m"
        {
#line 387 "add_class.m"
          hlds__make_hlds__add_class__V_67_67 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 387 "add_class.m"
        {
#line 387 "add_class.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_class__V_67_67, hlds__make_hlds__add_class__ClassParamVars_12, &hlds__make_hlds__add_class__ClassParamTypes_34);
        }
#line 389 "add_class.m"
        hlds__make_hlds__add_class__UnivConstraints0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints0_31, (MR_Integer) 0)));
#line 389 "add_class.m"
        hlds__make_hlds__add_class__ExistConstraints_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints0_31, (MR_Integer) 1)));
#line 390 "add_class.m"
        {
#line 390 "add_class.m"
          hlds__make_hlds__add_class__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_68_68, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_11));
#line 390 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_68_68, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamTypes_34));
#line 390 "add_class.m"
        }
#line 391 "add_class.m"
        {
#line 391 "add_class.m"
          hlds__make_hlds__add_class__UnivConstraints_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__UnivConstraints_37, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_68_68));
#line 391 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__UnivConstraints_37, 1) = ((MR_Box) (hlds__make_hlds__add_class__UnivConstraints0_35));
#line 391 "add_class.m"
        }
#line 392 "add_class.m"
        {
#line 392 "add_class.m"
          hlds__make_hlds__add_class__Constraints_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 392 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints_38, 0) = ((MR_Box) (hlds__make_hlds__add_class__UnivConstraints_37));
#line 392 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints_38, 1) = ((MR_Box) (hlds__make_hlds__add_class__ExistConstraints_36));
#line 392 "add_class.m"
        }
#line 393 "add_class.m"
        {
#line 393 "add_class.m"
          hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_class__Markers0_39);
        }
#line 394 "add_class.m"
        {
#line 394 "add_class.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 9, hlds__make_hlds__add_class__Markers0_39, &hlds__make_hlds__add_class__Markers_40);
        }
#line 395 "add_class.m"
        {
#line 395 "add_class.m"
          hlds__make_hlds__add_pred__module_add_pred_or_func_19_p_0(hlds__make_hlds__add_class__Origin_33, hlds__make_hlds__add_class__TypeVarSet_27, hlds__make_hlds__add_class__InstVarSet_28, hlds__make_hlds__add_class__ExistQVars_29, hlds__make_hlds__add_class__PredOrFunc_22, hlds__make_hlds__add_class__PredName_21, hlds__make_hlds__add_class__TypesAndModes_23, hlds__make_hlds__add_class__MaybeDetism_26, hlds__make_hlds__add_class__Purity_30, hlds__make_hlds__add_class__Constraints_38, hlds__make_hlds__add_class__Markers_40, hlds__make_hlds__add_class__Context_32, hlds__make_hlds__add_class__PredStatus_20, hlds__make_hlds__add_class__NeedQual_14, hlds__make_hlds__add_class__MaybePredIdProcId_16, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50);
        }
#line 377 "add_class.m"
      }
#line 399 "add_class.m"
    else
#line 401 "add_class.m"
      {
#line 401 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybePredOrFunc_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 1)));
#line 401 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Modes_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 2)));
#line 401 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybeDet_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 4)));
#line 401 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 5)));
#line 401 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredName_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 0)));
#line 401 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Context_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 6)));
#line 400 "add_class.m"
        MR_Word hlds__make_hlds__add_class___WithInst_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_15, (MR_Integer) 3)));

#line 408 "add_class.m"
        if ((hlds__make_hlds__add_class__MaybePredOrFunc_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "add_class.m"
          {
#line 412 "add_class.m"
            {
#line 412 "add_class.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/10", (MR_String) "no pred_or_func on mode declaration");
#line 412 "add_class.m"
              return;
            }
#line 409 "add_class.m"
          }
#line 408 "add_class.m"
        else
#line 403 "add_class.m"
          {
#line 403 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredIdProcId_46;
#line 403 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredOrFunc_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybePredOrFunc_41, (MR_Integer) 0)));

#line 404 "add_class.m"
            {
#line 404 "add_class.m"
              hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_class__VarSet_45, hlds__make_hlds__add_class__PredName_74, hlds__make_hlds__add_class__Modes_42, hlds__make_hlds__add_class__MaybeDet_44, hlds__make_hlds__add_class__PredStatus_20, hlds__make_hlds__add_class__Context_76, hlds__make_hlds__add_class__PredOrFunc_72, (MR_Integer) 1, &hlds__make_hlds__add_class__PredIdProcId_46, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_47, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_48, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50);
            }
#line 407 "add_class.m"
            {
#line 407 "add_class.m"
              MR_Word base;
#line 407 "add_class.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 407 "add_class.m"
              *hlds__make_hlds__add_class__MaybePredIdProcId_16 = base;
#line 407 "add_class.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__PredIdProcId_46));
#line 407 "add_class.m"
            }
#line 403 "add_class.m"
          }
#line 401 "add_class.m"
      }
#line 370 "add_class.m"
  }
#line 364 "add_class.m"
}

#line 347 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_methods_10_p_0(
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_1,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_2,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_3,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_4,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__5_5,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__6_6,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_7,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_8,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_9,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_10)
#line 347 "add_class.m"
{
#line 353 "add_class.m"
  {
#line 353 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 353 "add_class.m"
    if ((hlds__make_hlds__add_class__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 353 "add_class.m"
      {
#line 353 "add_class.m"
        *hlds__make_hlds__add_class__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 353 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_10 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_9;
#line 353 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_8 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_7;
#line 353 "add_class.m"
      }
#line 353 "add_class.m"
    else
#line 356 "add_class.m"
      {
#line 356 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Method_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__5_5, (MR_Integer) 0)));
#line 356 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Methods_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__5_5, (MR_Integer) 1)));
#line 356 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybePredProcId_27;
#line 356 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybePredProcIds_28;
#line 356 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35_35;
#line 356 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_36_36;

#line 357 "add_class.m"
        {
#line 357 "add_class.m"
          hlds__make_hlds__add_class__module_add_class_method_10_p_0(hlds__make_hlds__add_class__ClassName_1, hlds__make_hlds__add_class__ClassParamVars_2, hlds__make_hlds__add_class__TypeClassStatus_3, hlds__make_hlds__add_class__NeedQual_4, hlds__make_hlds__add_class__Method_25, &hlds__make_hlds__add_class__MaybePredProcId_27, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_7, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35_35, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_9, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_36_36);
        }
#line 360 "add_class.m"
        {
#line 360 "add_class.m"
          hlds__make_hlds__add_class__add_class_pred_or_func_methods_10_p_0(hlds__make_hlds__add_class__ClassName_1, hlds__make_hlds__add_class__ClassParamVars_2, hlds__make_hlds__add_class__TypeClassStatus_3, hlds__make_hlds__add_class__NeedQual_4, hlds__make_hlds__add_class__Methods_26, &hlds__make_hlds__add_class__MaybePredProcIds_28, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35_35, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_8, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_36_36, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_10);
        }
#line 356 "add_class.m"
        {
#line 356 "add_class.m"
          MR_Word base;
#line 356 "add_class.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "add_class.m"
          *hlds__make_hlds__add_class__HeadVar__6_6 = base;
#line 356 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__MaybePredProcId_27));
#line 356 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__MaybePredProcIds_28));
#line 356 "add_class.m"
        }
#line 356 "add_class.m"
      }
#line 353 "add_class.m"
  }
#line 347 "add_class.m"
}

#line 288 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_11_p_0(
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_12,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_13,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_14,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_15,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_16,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51,
#line 288 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53,
#line 288 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54,
#line 288 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55,
#line 288 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56)
#line 288 "add_class.m"
{
#line 297 "add_class.m"
  {
#line 297 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 297 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredName_32;
#line 297 "add_class.m"
    MR_Word hlds__make_hlds__add_class__MaybePredOrFunc_33;
#line 297 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Modes_34;
#line 297 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_38;
#line 297 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredTable_39;
#line 297 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__PredArity_40;
#line 297 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredOrFunc_41;
#line 297 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredIds_42;

#line 301 "add_class.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_16)) == (MR_mktag((MR_Integer) 0))))
#line 299 "add_class.m"
      {
#line 300 "add_class.m"
        {
#line 300 "add_class.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/11", (MR_String) "pred_or_func method item");
#line 300 "add_class.m"
          return;
        }
#line 299 "add_class.m"
      }
#line 301 "add_class.m"
    else
#line 302 "add_class.m"
      {
#line 302 "add_class.m"
        MR_Word hlds__make_hlds__add_class___WithInst_35;
#line 302 "add_class.m"
        MR_Word hlds__make_hlds__add_class___MaybeDetism_36;
#line 302 "add_class.m"
        MR_Word hlds__make_hlds__add_class___VarSet_37;

#line 302 "add_class.m"
        hlds__make_hlds__add_class__PredName_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 0)));
#line 302 "add_class.m"
        hlds__make_hlds__add_class__MaybePredOrFunc_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 1)));
#line 302 "add_class.m"
        hlds__make_hlds__add_class__Modes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 2)));
#line 302 "add_class.m"
        hlds__make_hlds__add_class___WithInst_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 3)));
#line 302 "add_class.m"
        hlds__make_hlds__add_class___MaybeDetism_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 4)));
#line 302 "add_class.m"
        hlds__make_hlds__add_class___VarSet_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 5)));
#line 302 "add_class.m"
        hlds__make_hlds__add_class__Context_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_16, (MR_Integer) 6)));
#line 302 "add_class.m"
      }
#line 305 "add_class.m"
    {
#line 305 "add_class.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53, &hlds__make_hlds__add_class__PredTable_39);
    }
#line 306 "add_class.m"
    {
#line 306 "add_class.m"
      hlds__make_hlds__add_class__PredArity_40 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_class__Modes_34);
    }
#line 312 "add_class.m"
    if ((hlds__make_hlds__add_class__MaybePredOrFunc_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 308 "add_class.m"
      {
#line 311 "add_class.m"
        {
#line 311 "add_class.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/11", (MR_String) "unexpanded \140with_inst\140 annotation");
#line 311 "add_class.m"
          return;
        }
#line 308 "add_class.m"
      }
#line 312 "add_class.m"
    else
#line 313 "add_class.m"
      hlds__make_hlds__add_class__PredOrFunc_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybePredOrFunc_33, (MR_Integer) 0)));
#line 315 "add_class.m"
    {
#line 315 "add_class.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_class__PredTable_39, (MR_Integer) 0, hlds__make_hlds__add_class__PredOrFunc_41, hlds__make_hlds__add_class__PredName_32, hlds__make_hlds__add_class__PredArity_40, &hlds__make_hlds__add_class__PredIds_42);
    }
#line 321 "add_class.m"
    if ((hlds__make_hlds__add_class__PredIds_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 318 "add_class.m"
      {
#line 319 "add_class.m"
        {
#line 319 "add_class.m"
          hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(hlds__make_hlds__add_class__PredName_32, hlds__make_hlds__add_class__PredArity_40, hlds__make_hlds__add_class__PredOrFunc_41, hlds__make_hlds__add_class__Context_38, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);
        }
#line 318 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51;
#line 318 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53;
#line 318 "add_class.m"
      }
#line 321 "add_class.m"
    else
#line 322 "add_class.m"
      {
#line 322 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadPredId_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_42, (MR_Integer) 0)));
#line 322 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TailPredIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_42, (MR_Integer) 1)));

#line 340 "add_class.m"
        if ((hlds__make_hlds__add_class__TailPredIds_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 324 "add_class.m"
          {
#line 324 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredInfo_46;
#line 324 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredMarkers_47;

#line 326 "add_class.m"
            {
#line 326 "add_class.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__add_class__HeadPredId_43, &hlds__make_hlds__add_class__PredInfo_46);
            }
#line 327 "add_class.m"
            {
#line 327 "add_class.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_class__PredInfo_46, &hlds__make_hlds__add_class__PredMarkers_47);
            }
#line 328 "add_class.m"
            {
#line 328 "add_class.m"
              hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__PredMarkers_47, (MR_Integer) 9);
            }
#line 328 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 331 "add_class.m"
              {
#line 331 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PredProcId_48;

#line 329 "add_class.m"
                {
#line 329 "add_class.m"
                  hlds__make_hlds__add_class__module_add_class_method_10_p_0(hlds__make_hlds__add_class__ClassName_12, hlds__make_hlds__add_class__ClassParamVars_13, hlds__make_hlds__add_class__TypeClassStatus_14, hlds__make_hlds__add_class__NeedQual_15, hlds__make_hlds__add_class__Method_16, &hlds__make_hlds__add_class__PredProcId_48, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);
                }
#line 332 "add_class.m"
                {
#line 332 "add_class.m"
                  mercury__list__cons_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_class__PredProcId_48)), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51, hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52);
                }
#line 331 "add_class.m"
              }
#line 328 "add_class.m"
            else
#line 337 "add_class.m"
              {
#line 337 "add_class.m"
                {
#line 337 "add_class.m"
                  hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(hlds__make_hlds__add_class__PredName_32, hlds__make_hlds__add_class__PredArity_40, hlds__make_hlds__add_class__PredOrFunc_41, hlds__make_hlds__add_class__Context_38, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);
                }
#line 337 "add_class.m"
                *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53;
#line 337 "add_class.m"
                *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51;
#line 337 "add_class.m"
              }
#line 324 "add_class.m"
          }
#line 340 "add_class.m"
        else
#line 341 "add_class.m"
          {
#line 343 "add_class.m"
            {
#line 343 "add_class.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/11", (MR_String) "multiple preds matching method mode");
#line 343 "add_class.m"
              return;
            }
#line 341 "add_class.m"
          }
#line 322 "add_class.m"
      }
#line 297 "add_class.m"
  }
#line 288 "add_class.m"
}

#line 283 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(
#line 283 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_2)
#line 283 "add_class.m"
{
#line 286 "add_class.m"
  {
#line 286 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_2)) == (MR_mktag((MR_Integer) 1)));
#line 286 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_3_3;
#line 286 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_4_4;
#line 286 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_5_5;
#line 286 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_6_6;
#line 286 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_7_7;
#line 286 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_8_8;
#line 286 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_9_9;

#line 286 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 286 "add_class.m"
      {
#line 286 "add_class.m"
        hlds__make_hlds__add_class__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 0)));
#line 286 "add_class.m"
        hlds__make_hlds__add_class__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 1)));
#line 286 "add_class.m"
        hlds__make_hlds__add_class__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 2)));
#line 286 "add_class.m"
        hlds__make_hlds__add_class__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 3)));
#line 286 "add_class.m"
        hlds__make_hlds__add_class__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 4)));
#line 286 "add_class.m"
        hlds__make_hlds__add_class__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 5)));
#line 286 "add_class.m"
        hlds__make_hlds__add_class__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 6)));
#line 286 "add_class.m"
      }
#line 286 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 286 "add_class.m"
  }
#line 283 "add_class.m"
}

#line 277 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0_2(
#line 277 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 277 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 277 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 277 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 277 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 277 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 277 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 277 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7)
#line 277 "add_class.m"
{
#line 277 "add_class.m"
  {
#line 277 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 277 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_52;
#line 277 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_54;
#line 277 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_56;

#line 277 "add_class.m"
    {
#line 277 "add_class.m"
      hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 6))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_52, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_4), &hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_54, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_6), &hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_56);
    }
#line 277 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_52));
#line 277 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_54));
#line 277 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_56));
#line 277 "add_class.m"
  }
#line 277 "add_class.m"
}

#line 265 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0_1(
#line 265 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 265 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
#line 265 "add_class.m"
{
#line 265 "add_class.m"
  {
#line 265 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 265 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 265 "add_class.m"
    {
#line 265 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
#line 265 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 265 "add_class.m"
  }
#line 265 "add_class.m"
}

#line 256 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_10_p_0(
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_11,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassParamVars_12,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_13,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NeedQual_14,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Methods_15,
#line 256 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__PredProcIds_16,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_22,
#line 256 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_23,
#line 256 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_24,
#line 256 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_25)
#line 256 "add_class.m"
{
#line 264 "add_class.m"
  {
#line 264 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 264 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeCtorInfo_37_37 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 264 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ModeMethods_19;
#line 264 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredOrFuncMethods_20;
#line 264 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_27_27;
#line 264 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_28_28;
#line 264 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_29_29;
#line 264 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_30_30;
#line 264 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_31_31;
#line 264 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_32_32;
#line 264 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_33_33;
#line 276 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_31_31;
#line 276 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_32_32;
#line 276 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_33_33;

#line 265 "add_class.m"
    {
#line 265 "add_class.m"
      mercury__list__filter_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_37_37, (MR_Word) &hlds__make_hlds__add_class_scalar_common_2[3], hlds__make_hlds__add_class__Methods_15, &hlds__make_hlds__add_class__ModeMethods_19, &hlds__make_hlds__add_class__PredOrFuncMethods_20);
    }
#line 268 "add_class.m"
    {
#line 268 "add_class.m"
      hlds__make_hlds__add_class__add_class_pred_or_func_methods_10_p_0(hlds__make_hlds__add_class__ClassName_11, hlds__make_hlds__add_class__ClassParamVars_12, hlds__make_hlds__add_class__TypeClassStatus_13, hlds__make_hlds__add_class__NeedQual_14, hlds__make_hlds__add_class__PredOrFuncMethods_20, &hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_27_27, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_22, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_28_28, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_24, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_29_29);
    }
#line 277 "add_class.m"
    {
#line 277 "add_class.m"
      hlds__make_hlds__add_class__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 277 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_9[0]));
#line 277 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_10_p_0_2));
#line 277 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 277 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 3) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_11));
#line 277 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_12));
#line 277 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 5) = ((MR_Box) (hlds__make_hlds__add_class__TypeClassStatus_13));
#line 277 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_30_30, 6) = ((MR_Box) (hlds__make_hlds__add_class__NeedQual_14));
#line 277 "add_class.m"
    }
#line 276 "add_class.m"
    {
#line 276 "add_class.m"
      mercury__list__foldl3_8_p_0(hlds__make_hlds__add_class__TypeCtorInfo_37_37, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[7], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__V_30_30, hlds__make_hlds__add_class__ModeMethods_19, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_27_27)), &hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_31_31, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_28_28)), &hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_32_32, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_29_29)), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_33_33);
    }
#line 276 "add_class.m"
    hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_31_31 = ((MR_Word) hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_31_31);
#line 276 "add_class.m"
    hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_32_32 = ((MR_Word) hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_32_32);
#line 276 "add_class.m"
    hlds__make_hlds__add_class__STATE_VARIABLE_Specs_33_33 = ((MR_Word) hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_33_33);
#line 280 "add_class.m"
    {
#line 280 "add_class.m"
      hlds__make_hlds__add_class__check_method_modes_7_p_0(hlds__make_hlds__add_class__Methods_15, hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_31_31, hlds__make_hlds__add_class__PredProcIds_16, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_32_32, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_23, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_33_33, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_25);
    }
#line 264 "add_class.m"
  }
#line 256 "add_class.m"
}

#line 245 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
#line 245 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldFunDeps0_3,
#line 245 "add_class.m"
  MR_Word hlds__make_hlds__add_class__FunDeps0_4)
#line 245 "add_class.m"
{
#line 248 "add_class.m"
  {
#line 248 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 248 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeCtorInfo_7_7 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
#line 248 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldFunDeps_5;
#line 248 "add_class.m"
    MR_Word hlds__make_hlds__add_class__FunDeps_6;

#line 252 "add_class.m"
    {
#line 252 "add_class.m"
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_7_7, hlds__make_hlds__add_class__OldFunDeps0_3, &hlds__make_hlds__add_class__OldFunDeps_5);
    }
#line 253 "add_class.m"
    {
#line 253 "add_class.m"
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_7_7, hlds__make_hlds__add_class__FunDeps0_4, &hlds__make_hlds__add_class__FunDeps_6);
    }
#line 254 "add_class.m"
    {
#line 254 "add_class.m"
      hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[17], ((MR_Box) (hlds__make_hlds__add_class__OldFunDeps_5)), ((MR_Box) (hlds__make_hlds__add_class__FunDeps_6)));
    }
#line 248 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 248 "add_class.m"
  }
#line 245 "add_class.m"
}

#line 229 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__constraints_are_identical_6_p_0(
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVars0_7,
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVarSet_8,
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldConstraints0_9,
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_10,
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__VarSet_11,
#line 229 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Constraints_12)
#line 229 "add_class.m"
{
#line 234 "add_class.m"
  {
#line 234 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 234 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_19_19;
#line 234 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Renaming_14;
#line 234 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldConstraints1_15;
#line 234 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldVars_16;
#line 234 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarRenaming_17;
#line 234 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldConstraints_18;
#line 235 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_13_13;

#line 235 "add_class.m"
    {
#line 235 "add_class.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__VarSet_11, hlds__make_hlds__add_class__OldVarSet_8, &hlds__make_hlds__add_class__V_13_13, &hlds__make_hlds__add_class__Renaming_14);
    }
#line 236 "add_class.m"
    {
#line 236 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(hlds__make_hlds__add_class__Renaming_14, hlds__make_hlds__add_class__OldConstraints0_9, &hlds__make_hlds__add_class__OldConstraints1_15);
    }
#line 238 "add_class.m"
    {
#line 238 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(hlds__make_hlds__add_class__Renaming_14, hlds__make_hlds__add_class__OldVars0_7, &hlds__make_hlds__add_class__OldVars_16);
    }
#line 4340 "hlds.make_hlds.add_class.c"
    hlds__make_hlds__add_class__TypeInfo_19_19 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
#line 240 "add_class.m"
    {
#line 240 "add_class.m"
      mercury__map__from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__TypeInfo_19_19, hlds__make_hlds__add_class__TypeInfo_19_19, hlds__make_hlds__add_class__OldVars_16, hlds__make_hlds__add_class__Vars_10, &hlds__make_hlds__add_class__VarRenaming_17);
    }
#line 241 "add_class.m"
    {
#line 241 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(hlds__make_hlds__add_class__VarRenaming_17, hlds__make_hlds__add_class__OldConstraints1_15, &hlds__make_hlds__add_class__OldConstraints_18);
    }
#line 243 "add_class.m"
    {
#line 243 "add_class.m"
      hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[16], ((MR_Box) (hlds__make_hlds__add_class__OldConstraints_18)), ((MR_Box) (hlds__make_hlds__add_class__Constraints_12)));
    }
#line 234 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 234 "add_class.m"
  }
#line 229 "add_class.m"
}

#line 218 "add_class.m"
static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
#line 218 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeInfo_for_T_17,
#line 218 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 218 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__N_2,
#line 218 "add_class.m"
  MR_Box hlds__make_hlds__add_class__X_3)
#line 218 "add_class.m"
{
#line 220 "add_class.m"
  while (MR_TRUE)
#line 220 "add_class.m"
    {
#line 220 "add_class.m"
      /* tailcall optimized into a loop */
#line 220 "add_class.m"
      {
#line 220 "add_class.m"
        MR_bool hlds__make_hlds__add_class__succeeded;
#line 220 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__HeadVar__4_4;

#line 220 "add_class.m"
        if ((hlds__make_hlds__add_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "add_class.m"
          {
#line 221 "add_class.m"
            {
#line 221 "add_class.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "function \140hlds.make_hlds.add_class.get_list_index\'/3", (MR_String) "element not found");
            }
#line 220 "add_class.m"
          }
#line 220 "add_class.m"
        else
#line 222 "add_class.m"
          {
#line 222 "add_class.m"
            MR_Box hlds__make_hlds__add_class__E_11 = (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 0));
#line 222 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Es_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 1)));

#line 223 "add_class.m"
            {
#line 223 "add_class.m"
              hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_class__TypeInfo_for_T_17, hlds__make_hlds__add_class__X_3, hlds__make_hlds__add_class__E_11);
            }
#line 222 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 224 "add_class.m"
              hlds__make_hlds__add_class__HeadVar__4_4 = hlds__make_hlds__add_class__N_2;
#line 222 "add_class.m"
            else
#line 226 "add_class.m"
              {
#line 226 "add_class.m"
                MR_Integer hlds__make_hlds__add_class__V_15_15 = (hlds__make_hlds__add_class__N_2 + (MR_Integer) 1);

#line 226 "add_class.m"
                /* direct tailcall eliminated */
#line 226 "add_class.m"
                {
#line 226 "add_class.m"
                  MR_Word hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_class__Es_12;
#line 226 "add_class.m"
                  MR_Integer hlds__make_hlds__add_class__N__tmp_copy_2 = hlds__make_hlds__add_class__V_15_15;

#line 226 "add_class.m"
                  hlds__make_hlds__add_class__N_2 = hlds__make_hlds__add_class__N__tmp_copy_2;
#line 226 "add_class.m"
                  hlds__make_hlds__add_class__HeadVar__1_1 = hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1;
#line 226 "add_class.m"
                }
#line 226 "add_class.m"
                continue;
#line 226 "add_class.m"
              }
#line 222 "add_class.m"
          }
#line 220 "add_class.m"
        return hlds__make_hlds__add_class__HeadVar__4_4;
#line 220 "add_class.m"
      }
#line 220 "add_class.m"
      break;
#line 220 "add_class.m"
    }
#line 218 "add_class.m"
}

#line 214 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
#line 214 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 214 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 214 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2)
#line 214 "add_class.m"
{
#line 214 "add_class.m"
  {
#line 214 "add_class.m"
    MR_Box hlds__make_hlds__add_class__wrapper_arg_3;
#line 214 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 214 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_LambdaHeadVar__3_13;

#line 214 "add_class.m"
    {
#line 214 "add_class.m"
      hlds__make_hlds__add_class__conv0_LambdaHeadVar__3_13 = hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__214__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2));
    }
#line 214 "add_class.m"
    hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv0_LambdaHeadVar__3_13));
#line 214 "add_class.m"
    return hlds__make_hlds__add_class__wrapper_arg_3;
#line 214 "add_class.m"
  }
#line 214 "add_class.m"
}

#line 205 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
#line 205 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 205 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_2)
#line 205 "add_class.m"
{
#line 207 "add_class.m"
  {
#line 207 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 207 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HeadVar__3_3;
#line 207 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Domain0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__2_2, (MR_Integer) 0)));
#line 207 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Range0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__2_2, (MR_Integer) 1)));
#line 207 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Domain_7;
#line 207 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Range_8;
#line 207 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_15_15;
#line 207 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Func_29;
#line 207 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_33_33;
#line 213 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv1_Domain_7;
#line 213 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv2_Range_8;

#line 213 "add_class.m"
    {
#line 213 "add_class.m"
      hlds__make_hlds__add_class__V_15_15 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 214 "add_class.m"
    {
#line 214 "add_class.m"
      hlds__make_hlds__add_class__Func_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 214 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[0]));
#line 214 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 1) = ((MR_Box) (hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1));
#line 214 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 214 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 3) = ((MR_Box) (hlds__make_hlds__add_class__TVars_4));
#line 214 "add_class.m"
    }
#line 213 "add_class.m"
    {
#line 213 "add_class.m"
      hlds__make_hlds__add_class__conv1_Domain_7 = mercury__list__foldl_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[6], hlds__make_hlds__add_class__Func_29, hlds__make_hlds__add_class__Domain0_5, ((MR_Box) (hlds__make_hlds__add_class__V_15_15)));
    }
#line 213 "add_class.m"
    hlds__make_hlds__add_class__Domain_7 = ((MR_Word) hlds__make_hlds__add_class__conv1_Domain_7);
#line 213 "add_class.m"
    {
#line 213 "add_class.m"
      hlds__make_hlds__add_class__V_33_33 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 213 "add_class.m"
    {
#line 213 "add_class.m"
      hlds__make_hlds__add_class__conv2_Range_8 = mercury__list__foldl_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[6], hlds__make_hlds__add_class__Func_29, hlds__make_hlds__add_class__Range0_6, ((MR_Box) (hlds__make_hlds__add_class__V_33_33)));
    }
#line 213 "add_class.m"
    hlds__make_hlds__add_class__Range_8 = ((MR_Word) hlds__make_hlds__add_class__conv2_Range_8);
#line 207 "add_class.m"
    {
#line 207 "add_class.m"
      hlds__make_hlds__add_class__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_class__Domain_7));
#line 207 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_class__Range_8));
#line 207 "add_class.m"
    }
#line 207 "add_class.m"
    return hlds__make_hlds__add_class__HeadVar__3_3;
#line 207 "add_class.m"
  }
#line 205 "add_class.m"
}

#line 705 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1(
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 705 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 705 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 705 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_8,
#line 705 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_9,
#line 705 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_10,
#line 705 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_11)
#line 705 "add_class.m"
{
#line 705 "add_class.m"
  {
#line 705 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 705 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv4_TVarSet_20;
#line 705 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_48;
#line 705 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_50;
#line 705 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_52;
#line 705 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_54;

#line 705 "add_class.m"
    {
#line 705 "add_class.m"
      hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv4_TVarSet_20, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_4), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_48, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_6), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_50, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_8), &hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_52, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_10), &hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_54);
    }
#line 705 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv4_TVarSet_20));
#line 705 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_48));
#line 705 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_50));
#line 705 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_9 = ((MR_Box) (hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_52));
#line 705 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_11 = ((MR_Box) (hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_54));
#line 705 "add_class.m"
  }
#line 705 "add_class.m"
}

#line 35 "add_class.m"
void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(
#line 35 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceProcDefn_17,
#line 35 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_18,
#line 35 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__PredArity_19,
#line 35 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ArgTypes_20,
#line 35 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Markers_21,
#line 35 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_22,
#line 35 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceStatus_23,
#line 35 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__ClausesInfo_24,
#line 35 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_49,
#line 35 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_50,
#line 35 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_51,
#line 35 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_52,
#line 35 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_53,
#line 35 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_54,
#line 35 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55,
#line 35 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56)
#line 35 "add_class.m"
{
#line 667 "add_class.m"
  {
#line 667 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 667 "add_class.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__InstanceProcDefn_17)) == (MR_mktag((MR_Integer) 1))))
#line 701 "add_class.m"
      {
#line 701 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstanceClauses_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__InstanceProcDefn_17, (MR_Integer) 0)));
#line 701 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClausesInfo0_48;
#line 701 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_57_57;
#line 701 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_58_58;
#line 704 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_50;
#line 704 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_52;
#line 704 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_54;
#line 704 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv6_ClausesInfo_24;
#line 704 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_56;

#line 703 "add_class.m"
        {
#line 703 "add_class.m"
          hlds__make_hlds__add_class__V_57_57 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        }
#line 702 "add_class.m"
        {
#line 702 "add_class.m"
          hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__PredArity_19, hlds__make_hlds__add_class__V_57_57, &hlds__make_hlds__add_class__ClausesInfo0_48);
        }
#line 705 "add_class.m"
        {
#line 705 "add_class.m"
          hlds__make_hlds__add_class__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 705 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_58_58, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_6[0]));
#line 705 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_58_58, 1) = ((MR_Box) (hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1));
#line 705 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 705 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_58_58, 3) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_18));
#line 705 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_58_58, 4) = ((MR_Box) (hlds__make_hlds__add_class__Context_22));
#line 705 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_58_58, 5) = ((MR_Box) (hlds__make_hlds__add_class__InstanceStatus_23));
#line 705 "add_class.m"
        }
#line 704 "add_class.m"
        {
#line 704 "add_class.m"
          mercury__list__foldl5_12_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[4], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0, (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__V_58_58, hlds__make_hlds__add_class__InstanceClauses_47, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_49)), &hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_50, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_51)), &hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_52, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_53)), &hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_54, ((MR_Box) (hlds__make_hlds__add_class__ClausesInfo0_48)), &hlds__make_hlds__add_class__conv6_ClausesInfo_24, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55)), &hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_56);
        }
#line 704 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_50 = ((MR_Word) hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_50);
#line 704 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_52 = ((MR_Word) hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_52);
#line 704 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_54 = ((MR_Word) hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_54);
#line 704 "add_class.m"
        *hlds__make_hlds__add_class__ClausesInfo_24 = ((MR_Word) hlds__make_hlds__add_class__conv6_ClausesInfo_24);
#line 704 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56 = ((MR_Word) hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_56);
#line 701 "add_class.m"
      }
#line 667 "add_class.m"
    else
#line 667 "add_class.m"
      {
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_77_77;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstancePredName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceProcDefn_17, (MR_Integer) 0)));
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo0_30;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo1_31;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadVars_32;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NonLocals_33;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo2_34;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo_35;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet0_36;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet_37;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__IntroducedGoal_38;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__IntroducedClause_39;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TVarNameMap_40;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarTypes_41;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadVarVec_42;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClausesRep_43;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__RttiVarMaps_44;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_68_68;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_73_73;
#line 667 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_76_76;

#line 670 "add_class.m"
        {
#line 670 "add_class.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__add_class__GoalInfo0_30);
        }
#line 671 "add_class.m"
        {
#line 671 "add_class.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__add_class__Context_22, hlds__make_hlds__add_class__GoalInfo0_30, &hlds__make_hlds__add_class__GoalInfo1_31);
        }
#line 4810 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_77_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 682 "add_class.m"
        {
#line 682 "add_class.m"
          mercury__varset__init_1_p_0(hlds__make_hlds__add_class__TypeCtorInfo_77_77, &hlds__make_hlds__add_class__VarSet0_36);
        }
#line 683 "add_class.m"
        {
#line 683 "add_class.m"
          parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_class__TypeCtorInfo_77_77, (MR_String) "HeadVar__", hlds__make_hlds__add_class__PredArity_19, &hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__VarSet0_36, &hlds__make_hlds__add_class__VarSet_37);
        }
#line 672 "add_class.m"
        {
#line 672 "add_class.m"
          parse_tree__set_of_var__list_to_set_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_77_77, hlds__make_hlds__add_class__HeadVars_32, &hlds__make_hlds__add_class__NonLocals_33);
        }
#line 673 "add_class.m"
        {
#line 673 "add_class.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_class__NonLocals_33, hlds__make_hlds__add_class__GoalInfo1_31, &hlds__make_hlds__add_class__GoalInfo2_34);
        }
#line 674 "add_class.m"
        {
#line 674 "add_class.m"
          hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__Markers_21, (MR_Integer) 12);
        }
#line 674 "add_class.m"
        if (hlds__make_hlds__add_class__succeeded)
#line 675 "add_class.m"
          {
#line 675 "add_class.m"
            {
#line 675 "add_class.m"
              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_class__GoalInfo2_34, &hlds__make_hlds__add_class__GoalInfo_35);
            }
#line 675 "add_class.m"
          }
#line 674 "add_class.m"
        else
#line 676 "add_class.m"
          {
#line 676 "add_class.m"
            {
#line 676 "add_class.m"
              hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__Markers_21, (MR_Integer) 13);
            }
#line 676 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 677 "add_class.m"
              {
#line 677 "add_class.m"
                {
#line 677 "add_class.m"
                  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_class__GoalInfo2_34, &hlds__make_hlds__add_class__GoalInfo_35);
                }
#line 677 "add_class.m"
              }
#line 676 "add_class.m"
            else
#line 679 "add_class.m"
              hlds__make_hlds__add_class__GoalInfo_35 = hlds__make_hlds__add_class__GoalInfo2_34;
#line 676 "add_class.m"
          }
#line 684 "add_class.m"
        {
#line 684 "add_class.m"
          hlds__make_hlds__add_class__V_68_68 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 684 "add_class.m"
        {
#line 684 "add_class.m"
          hlds__make_hlds__qual_info__construct_pred_or_func_call_8_p_0(hlds__make_hlds__add_class__V_68_68, hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__InstancePredName_29, hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__GoalInfo_35, &hlds__make_hlds__add_class__IntroducedGoal_38, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_53, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_54);
        }
#line 686 "add_class.m"
        {
#line 686 "add_class.m"
          hlds__make_hlds__add_class__IntroducedClause_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 686 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 1) = ((MR_Box) (hlds__make_hlds__add_class__IntroducedGoal_38));
#line 686 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 3) = ((MR_Box) (hlds__make_hlds__add_class__Context_22));
#line 686 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 686 "add_class.m"
        }
#line 689 "add_class.m"
        {
#line 689 "add_class.m"
          mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], &hlds__make_hlds__add_class__TVarNameMap_40);
        }
#line 690 "add_class.m"
        {
#line 690 "add_class.m"
          hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__ArgTypes_20, &hlds__make_hlds__add_class__VarTypes_41);
        }
#line 691 "add_class.m"
        {
#line 691 "add_class.m"
          hlds__make_hlds__add_class__HeadVarVec_42 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[3], hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__HeadVars_32);
        }
#line 692 "add_class.m"
        {
#line 692 "add_class.m"
          hlds__make_hlds__add_class__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_class__IntroducedClause_39));
#line 692 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "add_class.m"
        }
#line 692 "add_class.m"
        {
#line 692 "add_class.m"
          hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_class__V_73_73, &hlds__make_hlds__add_class__ClausesRep_43);
        }
#line 693 "add_class.m"
        {
#line 693 "add_class.m"
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_class__RttiVarMaps_44);
        }
#line 697 "add_class.m"
        {
#line 697 "add_class.m"
          hlds__make_hlds__add_class__V_76_76 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        }
#line 696 "add_class.m"
        {
#line 696 "add_class.m"
          MR_Word base;
#line 696 "add_class.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 696 "add_class.m"
          *hlds__make_hlds__add_class__ClausesInfo_24 = base;
#line 696 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_37));
#line 696 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__VarTypes_41));
#line 696 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_class__TVarNameMap_40));
#line 696 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_class__VarTypes_41));
#line 696 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_class__HeadVarVec_42));
#line 696 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_class__ClausesRep_43));
#line 696 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_class__V_76_76));
#line 696 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_class__RttiVarMaps_44));
#line 696 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 696 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
#line 696 "add_class.m"
        }
#line 667 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_50 = hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_49;
#line 667 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_52 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_51;
#line 667 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55;
#line 667 "add_class.m"
      }
#line 667 "add_class.m"
  }
#line 35 "add_class.m"
}

#line 591 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_2(
#line 591 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 591 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 591 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 591 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3)
#line 591 "add_class.m"
{
#line 591 "add_class.m"
  {
#line 591 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 591 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26;

#line 591 "add_class.m"
    {
#line 591 "add_class.m"
      hlds__make_hlds__add_class__check_instance_constraints_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26);
    }
#line 591 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26));
#line 591 "add_class.m"
  }
#line 591 "add_class.m"
}

#line 589 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_1(
#line 589 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 589 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
#line 589 "add_class.m"
{
#line 589 "add_class.m"
  {
#line 589 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 589 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 589 "add_class.m"
    {
#line 589 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
#line 589 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 589 "add_class.m"
  }
#line 589 "add_class.m"
}

#line 28 "add_class.m"
void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0(
#line 28 "add_class.m"
  MR_Word hlds__make_hlds__add_class__StatusItem_6,
#line 28 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_34,
#line 28 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35,
#line 28 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_36,
#line 28 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_37)
#line 28 "add_class.m"
{
#line 479 "add_class.m"
  {
#line 479 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__StatusItem_6, (MR_Integer) 0)));
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ItemInstanceInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__StatusItem_6, (MR_Integer) 1)));
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 0)));
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 1)));
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OriginalTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 2)));
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 3)));
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__InstanceBody0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 4)));
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 5)));
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__InstanceModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 6)));
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 7)));
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__InstanceStatus0_20;
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__InstanceStatus_21;
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Classes_23;
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__InstanceTable0_24;
#line 479 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__ClassArity_25;
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassId_26;
#line 479 "add_class.m"
    MR_Word hlds__make_hlds__add_class__InstanceBody_27;
#line 481 "add_class.m"
    MR_Integer hlds__make_hlds__add_class___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 8)));
#line 502 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_28_28;
#line 502 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv0_V_28_28;

#line 484 "add_class.m"
    {
#line 484 "add_class.m"
      hlds__status__item_mercury_status_to_instance_status_2_p_0(hlds__make_hlds__add_class__ItemMercuryStatus_9, &hlds__make_hlds__add_class__InstanceStatus0_20);
    }
#line 492 "add_class.m"
    if ((hlds__make_hlds__add_class__InstanceBody0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "add_class.m"
      {
#line 491 "add_class.m"
        hlds__status__instance_make_status_abstract_2_p_0(hlds__make_hlds__add_class__InstanceStatus0_20, &hlds__make_hlds__add_class__InstanceStatus_21);
      }
#line 492 "add_class.m"
    else
#line 494 "add_class.m"
      hlds__make_hlds__add_class__InstanceStatus_21 = hlds__make_hlds__add_class__InstanceStatus0_20;
#line 497 "add_class.m"
    {
#line 497 "add_class.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_class__Classes_23);
    }
#line 498 "add_class.m"
    {
#line 498 "add_class.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_class__InstanceTable0_24);
    }
#line 499 "add_class.m"
    {
#line 499 "add_class.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_class__Types_12, &hlds__make_hlds__add_class__ClassArity_25);
    }
#line 500 "add_class.m"
    {
#line 500 "add_class.m"
      hlds__make_hlds__add_class__ClassId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_26, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_11));
#line 500 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_26, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_25));
#line 500 "add_class.m"
    }
#line 501 "add_class.m"
    {
#line 501 "add_class.m"
      hlds__make_hlds__state_var__expand_bang_states_instance_body_2_p_0(hlds__make_hlds__add_class__InstanceBody0_15, &hlds__make_hlds__add_class__InstanceBody_27);
    }
#line 502 "add_class.m"
    {
#line 502 "add_class.m"
      hlds__make_hlds__add_class__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__make_hlds__add_class__Classes_23, ((MR_Box) (hlds__make_hlds__add_class__ClassId_26)), &hlds__make_hlds__add_class__conv0_V_28_28);
    }
#line 502 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 502 "add_class.m"
      {
#line 502 "add_class.m"
        hlds__make_hlds__add_class__V_28_28 = ((MR_Word) hlds__make_hlds__add_class__conv0_V_28_28);
#line 502 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 502 "add_class.m"
      }
#line 502 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 503 "add_class.m"
      {
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_49_49;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeInfo_50_50;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_17_80;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ProofMap_30;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewInstanceDefn_31;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__OldInstanceDefns_32;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstanceTable_33;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38_38;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_40_40;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewTypes_58;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewContext_61;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewInstanceBody_63;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewTVarSet_65;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__EquivInstanceDefns_75;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_76_76;
#line 503 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_77_77;
#line 508 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv1_OldInstanceDefns_32;
#line 527 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_57_57;
#line 527 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_59_59;
#line 527 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_60_60;
#line 527 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_62_62;
#line 527 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_64_64;
#line 527 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_66_66;
#line 530 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_67_67;
#line 591 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_37;

#line 504 "add_class.m"
        {
#line 504 "add_class.m"
          mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_class__ProofMap_30);
        }
#line 505 "add_class.m"
        {
#line 505 "add_class.m"
          hlds__make_hlds__add_class__NewInstanceDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 505 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 0) = ((MR_Box) (hlds__make_hlds__add_class__InstanceModuleName_17));
#line 505 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 1) = ((MR_Box) (hlds__make_hlds__add_class__Types_12));
#line 505 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 2) = ((MR_Box) (hlds__make_hlds__add_class__OriginalTypes_13));
#line 505 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 3) = ((MR_Box) (hlds__make_hlds__add_class__InstanceStatus_21));
#line 505 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 4) = ((MR_Box) (hlds__make_hlds__add_class__Context_18));
#line 505 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 5) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_14));
#line 505 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 6) = ((MR_Box) (hlds__make_hlds__add_class__InstanceBody_27));
#line 505 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 505 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_16));
#line 505 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 9) = ((MR_Box) (hlds__make_hlds__add_class__ProofMap_30));
#line 505 "add_class.m"
        }
#line 5250 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 5252 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeInfo_50_50 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[2];
#line 508 "add_class.m"
        {
#line 508 "add_class.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__add_class__TypeCtorInfo_49_49, hlds__make_hlds__add_class__TypeInfo_50_50, hlds__make_hlds__add_class__InstanceTable0_24, ((MR_Box) (hlds__make_hlds__add_class__ClassId_26)), &hlds__make_hlds__add_class__conv1_OldInstanceDefns_32);
        }
#line 508 "add_class.m"
        hlds__make_hlds__add_class__OldInstanceDefns_32 = ((MR_Word) hlds__make_hlds__add_class__conv1_OldInstanceDefns_32);
#line 527 "add_class.m"
        hlds__make_hlds__add_class__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 0)));
#line 527 "add_class.m"
        hlds__make_hlds__add_class__NewTypes_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 1)));
#line 527 "add_class.m"
        hlds__make_hlds__add_class__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 2)));
#line 527 "add_class.m"
        hlds__make_hlds__add_class__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 3)));
#line 527 "add_class.m"
        hlds__make_hlds__add_class__NewContext_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 4)));
#line 527 "add_class.m"
        hlds__make_hlds__add_class__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 5)));
#line 527 "add_class.m"
        hlds__make_hlds__add_class__NewInstanceBody_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 6)));
#line 527 "add_class.m"
        hlds__make_hlds__add_class__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 7)));
#line 527 "add_class.m"
        hlds__make_hlds__add_class__NewTVarSet_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 8)));
#line 527 "add_class.m"
        hlds__make_hlds__add_class__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 9)));
#line 530 "add_class.m"
        hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__NewInstanceBody_63)) == (MR_mktag((MR_Integer) 1)));
#line 530 "add_class.m"
        if (hlds__make_hlds__add_class__succeeded)
#line 530 "add_class.m"
          {
#line 530 "add_class.m"
            hlds__make_hlds__add_class__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewInstanceBody_63, (MR_Integer) 0)));
#line 532 "add_class.m"
            {
#line 532 "add_class.m"
              hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(hlds__make_hlds__add_class__ClassId_26, hlds__make_hlds__add_class__NewTypes_58, hlds__make_hlds__add_class__NewTVarSet_65, hlds__make_hlds__add_class__NewContext_61, hlds__make_hlds__add_class__OldInstanceDefns_32, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_36, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38_38);
            }
#line 530 "add_class.m"
          }
#line 530 "add_class.m"
        else
#line 529 "add_class.m"
          hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38_38 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_36;
#line 589 "add_class.m"
        {
#line 589 "add_class.m"
          hlds__make_hlds__add_class__V_76_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 589 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_76_76, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[1]));
#line 589 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_76_76, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_5_p_0_1));
#line 589 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_76_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 589 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_76_76, 3) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_31));
#line 589 "add_class.m"
        }
#line 5314 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_17_80 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 589 "add_class.m"
        {
#line 589 "add_class.m"
          mercury__list__filter_3_p_0(hlds__make_hlds__add_class__TypeCtorInfo_17_80, hlds__make_hlds__add_class__V_76_76, hlds__make_hlds__add_class__OldInstanceDefns_32, &hlds__make_hlds__add_class__EquivInstanceDefns_75);
        }
#line 591 "add_class.m"
        {
#line 591 "add_class.m"
          hlds__make_hlds__add_class__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 591 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_77_77, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_5[0]));
#line 591 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_5_p_0_2));
#line 591 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 591 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_77_77, 3) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_31));
#line 591 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_77_77, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassId_26));
#line 591 "add_class.m"
        }
#line 591 "add_class.m"
        {
#line 591 "add_class.m"
          mercury__list__foldl_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_17_80, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__V_77_77, hlds__make_hlds__add_class__EquivInstanceDefns_75, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38_38)), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_37);
        }
#line 591 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_37 = ((MR_Word) hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_37);
#line 513 "add_class.m"
        {
#line 513 "add_class.m"
          hlds__make_hlds__add_class__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_31));
#line 513 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__add_class__OldInstanceDefns_32));
#line 513 "add_class.m"
        }
#line 513 "add_class.m"
        {
#line 513 "add_class.m"
          mercury__map__det_update_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_49_49, hlds__make_hlds__add_class__TypeInfo_50_50, ((MR_Box) (hlds__make_hlds__add_class__ClassId_26)), ((MR_Box) (hlds__make_hlds__add_class__V_40_40)), hlds__make_hlds__add_class__InstanceTable0_24, &hlds__make_hlds__add_class__InstanceTable_33);
        }
#line 515 "add_class.m"
        {
#line 515 "add_class.m"
          hlds__hlds_module__module_info_set_instance_table_3_p_0(hlds__make_hlds__add_class__InstanceTable_33, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35);
        }
#line 503 "add_class.m"
      }
#line 502 "add_class.m"
    else
#line 517 "add_class.m"
      {
#line 517 "add_class.m"
        {
#line 517 "add_class.m"
          hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(hlds__make_hlds__add_class__ClassName_11, hlds__make_hlds__add_class__ClassArity_25, hlds__make_hlds__add_class__Context_18, (MR_String) "instance declaration", hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_36, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_37);
        }
#line 517 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_34;
#line 517 "add_class.m"
      }
#line 479 "add_class.m"
  }
#line 28 "add_class.m"
}

#line 165 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_3(
#line 165 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 165 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 165 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2)
#line 165 "add_class.m"
{
#line 165 "add_class.m"
  {
#line 165 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 165 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 165 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv3_LambdaHeadVar__2_91;

#line 165 "add_class.m"
    {
#line 165 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__165__1_2_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), &hlds__make_hlds__add_class__conv3_LambdaHeadVar__2_91);
    }
#line 165 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 165 "add_class.m"
      {
#line 165 "add_class.m"
        *hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv3_LambdaHeadVar__2_91));
#line 165 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 165 "add_class.m"
      }
#line 165 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 165 "add_class.m"
  }
#line 165 "add_class.m"
}

#line 165 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_2(
#line 165 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 165 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 165 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2)
#line 165 "add_class.m"
{
#line 165 "add_class.m"
  {
#line 165 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 165 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 165 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_LambdaHeadVar__2_91;

#line 165 "add_class.m"
    {
#line 165 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__165__1_2_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), &hlds__make_hlds__add_class__conv2_LambdaHeadVar__2_91);
    }
#line 165 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 165 "add_class.m"
      {
#line 165 "add_class.m"
        *hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv2_LambdaHeadVar__2_91));
#line 165 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 165 "add_class.m"
      }
#line 165 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 165 "add_class.m"
  }
#line 165 "add_class.m"
}

#line 94 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1(
#line 94 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 94 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
#line 94 "add_class.m"
{
#line 94 "add_class.m"
  {
#line 94 "add_class.m"
    MR_Box hlds__make_hlds__add_class__wrapper_arg_2;
#line 94 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 94 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_HeadVar__3_3;

#line 94 "add_class.m"
    {
#line 94 "add_class.m"
      hlds__make_hlds__add_class__conv0_HeadVar__3_3 = hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
#line 94 "add_class.m"
    hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv0_HeadVar__3_3));
#line 94 "add_class.m"
    return hlds__make_hlds__add_class__wrapper_arg_2;
#line 94 "add_class.m"
  }
#line 94 "add_class.m"
}

#line 24 "add_class.m"
void MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0(
#line 24 "add_class.m"
  MR_Word hlds__make_hlds__add_class__SectionItem_6,
#line 24 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63,
#line 24 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64,
#line 24 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65,
#line 24 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66)
#line 24 "add_class.m"
{
#line 76 "add_class.m"
  {
#line 76 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_104_104;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__SectionInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SectionItem_6, (MR_Integer) 0)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ItemTypeClassInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SectionItem_6, (MR_Integer) 1)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ItemMercuryStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SectionInfo_9, (MR_Integer) 0)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__NeedQual_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SectionInfo_9, (MR_Integer) 1)));
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeClassStatus0_13;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassName_14;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassParamVars_15;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Constraints_16;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__FunDeps_17;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Interface_18;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarSet_19;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_20;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Classes0_22;
#line 76 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__ClassArity_23;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassId_24;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeClassStatus1_25;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HLDSFunDeps_27;
#line 76 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_67_67;
#line 82 "add_class.m"
    MR_Integer hlds__make_hlds__add_class___SeqNum_21;
#line 5559 "hlds.make_hlds.add_class.c"
    MR_Word hlds__make_hlds__add_class__OldDefn_28;
#line 96 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv1_OldDefn_28;

#line 79 "add_class.m"
    {
#line 79 "add_class.m"
      hlds__status__item_mercury_status_to_typeclass_status_2_p_0(hlds__make_hlds__add_class__ItemMercuryStatus_11, &hlds__make_hlds__add_class__TypeClassStatus0_13);
    }
#line 82 "add_class.m"
    hlds__make_hlds__add_class__ClassName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 0)));
#line 82 "add_class.m"
    hlds__make_hlds__add_class__ClassParamVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 1)));
#line 82 "add_class.m"
    hlds__make_hlds__add_class__Constraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 2)));
#line 82 "add_class.m"
    hlds__make_hlds__add_class__FunDeps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 3)));
#line 82 "add_class.m"
    hlds__make_hlds__add_class__Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 4)));
#line 82 "add_class.m"
    hlds__make_hlds__add_class__VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 5)));
#line 82 "add_class.m"
    hlds__make_hlds__add_class__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 6)));
#line 82 "add_class.m"
    hlds__make_hlds__add_class___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 7)));
#line 84 "add_class.m"
    {
#line 84 "add_class.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63, &hlds__make_hlds__add_class__Classes0_22);
    }
#line 5590 "hlds.make_hlds.add_class.c"
    hlds__make_hlds__add_class__TypeInfo_104_104 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
#line 85 "add_class.m"
    {
#line 85 "add_class.m"
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_104_104, hlds__make_hlds__add_class__ClassParamVars_15, &hlds__make_hlds__add_class__ClassArity_23);
    }
#line 86 "add_class.m"
    {
#line 86 "add_class.m"
      hlds__make_hlds__add_class__ClassId_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 86 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_24, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_14));
#line 86 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_24, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_23));
#line 86 "add_class.m"
    }
#line 90 "add_class.m"
    if ((hlds__make_hlds__add_class__Interface_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 89 "add_class.m"
      {
#line 89 "add_class.m"
        hlds__status__typeclass_make_status_abstract_2_p_0(hlds__make_hlds__add_class__TypeClassStatus0_13, &hlds__make_hlds__add_class__TypeClassStatus1_25);
      }
#line 90 "add_class.m"
    else
#line 92 "add_class.m"
      hlds__make_hlds__add_class__TypeClassStatus1_25 = hlds__make_hlds__add_class__TypeClassStatus0_13;
#line 94 "add_class.m"
    {
#line 94 "add_class.m"
      hlds__make_hlds__add_class__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 94 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_67_67, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[0]));
#line 94 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1));
#line 94 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 94 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_67_67, 3) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_15));
#line 94 "add_class.m"
    }
#line 94 "add_class.m"
    {
#line 94 "add_class.m"
      hlds__make_hlds__add_class__HLDSFunDeps_27 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, hlds__make_hlds__add_class__V_67_67, hlds__make_hlds__add_class__FunDeps_17);
    }
#line 96 "add_class.m"
    {
#line 96 "add_class.m"
      hlds__make_hlds__add_class__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__make_hlds__add_class__Classes0_22, ((MR_Box) (hlds__make_hlds__add_class__ClassId_24)), &hlds__make_hlds__add_class__conv1_OldDefn_28);
    }
#line 96 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 96 "add_class.m"
      {
#line 96 "add_class.m"
        hlds__make_hlds__add_class__OldDefn_28 = ((MR_Word) hlds__make_hlds__add_class__conv1_OldDefn_28);
#line 96 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 96 "add_class.m"
      }
#line 5652 "hlds.make_hlds.add_class.c"
    if (hlds__make_hlds__add_class__succeeded)
#line 5654 "hlds.make_hlds.add_class.c"
      {
#line 5656 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldTypeClassStatus_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 0)));
#line 5658 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 1)));
#line 5660 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldFunDeps_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 2)));
#line 5662 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldClassParamVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 4)));
#line 5664 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldInterface_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 6)));
#line 5666 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldMethods_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 7)));
#line 5668 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldVarSet_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 8)));
#line 5670 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 9)));
#line 5672 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__TypeClassStatus_39;
#line 5674 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassMethods0_41;
#line 5676 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassInterface_42;
#line 98 "add_class.m"
        MR_Word hlds__make_hlds__add_class___OldAncestors_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 3)));
#line 98 "add_class.m"
        MR_Word hlds__make_hlds__add_class___OldKinds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 5)));

#line 103 "add_class.m"
        {
#line 103 "add_class.m"
          hlds__status__typeclass_combine_status_3_p_0(hlds__make_hlds__add_class__TypeClassStatus1_25, hlds__make_hlds__add_class__OldTypeClassStatus_29, &hlds__make_hlds__add_class__TypeClassStatus_39);
        }
#line 109 "add_class.m"
        if ((hlds__make_hlds__add_class__OldInterface_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 110 "add_class.m"
          {
#line 111 "add_class.m"
            hlds__make_hlds__add_class__ClassMethods0_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 112 "add_class.m"
            hlds__make_hlds__add_class__ClassInterface_42 = hlds__make_hlds__add_class__Interface_18;
#line 110 "add_class.m"
          }
#line 109 "add_class.m"
        else
#line 106 "add_class.m"
          {
#line 107 "add_class.m"
            hlds__make_hlds__add_class__ClassMethods0_41 = hlds__make_hlds__add_class__OldMethods_36;
#line 108 "add_class.m"
            hlds__make_hlds__add_class__ClassInterface_42 = hlds__make_hlds__add_class__OldInterface_35;
#line 106 "add_class.m"
          }
#line 116 "add_class.m"
        {
#line 116 "add_class.m"
          hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(hlds__make_hlds__add_class__OldClassParamVars_33, hlds__make_hlds__add_class__OldVarSet_37, hlds__make_hlds__add_class__OldConstraints_30, hlds__make_hlds__add_class__ClassParamVars_15, hlds__make_hlds__add_class__VarSet_19, hlds__make_hlds__add_class__Constraints_16);
        }
#line 116 "add_class.m"
        hlds__make_hlds__add_class__succeeded = !(hlds__make_hlds__add_class__succeeded);
#line 5715 "hlds.make_hlds.add_class.c"
        if (hlds__make_hlds__add_class__succeeded)
#line 5717 "hlds.make_hlds.add_class.c"
          {
#line 121 "add_class.m"
            {
#line 121 "add_class.m"
              hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassArity_23, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_20, hlds__make_hlds__add_class__OldContext_38, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[13]), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66);
            }
#line 156 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63;
#line 5726 "hlds.make_hlds.add_class.c"
          }
#line 5728 "hlds.make_hlds.add_class.c"
        else
#line 5730 "hlds.make_hlds.add_class.c"
          {
#line 125 "add_class.m"
            {
#line 125 "add_class.m"
              hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(hlds__make_hlds__add_class__OldFunDeps_31, hlds__make_hlds__add_class__HLDSFunDeps_27);
            }
#line 125 "add_class.m"
            hlds__make_hlds__add_class__succeeded = !(hlds__make_hlds__add_class__succeeded);
#line 5739 "hlds.make_hlds.add_class.c"
            if (hlds__make_hlds__add_class__succeeded)
#line 5741 "hlds.make_hlds.add_class.c"
              {
#line 129 "add_class.m"
                {
#line 129 "add_class.m"
                  hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassArity_23, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_20, hlds__make_hlds__add_class__OldContext_38, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[15]), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66);
                }
#line 156 "add_class.m"
                *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63;
#line 5750 "hlds.make_hlds.add_class.c"
              }
#line 5752 "hlds.make_hlds.add_class.c"
            else
#line 5754 "hlds.make_hlds.add_class.c"
              {
#line 5756 "hlds.make_hlds.add_class.c"
                MR_Word hlds__make_hlds__add_class__ErrorOrPrevDef_155;
#line 5758 "hlds.make_hlds.add_class.c"
                MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_75_156;
#line 133 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_45_45;
#line 134 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_46_46;

#line 133 "add_class.m"
                hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__Interface_18)) == (MR_mktag((MR_Integer) 1)));
#line 133 "add_class.m"
                if (hlds__make_hlds__add_class__succeeded)
#line 133 "add_class.m"
                  {
#line 133 "add_class.m"
                    hlds__make_hlds__add_class__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_18, (MR_Integer) 0)));
#line 134 "add_class.m"
                    hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__OldInterface_35)) == (MR_mktag((MR_Integer) 1)));
#line 134 "add_class.m"
                    if (hlds__make_hlds__add_class__succeeded)
#line 134 "add_class.m"
                      hlds__make_hlds__add_class__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OldInterface_35, (MR_Integer) 0)));
#line 133 "add_class.m"
                  }
#line 132 "add_class.m"
                if (hlds__make_hlds__add_class__succeeded)
#line 142 "add_class.m"
                  {
#line 136 "add_class.m"
                    MR_Word hlds__make_hlds__add_class__V_84_84 = (MR_Word) hlds__make_hlds__add_class__TypeClassStatus_39;

#line 136 "add_class.m"
                    hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__V_84_84 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 136 "add_class.m"
                    if (hlds__make_hlds__add_class__succeeded)
#line 136 "add_class.m"
                      hlds__make_hlds__add_class__STATE_VARIABLE_Specs_75_156 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65;
#line 136 "add_class.m"
                    else
#line 139 "add_class.m"
                      {
#line 140 "add_class.m"
                        {
#line 140 "add_class.m"
                          hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassArity_23, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_20, hlds__make_hlds__add_class__OldContext_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_75_156);
                        }
#line 139 "add_class.m"
                      }
#line 143 "add_class.m"
                    hlds__make_hlds__add_class__ErrorOrPrevDef_155 = (MR_Integer) 1;
#line 142 "add_class.m"
                  }
#line 132 "add_class.m"
                else
#line 145 "add_class.m"
                  {
#line 145 "add_class.m"
                    hlds__make_hlds__add_class__ErrorOrPrevDef_155 = (MR_Integer) 0;
#line 145 "add_class.m"
                    hlds__make_hlds__add_class__STATE_VARIABLE_Specs_75_156 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65;
#line 145 "add_class.m"
                  }
#line 157 "add_class.m"
#line 157 "add_class.m"
                switch (hlds__make_hlds__add_class__ErrorOrPrevDef_155) {
#line 157 "add_class.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 157 "add_class.m"
                  case (MR_Integer) 0:
#line 158 "add_class.m"
                    {
#line 158 "add_class.m"
                      MR_Word hlds__make_hlds__add_class__ClassMethods_56;
#line 158 "add_class.m"
                      MR_Word hlds__make_hlds__add_class__Kinds_58;
#line 158 "add_class.m"
                      MR_Word hlds__make_hlds__add_class__ClassDefn_59;
#line 158 "add_class.m"
                      MR_Word hlds__make_hlds__add_class__Classes_60;
#line 158 "add_class.m"
                      MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_88_88;

#line 176 "add_class.m"
                      if ((hlds__make_hlds__add_class__Interface_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "add_class.m"
                        {
#line 178 "add_class.m"
                          hlds__make_hlds__add_class__ClassMethods_56 = hlds__make_hlds__add_class__ClassMethods0_41;
#line 177 "add_class.m"
                          hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_88_88 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63;
#line 177 "add_class.m"
                          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_75_156;
#line 177 "add_class.m"
                        }
#line 176 "add_class.m"
                      else
#line 160 "add_class.m"
                        {
#line 160 "add_class.m"
                          MR_Word hlds__make_hlds__add_class__TypeCtorInfo_112_112;
#line 160 "add_class.m"
                          MR_Word hlds__make_hlds__add_class__Methods_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_18, (MR_Integer) 0)));
#line 160 "add_class.m"
                          MR_Word hlds__make_hlds__add_class__PredProcIds0_49;
#line 160 "add_class.m"
                          MR_Word hlds__make_hlds__add_class__PredProcIds1_55;

#line 161 "add_class.m"
                          {
#line 161 "add_class.m"
                            hlds__make_hlds__add_class__module_add_class_interface_10_p_0(hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassParamVars_15, hlds__make_hlds__add_class__TypeClassStatus_39, hlds__make_hlds__add_class__NeedQual_12, hlds__make_hlds__add_class__Methods_48, &hlds__make_hlds__add_class__PredProcIds0_49, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_88_88, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_75_156, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66);
                          }
#line 5869 "hlds.make_hlds.add_class.c"
                          hlds__make_hlds__add_class__TypeCtorInfo_112_112 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
#line 170 "add_class.m"
                          {
#line 170 "add_class.m"
                            mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], hlds__make_hlds__add_class__TypeCtorInfo_112_112, (MR_Word) &hlds__make_hlds__add_class_scalar_common_2[1], hlds__make_hlds__add_class__PredProcIds0_49, &hlds__make_hlds__add_class__PredProcIds1_55);
                          }
#line 175 "add_class.m"
                          {
#line 175 "add_class.m"
                            mercury__list__sort_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_112_112, hlds__make_hlds__add_class__PredProcIds1_55, &hlds__make_hlds__add_class__ClassMethods_56);
                          }
#line 160 "add_class.m"
                        }
#line 186 "add_class.m"
                      {
#line 186 "add_class.m"
                        hlds__make_hlds__add_class__Kinds_58 = mercury__map__init_0_f_0(hlds__make_hlds__add_class__TypeInfo_104_104, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
                      }
#line 187 "add_class.m"
                      {
#line 187 "add_class.m"
                        hlds__make_hlds__add_class__ClassDefn_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 187 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_59, 0) = ((MR_Box) (hlds__make_hlds__add_class__TypeClassStatus_39));
#line 187 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_59, 1) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_16));
#line 187 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_59, 2) = ((MR_Box) (hlds__make_hlds__add_class__HLDSFunDeps_27));
#line 187 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_59, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_59, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_15));
#line 187 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_59, 5) = ((MR_Box) (hlds__make_hlds__add_class__Kinds_58));
#line 187 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_59, 6) = ((MR_Box) (hlds__make_hlds__add_class__ClassInterface_42));
#line 187 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_59, 7) = ((MR_Box) (hlds__make_hlds__add_class__ClassMethods_56));
#line 187 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_59, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_19));
#line 187 "add_class.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_59, 9) = ((MR_Box) (hlds__make_hlds__add_class__Context_20));
#line 187 "add_class.m"
                      }
#line 190 "add_class.m"
                      {
#line 190 "add_class.m"
                        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, ((MR_Box) (hlds__make_hlds__add_class__ClassId_24)), ((MR_Box) (hlds__make_hlds__add_class__ClassDefn_59)), hlds__make_hlds__add_class__Classes0_22, &hlds__make_hlds__add_class__Classes_60);
                      }
#line 191 "add_class.m"
                      {
#line 191 "add_class.m"
                        hlds__hlds_module__module_info_set_class_table_3_p_0(hlds__make_hlds__add_class__Classes_60, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_88_88, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64);
                      }
#line 158 "add_class.m"
                    }
#line 157 "add_class.m"
                    break;
#line 157 "add_class.m"
                  case (MR_Integer) 1:
#line 156 "add_class.m"
                    {
#line 156 "add_class.m"
                      *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63;
#line 156 "add_class.m"
                      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_75_156;
#line 156 "add_class.m"
                    }
#line 157 "add_class.m"
                    break;
#line 157 "add_class.m"
                }
#line 5942 "hlds.make_hlds.add_class.c"
              }
#line 5944 "hlds.make_hlds.add_class.c"
          }
#line 5946 "hlds.make_hlds.add_class.c"
      }
#line 5948 "hlds.make_hlds.add_class.c"
    else
#line 5950 "hlds.make_hlds.add_class.c"
      {
#line 5952 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_114_151;
#line 5954 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Instances0_61;
#line 5956 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Instances_62;
#line 5958 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassMethods_140;
#line 5960 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Kinds_142;
#line 5962 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassDefn_143;
#line 5964 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Classes_144;
#line 5966 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_88_146;
#line 5968 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_93_147;

#line 176 "add_class.m"
        if ((hlds__make_hlds__add_class__Interface_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 177 "add_class.m"
          {
#line 178 "add_class.m"
            hlds__make_hlds__add_class__ClassMethods_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 177 "add_class.m"
            hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_88_146 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63;
#line 177 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65;
#line 177 "add_class.m"
          }
#line 176 "add_class.m"
        else
#line 160 "add_class.m"
          {
#line 160 "add_class.m"
            MR_Word hlds__make_hlds__add_class__TypeCtorInfo_112_124;
#line 160 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Methods_119 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_18, (MR_Integer) 0)));
#line 160 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredProcIds0_120;
#line 160 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredProcIds1_122;

#line 161 "add_class.m"
            {
#line 161 "add_class.m"
              hlds__make_hlds__add_class__module_add_class_interface_10_p_0(hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassParamVars_15, hlds__make_hlds__add_class__TypeClassStatus1_25, hlds__make_hlds__add_class__NeedQual_12, hlds__make_hlds__add_class__Methods_119, &hlds__make_hlds__add_class__PredProcIds0_120, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_88_146, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66);
            }
#line 6001 "hlds.make_hlds.add_class.c"
            hlds__make_hlds__add_class__TypeCtorInfo_112_124 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
#line 170 "add_class.m"
            {
#line 170 "add_class.m"
              mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], hlds__make_hlds__add_class__TypeCtorInfo_112_124, (MR_Word) &hlds__make_hlds__add_class_scalar_common_2[2], hlds__make_hlds__add_class__PredProcIds0_120, &hlds__make_hlds__add_class__PredProcIds1_122);
            }
#line 175 "add_class.m"
            {
#line 175 "add_class.m"
              mercury__list__sort_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_112_124, hlds__make_hlds__add_class__PredProcIds1_122, &hlds__make_hlds__add_class__ClassMethods_140);
            }
#line 160 "add_class.m"
          }
#line 186 "add_class.m"
        {
#line 186 "add_class.m"
          hlds__make_hlds__add_class__Kinds_142 = mercury__map__init_0_f_0(hlds__make_hlds__add_class__TypeInfo_104_104, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 187 "add_class.m"
        {
#line 187 "add_class.m"
          hlds__make_hlds__add_class__ClassDefn_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 187 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_143, 0) = ((MR_Box) (hlds__make_hlds__add_class__TypeClassStatus1_25));
#line 187 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_143, 1) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_16));
#line 187 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_143, 2) = ((MR_Box) (hlds__make_hlds__add_class__HLDSFunDeps_27));
#line 187 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_143, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_143, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_15));
#line 187 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_143, 5) = ((MR_Box) (hlds__make_hlds__add_class__Kinds_142));
#line 187 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_143, 6) = ((MR_Box) (hlds__make_hlds__add_class__Interface_18));
#line 187 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_143, 7) = ((MR_Box) (hlds__make_hlds__add_class__ClassMethods_140));
#line 187 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_143, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_19));
#line 187 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_143, 9) = ((MR_Box) (hlds__make_hlds__add_class__Context_20));
#line 187 "add_class.m"
        }
#line 6046 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_114_151 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 190 "add_class.m"
        {
#line 190 "add_class.m"
          mercury__map__set_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_114_151, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, ((MR_Box) (hlds__make_hlds__add_class__ClassId_24)), ((MR_Box) (hlds__make_hlds__add_class__ClassDefn_143)), hlds__make_hlds__add_class__Classes0_22, &hlds__make_hlds__add_class__Classes_144);
        }
#line 191 "add_class.m"
        {
#line 191 "add_class.m"
          hlds__hlds_module__module_info_set_class_table_3_p_0(hlds__make_hlds__add_class__Classes_144, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_88_146, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_93_147);
        }
#line 197 "add_class.m"
        {
#line 197 "add_class.m"
          hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_93_147, &hlds__make_hlds__add_class__Instances0_61);
        }
#line 198 "add_class.m"
        {
#line 198 "add_class.m"
          mercury__map__det_insert_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_114_151, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__add_class__ClassId_24)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__add_class__Instances0_61, &hlds__make_hlds__add_class__Instances_62);
        }
#line 199 "add_class.m"
        {
#line 199 "add_class.m"
          hlds__hlds_module__module_info_set_instance_table_3_p_0(hlds__make_hlds__add_class__Instances_62, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_93_147, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64);
        }
#line 6073 "hlds.make_hlds.add_class.c"
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
