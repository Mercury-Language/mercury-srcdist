/*
** Automatically generated from `add_class.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "solutions.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_clause.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.add_type.mih"
#include "hlds.make_hlds.goal_expr_to_goal.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.make_hlds_warn.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "hlds.make_hlds.state_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 483 "add_class.m"
struct hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0_s {
#line 483 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__HeadVar__3_40;
#line 483 "add_class.m"
  MR_Cont hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__cont;
#line 483 "add_class.m"
  void * hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__cont_env_ptr;
#line 483 "add_class.m"
  MR_bool hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__succeeded;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__Types_16;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__VarSet_20;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherTypes_27;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherBody_29;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherVarSet_31;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__Renaming_35;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__NewOtherTypes_36;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__Context_43;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherContext_44;
#line 487 "add_class.m"
  MR_Box hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__conv0_OtherInstanceDefn_23;
#line 483 "add_class.m"
};

#line 483 "add_class.m"
struct hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0_s {
#line 483 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__wrapper_arg_1;
#line 483 "add_class.m"
  MR_Cont hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__cont;
#line 483 "add_class.m"
  void * hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__cont_env_ptr;
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__conv0_HeadVar__3_40;
#line 483 "add_class.m"
};


#line 197 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 200 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 203 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 206 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 209 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 212 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 215 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 218 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0;

#line 221 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 224 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0;

#line 227 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;

#line 230 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_class__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_term__type_ctor_info_context_0;

#line 660 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__660__1_2_p_0(
#line 660 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 660 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_27);

#line 487 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_2(
#line 487 "add_class.m"
  void * hlds__make_hlds__add_class__env_ptr_arg);

#line 483 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_1(
#line 483 "add_class.m"
  void * hlds__make_hlds__add_class__env_ptr_arg);

#line 483 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0(
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewInstanceDefn_6,
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefns_7,
#line 483 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__3_40,
#line 483 "add_class.m"
  MR_Cont hlds__make_hlds__add_class__cont,
#line 483 "add_class.m"
  void * hlds__make_hlds__add_class__cont_env_ptr);

#line 207 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__207__1_3_f_0(
#line 207 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 207 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_11,
#line 207 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__3_12);

#line 157 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_p_0(
#line 157 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_87,
#line 157 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__2_88);

#line 717 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
#line 717 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Name_7,
#line 717 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__Arity_8,
#line 717 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_9,
#line 717 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_10,
#line 717 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 717 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16);

#line 706 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
#line 706 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_7,
#line 706 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__Arity_8,
#line 706 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_9,
#line 706 "add_class.m"
  MR_String hlds__make_hlds__add_class__Description_10,
#line 706 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 706 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16);

#line 690 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
#line 690 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredInfo_4,
#line 690 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13,
#line 690 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14);

#line 660 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
#line 660 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg);

#line 648 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_16,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_17,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceClause_18,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVarSet0_19,
#line 648 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__TVarSet_20,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_43,
#line 648 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_44,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_45,
#line 648 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_46,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_47,
#line 648 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_48,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49,
#line 648 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50);

#line 575 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(
#line 575 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_3,
#line 575 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_4);

#line 533 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_instance_constraints_5_p_0(
#line 533 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_6,
#line 533 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_7,
#line 533 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_8,
#line 533 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25,
#line 533 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26);

#line 499 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__report_overlapping_instance_declaration_4_p_0(
#line 499 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 499 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_2,
#line 499 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 499 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16);

#line 496 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_3(
#line 496 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 496 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 496 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 496 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3);

#line 483 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_1(
#line 483 "add_class.m"
  void * hlds__make_hlds__add_class__env_ptr_arg);

#line 483 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2(
#line 483 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 483 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_1,
#line 483 "add_class.m"
  MR_Cont hlds__make_hlds__add_class__cont,
#line 483 "add_class.m"
  void * hlds__make_hlds__add_class__cont_env_ptr);

#line 477 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0(
#line 477 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewInstanceDefn_6,
#line 477 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefns_7,
#line 477 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_8,
#line 477 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_38,
#line 477 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_39);

#line 394 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_method_modes_7_p_0(
#line 394 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 394 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2,
#line 394 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3,
#line 394 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4,
#line 394 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5,
#line 394 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
#line 394 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7);

#line 347 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_9_p_0(
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_10,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Name_11,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_12,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_13,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__MaybePredIdProcId_14,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_44,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_45,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_46,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_47);

#line 334 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_p_0(
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Name_1,
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_2,
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__3_3,
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_4,
#line 334 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__5_5,
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_6,
#line 334 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_7,
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_8,
#line 334 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_9);

#line 277 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_p_0(
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Name_11,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_12,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_13,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_14,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51,
#line 277 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53,
#line 277 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55,
#line 277 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);

#line 272 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(
#line 272 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_2);

#line 267 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_9_p_0_2(
#line 267 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 267 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 267 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 267 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 267 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 267 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 267 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 267 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7);

#line 257 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_9_p_0_1(
#line 257 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 257 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);

#line 249 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_9_p_0(
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Name_10,
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_11,
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Methods_12,
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_13,
#line 249 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__PredProcIds_14,
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_20,
#line 249 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_21,
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_22,
#line 249 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_23);

#line 238 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
#line 238 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldFunDeps0_3,
#line 238 "add_class.m"
  MR_Word hlds__make_hlds__add_class__FunDeps0_4);

#line 222 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__constraints_are_identical_6_p_0(
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVars0_7,
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVarSet_8,
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldConstraints0_9,
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_10,
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__VarSet_11,
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Constraints_12);

#line 211 "add_class.m"
static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
#line 211 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeInfo_for_T_17,
#line 211 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 211 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__N_2,
#line 211 "add_class.m"
  MR_Box hlds__make_hlds__add_class__X_3);

#line 207 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
#line 207 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 207 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 207 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2);

#line 198 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
#line 198 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 198 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_2);

#line 642 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1(
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 642 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 642 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 642 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_8,
#line 642 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_9,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_10,
#line 642 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_11);

#line 530 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_2(
#line 530 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 530 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 530 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 530 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3);

#line 528 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_1(
#line 528 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 528 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);

#line 157 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_6_p_0_3(
#line 157 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 157 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 157 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2);

#line 157 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_6_p_0_2(
#line 157 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 157 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 157 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2);

#line 92 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_6_p_0_1(
#line 92 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 92 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1);


static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[41][2];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[2][6];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[3][5];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_5[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_6[1][17];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[2][7];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_8[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][13];

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_10[2][1];




static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_1[41][2] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The superclass constraints do not match."))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "The functional dependencies do not match."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[9])))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[9])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "instance constraints are incompatible with"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "without preceding typeclass declaration."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[9])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "method declaration."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[9])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: multiply defined (or overlapping)"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "instance declarations for class"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Previous instance declaration was here."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_10[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In instance declaration for class "))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "instance constraints here."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_10[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: no mode declaration"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for type class method predicate"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: mode declaration for type class method"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "without corresponding"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_2[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_add_class_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_add_class_defn_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_8[0])),
    ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_9_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_3[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_term__type_ctor_info_context_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_4[3][5] = {
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
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_import_status_0)),
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_7[2][7] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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

static /* final */ const MR_Box hlds__make_hlds__add_class_scalar_common_9[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_passes__hlds__make_hlds__make_hlds_passes__type_ctor_info_item_status_0)),
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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[29])))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[33])))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1145 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1153 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1161 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct2 hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1170 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__maybe__pti_maybe_1__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0
  }
};

#line 1178 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1186 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1194 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1202 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__set_ordlist__pti_set_ordlist_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1210 "hlds.make_hlds.add_class.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_class__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__add_class__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0
  }
};

#line 1218 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_class__maybe__ti_maybe_1pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0builtin__type_ctor_info_int_0
  }
};

#line 1226 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_class__list__pti_list_1__plain_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0
  }
};

#line 1234 "hlds.make_hlds.add_class.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_class__pair__pti_pair_2__plain_term__type_ctor_info_context_0__plain_term__type_ctor_info_context_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
  }
};

#line 660 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__660__1_2_p_0(
#line 660 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 660 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_27)
#line 660 "add_class.m"
{
#line 660 "add_class.m"
  {
#line 660 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__PredOrFunc_15 == hlds__make_hlds__add_class__ClausePredOrFunc_27);

#line 660 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 660 "add_class.m"
  }
#line 660 "add_class.m"
}

#line 487 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_2(
#line 487 "add_class.m"
  void * hlds__make_hlds__add_class__env_ptr_arg)
#line 487 "add_class.m"
{
#line 487 "add_class.m"
  {
#line 487 "add_class.m"
    struct hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0_s * hlds__make_hlds__add_class__env_ptr = (struct hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0_s *) hlds__make_hlds__add_class__env_ptr_arg;

#line 487 "add_class.m"
    (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23 = ((MR_Word) (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__conv0_OtherInstanceDefn_23);
#line 487 "add_class.m"
    {
#line 487 "add_class.m"
      hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_1(hlds__make_hlds__add_class__env_ptr);
#line 487 "add_class.m"
      return;
    }
#line 487 "add_class.m"
  }
#line 487 "add_class.m"
}

#line 483 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_1(
#line 483 "add_class.m"
  void * hlds__make_hlds__add_class__env_ptr_arg)
#line 483 "add_class.m"
{
#line 483 "add_class.m"
  {
#line 483 "add_class.m"
    struct hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0_s * hlds__make_hlds__add_class__env_ptr = (struct hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0_s *) hlds__make_hlds__add_class__env_ptr_arg;

#line 483 "add_class.m"
    {
#line 488 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23, (MR_Integer) 0)));
#line 488 "add_class.m"
      MR_Word hlds__make_hlds__add_class___OtherStatus_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23, (MR_Integer) 1)));
#line 488 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_26_26;
#line 488 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_28_28;
#line 488 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_30_30;
#line 488 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_32_32;
#line 490 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_33_33;
#line 491 "add_class.m"
      MR_Word hlds__make_hlds__add_class___NewVarSet_34;
#line 494 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_37_37;

#line 488 "add_class.m"
      (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherContext_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23, (MR_Integer) 2)));
#line 488 "add_class.m"
      hlds__make_hlds__add_class__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23, (MR_Integer) 3)));
#line 488 "add_class.m"
      (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherTypes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23, (MR_Integer) 4)));
#line 488 "add_class.m"
      hlds__make_hlds__add_class__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23, (MR_Integer) 5)));
#line 488 "add_class.m"
      (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherBody_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23, (MR_Integer) 6)));
#line 488 "add_class.m"
      hlds__make_hlds__add_class__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23, (MR_Integer) 7)));
#line 488 "add_class.m"
      (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherVarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23, (MR_Integer) 8)));
#line 488 "add_class.m"
      hlds__make_hlds__add_class__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherInstanceDefn_23, (MR_Integer) 9)));
#line 490 "add_class.m"
      (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherBody_29)) == (MR_mktag((MR_Integer) 1)));
#line 490 "add_class.m"
      if ((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__succeeded)
#line 490 "add_class.m"
        {
#line 490 "add_class.m"
          hlds__make_hlds__add_class__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherBody_29, (MR_Integer) 0)));
#line 483 "add_class.m"
          {
#line 491 "add_class.m"
            {
#line 491 "add_class.m"
              parse_tree__prog_data__tvarset_merge_renaming_4_p_0((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__VarSet_20, (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherVarSet_31, &hlds__make_hlds__add_class___NewVarSet_34, &(hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__Renaming_35);
            }
#line 492 "add_class.m"
            {
#line 492 "add_class.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__Renaming_35, (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherTypes_27, &(hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__NewOtherTypes_36);
            }
#line 494 "add_class.m"
            {
#line 494 "add_class.m"
              (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__succeeded = parse_tree__prog_type__type_list_subsumes_3_p_0((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__Types_16, (hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__NewOtherTypes_36, &hlds__make_hlds__add_class__V_37_37);
            }
#line 483 "add_class.m"
            if ((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__succeeded)
#line 483 "add_class.m"
              {
#line 483 "add_class.m"
                {
#line 483 "add_class.m"
                  MR_Word base;
#line 483 "add_class.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 483 "add_class.m"
                  *((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__HeadVar__3_40) = base;
#line 483 "add_class.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__Context_43));
#line 483 "add_class.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__OtherContext_44));
#line 483 "add_class.m"
                }
#line 483 "add_class.m"
                {
#line 483 "add_class.m"
                  ((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__cont)((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__cont_env_ptr);
#line 483 "add_class.m"
                  return;
                }
#line 483 "add_class.m"
              }
#line 483 "add_class.m"
          }
#line 490 "add_class.m"
        }
#line 483 "add_class.m"
    }
#line 483 "add_class.m"
  }
#line 483 "add_class.m"
}

#line 483 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0(
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewInstanceDefn_6,
#line 483 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefns_7,
#line 483 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__3_40,
#line 483 "add_class.m"
  MR_Cont hlds__make_hlds__add_class__cont,
#line 483 "add_class.m"
  void * hlds__make_hlds__add_class__cont_env_ptr)
#line 483 "add_class.m"
{
#line 483 "add_class.m"
  {
#line 483 "add_class.m"
    struct hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0_s hlds__make_hlds__add_class__env;

#line 483 "add_class.m"
    (hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__HeadVar__3_40 = hlds__make_hlds__add_class__HeadVar__3_40;
#line 483 "add_class.m"
    (hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__cont = hlds__make_hlds__add_class__cont;
#line 483 "add_class.m"
    (hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__cont_env_ptr = hlds__make_hlds__add_class__cont_env_ptr;
#line 483 "add_class.m"
    {
#line 483 "add_class.m"
      MR_Word hlds__make_hlds__add_class__TypeCtorInfo_45_45;
#line 483 "add_class.m"
      MR_Word hlds__make_hlds__add_class__Body_18;
#line 484 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_6, (MR_Integer) 0)));
#line 484 "add_class.m"
      MR_Word hlds__make_hlds__add_class___Status_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_6, (MR_Integer) 1)));
#line 484 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_15_15;
#line 484 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_17_17;
#line 484 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_19_19;
#line 484 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_21_21;
#line 486 "add_class.m"
      MR_Word hlds__make_hlds__add_class__V_22_22;

#line 484 "add_class.m"
      (hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__Context_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_6, (MR_Integer) 2)));
#line 484 "add_class.m"
      hlds__make_hlds__add_class__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_6, (MR_Integer) 3)));
#line 484 "add_class.m"
      (hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__Types_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_6, (MR_Integer) 4)));
#line 484 "add_class.m"
      hlds__make_hlds__add_class__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_6, (MR_Integer) 5)));
#line 484 "add_class.m"
      hlds__make_hlds__add_class__Body_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_6, (MR_Integer) 6)));
#line 484 "add_class.m"
      hlds__make_hlds__add_class__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_6, (MR_Integer) 7)));
#line 484 "add_class.m"
      (hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__VarSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_6, (MR_Integer) 8)));
#line 484 "add_class.m"
      hlds__make_hlds__add_class__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_6, (MR_Integer) 9)));
#line 486 "add_class.m"
      (hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__Body_18)) == (MR_mktag((MR_Integer) 1)));
#line 486 "add_class.m"
      if ((hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__succeeded)
#line 486 "add_class.m"
        {
#line 486 "add_class.m"
          hlds__make_hlds__add_class__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Body_18, (MR_Integer) 0)));
#line 1473 "hlds.make_hlds.add_class.c"
          hlds__make_hlds__add_class__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 487 "add_class.m"
          {
#line 487 "add_class.m"
            mercury__list__member_2_p_1(hlds__make_hlds__add_class__TypeCtorInfo_45_45, &(hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_env_0__conv0_OtherInstanceDefn_23, hlds__make_hlds__add_class__InstanceDefns_7, hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0_2, &hlds__make_hlds__add_class__env);
          }
#line 486 "add_class.m"
        }
#line 483 "add_class.m"
    }
#line 483 "add_class.m"
  }
#line 483 "add_class.m"
}

#line 207 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__207__1_3_f_0(
#line 207 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 207 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_11,
#line 207 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__3_12)
#line 207 "add_class.m"
{
#line 207 "add_class.m"
  {
#line 207 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 207 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HeadVar__4_13;
#line 207 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__N_9;

#line 208 "add_class.m"
    {
#line 208 "add_class.m"
      hlds__make_hlds__add_class__N_9 = hlds__make_hlds__add_class__get_list_index_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], hlds__make_hlds__add_class__TVars_4, (MR_Integer) 1, ((MR_Box) (hlds__make_hlds__add_class__HeadVar__2_11)));
    }
#line 207 "add_class.m"
    {
#line 207 "add_class.m"
      hlds__make_hlds__add_class__HeadVar__4_13 = mercury__set__insert_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, hlds__make_hlds__add_class__HeadVar__3_12, ((MR_Box) (hlds__make_hlds__add_class__N_9)));
    }
#line 207 "add_class.m"
    return hlds__make_hlds__add_class__HeadVar__4_13;
#line 207 "add_class.m"
  }
#line 207 "add_class.m"
}

#line 157 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_p_0(
#line 157 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_87,
#line 157 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__2_88)
#line 157 "add_class.m"
{
#line 157 "add_class.m"
  {
#line 157 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__HeadVar__1_87)) == (MR_mktag((MR_Integer) 1)));
#line 157 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pred_53;
#line 157 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__Proc_54;
#line 157 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_89_89;

#line 158 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 158 "add_class.m"
      {
#line 158 "add_class.m"
        hlds__make_hlds__add_class__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_87, (MR_Integer) 0)));
#line 158 "add_class.m"
        hlds__make_hlds__add_class__Pred_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_89_89, (MR_Integer) 0)));
#line 158 "add_class.m"
        hlds__make_hlds__add_class__Proc_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_89_89, (MR_Integer) 1)));
#line 159 "add_class.m"
        {
#line 159 "add_class.m"
          MR_Word base;
#line 159 "add_class.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 159 "add_class.m"
          *hlds__make_hlds__add_class__HeadVar__2_88 = base;
#line 159 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pred_53));
#line 159 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__Proc_54));
#line 159 "add_class.m"
        }
#line 159 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 158 "add_class.m"
      }
#line 157 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 157 "add_class.m"
  }
#line 157 "add_class.m"
}

