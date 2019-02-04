/*
** Automatically generated from `make_hlds_warn.m'
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


/* :- module hlds.make_hlds.make_hlds_warn. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__make_hlds_warn__init
ENDINIT
*/

#include "hlds.make_hlds.make_hlds_warn.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
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
#include "hlds.goal_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s {
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6;
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7;
  MR_bool hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14;
  MR_String hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9;
  jmp_buf hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10;
  MR_String hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Var_15;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_value_ordered_single_or_multi_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0[2];

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0[7];

static const MR_ConstString hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0[7];

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0[1];

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0[1];

static MR_String MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__476__1_2_f_0(
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_82);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_1,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_4,
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_5,
  MR_Word hlds__make_hlds__make_hlds_warn__Var_6);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2(
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_5,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_7,
  MR_Word hlds__make_hlds__make_hlds_warn__Var_8);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__NameList1_4,
  MR_Word hlds__make_hlds__make_hlds_warn__MaybeArg_5,
  MR_String * hlds__make_hlds__make_hlds_warn__Name_6);

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_5,
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_6,
  MR_Word hlds__make_hlds__make_hlds_warn__Warning_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_6,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
  MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList_6,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_11);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
  MR_Word hlds__make_hlds__make_hlds_warn__Goals_7,
  MR_Word hlds__make_hlds__make_hlds_warn__CallUsed_8,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
  MR_Word hlds__make_hlds__make_hlds_warn__Context_7,
  MR_String hlds__make_hlds__make_hlds_warn__Message_8,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__X_7,
  MR_Word hlds__make_hlds__make_hlds_warn__RHS_8,
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_9,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_3);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_5,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__GoalVars_7,
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_8,
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_9,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__Spec_4,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_9);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__SingleMulti_7,
  MR_Word hlds__make_hlds__make_hlds_warn__Context_8,
  MR_Word hlds__make_hlds__make_hlds_warn__CallId_9,
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
  MR_Word hlds__make_hlds__make_hlds_warn__Vars_11,
  MR_Word * hlds__make_hlds__make_hlds_warn__Spec_12);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__C_Code_3,
  MR_Word * hlds__make_hlds__make_hlds_warn__List_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3);

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(
  MR_Word hlds__make_hlds__make_hlds_warn__UnmentionedVars_3);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001(
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001(
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001(
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001(
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_1[53][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_2[3][4];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_3[2][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_4[4][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_5[2][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_6[3][3];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_1[53][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "code."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[6])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "has overlapping scopes."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[6])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "each have overlapping scopes."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[6])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "in this scope."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[6])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it cannot fail."))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "but it can fail."))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "statement."))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[6])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "return"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may contain a"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: variable"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning: variables"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "do"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "code for"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "may set"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "SUCCESS_INDICATOR"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[20])))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "does not appear to set"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[23])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "not occur in the"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occurs"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "occur"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_2[3][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 51)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_4[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_6[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0
  }
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0 = {
  (MR_String) "sm_single",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1 = {
  (MR_String) "sm_multi",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_value_ordered_single_or_multi_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0
};

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_single_or_multi_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "single_or_multi",
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0 },
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_value_ordered_single_or_multi_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0[7] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_simple_call_id_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_ConstString hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0[7] = {
  (MR_String) "wi_module_info",
  (MR_String) "wi_pred_call_id",
  (MR_String) "wi_varset",
  (MR_String) "wi_specs",
  (MR_String) "wi_singleton_headvars",
  (MR_String) "wi_multi_headvars",
  (MR_String) "wi_head_context"
};

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0 = {
  (MR_String) "warn_info",
  (MR_Integer) 7,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0[1] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0[1] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0
};

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "warn_info",
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0 },
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0
};

