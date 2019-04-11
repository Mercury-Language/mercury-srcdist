/*
** Automatically generated from `add_class.m'
** by the Mercury compiler,
** version rotd-2017-06-12
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
#include "hlds.hlds_dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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




static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__status__type_ctor_info_item_mercury_status_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__721__1_2_p_0(
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
  MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_26);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__377__1_2_p_0(
  MR_Word hlds__make_hlds__add_class__WithInst_29,
  MR_Word hlds__make_hlds__add_class__HeadVar__2_70);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__376__1_2_p_0(
  MR_Word hlds__make_hlds__add_class__WithType_28,
  MR_Word hlds__make_hlds__add_class__HeadVar__2_65);

static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__206__1_3_f_0(
  MR_Word hlds__make_hlds__add_class__TVars_4,
  MR_Word hlds__make_hlds__add_class__LambdaHeadVar__1_11,
  MR_Word hlds__make_hlds__add_class__LambdaHeadVar__2_12);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__162__1_2_p_0(
  MR_Word hlds__make_hlds__add_class__HeadVar__1_103,
  MR_Word * hlds__make_hlds__add_class__HeadVar__2_104);

static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
  MR_Word hlds__make_hlds__add_class__MethodName_7,
  MR_Integer hlds__make_hlds__add_class__MethodArity_8,
  MR_Word hlds__make_hlds__add_class__PredOrFunc_9,
  MR_Word hlds__make_hlds__add_class__Context_10,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
  MR_Word hlds__make_hlds__add_class__ClassName_7,
  MR_Integer hlds__make_hlds__add_class__ClassArity_8,
  MR_Word hlds__make_hlds__add_class__Context_9,
  MR_String hlds__make_hlds__add_class__Description_10,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16);

static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
  MR_Word hlds__make_hlds__add_class__PredInfo_4,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg);

static void MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
  MR_Word hlds__make_hlds__add_class__Context_16,
  MR_Word hlds__make_hlds__add_class__InstanceStatus_17,
  MR_Word hlds__make_hlds__add_class__InstanceClause_18,
  MR_Word hlds__make_hlds__add_class__TVarSet0_19,
  MR_Word * hlds__make_hlds__add_class__TVarSet_20,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_49,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_50,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_51,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_52,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_53,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_3,
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_4);

static void MR_CALL 
hlds__make_hlds__add_class__check_instance_constraints_5_p_0(
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_6,
  MR_Word hlds__make_hlds__add_class__ClassId_7,
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_8,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26);

static void MR_CALL 
hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(
  MR_Word hlds__make_hlds__add_class__ClassId_1,
  MR_Word hlds__make_hlds__add_class__NewTypes_2,
  MR_Word hlds__make_hlds__add_class__NewTVarSet_3,
  MR_Word hlds__make_hlds__add_class__NewContext_4,
  MR_Word hlds__make_hlds__add_class__HeadVar__5_5,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7);

static void MR_CALL 
hlds__make_hlds__add_class__check_method_modes_7_p_0(
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0_2(
  MR_Box hlds__make_hlds__add_class__closure_arg);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg);

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0(
  MR_Word hlds__make_hlds__add_class__ClassName_13,
  MR_Word hlds__make_hlds__add_class__ClassParamVars_14,
  MR_Integer hlds__make_hlds__add_class__ItemNumber_15,
  MR_Word hlds__make_hlds__add_class__MaybeItemMercuryStatus_16,
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_17,
  MR_Word hlds__make_hlds__add_class__NeedQual_18,
  MR_Word hlds__make_hlds__add_class__Method_19,
  MR_Word * hlds__make_hlds__add_class__MaybePredIdProcId_20,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_52,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_53,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_54);

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_methods_11_p_0(
  MR_Word hlds__make_hlds__add_class__ClassName_1,
  MR_Word hlds__make_hlds__add_class__ClassParamVars_2,
  MR_Word hlds__make_hlds__add_class__MaybeItemMercuryStatus_3,
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_4,
  MR_Word hlds__make_hlds__add_class__NeedQual_5,
  MR_Word hlds__make_hlds__add_class__HeadVar__6_6,
  MR_Word * hlds__make_hlds__add_class__HeadVar__7_7,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_9,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_10,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_11);

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_13_p_0(
  MR_Word hlds__make_hlds__add_class__ClassName_14,
  MR_Word hlds__make_hlds__add_class__ClassParamVars_15,
  MR_Integer hlds__make_hlds__add_class__ItemNumber_16,
  MR_Word hlds__make_hlds__add_class__MaybeItemMercuryStatus_17,
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_18,
  MR_Word hlds__make_hlds__add_class__NeedQual_19,
  MR_Word hlds__make_hlds__add_class__Method_20,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_55,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_56,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_58,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_59,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_60);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(
  MR_Word hlds__make_hlds__add_class__Method_2);

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_2(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0(
  MR_Word hlds__make_hlds__add_class__ClassName_12,
  MR_Word hlds__make_hlds__add_class__ClassParamVars_13,
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_14,
  MR_Word hlds__make_hlds__add_class__MaybeItemMercuryStatus_15,
  MR_Word hlds__make_hlds__add_class__NeedQual_16,
  MR_Word hlds__make_hlds__add_class__Methods_17,
  MR_Word * hlds__make_hlds__add_class__PredProcIds_18,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_26,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_27,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_28);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
  MR_Word hlds__make_hlds__add_class__OldFunDeps0_3,
  MR_Word hlds__make_hlds__add_class__FunDeps0_4);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__constraints_are_identical_6_p_0(
  MR_Word hlds__make_hlds__add_class__OldVars0_7,
  MR_Word hlds__make_hlds__add_class__OldVarSet_8,
  MR_Word hlds__make_hlds__add_class__OldConstraints0_9,
  MR_Word hlds__make_hlds__add_class__Vars_10,
  MR_Word hlds__make_hlds__add_class__VarSet_11,
  MR_Word hlds__make_hlds__add_class__Constraints_12);

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
  MR_Word hlds__make_hlds__add_class__TypeInfo_for_T_17,
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
  MR_Integer hlds__make_hlds__add_class__N_2,
  MR_Box hlds__make_hlds__add_class__X_3);

static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2);

static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
  MR_Word hlds__make_hlds__add_class__TVars_4,
  MR_Word hlds__make_hlds__add_class__HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_8,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_9,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_10,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_11);

static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_2(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_3(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2);

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_2(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2);

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);


static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[47][2];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[1][6];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[5][5];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[3][3];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][17];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[1][7];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][16];

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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
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
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[1][6] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[0])),
    ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_8[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_11_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__status__type_ctor_info_item_mercury_status_0)),
    ((MR_Box) (&hlds__status__hlds__status__type_ctor_info_typeclass_status_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
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



static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_hlds__status__type_ctor_info_item_mercury_status_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_mercury_status_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__maybe__ti_maybe_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__721__1_2_p_0(
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
  MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_26)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__PredOrFunc_15 == hlds__make_hlds__add_class__ClausePredOrFunc_26);

    return hlds__make_hlds__add_class__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__377__1_2_p_0(
  MR_Word hlds__make_hlds__add_class__WithInst_29,
  MR_Word hlds__make_hlds__add_class__HeadVar__2_70)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;

    {
      hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[9], ((MR_Box) (hlds__make_hlds__add_class__WithInst_29)), ((MR_Box) (hlds__make_hlds__add_class__HeadVar__2_70)));
    }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__376__1_2_p_0(
  MR_Word hlds__make_hlds__add_class__WithType_28,
  MR_Word hlds__make_hlds__add_class__HeadVar__2_65)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;

    {
      hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[8], ((MR_Box) (hlds__make_hlds__add_class__WithType_28)), ((MR_Box) (hlds__make_hlds__add_class__HeadVar__2_65)));
    }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__206__1_3_f_0(
  MR_Word hlds__make_hlds__add_class__TVars_4,
  MR_Word hlds__make_hlds__add_class__LambdaHeadVar__1_11,
  MR_Word hlds__make_hlds__add_class__LambdaHeadVar__2_12)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__LambdaHeadVar__3_13;
    MR_Integer hlds__make_hlds__add_class__N_9;

    {
      hlds__make_hlds__add_class__N_9 = hlds__make_hlds__add_class__get_list_index_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], hlds__make_hlds__add_class__TVars_4, (MR_Integer) 1, ((MR_Box) (hlds__make_hlds__add_class__LambdaHeadVar__1_11)));
    }
    {
      hlds__make_hlds__add_class__LambdaHeadVar__3_13 = mercury__set__insert_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_class__LambdaHeadVar__2_12, ((MR_Box) (hlds__make_hlds__add_class__N_9)));
    }
    return hlds__make_hlds__add_class__LambdaHeadVar__3_13;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__162__1_2_p_0(
  MR_Word hlds__make_hlds__add_class__HeadVar__1_103,
  MR_Word * hlds__make_hlds__add_class__HeadVar__2_104)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Box hlds__make_hlds__add_class__conv0_HeadVar__2_104;

    {
      hlds__make_hlds__add_class__succeeded = mercury__maybe__maybe_is_yes_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, hlds__make_hlds__add_class__HeadVar__1_103, &hlds__make_hlds__add_class__conv0_HeadVar__2_104);
    }
    if (hlds__make_hlds__add_class__succeeded)
      {
        *hlds__make_hlds__add_class__HeadVar__2_104 = ((MR_Word) hlds__make_hlds__add_class__conv0_HeadVar__2_104);
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
      }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
  MR_Word hlds__make_hlds__add_class__MethodName_7,
  MR_Integer hlds__make_hlds__add_class__MethodArity_8,
  MR_Word hlds__make_hlds__add_class__PredOrFunc_9,
  MR_Word hlds__make_hlds__add_class__Context_10,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__Pieces_12;
    MR_Word hlds__make_hlds__add_class__Msg_13;
    MR_Word hlds__make_hlds__add_class__Spec_14;
    MR_Word hlds__make_hlds__add_class__Var_19;
    MR_Word hlds__make_hlds__add_class__Var_20;
    MR_Word hlds__make_hlds__add_class__Var_21;
    MR_Word hlds__make_hlds__add_class__Var_22;
    MR_Word hlds__make_hlds__add_class__Var_25;
    MR_Word hlds__make_hlds__add_class__Var_26;
    MR_Word hlds__make_hlds__add_class__Var_33;
    MR_Word hlds__make_hlds__add_class__Var_34;
    MR_Word hlds__make_hlds__add_class__Var_38;

    {
      hlds__make_hlds__add_class__Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_21, 0) = ((MR_Box) (hlds__make_hlds__add_class__MethodName_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__MethodArity_8));
    }
    {
      hlds__make_hlds__add_class__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_21));
    }
    {
      hlds__make_hlds__add_class__Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_26, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_9));
    }
    {
      hlds__make_hlds__add_class__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_25, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_26));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[31])));
    }
    {
      hlds__make_hlds__add_class__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[46])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_25));
    }
    {
      hlds__make_hlds__add_class__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_19, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_22));
    }
    {
      hlds__make_hlds__add_class__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[45])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_19));
    }
    {
      hlds__make_hlds__add_class__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_34, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_12));
    }
    {
      hlds__make_hlds__add_class__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_34));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_class__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_33));
    }
    {
      hlds__make_hlds__add_class__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_38, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_class__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_class__Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
  MR_Word hlds__make_hlds__add_class__ClassName_7,
  MR_Integer hlds__make_hlds__add_class__ClassArity_8,
  MR_Word hlds__make_hlds__add_class__Context_9,
  MR_String hlds__make_hlds__add_class__Description_10,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__Pieces_12;
    MR_Word hlds__make_hlds__add_class__Msg_13;
    MR_Word hlds__make_hlds__add_class__Spec_14;
    MR_Word hlds__make_hlds__add_class__Var_19;
    MR_Word hlds__make_hlds__add_class__Var_20;
    MR_Word hlds__make_hlds__add_class__Var_21;
    MR_Word hlds__make_hlds__add_class__Var_24;
    MR_Word hlds__make_hlds__add_class__Var_25;
    MR_Word hlds__make_hlds__add_class__Var_26;
    MR_Word hlds__make_hlds__add_class__Var_39;
    MR_Word hlds__make_hlds__add_class__Var_40;
    MR_Word hlds__make_hlds__add_class__Var_44;

    {
      hlds__make_hlds__add_class__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__Description_10));
    }
    {
      hlds__make_hlds__add_class__Var_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_26, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_26, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_8));
    }
    {
      hlds__make_hlds__add_class__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_25, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_26));
    }
    {
      hlds__make_hlds__add_class__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_24, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_25));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[29])));
    }
    {
      hlds__make_hlds__add_class__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[44])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_24));
    }
    {
      hlds__make_hlds__add_class__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_19, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_21));
    }
    {
      hlds__make_hlds__add_class__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[43])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_19));
    }
    {
      hlds__make_hlds__add_class__Var_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_12));
    }
    {
      hlds__make_hlds__add_class__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_39, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_40));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_class__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_39));
    }
    {
      hlds__make_hlds__add_class__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_44, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_class__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_class__Var_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_14));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
  MR_Word hlds__make_hlds__add_class__PredInfo_4,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__Context_6;
    MR_Word hlds__make_hlds__add_class__ModuleName_7;
    MR_String hlds__make_hlds__add_class__PredName_8;
    MR_Integer hlds__make_hlds__add_class__Arity_9;
    MR_Word hlds__make_hlds__add_class__Pieces_10;
    MR_Word hlds__make_hlds__add_class__Msg_11;
    MR_Word hlds__make_hlds__add_class__Spec_12;
    MR_Word hlds__make_hlds__add_class__Var_17;
    MR_Word hlds__make_hlds__add_class__Var_20;
    MR_Word hlds__make_hlds__add_class__Var_21;
    MR_Word hlds__make_hlds__add_class__Var_22;
    MR_Word hlds__make_hlds__add_class__Var_23;
    MR_Word hlds__make_hlds__add_class__Var_30;
    MR_Word hlds__make_hlds__add_class__Var_31;
    MR_Word hlds__make_hlds__add_class__Var_35;

    {
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_class__PredInfo_4, &hlds__make_hlds__add_class__Context_6);
    }
    {
      hlds__make_hlds__add_class__ModuleName_7 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
    {
      hlds__make_hlds__add_class__PredName_8 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
    {
      hlds__make_hlds__add_class__Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
    {
      hlds__make_hlds__add_class__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_23, 0) = ((MR_Box) (hlds__make_hlds__add_class__ModuleName_7));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_23, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredName_8));
    }
    {
      hlds__make_hlds__add_class__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_22, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_23));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_22, 1) = ((MR_Box) (hlds__make_hlds__add_class__Arity_9));
    }
    {
      hlds__make_hlds__add_class__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_22));
    }
    {
      hlds__make_hlds__add_class__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_20, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_21));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[19])));
    }
    {
      hlds__make_hlds__add_class__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[42])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_17, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_20));
    }
    {
      hlds__make_hlds__add_class__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_17));
    }
    {
      hlds__make_hlds__add_class__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_31, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_10));
    }
    {
      hlds__make_hlds__add_class__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_30, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_31));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_class__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_30));
    }
    {
      hlds__make_hlds__add_class__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_35, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_11));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__add_class__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_class__Var_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

    {
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__721__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
  MR_Word hlds__make_hlds__add_class__Context_16,
  MR_Word hlds__make_hlds__add_class__InstanceStatus_17,
  MR_Word hlds__make_hlds__add_class__InstanceClause_18,
  MR_Word hlds__make_hlds__add_class__TVarSet0_19,
  MR_Word * hlds__make_hlds__add_class__TVarSet_20,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_48,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_49,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_50,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_51,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_52,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_53,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_class__HeadTerms0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_class__CVarSet_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_class__MaybeBodyGoal_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_class__Var_56;
    MR_Word hlds__make_hlds__add_class___Origin_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_class___ClauseContext_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 6)));
    MR_Integer hlds__make_hlds__add_class___SeqNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_class__StateVar_33;
    MR_Word hlds__make_hlds__add_class__StateVarContext_34;

    {
      hlds__make_hlds__add_class__Var_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_56, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[4]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_56, 1) = ((MR_Box) (hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_56, 3) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_15));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_56, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClausePredOrFunc_26));
    }
    {
      mercury__require__expect_4_p_0(hlds__make_hlds__add_class__Var_56, (MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.produce_instance_method_clause\'/14", (MR_String) "PredOrFunc mismatch");
    }
    {
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_4_p_0(hlds__make_hlds__add_class__PredOrFunc_15, hlds__make_hlds__add_class__HeadTerms0_27, &hlds__make_hlds__add_class__StateVar_33, &hlds__make_hlds__add_class__StateVarContext_34);
    }
    if (hlds__make_hlds__add_class__succeeded)
      {
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_60_60;
        MR_Word hlds__make_hlds__add_class__Var_62;

        *hlds__make_hlds__add_class__TVarSet_20 = hlds__make_hlds__add_class__TVarSet0_19;
        {
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__add_class__StateVarContext_34, hlds__make_hlds__add_class__CVarSet_29, hlds__make_hlds__add_class__StateVar_33, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_60_60);
        }
        {
          hlds__make_hlds__add_class__Var_62 = parse_tree__maybe_error__get_any_errors1_1_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, hlds__make_hlds__add_class__MaybeBodyGoal_30);
        }
        {
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_class__Var_62, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_60_60);
        }
        *hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_53 = hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_52;
        *hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_51 = hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_50;
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_48;
      }
    else
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__MaybeBodyGoal_30)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__add_class__BodyGoalSpecs_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MaybeBodyGoal_30, (MR_Integer) 0)));

        *hlds__make_hlds__add_class__TVarSet_20 = hlds__make_hlds__add_class__TVarSet0_19;
        {
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_class__BodyGoalSpecs_35, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54);
        }
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_49 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_48;
        *hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_51 = hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_50;
        *hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_53 = hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_52;
      }
    else
      {
        MR_Word hlds__make_hlds__add_class__BodyGoal_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybeBodyGoal_30, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_class__HeadTerms_37;
        MR_Integer hlds__make_hlds__add_class__PredArity_38;
        MR_Integer hlds__make_hlds__add_class__Arity_39;
        MR_Word hlds__make_hlds__add_class__OldImportStatus_42;
        MR_Word hlds__make_hlds__add_class__PredStatus_43;
        MR_Word hlds__make_hlds__add_class__Goal_44;
        MR_Word hlds__make_hlds__add_class__VarSet_45;
        MR_Word hlds__make_hlds__add_class__Warnings_46;
        MR_Word hlds__make_hlds__add_class__SimpleCallId_47;
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_68_68;
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_69_69;

        {
          hlds__make_hlds__state_var__expand_bang_state_pairs_in_terms_2_p_0(hlds__make_hlds__add_class__HeadTerms0_27, &hlds__make_hlds__add_class__HeadTerms_37);
        }
        {
          hlds__make_hlds__add_class__PredArity_38 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[10], hlds__make_hlds__add_class__HeadTerms_37);
        }
        {
          parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_class__PredOrFunc_15, &hlds__make_hlds__add_class__Arity_39, hlds__make_hlds__add_class__PredArity_38);
        }
        hlds__make_hlds__add_class__OldImportStatus_42 = (MR_Word) hlds__make_hlds__add_class__InstanceStatus_17;
        hlds__make_hlds__add_class__PredStatus_43 = (MR_Word) hlds__make_hlds__add_class__OldImportStatus_42;
        {
          hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__CVarSet_29, hlds__make_hlds__add_class__TVarSet0_19, hlds__make_hlds__add_class__HeadTerms_37, hlds__make_hlds__add_class__BodyGoal_36, hlds__make_hlds__add_class__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__PredStatus_43, hlds__make_hlds__add_class__PredOrFunc_15, hlds__make_hlds__add_class__Arity_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), &hlds__make_hlds__add_class__Goal_44, &hlds__make_hlds__add_class__VarSet_45, hlds__make_hlds__add_class__TVarSet_20, &hlds__make_hlds__add_class__Warnings_46, hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_52, hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_53, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_48, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_50, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_51, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_68_68);
        }
        {
          hlds__make_hlds__add_class__SimpleCallId_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_47, 0) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_15));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_47, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredName_25));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_47, 2) = ((MR_Box) (hlds__make_hlds__add_class__Arity_39));
        }
        {
          hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(*hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_49, hlds__make_hlds__add_class__SimpleCallId_47, hlds__make_hlds__add_class__VarSet_45, hlds__make_hlds__add_class__Goal_44, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_68_68, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_69_69);
        }
        {
          hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(hlds__make_hlds__add_class__SimpleCallId_47, hlds__make_hlds__add_class__VarSet_45, hlds__make_hlds__add_class__Warnings_46, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_69_69, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55);
        }
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_3,
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_4)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__TypeInfo_53_53;
    MR_Word hlds__make_hlds__add_class__TypeInfo_55_55;
    MR_Word hlds__make_hlds__add_class__TypesA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_class__TypesB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_class__VarSetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 8)));
    MR_Word hlds__make_hlds__add_class__VarSetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 8)));
    MR_Word hlds__make_hlds__add_class__RenameApart_10;
    MR_Word hlds__make_hlds__add_class__TypesB1_11;
    MR_Word hlds__make_hlds__add_class__TVarsA_12;
    MR_Word hlds__make_hlds__add_class__TVarsB_13;
    MR_Integer hlds__make_hlds__add_class__NumTVars_14;
    MR_Word hlds__make_hlds__add_class__Renaming_15;
    MR_Word hlds__make_hlds__add_class__TypesB_16;
    MR_Integer hlds__make_hlds__add_class__Var_54;
    MR_Word hlds__make_hlds__add_class__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_class__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_class__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_class__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_class__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_class__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_class__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_class__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 9)));
    MR_Word hlds__make_hlds__add_class__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_class__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_class__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_class__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_class__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_class__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_class__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_class__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 9)));
    MR_Word hlds__make_hlds__add_class___NewVarSet_9;

    {
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__VarSetA_7, hlds__make_hlds__add_class__VarSetB_8, &hlds__make_hlds__add_class___NewVarSet_9, &hlds__make_hlds__add_class__RenameApart_10);
    }
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__RenameApart_10, hlds__make_hlds__add_class__TypesB0_6, &hlds__make_hlds__add_class__TypesB1_11);
    }
    {
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__TypesA_5, &hlds__make_hlds__add_class__TVarsA_12);
    }
    {
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__TypesB1_11, &hlds__make_hlds__add_class__TVarsB_13);
    }
    hlds__make_hlds__add_class__TypeInfo_53_53 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
    {
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsA_12, &hlds__make_hlds__add_class__NumTVars_14);
    }
    {
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsB_13, &hlds__make_hlds__add_class__Var_54);
    }
    hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__NumTVars_14 == hlds__make_hlds__add_class__Var_54);
    if (hlds__make_hlds__add_class__succeeded)
      {
        {
          mercury__map__from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsB_13, hlds__make_hlds__add_class__TVarsA_12, &hlds__make_hlds__add_class__Renaming_15);
        }
        {
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__Renaming_15, hlds__make_hlds__add_class__TypesB1_11, &hlds__make_hlds__add_class__TypesB_16);
        }
        hlds__make_hlds__add_class__TypeInfo_55_55 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[23];
        {
          hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_class__TypeInfo_55_55, ((MR_Box) (hlds__make_hlds__add_class__TypesA_5)), ((MR_Box) (hlds__make_hlds__add_class__TypesB_16)));
        }
      }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__check_instance_constraints_5_p_0(
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_6,
  MR_Word hlds__make_hlds__add_class__ClassId_7,
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_8,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__TVarsA_10;
    MR_Word hlds__make_hlds__add_class__TVarSetA_11;
    MR_Word hlds__make_hlds__add_class__ConstraintsA_12;
    MR_Word hlds__make_hlds__add_class__TVarsB_13;
    MR_Word hlds__make_hlds__add_class__TVarSetB_14;
    MR_Word hlds__make_hlds__add_class__ConstraintsB_15;
    MR_Word hlds__make_hlds__add_class__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_class__Var_28;
    MR_Word hlds__make_hlds__add_class__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_class__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_class__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_class__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_class__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_class__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_class__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_class__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
    MR_Word hlds__make_hlds__add_class__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
    MR_Word hlds__make_hlds__add_class__Var_64;
    MR_Word hlds__make_hlds__add_class__Var_65;
    MR_Word hlds__make_hlds__add_class__Var_66;
    MR_Word hlds__make_hlds__add_class__Var_67;
    MR_Word hlds__make_hlds__add_class__Var_68;
    MR_Word hlds__make_hlds__add_class__Var_70;
    MR_Word hlds__make_hlds__add_class__Var_71;
    MR_Word hlds__make_hlds__add_class__Var_72;
    MR_Word hlds__make_hlds__add_class__Var_82;
    MR_Word hlds__make_hlds__add_class__Var_83;
    MR_Word hlds__make_hlds__add_class__Var_84;
    MR_Word hlds__make_hlds__add_class__Var_85;
    MR_Word hlds__make_hlds__add_class__Var_86;
    MR_Word hlds__make_hlds__add_class__Var_87;
    MR_Word hlds__make_hlds__add_class__Var_88;
    MR_Word hlds__make_hlds__add_class__Var_89;
    MR_Word hlds__make_hlds__add_class__Var_90;
    MR_Word hlds__make_hlds__add_class__Var_91;
    MR_Word hlds__make_hlds__add_class__Var_92;
    MR_Word hlds__make_hlds__add_class__Var_93;
    MR_Word hlds__make_hlds__add_class__Var_94;
    MR_Word hlds__make_hlds__add_class__Var_95;
    MR_Word hlds__make_hlds__add_class__Var_97;
    MR_Word hlds__make_hlds__add_class__Var_98;
    MR_Word hlds__make_hlds__add_class__Var_99;

    {
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__Var_27, &hlds__make_hlds__add_class__TVarsA_10);
    }
    hlds__make_hlds__add_class__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
    hlds__make_hlds__add_class__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
    hlds__make_hlds__add_class__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
    hlds__make_hlds__add_class__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
    hlds__make_hlds__add_class__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
    hlds__make_hlds__add_class__ConstraintsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
    hlds__make_hlds__add_class__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
    hlds__make_hlds__add_class__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
    hlds__make_hlds__add_class__TVarSetA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
    hlds__make_hlds__add_class__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
    hlds__make_hlds__add_class__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
    hlds__make_hlds__add_class__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
    hlds__make_hlds__add_class__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
    hlds__make_hlds__add_class__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
    hlds__make_hlds__add_class__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
    hlds__make_hlds__add_class__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
    hlds__make_hlds__add_class__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
    hlds__make_hlds__add_class__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
    hlds__make_hlds__add_class__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
    hlds__make_hlds__add_class__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
    {
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__Var_28, &hlds__make_hlds__add_class__TVarsB_13);
    }
    hlds__make_hlds__add_class__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
    hlds__make_hlds__add_class__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
    hlds__make_hlds__add_class__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
    hlds__make_hlds__add_class__Var_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
    hlds__make_hlds__add_class__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
    hlds__make_hlds__add_class__ConstraintsB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
    hlds__make_hlds__add_class__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
    hlds__make_hlds__add_class__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
    hlds__make_hlds__add_class__TVarSetB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
    hlds__make_hlds__add_class__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
    {
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(hlds__make_hlds__add_class__TVarsA_10, hlds__make_hlds__add_class__TVarSetA_11, hlds__make_hlds__add_class__ConstraintsA_12, hlds__make_hlds__add_class__TVarsB_13, hlds__make_hlds__add_class__TVarSetB_14, hlds__make_hlds__add_class__ConstraintsB_15);
    }
    if (hlds__make_hlds__add_class__succeeded)
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25;
    else
      {
        MR_Word hlds__make_hlds__add_class__ClassName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_7, (MR_Integer) 0)));
        MR_Integer hlds__make_hlds__add_class__ClassArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_7, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_class__ContextA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__add_class__PiecesA_19;
        MR_Word hlds__make_hlds__add_class__MsgA_20;
        MR_Word hlds__make_hlds__add_class__ContextB_21;
        MR_Word hlds__make_hlds__add_class__MsgB_23;
        MR_Word hlds__make_hlds__add_class__Spec_24;
        MR_Word hlds__make_hlds__add_class__Var_31;
        MR_Word hlds__make_hlds__add_class__Var_32;
        MR_Word hlds__make_hlds__add_class__Var_33;
        MR_Word hlds__make_hlds__add_class__Var_40;
        MR_Word hlds__make_hlds__add_class__Var_41;
        MR_Word hlds__make_hlds__add_class__Var_51;
        MR_Word hlds__make_hlds__add_class__Var_52;
        MR_Word hlds__make_hlds__add_class__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_class__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_class__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__add_class__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__add_class__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__add_class__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__add_class__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
        MR_Word hlds__make_hlds__add_class__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
        MR_Word hlds__make_hlds__add_class__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
        MR_Word hlds__make_hlds__add_class__Var_118;
        MR_Word hlds__make_hlds__add_class__Var_119;
        MR_Word hlds__make_hlds__add_class__Var_120;
        MR_Word hlds__make_hlds__add_class__Var_121;
        MR_Word hlds__make_hlds__add_class__Var_122;
        MR_Word hlds__make_hlds__add_class__Var_123;
        MR_Word hlds__make_hlds__add_class__Var_124;
        MR_Word hlds__make_hlds__add_class__Var_125;
        MR_Word hlds__make_hlds__add_class__Var_126;

        {
          hlds__make_hlds__add_class__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_16));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_17));
        }
        {
          hlds__make_hlds__add_class__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_32, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_33));
        }
        {
          hlds__make_hlds__add_class__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_31, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_32));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[22])));
        }
        {
          hlds__make_hlds__add_class__PiecesA_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PiecesA_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[37])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PiecesA_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_31));
        }
        {
          hlds__make_hlds__add_class__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_41, 0) = ((MR_Box) (hlds__make_hlds__add_class__PiecesA_19));
        }
        {
          hlds__make_hlds__add_class__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_41));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_class__MsgA_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgA_20, 0) = ((MR_Box) (hlds__make_hlds__add_class__ContextA_18));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgA_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_40));
        }
        hlds__make_hlds__add_class__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
        hlds__make_hlds__add_class__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
        hlds__make_hlds__add_class__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
        hlds__make_hlds__add_class__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
        hlds__make_hlds__add_class__ContextB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
        hlds__make_hlds__add_class__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
        hlds__make_hlds__add_class__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
        hlds__make_hlds__add_class__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
        hlds__make_hlds__add_class__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
        hlds__make_hlds__add_class__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
        {
          hlds__make_hlds__add_class__MsgB_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgB_23, 0) = ((MR_Box) (hlds__make_hlds__add_class__ContextB_21));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgB_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[40])));
        }
        {
          hlds__make_hlds__add_class__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_52, 0) = ((MR_Box) (hlds__make_hlds__add_class__MsgB_23));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_class__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_51, 0) = ((MR_Box) (hlds__make_hlds__add_class__MsgA_20));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_51, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_52));
        }
        {
          hlds__make_hlds__add_class__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 2) = ((MR_Box) (hlds__make_hlds__add_class__Var_51));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(
  MR_Word hlds__make_hlds__add_class__ClassId_1,
  MR_Word hlds__make_hlds__add_class__NewTypes_2,
  MR_Word hlds__make_hlds__add_class__NewTVarSet_3,
  MR_Word hlds__make_hlds__add_class__NewContext_4,
  MR_Word hlds__make_hlds__add_class__HeadVar__5_5,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_class__succeeded;

        if ((hlds__make_hlds__add_class__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
        else
          {
            MR_Word hlds__make_hlds__add_class__OtherInstanceDefn_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_class__OtherInstanceDefns_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__5_5, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_class__OtherTypes_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_class__OtherContext_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 4)));
            MR_Word hlds__make_hlds__add_class__OtherInstanceBody_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 6)));
            MR_Word hlds__make_hlds__add_class__OtherTVarSet_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 8)));
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77;
            MR_Word hlds__make_hlds__add_class__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_class__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__add_class__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 3)));
            MR_Word hlds__make_hlds__add_class__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 5)));
            MR_Word hlds__make_hlds__add_class__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 7)));
            MR_Word hlds__make_hlds__add_class__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OtherInstanceDefn_19, (MR_Integer) 9)));
            MR_Word hlds__make_hlds__add_class__Renaming_34;
            MR_Word hlds__make_hlds__add_class__NewOtherTypes_35;
            MR_Word hlds__make_hlds__add_class__Var_32;
            MR_Word hlds__make_hlds__add_class___MergedTVarSet_33;
            MR_Word hlds__make_hlds__add_class__Var_36;

            hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__OtherInstanceBody_28)) == (MR_mktag((MR_Integer) 1)));
            if (hlds__make_hlds__add_class__succeeded)
              {
                hlds__make_hlds__add_class__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherInstanceBody_28, (MR_Integer) 0)));
                {
                  parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__NewTVarSet_3, hlds__make_hlds__add_class__OtherTVarSet_30, &hlds__make_hlds__add_class___MergedTVarSet_33, &hlds__make_hlds__add_class__Renaming_34);
                }
                {
                  parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__Renaming_34, hlds__make_hlds__add_class__OtherTypes_23, &hlds__make_hlds__add_class__NewOtherTypes_35);
                }
                {
                  hlds__make_hlds__add_class__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0(hlds__make_hlds__add_class__NewTypes_2, hlds__make_hlds__add_class__NewOtherTypes_35, &hlds__make_hlds__add_class__Var_36);
                }
              }
            if (hlds__make_hlds__add_class__succeeded)
              {
                MR_Word hlds__make_hlds__add_class__ClassName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_1, (MR_Integer) 0)));
                MR_Integer hlds__make_hlds__add_class__ClassArity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_1, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__add_class__NewPieces_39;
                MR_Word hlds__make_hlds__add_class__NewMsg_40;
                MR_Word hlds__make_hlds__add_class__OtherMsg_42;
                MR_Word hlds__make_hlds__add_class__Spec_43;
                MR_Word hlds__make_hlds__add_class__Var_48;
                MR_Word hlds__make_hlds__add_class__Var_51;
                MR_Word hlds__make_hlds__add_class__Var_52;
                MR_Word hlds__make_hlds__add_class__Var_53;
                MR_Word hlds__make_hlds__add_class__Var_60;
                MR_Word hlds__make_hlds__add_class__Var_61;
                MR_Word hlds__make_hlds__add_class__Var_66;
                MR_Word hlds__make_hlds__add_class__Var_74;
                MR_Word hlds__make_hlds__add_class__Var_75;

                {
                  hlds__make_hlds__add_class__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_53, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_37));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_53, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_38));
                }
                {
                  hlds__make_hlds__add_class__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                  MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Var_52, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_53));
                }
                {
                  hlds__make_hlds__add_class__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_51, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_52));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[19])));
                }
                {
                  hlds__make_hlds__add_class__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[33])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_48, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_51));
                }
                {
                  hlds__make_hlds__add_class__NewPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewPieces_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[32])));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewPieces_39, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_48));
                }
                {
                  hlds__make_hlds__add_class__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_61, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewPieces_39));
                }
                {
                  hlds__make_hlds__add_class__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_60, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_61));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_class__NewMsg_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewMsg_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewContext_4));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewMsg_40, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_60));
                }
                {
                  hlds__make_hlds__add_class__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_66, 0) = ((MR_Box) (hlds__make_hlds__add_class__OtherContext_26));
                }
                {
                  hlds__make_hlds__add_class__OtherMsg_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_66));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 1) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 2) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OtherMsg_42, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[36])));
                }
                {
                  hlds__make_hlds__add_class__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_75, 0) = ((MR_Box) (hlds__make_hlds__add_class__OtherMsg_42));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  hlds__make_hlds__add_class__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_74, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewMsg_40));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_74, 1) = ((MR_Box) (hlds__make_hlds__add_class__Var_75));
                }
                {
                  hlds__make_hlds__add_class__Spec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_43, 2) = ((MR_Box) (hlds__make_hlds__add_class__Var_74));
                }
                {
                  hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_43));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6));
                }
              }
            else
              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__add_class__next_value_of_HeadVar__5_5 = hlds__make_hlds__add_class__OtherInstanceDefns_20;
              MR_Word hlds__make_hlds__add_class__next_value_of_STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_77_77;

              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_class__next_value_of_STATE_VARIABLE_Specs_0_6;
              hlds__make_hlds__add_class__HeadVar__5_5 = hlds__make_hlds__add_class__next_value_of_HeadVar__5_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__add_class__check_method_modes_7_p_0(
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_class__succeeded;

        if ((hlds__make_hlds__add_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
            *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
            *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
          }
        else
          {
            MR_Word hlds__make_hlds__add_class__Method_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_class__Methods_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72;
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74;
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75;

            if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_17)) == (MR_mktag((MR_Integer) 0))))
              {
                MR_Word hlds__make_hlds__add_class__QualPredOrFuncName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 0)));
                MR_Word hlds__make_hlds__add_class__PorF_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 1)));
                MR_Word hlds__make_hlds__add_class__TypesAndModes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 2)));
                MR_Word hlds__make_hlds__add_class__ModuleName_34;
                MR_String hlds__make_hlds__add_class__PredOrFuncName_35;
                MR_Integer hlds__make_hlds__add_class__PredArity_37;
                MR_Word hlds__make_hlds__add_class__PredTable_38;
                MR_Word hlds__make_hlds__add_class__PredIds_39;
                MR_Word hlds__make_hlds__add_class__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 3)));
                MR_Word hlds__make_hlds__add_class__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 4)));
                MR_Word hlds__make_hlds__add_class__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 5)));
                MR_Word hlds__make_hlds__add_class__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 6)));
                MR_Word hlds__make_hlds__add_class__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 7)));
                MR_Word hlds__make_hlds__add_class__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 8)));
                MR_Word hlds__make_hlds__add_class__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 9)));
                MR_Word hlds__make_hlds__add_class__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 10)));
                MR_Word hlds__make_hlds__add_class__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 11)));

                if (((MR_tag((MR_Word) hlds__make_hlds__add_class__QualPredOrFuncName_22)) == (MR_mktag((MR_Integer) 1))))
                  {
                    hlds__make_hlds__add_class__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__QualPredOrFuncName_22, (MR_Integer) 0)));
                    hlds__make_hlds__add_class__PredOrFuncName_35 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__QualPredOrFuncName_22, (MR_Integer) 1)));
                  }
                else
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "unqualified func");
                      return;
                    }
                  }
                {
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__add_class__TypesAndModes_24, &hlds__make_hlds__add_class__PredArity_37);
                }
                {
                  hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, &hlds__make_hlds__add_class__PredTable_38);
                }
                {
                  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(hlds__make_hlds__add_class__PredTable_38, (MR_Integer) 0, hlds__make_hlds__add_class__PorF_23, hlds__make_hlds__add_class__ModuleName_34, hlds__make_hlds__add_class__PredOrFuncName_35, hlds__make_hlds__add_class__PredArity_37, &hlds__make_hlds__add_class__PredIds_39);
                }
                if ((hlds__make_hlds__add_class__PredIds_39 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "number of preds != 1");
                      return;
                    }
                  }
                else
                  {
                    MR_Word hlds__make_hlds__add_class__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_39, (MR_Integer) 1)));
                    MR_Word hlds__make_hlds__add_class__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_39, (MR_Integer) 0)));

                    if ((hlds__make_hlds__add_class__Var_88 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        MR_Word hlds__make_hlds__add_class__PredInfo0_41;

                        {
                          hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, hlds__make_hlds__add_class__Var_89, &hlds__make_hlds__add_class__PredInfo0_41);
                        }
                        switch (hlds__make_hlds__add_class__PorF_23) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                            {
                              MR_Word hlds__make_hlds__add_class__PredInfo_42;
                              MR_Word hlds__make_hlds__add_class__MaybeProc_43;

                              {
                                check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(hlds__make_hlds__add_class__PredInfo0_41, &hlds__make_hlds__add_class__PredInfo_42, &hlds__make_hlds__add_class__MaybeProc_43);
                              }
                              if ((hlds__make_hlds__add_class__MaybeProc_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                                {
                                  hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
                                  hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
                                }
                              else
                                {
                                  MR_Integer hlds__make_hlds__add_class__ProcId_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybeProc_43, (MR_Integer) 0)));
                                  MR_Word hlds__make_hlds__add_class__NewPredProc_45;
                                  MR_Word hlds__make_hlds__add_class__Var_73;

                                  {
                                    hlds__make_hlds__add_class__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_73, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_89));
                                    MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_73, 1) = ((MR_Box) (hlds__make_hlds__add_class__ProcId_44));
                                  }
                                  {
                                    hlds__make_hlds__add_class__NewPredProc_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewPredProc_45, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_73));
                                  }
                                  {
                                    hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewPredProc_45));
                                    MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2));
                                  }
                                  {
                                    hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_class__Var_89, hlds__make_hlds__add_class__PredInfo_42, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75);
                                  }
                                }
                              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
                            }
                            break;
                          case (MR_Integer) 0:
                            {
                              MR_Word hlds__make_hlds__add_class__Procs_46;

                              {
                                hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__make_hlds__add_class__PredInfo0_41, &hlds__make_hlds__add_class__Procs_46);
                              }
                              {
                                hlds__make_hlds__add_class__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_class__Procs_46);
                              }
                              if (hlds__make_hlds__add_class__succeeded)
                                {
                                  hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(hlds__make_hlds__add_class__PredInfo0_41, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72);
                                }
                              else
                                hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
                              hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
                              hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
                            }
                            break;
                        }
                      }
                    else
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "number of preds != 1");
                          return;
                        }
                      }
                  }
              }
            else
              {
                hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
                hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
                hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
              }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__add_class__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_class__Methods_18;
              MR_Word hlds__make_hlds__add_class__next_value_of_STATE_VARIABLE_PredProcIds_0_2 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_74_74;
              MR_Word hlds__make_hlds__add_class__next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_75_75;
              MR_Word hlds__make_hlds__add_class__next_value_of_STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_72_72;

              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_class__next_value_of_STATE_VARIABLE_Specs_0_6;
              hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4 = hlds__make_hlds__add_class__next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
              hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2 = hlds__make_hlds__add_class__next_value_of_STATE_VARIABLE_PredProcIds_0_2;
              hlds__make_hlds__add_class__HeadVar__1_1 = hlds__make_hlds__add_class__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0_2(
  MR_Box hlds__make_hlds__add_class__closure_arg)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

    {
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__377__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

    {
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_method__376__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))));
    }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_12_p_0(
  MR_Word hlds__make_hlds__add_class__ClassName_13,
  MR_Word hlds__make_hlds__add_class__ClassParamVars_14,
  MR_Integer hlds__make_hlds__add_class__ItemNumber_15,
  MR_Word hlds__make_hlds__add_class__MaybeItemMercuryStatus_16,
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_17,
  MR_Word hlds__make_hlds__add_class__NeedQual_18,
  MR_Word hlds__make_hlds__add_class__Method_19,
  MR_Word * hlds__make_hlds__add_class__MaybePredIdProcId_20,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_52,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_53,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_54)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__OldImportStatus_23 = (MR_Word) hlds__make_hlds__add_class__TypeClassStatus_17;
    MR_Word hlds__make_hlds__add_class__PredStatus_24 = (MR_Word) hlds__make_hlds__add_class__OldImportStatus_23;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_19)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__add_class__PredName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_class__PredOrFunc_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_class__TypesAndModes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__add_class__WithType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__add_class__WithInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__add_class__MaybeDetism_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__add_class__TypeVarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__add_class__InstVarSet_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 7)));
        MR_Word hlds__make_hlds__add_class__ExistQVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 8)));
        MR_Word hlds__make_hlds__add_class__Purity_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 9)));
        MR_Word hlds__make_hlds__add_class__Constraints0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 10)));
        MR_Word hlds__make_hlds__add_class__Context_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_19, (MR_Integer) 11)));
        MR_Word hlds__make_hlds__add_class__Origin_37;
        MR_Word hlds__make_hlds__add_class__ClassParamTypes_38;
        MR_Word hlds__make_hlds__add_class__UnivConstraints0_39;
        MR_Word hlds__make_hlds__add_class__ExistConstraints_40;
        MR_Word hlds__make_hlds__add_class__UnivConstraints_41;
        MR_Word hlds__make_hlds__add_class__Constraints_42;
        MR_Word hlds__make_hlds__add_class__Markers0_43;
        MR_Word hlds__make_hlds__add_class__Markers_44;
        MR_Word hlds__make_hlds__add_class__Var_61;
        MR_Word hlds__make_hlds__add_class__Var_66;
        MR_Word hlds__make_hlds__add_class__Var_71;
        MR_Word hlds__make_hlds__add_class__Var_72;

        {
          hlds__make_hlds__add_class__Var_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_61, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[2]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_61, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_method_12_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_61, 3) = ((MR_Box) (hlds__make_hlds__add_class__WithType_28));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_61, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(hlds__make_hlds__add_class__Var_61, (MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/12", (MR_String) "WithType != no");
        }
        {
          hlds__make_hlds__add_class__Var_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_66, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[3]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_method_12_p_0_2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_66, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_66, 3) = ((MR_Box) (hlds__make_hlds__add_class__WithInst_29));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_66, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__require__expect_4_p_0(hlds__make_hlds__add_class__Var_66, (MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/12", (MR_String) "WithInst != no");
        }
        {
          hlds__make_hlds__add_class__Origin_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Origin_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__Origin_37, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredName_25));
        }
        {
          hlds__make_hlds__add_class__Var_71 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
        {
          parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_class__Var_71, hlds__make_hlds__add_class__ClassParamVars_14, &hlds__make_hlds__add_class__ClassParamTypes_38);
        }
        hlds__make_hlds__add_class__UnivConstraints0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints0_35, (MR_Integer) 0)));
        hlds__make_hlds__add_class__ExistConstraints_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints0_35, (MR_Integer) 1)));
        {
          hlds__make_hlds__add_class__Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_72, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_13));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_72, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamTypes_38));
        }
        {
          hlds__make_hlds__add_class__UnivConstraints_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__UnivConstraints_41, 0) = ((MR_Box) (hlds__make_hlds__add_class__Var_72));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__UnivConstraints_41, 1) = ((MR_Box) (hlds__make_hlds__add_class__UnivConstraints0_39));
        }
        {
          hlds__make_hlds__add_class__Constraints_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints_42, 0) = ((MR_Box) (hlds__make_hlds__add_class__UnivConstraints_41));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Constraints_42, 1) = ((MR_Box) (hlds__make_hlds__add_class__ExistConstraints_40));
        }
        {
          hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_class__Markers0_43);
        }
        {
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 10, hlds__make_hlds__add_class__Markers0_43, &hlds__make_hlds__add_class__Markers_44);
        }
        {
          hlds__make_hlds__add_pred__module_add_pred_or_func_21_p_0(hlds__make_hlds__add_class__Origin_37, hlds__make_hlds__add_class__Context_36, hlds__make_hlds__add_class__ItemNumber_15, hlds__make_hlds__add_class__MaybeItemMercuryStatus_16, hlds__make_hlds__add_class__PredStatus_24, hlds__make_hlds__add_class__NeedQual_18, hlds__make_hlds__add_class__PredOrFunc_26, hlds__make_hlds__add_class__PredName_25, hlds__make_hlds__add_class__TypeVarSet_31, hlds__make_hlds__add_class__InstVarSet_32, hlds__make_hlds__add_class__ExistQVars_33, hlds__make_hlds__add_class__TypesAndModes_27, hlds__make_hlds__add_class__Constraints_42, hlds__make_hlds__add_class__MaybeDetism_30, hlds__make_hlds__add_class__Purity_34, hlds__make_hlds__add_class__Markers_44, hlds__make_hlds__add_class__MaybePredIdProcId_20, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_51, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_53, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_54);
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_class__MaybePredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_19, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_class__Modes_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_19, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__add_class__MaybeDet_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_19, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__add_class__VarSet_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_19, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__add_class__PredName_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_19, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_class__Context_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_19, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__add_class___WithInst_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_19, (MR_Integer) 3)));

        if ((hlds__make_hlds__add_class__MaybePredOrFunc_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/12", (MR_String) "no pred_or_func on mode declaration");
              return;
            }
          }
        else
          {
            MR_Word hlds__make_hlds__add_class__PredIdProcId_50;
            MR_Word hlds__make_hlds__add_class__PredOrFunc_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybePredOrFunc_45, (MR_Integer) 0)));

            {
              hlds__make_hlds__add_pred__module_add_mode_15_p_0(hlds__make_hlds__add_class__Context_80, hlds__make_hlds__add_class__ItemNumber_15, hlds__make_hlds__add_class__MaybeItemMercuryStatus_16, hlds__make_hlds__add_class__PredStatus_24, hlds__make_hlds__add_class__PredOrFunc_76, hlds__make_hlds__add_class__PredName_78, hlds__make_hlds__add_class__VarSet_49, hlds__make_hlds__add_class__Modes_46, hlds__make_hlds__add_class__MaybeDet_48, (MR_Integer) 1, &hlds__make_hlds__add_class__PredIdProcId_50, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_51, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_52, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_53, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_54);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_class__MaybePredIdProcId_20 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__PredIdProcId_50));
            }
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_methods_11_p_0(
  MR_Word hlds__make_hlds__add_class__ClassName_1,
  MR_Word hlds__make_hlds__add_class__ClassParamVars_2,
  MR_Word hlds__make_hlds__add_class__MaybeItemMercuryStatus_3,
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_4,
  MR_Word hlds__make_hlds__add_class__NeedQual_5,
  MR_Word hlds__make_hlds__add_class__HeadVar__6_6,
  MR_Word * hlds__make_hlds__add_class__HeadVar__7_7,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_8,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_9,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_10,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_11)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;

    if ((hlds__make_hlds__add_class__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__add_class__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_10;
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_9 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_8;
      }
    else
      {
        MR_Word hlds__make_hlds__add_class__Method_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_class__Methods_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_class__MaybePredProcId_30;
        MR_Word hlds__make_hlds__add_class__MaybePredProcIds_31;
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_39_39;
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_40_40;

        {
          hlds__make_hlds__add_class__module_add_class_method_12_p_0(hlds__make_hlds__add_class__ClassName_1, hlds__make_hlds__add_class__ClassParamVars_2, (MR_Integer) -1, hlds__make_hlds__add_class__MaybeItemMercuryStatus_3, hlds__make_hlds__add_class__TypeClassStatus_4, hlds__make_hlds__add_class__NeedQual_5, hlds__make_hlds__add_class__Method_28, &hlds__make_hlds__add_class__MaybePredProcId_30, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_8, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_40_40);
        }
        {
          hlds__make_hlds__add_class__add_class_pred_or_func_methods_11_p_0(hlds__make_hlds__add_class__ClassName_1, hlds__make_hlds__add_class__ClassParamVars_2, hlds__make_hlds__add_class__MaybeItemMercuryStatus_3, hlds__make_hlds__add_class__TypeClassStatus_4, hlds__make_hlds__add_class__NeedQual_5, hlds__make_hlds__add_class__Methods_29, &hlds__make_hlds__add_class__MaybePredProcIds_31, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_39_39, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_9, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_40_40, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_class__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__MaybePredProcId_30));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__MaybePredProcIds_31));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_13_p_0(
  MR_Word hlds__make_hlds__add_class__ClassName_14,
  MR_Word hlds__make_hlds__add_class__ClassParamVars_15,
  MR_Integer hlds__make_hlds__add_class__ItemNumber_16,
  MR_Word hlds__make_hlds__add_class__MaybeItemMercuryStatus_17,
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_18,
  MR_Word hlds__make_hlds__add_class__NeedQual_19,
  MR_Word hlds__make_hlds__add_class__Method_20,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_55,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_56,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_57,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_58,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_59,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_60)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__PredName_36;
    MR_Word hlds__make_hlds__add_class__MaybePredOrFunc_37;
    MR_Word hlds__make_hlds__add_class__Modes_38;
    MR_Word hlds__make_hlds__add_class__Context_42;
    MR_Word hlds__make_hlds__add_class__PredTable_43;
    MR_Integer hlds__make_hlds__add_class__PredArity_44;
    MR_Word hlds__make_hlds__add_class__PredOrFunc_45;
    MR_Word hlds__make_hlds__add_class__PredIds_46;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_20)) == (MR_mktag((MR_Integer) 0))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/13", (MR_String) "pred_or_func method item");
          return;
        }
      }
    else
      {
        MR_Word hlds__make_hlds__add_class___WithInst_39;
        MR_Word hlds__make_hlds__add_class___MaybeDetism_40;
        MR_Word hlds__make_hlds__add_class___VarSet_41;

        hlds__make_hlds__add_class__PredName_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_20, (MR_Integer) 0)));
        hlds__make_hlds__add_class__MaybePredOrFunc_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_20, (MR_Integer) 1)));
        hlds__make_hlds__add_class__Modes_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_20, (MR_Integer) 2)));
        hlds__make_hlds__add_class___WithInst_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_20, (MR_Integer) 3)));
        hlds__make_hlds__add_class___MaybeDetism_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_20, (MR_Integer) 4)));
        hlds__make_hlds__add_class___VarSet_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_20, (MR_Integer) 5)));
        hlds__make_hlds__add_class__Context_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_20, (MR_Integer) 6)));
      }
    {
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_57, &hlds__make_hlds__add_class__PredTable_43);
    }
    {
      hlds__make_hlds__add_class__PredArity_44 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_class__Modes_38);
    }
    if ((hlds__make_hlds__add_class__MaybePredOrFunc_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/13", (MR_String) "unexpanded \140with_inst\140 annotation");
          return;
        }
      }
    else
      hlds__make_hlds__add_class__PredOrFunc_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybePredOrFunc_37, (MR_Integer) 0)));
    {
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_class__PredTable_43, (MR_Integer) 0, hlds__make_hlds__add_class__PredOrFunc_45, hlds__make_hlds__add_class__PredName_36, hlds__make_hlds__add_class__PredArity_44, &hlds__make_hlds__add_class__PredIds_46);
    }
    if ((hlds__make_hlds__add_class__PredIds_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(hlds__make_hlds__add_class__PredName_36, hlds__make_hlds__add_class__PredArity_44, hlds__make_hlds__add_class__PredOrFunc_45, hlds__make_hlds__add_class__Context_42, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_59, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_60);
        }
        *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_56 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_55;
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_57;
      }
    else
      {
        MR_Word hlds__make_hlds__add_class__HeadPredId_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_46, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_class__TailPredIds_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_46, (MR_Integer) 1)));

        if ((hlds__make_hlds__add_class__TailPredIds_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word hlds__make_hlds__add_class__PredInfo_50;
            MR_Word hlds__make_hlds__add_class__PredMarkers_51;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_class__HeadPredId_47, &hlds__make_hlds__add_class__PredInfo_50);
            }
            {
              hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_class__PredInfo_50, &hlds__make_hlds__add_class__PredMarkers_51);
            }
            {
              hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__PredMarkers_51, (MR_Integer) 10);
            }
            if (hlds__make_hlds__add_class__succeeded)
              {
                MR_Word hlds__make_hlds__add_class__PredProcId_52;

                {
                  hlds__make_hlds__add_class__module_add_class_method_12_p_0(hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassParamVars_15, hlds__make_hlds__add_class__ItemNumber_16, hlds__make_hlds__add_class__MaybeItemMercuryStatus_17, hlds__make_hlds__add_class__TypeClassStatus_18, hlds__make_hlds__add_class__NeedQual_19, hlds__make_hlds__add_class__Method_20, &hlds__make_hlds__add_class__PredProcId_52, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_57, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_58, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_59, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_60);
                }
                {
                  mercury__list__cons_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_class__PredProcId_52)), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_55, hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_56);
                }
              }
            else
              {
                {
                  hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(hlds__make_hlds__add_class__PredName_36, hlds__make_hlds__add_class__PredArity_44, hlds__make_hlds__add_class__PredOrFunc_45, hlds__make_hlds__add_class__Context_42, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_59, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_60);
                }
                *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_58 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_57;
                *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_56 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_55;
              }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/13", (MR_String) "multiple preds matching method mode");
              return;
            }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(
  MR_Word hlds__make_hlds__add_class__Method_2)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_class__Var_3;
    MR_Word hlds__make_hlds__add_class__Var_4;
    MR_Word hlds__make_hlds__add_class__Var_5;
    MR_Word hlds__make_hlds__add_class__Var_6;
    MR_Word hlds__make_hlds__add_class__Var_7;
    MR_Word hlds__make_hlds__add_class__Var_8;
    MR_Word hlds__make_hlds__add_class__Var_9;

    if (hlds__make_hlds__add_class__succeeded)
      {
        hlds__make_hlds__add_class__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 0)));
        hlds__make_hlds__add_class__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 1)));
        hlds__make_hlds__add_class__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 2)));
        hlds__make_hlds__add_class__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 3)));
        hlds__make_hlds__add_class__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 4)));
        hlds__make_hlds__add_class__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 5)));
        hlds__make_hlds__add_class__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 6)));
      }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_2(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7)
{
  {
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_56;
    MR_Word hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_58;
    MR_Word hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_60;

    {
      hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 8))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_56, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_4), &hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_58, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_6), &hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_60);
    }
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_56));
    *hlds__make_hlds__add_class__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_58));
    *hlds__make_hlds__add_class__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_60));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

    {
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_11_p_0(
  MR_Word hlds__make_hlds__add_class__ClassName_12,
  MR_Word hlds__make_hlds__add_class__ClassParamVars_13,
  MR_Word hlds__make_hlds__add_class__TypeClassStatus_14,
  MR_Word hlds__make_hlds__add_class__MaybeItemMercuryStatus_15,
  MR_Word hlds__make_hlds__add_class__NeedQual_16,
  MR_Word hlds__make_hlds__add_class__Methods_17,
  MR_Word * hlds__make_hlds__add_class__PredProcIds_18,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_26,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_27,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_28)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__TypeCtorInfo_40_40 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
    MR_Word hlds__make_hlds__add_class__ModeMethods_21;
    MR_Word hlds__make_hlds__add_class__PredOrFuncMethods_22;
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_30_30;
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_31_31;
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_32_32;
    MR_Word hlds__make_hlds__add_class__Var_33;
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_34_34;
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35_35;
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_36_36;
    MR_Box hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_34_34;
    MR_Box hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_35_35;
    MR_Box hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_36_36;

    {
      mercury__list__filter_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_40_40, (MR_Word) &hlds__make_hlds__add_class_scalar_common_4[2], hlds__make_hlds__add_class__Methods_17, &hlds__make_hlds__add_class__ModeMethods_21, &hlds__make_hlds__add_class__PredOrFuncMethods_22);
    }
    {
      hlds__make_hlds__add_class__add_class_pred_or_func_methods_11_p_0(hlds__make_hlds__add_class__ClassName_12, hlds__make_hlds__add_class__ClassParamVars_13, hlds__make_hlds__add_class__MaybeItemMercuryStatus_15, hlds__make_hlds__add_class__TypeClassStatus_14, hlds__make_hlds__add_class__NeedQual_16, hlds__make_hlds__add_class__PredOrFuncMethods_22, &hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_30_30, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_25, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_31_31, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_27, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_32_32);
    }
    {
      hlds__make_hlds__add_class__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_9[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_11_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 3) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_12));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_13));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 5) = ((MR_Box) ((MR_Integer) -1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 6) = ((MR_Box) (hlds__make_hlds__add_class__MaybeItemMercuryStatus_15));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 7) = ((MR_Box) (hlds__make_hlds__add_class__TypeClassStatus_14));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_33, 8) = ((MR_Box) (hlds__make_hlds__add_class__NeedQual_16));
    }
    {
      mercury__list__foldl3_8_p_0(hlds__make_hlds__add_class__TypeCtorInfo_40_40, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[7], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__Var_33, hlds__make_hlds__add_class__ModeMethods_21, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_30_30)), &hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_34_34, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_31_31)), &hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_35_35, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_32_32)), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_36_36);
    }
    hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_34_34 = ((MR_Word) hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_34_34);
    hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35_35 = ((MR_Word) hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_35_35);
    hlds__make_hlds__add_class__STATE_VARIABLE_Specs_36_36 = ((MR_Word) hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_36_36);
    {
      hlds__make_hlds__add_class__check_method_modes_7_p_0(hlds__make_hlds__add_class__Methods_17, hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_34_34, hlds__make_hlds__add_class__PredProcIds_18, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35_35, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_26, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_36_36, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_28);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
  MR_Word hlds__make_hlds__add_class__OldFunDeps0_3,
  MR_Word hlds__make_hlds__add_class__FunDeps0_4)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__TypeCtorInfo_7_7 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
    MR_Word hlds__make_hlds__add_class__OldFunDeps_5;
    MR_Word hlds__make_hlds__add_class__FunDeps_6;

    {
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_7_7, hlds__make_hlds__add_class__OldFunDeps0_3, &hlds__make_hlds__add_class__OldFunDeps_5);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_7_7, hlds__make_hlds__add_class__FunDeps0_4, &hlds__make_hlds__add_class__FunDeps_6);
    }
    {
      hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[17], ((MR_Box) (hlds__make_hlds__add_class__OldFunDeps_5)), ((MR_Box) (hlds__make_hlds__add_class__FunDeps_6)));
    }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__constraints_are_identical_6_p_0(
  MR_Word hlds__make_hlds__add_class__OldVars0_7,
  MR_Word hlds__make_hlds__add_class__OldVarSet_8,
  MR_Word hlds__make_hlds__add_class__OldConstraints0_9,
  MR_Word hlds__make_hlds__add_class__Vars_10,
  MR_Word hlds__make_hlds__add_class__VarSet_11,
  MR_Word hlds__make_hlds__add_class__Constraints_12)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__TypeInfo_19_19;
    MR_Word hlds__make_hlds__add_class__Renaming_14;
    MR_Word hlds__make_hlds__add_class__OldConstraints1_15;
    MR_Word hlds__make_hlds__add_class__OldVars_16;
    MR_Word hlds__make_hlds__add_class__VarRenaming_17;
    MR_Word hlds__make_hlds__add_class__OldConstraints_18;
    MR_Word hlds__make_hlds__add_class__Var_13;

    {
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__VarSet_11, hlds__make_hlds__add_class__OldVarSet_8, &hlds__make_hlds__add_class__Var_13, &hlds__make_hlds__add_class__Renaming_14);
    }
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(hlds__make_hlds__add_class__Renaming_14, hlds__make_hlds__add_class__OldConstraints0_9, &hlds__make_hlds__add_class__OldConstraints1_15);
    }
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(hlds__make_hlds__add_class__Renaming_14, hlds__make_hlds__add_class__OldVars0_7, &hlds__make_hlds__add_class__OldVars_16);
    }
    hlds__make_hlds__add_class__TypeInfo_19_19 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
    {
      mercury__map__from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__TypeInfo_19_19, hlds__make_hlds__add_class__TypeInfo_19_19, hlds__make_hlds__add_class__OldVars_16, hlds__make_hlds__add_class__Vars_10, &hlds__make_hlds__add_class__VarRenaming_17);
    }
    {
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(hlds__make_hlds__add_class__VarRenaming_17, hlds__make_hlds__add_class__OldConstraints1_15, &hlds__make_hlds__add_class__OldConstraints_18);
    }
    {
      hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[16], ((MR_Box) (hlds__make_hlds__add_class__OldConstraints_18)), ((MR_Box) (hlds__make_hlds__add_class__Constraints_12)));
    }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
  MR_Word hlds__make_hlds__add_class__TypeInfo_for_T_17,
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
  MR_Integer hlds__make_hlds__add_class__N_2,
  MR_Box hlds__make_hlds__add_class__X_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_class__succeeded;
        MR_Integer hlds__make_hlds__add_class__HeadVar__4_4;

        if ((hlds__make_hlds__add_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "function \140hlds.make_hlds.add_class.get_list_index\'/3", (MR_String) "element not found");
            }
          }
        else
          {
            MR_Box hlds__make_hlds__add_class__E_11 = (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 0));
            MR_Word hlds__make_hlds__add_class__Es_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 1)));

            {
              hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_class__TypeInfo_for_T_17, hlds__make_hlds__add_class__X_3, hlds__make_hlds__add_class__E_11);
            }
            if (hlds__make_hlds__add_class__succeeded)
              hlds__make_hlds__add_class__HeadVar__4_4 = hlds__make_hlds__add_class__N_2;
            else
              {
                MR_Integer hlds__make_hlds__add_class__Var_15 = (hlds__make_hlds__add_class__N_2 + (MR_Integer) 1);

                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_hlds__add_class__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_class__Es_12;
                  MR_Integer hlds__make_hlds__add_class__next_value_of_N_2 = hlds__make_hlds__add_class__Var_15;

                  hlds__make_hlds__add_class__N_2 = hlds__make_hlds__add_class__next_value_of_N_2;
                  hlds__make_hlds__add_class__HeadVar__1_1 = hlds__make_hlds__add_class__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return hlds__make_hlds__add_class__HeadVar__4_4;
      }
      break;
    }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__add_class__wrapper_arg_3;
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
    MR_Word hlds__make_hlds__add_class__conv0_LambdaHeadVar__3_13;

    {
      hlds__make_hlds__add_class__conv0_LambdaHeadVar__3_13 = hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__206__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2));
    }
    hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv0_LambdaHeadVar__3_13));
    return hlds__make_hlds__add_class__wrapper_arg_3;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
  MR_Word hlds__make_hlds__add_class__TVars_4,
  MR_Word hlds__make_hlds__add_class__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__HeadVar__3_3;
    MR_Word hlds__make_hlds__add_class__Domain0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_class__Range0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_class__Domain_7;
    MR_Word hlds__make_hlds__add_class__Range_8;
    MR_Word hlds__make_hlds__add_class__Var_15;
    MR_Word hlds__make_hlds__add_class__Func_29;
    MR_Word hlds__make_hlds__add_class__Var_33;
    MR_Box hlds__make_hlds__add_class__conv1_Domain_7;
    MR_Box hlds__make_hlds__add_class__conv2_Range_8;

    {
      hlds__make_hlds__add_class__Var_15 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
    {
      hlds__make_hlds__add_class__Func_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 1) = ((MR_Box) (hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 3) = ((MR_Box) (hlds__make_hlds__add_class__TVars_4));
    }
    {
      hlds__make_hlds__add_class__conv1_Domain_7 = mercury__list__foldl_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[6], hlds__make_hlds__add_class__Func_29, hlds__make_hlds__add_class__Domain0_5, ((MR_Box) (hlds__make_hlds__add_class__Var_15)));
    }
    hlds__make_hlds__add_class__Domain_7 = ((MR_Word) hlds__make_hlds__add_class__conv1_Domain_7);
    {
      hlds__make_hlds__add_class__Var_33 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
    {
      hlds__make_hlds__add_class__conv2_Range_8 = mercury__list__foldl_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[6], hlds__make_hlds__add_class__Func_29, hlds__make_hlds__add_class__Range0_6, ((MR_Box) (hlds__make_hlds__add_class__Var_33)));
    }
    hlds__make_hlds__add_class__Range_8 = ((MR_Word) hlds__make_hlds__add_class__conv2_Range_8);
    {
      hlds__make_hlds__add_class__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_class__Domain_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_class__Range_8));
    }
    return hlds__make_hlds__add_class__HeadVar__3_3;
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_8,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_9,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_10,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_11)
{
  {
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
    MR_Word hlds__make_hlds__add_class__conv4_TVarSet_20;
    MR_Word hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_49;
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_51;
    MR_Word hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_53;
    MR_Word hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_55;

    {
      hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv4_TVarSet_20, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_4), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_49, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_6), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_51, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_8), &hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_53, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_10), &hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_55);
    }
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv4_TVarSet_20));
    *hlds__make_hlds__add_class__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_49));
    *hlds__make_hlds__add_class__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_51));
    *hlds__make_hlds__add_class__wrapper_arg_9 = ((MR_Box) (hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_53));
    *hlds__make_hlds__add_class__wrapper_arg_11 = ((MR_Box) (hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_55));
  }
}

void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(
  MR_Word hlds__make_hlds__add_class__InstanceProcDefn_17,
  MR_Word hlds__make_hlds__add_class__PredOrFunc_18,
  MR_Integer hlds__make_hlds__add_class__PredArity_19,
  MR_Word hlds__make_hlds__add_class__ArgTypes_20,
  MR_Word hlds__make_hlds__add_class__Markers_21,
  MR_Word hlds__make_hlds__add_class__Context_22,
  MR_Word hlds__make_hlds__add_class__InstanceStatus_23,
  MR_Word * hlds__make_hlds__add_class__ClausesInfo_24,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_49,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_50,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_51,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_52,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_53,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_54,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__InstanceProcDefn_17)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_class__InstanceClauses_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__InstanceProcDefn_17, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_class__ClausesInfo0_48;
        MR_Word hlds__make_hlds__add_class__Var_57;
        MR_Word hlds__make_hlds__add_class__Var_58;
        MR_Box hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_50;
        MR_Box hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_52;
        MR_Box hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_54;
        MR_Box hlds__make_hlds__add_class__conv6_ClausesInfo_24;
        MR_Box hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_56;

        {
          hlds__make_hlds__add_class__Var_57 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        }
        {
          hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__PredArity_19, hlds__make_hlds__add_class__Var_57, &hlds__make_hlds__add_class__ClausesInfo0_48);
        }
        {
          hlds__make_hlds__add_class__Var_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_58, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_58, 1) = ((MR_Box) (hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_58, 3) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_18));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_58, 4) = ((MR_Box) (hlds__make_hlds__add_class__Context_22));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_58, 5) = ((MR_Box) (hlds__make_hlds__add_class__InstanceStatus_23));
        }
        {
          mercury__list__foldl5_12_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[4], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0, (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__Var_58, hlds__make_hlds__add_class__InstanceClauses_47, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_49)), &hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_50, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_51)), &hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_52, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_53)), &hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_54, ((MR_Box) (hlds__make_hlds__add_class__ClausesInfo0_48)), &hlds__make_hlds__add_class__conv6_ClausesInfo_24, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55)), &hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_56);
        }
        *hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_50 = ((MR_Word) hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_50);
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_52 = ((MR_Word) hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_52);
        *hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_54 = ((MR_Word) hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_54);
        *hlds__make_hlds__add_class__ClausesInfo_24 = ((MR_Word) hlds__make_hlds__add_class__conv6_ClausesInfo_24);
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56 = ((MR_Word) hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_56);
      }
    else
      {
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_77_77;
        MR_Word hlds__make_hlds__add_class__InstancePredName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceProcDefn_17, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_class__GoalInfo0_30;
        MR_Word hlds__make_hlds__add_class__GoalInfo1_31;
        MR_Word hlds__make_hlds__add_class__HeadVars_32;
        MR_Word hlds__make_hlds__add_class__NonLocals_33;
        MR_Word hlds__make_hlds__add_class__GoalInfo2_34;
        MR_Word hlds__make_hlds__add_class__GoalInfo_35;
        MR_Word hlds__make_hlds__add_class__VarSet0_36;
        MR_Word hlds__make_hlds__add_class__VarSet_37;
        MR_Word hlds__make_hlds__add_class__IntroducedGoal_38;
        MR_Word hlds__make_hlds__add_class__IntroducedClause_39;
        MR_Word hlds__make_hlds__add_class__TVarNameMap_40;
        MR_Word hlds__make_hlds__add_class__VarTypes_41;
        MR_Word hlds__make_hlds__add_class__HeadVarVec_42;
        MR_Word hlds__make_hlds__add_class__ClausesRep_43;
        MR_Word hlds__make_hlds__add_class__RttiVarMaps_44;
        MR_Word hlds__make_hlds__add_class__Var_68;
        MR_Word hlds__make_hlds__add_class__Var_73;
        MR_Word hlds__make_hlds__add_class__Var_76;

        {
          hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__add_class__GoalInfo0_30);
        }
        {
          hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__add_class__Context_22, hlds__make_hlds__add_class__GoalInfo0_30, &hlds__make_hlds__add_class__GoalInfo1_31);
        }
        hlds__make_hlds__add_class__TypeCtorInfo_77_77 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        {
          mercury__varset__init_1_p_0(hlds__make_hlds__add_class__TypeCtorInfo_77_77, &hlds__make_hlds__add_class__VarSet0_36);
        }
        {
          parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_class__TypeCtorInfo_77_77, (MR_String) "HeadVar__", hlds__make_hlds__add_class__PredArity_19, &hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__VarSet0_36, &hlds__make_hlds__add_class__VarSet_37);
        }
        {
          parse_tree__set_of_var__list_to_set_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_77_77, hlds__make_hlds__add_class__HeadVars_32, &hlds__make_hlds__add_class__NonLocals_33);
        }
        {
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_class__NonLocals_33, hlds__make_hlds__add_class__GoalInfo1_31, &hlds__make_hlds__add_class__GoalInfo2_34);
        }
        {
          hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__Markers_21, (MR_Integer) 13);
        }
        if (hlds__make_hlds__add_class__succeeded)
          {
            {
              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_class__GoalInfo2_34, &hlds__make_hlds__add_class__GoalInfo_35);
            }
          }
        else
          {
            {
              hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__Markers_21, (MR_Integer) 14);
            }
            if (hlds__make_hlds__add_class__succeeded)
              {
                {
                  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_class__GoalInfo2_34, &hlds__make_hlds__add_class__GoalInfo_35);
                }
              }
            else
              hlds__make_hlds__add_class__GoalInfo_35 = hlds__make_hlds__add_class__GoalInfo2_34;
          }
        {
          hlds__make_hlds__add_class__Var_68 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
        {
          hlds__make_hlds__qual_info__construct_pred_or_func_call_8_p_0(hlds__make_hlds__add_class__Var_68, hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__InstancePredName_29, hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__GoalInfo_35, &hlds__make_hlds__add_class__IntroducedGoal_38, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_53, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_54);
        }
        {
          hlds__make_hlds__add_class__IntroducedClause_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 1) = ((MR_Box) (hlds__make_hlds__add_class__IntroducedGoal_38));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 3) = ((MR_Box) (hlds__make_hlds__add_class__Context_22));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], &hlds__make_hlds__add_class__TVarNameMap_40);
        }
        {
          hlds__vartypes__vartypes_from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__ArgTypes_20, &hlds__make_hlds__add_class__VarTypes_41);
        }
        {
          hlds__make_hlds__add_class__HeadVarVec_42 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[3], hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__HeadVars_32);
        }
        {
          hlds__make_hlds__add_class__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_73, 0) = ((MR_Box) (hlds__make_hlds__add_class__IntroducedClause_39));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_class__Var_73, &hlds__make_hlds__add_class__ClausesRep_43);
        }
        {
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_class__RttiVarMaps_44);
        }
        {
          hlds__make_hlds__add_class__Var_76 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          *hlds__make_hlds__add_class__ClausesInfo_24 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_37));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__TVarNameMap_40));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_class__VarTypes_41));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_class__VarTypes_41));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_class__HeadVarVec_42));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_class__ClausesRep_43));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_class__Var_76));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_class__RttiVarMaps_44));
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) ((MR_Integer) 0));
        }
        *hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_50 = hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_49;
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_52 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_51;
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_2(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26;

    {
      hlds__make_hlds__add_class__check_instance_constraints_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26);
    }
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

    {
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
    return hlds__make_hlds__add_class__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__add_class__add_instance_defn_5_p_0(
  MR_Word hlds__make_hlds__add_class__StatusItem_6,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_36,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_37)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__ItemMercuryStatus_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__StatusItem_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_class__ItemInstanceInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__StatusItem_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_class__ClassName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_class__Types_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_class__OriginalTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_class__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_class__InstanceBody0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_class__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_class__InstanceModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 6)));
    MR_Word hlds__make_hlds__add_class__Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_class__InstanceStatus0_20;
    MR_Word hlds__make_hlds__add_class__InstanceStatus_21;
    MR_Word hlds__make_hlds__add_class__Classes_23;
    MR_Word hlds__make_hlds__add_class__InstanceTable0_24;
    MR_Integer hlds__make_hlds__add_class__ClassArity_25;
    MR_Word hlds__make_hlds__add_class__ClassId_26;
    MR_Word hlds__make_hlds__add_class__InstanceBody_27;
    MR_Integer hlds__make_hlds__add_class___SeqNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemInstanceInfo_10, (MR_Integer) 8)));
    MR_Word hlds__make_hlds__add_class__Var_28;
    MR_Box hlds__make_hlds__add_class__conv0_Var_28;

    {
      hlds__status__item_mercury_status_to_instance_status_2_p_0(hlds__make_hlds__add_class__ItemMercuryStatus_9, &hlds__make_hlds__add_class__InstanceStatus0_20);
    }
    if ((hlds__make_hlds__add_class__InstanceBody0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__status__instance_make_status_abstract_2_p_0(hlds__make_hlds__add_class__InstanceStatus0_20, &hlds__make_hlds__add_class__InstanceStatus_21);
      }
    else
      hlds__make_hlds__add_class__InstanceStatus_21 = hlds__make_hlds__add_class__InstanceStatus0_20;
    {
      hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_class__Classes_23);
    }
    {
      hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_34, &hlds__make_hlds__add_class__InstanceTable0_24);
    }
    {
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_class__Types_12, &hlds__make_hlds__add_class__ClassArity_25);
    }
    {
      hlds__make_hlds__add_class__ClassId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_26, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_11));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_26, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_25));
    }
    {
      hlds__make_hlds__state_var__expand_bang_state_pairs_in_instance_body_2_p_0(hlds__make_hlds__add_class__InstanceBody0_15, &hlds__make_hlds__add_class__InstanceBody_27);
    }
    {
      hlds__make_hlds__add_class__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__make_hlds__add_class__Classes_23, ((MR_Box) (hlds__make_hlds__add_class__ClassId_26)), &hlds__make_hlds__add_class__conv0_Var_28);
    }
    if (hlds__make_hlds__add_class__succeeded)
      {
        hlds__make_hlds__add_class__Var_28 = ((MR_Word) hlds__make_hlds__add_class__conv0_Var_28);
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__add_class__succeeded)
      {
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_49_49;
        MR_Word hlds__make_hlds__add_class__TypeInfo_50_50;
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_17_80;
        MR_Word hlds__make_hlds__add_class__ProofMap_30;
        MR_Word hlds__make_hlds__add_class__NewInstanceDefn_31;
        MR_Word hlds__make_hlds__add_class__OldInstanceDefns_32;
        MR_Word hlds__make_hlds__add_class__InstanceTable_33;
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38_38;
        MR_Word hlds__make_hlds__add_class__Var_40;
        MR_Word hlds__make_hlds__add_class__NewTypes_58;
        MR_Word hlds__make_hlds__add_class__NewContext_61;
        MR_Word hlds__make_hlds__add_class__NewInstanceBody_63;
        MR_Word hlds__make_hlds__add_class__NewTVarSet_65;
        MR_Word hlds__make_hlds__add_class__EquivInstanceDefns_75;
        MR_Word hlds__make_hlds__add_class__Var_76;
        MR_Word hlds__make_hlds__add_class__Var_77;
        MR_Box hlds__make_hlds__add_class__conv1_OldInstanceDefns_32;
        MR_Word hlds__make_hlds__add_class__Var_57;
        MR_Word hlds__make_hlds__add_class__Var_59;
        MR_Word hlds__make_hlds__add_class__Var_60;
        MR_Word hlds__make_hlds__add_class__Var_62;
        MR_Word hlds__make_hlds__add_class__Var_64;
        MR_Word hlds__make_hlds__add_class__Var_66;
        MR_Word hlds__make_hlds__add_class__Var_67;
        MR_Box hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_37;

        {
          mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_class__ProofMap_30);
        }
        {
          hlds__make_hlds__add_class__NewInstanceDefn_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 0) = ((MR_Box) (hlds__make_hlds__add_class__InstanceModuleName_17));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 1) = ((MR_Box) (hlds__make_hlds__add_class__Types_12));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 2) = ((MR_Box) (hlds__make_hlds__add_class__OriginalTypes_13));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 3) = ((MR_Box) (hlds__make_hlds__add_class__InstanceStatus_21));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 4) = ((MR_Box) (hlds__make_hlds__add_class__Context_18));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 5) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_14));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 6) = ((MR_Box) (hlds__make_hlds__add_class__InstanceBody_27));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_16));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, 9) = ((MR_Box) (hlds__make_hlds__add_class__ProofMap_30));
        }
        hlds__make_hlds__add_class__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
        hlds__make_hlds__add_class__TypeInfo_50_50 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[2];
        {
          mercury__map__lookup_3_p_0(hlds__make_hlds__add_class__TypeCtorInfo_49_49, hlds__make_hlds__add_class__TypeInfo_50_50, hlds__make_hlds__add_class__InstanceTable0_24, ((MR_Box) (hlds__make_hlds__add_class__ClassId_26)), &hlds__make_hlds__add_class__conv1_OldInstanceDefns_32);
        }
        hlds__make_hlds__add_class__OldInstanceDefns_32 = ((MR_Word) hlds__make_hlds__add_class__conv1_OldInstanceDefns_32);
        hlds__make_hlds__add_class__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 0)));
        hlds__make_hlds__add_class__NewTypes_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 1)));
        hlds__make_hlds__add_class__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 2)));
        hlds__make_hlds__add_class__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 3)));
        hlds__make_hlds__add_class__NewContext_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 4)));
        hlds__make_hlds__add_class__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 5)));
        hlds__make_hlds__add_class__NewInstanceBody_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 6)));
        hlds__make_hlds__add_class__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 7)));
        hlds__make_hlds__add_class__NewTVarSet_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 8)));
        hlds__make_hlds__add_class__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_31, (MR_Integer) 9)));
        hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__NewInstanceBody_63)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_class__succeeded)
          {
            hlds__make_hlds__add_class__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewInstanceBody_63, (MR_Integer) 0)));
            {
              hlds__make_hlds__add_class__report_any_overlapping_instance_declarations_7_p_0(hlds__make_hlds__add_class__ClassId_26, hlds__make_hlds__add_class__NewTypes_58, hlds__make_hlds__add_class__NewTVarSet_65, hlds__make_hlds__add_class__NewContext_61, hlds__make_hlds__add_class__OldInstanceDefns_32, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_36, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38_38);
            }
          }
        else
          hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38_38 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_36;
        {
          hlds__make_hlds__add_class__Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_76, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[1]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_76, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_5_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_76, 3) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_31));
        }
        hlds__make_hlds__add_class__TypeCtorInfo_17_80 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
        {
          mercury__list__filter_3_p_0(hlds__make_hlds__add_class__TypeCtorInfo_17_80, hlds__make_hlds__add_class__Var_76, hlds__make_hlds__add_class__OldInstanceDefns_32, &hlds__make_hlds__add_class__EquivInstanceDefns_75);
        }
        {
          hlds__make_hlds__add_class__Var_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_77, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_instance_defn_5_p_0_2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_77, 3) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_31));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_77, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassId_26));
        }
        {
          mercury__list__foldl_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_17_80, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__Var_77, hlds__make_hlds__add_class__EquivInstanceDefns_75, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38_38)), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_37);
        }
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_37 = ((MR_Word) hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_37);
        {
          hlds__make_hlds__add_class__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_31));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_40, 1) = ((MR_Box) (hlds__make_hlds__add_class__OldInstanceDefns_32));
        }
        {
          mercury__map__det_update_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_49_49, hlds__make_hlds__add_class__TypeInfo_50_50, ((MR_Box) (hlds__make_hlds__add_class__ClassId_26)), ((MR_Box) (hlds__make_hlds__add_class__Var_40)), hlds__make_hlds__add_class__InstanceTable0_24, &hlds__make_hlds__add_class__InstanceTable_33);
        }
        {
          hlds__hlds_module__module_info_set_instance_table_3_p_0(hlds__make_hlds__add_class__InstanceTable_33, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_34, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35);
        }
      }
    else
      {
        {
          hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(hlds__make_hlds__add_class__ClassName_11, hlds__make_hlds__add_class__ClassArity_25, hlds__make_hlds__add_class__Context_18, (MR_String) "instance declaration", hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_36, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_37);
        }
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_35 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_34;
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_3(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
    MR_Word hlds__make_hlds__add_class__conv3_HeadVar__2_104;

    {
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__162__1_2_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), &hlds__make_hlds__add_class__conv3_HeadVar__2_104);
    }
    if (hlds__make_hlds__add_class__succeeded)
      {
        *hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv3_HeadVar__2_104));
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
      }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_2(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
    MR_Word hlds__make_hlds__add_class__conv2_HeadVar__2_104;

    {
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__add_typeclass_defn__162__1_2_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), &hlds__make_hlds__add_class__conv2_HeadVar__2_104);
    }
    if (hlds__make_hlds__add_class__succeeded)
      {
        *hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv2_HeadVar__2_104));
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
      }
    return hlds__make_hlds__add_class__succeeded;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1(
  MR_Box hlds__make_hlds__add_class__closure_arg,
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_class__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
    MR_Word hlds__make_hlds__add_class__conv0_HeadVar__3_3;

    {
      hlds__make_hlds__add_class__conv0_HeadVar__3_3 = hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
    hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv0_HeadVar__3_3));
    return hlds__make_hlds__add_class__wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__add_class__add_typeclass_defn_5_p_0(
  MR_Word hlds__make_hlds__add_class__SectionItem_6,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_58,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_59,
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_60,
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61)
{
  {
    MR_bool hlds__make_hlds__add_class__succeeded;
    MR_Word hlds__make_hlds__add_class__TypeInfo_96_96;
    MR_Word hlds__make_hlds__add_class__SectionInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SectionItem_6, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_class__ItemTypeClassInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SectionItem_6, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_class__ItemMercuryStatus_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SectionInfo_9, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_class__NeedQual_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SectionInfo_9, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_class__TypeClassStatus0_13;
    MR_Word hlds__make_hlds__add_class__ClassName_14;
    MR_Word hlds__make_hlds__add_class__ClassParamVars_15;
    MR_Word hlds__make_hlds__add_class__Constraints_16;
    MR_Word hlds__make_hlds__add_class__FunDeps_17;
    MR_Word hlds__make_hlds__add_class__Interface_18;
    MR_Word hlds__make_hlds__add_class__VarSet_19;
    MR_Word hlds__make_hlds__add_class__Context_20;
    MR_Word hlds__make_hlds__add_class__Classes0_22;
    MR_Integer hlds__make_hlds__add_class__ClassArity_23;
    MR_Word hlds__make_hlds__add_class__ClassId_24;
    MR_Word hlds__make_hlds__add_class__TypeClassStatus1_25;
    MR_Word hlds__make_hlds__add_class__HLDSFunDeps_27;
    MR_Word hlds__make_hlds__add_class__Var_62;
    MR_Integer hlds__make_hlds__add_class___SeqNum_21;
    MR_Word hlds__make_hlds__add_class__OldDefn_28;
    MR_Box hlds__make_hlds__add_class__conv1_OldDefn_28;

    {
      hlds__status__item_mercury_status_to_typeclass_status_2_p_0(hlds__make_hlds__add_class__ItemMercuryStatus_11, &hlds__make_hlds__add_class__TypeClassStatus0_13);
    }
    hlds__make_hlds__add_class__ClassName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 0)));
    hlds__make_hlds__add_class__ClassParamVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 1)));
    hlds__make_hlds__add_class__Constraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 2)));
    hlds__make_hlds__add_class__FunDeps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 3)));
    hlds__make_hlds__add_class__Interface_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 4)));
    hlds__make_hlds__add_class__VarSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 5)));
    hlds__make_hlds__add_class__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 6)));
    hlds__make_hlds__add_class___SeqNum_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_10, (MR_Integer) 7)));
    {
      hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_58, &hlds__make_hlds__add_class__Classes0_22);
    }
    hlds__make_hlds__add_class__TypeInfo_96_96 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
    {
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_96_96, hlds__make_hlds__add_class__ClassParamVars_15, &hlds__make_hlds__add_class__ClassArity_23);
    }
    {
      hlds__make_hlds__add_class__ClassId_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_24, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_14));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_24, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_23));
    }
    if ((hlds__make_hlds__add_class__Interface_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        hlds__status__typeclass_make_status_abstract_2_p_0(hlds__make_hlds__add_class__TypeClassStatus0_13, &hlds__make_hlds__add_class__TypeClassStatus1_25);
      }
    else
      hlds__make_hlds__add_class__TypeClassStatus1_25 = hlds__make_hlds__add_class__TypeClassStatus0_13;
    {
      hlds__make_hlds__add_class__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_62, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_62, 1) = ((MR_Box) (hlds__make_hlds__add_class__add_typeclass_defn_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Var_62, 3) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_15));
    }
    {
      hlds__make_hlds__add_class__HLDSFunDeps_27 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, hlds__make_hlds__add_class__Var_62, hlds__make_hlds__add_class__FunDeps_17);
    }
    {
      hlds__make_hlds__add_class__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__make_hlds__add_class__Classes0_22, ((MR_Box) (hlds__make_hlds__add_class__ClassId_24)), &hlds__make_hlds__add_class__conv1_OldDefn_28);
    }
    if (hlds__make_hlds__add_class__succeeded)
      {
        hlds__make_hlds__add_class__OldDefn_28 = ((MR_Word) hlds__make_hlds__add_class__conv1_OldDefn_28);
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__add_class__succeeded)
      {
        MR_Word hlds__make_hlds__add_class__OldTypeClassStatus_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__add_class__OldConstraints_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__add_class__OldFunDeps_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__add_class__OldClassParamVars_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__add_class__OldInterface_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__add_class__OldMethods_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 7)));
        MR_Word hlds__make_hlds__add_class__OldVarSet_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 8)));
        MR_Word hlds__make_hlds__add_class__OldContext_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 9)));
        MR_Word hlds__make_hlds__add_class__TypeClassStatus_39;
        MR_Word hlds__make_hlds__add_class__ClassMethods0_41;
        MR_Word hlds__make_hlds__add_class__ClassInterface_42;
        MR_Word hlds__make_hlds__add_class___OldAncestors_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__add_class___OldKinds_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_28, (MR_Integer) 5)));

        {
          hlds__status__typeclass_combine_status_3_p_0(hlds__make_hlds__add_class__TypeClassStatus1_25, hlds__make_hlds__add_class__OldTypeClassStatus_29, &hlds__make_hlds__add_class__TypeClassStatus_39);
        }
        if ((hlds__make_hlds__add_class__OldInterface_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__make_hlds__add_class__ClassMethods0_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            hlds__make_hlds__add_class__ClassInterface_42 = hlds__make_hlds__add_class__Interface_18;
          }
        else
          {
            hlds__make_hlds__add_class__ClassMethods0_41 = hlds__make_hlds__add_class__OldMethods_36;
            hlds__make_hlds__add_class__ClassInterface_42 = hlds__make_hlds__add_class__OldInterface_35;
          }
        {
          hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(hlds__make_hlds__add_class__OldClassParamVars_33, hlds__make_hlds__add_class__OldVarSet_37, hlds__make_hlds__add_class__OldConstraints_30, hlds__make_hlds__add_class__ClassParamVars_15, hlds__make_hlds__add_class__VarSet_19, hlds__make_hlds__add_class__Constraints_16);
        }
        hlds__make_hlds__add_class__succeeded = !(hlds__make_hlds__add_class__succeeded);
        if (hlds__make_hlds__add_class__succeeded)
          {
            {
              hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassArity_23, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_20, hlds__make_hlds__add_class__OldContext_38, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[13]), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_60, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61);
            }
            *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_59 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_58;
          }
        else
          {
            {
              hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(hlds__make_hlds__add_class__OldFunDeps_31, hlds__make_hlds__add_class__HLDSFunDeps_27);
            }
            hlds__make_hlds__add_class__succeeded = !(hlds__make_hlds__add_class__succeeded);
            if (hlds__make_hlds__add_class__succeeded)
              {
                {
                  hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassArity_23, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_20, hlds__make_hlds__add_class__OldContext_38, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[15]), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_60, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61);
                }
                *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_59 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_58;
              }
            else
              {
                MR_Word hlds__make_hlds__add_class__ErrorOrPrevDef_153;
                MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_70_154;
                MR_Word hlds__make_hlds__add_class__Var_45;
                MR_Word hlds__make_hlds__add_class__Var_46;

                hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__Interface_18)) == (MR_mktag((MR_Integer) 1)));
                if (hlds__make_hlds__add_class__succeeded)
                  {
                    hlds__make_hlds__add_class__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_18, (MR_Integer) 0)));
                    hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__OldInterface_35)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__add_class__succeeded)
                      hlds__make_hlds__add_class__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OldInterface_35, (MR_Integer) 0)));
                  }
                if (hlds__make_hlds__add_class__succeeded)
                  {
                    MR_Word hlds__make_hlds__add_class__Var_79 = (MR_Word) hlds__make_hlds__add_class__TypeClassStatus_39;

                    hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__Var_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__make_hlds__add_class__succeeded)
                      hlds__make_hlds__add_class__STATE_VARIABLE_Specs_70_154 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_60;
                    else
                      {
                        {
                          hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassArity_23, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_20, hlds__make_hlds__add_class__OldContext_38, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_60, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_70_154);
                        }
                      }
                    hlds__make_hlds__add_class__ErrorOrPrevDef_153 = (MR_Integer) 1;
                  }
                else
                  {
                    hlds__make_hlds__add_class__ErrorOrPrevDef_153 = (MR_Integer) 0;
                    hlds__make_hlds__add_class__STATE_VARIABLE_Specs_70_154 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_60;
                  }
                switch (hlds__make_hlds__add_class__ErrorOrPrevDef_153) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word hlds__make_hlds__add_class__ClassMethods_51;
                      MR_Word hlds__make_hlds__add_class__Kinds_53;
                      MR_Word hlds__make_hlds__add_class__ClassDefn_54;
                      MR_Word hlds__make_hlds__add_class__Classes_55;
                      MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_84_84;

                      if ((hlds__make_hlds__add_class__Interface_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          hlds__make_hlds__add_class__ClassMethods_51 = hlds__make_hlds__add_class__ClassMethods0_41;
                          hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_84_84 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_58;
                          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_70_154;
                        }
                      else
                        {
                          MR_Word hlds__make_hlds__add_class__TypeCtorInfo_107_107;
                          MR_Word hlds__make_hlds__add_class__Methods_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_18, (MR_Integer) 0)));
                          MR_Word hlds__make_hlds__add_class__PredProcIds0_49;
                          MR_Word hlds__make_hlds__add_class__PredProcIds1_50;
                          MR_Word hlds__make_hlds__add_class__Var_83;

                          {
                            hlds__make_hlds__add_class__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_83, 0) = ((MR_Box) (hlds__make_hlds__add_class__ItemMercuryStatus_11));
                          }
                          {
                            hlds__make_hlds__add_class__module_add_class_interface_11_p_0(hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassParamVars_15, hlds__make_hlds__add_class__TypeClassStatus_39, hlds__make_hlds__add_class__Var_83, hlds__make_hlds__add_class__NeedQual_12, hlds__make_hlds__add_class__Methods_48, &hlds__make_hlds__add_class__PredProcIds0_49, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_58, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_84_84, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_70_154, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61);
                          }
                          hlds__make_hlds__add_class__TypeCtorInfo_107_107 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                          {
                            mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], hlds__make_hlds__add_class__TypeCtorInfo_107_107, (MR_Word) &hlds__make_hlds__add_class_scalar_common_4[0], hlds__make_hlds__add_class__PredProcIds0_49, &hlds__make_hlds__add_class__PredProcIds1_50);
                          }
                          {
                            mercury__list__sort_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_107_107, hlds__make_hlds__add_class__PredProcIds1_50, &hlds__make_hlds__add_class__ClassMethods_51);
                          }
                        }
                      {
                        hlds__make_hlds__add_class__Kinds_53 = mercury__map__init_0_f_0(hlds__make_hlds__add_class__TypeInfo_96_96, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
                      }
                      {
                        hlds__make_hlds__add_class__ClassDefn_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_54, 0) = ((MR_Box) (hlds__make_hlds__add_class__TypeClassStatus_39));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_54, 1) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_16));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_54, 2) = ((MR_Box) (hlds__make_hlds__add_class__HLDSFunDeps_27));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_54, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_54, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_15));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_54, 5) = ((MR_Box) (hlds__make_hlds__add_class__Kinds_53));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_54, 6) = ((MR_Box) (hlds__make_hlds__add_class__ClassInterface_42));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_54, 7) = ((MR_Box) (hlds__make_hlds__add_class__ClassMethods_51));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_54, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_19));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_54, 9) = ((MR_Box) (hlds__make_hlds__add_class__Context_20));
                      }
                      {
                        mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, ((MR_Box) (hlds__make_hlds__add_class__ClassId_24)), ((MR_Box) (hlds__make_hlds__add_class__ClassDefn_54)), hlds__make_hlds__add_class__Classes0_22, &hlds__make_hlds__add_class__Classes_55);
                      }
                      {
                        hlds__hlds_module__module_info_set_class_table_3_p_0(hlds__make_hlds__add_class__Classes_55, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_84_84, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_59);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_59 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_58;
                      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_70_154;
                    }
                    break;
                }
              }
          }
      }
    else
      {
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_109_149;
        MR_Word hlds__make_hlds__add_class__Instances0_56;
        MR_Word hlds__make_hlds__add_class__Instances_57;
        MR_Word hlds__make_hlds__add_class__ClassMethods_136;
        MR_Word hlds__make_hlds__add_class__Kinds_138;
        MR_Word hlds__make_hlds__add_class__ClassDefn_139;
        MR_Word hlds__make_hlds__add_class__Classes_140;
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_84_143;
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_145;

        if ((hlds__make_hlds__add_class__Interface_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            hlds__make_hlds__add_class__ClassMethods_136 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_84_143 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_58;
            *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_60;
          }
        else
          {
            MR_Word hlds__make_hlds__add_class__TypeCtorInfo_107_120;
            MR_Word hlds__make_hlds__add_class__Methods_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_18, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_class__PredProcIds0_115;
            MR_Word hlds__make_hlds__add_class__PredProcIds1_116;
            MR_Word hlds__make_hlds__add_class__Var_117;

            {
              hlds__make_hlds__add_class__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Var_117, 0) = ((MR_Box) (hlds__make_hlds__add_class__ItemMercuryStatus_11));
            }
            {
              hlds__make_hlds__add_class__module_add_class_interface_11_p_0(hlds__make_hlds__add_class__ClassName_14, hlds__make_hlds__add_class__ClassParamVars_15, hlds__make_hlds__add_class__TypeClassStatus1_25, hlds__make_hlds__add_class__Var_117, hlds__make_hlds__add_class__NeedQual_12, hlds__make_hlds__add_class__Methods_114, &hlds__make_hlds__add_class__PredProcIds0_115, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_58, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_84_143, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_60, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61);
            }
            hlds__make_hlds__add_class__TypeCtorInfo_107_120 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            {
              mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], hlds__make_hlds__add_class__TypeCtorInfo_107_120, (MR_Word) &hlds__make_hlds__add_class_scalar_common_4[1], hlds__make_hlds__add_class__PredProcIds0_115, &hlds__make_hlds__add_class__PredProcIds1_116);
            }
            {
              mercury__list__sort_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_107_120, hlds__make_hlds__add_class__PredProcIds1_116, &hlds__make_hlds__add_class__ClassMethods_136);
            }
          }
        {
          hlds__make_hlds__add_class__Kinds_138 = mercury__map__init_0_f_0(hlds__make_hlds__add_class__TypeInfo_96_96, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
        {
          hlds__make_hlds__add_class__ClassDefn_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_139, 0) = ((MR_Box) (hlds__make_hlds__add_class__TypeClassStatus1_25));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_139, 1) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_16));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_139, 2) = ((MR_Box) (hlds__make_hlds__add_class__HLDSFunDeps_27));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_139, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_139, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassParamVars_15));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_139, 5) = ((MR_Box) (hlds__make_hlds__add_class__Kinds_138));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_139, 6) = ((MR_Box) (hlds__make_hlds__add_class__Interface_18));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_139, 7) = ((MR_Box) (hlds__make_hlds__add_class__ClassMethods_136));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_139, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_19));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassDefn_139, 9) = ((MR_Box) (hlds__make_hlds__add_class__Context_20));
        }
        hlds__make_hlds__add_class__TypeCtorInfo_109_149 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
        {
          mercury__map__set_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_109_149, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, ((MR_Box) (hlds__make_hlds__add_class__ClassId_24)), ((MR_Box) (hlds__make_hlds__add_class__ClassDefn_139)), hlds__make_hlds__add_class__Classes0_22, &hlds__make_hlds__add_class__Classes_140);
        }
        {
          hlds__hlds_module__module_info_set_class_table_3_p_0(hlds__make_hlds__add_class__Classes_140, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_84_143, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_145);
        }
        {
          hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_145, &hlds__make_hlds__add_class__Instances0_56);
        }
        {
          mercury__map__det_insert_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_109_149, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__add_class__ClassId_24)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__add_class__Instances0_56, &hlds__make_hlds__add_class__Instances_57);
        }
        {
          hlds__hlds_module__module_info_set_instance_table_3_p_0(hlds__make_hlds__add_class__Instances_57, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_87_145, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_59);
        }
      }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_class__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.make_hlds.add_class. */