#line 717 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(
#line 717 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Name_7,
#line 717 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__Arity_8,
#line 717 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_9,
#line 717 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_10,
#line 717 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 717 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16)
#line 717 "add_class.m"
{
#line 721 "add_class.m"
  {
#line 721 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pieces_12;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg_13;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Spec_14;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_19_19;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_22_22;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_25_25;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_26_26;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_33_33;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_34_34;
#line 721 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_38_38;

#line 723 "add_class.m"
    {
#line 723 "add_class.m"
      hlds__make_hlds__add_class__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 723 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_21_21, 0) = ((MR_Box) (hlds__make_hlds__add_class__Name_7));
#line 723 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__Arity_8));
#line 723 "add_class.m"
    }
#line 723 "add_class.m"
    {
#line 723 "add_class.m"
      hlds__make_hlds__add_class__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 723 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_21_21));
#line 723 "add_class.m"
    }
#line 724 "add_class.m"
    {
#line 724 "add_class.m"
      hlds__make_hlds__add_class__V_26_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_26_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 724 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_9));
#line 724 "add_class.m"
    }
#line 723 "add_class.m"
    {
#line 723 "add_class.m"
      hlds__make_hlds__add_class__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_25_25, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_26_26));
#line 723 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[25])));
#line 723 "add_class.m"
    }
#line 723 "add_class.m"
    {
#line 723 "add_class.m"
      hlds__make_hlds__add_class__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_22_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[40])));
#line 723 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_25_25));
#line 723 "add_class.m"
    }
#line 722 "add_class.m"
    {
#line 722 "add_class.m"
      hlds__make_hlds__add_class__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_20_20));
#line 722 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_22_22));
#line 722 "add_class.m"
    }
#line 722 "add_class.m"
    {
#line 722 "add_class.m"
      hlds__make_hlds__add_class__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[39])));
#line 722 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_19_19));
#line 722 "add_class.m"
    }
#line 725 "add_class.m"
    {
#line 725 "add_class.m"
      hlds__make_hlds__add_class__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 725 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_12));
#line 725 "add_class.m"
    }
#line 725 "add_class.m"
    {
#line 725 "add_class.m"
      hlds__make_hlds__add_class__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_34_34));
#line 725 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 725 "add_class.m"
    }
#line 725 "add_class.m"
    {
#line 725 "add_class.m"
      hlds__make_hlds__add_class__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 725 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_10));
#line 725 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_33_33));
#line 725 "add_class.m"
    }
#line 726 "add_class.m"
    {
#line 726 "add_class.m"
      hlds__make_hlds__add_class__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_13));
#line 726 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "add_class.m"
    }
#line 726 "add_class.m"
    {
#line 726 "add_class.m"
      hlds__make_hlds__add_class__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 726 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 726 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 726 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_38_38));
#line 726 "add_class.m"
    }
#line 727 "add_class.m"
    {
#line 727 "add_class.m"
      MR_Word base;
#line 727 "add_class.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16 = base;
#line 727 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_14));
#line 727 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15));
#line 727 "add_class.m"
    }
#line 721 "add_class.m"
  }
#line 717 "add_class.m"
}

#line 706 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(
#line 706 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassName_7,
#line 706 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__Arity_8,
#line 706 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_9,
#line 706 "add_class.m"
  MR_String hlds__make_hlds__add_class__Description_10,
#line 706 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 706 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16)
#line 706 "add_class.m"
{
#line 709 "add_class.m"
  {
#line 709 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pieces_12;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg_13;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Spec_14;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_19_19;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_24_24;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_25_25;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_26_26;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_33_33;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_34_34;
#line 709 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_38_38;

#line 710 "add_class.m"
    {
#line 710 "add_class.m"
      hlds__make_hlds__add_class__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 710 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__Description_10));
#line 710 "add_class.m"
    }
#line 711 "add_class.m"
    {
#line 711 "add_class.m"
      hlds__make_hlds__add_class__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 711 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_26_26, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_7));
#line 711 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_26_26, 1) = ((MR_Box) (hlds__make_hlds__add_class__Arity_8));
#line 711 "add_class.m"
    }
#line 711 "add_class.m"
    {
#line 711 "add_class.m"
      hlds__make_hlds__add_class__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 711 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_25_25, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_26_26));
#line 711 "add_class.m"
    }
#line 710 "add_class.m"
    {
#line 710 "add_class.m"
      hlds__make_hlds__add_class__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_25_25));
#line 710 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[23])));
#line 710 "add_class.m"
    }
#line 710 "add_class.m"
    {
#line 710 "add_class.m"
      hlds__make_hlds__add_class__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_21_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[38])));
#line 710 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_24_24));
#line 710 "add_class.m"
    }
#line 710 "add_class.m"
    {
#line 710 "add_class.m"
      hlds__make_hlds__add_class__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_20_20));
#line 710 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_21_21));
#line 710 "add_class.m"
    }
#line 710 "add_class.m"
    {
#line 710 "add_class.m"
      hlds__make_hlds__add_class__Pieces_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[37])));
#line 710 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_12, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_19_19));
#line 710 "add_class.m"
    }
#line 713 "add_class.m"
    {
#line 713 "add_class.m"
      hlds__make_hlds__add_class__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 713 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_12));
#line 713 "add_class.m"
    }
#line 713 "add_class.m"
    {
#line 713 "add_class.m"
      hlds__make_hlds__add_class__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_34_34));
#line 713 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "add_class.m"
    }
#line 713 "add_class.m"
    {
#line 713 "add_class.m"
      hlds__make_hlds__add_class__Msg_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_9));
#line 713 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_13, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_33_33));
#line 713 "add_class.m"
    }
#line 714 "add_class.m"
    {
#line 714 "add_class.m"
      hlds__make_hlds__add_class__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_38_38, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_13));
#line 714 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "add_class.m"
    }
#line 714 "add_class.m"
    {
#line 714 "add_class.m"
      hlds__make_hlds__add_class__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 714 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 714 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 714 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_38_38));
#line 714 "add_class.m"
    }
#line 715 "add_class.m"
    {
#line 715 "add_class.m"
      MR_Word base;
#line 715 "add_class.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16 = base;
#line 715 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_14));
#line 715 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15));
#line 715 "add_class.m"
    }
#line 709 "add_class.m"
  }
#line 706 "add_class.m"
}

#line 690 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(
#line 690 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredInfo_4,
#line 690 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13,
#line 690 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14)
#line 690 "add_class.m"
{
#line 693 "add_class.m"
  {
#line 693 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_6;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Module_7;
#line 693 "add_class.m"
    MR_String hlds__make_hlds__add_class__Name_8;
#line 693 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__Arity_9;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pieces_10;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg_11;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Spec_12;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_17_17;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_22_22;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_23_23;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_30_30;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_31_31;
#line 693 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_35_35;

#line 694 "add_class.m"
    {
#line 694 "add_class.m"
      hlds__hlds_pred__pred_info_get_context_2_p_0(hlds__make_hlds__add_class__PredInfo_4, &hlds__make_hlds__add_class__Context_6);
    }
#line 695 "add_class.m"
    {
#line 695 "add_class.m"
      hlds__make_hlds__add_class__Module_7 = hlds__hlds_pred__pred_info_module_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
#line 696 "add_class.m"
    {
#line 696 "add_class.m"
      hlds__make_hlds__add_class__Name_8 = hlds__hlds_pred__pred_info_name_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
#line 697 "add_class.m"
    {
#line 697 "add_class.m"
      hlds__make_hlds__add_class__Arity_9 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(hlds__make_hlds__add_class__PredInfo_4);
    }
#line 701 "add_class.m"
    {
#line 701 "add_class.m"
      hlds__make_hlds__add_class__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_23_23, 0) = ((MR_Box) (hlds__make_hlds__add_class__Module_7));
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_class__Name_8));
#line 701 "add_class.m"
    }
#line 701 "add_class.m"
    {
#line 701 "add_class.m"
      hlds__make_hlds__add_class__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_23_23));
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_22_22, 1) = ((MR_Box) (hlds__make_hlds__add_class__Arity_9));
#line 701 "add_class.m"
    }
#line 701 "add_class.m"
    {
#line 701 "add_class.m"
      hlds__make_hlds__add_class__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 701 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_21_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_22_22));
#line 701 "add_class.m"
    }
#line 700 "add_class.m"
    {
#line 700 "add_class.m"
      hlds__make_hlds__add_class__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_21_21));
#line 700 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[17])));
#line 700 "add_class.m"
    }
#line 699 "add_class.m"
    {
#line 699 "add_class.m"
      hlds__make_hlds__add_class__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_17_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[36])));
#line 699 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_17_17, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_20_20));
#line 699 "add_class.m"
    }
#line 699 "add_class.m"
    {
#line 699 "add_class.m"
      hlds__make_hlds__add_class__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[35])));
#line 699 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_17_17));
#line 699 "add_class.m"
    }
#line 702 "add_class.m"
    {
#line 702 "add_class.m"
      hlds__make_hlds__add_class__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 702 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces_10));
#line 702 "add_class.m"
    }
#line 702 "add_class.m"
    {
#line 702 "add_class.m"
      hlds__make_hlds__add_class__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_30_30, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_31_31));
#line 702 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "add_class.m"
    }
#line 702 "add_class.m"
    {
#line 702 "add_class.m"
      hlds__make_hlds__add_class__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 702 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_6));
#line 702 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_30_30));
#line 702 "add_class.m"
    }
#line 703 "add_class.m"
    {
#line 703 "add_class.m"
      hlds__make_hlds__add_class__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg_11));
#line 703 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "add_class.m"
    }
#line 703 "add_class.m"
    {
#line 703 "add_class.m"
      hlds__make_hlds__add_class__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 703 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 703 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_35_35));
#line 703 "add_class.m"
    }
#line 704 "add_class.m"
    {
#line 704 "add_class.m"
      MR_Word base;
#line 704 "add_class.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_14 = base;
#line 704 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_12));
#line 704 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_13));
#line 704 "add_class.m"
    }
#line 693 "add_class.m"
  }
#line 690 "add_class.m"
}

#line 660 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1(
#line 660 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg)
#line 660 "add_class.m"
{
#line 660 "add_class.m"
  {
#line 660 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 660 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 660 "add_class.m"
    {
#line 660 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__produce_instance_method_clause__660__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))));
    }
#line 660 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 660 "add_class.m"
  }
#line 660 "add_class.m"
}

#line 648 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_15,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_16,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_17,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceClause_18,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVarSet0_19,
#line 648 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__TVarSet_20,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_43,
#line 648 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_44,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_45,
#line 648 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_46,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_47,
#line 648 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_48,
#line 648 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49,
#line 648 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50)
#line 648 "add_class.m"
{
#line 655 "add_class.m"
  {
#line 655 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 655 "add_class.m"
    MR_Word hlds__make_hlds__add_class__CVarSet_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 1)));
#line 655 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClausePredOrFunc_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 2)));
#line 655 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredName_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 3)));
#line 655 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HeadTerms0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 4)));
#line 655 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Body_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 5)));
#line 655 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_51_51;
#line 656 "add_class.m"
    MR_Word hlds__make_hlds__add_class___Origin_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 0)));
#line 656 "add_class.m"
    MR_Word hlds__make_hlds__add_class___ClauseContext_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 6)));
#line 656 "add_class.m"
    MR_Integer hlds__make_hlds__add_class___SeqNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceClause_18, (MR_Integer) 7)));
#line 665 "add_class.m"
    MR_Word hlds__make_hlds__add_class__StateVar_33;

#line 660 "add_class.m"
    {
#line 660 "add_class.m"
      hlds__make_hlds__add_class__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 660 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_51_51, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[2]));
#line 660 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0_1));
#line 660 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 660 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_51_51, 3) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_15));
#line 660 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_51_51, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClausePredOrFunc_27));
#line 660 "add_class.m"
    }
#line 660 "add_class.m"
    {
#line 660 "add_class.m"
      mercury__require__expect_4_p_0(hlds__make_hlds__add_class__V_51_51, (MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.produce_instance_method_clause\'/14", (MR_String) "PredOrFunc mismatch");
    }
#line 662 "add_class.m"
    {
#line 662 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__state_var__illegal_state_var_func_result_3_p_0(hlds__make_hlds__add_class__PredOrFunc_15, hlds__make_hlds__add_class__HeadTerms0_29, &hlds__make_hlds__add_class__StateVar_33);
    }
#line 665 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 663 "add_class.m"
      {
#line 663 "add_class.m"
        *hlds__make_hlds__add_class__TVarSet_20 = hlds__make_hlds__add_class__TVarSet0_19;
#line 664 "add_class.m"
        {
#line 664 "add_class.m"
          hlds__make_hlds__state_var__report_illegal_func_svar_result_5_p_0(hlds__make_hlds__add_class__Context_16, hlds__make_hlds__add_class__CVarSet_26, hlds__make_hlds__add_class__StateVar_33, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50);
        }
#line 664 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_48 = hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_47;
#line 664 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_46 = hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_45;
#line 664 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_44 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_43;
#line 663 "add_class.m"
      }
#line 665 "add_class.m"
    else
#line 666 "add_class.m"
      {
#line 666 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadTerms_34;
#line 666 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__PredArity_35;
#line 666 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__Arity_36;
#line 666 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Goal_39;
#line 666 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet_40;
#line 666 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Warnings_41;
#line 666 "add_class.m"
        MR_Word hlds__make_hlds__add_class__SimpleCallId_42;
#line 666 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61_61;
#line 666 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_62_62;

#line 666 "add_class.m"
        {
#line 666 "add_class.m"
          hlds__make_hlds__state_var__expand_bang_states_2_p_0(hlds__make_hlds__add_class__HeadTerms0_29, &hlds__make_hlds__add_class__HeadTerms_34);
        }
#line 667 "add_class.m"
        {
#line 667 "add_class.m"
          hlds__make_hlds__add_class__PredArity_35 = mercury__list__length_1_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[8], hlds__make_hlds__add_class__HeadTerms_34);
        }
#line 668 "add_class.m"
        {
#line 668 "add_class.m"
          parse_tree__prog_util__adjust_func_arity_3_p_1(hlds__make_hlds__add_class__PredOrFunc_15, &hlds__make_hlds__add_class__Arity_36, hlds__make_hlds__add_class__PredArity_35);
        }
#line 676 "add_class.m"
        {
#line 676 "add_class.m"
          hlds__make_hlds__add_clause__clauses_info_add_clause_24_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__CVarSet_26, hlds__make_hlds__add_class__TVarSet0_19, hlds__make_hlds__add_class__HeadTerms_34, hlds__make_hlds__add_class__Body_30, hlds__make_hlds__add_class__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__Status_17, hlds__make_hlds__add_class__PredOrFunc_15, hlds__make_hlds__add_class__Arity_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), &hlds__make_hlds__add_class__Goal_39, &hlds__make_hlds__add_class__VarSet_40, hlds__make_hlds__add_class__TVarSet_20, hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_0_47, hlds__make_hlds__add_class__STATE_VARIABLE_ClausesInfo_48, &hlds__make_hlds__add_class__Warnings_41, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_43, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_45, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_46, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_49, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61_61);
        }
#line 681 "add_class.m"
        {
#line 681 "add_class.m"
          hlds__make_hlds__add_class__SimpleCallId_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 681 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_42, 0) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_15));
#line 681 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_42, 1) = ((MR_Box) (hlds__make_hlds__add_class__PredName_28));
#line 681 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__SimpleCallId_42, 2) = ((MR_Box) (hlds__make_hlds__add_class__Arity_36));
#line 681 "add_class.m"
        }
#line 684 "add_class.m"
        {
#line 684 "add_class.m"
          hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(*hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_44, hlds__make_hlds__add_class__SimpleCallId_42, hlds__make_hlds__add_class__VarSet_40, hlds__make_hlds__add_class__Goal_39, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_61_61, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_62_62);
        }
#line 687 "add_class.m"
        {
#line 687 "add_class.m"
          hlds__make_hlds__make_hlds_warn__warn_overlap_5_p_0(hlds__make_hlds__add_class__Warnings_41, hlds__make_hlds__add_class__VarSet_40, hlds__make_hlds__add_class__SimpleCallId_42, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_62_62, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_50);
#line 687 "add_class.m"
          return;
        }
#line 666 "add_class.m"
      }
#line 655 "add_class.m"
  }
#line 648 "add_class.m"
}

#line 575 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(
#line 575 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_3,
#line 575 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_4)
#line 575 "add_class.m"
{
#line 578 "add_class.m"
  {
#line 578 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_53_53;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_55_55;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesA_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 4)));
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesB0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 4)));
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarSetA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 8)));
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarSetB_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 8)));
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__RenameApart_10;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesB1_11;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsA_12;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsB_13;
#line 578 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__L_14;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Renaming_15;
#line 578 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypesB_16;
#line 578 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__V_54_54;
#line 579 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 0)));
#line 579 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 1)));
#line 579 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 2)));
#line 579 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 3)));
#line 579 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 5)));
#line 579 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 6)));
#line 579 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 7)));
#line 579 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_3, (MR_Integer) 9)));
#line 580 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 0)));
#line 580 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 1)));
#line 580 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 2)));
#line 580 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 3)));
#line 580 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 5)));
#line 580 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 6)));
#line 580 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 7)));
#line 580 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_4, (MR_Integer) 9)));
#line 586 "add_class.m"
    MR_Word hlds__make_hlds__add_class___NewVarSet_9;

#line 586 "add_class.m"
    {
#line 586 "add_class.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__VarSetA_7, hlds__make_hlds__add_class__VarSetB_8, &hlds__make_hlds__add_class___NewVarSet_9, &hlds__make_hlds__add_class__RenameApart_10);
    }
#line 587 "add_class.m"
    {
#line 587 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__RenameApart_10, hlds__make_hlds__add_class__TypesB0_6, &hlds__make_hlds__add_class__TypesB1_11);
    }
#line 589 "add_class.m"
    {
#line 589 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__TypesA_5, &hlds__make_hlds__add_class__TVarsA_12);
    }
#line 590 "add_class.m"
    {
#line 590 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__TypesB1_11, &hlds__make_hlds__add_class__TVarsB_13);
    }
#line 2445 "hlds.make_hlds.add_class.c"
    hlds__make_hlds__add_class__TypeInfo_53_53 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
#line 593 "add_class.m"
    {
#line 593 "add_class.m"
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsA_12, &hlds__make_hlds__add_class__L_14);
    }