static MR_String MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__476__1_2_f_0(
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_82)
{
  {
    MR_String hlds__make_hlds__make_hlds_warn__HeadVar__3_83;

    {
      hlds__make_hlds__make_hlds_warn__HeadVar__3_83 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__VarSet_10, hlds__make_hlds__make_hlds_warn__HeadVar__2_82);
    }
    return hlds__make_hlds__make_hlds_warn__HeadVar__3_83;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Integer hlds__make_hlds__make_hlds_warn__CastX_24 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__2_2;
    MR_Integer hlds__make_hlds__make_hlds_warn__CastY_25 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__3_3;

    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__CastX_24 == hlds__make_hlds__make_hlds_warn__CastY_25);
    if (hlds__make_hlds__make_hlds_warn__succeeded)
      *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__3_3, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__make_hlds_warn__Var_18;

        {
          hlds__hlds_module____Compare____module_info_0_0(&hlds__make_hlds__make_hlds_warn__Var_18, hlds__make_hlds__make_hlds_warn__ArgX1_4, hlds__make_hlds__make_hlds_warn__ArgY1_5);
        }
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_18 == (MR_Integer) 0);
        hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
        if (hlds__make_hlds__make_hlds_warn__succeeded)
          *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__Var_18;
        else
          {
            MR_Word hlds__make_hlds__make_hlds_warn__Var_19;

            {
              parse_tree__prog_data____Compare____simple_call_id_0_0(&hlds__make_hlds__make_hlds_warn__Var_19, hlds__make_hlds__make_hlds_warn__ArgX2_6, hlds__make_hlds__make_hlds_warn__ArgY2_7);
            }
            hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_19 == (MR_Integer) 0);
            hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
            if (hlds__make_hlds__make_hlds_warn__succeeded)
              *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__Var_19;
            else
              {
                MR_Word hlds__make_hlds__make_hlds_warn__Var_20;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[3], &hlds__make_hlds__make_hlds_warn__Var_20, ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgX3_8)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgY3_9)));
                }
                hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_20 == (MR_Integer) 0);
                hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
                if (hlds__make_hlds__make_hlds_warn__succeeded)
                  *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__Var_20;
                else
                  {
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_21;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[4], &hlds__make_hlds__make_hlds_warn__Var_21, ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgX4_10)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgY4_11)));
                    }
                    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_21 == (MR_Integer) 0);
                    hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
                      *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__Var_21;
                    else
                      {
                        MR_Word hlds__make_hlds__make_hlds_warn__Var_22;

                        {
                          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[5], &hlds__make_hlds__make_hlds_warn__Var_22, ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgX5_12)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgY5_13)));
                        }
                        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_22 == (MR_Integer) 0);
                        hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
                        if (hlds__make_hlds__make_hlds_warn__succeeded)
                          *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__Var_22;
                        else
                          {
                            MR_Word hlds__make_hlds__make_hlds_warn__Var_23;

                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[5], &hlds__make_hlds__make_hlds_warn__Var_23, ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgX6_14)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgY6_15)));
                            }
                            hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_23 == (MR_Integer) 0);
                            hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
                            if (hlds__make_hlds__make_hlds_warn__succeeded)
                              *hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__Var_23;
                            else
                              {
                                mercury__term____Compare____context_0_0(hlds__make_hlds__make_hlds_warn__HeadVar__1_1, hlds__make_hlds__make_hlds_warn__ArgX7_16, hlds__make_hlds__make_hlds_warn__ArgY7_17);
                              }
                          }
                      }
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Integer hlds__make_hlds__make_hlds_warn__CastX_17 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__1_1;
    MR_Integer hlds__make_hlds__make_hlds_warn__CastY_18 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__2_2;

    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__CastX_17 == hlds__make_hlds__make_hlds_warn__CastY_18);
    if (hlds__make_hlds__make_hlds_warn__succeeded)
      hlds__make_hlds__make_hlds_warn__succeeded = MR_TRUE;
    else
      {
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_21_21;
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_22_22;
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_23_23;
        MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_24_24;
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__make_hlds_warn__ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadVar__2_2, (MR_Integer) 6)));

        {
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_module____Unify____module_info_0_0(hlds__make_hlds__make_hlds_warn__ArgX1_3, hlds__make_hlds__make_hlds_warn__ArgY1_4);
        }
        if (hlds__make_hlds__make_hlds_warn__succeeded)
          {
            {
              hlds__make_hlds__make_hlds_warn__succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(hlds__make_hlds__make_hlds_warn__ArgX2_5, hlds__make_hlds__make_hlds_warn__ArgY2_6);
            }
            if (hlds__make_hlds__make_hlds_warn__succeeded)
              {
                hlds__make_hlds__make_hlds_warn__TypeInfo_21_21 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[3];
                {
                  hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_21_21, ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgX3_7)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgY3_8)));
                }
                if (hlds__make_hlds__make_hlds_warn__succeeded)
                  {
                    hlds__make_hlds__make_hlds_warn__TypeInfo_22_22 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[4];
                    {
                      hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_22_22, ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgX4_9)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgY4_10)));
                    }
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
                      {
                        hlds__make_hlds__make_hlds_warn__TypeInfo_23_23 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[5];
                        {
                          hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_23_23, ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgX5_11)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgY5_12)));
                        }
                        if (hlds__make_hlds__make_hlds_warn__succeeded)
                          {
                            hlds__make_hlds__make_hlds_warn__TypeInfo_24_24 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[5];
                            {
                              hlds__make_hlds__make_hlds_warn__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_24_24, ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgX6_13)), ((MR_Box) (hlds__make_hlds__make_hlds_warn__ArgY6_14)));
                            }
                            if (hlds__make_hlds__make_hlds_warn__succeeded)
                              {
                                hlds__make_hlds__make_hlds_warn__succeeded = mercury__term____Unify____context_0_0(hlds__make_hlds__make_hlds_warn__ArgX7_15, hlds__make_hlds__make_hlds_warn__ArgY7_16);
                              }
                          }
                      }
                  }
              }
          }
      }
    return hlds__make_hlds__make_hlds_warn__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
{
  {
    MR_Integer hlds__make_hlds__make_hlds_warn__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__2_2;
    MR_Integer hlds__make_hlds__make_hlds_warn__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__make_hlds_warn__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__make_hlds_warn__HeadVar__1_1, hlds__make_hlds__make_hlds_warn__Cast_HeadVar1_4, hlds__make_hlds__make_hlds_warn__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_1,
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__2_2)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__HeadVar__2_1 == hlds__make_hlds__make_hlds_warn__HeadVar__2_2);

    return hlds__make_hlds__make_hlds_warn__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_3)) == (MR_mktag((MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_warn__GoalA_6;
    MR_Word hlds__make_hlds__make_hlds_warn__GoalB_7;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_5;

    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        hlds__make_hlds__make_hlds_warn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 0)));
        hlds__make_hlds__make_hlds_warn__GoalA_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 1)));
        hlds__make_hlds__make_hlds_warn__GoalB_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 2)));
        {
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListA_8;
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListB_9;

          {
            hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalA_6, &hlds__make_hlds__make_hlds_warn__GoalListA_8);
          }
          {
            hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalB_7, &hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
          {
            *hlds__make_hlds__make_hlds_warn__GoalList_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, hlds__make_hlds__make_hlds_warn__GoalListA_8, hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
        }
      }
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__make_hlds_warn__GoalList_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Goal_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_4,
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_5,
  MR_Word hlds__make_hlds__make_hlds_warn__Var_6)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_String hlds__make_hlds__make_hlds_warn__Name_7;
    MR_String hlds__make_hlds__make_hlds_warn__Var_8;

    {
      hlds__make_hlds__make_hlds_warn__succeeded = parse_tree__set_of_var__member_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_9_9, hlds__make_hlds__make_hlds_warn__NonLocals_4, hlds__make_hlds__make_hlds_warn__Var_6);
    }
    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        {
          hlds__make_hlds__make_hlds_warn__succeeded = mercury__varset__search_name_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_9_9, hlds__make_hlds__make_hlds_warn__VarSet_5, hlds__make_hlds__make_hlds_warn__Var_6, &hlds__make_hlds__make_hlds_warn__Name_7);
        }
        if (hlds__make_hlds__make_hlds_warn__succeeded)
          {
            hlds__make_hlds__make_hlds_warn__Var_8 = (MR_String) "_";
            {
              hlds__make_hlds__make_hlds_warn__succeeded = mercury__string__prefix_2_p_0(hlds__make_hlds__make_hlds_warn__Name_7, hlds__make_hlds__make_hlds_warn__Var_8);
            }
          }
      }
    return hlds__make_hlds__make_hlds_warn__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * hlds__make_hlds__make_hlds_warn__env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) hlds__make_hlds__make_hlds_warn__env_ptr_arg;

    MR_builtin_longjmp((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2(
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * hlds__make_hlds__make_hlds_warn__env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) hlds__make_hlds__make_hlds_warn__env_ptr_arg;

    {
      (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10, &(hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Var_15);
    }
    if ((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
      {
        (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = (strcmp((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Var_15) == 0);
        if ((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
          {
            hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(hlds__make_hlds__make_hlds_warn__env_ptr);
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(
  void * hlds__make_hlds__make_hlds_warn__env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * hlds__make_hlds__make_hlds_warn__env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) hlds__make_hlds__make_hlds_warn__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0) == 0)
      {
        {
          parse_tree__set_of_var__member_2_p_1((hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6, &(hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10, hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2, hlds__make_hlds__make_hlds_warn__env_ptr);
        }
        (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__make_hlds__make_hlds_warn__env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_5,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_7,
  MR_Word hlds__make_hlds__make_hlds_warn__Var_8)
{
  {
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s hlds__make_hlds__make_hlds_warn__env;

    (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6 = hlds__make_hlds__make_hlds_warn__QuantVars_6;
    (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7 = hlds__make_hlds__make_hlds_warn__VarSet_7;
    {
      MR_String hlds__make_hlds__make_hlds_warn__Var_11;
      MR_String hlds__make_hlds__make_hlds_warn__Var_12;

      {
        (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__NonLocals_5, hlds__make_hlds__make_hlds_warn__Var_8);
      }
      (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
      if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
        {
          (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
          {
            (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7, hlds__make_hlds__make_hlds_warn__Var_8, &(hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9);
          }
          if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
            {
              hlds__make_hlds__make_hlds_warn__Var_11 = (MR_String) "_";
              {
                (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, hlds__make_hlds__make_hlds_warn__Var_11);
              }
              (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
              if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
                {
                  hlds__make_hlds__make_hlds_warn__Var_12 = (MR_String) "DCG_";
                  {
                    (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, hlds__make_hlds__make_hlds_warn__Var_12);
                  }
                  (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
                  if ((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
                    {
                      {
                        hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(&hlds__make_hlds__make_hlds_warn__env);
                      }
                      (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
                    }
                }
            }
        }
      return (hlds__make_hlds__make_hlds_warn__env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__NameList1_4,
  MR_Word hlds__make_hlds__make_hlds_warn__MaybeArg_5,
  MR_String * hlds__make_hlds__make_hlds_warn__Name_6)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__MaybeArg_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_warn__Var_8;
    MR_Word hlds__make_hlds__make_hlds_warn___Mode_7;
    MR_String hlds__make_hlds__make_hlds_warn__Var_9;
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_10_10;

    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        hlds__make_hlds__make_hlds_warn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__MaybeArg_5, (MR_Integer) 0)));
        *hlds__make_hlds__make_hlds_warn__Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_8, (MR_Integer) 0)));
        hlds__make_hlds__make_hlds_warn___Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_8, (MR_Integer) 1)));
        hlds__make_hlds__make_hlds_warn__Var_9 = (MR_String) "_";
        {
          hlds__make_hlds__make_hlds_warn__succeeded = mercury__string__prefix_2_p_0(*hlds__make_hlds__make_hlds_warn__Name_6, hlds__make_hlds__make_hlds_warn__Var_9);
        }
        hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
        if (hlds__make_hlds__make_hlds_warn__succeeded)
          {
            hlds__make_hlds__make_hlds_warn__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_10_10, ((MR_Box) (*hlds__make_hlds__make_hlds_warn__Name_6)), hlds__make_hlds__make_hlds_warn__NameList1_4);
            }
            hlds__make_hlds__make_hlds_warn__succeeded = !(hlds__make_hlds__make_hlds_warn__succeeded);
          }
      }
    return hlds__make_hlds__make_hlds_warn__succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_5,
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_6,
  MR_Word hlds__make_hlds__make_hlds_warn__Warning_7)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Word hlds__make_hlds__make_hlds_warn__Spec_8;
    MR_Word hlds__make_hlds__make_hlds_warn__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Warning_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_warn__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Warning_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces1_11;
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces2_13;
    MR_Word hlds__make_hlds__make_hlds_warn__Msg_14;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_18;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_19;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_49;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_50;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_53;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_54;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_55;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_63;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_12;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_26;

    {
      hlds__make_hlds__make_hlds_warn__Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__PredCallId_5));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_18, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_19));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])));
    }
    {
      hlds__make_hlds__make_hlds_warn__Pieces1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces1_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[47])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces1_11, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_18));
    }
    hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Vars_9)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        hlds__make_hlds__make_hlds_warn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Vars_9, (MR_Integer) 0)));
        hlds__make_hlds__make_hlds_warn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Vars_9, (MR_Integer) 1)));
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        MR_Word hlds__make_hlds__make_hlds_warn__Var_29;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_30;
        MR_String hlds__make_hlds__make_hlds_warn__Var_31;

        {
          hlds__make_hlds__make_hlds_warn__Var_31 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__VarSet_6, hlds__make_hlds__make_hlds_warn__Var_12);
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_31));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_29, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_30));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[12])));
        }
        {
          hlds__make_hlds__make_hlds_warn__Pieces2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[30])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_29));
        }
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_warn__Var_40;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_41;
        MR_String hlds__make_hlds__make_hlds_warn__Var_42;

        {
          hlds__make_hlds__make_hlds_warn__Var_42 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__VarSet_6, hlds__make_hlds__make_hlds_warn__Vars_9);
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_41, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_42));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_41));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[14])));
        }
        {
          hlds__make_hlds__make_hlds_warn__Pieces2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[33])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces2_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_40));
        }
      }
    {
      hlds__make_hlds__make_hlds_warn__Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_warn__Pieces1_11, hlds__make_hlds__make_hlds_warn__Pieces2_13);
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_54, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_55));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_53, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_54));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_50, 0) = ((MR_Box) (((MR_Integer) 7 | (((MR_Integer) 1 << (MR_Integer) 10)))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_50, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_53));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_49, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_50));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_warn__Msg_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_14, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_14, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_49));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_14));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_warn__Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[1])));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_8, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_63));
    }
    return hlds__make_hlds__make_hlds_warn__Spec_8;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__UnivVars_7,
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_8,
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_9,
  MR_Word hlds__make_hlds__make_hlds_warn__Context_10,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_15)
{
  {
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17;

    if ((hlds__make_hlds__make_hlds_warn__UnivVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_8, hlds__make_hlds__make_hlds_warn__Context_10, (MR_String) "declaration has no universally quantified variables", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17);
        }
      }
    else
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_14;
    {
      hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_8, hlds__make_hlds__make_hlds_warn__Goal_9, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_17_17, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_15);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
{
  {
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_GoalList_4;

    {
      hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), &hlds__make_hlds__make_hlds_warn__conv0_GoalList_4);
    }
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_GoalList_4));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_6,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
        MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_10;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_20;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_21;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_8;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_9;

        if (hlds__make_hlds__make_hlds_warn__succeeded)
          {
            hlds__make_hlds__make_hlds_warn__Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)))) & (MR_Integer) 1);
            hlds__make_hlds__make_hlds_warn__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            hlds__make_hlds__make_hlds_warn__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 2)));
            hlds__make_hlds__make_hlds_warn__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 3)));
            hlds__make_hlds__make_hlds_warn__SubGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 4)));
            hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_20 == (MR_Integer) 0);
            if (hlds__make_hlds__make_hlds_warn__succeeded)
              hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_21 == (MR_Integer) 0);
          }
        if (hlds__make_hlds__make_hlds_warn__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goal_6 = hlds__make_hlds__make_hlds_warn__SubGoal_10;

              hlds__make_hlds__make_hlds_warn__Goal_6 = hlds__make_hlds__make_hlds_warn__next_value_of_Goal_6;
            }
            continue;
          }
        else
          {
            MR_Word hlds__make_hlds__make_hlds_warn__Var_11;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_12;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_13;

            hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (hlds__make_hlds__make_hlds_warn__succeeded)
              {
                hlds__make_hlds__make_hlds_warn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)));
                hlds__make_hlds__make_hlds_warn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 2)));
                hlds__make_hlds__make_hlds_warn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 3)));
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__DisjList_14;
                  MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList_15;

                  {
                    hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(hlds__make_hlds__make_hlds_warn__Goal_6, &hlds__make_hlds__make_hlds_warn__DisjList_14);
                  }
                  {
                    mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[2], (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_6[2], hlds__make_hlds__make_hlds_warn__DisjList_14, &hlds__make_hlds__make_hlds_warn__DisjConjList_15);
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__DisjConjList_15, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19);
                  }
                }
              }
            else
              {
                MR_Word hlds__make_hlds__make_hlds_warn__Context_16;
                MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_35;
                MR_Word hlds__make_hlds__make_hlds_warn__Var_25;
                MR_Word hlds__make_hlds__make_hlds_warn__Var_26;
                MR_Word hlds__make_hlds__make_hlds_warn___UnivVars_17;

                hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__make_hlds__make_hlds_warn__succeeded)
                  {
                    hlds__make_hlds__make_hlds_warn__Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)))) & (MR_Integer) 1);
                    hlds__make_hlds__make_hlds_warn__Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    hlds__make_hlds__make_hlds_warn__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 2)));
                    hlds__make_hlds__make_hlds_warn___UnivVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 3)));
                    hlds__make_hlds__make_hlds_warn__SubGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_6, (MR_Integer) 4)));
                    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_25 == (MR_Integer) 1);
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
                      hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_26 == (MR_Integer) 0);
                  }
                if (hlds__make_hlds__make_hlds_warn__succeeded)
                  {
                    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28_28;

                    {
                      hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__Context_16, (MR_String) "universal quantification should come before the declaration name", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28_28);
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goal_6 = hlds__make_hlds__make_hlds_warn__SubGoal_35;
                      MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Specs_0_18 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28_28;

                      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18 = hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Specs_0_18;
                      hlds__make_hlds__make_hlds_warn__Goal_6 = hlds__make_hlds__make_hlds_warn__next_value_of_Goal_6;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_32;

                    {
                      hlds__make_hlds__make_hlds_warn__Var_32 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__Goal_6);
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__Var_32, (MR_String) "goal in declaration is not a disjunction", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_19);
                    }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_5,
  MR_Word hlds__make_hlds__make_hlds_warn__DisjConjList_6,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((hlds__make_hlds__make_hlds_warn__DisjConjList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_11 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10;
      else
        {
          MR_Word hlds__make_hlds__make_hlds_warn__ConjList_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__DisjConjList_6, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__make_hlds_warn__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__DisjConjList_6, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_13_13;

          {
            hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_5, hlds__make_hlds__make_hlds_warn__ConjList_8, (MR_Integer) 0, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_13_13);
          }
          /* direct tailcall eliminated */
          {
            MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_DisjConjList_6 = hlds__make_hlds__make_hlds_warn__Rest_9;
            MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_13_13;

            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Specs_0_10;
            hlds__make_hlds__make_hlds_warn__DisjConjList_6 = hlds__make_hlds__make_hlds_warn__next_value_of_DisjConjList_6;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
  MR_Word hlds__make_hlds__make_hlds_warn__Goals_7,
  MR_Word hlds__make_hlds__make_hlds_warn__CallUsed_8,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

        if ((hlds__make_hlds__make_hlds_warn__Goals_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_24 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23;
        else
          {
            MR_Word hlds__make_hlds__make_hlds_warn__HeadGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_7, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_warn__TailGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_7, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_12;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_13;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_14;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_15;

            hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__HeadGoal_10)) == (MR_mktag((MR_Integer) 0)));
            if (hlds__make_hlds__make_hlds_warn__succeeded)
              {
                hlds__make_hlds__make_hlds_warn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 0)));
                hlds__make_hlds__make_hlds_warn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)));
                hlds__make_hlds__make_hlds_warn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 2)));
                hlds__make_hlds__make_hlds_warn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 3)));
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goals_7 = hlds__make_hlds__make_hlds_warn__TailGoals_11;

                  hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__next_value_of_Goals_7;
                }
                continue;
              }
            else
              {
                MR_Word hlds__make_hlds__make_hlds_warn__HeadSubGoal_18;
                MR_Word hlds__make_hlds__make_hlds_warn__Var_26;
                MR_Word hlds__make_hlds__make_hlds_warn__Var_27;
                MR_Word hlds__make_hlds__make_hlds_warn__Var_16;
                MR_Word hlds__make_hlds__make_hlds_warn__Var_17;

                hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__HeadGoal_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (hlds__make_hlds__make_hlds_warn__succeeded)
                  {
                    hlds__make_hlds__make_hlds_warn__Var_26 = ((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)))) & (MR_Integer) 1);
                    hlds__make_hlds__make_hlds_warn__Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    hlds__make_hlds__make_hlds_warn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 2)));
                    hlds__make_hlds__make_hlds_warn__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 3)));
                    hlds__make_hlds__make_hlds_warn__HeadSubGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 4)));
                    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_26 == (MR_Integer) 0);
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
                      hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_27 == (MR_Integer) 0);
                  }
                if (hlds__make_hlds__make_hlds_warn__succeeded)
                  {
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_28;

                    {
                      hlds__make_hlds__make_hlds_warn__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_28, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__HeadSubGoal_18));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_28, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__TailGoals_11));
                    }
                    /* direct tailcall eliminated */
                    {
                      MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goals_7 = hlds__make_hlds__make_hlds_warn__Var_28;

                      hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__next_value_of_Goals_7;
                    }
                    continue;
                  }
                else
                  {
                    MR_Word hlds__make_hlds__make_hlds_warn__Context_19;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_20;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_21;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_22;

                    hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__HeadGoal_10)) == (MR_mktag((MR_Integer) 1)));
                    if (hlds__make_hlds__make_hlds_warn__succeeded)
                      {
                        hlds__make_hlds__make_hlds_warn__Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 0)));
                        hlds__make_hlds__make_hlds_warn__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 1)));
                        hlds__make_hlds__make_hlds_warn__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 2)));
                        hlds__make_hlds__make_hlds_warn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadGoal_10, (MR_Integer) 3)));
                        {
                          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31_31;

                          switch (hlds__make_hlds__make_hlds_warn__CallUsed_8) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31_31 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23;
                              break;
                            case (MR_Integer) 1:
                              {
                                {
                                  hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_6, hlds__make_hlds__make_hlds_warn__Context_19, (MR_String) "disjunct contains more than one call", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31_31);
                                }
                              }
                              break;
                          }
                          /* direct tailcall eliminated */
                          {
                            MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goals_7 = hlds__make_hlds__make_hlds_warn__TailGoals_11;
                            MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Specs_0_23 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31_31;

                            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23 = hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Specs_0_23;
                            hlds__make_hlds__make_hlds_warn__CallUsed_8 = (MR_Integer) 1;
                            hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__next_value_of_Goals_7;
                          }
                          continue;
                        }
                      }
                    else
                      {
                        MR_Word hlds__make_hlds__make_hlds_warn__Var_34;
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36;

                        {
                          hlds__make_hlds__make_hlds_warn__Var_34 = parse_tree__prog_item__goal_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__HeadGoal_10);
                        }
                        {
                          hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(hlds__make_hlds__make_hlds_warn__PromiseType_6, hlds__make_hlds__make_hlds_warn__Var_34, (MR_String) "disjunct is not a call or unification", hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36);
                        }
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goals_7 = hlds__make_hlds__make_hlds_warn__TailGoals_11;
                          MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Specs_0_23 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36;

                          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_23 = hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Specs_0_23;
                          hlds__make_hlds__make_hlds_warn__Goals_7 = hlds__make_hlds__make_hlds_warn__next_value_of_Goals_7;
                        }
                        continue;
                      }
                  }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PromiseType_6,
  MR_Word hlds__make_hlds__make_hlds_warn__Context_7,
  MR_String hlds__make_hlds__make_hlds_warn__Message_8,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_13,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_14)
{
  {
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_10;
    MR_Word hlds__make_hlds__make_hlds_warn__Msg_11;
    MR_Word hlds__make_hlds__make_hlds_warn__Spec_12;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_17;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_18;
    MR_String hlds__make_hlds__make_hlds_warn__Var_19;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_20;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_23;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_25;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_28;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_29;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_33;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_34;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_38;

    {
      hlds__make_hlds__make_hlds_warn__Var_19 = parse_tree__prog_out__promise_to_string_1_f_0(hlds__make_hlds__make_hlds_warn__PromiseType_6);
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_19));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_29, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Message_8));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_28, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_29));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[6])));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[52])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_25, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_28));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_25));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[51])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_23));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_17, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_18));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_20));
    }
    {
      hlds__make_hlds__make_hlds_warn__Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[50])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_17));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_34, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_10));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_33, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_34));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_warn__Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_11, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_11, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_33));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_11));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_warn__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_12, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_3,
  MR_Word * hlds__make_hlds__make_hlds_warn__GoalList_4)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Goal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_warn__GoalA_6;
    MR_Word hlds__make_hlds__make_hlds_warn__GoalB_7;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_5;

    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        hlds__make_hlds__make_hlds_warn__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 1)));
        hlds__make_hlds__make_hlds_warn__GoalA_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 2)));
        hlds__make_hlds__make_hlds_warn__GoalB_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Goal_3, (MR_Integer) 3)));
        {
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListA_8;
          MR_Word hlds__make_hlds__make_hlds_warn__GoalListB_9;

          {
            hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalA_6, &hlds__make_hlds__make_hlds_warn__GoalListA_8);
          }
          {
            hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(hlds__make_hlds__make_hlds_warn__GoalB_7, &hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
          {
            *hlds__make_hlds__make_hlds_warn__GoalList_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, hlds__make_hlds__make_hlds_warn__GoalListA_8, hlds__make_hlds__make_hlds_warn__GoalListB_9);
          }
        }
      }
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__make_hlds_warn__GoalList_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Goal_3));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_7,
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_8,
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_9,
  MR_Word hlds__make_hlds__make_hlds_warn__Body_10,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_30,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31)
{
  {
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word hlds__make_hlds__make_hlds_warn__Info0_12;
    MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_13;
    MR_Word hlds__make_hlds__make_hlds_warn__Info_14;
    MR_Word hlds__make_hlds__make_hlds_warn__NewSpecs_18;
    MR_Word hlds__make_hlds__make_hlds_warn__SingletonHeadVarsSet_19;
    MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVarsSet_20;
    MR_Word hlds__make_hlds__make_hlds_warn__HeadContext_21;
    MR_Word hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22;
    MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVars_23;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_33;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_34;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_35;
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36;
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38;
    MR_Word hlds__make_hlds__make_hlds_warn___ModuleInfo_15;
    MR_Word hlds__make_hlds__make_hlds_warn___PredCallId_16;
    MR_Word hlds__make_hlds__make_hlds_warn___VarSet_17;

    {
      hlds__make_hlds__make_hlds_warn__Var_33 = parse_tree__set_of_var__init_0_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41);
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_34 = parse_tree__set_of_var__init_0_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41);
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_35 = mercury__term__context_init_0_f_0();
    }
    {
      hlds__make_hlds__make_hlds_warn__Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__ModuleInfo_7));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__PredCallId_8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_33));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_34));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info0_12, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_35));
    }
    {
      hlds__make_hlds__make_hlds_warn__QuantVars_13 = parse_tree__set_of_var__init_0_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41);
    }
    {
      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Body_10, hlds__make_hlds__make_hlds_warn__QuantVars_13, hlds__make_hlds__make_hlds_warn__Info0_12, &hlds__make_hlds__make_hlds_warn__Info_14);
    }
    hlds__make_hlds__make_hlds_warn___ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 0)));
    hlds__make_hlds__make_hlds_warn___PredCallId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 1)));
    hlds__make_hlds__make_hlds_warn___VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 2)));
    hlds__make_hlds__make_hlds_warn__NewSpecs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 3)));
    hlds__make_hlds__make_hlds_warn__SingletonHeadVarsSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 4)));
    hlds__make_hlds__make_hlds_warn__MultiHeadVarsSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 5)));
    hlds__make_hlds__make_hlds_warn__HeadContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Info_14, (MR_Integer) 6)));
    {
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__make_hlds_warn__NewSpecs_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_30);
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41, hlds__make_hlds__make_hlds_warn__SingletonHeadVarsSet_19, &hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22);
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_41_41, hlds__make_hlds__make_hlds_warn__MultiHeadVarsSet_20, &hlds__make_hlds__make_hlds_warn__MultiHeadVars_23);
    }
    if ((hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36;
    else
      {
        MR_Word hlds__make_hlds__make_hlds_warn__SingleSpec_26;

        {
          hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 0, hlds__make_hlds__make_hlds_warn__HeadContext_21, hlds__make_hlds__make_hlds_warn__PredCallId_8, hlds__make_hlds__make_hlds_warn__VarSet_9, hlds__make_hlds__make_hlds_warn__SingletonHeadVars_22, &hlds__make_hlds__make_hlds_warn__SingleSpec_26);
        }
        {
          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SingleSpec_26));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_36_36));
        }
      }
    if ((hlds__make_hlds__make_hlds_warn__MultiHeadVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38;
    else
      {
        MR_Word hlds__make_hlds__make_hlds_warn__MultiSpec_29;

        {
          hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 1, hlds__make_hlds__make_hlds_warn__HeadContext_21, hlds__make_hlds__make_hlds_warn__PredCallId_8, hlds__make_hlds__make_hlds_warn__VarSet_9, hlds__make_hlds__make_hlds_warn__MultiHeadVars_23, &hlds__make_hlds__make_hlds_warn__MultiSpec_29);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_31 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__MultiSpec_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_38_38));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__X_7,
  MR_Word hlds__make_hlds__make_hlds_warn__RHS_8,
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_9,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30)
{
  switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__RHS_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word hlds__make_hlds__make_hlds_warn__Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_13;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_38;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_40;

        {
          hlds__make_hlds__make_hlds_warn__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Y_12));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__X_7));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_40));
        }
        {
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Var_38, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_13, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word hlds__make_hlds__make_hlds_warn__Ys_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__make_hlds_warn__Var_36;
        MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_42;
        MR_Word hlds__make_hlds__make_hlds_warn___ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_warn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 1)));

        {
          hlds__make_hlds__make_hlds_warn__NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_36, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__X_7));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_36, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Ys_16));
        }
        {
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Var_36, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_42, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word hlds__make_hlds__make_hlds_warn__LambdaVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 3)));
        MR_Word hlds__make_hlds__make_hlds_warn__LambdaGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 6)));
        MR_Word hlds__make_hlds__make_hlds_warn__LambdaGoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__LambdaGoal_25, (MR_Integer) 1)));
        MR_Word hlds__make_hlds__make_hlds_warn__LambdaNonLocals_28;
        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_32;
        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_33_33;
        MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_43;
        MR_Word hlds__make_hlds__make_hlds_warn___Purity_17 = ((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)))) & (MR_Integer) 3);
        MR_Word hlds__make_hlds__make_hlds_warn___Groundness_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__make_hlds_warn___PredOrFunc_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
        MR_Word hlds__make_hlds__make_hlds_warn___NonLocals_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 2)));
        MR_Word hlds__make_hlds__make_hlds_warn___Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 4)));
        MR_Word hlds__make_hlds__make_hlds_warn___Det_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__RHS_8, (MR_Integer) 5)));
        MR_Word hlds__make_hlds__make_hlds_warn__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__LambdaGoal_25, (MR_Integer) 0)));

        {
          hlds__make_hlds__make_hlds_warn__LambdaNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__LambdaGoalInfo_27);
        }
        {
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__LambdaVars_22, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__LambdaNonLocals_28, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_29, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31);
        }
        {
          hlds__make_hlds__make_hlds_warn__NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_32, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__X_7));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Var_32, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_43, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_33_33);
        }
        {
          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__LambdaGoal_25, hlds__make_hlds__make_hlds_warn__QuantVars_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_33_33, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30);
        }
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3;
      else
        {
          MR_Word hlds__make_hlds__make_hlds_warn__Case_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__make_hlds_warn__Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__make_hlds_warn__Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Case_9, (MR_Integer) 2)));
          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_18_18;
          MR_Word hlds__make_hlds__make_hlds_warn___MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Case_9, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__make_hlds_warn___OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Case_9, (MR_Integer) 1)));

          {
            hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Goal_15, hlds__make_hlds__make_hlds_warn__QuantVars_2, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_18_18);
          }
          /* direct tailcall eliminated */
          {
            MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__Cases_10;
            MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Info_0_3 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_18_18;

            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3 = hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Info_0_3;
            hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_2,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_4 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3;
      else
        {
          MR_Word hlds__make_hlds__make_hlds_warn__Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__make_hlds_warn__Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_15;

          {
            hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Goal_9, hlds__make_hlds__make_hlds_warn__QuantVars_2, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_15);
          }
          /* direct tailcall eliminated */
          {
            MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__Goals_10;
            MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Info_0_3 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_15;

            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_3 = hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Info_0_3;
            hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_warn__conv1_STATE_VARIABLE_Info_9;

    {
      hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2), &hlds__make_hlds__make_hlds_warn__conv1_STATE_VARIABLE_Info_9);
    }
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv1_STATE_VARIABLE_Info_9));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_HeadVar__2_2;

    {
      hlds__make_hlds__make_hlds_warn__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
    hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__2_2));
    return hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__Goal_5,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_6,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
        MR_Word hlds__make_hlds__make_hlds_warn__GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Goal_5, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Goal_5, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__GoalExpr_8)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_15 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__make_hlds_warn__GoalExpr_8), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5 = hlds__make_hlds__make_hlds_warn__SubGoal_15;

                hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__make_hlds_warn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 0)));
              MR_Word hlds__make_hlds__make_hlds_warn__RHS_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__make_hlds_warn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__make_hlds_warn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
              MR_Word hlds__make_hlds__make_hlds_warn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));

              {
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(hlds__make_hlds__make_hlds_warn__Var_65, hlds__make_hlds__make_hlds_warn__RHS_66, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word hlds__make_hlds__make_hlds_warn__Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_141;
              MR_Word hlds__make_hlds__make_hlds_warn__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 0)));
              MR_Integer hlds__make_hlds__make_hlds_warn__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__make_hlds_warn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
              MR_Word hlds__make_hlds__make_hlds_warn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
              MR_Word hlds__make_hlds__make_hlds_warn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 5)));

              {
                hlds__make_hlds__make_hlds_warn__NonLocals_141 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
              }
              {
                hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Args_55, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_141, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__GenericCall_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__make_hlds_warn__Args0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__make_hlds_warn__Args1_64;
                  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_142;
                  MR_Word hlds__make_hlds__make_hlds_warn__Args_143;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 5)));

                  {
                    hlds__goal_util__generic_call_vars_2_p_0(hlds__make_hlds__make_hlds_warn__GenericCall_59, &hlds__make_hlds__make_hlds_warn__Args1_64);
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Args_143 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[1], hlds__make_hlds__make_hlds_warn__Args0_60, hlds__make_hlds__make_hlds_warn__Args1_64);
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__NonLocals_142 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Args_143, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_142, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96);
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__Attrs_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__make_hlds_warn__PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
                  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__make_hlds_warn__PragmaImpl_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 7)));
                  MR_Word hlds__make_hlds__make_hlds_warn__Context_76;
                  MR_Word hlds__make_hlds__make_hlds_warn__Lang_77;
                  MR_Word hlds__make_hlds__make_hlds_warn__NamesModes_78;
                  MR_Word hlds__make_hlds__make_hlds_warn__PragmaSpecs_79;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_108;
                  MR_Word hlds__make_hlds__make_hlds_warn__Args_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_148;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 5)));
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 6)));
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_149;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_150;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_151;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_152;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_153;
                  MR_Box hlds__make_hlds__make_hlds_warn__conv2_STATE_VARIABLE_Info_96;

                  {
                    hlds__make_hlds__make_hlds_warn__Context_76 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Lang_77 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(hlds__make_hlds__make_hlds_warn__Attrs_70);
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__NamesModes_78 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[0], (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_6[0], hlds__make_hlds__make_hlds_warn__Args_144);
                  }
                  hlds__make_hlds__make_hlds_warn__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
                  hlds__make_hlds__make_hlds_warn__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
                  hlds__make_hlds__make_hlds_warn__Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
                  hlds__make_hlds__make_hlds_warn__Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
                  hlds__make_hlds__make_hlds_warn__Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
                  hlds__make_hlds__make_hlds_warn__Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
                  hlds__make_hlds__make_hlds_warn__Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
                  {
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(hlds__make_hlds__make_hlds_warn__Var_108, hlds__make_hlds__make_hlds_warn__PragmaImpl_75, hlds__make_hlds__make_hlds_warn__Lang_77, hlds__make_hlds__make_hlds_warn__NamesModes_78, hlds__make_hlds__make_hlds_warn__Context_76, hlds__make_hlds__make_hlds_warn__Var_148, hlds__make_hlds__make_hlds_warn__PredId_71, hlds__make_hlds__make_hlds_warn__ProcId_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__make_hlds_warn__PragmaSpecs_79);
                  }
                  {
                    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_6[1], hlds__make_hlds__make_hlds_warn__PragmaSpecs_79, ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95)), &hlds__make_hlds__make_hlds_warn__conv2_STATE_VARIABLE_Info_96);
                  }
                  *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96 = ((MR_Word) hlds__make_hlds__make_hlds_warn__conv2_STATE_VARIABLE_Info_96);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__make_hlds_warn___ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

                  {
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__Goals_11, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__Goals_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

                  {
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__Goals_135, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__make_hlds_warn___Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__make_hlds_warn___CanFail_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));

                  {
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(hlds__make_hlds__make_hlds_warn__Cases_14, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__Reason_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));
                  MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));

                  switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__Reason_16)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__make_hlds__make_hlds_warn__Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 0)));
                        MR_Word hlds__make_hlds__make_hlds_warn__SubQuantVars_23;
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_129_129;

                        if ((hlds__make_hlds__make_hlds_warn__Vars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            hlds__make_hlds__make_hlds_warn__SubQuantVars_23 = hlds__make_hlds__make_hlds_warn__QuantVars_6;
                            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_129_129 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95;
                          }
                        else
                          {
                            MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_160_160;
                            MR_Word hlds__make_hlds__make_hlds_warn__SubGoalVars_21;
                            MR_Word hlds__make_hlds__make_hlds_warn__EmptySet_22;

                            {
                              hlds__make_hlds__make_hlds_warn__SubGoalVars_21 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__SubGoal_136);
                            }
                            hlds__make_hlds__make_hlds_warn__TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                            {
                              parse_tree__set_of_var__init_1_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_160_160, &hlds__make_hlds__make_hlds_warn__EmptySet_22);
                            }
                            {
                              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Vars_17, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__EmptySet_22, hlds__make_hlds__make_hlds_warn__SubGoalVars_21, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_129_129);
                            }
                            {
                              parse_tree__set_of_var__insert_list_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_160_160, hlds__make_hlds__make_hlds_warn__Vars_17, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__SubQuantVars_23);
                            }
                          }
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5 = hlds__make_hlds__make_hlds_warn__SubGoal_136;
                          MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_QuantVars_6 = hlds__make_hlds__make_hlds_warn__SubQuantVars_23;
                          MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Info_0_95 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_129_129;

                          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95 = hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Info_0_95;
                          hlds__make_hlds__make_hlds_warn__QuantVars_6 = hlds__make_hlds__make_hlds_warn__next_value_of_QuantVars_6;
                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__make_hlds__make_hlds_warn__HeadWarning_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 0)));
                        MR_Word hlds__make_hlds__make_hlds_warn__TailWarnings_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 1)));

                        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__HeadWarning_24 == (MR_Integer) 0);
                        if (!(hlds__make_hlds__make_hlds_warn__succeeded))
                          {
                            {
                              hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, ((MR_Box) ((MR_Integer) 0)), hlds__make_hlds__make_hlds_warn__TailWarnings_25);
                            }
                          }
                        if (hlds__make_hlds__make_hlds_warn__succeeded)
                          *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95;
                        else
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5 = hlds__make_hlds__make_hlds_warn__SubGoal_136;

                              hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5;
                            }
                            continue;
                          }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__make_hlds__make_hlds_warn__Vars_187 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 0)));
                        MR_Word hlds__make_hlds__make_hlds_warn__SubQuantVars_192;
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_129_193;
                        MR_Word hlds__make_hlds__make_hlds_warn__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 1)));

                        if ((hlds__make_hlds__make_hlds_warn__Vars_187 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            hlds__make_hlds__make_hlds_warn__SubQuantVars_192 = hlds__make_hlds__make_hlds_warn__QuantVars_6;
                            hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_129_193 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95;
                          }
                        else
                          {
                            MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_160_181;
                            MR_Word hlds__make_hlds__make_hlds_warn__SubGoalVars_179;
                            MR_Word hlds__make_hlds__make_hlds_warn__EmptySet_180;

                            {
                              hlds__make_hlds__make_hlds_warn__SubGoalVars_179 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__SubGoal_136);
                            }
                            hlds__make_hlds__make_hlds_warn__TypeCtorInfo_160_181 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                            {
                              parse_tree__set_of_var__init_1_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_160_181, &hlds__make_hlds__make_hlds_warn__EmptySet_180);
                            }
                            {
                              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Vars_187, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__EmptySet_180, hlds__make_hlds__make_hlds_warn__SubGoalVars_179, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_129_193);
                            }
                            {
                              parse_tree__set_of_var__insert_list_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_160_181, hlds__make_hlds__make_hlds_warn__Vars_187, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__SubQuantVars_192);
                            }
                          }
                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5 = hlds__make_hlds__make_hlds_warn__SubGoal_136;
                          MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_QuantVars_6 = hlds__make_hlds__make_hlds_warn__SubQuantVars_192;
                          MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Info_0_95 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_129_193;

                          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95 = hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Info_0_95;
                          hlds__make_hlds__make_hlds_warn__QuantVars_6 = hlds__make_hlds__make_hlds_warn__next_value_of_QuantVars_6;
                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 3:
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 0)))) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                        case (MR_Integer) 2:
                        case (MR_Integer) 3:
                        case (MR_Integer) 4:
                        case (MR_Integer) 5:
                        case (MR_Integer) 7:
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5 = hlds__make_hlds__make_hlds_warn__SubGoal_136;

                              hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5;
                            }
                            continue;
                          }
                          break;
                        case (MR_Integer) 6:
                          {
                            MR_Word hlds__make_hlds__make_hlds_warn__TermVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 1)));
                            MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_40;
                            MR_Word hlds__make_hlds__make_hlds_warn__Var_123;
                            MR_Word hlds__make_hlds__make_hlds_warn___Kind_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Reason_16, (MR_Integer) 2)));

                            {
                              hlds__make_hlds__make_hlds_warn__NonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_9);
                            }
                            {
                              hlds__make_hlds__make_hlds_warn__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_123, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__TermVar_38));
                              MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            }
                            {
                              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Var_123, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__NonLocals_40, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96);
                            }
                          }
                          break;
                        case (MR_Integer) 8:
                          {
                            {
                              mercury__require__sorry_3_p_0((MR_String) "hlds.make_hlds.make_hlds_warn", (MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal\'/4", (MR_String) "loop_control");
                              return;
                            }
                          }
                          break;
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__Cond_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 2)));
                  MR_Word hlds__make_hlds__make_hlds_warn__Then_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 3)));
                  MR_Word hlds__make_hlds__make_hlds_warn__Else_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 4)));
                  MR_Word hlds__make_hlds__make_hlds_warn__CondThenQuantVars_52;
                  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_116_116;
                  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_117_117;
                  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_118_118;
                  MR_Word hlds__make_hlds__make_hlds_warn__Vars_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

                  if ((hlds__make_hlds__make_hlds_warn__Vars_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_116_116 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95;
                  else
                    {
                      MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_162_162;
                      MR_Word hlds__make_hlds__make_hlds_warn__CondVars_49;
                      MR_Word hlds__make_hlds__make_hlds_warn__ThenVars_50;
                      MR_Word hlds__make_hlds__make_hlds_warn__CondThenVars_51;
                      MR_Word hlds__make_hlds__make_hlds_warn__EmptySet_137;

                      {
                        hlds__make_hlds__make_hlds_warn__CondVars_49 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__Cond_44);
                      }
                      {
                        hlds__make_hlds__make_hlds_warn__ThenVars_50 = hlds__quantification__free_goal_vars_1_f_0(hlds__make_hlds__make_hlds_warn__Then_45);
                      }
                      hlds__make_hlds__make_hlds_warn__TypeCtorInfo_162_162 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                      {
                        parse_tree__set_of_var__union_3_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_162_162, hlds__make_hlds__make_hlds_warn__CondVars_49, hlds__make_hlds__make_hlds_warn__ThenVars_50, &hlds__make_hlds__make_hlds_warn__CondThenVars_51);
                      }
                      {
                        parse_tree__set_of_var__init_1_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_162_162, &hlds__make_hlds__make_hlds_warn__EmptySet_137);
                      }
                      {
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(hlds__make_hlds__make_hlds_warn__Vars_139, hlds__make_hlds__make_hlds_warn__GoalInfo_9, hlds__make_hlds__make_hlds_warn__EmptySet_137, hlds__make_hlds__make_hlds_warn__CondThenVars_51, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_116_116);
                      }
                    }
                  {
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__Vars_139, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__CondThenQuantVars_52);
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Cond_44, hlds__make_hlds__make_hlds_warn__CondThenQuantVars_52, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_116_116, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_117_117);
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Then_45, hlds__make_hlds__make_hlds_warn__CondThenQuantVars_52, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_117_117, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_118_118);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5 = hlds__make_hlds__make_hlds_warn__Else_46;
                    MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Info_0_95 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_118_118;

                    hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95 = hlds__make_hlds__make_hlds_warn__next_value_of_STATE_VARIABLE_Info_0_95;
                    hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__ShortHand_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__GoalExpr_8, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__ShortHand_80)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word hlds__make_hlds__make_hlds_warn__GoalB_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 1)));
                        MR_Word hlds__make_hlds__make_hlds_warn__Goal_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 0)));
                        MR_Word hlds__make_hlds__make_hlds_warn__Goals_200;
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_205;

                        {
                          hlds__make_hlds__make_hlds_warn__Goals_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_200, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__GoalB_94));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Goals_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__Goal_199, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_205);
                        }
                        {
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__Goals_200, hlds__make_hlds__make_hlds_warn__QuantVars_6, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_15_205, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word hlds__make_hlds__make_hlds_warn__Inner_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 2)));
                        MR_Word hlds__make_hlds__make_hlds_warn__MainGoal_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 4)));
                        MR_Word hlds__make_hlds__make_hlds_warn__OrElseGoals_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 5)));
                        MR_Word hlds__make_hlds__make_hlds_warn__InnerDI_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Inner_83, (MR_Integer) 0)));
                        MR_Word hlds__make_hlds__make_hlds_warn__InnerUO_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Inner_83, (MR_Integer) 1)));
                        MR_Word hlds__make_hlds__make_hlds_warn__InsideQuantVars_90;
                        MR_Word hlds__make_hlds__make_hlds_warn__Var_102;
                        MR_Word hlds__make_hlds__make_hlds_warn__Var_103;
                        MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_105_105;
                        MR_Word hlds__make_hlds__make_hlds_warn___GoalType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 0)));
                        MR_Word hlds__make_hlds__make_hlds_warn___Outer_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 1)));
                        MR_Word hlds__make_hlds__make_hlds_warn___MaybeOutputVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 3)));
                        MR_Word hlds__make_hlds__make_hlds_warn___OrElseInners_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 6)));

                        {
                          hlds__make_hlds__make_hlds_warn__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_103, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__InnerUO_89));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          hlds__make_hlds__make_hlds_warn__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_102, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__InnerDI_88));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_102, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_103));
                        }
                        {
                          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__Var_102, hlds__make_hlds__make_hlds_warn__QuantVars_6, &hlds__make_hlds__make_hlds_warn__InsideQuantVars_90);
                        }
                        {
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(hlds__make_hlds__make_hlds_warn__MainGoal_85, hlds__make_hlds__make_hlds_warn__InsideQuantVars_90, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_95, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_105_105);
                        }
                        {
                          hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(hlds__make_hlds__make_hlds_warn__OrElseGoals_86, hlds__make_hlds__make_hlds_warn__InsideQuantVars_90, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_105_105, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_96);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word hlds__make_hlds__make_hlds_warn__SubGoal_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 2)));
                        MR_Word hlds__make_hlds__make_hlds_warn__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 0)));
                        MR_Word hlds__make_hlds__make_hlds_warn__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__ShortHand_80, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5 = hlds__make_hlds__make_hlds_warn__SubGoal_145;

                          hlds__make_hlds__make_hlds_warn__Goal_5 = hlds__make_hlds__make_hlds_warn__next_value_of_Goal_5;
                        }
                        continue;
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;

    {
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
    return hlds__make_hlds__make_hlds_warn__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;

    {
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
    return hlds__make_hlds__make_hlds_warn__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__GoalVars_7,
  MR_Word hlds__make_hlds__make_hlds_warn__GoalInfo_8,
  MR_Word hlds__make_hlds__make_hlds_warn__NonLocals_9,
  MR_Word hlds__make_hlds__make_hlds_warn__QuantVars_10,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Word hlds__make_hlds__make_hlds_warn__TypeInfo_95_95;
    MR_Word hlds__make_hlds__make_hlds_warn__VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_warn__CallId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_warn__Context_14;
    MR_Word hlds__make_hlds__make_hlds_warn__SingleVars_15;
    MR_Word hlds__make_hlds__make_hlds_warn__MultiVars_19;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_27;
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_35;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_warn__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__make_hlds_warn__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__make_hlds_warn__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__make_hlds_warn__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));

    {
      hlds__make_hlds__make_hlds_warn__Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8);
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_27, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_27, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_27, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NonLocals_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_27, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__QuantVars_10));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_27, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_12));
    }
    hlds__make_hlds__make_hlds_warn__TypeInfo_95_95 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[1];
    {
      mercury__list__filter_3_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_95_95, hlds__make_hlds__make_hlds_warn__Var_27, hlds__make_hlds__make_hlds_warn__GoalVars_7, &hlds__make_hlds__make_hlds_warn__SingleVars_15);
    }
    hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__SingleVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (!(hlds__make_hlds__make_hlds_warn__succeeded))
      {
        {
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8, (MR_Integer) 13);
        }
      }
    if (hlds__make_hlds__make_hlds_warn__succeeded)
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25;
    else
      {
        {
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8, (MR_Integer) 1);
        }
        if (hlds__make_hlds__make_hlds_warn__succeeded)
          {
            MR_Word hlds__make_hlds__make_hlds_warn__SingleHeadVars0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
            MR_Word hlds__make_hlds__make_hlds_warn__SingleHeadVars_17;
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_32;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_60;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_61;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_62;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_63;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_65;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_66;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_64;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_67;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_68;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_69;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_70;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_71;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_72;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_73;

            {
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__SingleVars_15, hlds__make_hlds__make_hlds_warn__SingleHeadVars0_16, &hlds__make_hlds__make_hlds_warn__SingleHeadVars_17);
            }
            hlds__make_hlds__make_hlds_warn__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
            hlds__make_hlds__make_hlds_warn__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
            hlds__make_hlds__make_hlds_warn__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
            hlds__make_hlds__make_hlds_warn__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
            hlds__make_hlds__make_hlds_warn__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
            hlds__make_hlds__make_hlds_warn__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
            hlds__make_hlds__make_hlds_warn__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
            {
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_60));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_61));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_62));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_63));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SingleHeadVars_17));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_65));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_66));
            }
            {
              hlds__make_hlds__make_hlds_warn__Var_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8);
            }
            hlds__make_hlds__make_hlds_warn__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 0)));
            hlds__make_hlds__make_hlds_warn__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 1)));
            hlds__make_hlds__make_hlds_warn__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 2)));
            hlds__make_hlds__make_hlds_warn__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 3)));
            hlds__make_hlds__make_hlds_warn__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 4)));
            hlds__make_hlds__make_hlds_warn__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 5)));
            hlds__make_hlds__make_hlds_warn__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_30_30, (MR_Integer) 6)));
            {
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_67));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_68));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_69));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_70));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_71));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_72));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_32));
            }
          }
        else
          {
            MR_Word hlds__make_hlds__make_hlds_warn__SingleSpec_18;

            {
              hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 0, hlds__make_hlds__make_hlds_warn__Context_14, hlds__make_hlds__make_hlds_warn__CallId_13, hlds__make_hlds__make_hlds_warn__VarSet_12, hlds__make_hlds__make_hlds_warn__SingleVars_15, &hlds__make_hlds__make_hlds_warn__SingleSpec_18);
            }
            {
              hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(hlds__make_hlds__make_hlds_warn__SingleSpec_18, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_25, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31);
            }
          }
      }
    {
      hlds__make_hlds__make_hlds_warn__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_35, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_35, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_35, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NonLocals_9));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_35, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_12));
    }
    {
      mercury__list__filter_3_p_0(hlds__make_hlds__make_hlds_warn__TypeInfo_95_95, hlds__make_hlds__make_hlds_warn__Var_35, hlds__make_hlds__make_hlds_warn__GoalVars_7, &hlds__make_hlds__make_hlds_warn__MultiVars_19);
    }
    if ((hlds__make_hlds__make_hlds_warn__MultiVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31;
    else
      {
        {
          hlds__make_hlds__make_hlds_warn__succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8, (MR_Integer) 1);
        }
        if (hlds__make_hlds__make_hlds_warn__succeeded)
          {
            MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 5)));
            MR_Word hlds__make_hlds__make_hlds_warn__MultiHeadVars_23;
            MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_39;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 2)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 3)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 4)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 6)));
            MR_Word hlds__make_hlds__make_hlds_warn__Var_80;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_81;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_82;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_83;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_84;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_86;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_85;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_87;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_88;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_89;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_90;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_91;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_92;
            MR_Word hlds__make_hlds__make_hlds_warn__Var_93;

            {
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__make_hlds__make_hlds_warn__MultiVars_19, hlds__make_hlds__make_hlds_warn__MultiHeadVars0_22, &hlds__make_hlds__make_hlds_warn__MultiHeadVars_23);
            }
            hlds__make_hlds__make_hlds_warn__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 0)));
            hlds__make_hlds__make_hlds_warn__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 1)));
            hlds__make_hlds__make_hlds_warn__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 2)));
            hlds__make_hlds__make_hlds_warn__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 3)));
            hlds__make_hlds__make_hlds_warn__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 4)));
            hlds__make_hlds__make_hlds_warn__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 5)));
            hlds__make_hlds__make_hlds_warn__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, (MR_Integer) 6)));
            {
              hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_80));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_81));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_82));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_83));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_84));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__MultiHeadVars_23));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_86));
            }
            {
              hlds__make_hlds__make_hlds_warn__Var_39 = hlds__hlds_goal__goal_info_get_context_1_f_0(hlds__make_hlds__make_hlds_warn__GoalInfo_8);
            }
            hlds__make_hlds__make_hlds_warn__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 0)));
            hlds__make_hlds__make_hlds_warn__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
            hlds__make_hlds__make_hlds_warn__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 2)));
            hlds__make_hlds__make_hlds_warn__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 3)));
            hlds__make_hlds__make_hlds_warn__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 4)));
            hlds__make_hlds__make_hlds_warn__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 5)));
            hlds__make_hlds__make_hlds_warn__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_37_37, (MR_Integer) 6)));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
              *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_87));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_88));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_89));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_90));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_91));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_92));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_39));
            }
          }
        else
          {
            MR_Word hlds__make_hlds__make_hlds_warn__MultiSpec_24;

            {
              hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 1, hlds__make_hlds__make_hlds_warn__Context_14, hlds__make_hlds__make_hlds_warn__CallId_13, hlds__make_hlds__make_hlds_warn__VarSet_12, hlds__make_hlds__make_hlds_warn__MultiVars_19, &hlds__make_hlds__make_hlds_warn__MultiSpec_24);
            }
            {
              hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(hlds__make_hlds__make_hlds_warn__MultiSpec_24, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_31_31, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_26);
            }
          }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__Spec_4,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_9)
{
  {
    MR_Word hlds__make_hlds__make_hlds_warn__Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__make_hlds_warn__Specs_7;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__make_hlds_warn__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_warn__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__make_hlds_warn__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__make_hlds_warn__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__make_hlds_warn__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));

    {
      hlds__make_hlds__make_hlds_warn__Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Specs_7, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_4));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Specs_7, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Specs0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Specs_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_16));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
    MR_String hlds__make_hlds__make_hlds_warn__conv0_HeadVar__3_83;

    {
      hlds__make_hlds__make_hlds_warn__conv0_HeadVar__3_83 = hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__476__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
    hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__3_83));
    return hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__SingleMulti_7,
  MR_Word hlds__make_hlds__make_hlds_warn__Context_8,
  MR_Word hlds__make_hlds__make_hlds_warn__CallId_9,
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_10,
  MR_Word hlds__make_hlds__make_hlds_warn__Vars_11,
  MR_Word * hlds__make_hlds__make_hlds_warn__Spec_12)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81;
    MR_String hlds__make_hlds__make_hlds_warn__Count_13;
    MR_Word hlds__make_hlds__make_hlds_warn__Preamble_14;
    MR_Word hlds__make_hlds__make_hlds_warn__VarStrs0_15;
    MR_Word hlds__make_hlds__make_hlds_warn__VarStrs_16;
    MR_Word hlds__make_hlds__make_hlds_warn__VarsPiece_17;
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_19;
    MR_Word hlds__make_hlds__make_hlds_warn__Msg_20;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_24;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_25;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_32;
    MR_String hlds__make_hlds__make_hlds_warn__Var_33;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_64;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_65;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_68;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_69;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_70;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_78;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_35;
    MR_String hlds__make_hlds__make_hlds_warn__Var_18;

    switch (hlds__make_hlds__make_hlds_warn__SingleMulti_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        hlds__make_hlds__make_hlds_warn__Count_13 = (MR_String) "more than once";
        break;
      case (MR_Integer) 0:
        hlds__make_hlds__make_hlds_warn__Count_13 = (MR_String) "only once";
        break;
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_25, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__CallId_9));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_25));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])));
    }
    {
      hlds__make_hlds__make_hlds_warn__Preamble_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Preamble_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[47])));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Preamble_14, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_24));
    }
    hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      hlds__make_hlds__make_hlds_warn__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_32, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_32, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_32, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_10));
    }
    {
      hlds__make_hlds__make_hlds_warn__VarStrs0_15 = mercury__list__map_2_f_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[1], hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81, hlds__make_hlds__make_hlds_warn__Var_32, hlds__make_hlds__make_hlds_warn__Vars_11);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_81_81, hlds__make_hlds__make_hlds_warn__VarStrs0_15, &hlds__make_hlds__make_hlds_warn__VarStrs_16);
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_33 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__make_hlds__make_hlds_warn__VarStrs_16);
    }
    {
      hlds__make_hlds__make_hlds_warn__VarsPiece_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__VarsPiece_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__VarsPiece_17, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_33));
    }
    hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__VarStrs_16)) == (MR_mktag((MR_Integer) 1)));
    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        hlds__make_hlds__make_hlds_warn__Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__VarStrs_16, (MR_Integer) 0)));
        hlds__make_hlds__make_hlds_warn__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__VarStrs_16, (MR_Integer) 1)));
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        MR_Word hlds__make_hlds__make_hlds_warn__Var_38;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_39;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_42;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_43;

        {
          hlds__make_hlds__make_hlds_warn__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Count_13));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_43));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[16])));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[48])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_42));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_38, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarsPiece_17));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_39));
        }
        {
          hlds__make_hlds__make_hlds_warn__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[30])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_38));
        }
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_warn__Var_52;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_53;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_56;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_57;

        {
          hlds__make_hlds__make_hlds_warn__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_57, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Count_13));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_56, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_57));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[16])));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[49])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_53, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_56));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_52, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarsPiece_17));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_53));
        }
        {
          hlds__make_hlds__make_hlds_warn__Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[33])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_19, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_52));
        }
      }
    {
      hlds__make_hlds__make_hlds_warn__Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, hlds__make_hlds__make_hlds_warn__Preamble_14, hlds__make_hlds__make_hlds_warn__Pieces_19);
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_69, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_70));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_68, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_69));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_65, 0) = ((MR_Box) (((MR_Integer) 6 | (((MR_Integer) 1 << (MR_Integer) 10)))));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_65, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_68));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_65));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      hlds__make_hlds__make_hlds_warn__Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_20, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_8));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_20, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_64));
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_78, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_20));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *hlds__make_hlds__make_hlds_warn__Spec_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_78));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
    MR_String hlds__make_hlds__make_hlds_warn__conv0_Name_6;

    {
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), &hlds__make_hlds__make_hlds_warn__conv0_Name_6);
    }
    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        *hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_Name_6));
        hlds__make_hlds__make_hlds_warn__succeeded = MR_TRUE;
      }
    return hlds__make_hlds__make_hlds_warn__succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_11,
  MR_Word hlds__make_hlds__make_hlds_warn__PragmaImpl_12,
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_13,
  MR_Word hlds__make_hlds__make_hlds_warn__Args_14,
  MR_Word hlds__make_hlds__make_hlds_warn__Context_15,
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_16,
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_17,
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_18,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_31,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_32)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_String hlds__make_hlds__make_hlds_warn__LangStr_20;
    MR_String hlds__make_hlds__make_hlds_warn__Code_21;
    MR_Word hlds__make_hlds__make_hlds_warn__C_CodeList_23;
    MR_Word hlds__make_hlds__make_hlds_warn__UnmentionedVars_24;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_33;
    MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78;
    MR_Word hlds__make_hlds__make_hlds_warn__CharList_87;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_22;

    {
      hlds__make_hlds__make_hlds_warn__LangStr_20 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_13);
    }
    hlds__make_hlds__make_hlds_warn__Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__PragmaImpl_12, (MR_Integer) 0)));
    hlds__make_hlds__make_hlds_warn__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__PragmaImpl_12, (MR_Integer) 1)));
    {
      mercury__string__to_char_list_2_p_0(hlds__make_hlds__make_hlds_warn__Code_21, &hlds__make_hlds__make_hlds_warn__CharList_87);
    }
    {
      hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(hlds__make_hlds__make_hlds_warn__CharList_87, &hlds__make_hlds__make_hlds_warn__C_CodeList_23);
    }
    {
      hlds__make_hlds__make_hlds_warn__Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_33, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_33, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__C_CodeList_23));
    }
    {
      mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__make_hlds__make_hlds_warn__Var_33, hlds__make_hlds__make_hlds_warn__Args_14, &hlds__make_hlds__make_hlds_warn__UnmentionedVars_24);
    }
    if ((hlds__make_hlds__make_hlds_warn__UnmentionedVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_31;
    else
      {
        MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_84_84 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
        MR_Word hlds__make_hlds__make_hlds_warn__Pieces_27;
        MR_Word hlds__make_hlds__make_hlds_warn__Msg_28;
        MR_Word hlds__make_hlds__make_hlds_warn__Spec_30;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_34;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_37;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_38;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_39;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_42;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_43;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_50;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_51;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_52;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_55;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_63;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_64;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_67;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_68;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_76;

        {
          hlds__make_hlds__make_hlds_warn__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_38, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_20));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_43, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_16));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_42, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_43));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_42));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_37, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_38));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_39));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[45])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_34, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_37));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_51 = hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(hlds__make_hlds__make_hlds_warn__UnmentionedVars_24);
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_38));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[10])));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[46])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_52, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_55));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_50 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_84_84, hlds__make_hlds__make_hlds_warn__Var_51, hlds__make_hlds__make_hlds_warn__Var_52);
        }
        {
          hlds__make_hlds__make_hlds_warn__Pieces_27 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_84_84, hlds__make_hlds__make_hlds_warn__Var_34, hlds__make_hlds__make_hlds_warn__Var_50);
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_68, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_27));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_67, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_68));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_64, 0) = ((MR_Box) (((MR_Integer) 6 | (((MR_Integer) 1 << (MR_Integer) 10)))));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_64, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_67));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_64));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_warn__Msg_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_28, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_15));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_28, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_63));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_76, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_28));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__make_hlds_warn__Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[0])));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_30, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_76));
        }
        {
          hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_30));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_31));
        }
      }
    {
      hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_11, hlds__make_hlds__make_hlds_warn__Lang_13, hlds__make_hlds__make_hlds_warn__Context_15, hlds__make_hlds__make_hlds_warn__SimpleCallId_16, hlds__make_hlds__make_hlds_warn__PredId_17, hlds__make_hlds__make_hlds_warn__ProcId_18, hlds__make_hlds__make_hlds_warn__C_CodeList_23, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_78_78, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_32);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Word hlds__make_hlds__make_hlds_warn__PredInfo_18;
    MR_Word hlds__make_hlds__make_hlds_warn__PredStatus_19;
    MR_Word hlds__make_hlds__make_hlds_warn__IsImported_20;

    {
      hlds__hlds_module__module_info_pred_info_3_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_10, hlds__make_hlds__make_hlds_warn__PredId_14, &hlds__make_hlds__make_hlds_warn__PredInfo_18);
    }
    {
      hlds__hlds_pred__pred_info_get_status_2_p_0(hlds__make_hlds__make_hlds_warn__PredInfo_18, &hlds__make_hlds__make_hlds_warn__PredStatus_19);
    }
    {
      hlds__make_hlds__make_hlds_warn__IsImported_20 = hlds__status__pred_status_is_imported_1_f_0(hlds__make_hlds__make_hlds_warn__PredStatus_19);
    }
    switch (hlds__make_hlds__make_hlds_warn__IsImported_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23;

          {
            hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_10, hlds__make_hlds__make_hlds_warn__Lang_11, hlds__make_hlds__make_hlds_warn__Context_12, hlds__make_hlds__make_hlds_warn__SimpleCallId_13, hlds__make_hlds__make_hlds_warn__PredId_14, hlds__make_hlds__make_hlds_warn__ProcId_15, hlds__make_hlds__make_hlds_warn__BodyPieces_16, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21, &hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23);
          }
          switch (hlds__make_hlds__make_hlds_warn__Lang_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                {
                  hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "return")), hlds__make_hlds__make_hlds_warn__BodyPieces_16);
                }
                if (hlds__make_hlds__make_hlds_warn__succeeded)
                  {
                    MR_String hlds__make_hlds__make_hlds_warn__LangStr_32;
                    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_33;
                    MR_Word hlds__make_hlds__make_hlds_warn__Msg_34;
                    MR_Word hlds__make_hlds__make_hlds_warn__Spec_36;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_40;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_41;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_42;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_45;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_46;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_59;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_60;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_63;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_64;
                    MR_Word hlds__make_hlds__make_hlds_warn__Var_72;

                    {
                      hlds__make_hlds__make_hlds_warn__LangStr_32 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_11);
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Var_41, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_32));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                      MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_46, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_13));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_45, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_46));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[29])));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_42, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_45));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_40, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_41));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_40, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_42));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[36])));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_40));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_64, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_33));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_64));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_60, 0) = ((MR_Box) (((MR_Integer) 51 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_60, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_63));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_59, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_60));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_34, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_12));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_34, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_59));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_72, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_34));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      hlds__make_hlds__make_hlds_warn__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[2])));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_72));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_36));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23));
                    }
                  }
                else
                  *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23;
              }
              break;
            case (MR_Integer) 3:
              *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_23_23;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_22 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_21;
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__ModuleInfo_10,
  MR_Word hlds__make_hlds__make_hlds_warn__Lang_11,
  MR_Word hlds__make_hlds__make_hlds_warn__Context_12,
  MR_Word hlds__make_hlds__make_hlds_warn__SimpleCallId_13,
  MR_Word hlds__make_hlds__make_hlds_warn__PredId_14,
  MR_Integer hlds__make_hlds__make_hlds_warn__ProcId_15,
  MR_Word hlds__make_hlds__make_hlds_warn__BodyPieces_16,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;
    MR_Word hlds__make_hlds__make_hlds_warn__ProcInfo_18;
    MR_Word hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19;

    {
      hlds__hlds_module__module_info_proc_info_4_p_0(hlds__make_hlds__make_hlds_warn__ModuleInfo_10, hlds__make_hlds__make_hlds_warn__PredId_14, hlds__make_hlds__make_hlds_warn__ProcId_15, &hlds__make_hlds__make_hlds_warn__ProcInfo_18);
    }
    {
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(hlds__make_hlds__make_hlds_warn__ProcInfo_18, &hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19);
    }
    if ((hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
    else
      {
        MR_Word hlds__make_hlds__make_hlds_warn__Detism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__MaybeDeclDetism_19, (MR_Integer) 0)));

        switch (hlds__make_hlds__make_hlds_warn__Detism_20) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 4:
          case (MR_Integer) 0:
          case (MR_Integer) 6:
            {
              {
                hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), hlds__make_hlds__make_hlds_warn__BodyPieces_16);
              }
              if (hlds__make_hlds__make_hlds_warn__succeeded)
                {
                  MR_String hlds__make_hlds__make_hlds_warn__LangStr_22;
                  MR_Word hlds__make_hlds__make_hlds_warn__Pieces_23;
                  MR_Word hlds__make_hlds__make_hlds_warn__Msg_24;
                  MR_Word hlds__make_hlds__make_hlds_warn__Spec_26;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_68;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_69;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_70;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_73;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_74;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_87;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_88;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_91;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_92;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_100;

                  {
                    hlds__make_hlds__make_hlds_warn__LangStr_22 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_11);
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Var_69, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_22));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_74, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_13));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_73, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_74));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[41])));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_70, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_73));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_68, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_69));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_68, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_70));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[36])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_23, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_68));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_92, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_23));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_91, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_92));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_88, 0) = ((MR_Box) (((MR_Integer) 51 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_88, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_91));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_87, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_88));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_12));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_87));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_100, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_24));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[2])));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_26, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_100));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_26));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27));
                  }
                }
              else
                *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
            }
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 1:
            {
              {
                hlds__make_hlds__make_hlds_warn__succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), hlds__make_hlds__make_hlds_warn__BodyPieces_16);
              }
              if (hlds__make_hlds__make_hlds_warn__succeeded)
                *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
              else
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_31;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_32;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_33;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_36;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_37;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_50;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_51;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_54;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_55;
                  MR_Word hlds__make_hlds__make_hlds_warn__Var_63;
                  MR_String hlds__make_hlds__make_hlds_warn__LangStr_103;
                  MR_Word hlds__make_hlds__make_hlds_warn__Pieces_104;
                  MR_Word hlds__make_hlds__make_hlds_warn__Msg_105;
                  MR_Word hlds__make_hlds__make_hlds_warn__Spec_107;

                  {
                    hlds__make_hlds__make_hlds_warn__LangStr_103 = libs__globals__foreign_language_string_1_f_0(hlds__make_hlds__make_hlds_warn__Lang_11);
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), hlds__make_hlds__make_hlds_warn__Var_32, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__LangStr_103));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                    MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_37, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__SimpleCallId_13));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_36, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_37));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[44])));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_36));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_31, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_32));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_33));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Pieces_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[36])));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_104, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_31));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_55, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Pieces_104));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_54, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_55));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_51, 0) = ((MR_Box) (((MR_Integer) 51 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_51, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_54));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_50, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_51));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Msg_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_105, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Context_12));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Msg_105, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_50));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_63, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Msg_105));
                    MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    hlds__make_hlds__make_hlds_warn__Spec_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[2])));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Spec_107, 2) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_63));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Spec_107));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27));
                  }
                }
            }
            break;
          case (MR_Integer) 7:
            *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
            break;
          case (MR_Integer) 2:
            *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
            break;
          case (MR_Integer) 3:
            *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_28 = hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_27;
            break;
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__C_Code_3,
  MR_Word * hlds__make_hlds__make_hlds_warn__List_4)
{
  {
    MR_Word hlds__make_hlds__make_hlds_warn__NameCharList_5;
    MR_Word hlds__make_hlds__make_hlds_warn__TheRest_6;

    {
      hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(hlds__make_hlds__make_hlds_warn__C_Code_3, &hlds__make_hlds__make_hlds_warn__NameCharList_5, &hlds__make_hlds__make_hlds_warn__TheRest_6);
    }
    if ((hlds__make_hlds__make_hlds_warn__NameCharList_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *hlds__make_hlds__make_hlds_warn__List_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word hlds__make_hlds__make_hlds_warn__Names_9;
        MR_String hlds__make_hlds__make_hlds_warn__Name_10;

        {
          hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(hlds__make_hlds__make_hlds_warn__TheRest_6, &hlds__make_hlds__make_hlds_warn__Names_9);
        }
        {
          mercury__string__from_char_list_2_p_0(hlds__make_hlds__make_hlds_warn__NameCharList_5, &hlds__make_hlds__make_hlds_warn__Name_10);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__make_hlds_warn__List_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Name_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Names_9));
        }
      }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

        if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *hlds__make_hlds__make_hlds_warn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        else
          {
            MR_Char hlds__make_hlds__make_hlds_warn__C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__make_hlds_warn__CodeChars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));

            {
              hlds__make_hlds__make_hlds_warn__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(hlds__make_hlds__make_hlds_warn__C_4);
            }
            if (hlds__make_hlds__make_hlds_warn__succeeded)
              {
                MR_Word hlds__make_hlds__make_hlds_warn__NameCharList0_8;

                {
                  hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(hlds__make_hlds__make_hlds_warn__CodeChars_5, &hlds__make_hlds__make_hlds_warn__NameCharList0_8, hlds__make_hlds__make_hlds_warn__HeadVar__3_3);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (hlds__make_hlds__make_hlds_warn__C_4));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NameCharList0_8));
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word hlds__make_hlds__make_hlds_warn__next_value_of_HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__CodeChars_5;

                  hlds__make_hlds__make_hlds_warn__HeadVar__1_1 = hlds__make_hlds__make_hlds_warn__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__HeadVar__1_1,
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__2_2,
  MR_Word * hlds__make_hlds__make_hlds_warn__HeadVar__3_3)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

    if ((hlds__make_hlds__make_hlds_warn__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *hlds__make_hlds__make_hlds_warn__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Char hlds__make_hlds__make_hlds_warn__C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word hlds__make_hlds__make_hlds_warn__CodeChars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__HeadVar__1_1, (MR_Integer) 1)));

        {
          hlds__make_hlds__make_hlds_warn__succeeded = mercury__char__is_alnum_or_underscore_1_p_0(hlds__make_hlds__make_hlds_warn__C_4);
        }
        if (hlds__make_hlds__make_hlds_warn__succeeded)
          {
            MR_Word hlds__make_hlds__make_hlds_warn__NameCharList0_8;

            {
              hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(hlds__make_hlds__make_hlds_warn__CodeChars_5, &hlds__make_hlds__make_hlds_warn__NameCharList0_8, hlds__make_hlds__make_hlds_warn__HeadVar__3_3);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (hlds__make_hlds__make_hlds_warn__C_4));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__NameCharList0_8));
            }
          }
        else
          {
            *hlds__make_hlds__make_hlds_warn__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *hlds__make_hlds__make_hlds_warn__HeadVar__3_3 = hlds__make_hlds__make_hlds_warn__CodeChars_5;
          }
      }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(
  MR_Word hlds__make_hlds__make_hlds_warn__UnmentionedVars_3)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__make_hlds_warn__UnmentionedVars_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word hlds__make_hlds__make_hlds_warn__Pieces_4;
    MR_String hlds__make_hlds__make_hlds_warn__Var_5;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_6;

    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        hlds__make_hlds__make_hlds_warn__Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__UnmentionedVars_3, (MR_Integer) 0)));
        hlds__make_hlds__make_hlds_warn__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__UnmentionedVars_3, (MR_Integer) 1)));
        hlds__make_hlds__make_hlds_warn__succeeded = (hlds__make_hlds__make_hlds_warn__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    if (hlds__make_hlds__make_hlds_warn__succeeded)
      {
        MR_Word hlds__make_hlds__make_hlds_warn__Var_9;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_10;

        {
          hlds__make_hlds__make_hlds_warn__Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_10, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_5));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_9, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_10));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[32])));
        }
        {
          hlds__make_hlds__make_hlds_warn__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[30])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_9));
        }
      }
    else
      {
        MR_Word hlds__make_hlds__make_hlds_warn__Var_17;
        MR_Word hlds__make_hlds__make_hlds_warn__Var_18;
        MR_String hlds__make_hlds__make_hlds_warn__Var_19;
        MR_String hlds__make_hlds__make_hlds_warn__Var_20;

        {
          hlds__make_hlds__make_hlds_warn__Var_20 = mercury__string__join_list_2_f_0((MR_String) ", ", hlds__make_hlds__make_hlds_warn__UnmentionedVars_3);
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_19 = parse_tree__error_util__add_quotes_1_f_0(hlds__make_hlds__make_hlds_warn__Var_20);
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__make_hlds_warn__Var_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_19));
        }
        {
          hlds__make_hlds__make_hlds_warn__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_17, 0) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_18));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[35])));
        }
        {
          hlds__make_hlds__make_hlds_warn__Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[33])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__make_hlds_warn__Pieces_4, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__Var_17));
        }
      }
    return hlds__make_hlds__make_hlds_warn__Pieces_4;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1(
  MR_Box hlds__make_hlds__make_hlds_warn__closure_arg,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
    MR_Box hlds__make_hlds__make_hlds_warn__closure = hlds__make_hlds__make_hlds_warn__closure_arg;
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_Spec_8;

    {
      hlds__make_hlds__make_hlds_warn__conv0_Spec_8 = hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1));
    }
    hlds__make_hlds__make_hlds_warn__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_Spec_8));
    return hlds__make_hlds__make_hlds_warn__wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(
  MR_Word hlds__make_hlds__make_hlds_warn__PredCallId_6,
  MR_Word hlds__make_hlds__make_hlds_warn__VarSet_7,
  MR_Word hlds__make_hlds__make_hlds_warn__Warnings_8,
  MR_Word hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_11,
  MR_Word * hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_12)
{
  {
    MR_Word hlds__make_hlds__make_hlds_warn__TypeCtorInfo_16_16 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
    MR_Word hlds__make_hlds__make_hlds_warn__WarningSpecs_10;
    MR_Word hlds__make_hlds__make_hlds_warn__Var_13;

    {
      hlds__make_hlds__make_hlds_warn__Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_13, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_13, 3) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__PredCallId_6));
      MR_hl_field(MR_mktag(0), hlds__make_hlds__make_hlds_warn__Var_13, 4) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__VarSet_7));
    }
    {
      hlds__make_hlds__make_hlds_warn__WarningSpecs_10 = mercury__list__map_2_f_0((MR_Word) &hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0, hlds__make_hlds__make_hlds_warn__TypeCtorInfo_16_16, hlds__make_hlds__make_hlds_warn__Var_13, hlds__make_hlds__make_hlds_warn__Warnings_8);
    }
    {
      *hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_12 = mercury__list__f_43_43_2_f_0(hlds__make_hlds__make_hlds_warn__TypeCtorInfo_16_16, hlds__make_hlds__make_hlds_warn__WarningSpecs_10, hlds__make_hlds__make_hlds_warn__STATE_VARIABLE_Specs_0_11);
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001(
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

    {
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2));
    }
    return hlds__make_hlds__make_hlds_warn__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001(
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(&hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_3));
    }
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001(
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2)
{
  {
    MR_bool hlds__make_hlds__make_hlds_warn__succeeded;

    {
      hlds__make_hlds__make_hlds_warn__succeeded = hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_1), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2));
    }
    return hlds__make_hlds__make_hlds_warn__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001(
  MR_Box * hlds__make_hlds__make_hlds_warn__wrapper_arg_1,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_2,
  MR_Box hlds__make_hlds__make_hlds_warn__wrapper_arg_3)
{
  {
    MR_Word hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1;

    {
      hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(&hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_2), ((MR_Word) hlds__make_hlds__make_hlds_warn__wrapper_arg_3));
    }
    *hlds__make_hlds__make_hlds_warn__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__make_hlds_warn__conv0_HeadVar__1_1));
  }
}

void mercury__hlds__make_hlds__make_hlds_warn__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_warn__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_single_or_multi_0);
	MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0);
}

void mercury__hlds__make_hlds__make_hlds_warn__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__make_hlds_warn__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module hlds.make_hlds.make_hlds_warn. */