#line 594 "add_class.m"
    {
#line 594 "add_class.m"
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsB_13, &hlds__make_hlds__add_class__V_54_54);
    }
#line 594 "add_class.m"
    hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__L_14 == hlds__make_hlds__add_class__V_54_54);
#line 578 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 578 "add_class.m"
      {
#line 596 "add_class.m"
        {
#line 596 "add_class.m"
          mercury__map__from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TypeInfo_53_53, hlds__make_hlds__add_class__TVarsB_13, hlds__make_hlds__add_class__TVarsA_12, &hlds__make_hlds__add_class__Renaming_15);
        }
#line 597 "add_class.m"
        {
#line 597 "add_class.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(hlds__make_hlds__add_class__Renaming_15, hlds__make_hlds__add_class__TypesB1_11, &hlds__make_hlds__add_class__TypesB_16);
        }
#line 2473 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeInfo_55_55 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[21];
#line 599 "add_class.m"
        {
#line 599 "add_class.m"
          return hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_class__TypeInfo_55_55, ((MR_Box) (hlds__make_hlds__add_class__TypesA_5)), ((MR_Box) (hlds__make_hlds__add_class__TypesB_16)));
        }
#line 578 "add_class.m"
      }
#line 578 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 578 "add_class.m"
  }
#line 575 "add_class.m"
}

#line 533 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_instance_constraints_5_p_0(
#line 533 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnA_6,
#line 533 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_7,
#line 533 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefnB_8,
#line 533 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25,
#line 533 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26)
#line 533 "add_class.m"
{
#line 537 "add_class.m"
  {
#line 537 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 537 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsA_10;
#line 537 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsetA_11;
#line 537 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ConstraintsA_12;
#line 537 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsB_13;
#line 537 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TVarsetB_14;
#line 537 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ConstraintsB_15;
#line 537 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
#line 537 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_28_28;
#line 538 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
#line 538 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
#line 538 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
#line 538 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
#line 538 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
#line 538 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
#line 538 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
#line 538 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
#line 538 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
#line 539 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_64_64;
#line 539 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_65_65;
#line 539 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_66_66;
#line 539 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_68_68;
#line 539 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_69_69;
#line 539 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_70_70;
#line 539 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_71_71;
#line 539 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_72_72;
#line 542 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_82_82;
#line 542 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_83_83;
#line 542 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_84_84;
#line 542 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_85_85;
#line 542 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_86_86;
#line 542 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_87_87;
#line 542 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_88_88;
#line 542 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_89_89;
#line 542 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_90_90;
#line 543 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_91_91;
#line 543 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_92_92;
#line 543 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_93_93;
#line 543 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_95_95;
#line 543 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_96_96;
#line 543 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_97_97;
#line 543 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_98_98;
#line 543 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_99_99;

#line 538 "add_class.m"
    {
#line 538 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__V_27_27, &hlds__make_hlds__add_class__TVarsA_10);
    }
#line 539 "add_class.m"
    hlds__make_hlds__add_class__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
#line 539 "add_class.m"
    hlds__make_hlds__add_class__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
#line 539 "add_class.m"
    hlds__make_hlds__add_class__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
#line 539 "add_class.m"
    hlds__make_hlds__add_class__ConstraintsA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
#line 539 "add_class.m"
    hlds__make_hlds__add_class__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
#line 539 "add_class.m"
    hlds__make_hlds__add_class__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
#line 539 "add_class.m"
    hlds__make_hlds__add_class__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
#line 539 "add_class.m"
    hlds__make_hlds__add_class__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
#line 539 "add_class.m"
    hlds__make_hlds__add_class__TVarsetA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
#line 539 "add_class.m"
    hlds__make_hlds__add_class__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
#line 542 "add_class.m"
    hlds__make_hlds__add_class__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
#line 542 "add_class.m"
    hlds__make_hlds__add_class__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
#line 542 "add_class.m"
    hlds__make_hlds__add_class__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
#line 542 "add_class.m"
    hlds__make_hlds__add_class__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
#line 542 "add_class.m"
    hlds__make_hlds__add_class__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
#line 542 "add_class.m"
    hlds__make_hlds__add_class__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
#line 542 "add_class.m"
    hlds__make_hlds__add_class__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
#line 542 "add_class.m"
    hlds__make_hlds__add_class__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
#line 542 "add_class.m"
    hlds__make_hlds__add_class__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
#line 542 "add_class.m"
    hlds__make_hlds__add_class__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
#line 542 "add_class.m"
    {
#line 542 "add_class.m"
      parse_tree__prog_type__type_vars_list_2_p_0(hlds__make_hlds__add_class__V_28_28, &hlds__make_hlds__add_class__TVarsB_13);
    }
#line 543 "add_class.m"
    hlds__make_hlds__add_class__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
#line 543 "add_class.m"
    hlds__make_hlds__add_class__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
#line 543 "add_class.m"
    hlds__make_hlds__add_class__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
#line 543 "add_class.m"
    hlds__make_hlds__add_class__ConstraintsB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
#line 543 "add_class.m"
    hlds__make_hlds__add_class__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
#line 543 "add_class.m"
    hlds__make_hlds__add_class__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
#line 543 "add_class.m"
    hlds__make_hlds__add_class__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
#line 543 "add_class.m"
    hlds__make_hlds__add_class__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
#line 543 "add_class.m"
    hlds__make_hlds__add_class__TVarsetB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
#line 543 "add_class.m"
    hlds__make_hlds__add_class__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
#line 547 "add_class.m"
    {
#line 547 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(hlds__make_hlds__add_class__TVarsA_10, hlds__make_hlds__add_class__TVarsetA_11, hlds__make_hlds__add_class__ConstraintsA_12, hlds__make_hlds__add_class__TVarsB_13, hlds__make_hlds__add_class__TVarsetB_14, hlds__make_hlds__add_class__ConstraintsB_15);
    }
#line 551 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 547 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25;
#line 551 "add_class.m"
    else
#line 552 "add_class.m"
      {
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Name_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_7, (MR_Integer) 0)));
#line 552 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__ClassArity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_7, (MR_Integer) 1)));
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ContextA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 2)));
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TxtA_19;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MsgA_20;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ContextB_21;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MsgB_23;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Spec_24;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_31_31;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_32_32;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_33_33;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_40_40;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_41_41;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_51_51;
#line 552 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_52_52;
#line 553 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 0)));
#line 553 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 1)));
#line 553 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 3)));
#line 553 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 4)));
#line 553 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 5)));
#line 553 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 6)));
#line 553 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 7)));
#line 553 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 8)));
#line 553 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnA_6, (MR_Integer) 9)));
#line 560 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_118_118;
#line 560 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_119_119;
#line 560 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_120_120;
#line 560 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_121_121;
#line 560 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_122_122;
#line 560 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_123_123;
#line 560 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_124_124;
#line 560 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_125_125;
#line 560 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_126_126;

#line 556 "add_class.m"
        {
#line 556 "add_class.m"
          hlds__make_hlds__add_class__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 556 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__Name_16));
#line 556 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_17));
#line 556 "add_class.m"
        }
#line 556 "add_class.m"
        {
#line 556 "add_class.m"
          hlds__make_hlds__add_class__V_32_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "add_class.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_32_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 556 "add_class.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_32_32, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_33_33));
#line 556 "add_class.m"
        }
#line 555 "add_class.m"
        {
#line 555 "add_class.m"
          hlds__make_hlds__add_class__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_32_32));
#line 555 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[20])));
#line 555 "add_class.m"
        }
#line 555 "add_class.m"
        {
#line 555 "add_class.m"
          hlds__make_hlds__add_class__TxtA_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__TxtA_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[31])));
#line 555 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__TxtA_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_31_31));
#line 555 "add_class.m"
        }
#line 558 "add_class.m"
        {
#line 558 "add_class.m"
          hlds__make_hlds__add_class__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 558 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_class__TxtA_19));
#line 558 "add_class.m"
        }
#line 558 "add_class.m"
        {
#line 558 "add_class.m"
          hlds__make_hlds__add_class__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_40_40, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_41_41));
#line 558 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "add_class.m"
        }
#line 558 "add_class.m"
        {
#line 558 "add_class.m"
          hlds__make_hlds__add_class__MsgA_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 558 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgA_20, 0) = ((MR_Box) (hlds__make_hlds__add_class__ContextA_18));
#line 558 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgA_20, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_40_40));
#line 558 "add_class.m"
        }
#line 560 "add_class.m"
        hlds__make_hlds__add_class__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 0)));
#line 560 "add_class.m"
        hlds__make_hlds__add_class__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 1)));
#line 560 "add_class.m"
        hlds__make_hlds__add_class__ContextB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 2)));
#line 560 "add_class.m"
        hlds__make_hlds__add_class__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 3)));
#line 560 "add_class.m"
        hlds__make_hlds__add_class__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 4)));
#line 560 "add_class.m"
        hlds__make_hlds__add_class__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 5)));
#line 560 "add_class.m"
        hlds__make_hlds__add_class__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 6)));
#line 560 "add_class.m"
        hlds__make_hlds__add_class__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 7)));
#line 560 "add_class.m"
        hlds__make_hlds__add_class__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 8)));
#line 560 "add_class.m"
        hlds__make_hlds__add_class__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceDefnB_8, (MR_Integer) 9)));
#line 562 "add_class.m"
        {
#line 562 "add_class.m"
          hlds__make_hlds__add_class__MsgB_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 562 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgB_23, 0) = ((MR_Box) (hlds__make_hlds__add_class__ContextB_21));
#line 562 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__MsgB_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[34])));
#line 562 "add_class.m"
        }
#line 565 "add_class.m"
        {
#line 565 "add_class.m"
          hlds__make_hlds__add_class__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_class__MsgB_23));
#line 565 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "add_class.m"
        }
#line 564 "add_class.m"
        {
#line 564 "add_class.m"
          hlds__make_hlds__add_class__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 564 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_class__MsgA_20));
#line 564 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_51_51, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_52_52));
#line 564 "add_class.m"
        }
#line 564 "add_class.m"
        {
#line 564 "add_class.m"
          hlds__make_hlds__add_class__Spec_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 564 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 564 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 564 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_24, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_51_51));
#line 564 "add_class.m"
        }
#line 566 "add_class.m"
        {
#line 566 "add_class.m"
          MR_Word base;
#line 566 "add_class.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "add_class.m"
          *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_26 = base;
#line 566 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_24));
#line 566 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_25));
#line 566 "add_class.m"
        }
#line 552 "add_class.m"
      }
#line 537 "add_class.m"
  }
#line 533 "add_class.m"
}

#line 499 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__report_overlapping_instance_declaration_4_p_0(
#line 499 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 499 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_2,
#line 499 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15,
#line 499 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16)
#line 499 "add_class.m"
{
#line 504 "add_class.m"
  {
#line 504 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__ClassArity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__2_2, (MR_Integer) 0)));
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OtherContext_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__2_2, (MR_Integer) 1)));
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Pieces1_10;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg1_12;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Msg2_13;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Spec_14;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_19_19;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_22_22;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_23_23;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_24_24;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_34_34;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_35_35;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_37_37;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_45_45;
#line 504 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_46_46;

#line 507 "add_class.m"
    {
#line 507 "add_class.m"
      hlds__make_hlds__add_class__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 507 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_24_24, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_5));
#line 507 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_24_24, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_6));
#line 507 "add_class.m"
    }
#line 507 "add_class.m"
    {
#line 507 "add_class.m"
      hlds__make_hlds__add_class__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 507 "add_class.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_class__V_23_23, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_24_24));
#line 507 "add_class.m"
    }
#line 506 "add_class.m"
    {
#line 506 "add_class.m"
      hlds__make_hlds__add_class__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_22_22, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_23_23));
#line 506 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[17])));
#line 506 "add_class.m"
    }
#line 505 "add_class.m"
    {
#line 505 "add_class.m"
      hlds__make_hlds__add_class__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[27])));
#line 505 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_19_19, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_22_22));
#line 505 "add_class.m"
    }
#line 505 "add_class.m"
    {
#line 505 "add_class.m"
      hlds__make_hlds__add_class__Pieces1_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces1_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_class_scalar_common_1[26])));
#line 505 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Pieces1_10, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_19_19));
#line 505 "add_class.m"
    }
#line 510 "add_class.m"
    {
#line 510 "add_class.m"
      hlds__make_hlds__add_class__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 510 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_35_35, 0) = ((MR_Box) (hlds__make_hlds__add_class__Pieces1_10));
#line 510 "add_class.m"
    }
#line 510 "add_class.m"
    {
#line 510 "add_class.m"
      hlds__make_hlds__add_class__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_35_35));
#line 510 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 510 "add_class.m"
    }
#line 510 "add_class.m"
    {
#line 510 "add_class.m"
      hlds__make_hlds__add_class__Msg1_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 510 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg1_12, 0) = ((MR_Box) (hlds__make_hlds__add_class__Context_7));
#line 510 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Msg1_12, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_34_34));
#line 510 "add_class.m"
    }
#line 511 "add_class.m"
    {
#line 511 "add_class.m"
      hlds__make_hlds__add_class__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_37_37, 0) = ((MR_Box) (hlds__make_hlds__add_class__OtherContext_8));
#line 511 "add_class.m"
    }
#line 511 "add_class.m"
    {
#line 511 "add_class.m"
      hlds__make_hlds__add_class__Msg2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 511 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Msg2_13, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_37_37));
#line 511 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Msg2_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 511 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Msg2_13, 2) = ((MR_Box) ((MR_Integer) 0));
#line 511 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Msg2_13, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[30])));
#line 511 "add_class.m"
    }
#line 512 "add_class.m"
    {
#line 512 "add_class.m"
      hlds__make_hlds__add_class__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_46_46, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg2_13));
#line 512 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_class.m"
    }
#line 512 "add_class.m"
    {
#line 512 "add_class.m"
      hlds__make_hlds__add_class__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_45_45, 0) = ((MR_Box) (hlds__make_hlds__add_class__Msg1_12));
#line 512 "add_class.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_45_45, 1) = ((MR_Box) (hlds__make_hlds__add_class__V_46_46));
#line 512 "add_class.m"
    }
#line 512 "add_class.m"
    {
#line 512 "add_class.m"
      hlds__make_hlds__add_class__Spec_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 512 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 512 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 512 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Spec_14, 2) = ((MR_Box) (hlds__make_hlds__add_class__V_45_45));
#line 512 "add_class.m"
    }
#line 513 "add_class.m"
    {
#line 513 "add_class.m"
      MR_Word base;
#line 513 "add_class.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "add_class.m"
      *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_16 = base;
#line 513 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__Spec_14));
#line 513 "add_class.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_15));
#line 513 "add_class.m"
    }
#line 504 "add_class.m"
  }
#line 499 "add_class.m"
}

#line 496 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_3(
#line 496 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 496 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 496 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 496 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3)
#line 496 "add_class.m"
{
#line 496 "add_class.m"
  {
#line 496 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 496 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv1_STATE_VARIABLE_Specs_16;

#line 496 "add_class.m"
    {
#line 496 "add_class.m"
      hlds__make_hlds__add_class__report_overlapping_instance_declaration_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv1_STATE_VARIABLE_Specs_16);
    }
#line 496 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv1_STATE_VARIABLE_Specs_16));
#line 496 "add_class.m"
  }
#line 496 "add_class.m"
}

#line 483 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_1(
#line 483 "add_class.m"
  void * hlds__make_hlds__add_class__env_ptr_arg)
#line 483 "add_class.m"
{
#line 483 "add_class.m"
  {
#line 483 "add_class.m"
    struct hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0_s * hlds__make_hlds__add_class__env_ptr = (struct hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0_s *) hlds__make_hlds__add_class__env_ptr_arg;

#line 483 "add_class.m"
    *((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__conv0_HeadVar__3_40));
#line 483 "add_class.m"
    {
#line 483 "add_class.m"
      ((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__cont)((hlds__make_hlds__add_class__env_ptr)->hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__cont_env_ptr);
#line 483 "add_class.m"
      return;
    }
#line 483 "add_class.m"
  }
#line 483 "add_class.m"
}

#line 483 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2(
#line 483 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 483 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_1,
#line 483 "add_class.m"
  MR_Cont hlds__make_hlds__add_class__cont,
#line 483 "add_class.m"
  void * hlds__make_hlds__add_class__cont_env_ptr)
#line 483 "add_class.m"
{
#line 483 "add_class.m"
  {
#line 483 "add_class.m"
    struct hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0_s hlds__make_hlds__add_class__env;

#line 483 "add_class.m"
    (hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__wrapper_arg_1 = hlds__make_hlds__add_class__wrapper_arg_1;
#line 483 "add_class.m"
    (hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__cont = hlds__make_hlds__add_class__cont;
#line 483 "add_class.m"
    (hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__cont_env_ptr = hlds__make_hlds__add_class__cont_env_ptr;
#line 483 "add_class.m"
    {
#line 483 "add_class.m"
      MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 483 "add_class.m"
      {
#line 483 "add_class.m"
        hlds__make_hlds__add_class__IntroducedFrom__pred__check_for_overlapping_instances__483__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), &(hlds__make_hlds__add_class__env).hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2_env_0__conv0_HeadVar__3_40, hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_1, &hlds__make_hlds__add_class__env);
      }
#line 483 "add_class.m"
    }
#line 483 "add_class.m"
  }
#line 483 "add_class.m"
}

#line 477 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0(
#line 477 "add_class.m"
  MR_Word hlds__make_hlds__add_class__NewInstanceDefn_6,
#line 477 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceDefns_7,
#line 477 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ClassId_8,
#line 477 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_38,
#line 477 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_39)
#line 477 "add_class.m"
{
#line 482 "add_class.m"
  {
#line 482 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 482 "add_class.m"
    MR_Word hlds__make_hlds__add_class__IsOverlapping_10;
#line 482 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_41_41;
#line 496 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_39;

#line 483 "add_class.m"
    {
#line 483 "add_class.m"
      hlds__make_hlds__add_class__IsOverlapping_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 483 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IsOverlapping_10, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[1]));
#line 483 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IsOverlapping_10, 1) = ((MR_Box) (hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_2));
#line 483 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IsOverlapping_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 483 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IsOverlapping_10, 3) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_6));
#line 483 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IsOverlapping_10, 4) = ((MR_Box) (hlds__make_hlds__add_class__InstanceDefns_7));
#line 483 "add_class.m"
    }
#line 496 "add_class.m"
    {
#line 496 "add_class.m"
      hlds__make_hlds__add_class__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 496 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_41_41, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[1]));
#line 496 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0_3));
#line 496 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 496 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_41_41, 3) = ((MR_Box) (hlds__make_hlds__add_class__ClassId_8));
#line 496 "add_class.m"
    }
#line 496 "add_class.m"
    {
#line 496 "add_class.m"
      mercury__solutions__aggregate_4_p_3((MR_Word) &hlds__make_hlds__add_class_scalar_common_2[1], (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__IsOverlapping_10, hlds__make_hlds__add_class__V_41_41, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_38)), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_39);
    }
#line 496 "add_class.m"
    *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_39 = ((MR_Word) hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_39);
#line 482 "add_class.m"
  }
#line 477 "add_class.m"
}

#line 394 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__check_method_modes_7_p_0(
#line 394 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 394 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2,
#line 394 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3,
#line 394 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4,
#line 394 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5,
#line 394 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6,
#line 394 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7)
#line 394 "add_class.m"
{
#line 400 "add_class.m"
  while (MR_TRUE)
#line 400 "add_class.m"
    {
#line 400 "add_class.m"
      /* tailcall optimized into a loop */
#line 400 "add_class.m"
      {
#line 400 "add_class.m"
        MR_bool hlds__make_hlds__add_class__succeeded;

#line 400 "add_class.m"
        if ((hlds__make_hlds__add_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 400 "add_class.m"
          {
#line 400 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_7 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 400 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_5 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 400 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_3 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 400 "add_class.m"
          }
#line 400 "add_class.m"
        else
#line 401 "add_class.m"
          {
#line 401 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Method_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 0)));
#line 401 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Methods_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 1)));
#line 401 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_69_69;
#line 401 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_71_71;
#line 401 "add_class.m"
            MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_72_72;

#line 444 "add_class.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_17)) == (MR_mktag((MR_Integer) 0))))
#line 404 "add_class.m"
              {
#line 404 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PorF_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 3)));
#line 404 "add_class.m"
                MR_Word hlds__make_hlds__add_class__QualName_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 4)));
#line 404 "add_class.m"
                MR_Word hlds__make_hlds__add_class__TypesAndModes_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 5)));
#line 404 "add_class.m"
                MR_Word hlds__make_hlds__add_class__ModuleName_37;
#line 404 "add_class.m"
                MR_String hlds__make_hlds__add_class__Name_38;
#line 404 "add_class.m"
                MR_Integer hlds__make_hlds__add_class__PredArity_40;
#line 404 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PredTable_41;
#line 404 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PredIds_42;
#line 403 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 0)));
#line 403 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 1)));
#line 403 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 2)));
#line 403 "add_class.m"
                MR_Word hlds__make_hlds__add_class___WithType_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 6)));
#line 403 "add_class.m"
                MR_Word hlds__make_hlds__add_class___WithInst_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 7)));
#line 403 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 8)));
#line 403 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 9)));
#line 403 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 10)));
#line 403 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 11)));
#line 403 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_17, (MR_Integer) 12)));
#line 441 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PredId_43;
#line 419 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_68_68;

#line 409 "add_class.m"
                if (((MR_tag((MR_Word) hlds__make_hlds__add_class__QualName_26)) == (MR_mktag((MR_Integer) 1))))
#line 406 "add_class.m"
                  {
#line 406 "add_class.m"
                    hlds__make_hlds__add_class__ModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__QualName_26, (MR_Integer) 0)));
#line 406 "add_class.m"
                    hlds__make_hlds__add_class__Name_38 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__QualName_26, (MR_Integer) 1)));
#line 406 "add_class.m"
                  }
#line 409 "add_class.m"
                else
#line 410 "add_class.m"
                  {
#line 413 "add_class.m"
                    {
#line 413 "add_class.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "unqualified func");
#line 413 "add_class.m"
                      return;
                    }
#line 410 "add_class.m"
                  }
#line 415 "add_class.m"
                {
#line 415 "add_class.m"
                  mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_and_mode_0, hlds__make_hlds__add_class__TypesAndModes_27, &hlds__make_hlds__add_class__PredArity_40);
                }
#line 416 "add_class.m"
                {
#line 416 "add_class.m"
                  hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, &hlds__make_hlds__add_class__PredTable_41);
                }
#line 417 "add_class.m"
                {
#line 417 "add_class.m"
                  hlds__pred_table__predicate_table_lookup_pf_m_n_a_7_p_0(hlds__make_hlds__add_class__PredTable_41, (MR_Integer) 0, hlds__make_hlds__add_class__PorF_25, hlds__make_hlds__add_class__ModuleName_37, hlds__make_hlds__add_class__Name_38, hlds__make_hlds__add_class__PredArity_40, &hlds__make_hlds__add_class__PredIds_42);
                }
#line 419 "add_class.m"
                hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__PredIds_42)) == (MR_mktag((MR_Integer) 1)));
#line 419 "add_class.m"
                if (hlds__make_hlds__add_class__succeeded)
#line 419 "add_class.m"
                  {
#line 419 "add_class.m"
                    hlds__make_hlds__add_class__PredId_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_42, (MR_Integer) 0)));
#line 419 "add_class.m"
                    hlds__make_hlds__add_class__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_42, (MR_Integer) 1)));
#line 419 "add_class.m"
                    hlds__make_hlds__add_class__succeeded = (hlds__make_hlds__add_class__V_68_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "add_class.m"
                  }
#line 441 "add_class.m"
                if (hlds__make_hlds__add_class__succeeded)
#line 420 "add_class.m"
                  {
#line 420 "add_class.m"
                    MR_Word hlds__make_hlds__add_class__PredInfo0_44;

#line 420 "add_class.m"
                    {
#line 420 "add_class.m"
                      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, hlds__make_hlds__add_class__PredId_43, &hlds__make_hlds__add_class__PredInfo0_44);
                    }
#line 432 "add_class.m"
                    if ((hlds__make_hlds__add_class__PorF_25 == (MR_Integer) 1))
#line 422 "add_class.m"
                      {
#line 422 "add_class.m"
                        MR_Word hlds__make_hlds__add_class__PredInfo_45;
#line 422 "add_class.m"
                        MR_Word hlds__make_hlds__add_class__MaybeProc_46;

#line 423 "add_class.m"
                        {
#line 423 "add_class.m"
                          check_hlds__clause_to_proc__maybe_add_default_func_mode_3_p_0(hlds__make_hlds__add_class__PredInfo0_44, &hlds__make_hlds__add_class__PredInfo_45, &hlds__make_hlds__add_class__MaybeProc_46);
                        }
#line 426 "add_class.m"
                        if ((hlds__make_hlds__add_class__MaybeProc_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "add_class.m"
                          {
#line 425 "add_class.m"
                            hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_71_71 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 425 "add_class.m"
                            hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 425 "add_class.m"
                          }
#line 426 "add_class.m"
                        else
#line 427 "add_class.m"
                          {
#line 427 "add_class.m"
                            MR_Integer hlds__make_hlds__add_class__ProcId_47 = ((MR_Integer) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybeProc_46, (MR_Integer) 0)));
#line 427 "add_class.m"
                            MR_Word hlds__make_hlds__add_class__NewPredProc_48;
#line 427 "add_class.m"
                            MR_Word hlds__make_hlds__add_class__V_70_70;

#line 428 "add_class.m"
                            {
#line 428 "add_class.m"
                              hlds__make_hlds__add_class__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 428 "add_class.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_class__PredId_43));
#line 428 "add_class.m"
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_70_70, 1) = ((MR_Box) (hlds__make_hlds__add_class__ProcId_47));
#line 428 "add_class.m"
                            }
#line 428 "add_class.m"
                            {
#line 428 "add_class.m"
                              hlds__make_hlds__add_class__NewPredProc_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 428 "add_class.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewPredProc_48, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_70_70));
#line 428 "add_class.m"
                            }
#line 429 "add_class.m"
                            {
#line 429 "add_class.m"
                              hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "add_class.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewPredProc_48));
#line 429 "add_class.m"
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2));
#line 429 "add_class.m"
                            }
#line 430 "add_class.m"
                            {
#line 430 "add_class.m"
                              hlds__hlds_module__module_info_set_pred_info_4_p_0(hlds__make_hlds__add_class__PredId_43, hlds__make_hlds__add_class__PredInfo_45, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_72_72);
                            }
#line 427 "add_class.m"
                          }
#line 430 "add_class.m"
                        hlds__make_hlds__add_class__STATE_VARIABLE_Specs_69_69 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 422 "add_class.m"
                      }
#line 432 "add_class.m"
                    else
#line 433 "add_class.m"
                      {
#line 433 "add_class.m"
                        MR_Word hlds__make_hlds__add_class__Procs_49;

#line 434 "add_class.m"
                        {
#line 434 "add_class.m"
                          hlds__hlds_pred__pred_info_get_procedures_2_p_0(hlds__make_hlds__add_class__PredInfo0_44, &hlds__make_hlds__add_class__Procs_49);
                        }
#line 435 "add_class.m"
                        {
#line 435 "add_class.m"
                          hlds__make_hlds__add_class__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, hlds__make_hlds__add_class__Procs_49);
                        }
#line 437 "add_class.m"
                        if (hlds__make_hlds__add_class__succeeded)
#line 436 "add_class.m"
                          {
#line 436 "add_class.m"
                            hlds__make_hlds__add_class__pred_method_with_no_modes_error_3_p_0(hlds__make_hlds__add_class__PredInfo0_44, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_69_69);
                          }
#line 437 "add_class.m"
                        else
#line 436 "add_class.m"
                          hlds__make_hlds__add_class__STATE_VARIABLE_Specs_69_69 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 436 "add_class.m"
                        hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_71_71 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 436 "add_class.m"
                        hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 433 "add_class.m"
                      }
#line 420 "add_class.m"
                  }
#line 441 "add_class.m"
                else
#line 442 "add_class.m"
                  {
#line 442 "add_class.m"
                    {
#line 442 "add_class.m"
                      mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.check_method_modes\'/7", (MR_String) "number of preds != 1");
#line 442 "add_class.m"
                      return;
                    }
#line 442 "add_class.m"
                  }
#line 404 "add_class.m"
              }
#line 444 "add_class.m"
            else
#line 445 "add_class.m"
              {
#line 445 "add_class.m"
                hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_71_71 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2;
#line 445 "add_class.m"
                hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_72_72 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4;
#line 445 "add_class.m"
                hlds__make_hlds__add_class__STATE_VARIABLE_Specs_69_69 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6;
#line 445 "add_class.m"
              }
#line 447 "add_class.m"
            /* direct tailcall eliminated */
#line 447 "add_class.m"
            {
#line 447 "add_class.m"
              MR_Word hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_class__Methods_18;
#line 447 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0__tmp_copy_2 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_71_71;
#line 447 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_72_72;
#line 447 "add_class.m"
              MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0__tmp_copy_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_69_69;

#line 447 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_6 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0__tmp_copy_6;
#line 447 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_4 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0__tmp_copy_4;
#line 447 "add_class.m"
              hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_2 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0__tmp_copy_2;
#line 447 "add_class.m"
              hlds__make_hlds__add_class__HeadVar__1_1 = hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1;
#line 447 "add_class.m"
            }
#line 447 "add_class.m"
            continue;
#line 401 "add_class.m"
          }
#line 400 "add_class.m"
      }
#line 400 "add_class.m"
      break;
#line 400 "add_class.m"
    }
#line 394 "add_class.m"
}

#line 347 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_method_9_p_0(
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_10,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Name_11,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_12,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_13,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__MaybePredIdProcId_14,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_44,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_45,
#line 347 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_46,
#line 347 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_47)
#line 347 "add_class.m"
{
#line 357 "add_class.m"
  {
#line 357 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 357 "add_class.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_10)) == (MR_mktag((MR_Integer) 0))))
#line 357 "add_class.m"
      {
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeVarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 0)));
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstVarSet_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 1)));
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ExistQVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 2)));
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredOrFunc_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 3)));
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 4)));
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypesAndModes_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 5)));
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybeDet_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 8)));
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Purity_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 10)));
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClassContext_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 11)));
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Context_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 12)));
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Args_30;
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__UnivCnstrs_31;
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ExistCnstrs_32;
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewUnivCnstrs_33;
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewClassContext_34;
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Markers0_35;
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Markers_36;
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_53_53;
#line 357 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_54_54;
#line 355 "add_class.m"
        MR_Word hlds__make_hlds__add_class___WithType_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 6)));
#line 355 "add_class.m"
        MR_Word hlds__make_hlds__add_class___WithInst_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 7)));
#line 355 "add_class.m"
        MR_Word hlds__make_hlds__add_class___Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Method_10, (MR_Integer) 9)));

#line 361 "add_class.m"
        {
#line 361 "add_class.m"
          hlds__make_hlds__add_class__V_53_53 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 361 "add_class.m"
        {
#line 361 "add_class.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_class__V_53_53, hlds__make_hlds__add_class__Vars_12, &hlds__make_hlds__add_class__Args_30);
        }
#line 362 "add_class.m"
        hlds__make_hlds__add_class__UnivCnstrs_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassContext_28, (MR_Integer) 0)));
#line 362 "add_class.m"
        hlds__make_hlds__add_class__ExistCnstrs_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassContext_28, (MR_Integer) 1)));
#line 363 "add_class.m"
        {
#line 363 "add_class.m"
          hlds__make_hlds__add_class__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 363 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_class__Name_11));
#line 363 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_54_54, 1) = ((MR_Box) (hlds__make_hlds__add_class__Args_30));
#line 363 "add_class.m"
        }
#line 363 "add_class.m"
        {
#line 363 "add_class.m"
          hlds__make_hlds__add_class__NewUnivCnstrs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewUnivCnstrs_33, 0) = ((MR_Box) (hlds__make_hlds__add_class__V_54_54));
#line 363 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__NewUnivCnstrs_33, 1) = ((MR_Box) (hlds__make_hlds__add_class__UnivCnstrs_31));
#line 363 "add_class.m"
        }
#line 364 "add_class.m"
        {
#line 364 "add_class.m"
          hlds__make_hlds__add_class__NewClassContext_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewClassContext_34, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewUnivCnstrs_33));
#line 364 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewClassContext_34, 1) = ((MR_Box) (hlds__make_hlds__add_class__ExistCnstrs_32));
#line 364 "add_class.m"
        }
#line 365 "add_class.m"
        {
#line 365 "add_class.m"
          hlds__hlds_pred__init_markers_1_p_0(&hlds__make_hlds__add_class__Markers0_35);
        }
#line 366 "add_class.m"
        {
#line 366 "add_class.m"
          hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 9, hlds__make_hlds__add_class__Markers0_35, &hlds__make_hlds__add_class__Markers_36);
        }
#line 367 "add_class.m"
        {
#line 367 "add_class.m"
          hlds__make_hlds__add_pred__module_add_pred_or_func_17_p_0(hlds__make_hlds__add_class__TypeVarSet_17, hlds__make_hlds__add_class__InstVarSet_18, hlds__make_hlds__add_class__ExistQVars_19, hlds__make_hlds__add_class__PredOrFunc_20, hlds__make_hlds__add_class__PredName_21, hlds__make_hlds__add_class__TypesAndModes_22, hlds__make_hlds__add_class__MaybeDet_25, hlds__make_hlds__add_class__Purity_27, hlds__make_hlds__add_class__NewClassContext_34, hlds__make_hlds__add_class__Markers_36, hlds__make_hlds__add_class__Context_29, hlds__make_hlds__add_class__Status_13, hlds__make_hlds__add_class__MaybePredIdProcId_14, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_44, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_45, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_47);
#line 367 "add_class.m"
          return;
        }
#line 357 "add_class.m"
      }
#line 357 "add_class.m"
    else
#line 372 "add_class.m"
      {
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_10, (MR_Integer) 0)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybePredOrFunc_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_10, (MR_Integer) 1)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Modes_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_10, (MR_Integer) 3)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__PredName_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_10, (MR_Integer) 2)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__MaybeDet_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_10, (MR_Integer) 5)));
#line 372 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Context_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_10, (MR_Integer) 7)));
#line 371 "add_class.m"
        MR_Word hlds__make_hlds__add_class___WithInst_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_10, (MR_Integer) 4)));
#line 371 "add_class.m"
        MR_Word hlds__make_hlds__add_class___Cond_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_10, (MR_Integer) 6)));

#line 381 "add_class.m"
        if ((hlds__make_hlds__add_class__MaybePredOrFunc_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "add_class.m"
          {
#line 385 "add_class.m"
            {
#line 385 "add_class.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.module_add_class_method\'/9", (MR_String) "no pred_or_func on mode declaration");
#line 385 "add_class.m"
              return;
            }
#line 382 "add_class.m"
          }
#line 381 "add_class.m"
        else
#line 374 "add_class.m"
          {
#line 374 "add_class.m"
            MR_Word hlds__make_hlds__add_class__ImportStatus_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Status_13, (MR_Integer) 0)));
#line 374 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredIdProcId_43;
#line 374 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredOrFunc_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybePredOrFunc_38, (MR_Integer) 0)));
#line 375 "add_class.m"
            MR_Word hlds__make_hlds__add_class__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Status_13, (MR_Integer) 1)));

#line 377 "add_class.m"
            {
#line 377 "add_class.m"
              hlds__make_hlds__add_pred__module_add_mode_13_p_0(hlds__make_hlds__add_class__VarSet_37, hlds__make_hlds__add_class__PredName_63, hlds__make_hlds__add_class__Modes_39, hlds__make_hlds__add_class__MaybeDet_65, hlds__make_hlds__add_class__ImportStatus_40, hlds__make_hlds__add_class__Context_67, hlds__make_hlds__add_class__PredOrFunc_60, (MR_Integer) 1, &hlds__make_hlds__add_class__PredIdProcId_43, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_44, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_45, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_46, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_47);
            }
#line 380 "add_class.m"
            {
#line 380 "add_class.m"
              MR_Word base;
#line 380 "add_class.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 380 "add_class.m"
              *hlds__make_hlds__add_class__MaybePredIdProcId_14 = base;
#line 380 "add_class.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__PredIdProcId_43));
#line 380 "add_class.m"
            }
#line 374 "add_class.m"
          }
#line 372 "add_class.m"
      }
#line 357 "add_class.m"
  }
#line 347 "add_class.m"
}

#line 334 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_p_0(
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Name_1,
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_2,
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__3_3,
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_4,
#line 334 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__HeadVar__5_5,
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_6,
#line 334 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_7,
#line 334 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_8,
#line 334 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_9)
#line 334 "add_class.m"
{
#line 340 "add_class.m"
  {
#line 340 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 340 "add_class.m"
    if ((hlds__make_hlds__add_class__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "add_class.m"
      {
#line 340 "add_class.m"
        *hlds__make_hlds__add_class__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 340 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_9 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_8;
#line 340 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_7 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_6;
#line 340 "add_class.m"
      }
#line 340 "add_class.m"
    else
#line 342 "add_class.m"
      {
#line 342 "add_class.m"
        MR_Word hlds__make_hlds__add_class__M_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__3_3, (MR_Integer) 0)));
#line 342 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Ms_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__3_3, (MR_Integer) 1)));
#line 342 "add_class.m"
        MR_Word hlds__make_hlds__add_class__P_24;
#line 342 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Ps_25;
#line 342 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_32_32;
#line 342 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_33_33;

#line 343 "add_class.m"
        {
#line 343 "add_class.m"
          hlds__make_hlds__add_class__module_add_class_method_9_p_0(hlds__make_hlds__add_class__M_21, hlds__make_hlds__add_class__Name_1, hlds__make_hlds__add_class__Vars_2, hlds__make_hlds__add_class__Status_4, &hlds__make_hlds__add_class__P_24, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_6, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_32_32, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_8, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_33_33);
        }
#line 344 "add_class.m"
        {
#line 344 "add_class.m"
          hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_p_0(hlds__make_hlds__add_class__Name_1, hlds__make_hlds__add_class__Vars_2, hlds__make_hlds__add_class__Ms_22, hlds__make_hlds__add_class__Status_4, &hlds__make_hlds__add_class__Ps_25, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_32_32, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_7, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_33_33, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_9);
        }
#line 342 "add_class.m"
        {
#line 342 "add_class.m"
          MR_Word base;
#line 342 "add_class.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "add_class.m"
          *hlds__make_hlds__add_class__HeadVar__5_5 = base;
#line 342 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__P_24));
#line 342 "add_class.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__Ps_25));
#line 342 "add_class.m"
        }
#line 342 "add_class.m"
      }
#line 340 "add_class.m"
  }
#line 334 "add_class.m"
}

#line 277 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_p_0(
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Name_11,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_12,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_13,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_14,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51,
#line 277 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53,
#line 277 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54,
#line 277 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55,
#line 277 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56)
#line 277 "add_class.m"
{
#line 285 "add_class.m"
  {
#line 285 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 285 "add_class.m"
    MR_Word hlds__make_hlds__add_class__MaybePredOrFunc_32;
#line 285 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredName_33;
#line 285 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Modes_34;
#line 285 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_38;
#line 285 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredTable_39;
#line 285 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__PredArity_40;
#line 285 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredOrFunc_41;
#line 285 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredIds_42;

#line 289 "add_class.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_14)) == (MR_mktag((MR_Integer) 0))))
#line 287 "add_class.m"
      {
#line 288 "add_class.m"
        {
#line 288 "add_class.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/10", (MR_String) "pred_or_func method item");
#line 288 "add_class.m"
          return;
        }
#line 287 "add_class.m"
      }
#line 289 "add_class.m"
    else
#line 290 "add_class.m"
      {
#line 290 "add_class.m"
        MR_Word hlds__make_hlds__add_class___VarSet_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_14, (MR_Integer) 0)));
#line 290 "add_class.m"
        MR_Word hlds__make_hlds__add_class___WithInst_35;
#line 290 "add_class.m"
        MR_Word hlds__make_hlds__add_class___MaybeDet_36;
#line 290 "add_class.m"
        MR_Word hlds__make_hlds__add_class___Cond_37;

#line 290 "add_class.m"
        hlds__make_hlds__add_class__MaybePredOrFunc_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_14, (MR_Integer) 1)));
#line 290 "add_class.m"
        hlds__make_hlds__add_class__PredName_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_14, (MR_Integer) 2)));
#line 290 "add_class.m"
        hlds__make_hlds__add_class__Modes_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_14, (MR_Integer) 3)));
#line 290 "add_class.m"
        hlds__make_hlds__add_class___WithInst_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_14, (MR_Integer) 4)));
#line 290 "add_class.m"
        hlds__make_hlds__add_class___MaybeDet_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_14, (MR_Integer) 5)));
#line 290 "add_class.m"
        hlds__make_hlds__add_class___Cond_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_14, (MR_Integer) 6)));
#line 290 "add_class.m"
        hlds__make_hlds__add_class__Context_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_14, (MR_Integer) 7)));
#line 290 "add_class.m"
      }
#line 293 "add_class.m"
    {
#line 293 "add_class.m"
      hlds__hlds_module__module_info_get_predicate_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53, &hlds__make_hlds__add_class__PredTable_39);
    }
#line 294 "add_class.m"
    {
#line 294 "add_class.m"
      hlds__make_hlds__add_class__PredArity_40 = mercury__list__length_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, hlds__make_hlds__add_class__Modes_34);
    }
#line 300 "add_class.m"
    if ((hlds__make_hlds__add_class__MaybePredOrFunc_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 296 "add_class.m"
      {
#line 299 "add_class.m"
        {
#line 299 "add_class.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/10", (MR_String) "unexpanded \140with_inst\140 annotation");
#line 299 "add_class.m"
          return;
        }
#line 296 "add_class.m"
      }
#line 300 "add_class.m"
    else
#line 301 "add_class.m"
      hlds__make_hlds__add_class__PredOrFunc_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__MaybePredOrFunc_32, (MR_Integer) 0)));
#line 303 "add_class.m"
    {
#line 303 "add_class.m"
      hlds__pred_table__predicate_table_lookup_pf_sym_arity_6_p_0(hlds__make_hlds__add_class__PredTable_39, (MR_Integer) 0, hlds__make_hlds__add_class__PredOrFunc_41, hlds__make_hlds__add_class__PredName_33, hlds__make_hlds__add_class__PredArity_40, &hlds__make_hlds__add_class__PredIds_42);
    }
#line 309 "add_class.m"
    if ((hlds__make_hlds__add_class__PredIds_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 306 "add_class.m"
      {
#line 307 "add_class.m"
        {
#line 307 "add_class.m"
          hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(hlds__make_hlds__add_class__PredName_33, hlds__make_hlds__add_class__PredArity_40, hlds__make_hlds__add_class__PredOrFunc_41, hlds__make_hlds__add_class__Context_38, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);
        }
#line 307 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51;
#line 307 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53;
#line 306 "add_class.m"
      }
#line 309 "add_class.m"
    else
#line 310 "add_class.m"
      {
#line 310 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadPredId_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_42, (MR_Integer) 0)));
#line 310 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TailPredIds_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__PredIds_42, (MR_Integer) 1)));

#line 327 "add_class.m"
        if ((hlds__make_hlds__add_class__TailPredIds_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "add_class.m"
          {
#line 312 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredInfo_46;
#line 312 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredMarkers_47;

#line 314 "add_class.m"
            {
#line 314 "add_class.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__add_class__HeadPredId_43, &hlds__make_hlds__add_class__PredInfo_46);
            }
#line 315 "add_class.m"
            {
#line 315 "add_class.m"
              hlds__hlds_pred__pred_info_get_markers_2_p_0(hlds__make_hlds__add_class__PredInfo_46, &hlds__make_hlds__add_class__PredMarkers_47);
            }
#line 316 "add_class.m"
            {
#line 316 "add_class.m"
              hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__PredMarkers_47, (MR_Integer) 9);
            }
#line 320 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 318 "add_class.m"
              {
#line 318 "add_class.m"
                MR_Word hlds__make_hlds__add_class__PredProcId_48;

#line 317 "add_class.m"
                {
#line 317 "add_class.m"
                  hlds__make_hlds__add_class__module_add_class_method_9_p_0(hlds__make_hlds__add_class__Method_14, hlds__make_hlds__add_class__Name_11, hlds__make_hlds__add_class__Vars_12, hlds__make_hlds__add_class__Status_13, &hlds__make_hlds__add_class__PredProcId_48, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);
                }
#line 319 "add_class.m"
                {
#line 319 "add_class.m"
                  mercury__list__cons_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], ((MR_Box) (hlds__make_hlds__add_class__PredProcId_48)), hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51, hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52);
#line 319 "add_class.m"
                  return;
                }
#line 318 "add_class.m"
              }
#line 320 "add_class.m"
            else
#line 324 "add_class.m"
              {
#line 324 "add_class.m"
                {
#line 324 "add_class.m"
                  hlds__make_hlds__add_class__missing_pred_or_func_method_error_6_p_0(hlds__make_hlds__add_class__PredName_33, hlds__make_hlds__add_class__PredArity_40, hlds__make_hlds__add_class__PredOrFunc_41, hlds__make_hlds__add_class__Context_38, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_55, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_56);
                }
#line 324 "add_class.m"
                *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_54 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_53;
#line 324 "add_class.m"
                *hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_52 = hlds__make_hlds__add_class__STATE_VARIABLE_PredProcIds_0_51;
#line 324 "add_class.m"
              }
#line 312 "add_class.m"
          }
#line 327 "add_class.m"
        else
#line 328 "add_class.m"
          {
#line 330 "add_class.m"
            {
#line 330 "add_class.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "predicate \140hlds.make_hlds.add_class.add_class_pred_or_func_mode_method\'/10", (MR_String) "multiple preds matching method mode");
#line 330 "add_class.m"
              return;
            }
#line 328 "add_class.m"
          }
#line 310 "add_class.m"
      }
#line 285 "add_class.m"
  }
#line 277 "add_class.m"
}

#line 272 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(
#line 272 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Method_2)
#line 272 "add_class.m"
{
#line 275 "add_class.m"
  {
#line 275 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__Method_2)) == (MR_mktag((MR_Integer) 1)));
#line 275 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_3_3;
#line 275 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_4_4;
#line 275 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_5_5;
#line 275 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_6_6;
#line 275 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_7_7;
#line 275 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_8_8;
#line 275 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_9_9;
#line 275 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_10_10;

#line 275 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 275 "add_class.m"
      {
#line 275 "add_class.m"
        hlds__make_hlds__add_class__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 0)));
#line 275 "add_class.m"
        hlds__make_hlds__add_class__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 1)));
#line 275 "add_class.m"
        hlds__make_hlds__add_class__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 2)));
#line 275 "add_class.m"
        hlds__make_hlds__add_class__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 3)));
#line 275 "add_class.m"
        hlds__make_hlds__add_class__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 4)));
#line 275 "add_class.m"
        hlds__make_hlds__add_class__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 5)));
#line 275 "add_class.m"
        hlds__make_hlds__add_class__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 6)));
#line 275 "add_class.m"
        hlds__make_hlds__add_class__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Method_2, (MR_Integer) 7)));
#line 275 "add_class.m"
      }
#line 275 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 275 "add_class.m"
  }
#line 272 "add_class.m"
}

#line 267 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_9_p_0_2(
#line 267 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 267 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 267 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 267 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 267 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 267 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 267 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 267 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7)
#line 267 "add_class.m"
{
#line 267 "add_class.m"
  {
#line 267 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 267 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_52;
#line 267 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_54;
#line 267 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_56;

#line 267 "add_class.m"
    {
#line 267 "add_class.m"
      hlds__make_hlds__add_class__add_class_pred_or_func_mode_method_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_52, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_4), &hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_54, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_6), &hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_56);
    }
#line 267 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_PredProcIds_52));
#line 267 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ModuleInfo_54));
#line 267 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_56));
#line 267 "add_class.m"
  }
#line 267 "add_class.m"
}

#line 257 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_9_p_0_1(
#line 257 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 257 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
#line 257 "add_class.m"
{
#line 257 "add_class.m"
  {
#line 257 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 257 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 257 "add_class.m"
    {
#line 257 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__is_class_method_mode_item_1_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
#line 257 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 257 "add_class.m"
  }
#line 257 "add_class.m"
}

#line 249 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_class_interface_9_p_0(
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Name_10,
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_11,
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Methods_12,
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_13,
#line 249 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__PredProcIds_14,
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_20,
#line 249 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_21,
#line 249 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_22,
#line 249 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_23)
#line 249 "add_class.m"
{
#line 256 "add_class.m"
  {
#line 256 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 256 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeCtorInfo_35_35 = (MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_class_method_0;
#line 256 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ModeMethods_17;
#line 256 "add_class.m"
    MR_Word hlds__make_hlds__add_class__PredOrFuncMethods_18;
#line 256 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_25_25;
#line 256 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_26_26;
#line 256 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_27_27;
#line 256 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_28_28;
#line 256 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_29_29;
#line 256 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_30_30;
#line 256 "add_class.m"
    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_31_31;
#line 267 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_29_29;
#line 267 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_30_30;
#line 267 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_31_31;

#line 257 "add_class.m"
    {
#line 257 "add_class.m"
      mercury__list__filter_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_35_35, (MR_Word) &hlds__make_hlds__add_class_scalar_common_2[4], hlds__make_hlds__add_class__Methods_12, &hlds__make_hlds__add_class__ModeMethods_17, &hlds__make_hlds__add_class__PredOrFuncMethods_18);
    }
#line 260 "add_class.m"
    {
#line 260 "add_class.m"
      hlds__make_hlds__add_class__add_class_pred_or_func_methods_9_p_0(hlds__make_hlds__add_class__Name_10, hlds__make_hlds__add_class__Vars_11, hlds__make_hlds__add_class__PredOrFuncMethods_18, hlds__make_hlds__add_class__Status_13, &hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_25_25, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_20, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_26_26, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_22, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_27_27);
    }
#line 267 "add_class.m"
    {
#line 267 "add_class.m"
      hlds__make_hlds__add_class__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 267 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_28_28, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_9[0]));
#line 267 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_28_28, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_interface_9_p_0_2));
#line 267 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 267 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_28_28, 3) = ((MR_Box) (hlds__make_hlds__add_class__Name_10));
#line 267 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_28_28, 4) = ((MR_Box) (hlds__make_hlds__add_class__Vars_11));
#line 267 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_28_28, 5) = ((MR_Box) (hlds__make_hlds__add_class__Status_13));
#line 267 "add_class.m"
    }
#line 267 "add_class.m"
    {
#line 267 "add_class.m"
      mercury__list__foldl3_8_p_0(hlds__make_hlds__add_class__TypeCtorInfo_35_35, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[7], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__V_28_28, hlds__make_hlds__add_class__ModeMethods_17, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_25_25)), &hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_29_29, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_26_26)), &hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_30_30, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_27_27)), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_31_31);
    }
#line 267 "add_class.m"
    hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_29_29 = ((MR_Word) hlds__make_hlds__add_class__conv5_STATE_VARIABLE_PPIds_29_29);
#line 267 "add_class.m"
    hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_30_30 = ((MR_Word) hlds__make_hlds__add_class__conv4_STATE_VARIABLE_ModuleInfo_30_30);
#line 267 "add_class.m"
    hlds__make_hlds__add_class__STATE_VARIABLE_Specs_31_31 = ((MR_Word) hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_31_31);
#line 269 "add_class.m"
    {
#line 269 "add_class.m"
      hlds__make_hlds__add_class__check_method_modes_7_p_0(hlds__make_hlds__add_class__Methods_12, hlds__make_hlds__add_class__STATE_VARIABLE_PPIds_29_29, hlds__make_hlds__add_class__PredProcIds_14, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_30_30, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_21, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_31_31, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_23);
#line 269 "add_class.m"
      return;
    }
#line 256 "add_class.m"
  }
#line 249 "add_class.m"
}

#line 238 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(
#line 238 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldFunDeps0_3,
#line 238 "add_class.m"
  MR_Word hlds__make_hlds__add_class__FunDeps0_4)
#line 238 "add_class.m"
{
#line 241 "add_class.m"
  {
#line 241 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 241 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeCtorInfo_7_7 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0;
#line 241 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldFunDeps_5;
#line 241 "add_class.m"
    MR_Word hlds__make_hlds__add_class__FunDeps_6;

#line 245 "add_class.m"
    {
#line 245 "add_class.m"
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_7_7, hlds__make_hlds__add_class__OldFunDeps0_3, &hlds__make_hlds__add_class__OldFunDeps_5);
    }
#line 246 "add_class.m"
    {
#line 246 "add_class.m"
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_7_7, hlds__make_hlds__add_class__FunDeps0_4, &hlds__make_hlds__add_class__FunDeps_6);
    }
#line 247 "add_class.m"
    {
#line 247 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[15], ((MR_Box) (hlds__make_hlds__add_class__OldFunDeps_5)), ((MR_Box) (hlds__make_hlds__add_class__FunDeps_6)));
    }
#line 241 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 241 "add_class.m"
  }
#line 238 "add_class.m"
}

#line 222 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__constraints_are_identical_6_p_0(
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVars0_7,
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldVarSet_8,
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__OldConstraints0_9,
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Vars_10,
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__VarSet_11,
#line 222 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Constraints_12)
#line 222 "add_class.m"
{
#line 227 "add_class.m"
  {
#line 227 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 227 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_19_19;
#line 227 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Renaming_14;
#line 227 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldConstraints1_15;
#line 227 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldVars_16;
#line 227 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarRenaming_17;
#line 227 "add_class.m"
    MR_Word hlds__make_hlds__add_class__OldConstraints_18;
#line 228 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_13_13;

#line 228 "add_class.m"
    {
#line 228 "add_class.m"
      parse_tree__prog_data__tvarset_merge_renaming_4_p_0(hlds__make_hlds__add_class__VarSet_11, hlds__make_hlds__add_class__OldVarSet_8, &hlds__make_hlds__add_class__V_13_13, &hlds__make_hlds__add_class__Renaming_14);
    }
#line 229 "add_class.m"
    {
#line 229 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(hlds__make_hlds__add_class__Renaming_14, hlds__make_hlds__add_class__OldConstraints0_9, &hlds__make_hlds__add_class__OldConstraints1_15);
    }
#line 231 "add_class.m"
    {
#line 231 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_list_3_p_0(hlds__make_hlds__add_class__Renaming_14, hlds__make_hlds__add_class__OldVars0_7, &hlds__make_hlds__add_class__OldVars_16);
    }
#line 4461 "hlds.make_hlds.add_class.c"
    hlds__make_hlds__add_class__TypeInfo_19_19 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
#line 233 "add_class.m"
    {
#line 233 "add_class.m"
      mercury__map__from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__TypeInfo_19_19, hlds__make_hlds__add_class__TypeInfo_19_19, hlds__make_hlds__add_class__OldVars_16, hlds__make_hlds__add_class__Vars_10, &hlds__make_hlds__add_class__VarRenaming_17);
    }
#line 234 "add_class.m"
    {
#line 234 "add_class.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(hlds__make_hlds__add_class__VarRenaming_17, hlds__make_hlds__add_class__OldConstraints1_15, &hlds__make_hlds__add_class__OldConstraints_18);
    }
#line 236 "add_class.m"
    {
#line 236 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[14], ((MR_Box) (hlds__make_hlds__add_class__OldConstraints_18)), ((MR_Box) (hlds__make_hlds__add_class__Constraints_12)));
    }
#line 227 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 227 "add_class.m"
  }
#line 222 "add_class.m"
}

#line 211 "add_class.m"
static MR_Integer MR_CALL 
hlds__make_hlds__add_class__get_list_index_3_f_0(
#line 211 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TypeInfo_for_T_17,
#line 211 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__1_1,
#line 211 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__N_2,
#line 211 "add_class.m"
  MR_Box hlds__make_hlds__add_class__X_3)
#line 211 "add_class.m"
{
#line 213 "add_class.m"
  while (MR_TRUE)
#line 213 "add_class.m"
    {
#line 213 "add_class.m"
      /* tailcall optimized into a loop */
#line 213 "add_class.m"
      {
#line 213 "add_class.m"
        MR_bool hlds__make_hlds__add_class__succeeded;
#line 213 "add_class.m"
        MR_Integer hlds__make_hlds__add_class__HeadVar__4_4;

#line 213 "add_class.m"
        if ((hlds__make_hlds__add_class__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 213 "add_class.m"
          {
#line 214 "add_class.m"
            {
#line 214 "add_class.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_class", (MR_String) "function \140hlds.make_hlds.add_class.get_list_index\'/3", (MR_String) "element not found");
            }
#line 213 "add_class.m"
          }
#line 213 "add_class.m"
        else
#line 215 "add_class.m"
          {
#line 215 "add_class.m"
            MR_Box hlds__make_hlds__add_class__E_11 = (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 0));
#line 215 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Es_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__HeadVar__1_1, (MR_Integer) 1)));

#line 216 "add_class.m"
            {
#line 216 "add_class.m"
              hlds__make_hlds__add_class__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__add_class__TypeInfo_for_T_17, hlds__make_hlds__add_class__X_3, hlds__make_hlds__add_class__E_11);
            }
#line 215 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 215 "add_class.m"
              hlds__make_hlds__add_class__HeadVar__4_4 = hlds__make_hlds__add_class__N_2;
#line 215 "add_class.m"
            else
#line 219 "add_class.m"
              {
#line 219 "add_class.m"
                MR_Integer hlds__make_hlds__add_class__V_15_15 = (hlds__make_hlds__add_class__N_2 + (MR_Integer) 1);

#line 215 "add_class.m"
                /* direct tailcall eliminated */
#line 215 "add_class.m"
                {
#line 215 "add_class.m"
                  MR_Word hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_class__Es_12;
#line 215 "add_class.m"
                  MR_Integer hlds__make_hlds__add_class__N__tmp_copy_2 = hlds__make_hlds__add_class__V_15_15;

#line 215 "add_class.m"
                  hlds__make_hlds__add_class__N_2 = hlds__make_hlds__add_class__N__tmp_copy_2;
#line 215 "add_class.m"
                  hlds__make_hlds__add_class__HeadVar__1_1 = hlds__make_hlds__add_class__HeadVar__1__tmp_copy_1;
#line 215 "add_class.m"
                }
#line 215 "add_class.m"
                continue;
#line 219 "add_class.m"
              }
#line 215 "add_class.m"
          }
#line 213 "add_class.m"
        return hlds__make_hlds__add_class__HeadVar__4_4;
#line 213 "add_class.m"
      }
#line 213 "add_class.m"
      break;
#line 213 "add_class.m"
    }
#line 211 "add_class.m"
}

#line 207 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1(
#line 207 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 207 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 207 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2)
#line 207 "add_class.m"
{
#line 207 "add_class.m"
  {
#line 207 "add_class.m"
    MR_Box hlds__make_hlds__add_class__wrapper_arg_3;
#line 207 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 207 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_HeadVar__4_13;

#line 207 "add_class.m"
    {
#line 207 "add_class.m"
      hlds__make_hlds__add_class__conv0_HeadVar__4_13 = hlds__make_hlds__add_class__IntroducedFrom__func__make_hlds_fundep_2__207__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2));
    }
#line 207 "add_class.m"
    hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv0_HeadVar__4_13));
#line 207 "add_class.m"
    return hlds__make_hlds__add_class__wrapper_arg_3;
#line 207 "add_class.m"
  }
#line 207 "add_class.m"
}

#line 198 "add_class.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(
#line 198 "add_class.m"
  MR_Word hlds__make_hlds__add_class__TVars_4,
#line 198 "add_class.m"
  MR_Word hlds__make_hlds__add_class__HeadVar__2_2)
#line 198 "add_class.m"
{
#line 200 "add_class.m"
  {
#line 200 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 200 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HeadVar__3_3;
#line 200 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Domain0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Range0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Domain_7;
#line 200 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Range_8;
#line 200 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_15_15;
#line 200 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Func_29;
#line 200 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_33_33;
#line 206 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv1_Domain_7;
#line 206 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv2_Range_8;

#line 206 "add_class.m"
    {
#line 206 "add_class.m"
      hlds__make_hlds__add_class__V_15_15 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 207 "add_class.m"
    {
#line 207 "add_class.m"
      hlds__make_hlds__add_class__Func_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 207 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_7[0]));
#line 207 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 1) = ((MR_Box) (hlds__make_hlds__add_class__make_hlds_fundep_2_f_0_1));
#line 207 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 207 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Func_29, 3) = ((MR_Box) (hlds__make_hlds__add_class__TVars_4));
#line 207 "add_class.m"
    }
#line 206 "add_class.m"
    {
#line 206 "add_class.m"
      hlds__make_hlds__add_class__conv1_Domain_7 = mercury__list__foldl_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[6], hlds__make_hlds__add_class__Func_29, hlds__make_hlds__add_class__Domain0_5, ((MR_Box) (hlds__make_hlds__add_class__V_15_15)));
    }
#line 206 "add_class.m"
    hlds__make_hlds__add_class__Domain_7 = ((MR_Word) hlds__make_hlds__add_class__conv1_Domain_7);
#line 206 "add_class.m"
    {
#line 206 "add_class.m"
      hlds__make_hlds__add_class__V_33_33 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
#line 206 "add_class.m"
    {
#line 206 "add_class.m"
      hlds__make_hlds__add_class__conv2_Range_8 = mercury__list__foldl_3_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[6], hlds__make_hlds__add_class__Func_29, hlds__make_hlds__add_class__Range0_6, ((MR_Box) (hlds__make_hlds__add_class__V_33_33)));
    }
#line 206 "add_class.m"
    hlds__make_hlds__add_class__Range_8 = ((MR_Word) hlds__make_hlds__add_class__conv2_Range_8);
#line 200 "add_class.m"
    {
#line 200 "add_class.m"
      hlds__make_hlds__add_class__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 200 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__3_3, 0) = ((MR_Box) (hlds__make_hlds__add_class__Domain_7));
#line 200 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__HeadVar__3_3, 1) = ((MR_Box) (hlds__make_hlds__add_class__Range_8));
#line 200 "add_class.m"
    }
#line 200 "add_class.m"
    return hlds__make_hlds__add_class__HeadVar__3_3;
#line 200 "add_class.m"
  }
#line 198 "add_class.m"
}

#line 642 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1(
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 642 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_4,
#line 642 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_5,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_6,
#line 642 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_7,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_8,
#line 642 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_9,
#line 642 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_10,
#line 642 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_11)
#line 642 "add_class.m"
{
#line 642 "add_class.m"
  {
#line 642 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 642 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv4_TVarSet_20;
#line 642 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_44;
#line 642 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_46;
#line 642 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_48;
#line 642 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_50;

#line 642 "add_class.m"
    {
#line 642 "add_class.m"
      hlds__make_hlds__add_class__produce_instance_method_clause_14_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv4_TVarSet_20, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_4), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_44, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_6), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_46, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_8), &hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_48, ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_10), &hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_50);
    }
#line 642 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv4_TVarSet_20));
#line 642 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_5 = ((MR_Box) (hlds__make_hlds__add_class__conv3_STATE_VARIABLE_ModuleInfo_44));
#line 642 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_7 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_QualInfo_46));
#line 642 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_9 = ((MR_Box) (hlds__make_hlds__add_class__conv1_STATE_VARIABLE_ClausesInfo_48));
#line 642 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_11 = ((MR_Box) (hlds__make_hlds__add_class__conv0_STATE_VARIABLE_Specs_50));
#line 642 "add_class.m"
  }
#line 642 "add_class.m"
}

#line 39 "add_class.m"
void MR_CALL 
hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(
#line 39 "add_class.m"
  MR_Word hlds__make_hlds__add_class__InstanceProcDefn_17,
#line 39 "add_class.m"
  MR_Word hlds__make_hlds__add_class__PredOrFunc_18,
#line 39 "add_class.m"
  MR_Integer hlds__make_hlds__add_class__PredArity_19,
#line 39 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ArgTypes_20,
#line 39 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Markers_21,
#line 39 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_22,
#line 39 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_23,
#line 39 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__ClausesInfo_24,
#line 39 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_48,
#line 39 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_49,
#line 39 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_50,
#line 39 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_51,
#line 39 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_52,
#line 39 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_53,
#line 39 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54,
#line 39 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55)
#line 39 "add_class.m"
{
#line 606 "add_class.m"
  {
#line 606 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;

#line 606 "add_class.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_class__InstanceProcDefn_17)) == (MR_mktag((MR_Integer) 1))))
#line 639 "add_class.m"
      {
#line 639 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstanceClauses_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__InstanceProcDefn_17, (MR_Integer) 0)));
#line 639 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClausesInfo0_47;
#line 639 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_56_56;
#line 639 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_57_57;
#line 642 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_49;
#line 642 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_51;
#line 642 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_53;
#line 642 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv6_ClausesInfo_24;
#line 642 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_55;

#line 640 "add_class.m"
        {
#line 640 "add_class.m"
          hlds__make_hlds__add_class__V_56_56 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        }
#line 640 "add_class.m"
        {
#line 640 "add_class.m"
          hlds__hlds_clauses__clauses_info_init_4_p_0(hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__PredArity_19, hlds__make_hlds__add_class__V_56_56, &hlds__make_hlds__add_class__ClausesInfo0_47);
        }
#line 642 "add_class.m"
        {
#line 642 "add_class.m"
          hlds__make_hlds__add_class__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 642 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_6[0]));
#line 642 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 1) = ((MR_Box) (hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0_1));
#line 642 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 642 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 3) = ((MR_Box) (hlds__make_hlds__add_class__PredOrFunc_18));
#line 642 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 4) = ((MR_Box) (hlds__make_hlds__add_class__Context_22));
#line 642 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_57_57, 5) = ((MR_Box) (hlds__make_hlds__add_class__Status_23));
#line 642 "add_class.m"
        }
#line 642 "add_class.m"
        {
#line 642 "add_class.m"
          mercury__list__foldl5_12_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_clause_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[4], (MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0, (MR_Word) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0, (MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clauses_info_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__V_57_57, hlds__make_hlds__add_class__InstanceClauses_46, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_48)), &hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_49, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_50)), &hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_51, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_52)), &hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_53, ((MR_Box) (hlds__make_hlds__add_class__ClausesInfo0_47)), &hlds__make_hlds__add_class__conv6_ClausesInfo_24, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54)), &hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_55);
        }
#line 642 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_49 = ((MR_Word) hlds__make_hlds__add_class__conv9_STATE_VARIABLE_TVarSet_49);
#line 642 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_51 = ((MR_Word) hlds__make_hlds__add_class__conv8_STATE_VARIABLE_ModuleInfo_51);
#line 642 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_53 = ((MR_Word) hlds__make_hlds__add_class__conv7_STATE_VARIABLE_QualInfo_53);
#line 642 "add_class.m"
        *hlds__make_hlds__add_class__ClausesInfo_24 = ((MR_Word) hlds__make_hlds__add_class__conv6_ClausesInfo_24);
#line 642 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55 = ((MR_Word) hlds__make_hlds__add_class__conv5_STATE_VARIABLE_Specs_55);
#line 639 "add_class.m"
      }
#line 606 "add_class.m"
    else
#line 606 "add_class.m"
      {
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_76_76;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstancePredName_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__InstanceProcDefn_17, (MR_Integer) 0)));
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo0_30;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo1_31;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadVars_32;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NonLocals_33;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo2_34;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__GoalInfo_35;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet0_36;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarSet_37;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__IntroducedGoal_38;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__IntroducedClause_39;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TVarNameMap_40;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__VarTypes_41;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__HeadVarVec_42;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__ClausesRep_43;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__RttiVarMaps_44;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_67_67;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_72_72;
#line 606 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_75_75;

#line 609 "add_class.m"
        {
#line 609 "add_class.m"
          hlds__hlds_goal__goal_info_init_1_p_0(&hlds__make_hlds__add_class__GoalInfo0_30);
        }
#line 610 "add_class.m"
        {
#line 610 "add_class.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(hlds__make_hlds__add_class__Context_22, hlds__make_hlds__add_class__GoalInfo0_30, &hlds__make_hlds__add_class__GoalInfo1_31);
        }
#line 4931 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_76_76 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 621 "add_class.m"
        {
#line 621 "add_class.m"
          mercury__varset__init_1_p_0(hlds__make_hlds__add_class__TypeCtorInfo_76_76, &hlds__make_hlds__add_class__VarSet0_36);
        }
#line 622 "add_class.m"
        {
#line 622 "add_class.m"
          parse_tree__prog_util__make_n_fresh_vars_5_p_0(hlds__make_hlds__add_class__TypeCtorInfo_76_76, (MR_String) "HeadVar__", hlds__make_hlds__add_class__PredArity_19, &hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__VarSet0_36, &hlds__make_hlds__add_class__VarSet_37);
        }
#line 611 "add_class.m"
        {
#line 611 "add_class.m"
          parse_tree__set_of_var__list_to_set_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_76_76, hlds__make_hlds__add_class__HeadVars_32, &hlds__make_hlds__add_class__NonLocals_33);
        }
#line 612 "add_class.m"
        {
#line 612 "add_class.m"
          hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__make_hlds__add_class__NonLocals_33, hlds__make_hlds__add_class__GoalInfo1_31, &hlds__make_hlds__add_class__GoalInfo2_34);
        }
#line 613 "add_class.m"
        {
#line 613 "add_class.m"
          hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__Markers_21, (MR_Integer) 12);
        }
#line 615 "add_class.m"
        if (hlds__make_hlds__add_class__succeeded)
#line 614 "add_class.m"
          {
#line 614 "add_class.m"
            {
#line 614 "add_class.m"
              hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 2, hlds__make_hlds__add_class__GoalInfo2_34, &hlds__make_hlds__add_class__GoalInfo_35);
            }
#line 614 "add_class.m"
          }
#line 615 "add_class.m"
        else
#line 617 "add_class.m"
          {
#line 615 "add_class.m"
            {
#line 615 "add_class.m"
              hlds__make_hlds__add_class__succeeded = hlds__hlds_pred__check_marker_2_p_0(hlds__make_hlds__add_class__Markers_21, (MR_Integer) 13);
            }
#line 617 "add_class.m"
            if (hlds__make_hlds__add_class__succeeded)
#line 616 "add_class.m"
              {
#line 616 "add_class.m"
                {
#line 616 "add_class.m"
                  hlds__hlds_goal__goal_info_set_purity_3_p_0((MR_Integer) 1, hlds__make_hlds__add_class__GoalInfo2_34, &hlds__make_hlds__add_class__GoalInfo_35);
                }
#line 616 "add_class.m"
              }
#line 617 "add_class.m"
            else
#line 618 "add_class.m"
              hlds__make_hlds__add_class__GoalInfo_35 = hlds__make_hlds__add_class__GoalInfo2_34;
#line 617 "add_class.m"
          }
#line 623 "add_class.m"
        {
#line 623 "add_class.m"
          hlds__make_hlds__add_class__V_67_67 = hlds__hlds_pred__invalid_pred_id_0_f_0();
        }
#line 623 "add_class.m"
        {
#line 623 "add_class.m"
          hlds__make_hlds__qual_info__construct_pred_or_func_call_8_p_0(hlds__make_hlds__add_class__V_67_67, hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__InstancePredName_29, hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__GoalInfo_35, &hlds__make_hlds__add_class__IntroducedGoal_38, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_0_52, hlds__make_hlds__add_class__STATE_VARIABLE_QualInfo_53);
        }
#line 625 "add_class.m"
        {
#line 625 "add_class.m"
          hlds__make_hlds__add_class__IntroducedClause_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 625 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 1) = ((MR_Box) (hlds__make_hlds__add_class__IntroducedGoal_38));
#line 625 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 3) = ((MR_Box) (hlds__make_hlds__add_class__Context_22));
#line 625 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__IntroducedClause_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 625 "add_class.m"
        }
#line 628 "add_class.m"
        {
#line 628 "add_class.m"
          mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0], &hlds__make_hlds__add_class__TVarNameMap_40);
        }
#line 629 "add_class.m"
        {
#line 629 "add_class.m"
          parse_tree__prog_data__vartypes_from_corresponding_lists_3_p_0(hlds__make_hlds__add_class__HeadVars_32, hlds__make_hlds__add_class__ArgTypes_20, &hlds__make_hlds__add_class__VarTypes_41);
        }
#line 630 "add_class.m"
        {
#line 630 "add_class.m"
          hlds__make_hlds__add_class__HeadVarVec_42 = hlds__hlds_args__proc_arg_vector_init_2_f_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[3], hlds__make_hlds__add_class__PredOrFunc_18, hlds__make_hlds__add_class__HeadVars_32);
        }
#line 631 "add_class.m"
        {
#line 631 "add_class.m"
          hlds__make_hlds__add_class__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_class__IntroducedClause_39));
#line 631 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 631 "add_class.m"
        }
#line 631 "add_class.m"
        {
#line 631 "add_class.m"
          hlds__hlds_clauses__set_clause_list_2_p_0(hlds__make_hlds__add_class__V_72_72, &hlds__make_hlds__add_class__ClausesRep_43);
        }
#line 632 "add_class.m"
        {
#line 632 "add_class.m"
          hlds__hlds_rtti__rtti_varmaps_init_1_p_0(&hlds__make_hlds__add_class__RttiVarMaps_44);
        }
#line 634 "add_class.m"
        {
#line 634 "add_class.m"
          hlds__make_hlds__add_class__V_75_75 = hlds__hlds_clauses__init_clause_item_numbers_comp_gen_0_f_0();
        }
#line 634 "add_class.m"
        {
#line 634 "add_class.m"
          MR_Word base;
#line 634 "add_class.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 634 "add_class.m"
          *hlds__make_hlds__add_class__ClausesInfo_24 = base;
#line 634 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_37));
#line 634 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_class__VarTypes_41));
#line 634 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_class__TVarNameMap_40));
#line 634 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_class__VarTypes_41));
#line 634 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_class__HeadVarVec_42));
#line 634 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__add_class__ClausesRep_43));
#line 634 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__add_class__V_75_75));
#line 634 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__make_hlds__add_class__RttiVarMaps_44));
#line 634 "add_class.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) ((MR_Integer) 0));
#line 634 "add_class.m"
        }
#line 634 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_49 = hlds__make_hlds__add_class__STATE_VARIABLE_TVarSet_0_48;
#line 634 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_51 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_50;
#line 634 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_55 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_54;
#line 606 "add_class.m"
      }
#line 606 "add_class.m"
  }
#line 39 "add_class.m"
}

#line 530 "add_class.m"
static void MR_CALL 
hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_2(
#line 530 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 530 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 530 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_2,
#line 530 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_3)
#line 530 "add_class.m"
{
#line 530 "add_class.m"
  {
#line 530 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 530 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26;

#line 530 "add_class.m"
    {
#line 530 "add_class.m"
      hlds__make_hlds__add_class__check_instance_constraints_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_2), &hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26);
    }
#line 530 "add_class.m"
    *hlds__make_hlds__add_class__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_class__conv2_STATE_VARIABLE_Specs_26));
#line 530 "add_class.m"
  }
#line 530 "add_class.m"
}

#line 528 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_1(
#line 528 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 528 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
#line 528 "add_class.m"
{
#line 528 "add_class.m"
  {
#line 528 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 528 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;

#line 528 "add_class.m"
    {
#line 528 "add_class.m"
      return hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__same_type_hlds_instance_defn_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
#line 528 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 528 "add_class.m"
  }
#line 528 "add_class.m"
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
  MR_Word hlds__make_hlds__add_class__Body0_19,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__VarSet_20,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_21,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Context_22,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_35,
#line 29 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_36,
#line 29 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_37,
#line 29 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38)
#line 29 "add_class.m"
{
#line 451 "add_class.m"
  {
#line 451 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 451 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Classes_25;
#line 451 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Instances0_26;
#line 451 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__ClassArity_27;
#line 451 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassId_28;
#line 451 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Body_29;
#line 457 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_30_30;
#line 457 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv0_V_30_30;

#line 452 "add_class.m"
    {
#line 452 "add_class.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_35, &hlds__make_hlds__add_class__Classes_25);
    }
#line 453 "add_class.m"
    {
#line 453 "add_class.m"
      hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_35, &hlds__make_hlds__add_class__Instances0_26);
    }
#line 454 "add_class.m"
    {
#line 454 "add_class.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, hlds__make_hlds__add_class__Types_17, &hlds__make_hlds__add_class__ClassArity_27);
    }
#line 455 "add_class.m"
    {
#line 455 "add_class.m"
      hlds__make_hlds__add_class__ClassId_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 455 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_28, 0) = ((MR_Box) (hlds__make_hlds__add_class__ClassName_16));
#line 455 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_28, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_27));
#line 455 "add_class.m"
    }
#line 456 "add_class.m"
    {
#line 456 "add_class.m"
      hlds__make_hlds__state_var__expand_bang_states_instance_body_2_p_0(hlds__make_hlds__add_class__Body0_19, &hlds__make_hlds__add_class__Body_29);
    }
#line 457 "add_class.m"
    {
#line 457 "add_class.m"
      hlds__make_hlds__add_class__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__make_hlds__add_class__Classes_25, ((MR_Box) (hlds__make_hlds__add_class__ClassId_28)), &hlds__make_hlds__add_class__conv0_V_30_30);
    }
#line 457 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 457 "add_class.m"
      {
#line 457 "add_class.m"
        hlds__make_hlds__add_class__V_30_30 = ((MR_Word) hlds__make_hlds__add_class__conv0_V_30_30);
#line 457 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 457 "add_class.m"
      }
#line 472 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 458 "add_class.m"
      {
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_51_51;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeInfo_52_52;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_17_64;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Empty_31;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__NewInstanceDefn_32;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__InstanceDefns_33;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__Instances_34;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_40_40;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_42_42;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__EquivInstanceDefns_59;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_60_60;
#line 458 "add_class.m"
        MR_Word hlds__make_hlds__add_class__V_61_61;
#line 462 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv1_InstanceDefns_33;
#line 530 "add_class.m"
        MR_Box hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_38;

#line 458 "add_class.m"
        {
#line 458 "add_class.m"
          mercury__map__init_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &hlds__make_hlds__add_class__Empty_31);
        }
#line 459 "add_class.m"
        {
#line 459 "add_class.m"
          hlds__make_hlds__add_class__NewInstanceDefn_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 459 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_32, 0) = ((MR_Box) (hlds__make_hlds__add_class__InstanceModuleName_14));
#line 459 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_32, 1) = ((MR_Box) (hlds__make_hlds__add_class__Status_21));
#line 459 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_32, 2) = ((MR_Box) (hlds__make_hlds__add_class__Context_22));
#line 459 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_32, 3) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_15));
#line 459 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_32, 4) = ((MR_Box) (hlds__make_hlds__add_class__Types_17));
#line 459 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_32, 5) = ((MR_Box) (hlds__make_hlds__add_class__OriginalTypes_18));
#line 459 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_32, 6) = ((MR_Box) (hlds__make_hlds__add_class__Body_29));
#line 459 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_32, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 459 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_32, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_20));
#line 459 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__NewInstanceDefn_32, 9) = ((MR_Box) (hlds__make_hlds__add_class__Empty_31));
#line 459 "add_class.m"
        }
#line 5321 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_51_51 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 5323 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeInfo_52_52 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[2];
#line 462 "add_class.m"
        {
#line 462 "add_class.m"
          mercury__map__lookup_3_p_0(hlds__make_hlds__add_class__TypeCtorInfo_51_51, hlds__make_hlds__add_class__TypeInfo_52_52, hlds__make_hlds__add_class__Instances0_26, ((MR_Box) (hlds__make_hlds__add_class__ClassId_28)), &hlds__make_hlds__add_class__conv1_InstanceDefns_33);
        }
#line 462 "add_class.m"
        hlds__make_hlds__add_class__InstanceDefns_33 = ((MR_Word) hlds__make_hlds__add_class__conv1_InstanceDefns_33);
#line 464 "add_class.m"
        {
#line 464 "add_class.m"
          hlds__make_hlds__add_class__check_for_overlapping_instances_5_p_0(hlds__make_hlds__add_class__NewInstanceDefn_32, hlds__make_hlds__add_class__InstanceDefns_33, hlds__make_hlds__add_class__ClassId_28, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_37, &hlds__make_hlds__add_class__STATE_VARIABLE_Specs_40_40);
        }
#line 528 "add_class.m"
        {
#line 528 "add_class.m"
          hlds__make_hlds__add_class__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 528 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_60_60, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_4[1]));
#line 528 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_60_60, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_1));
#line 528 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_60_60, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 528 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_60_60, 3) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_32));
#line 528 "add_class.m"
        }
#line 5351 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_17_64 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
#line 528 "add_class.m"
        {
#line 528 "add_class.m"
          mercury__list__filter_3_p_0(hlds__make_hlds__add_class__TypeCtorInfo_17_64, hlds__make_hlds__add_class__V_60_60, hlds__make_hlds__add_class__InstanceDefns_33, &hlds__make_hlds__add_class__EquivInstanceDefns_59);
        }
#line 530 "add_class.m"
        {
#line 530 "add_class.m"
          hlds__make_hlds__add_class__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 530 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_61_61, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_5[0]));
#line 530 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_61_61, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_instance_defn_13_p_0_2));
#line 530 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 530 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_61_61, 3) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_32));
#line 530 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_61_61, 4) = ((MR_Box) (hlds__make_hlds__add_class__ClassId_28));
#line 530 "add_class.m"
        }
#line 530 "add_class.m"
        {
#line 530 "add_class.m"
          mercury__list__foldl_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_17_64, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[5], hlds__make_hlds__add_class__V_61_61, hlds__make_hlds__add_class__EquivInstanceDefns_59, ((MR_Box) (hlds__make_hlds__add_class__STATE_VARIABLE_Specs_40_40)), &hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_38);
        }
#line 530 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38 = ((MR_Word) hlds__make_hlds__add_class__conv3_STATE_VARIABLE_Specs_38);
#line 469 "add_class.m"
        {
#line 469 "add_class.m"
          hlds__make_hlds__add_class__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_42_42, 0) = ((MR_Box) (hlds__make_hlds__add_class__NewInstanceDefn_32));
#line 469 "add_class.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_class__InstanceDefns_33));
#line 469 "add_class.m"
        }
#line 469 "add_class.m"
        {
#line 469 "add_class.m"
          mercury__map__det_update_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_51_51, hlds__make_hlds__add_class__TypeInfo_52_52, ((MR_Box) (hlds__make_hlds__add_class__ClassId_28)), ((MR_Box) (hlds__make_hlds__add_class__V_42_42)), hlds__make_hlds__add_class__Instances0_26, &hlds__make_hlds__add_class__Instances_34);
        }
#line 471 "add_class.m"
        {
#line 471 "add_class.m"
          hlds__hlds_module__module_info_set_instance_table_3_p_0(hlds__make_hlds__add_class__Instances_34, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_35, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_36);
#line 471 "add_class.m"
          return;
        }
#line 458 "add_class.m"
      }
#line 472 "add_class.m"
    else
#line 473 "add_class.m"
      {
#line 473 "add_class.m"
        {
#line 473 "add_class.m"
          hlds__make_hlds__add_class__undefined_type_class_error_6_p_0(hlds__make_hlds__add_class__ClassName_16, hlds__make_hlds__add_class__ClassArity_27, hlds__make_hlds__add_class__Context_22, (MR_String) "instance declaration", hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_37, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_38);
        }
#line 473 "add_class.m"
        *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_36 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_35;
#line 473 "add_class.m"
      }
#line 451 "add_class.m"
  }
#line 29 "add_class.m"
}

#line 157 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_6_p_0_3(
#line 157 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 157 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 157 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2)
#line 157 "add_class.m"
{
#line 157 "add_class.m"
  {
#line 157 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 157 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 157 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv3_HeadVar__2_88;

#line 157 "add_class.m"
    {
#line 157 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), &hlds__make_hlds__add_class__conv3_HeadVar__2_88);
    }
#line 157 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 157 "add_class.m"
      {
#line 157 "add_class.m"
        *hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv3_HeadVar__2_88));
#line 157 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 157 "add_class.m"
      }
#line 157 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 157 "add_class.m"
  }
#line 157 "add_class.m"
}

#line 157 "add_class.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_6_p_0_2(
#line 157 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 157 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1,
#line 157 "add_class.m"
  MR_Box * hlds__make_hlds__add_class__wrapper_arg_2)
#line 157 "add_class.m"
{
#line 157 "add_class.m"
  {
#line 157 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 157 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 157 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv2_HeadVar__2_88;

#line 157 "add_class.m"
    {
#line 157 "add_class.m"
      hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__IntroducedFrom__pred__module_add_class_defn__157__1_2_p_0(((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1), &hlds__make_hlds__add_class__conv2_HeadVar__2_88);
    }
#line 157 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 157 "add_class.m"
      {
#line 157 "add_class.m"
        *hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv2_HeadVar__2_88));
#line 157 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 157 "add_class.m"
      }
#line 157 "add_class.m"
    return hlds__make_hlds__add_class__succeeded;
#line 157 "add_class.m"
  }
#line 157 "add_class.m"
}

#line 92 "add_class.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_6_p_0_1(
#line 92 "add_class.m"
  MR_Box hlds__make_hlds__add_class__closure_arg,
#line 92 "add_class.m"
  MR_Box hlds__make_hlds__add_class__wrapper_arg_1)
#line 92 "add_class.m"
{
#line 92 "add_class.m"
  {
#line 92 "add_class.m"
    MR_Box hlds__make_hlds__add_class__wrapper_arg_2;
#line 92 "add_class.m"
    MR_Box hlds__make_hlds__add_class__closure = hlds__make_hlds__add_class__closure_arg;
#line 92 "add_class.m"
    MR_Word hlds__make_hlds__add_class__conv0_HeadVar__3_3;

#line 92 "add_class.m"
    {
#line 92 "add_class.m"
      hlds__make_hlds__add_class__conv0_HeadVar__3_3 = hlds__make_hlds__add_class__make_hlds_fundep_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__add_class__wrapper_arg_1));
    }
#line 92 "add_class.m"
    hlds__make_hlds__add_class__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_class__conv0_HeadVar__3_3));
#line 92 "add_class.m"
    return hlds__make_hlds__add_class__wrapper_arg_2;
#line 92 "add_class.m"
  }
#line 92 "add_class.m"
}

#line 25 "add_class.m"
void MR_CALL 
hlds__make_hlds__add_class__module_add_class_defn_6_p_0(
#line 25 "add_class.m"
  MR_Word hlds__make_hlds__add_class__ItemTypeClassInfo_7,
#line 25 "add_class.m"
  MR_Word hlds__make_hlds__add_class__Status_8,
#line 25 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63,
#line 25 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64,
#line 25 "add_class.m"
  MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65,
#line 25 "add_class.m"
  MR_Word * hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66)
#line 25 "add_class.m"
{
#line 78 "add_class.m"
  {
#line 78 "add_class.m"
    MR_bool hlds__make_hlds__add_class__succeeded;
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__TypeInfo_99_99;
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_7, (MR_Integer) 0)));
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__FunDeps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_7, (MR_Integer) 1)));
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Name_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_7, (MR_Integer) 2)));
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Vars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_7, (MR_Integer) 3)));
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Interface_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_7, (MR_Integer) 4)));
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__VarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_7, (MR_Integer) 5)));
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_7, (MR_Integer) 6)));
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__Classes0_19;
#line 78 "add_class.m"
    MR_Integer hlds__make_hlds__add_class__ClassArity_20;
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ClassId_21;
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ImportStatus0_22;
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__ImportStatus1_24;
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__HLDSFunDeps_26;
#line 78 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_67_67;
#line 79 "add_class.m"
    MR_Integer hlds__make_hlds__add_class___SeqNum_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ItemTypeClassInfo_7, (MR_Integer) 7)));
#line 84 "add_class.m"
    MR_Word hlds__make_hlds__add_class__V_23_23;
#line 5594 "hlds.make_hlds.add_class.c"
    MR_Word hlds__make_hlds__add_class__OldDefn_27;
#line 96 "add_class.m"
    MR_Box hlds__make_hlds__add_class__conv1_OldDefn_27;

#line 81 "add_class.m"
    {
#line 81 "add_class.m"
      hlds__hlds_module__module_info_get_class_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63, &hlds__make_hlds__add_class__Classes0_19);
    }
#line 5604 "hlds.make_hlds.add_class.c"
    hlds__make_hlds__add_class__TypeInfo_99_99 = (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[0];
#line 82 "add_class.m"
    {
#line 82 "add_class.m"
      mercury__list__length_2_p_0(hlds__make_hlds__add_class__TypeInfo_99_99, hlds__make_hlds__add_class__Vars_14, &hlds__make_hlds__add_class__ClassArity_20);
    }
#line 83 "add_class.m"
    {
#line 83 "add_class.m"
      hlds__make_hlds__add_class__ClassId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 83 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_21, 0) = ((MR_Box) (hlds__make_hlds__add_class__Name_13));
#line 83 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__ClassId_21, 1) = ((MR_Box) (hlds__make_hlds__add_class__ClassArity_20));
#line 83 "add_class.m"
    }
#line 84 "add_class.m"
    hlds__make_hlds__add_class__ImportStatus0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Status_8, (MR_Integer) 0)));
#line 84 "add_class.m"
    hlds__make_hlds__add_class__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Status_8, (MR_Integer) 1)));
#line 88 "add_class.m"
    if ((hlds__make_hlds__add_class__Interface_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 87 "add_class.m"
      {
#line 87 "add_class.m"
        hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__add_class__ImportStatus0_22, &hlds__make_hlds__add_class__ImportStatus1_24);
      }
#line 88 "add_class.m"
    else
#line 90 "add_class.m"
      hlds__make_hlds__add_class__ImportStatus1_24 = hlds__make_hlds__add_class__ImportStatus0_22;
#line 92 "add_class.m"
    {
#line 92 "add_class.m"
      hlds__make_hlds__add_class__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 92 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_67_67, 0) = ((MR_Box) (&hlds__make_hlds__add_class_scalar_common_3[0]));
#line 92 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_class__module_add_class_defn_6_p_0_1));
#line 92 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 92 "add_class.m"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__V_67_67, 3) = ((MR_Box) (hlds__make_hlds__add_class__Vars_14));
#line 92 "add_class.m"
    }
#line 92 "add_class.m"
    {
#line 92 "add_class.m"
      hlds__make_hlds__add_class__HLDSFunDeps_26 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_fundep_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_fundep_0, hlds__make_hlds__add_class__V_67_67, hlds__make_hlds__add_class__FunDeps_12);
    }
#line 96 "add_class.m"
    {
#line 96 "add_class.m"
      hlds__make_hlds__add_class__succeeded = mercury__map__search_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, hlds__make_hlds__add_class__Classes0_19, ((MR_Box) (hlds__make_hlds__add_class__ClassId_21)), &hlds__make_hlds__add_class__conv1_OldDefn_27);
    }
#line 96 "add_class.m"
    if (hlds__make_hlds__add_class__succeeded)
#line 96 "add_class.m"
      {
#line 96 "add_class.m"
        hlds__make_hlds__add_class__OldDefn_27 = ((MR_Word) hlds__make_hlds__add_class__conv1_OldDefn_27);
#line 96 "add_class.m"
        hlds__make_hlds__add_class__succeeded = MR_TRUE;
#line 96 "add_class.m"
      }
#line 5670 "hlds.make_hlds.add_class.c"
    if (hlds__make_hlds__add_class__succeeded)
#line 5672 "hlds.make_hlds.add_class.c"
      {
#line 5674 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldStatus_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 0)));
#line 5676 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldConstraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 1)));
#line 5678 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldFunDeps_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 2)));
#line 5680 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldVars_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 4)));
#line 5682 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldInterface_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 6)));
#line 5684 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldMethods_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 7)));
#line 5686 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldVarSet_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 8)));
#line 5688 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__OldContext_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 9)));
#line 5690 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ImportStatus_38;
#line 5692 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassMethods0_40;
#line 5694 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassInterface_41;
#line 98 "add_class.m"
        MR_Word hlds__make_hlds__add_class___OldAncestors_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 3)));
#line 98 "add_class.m"
        MR_Word hlds__make_hlds__add_class___OldKinds_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__OldDefn_27, (MR_Integer) 5)));

#line 101 "add_class.m"
        {
#line 101 "add_class.m"
          hlds__make_hlds__add_type__combine_status_3_p_0(hlds__make_hlds__add_class__ImportStatus1_24, hlds__make_hlds__add_class__OldStatus_28, &hlds__make_hlds__add_class__ImportStatus_38);
        }
#line 106 "add_class.m"
        if ((hlds__make_hlds__add_class__OldInterface_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 107 "add_class.m"
          {
#line 108 "add_class.m"
            hlds__make_hlds__add_class__ClassMethods0_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 109 "add_class.m"
            hlds__make_hlds__add_class__ClassInterface_41 = hlds__make_hlds__add_class__Interface_15;
#line 107 "add_class.m"
          }
#line 106 "add_class.m"
        else
#line 103 "add_class.m"
          {
#line 104 "add_class.m"
            hlds__make_hlds__add_class__ClassMethods0_40 = hlds__make_hlds__add_class__OldMethods_35;
#line 105 "add_class.m"
            hlds__make_hlds__add_class__ClassInterface_41 = hlds__make_hlds__add_class__OldInterface_34;
#line 103 "add_class.m"
          }
#line 113 "add_class.m"
        {
#line 113 "add_class.m"
          hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__constraints_are_identical_6_p_0(hlds__make_hlds__add_class__OldVars_32, hlds__make_hlds__add_class__OldVarSet_36, hlds__make_hlds__add_class__OldConstraints_29, hlds__make_hlds__add_class__Vars_14, hlds__make_hlds__add_class__VarSet_16, hlds__make_hlds__add_class__Constraints_11);
        }
#line 113 "add_class.m"
        hlds__make_hlds__add_class__succeeded = !(hlds__make_hlds__add_class__succeeded);
#line 5733 "hlds.make_hlds.add_class.c"
        if (hlds__make_hlds__add_class__succeeded)
#line 5735 "hlds.make_hlds.add_class.c"
          {
#line 119 "add_class.m"
            {
#line 119 "add_class.m"
              hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), hlds__make_hlds__add_class__Name_13, hlds__make_hlds__add_class__ClassArity_20, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_17, hlds__make_hlds__add_class__OldContext_37, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[11]), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66);
            }
#line 195 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63;
#line 5744 "hlds.make_hlds.add_class.c"
          }
#line 5746 "hlds.make_hlds.add_class.c"
        else
#line 5748 "hlds.make_hlds.add_class.c"
          {
#line 123 "add_class.m"
            {
#line 123 "add_class.m"
              hlds__make_hlds__add_class__succeeded = hlds__make_hlds__add_class__class_fundeps_are_identical_2_p_0(hlds__make_hlds__add_class__OldFunDeps_30, hlds__make_hlds__add_class__HLDSFunDeps_26);
            }
#line 123 "add_class.m"
            hlds__make_hlds__add_class__succeeded = !(hlds__make_hlds__add_class__succeeded);
#line 5757 "hlds.make_hlds.add_class.c"
            if (hlds__make_hlds__add_class__succeeded)
#line 5759 "hlds.make_hlds.add_class.c"
              {
#line 128 "add_class.m"
                {
#line 128 "add_class.m"
                  hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), hlds__make_hlds__add_class__Name_13, hlds__make_hlds__add_class__ClassArity_20, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_17, hlds__make_hlds__add_class__OldContext_37, (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_class_scalar_common_1[13]), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66);
                }
#line 195 "add_class.m"
                *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63;
#line 5768 "hlds.make_hlds.add_class.c"
              }
#line 5770 "hlds.make_hlds.add_class.c"
            else
#line 5772 "hlds.make_hlds.add_class.c"
              {
#line 132 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_45_45;
#line 133 "add_class.m"
                MR_Word hlds__make_hlds__add_class__V_46_46;

#line 132 "add_class.m"
                hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__Interface_15)) == (MR_mktag((MR_Integer) 1)));
#line 132 "add_class.m"
                if (hlds__make_hlds__add_class__succeeded)
#line 132 "add_class.m"
                  {
#line 132 "add_class.m"
                    hlds__make_hlds__add_class__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_15, (MR_Integer) 0)));
#line 133 "add_class.m"
                    hlds__make_hlds__add_class__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_class__OldInterface_34)) == (MR_mktag((MR_Integer) 1)));
#line 133 "add_class.m"
                    if (hlds__make_hlds__add_class__succeeded)
#line 133 "add_class.m"
                      hlds__make_hlds__add_class__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__OldInterface_34, (MR_Integer) 0)));
#line 132 "add_class.m"
                  }
#line 5795 "hlds.make_hlds.add_class.c"
                if (hlds__make_hlds__add_class__succeeded)
#line 5797 "hlds.make_hlds.add_class.c"
                  {
#line 135 "add_class.m"
                    {
#line 135 "add_class.m"
                      hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0(hlds__make_hlds__add_class__ImportStatus_38, hlds__make_hlds__add_class__Name_13, hlds__make_hlds__add_class__ClassArity_20, (MR_String) "typeclass", hlds__make_hlds__add_class__Context_17, hlds__make_hlds__add_class__OldContext_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66);
                    }
#line 195 "add_class.m"
                    *hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63;
#line 5806 "hlds.make_hlds.add_class.c"
                  }
#line 5808 "hlds.make_hlds.add_class.c"
                else
#line 5810 "hlds.make_hlds.add_class.c"
                  {
#line 5812 "hlds.make_hlds.add_class.c"
                    MR_Word hlds__make_hlds__add_class__ClassMethods_56;
#line 5814 "hlds.make_hlds.add_class.c"
                    MR_Word hlds__make_hlds__add_class__Kinds_58;
#line 5816 "hlds.make_hlds.add_class.c"
                    MR_Word hlds__make_hlds__add_class__Defn_59;
#line 5818 "hlds.make_hlds.add_class.c"
                    MR_Word hlds__make_hlds__add_class__Classes_60;
#line 5820 "hlds.make_hlds.add_class.c"
                    MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_85_85;

#line 167 "add_class.m"
                    if ((hlds__make_hlds__add_class__Interface_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "add_class.m"
                      {
#line 169 "add_class.m"
                        hlds__make_hlds__add_class__ClassMethods_56 = hlds__make_hlds__add_class__ClassMethods0_40;
#line 169 "add_class.m"
                        hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_85_85 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63;
#line 169 "add_class.m"
                        *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65;
#line 168 "add_class.m"
                      }
#line 167 "add_class.m"
                    else
#line 153 "add_class.m"
                      {
#line 153 "add_class.m"
                        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_107_107;
#line 153 "add_class.m"
                        MR_Word hlds__make_hlds__add_class__Methods_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_15, (MR_Integer) 0)));
#line 153 "add_class.m"
                        MR_Word hlds__make_hlds__add_class__PredProcIds0_49;
#line 153 "add_class.m"
                        MR_Word hlds__make_hlds__add_class__PredProcIds1_55;

#line 154 "add_class.m"
                        {
#line 154 "add_class.m"
                          hlds__make_hlds__add_class__module_add_class_interface_9_p_0(hlds__make_hlds__add_class__Name_13, hlds__make_hlds__add_class__Vars_14, hlds__make_hlds__add_class__Methods_48, hlds__make_hlds__add_class__Status_8, &hlds__make_hlds__add_class__PredProcIds0_49, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_85_85, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66);
                        }
#line 5853 "hlds.make_hlds.add_class.c"
                        hlds__make_hlds__add_class__TypeCtorInfo_107_107 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
#line 161 "add_class.m"
                        {
#line 161 "add_class.m"
                          mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], hlds__make_hlds__add_class__TypeCtorInfo_107_107, (MR_Word) &hlds__make_hlds__add_class_scalar_common_2[2], hlds__make_hlds__add_class__PredProcIds0_49, &hlds__make_hlds__add_class__PredProcIds1_55);
                        }
#line 166 "add_class.m"
                        {
#line 166 "add_class.m"
                          mercury__list__sort_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_107_107, hlds__make_hlds__add_class__PredProcIds1_55, &hlds__make_hlds__add_class__ClassMethods_56);
                        }
#line 153 "add_class.m"
                      }
#line 177 "add_class.m"
                    {
#line 177 "add_class.m"
                      hlds__make_hlds__add_class__Kinds_58 = mercury__map__init_0_f_0(hlds__make_hlds__add_class__TypeInfo_99_99, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
                    }
#line 178 "add_class.m"
                    {
#line 178 "add_class.m"
                      hlds__make_hlds__add_class__Defn_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 178 "add_class.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_59, 0) = ((MR_Box) (hlds__make_hlds__add_class__ImportStatus_38));
#line 178 "add_class.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_59, 1) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_11));
#line 178 "add_class.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_59, 2) = ((MR_Box) (hlds__make_hlds__add_class__HLDSFunDeps_26));
#line 178 "add_class.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_59, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "add_class.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_59, 4) = ((MR_Box) (hlds__make_hlds__add_class__Vars_14));
#line 178 "add_class.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_59, 5) = ((MR_Box) (hlds__make_hlds__add_class__Kinds_58));
#line 178 "add_class.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_59, 6) = ((MR_Box) (hlds__make_hlds__add_class__ClassInterface_41));
#line 178 "add_class.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_59, 7) = ((MR_Box) (hlds__make_hlds__add_class__ClassMethods_56));
#line 178 "add_class.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_59, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_16));
#line 178 "add_class.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_59, 9) = ((MR_Box) (hlds__make_hlds__add_class__Context_17));
#line 178 "add_class.m"
                    }
#line 181 "add_class.m"
                    {
#line 181 "add_class.m"
                      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, ((MR_Box) (hlds__make_hlds__add_class__ClassId_21)), ((MR_Box) (hlds__make_hlds__add_class__Defn_59)), hlds__make_hlds__add_class__Classes0_19, &hlds__make_hlds__add_class__Classes_60);
                    }
#line 182 "add_class.m"
                    {
#line 182 "add_class.m"
                      hlds__hlds_module__module_info_set_class_table_3_p_0(hlds__make_hlds__add_class__Classes_60, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_85_85, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64);
#line 182 "add_class.m"
                      return;
                    }
#line 5910 "hlds.make_hlds.add_class.c"
                  }
#line 5912 "hlds.make_hlds.add_class.c"
              }
#line 5914 "hlds.make_hlds.add_class.c"
          }
#line 5916 "hlds.make_hlds.add_class.c"
      }
#line 5918 "hlds.make_hlds.add_class.c"
    else
#line 5920 "hlds.make_hlds.add_class.c"
      {
#line 5922 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__TypeCtorInfo_109_146;
#line 5924 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Instances0_61;
#line 5926 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Instances_62;
#line 5928 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__ClassMethods_135;
#line 5930 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Kinds_137;
#line 5932 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Defn_138;
#line 5934 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__Classes_139;
#line 5936 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_85_141;
#line 5938 "hlds.make_hlds.add_class.c"
        MR_Word hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_90_142;

#line 167 "add_class.m"
        if ((hlds__make_hlds__add_class__Interface_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 168 "add_class.m"
          {
#line 169 "add_class.m"
            hlds__make_hlds__add_class__ClassMethods_135 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 169 "add_class.m"
            hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_85_141 = hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63;
#line 169 "add_class.m"
            *hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66 = hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65;
#line 168 "add_class.m"
          }
#line 167 "add_class.m"
        else
#line 153 "add_class.m"
          {
#line 153 "add_class.m"
            MR_Word hlds__make_hlds__add_class__TypeCtorInfo_107_119;
#line 153 "add_class.m"
            MR_Word hlds__make_hlds__add_class__Methods_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_class__Interface_15, (MR_Integer) 0)));
#line 153 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredProcIds0_115;
#line 153 "add_class.m"
            MR_Word hlds__make_hlds__add_class__PredProcIds1_117;

#line 154 "add_class.m"
            {
#line 154 "add_class.m"
              hlds__make_hlds__add_class__module_add_class_interface_9_p_0(hlds__make_hlds__add_class__Name_13, hlds__make_hlds__add_class__Vars_14, hlds__make_hlds__add_class__Methods_114, hlds__make_hlds__add_class__Status_8, &hlds__make_hlds__add_class__PredProcIds0_115, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_0_63, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_85_141, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_0_65, hlds__make_hlds__add_class__STATE_VARIABLE_Specs_66);
            }
#line 5971 "hlds.make_hlds.add_class.c"
            hlds__make_hlds__add_class__TypeCtorInfo_107_119 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
#line 161 "add_class.m"
            {
#line 161 "add_class.m"
              mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__add_class_scalar_common_1[1], hlds__make_hlds__add_class__TypeCtorInfo_107_119, (MR_Word) &hlds__make_hlds__add_class_scalar_common_2[3], hlds__make_hlds__add_class__PredProcIds0_115, &hlds__make_hlds__add_class__PredProcIds1_117);
            }
#line 166 "add_class.m"
            {
#line 166 "add_class.m"
              mercury__list__sort_2_p_0(hlds__make_hlds__add_class__TypeCtorInfo_107_119, hlds__make_hlds__add_class__PredProcIds1_117, &hlds__make_hlds__add_class__ClassMethods_135);
            }
#line 153 "add_class.m"
          }
#line 177 "add_class.m"
        {
#line 177 "add_class.m"
          hlds__make_hlds__add_class__Kinds_137 = mercury__map__init_0_f_0(hlds__make_hlds__add_class__TypeInfo_99_99, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 178 "add_class.m"
        {
#line 178 "add_class.m"
          hlds__make_hlds__add_class__Defn_138 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 178 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_138, 0) = ((MR_Box) (hlds__make_hlds__add_class__ImportStatus1_24));
#line 178 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_138, 1) = ((MR_Box) (hlds__make_hlds__add_class__Constraints_11));
#line 178 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_138, 2) = ((MR_Box) (hlds__make_hlds__add_class__HLDSFunDeps_26));
#line 178 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_138, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_138, 4) = ((MR_Box) (hlds__make_hlds__add_class__Vars_14));
#line 178 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_138, 5) = ((MR_Box) (hlds__make_hlds__add_class__Kinds_137));
#line 178 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_138, 6) = ((MR_Box) (hlds__make_hlds__add_class__Interface_15));
#line 178 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_138, 7) = ((MR_Box) (hlds__make_hlds__add_class__ClassMethods_135));
#line 178 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_138, 8) = ((MR_Box) (hlds__make_hlds__add_class__VarSet_16));
#line 178 "add_class.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_class__Defn_138, 9) = ((MR_Box) (hlds__make_hlds__add_class__Context_17));
#line 178 "add_class.m"
        }
#line 6016 "hlds.make_hlds.add_class.c"
        hlds__make_hlds__add_class__TypeCtorInfo_109_146 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 181 "add_class.m"
        {
#line 181 "add_class.m"
          mercury__map__set_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_109_146, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_class_defn_0, ((MR_Box) (hlds__make_hlds__add_class__ClassId_21)), ((MR_Box) (hlds__make_hlds__add_class__Defn_138)), hlds__make_hlds__add_class__Classes0_19, &hlds__make_hlds__add_class__Classes_139);
        }
#line 182 "add_class.m"
        {
#line 182 "add_class.m"
          hlds__hlds_module__module_info_set_class_table_3_p_0(hlds__make_hlds__add_class__Classes_139, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_85_141, &hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_90_142);
        }
#line 188 "add_class.m"
        {
#line 188 "add_class.m"
          hlds__hlds_module__module_info_get_instance_table_2_p_0(hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_90_142, &hlds__make_hlds__add_class__Instances0_61);
        }
#line 189 "add_class.m"
        {
#line 189 "add_class.m"
          mercury__map__det_insert_4_p_0(hlds__make_hlds__add_class__TypeCtorInfo_109_146, (MR_Word) &hlds__make_hlds__add_class_scalar_common_1[2], ((MR_Box) (hlds__make_hlds__add_class__ClassId_21)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), hlds__make_hlds__add_class__Instances0_61, &hlds__make_hlds__add_class__Instances_62);
        }
#line 190 "add_class.m"
        {
#line 190 "add_class.m"
          hlds__hlds_module__module_info_set_instance_table_3_p_0(hlds__make_hlds__add_class__Instances_62, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_90_142, hlds__make_hlds__add_class__STATE_VARIABLE_ModuleInfo_64);
#line 190 "add_class.m"
          return;
        }
#line 6045 "hlds.make_hlds.add_class.c"
      }
#line 78 "add_class.m"
  }
#line 25 "add_class.m"
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
