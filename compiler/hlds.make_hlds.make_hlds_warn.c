/*
** Automatically generated from `make_hlds_warn.m'
** by the Mercury compiler,
** version rotd-2018-02-14
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


// :- module hlds.make_hlds.make_hlds_warn.
// :- implementation.

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
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__477__1_2_f_0(
  MR_Word VarSet_10,
  MR_Word HeadVar__2_82);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalList_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(
  MR_Word NonLocals_4,
  MR_Word VarSet_5,
  MR_Word Var_6);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(
  MR_Word NonLocals_5,
  MR_Word QuantVars_6,
  MR_Word VarSet_7,
  MR_Word Var_8);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(
  MR_Word NameList1_4,
  MR_Word MaybeArg_5,
  MR_String * Name_6);

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(
  MR_Word PredCallId_5,
  MR_Word VarSet_6,
  MR_Word Warning_7);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(
  MR_Word PromiseType_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(
  MR_Word PromiseType_5,
  MR_Word DisjConjList_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(
  MR_Word PromiseType_6,
  MR_Word Goals_7,
  MR_Word CallUsed_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(
  MR_Word PromiseType_6,
  MR_Word Context_7,
  MR_String Message_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalList_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(
  MR_Word tscc_proc_1_input_1_Goal_5,
  MR_Word tscc_proc_1_input_2_QuantVars_6,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_96);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(
  MR_Word tscc_proc_2_input_1_X_7,
  MR_Word tscc_proc_2_input_2_RHS_8,
  MR_Word tscc_proc_2_input_3_GoalInfo_9,
  MR_Word tscc_proc_2_input_4_QuantVars_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_96);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word QuantVars_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word QuantVars_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(
  MR_Word GoalVars_7,
  MR_Word GoalInfo_8,
  MR_Word NonLocals_9,
  MR_Word QuantVars_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0(
  MR_Word SingleMulti_7,
  MR_Word Context_8,
  MR_Word CallId_9,
  MR_Word VarSet_10,
  MR_Word Vars_11,
  MR_Word * Spec_12);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Lang_11,
  MR_Word Context_12,
  MR_Word SimpleCallId_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word BodyPieces_16,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Lang_11,
  MR_Word Context_12,
  MR_Word SimpleCallId_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word BodyPieces_16,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(
  MR_Word C_Code_3,
  MR_Word * List_4);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(
  MR_Word UnmentionedVars_3);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) ((MR_Integer) 53)),
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
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__477__1_2_f_0(
  MR_Word VarSet_10,
  MR_Word HeadVar__2_82)
{
  {
    MR_String HeadVar__3_83;

    HeadVar__3_83 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_10, HeadVar__2_82);
    return HeadVar__3_83;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_24 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_25 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word ArgX5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgY5_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4)));
      MR_Word ArgX6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgY6_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5)));
      MR_Word ArgX7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));
      MR_Word ArgY7_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6)));
      MR_Word Var_18;

      hlds__hlds_module____Compare____module_info_0_0(&Var_18, ArgX1_4, ArgY1_5);
      succeeded = (Var_18 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_18;
      else
      {
        MR_Word Var_19;

        parse_tree__prog_data____Compare____simple_call_id_0_0(&Var_19, ArgX2_6, ArgY2_7);
        succeeded = (Var_19 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_19;
        else
        {
          MR_Word Var_20;

          mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[3], &Var_20, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_20 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_20;
          else
          {
            MR_Word Var_21;

            mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[4], &Var_21, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_21 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_21;
            else
            {
              MR_Word Var_22;

              mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[5], &Var_22, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_22 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_22;
              else
              {
                MR_Word Var_23;

                mercury__builtin__compare_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[5], &Var_23, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_23 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_23;
                else
                  mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX7_16, ArgY7_17);
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgX5_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4)));
      MR_Word ArgY5_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4)));
      MR_Word ArgX6_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5)));
      MR_Word ArgY6_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5)));
      MR_Word ArgX7_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6)));
      MR_Word ArgY7_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6)));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____simple_call_id_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[3];
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[4];
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[5];
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[5];
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                  succeeded = mercury__term____Unify____context_0_0(ArgX7_15, ArgY7_16);
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalList_4)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Goal_3)) == (MR_mktag((MR_Integer) 2)));
    MR_Word GoalA_6;
    MR_Word GoalB_7;
    MR_Word Var_5;

    if (succeeded)
    {
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), Goal_3, (MR_Integer) 0)));
      GoalA_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), Goal_3, (MR_Integer) 1)));
      GoalB_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), Goal_3, (MR_Integer) 2)));
      {
        MR_Word GoalListA_8;
        MR_Word GoalListB_9;

        hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(GoalA_6, &GoalListA_8);
        hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(GoalB_7, &GoalListB_9);
        *GoalList_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, GoalListA_8, GoalListB_9);
      }
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *GoalList_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_3));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(
  MR_Word NonLocals_4,
  MR_Word VarSet_5,
  MR_Word Var_6)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_String Name_7;
    MR_String Var_8;

    succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_9_9, NonLocals_4, Var_6);
    if (succeeded)
    {
      succeeded = mercury__varset__search_name_3_p_0(TypeCtorInfo_9_9, VarSet_5, Var_6, &Name_7);
      if (succeeded)
      {
        Var_8 = (MR_String) "_";
        succeeded = mercury__string__prefix_2_p_0(Name_7, Var_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7, (env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10, &(env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Var_15);
    if ((env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
    {
      (env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = (strcmp((env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, (env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Var_15) == 0);
      if ((env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
        hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0) == 0)
      {
        parse_tree__set_of_var__member_2_p_1((env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6, &(env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVar_10, hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2, env_ptr);
        (env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(
  MR_Word NonLocals_5,
  MR_Word QuantVars_6,
  MR_Word VarSet_7,
  MR_Word Var_8)
{
  {
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s env;

    (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__QuantVars_6 = QuantVars_6;
    (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7 = VarSet_7;
    {
      MR_String Var_11;
      MR_String Var_12;

      (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, NonLocals_5, Var_8);
      (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
      if ((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
      {
        (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
        (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14, (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__VarSet_7, Var_8, &(env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9);
        if ((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
        {
          Var_11 = (MR_String) "_";
          (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, Var_11);
          (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
          if ((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
          {
            Var_12 = (MR_String) "DCG_";
            (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__Name_9, Var_12);
            (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
            if ((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
            {
              hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(&env);
              (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
            }
          }
        }
      }
      return (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(
  MR_Word NameList1_4,
  MR_Word MaybeArg_5,
  MR_String * Name_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) MaybeArg_5)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Var_8;
    MR_Word _Mode_7;
    MR_String Var_9;
    MR_Word TypeCtorInfo_10_10;

    if (succeeded)
    {
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeArg_5, (MR_Integer) 0)));
      *Name_6 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
      _Mode_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
      Var_9 = (MR_String) "_";
      succeeded = mercury__string__prefix_2_p_0(*Name_6, Var_9);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_10_10, ((MR_Box) (*Name_6)), NameList1_4);
        succeeded = !(succeeded);
      }
    }
    return succeeded;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(
  MR_Word PredCallId_5,
  MR_Word VarSet_6,
  MR_Word Warning_7)
{
  {
    MR_bool succeeded;
    MR_Word Spec_8;
    MR_Word Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Warning_7, (MR_Integer) 0)));
    MR_Word Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Warning_7, (MR_Integer) 1)));
    MR_Word Pieces1_11;
    MR_Word Pieces2_13;
    MR_Word Msg_14;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_63;
    MR_Word Var_12;
    MR_Word Var_26;

    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), Var_19, 1) = ((MR_Box) (PredCallId_5));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])));
    }
    {
      Pieces1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces1_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[47])));
      MR_hl_field(MR_mktag(1), Pieces1_11, 1) = ((MR_Box) (Var_18));
    }
    succeeded = ((MR_tag((MR_Word) Vars_9)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 0)));
      Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 1)));
      succeeded = (Var_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_29;
      MR_Word Var_30;
      MR_String Var_31;

      Var_31 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_6, Var_12);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[12])));
      }
      {
        Pieces2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces2_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[30])));
        MR_hl_field(MR_mktag(1), Pieces2_13, 1) = ((MR_Box) (Var_29));
      }
    }
    else
    {
      MR_Word Var_40;
      MR_Word Var_41;
      MR_String Var_42;

      Var_42 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, VarSet_6, Vars_9);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[14])));
      }
      {
        Pieces2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces2_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[33])));
        MR_hl_field(MR_mktag(1), Pieces2_13, 1) = ((MR_Box) (Var_40));
      }
    }
    Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, Pieces1_11, Pieces2_13);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (((MR_Integer) 7 | (((MR_Integer) 1 << (MR_Integer) 10)))));
      MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
      MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_14, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Msg_14, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Msg_14));
      MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_8, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[1])));
      MR_hl_field(MR_mktag(0), Spec_8, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_8, 2) = ((MR_Box) (Var_63));
    }
    return Spec_8;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(
  MR_Word UnivVars_7,
  MR_Word PromiseType_8,
  MR_Word Goal_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  {
    MR_Word STATE_VARIABLE_Specs_17_17;

    if ((UnivVars_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(PromiseType_8, Context_10, (MR_String) "declaration has no universally quantified variables", STATE_VARIABLE_Specs_0_14, &STATE_VARIABLE_Specs_17_17);
    }
    else
      STATE_VARIABLE_Specs_17_17 = STATE_VARIABLE_Specs_0_14;
    hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(PromiseType_8, Goal_9, STATE_VARIABLE_Specs_17_17, STATE_VARIABLE_Specs_15);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_GoalList_4;

    hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(((MR_Word) wrapper_arg_1), &conv0_GoalList_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_GoalList_4));
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(
  MR_Word PromiseType_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
    MR_Word SubGoal_10;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_8;
    MR_Word Var_9;

    // setup for model_det tailcalls optimized into a loop
    if (succeeded)
    {
      Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 1)))) & (MR_Integer) 1);
      Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2)));
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3)));
      SubGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4)));
      succeeded = (Var_20 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Var_21 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word next_value_of_Goal_6 = SubGoal_10;

      // direct tailcall eliminated
      Goal_6 = next_value_of_Goal_6;
      continue;
    }
    else
    {
      MR_Word Var_11;
      MR_Word Var_12;
      MR_Word Var_13;

      succeeded = ((((MR_tag((MR_Word) Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 1)));
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2)));
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3)));
        {
          MR_Word DisjList_14;
          MR_Word DisjConjList_15;

          hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(Goal_6, &DisjList_14);
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[2], (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_6[2], DisjList_14, &DisjConjList_15);
          hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(PromiseType_5, DisjConjList_15, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
        }
      }
      else
      {
        MR_Word Context_16;
        MR_Word SubGoal_35;
        MR_Word Var_25;
        MR_Word Var_26;
        MR_Word _UnivVars_17;

        succeeded = ((((MR_tag((MR_Word) Goal_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_25 = ((((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 1)))) & (MR_Integer) 1);
          Var_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2)));
          _UnivVars_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 3)));
          SubGoal_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4)));
          succeeded = (Var_25 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (Var_26 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word STATE_VARIABLE_Specs_28_28;
          MR_Word next_value_of_Goal_6;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_18;

          hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(PromiseType_5, Context_16, (MR_String) "universal quantification should come before the declaration name", STATE_VARIABLE_Specs_0_18, &STATE_VARIABLE_Specs_28_28);
          // direct tailcall eliminated
          next_value_of_Goal_6 = SubGoal_35;
          next_value_of_STATE_VARIABLE_Specs_0_18 = STATE_VARIABLE_Specs_28_28;
          Goal_6 = next_value_of_Goal_6;
          STATE_VARIABLE_Specs_0_18 = next_value_of_STATE_VARIABLE_Specs_0_18;
          continue;
        }
        else
        {
          MR_Word Var_32;

          Var_32 = parse_tree__prog_item__goal_get_context_1_f_0(Goal_6);
          hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(PromiseType_5, Var_32, (MR_String) "goal in declaration is not a disjunction", STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(
  MR_Word PromiseType_5,
  MR_Word DisjConjList_6,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((DisjConjList_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
    else
    {
      MR_Word ConjList_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), DisjConjList_6, (MR_Integer) 0)));
      MR_Word Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), DisjConjList_6, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Specs_13_13;
      MR_Word next_value_of_DisjConjList_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(PromiseType_5, ConjList_8, (MR_Integer) 0, STATE_VARIABLE_Specs_0_10, &STATE_VARIABLE_Specs_13_13);
      // direct tailcall eliminated
      next_value_of_DisjConjList_6 = Rest_9;
      next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_13_13;
      DisjConjList_6 = next_value_of_DisjConjList_6;
      STATE_VARIABLE_Specs_0_10 = next_value_of_STATE_VARIABLE_Specs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(
  MR_Word PromiseType_6,
  MR_Word Goals_7,
  MR_Word CallUsed_8,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((Goals_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    else
    {
      MR_Word HeadGoal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_7, (MR_Integer) 0)));
      MR_Word TailGoals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Goals_7, (MR_Integer) 1)));
      MR_Word Var_12;
      MR_Word Var_13;
      MR_Word Var_14;
      MR_Word Var_15;

      succeeded = ((MR_tag((MR_Word) HeadGoal_10)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal_10, (MR_Integer) 0)));
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal_10, (MR_Integer) 1)));
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal_10, (MR_Integer) 2)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadGoal_10, (MR_Integer) 3)));
        {
          MR_Word next_value_of_Goals_7 = TailGoals_11;

          // direct tailcall eliminated
          Goals_7 = next_value_of_Goals_7;
          continue;
        }
      }
      else
      {
        MR_Word HeadSubGoal_18;
        MR_Word Var_26;
        MR_Word Var_27;
        MR_Word Var_16;
        MR_Word Var_17;

        succeeded = ((((MR_tag((MR_Word) HeadGoal_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadGoal_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_26 = ((((MR_Word) (MR_hl_field(MR_mktag(3), HeadGoal_10, (MR_Integer) 1)))) & (MR_Integer) 1);
          Var_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(3), HeadGoal_10, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadGoal_10, (MR_Integer) 2)));
          Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadGoal_10, (MR_Integer) 3)));
          HeadSubGoal_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadGoal_10, (MR_Integer) 4)));
          succeeded = (Var_26 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Var_27 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word Var_28;
          MR_Word next_value_of_Goals_7;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (HeadSubGoal_18));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (TailGoals_11));
          }
          // direct tailcall eliminated
          next_value_of_Goals_7 = Var_28;
          Goals_7 = next_value_of_Goals_7;
          continue;
        }
        else
        {
          MR_Word Context_19;
          MR_Word Var_20;
          MR_Word Var_21;
          MR_Word Var_22;

          succeeded = ((MR_tag((MR_Word) HeadGoal_10)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadGoal_10, (MR_Integer) 0)));
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadGoal_10, (MR_Integer) 1)));
            Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadGoal_10, (MR_Integer) 2)));
            Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadGoal_10, (MR_Integer) 3)));
            {
              MR_Word STATE_VARIABLE_Specs_31_31;
              MR_Word next_value_of_Goals_7;
              MR_Word next_value_of_STATE_VARIABLE_Specs_0_23;

              switch (CallUsed_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_31_31 = STATE_VARIABLE_Specs_0_23;
                  break;
                case (MR_Integer) 1:
                  {
                    hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(PromiseType_6, Context_19, (MR_String) "disjunct contains more than one call", STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_31_31);
                  }
                  break;
              }
              // direct tailcall eliminated
              next_value_of_Goals_7 = TailGoals_11;
              next_value_of_STATE_VARIABLE_Specs_0_23 = STATE_VARIABLE_Specs_31_31;
              Goals_7 = next_value_of_Goals_7;
              CallUsed_8 = (MR_Integer) 1;
              STATE_VARIABLE_Specs_0_23 = next_value_of_STATE_VARIABLE_Specs_0_23;
              continue;
            }
          }
          else
          {
            MR_Word Var_34;
            MR_Word STATE_VARIABLE_Specs_36_36;
            MR_Word next_value_of_Goals_7;
            MR_Word next_value_of_STATE_VARIABLE_Specs_0_23;

            Var_34 = parse_tree__prog_item__goal_get_context_1_f_0(HeadGoal_10);
            hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(PromiseType_6, Var_34, (MR_String) "disjunct is not a call or unification", STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_36_36);
            // direct tailcall eliminated
            next_value_of_Goals_7 = TailGoals_11;
            next_value_of_STATE_VARIABLE_Specs_0_23 = STATE_VARIABLE_Specs_36_36;
            Goals_7 = next_value_of_Goals_7;
            STATE_VARIABLE_Specs_0_23 = next_value_of_STATE_VARIABLE_Specs_0_23;
            continue;
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(
  MR_Word PromiseType_6,
  MR_Word Context_7,
  MR_String Message_8,
  MR_Word STATE_VARIABLE_Specs_0_13,
  MR_Word * STATE_VARIABLE_Specs_14)
{
  {
    MR_Word Pieces_10;
    MR_Word Msg_11;
    MR_Word Spec_12;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_String Var_19;
    MR_Word Var_20;
    MR_Word Var_23;
    MR_Word Var_25;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_38;

    Var_19 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_6);
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Message_8));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[6])));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[52])));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_28));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_25));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[51])));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_23));
    }
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_20));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[50])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_17));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (Pieces_10));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_11, 0) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), Msg_11, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Msg_11));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_13));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalList_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Goal_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Goal_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word GoalA_6;
    MR_Word GoalB_7;
    MR_Word Var_5;

    if (succeeded)
    {
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_3, (MR_Integer) 1)));
      GoalA_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_3, (MR_Integer) 2)));
      GoalB_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Goal_3, (MR_Integer) 3)));
      {
        MR_Word GoalListA_8;
        MR_Word GoalListB_9;

        hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(GoalA_6, &GoalListA_8);
        hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(GoalB_7, &GoalListB_9);
        *GoalList_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0, GoalListA_8, GoalListB_9);
      }
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *GoalList_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_3));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredCallId_8,
  MR_Word VarSet_9,
  MR_Word Body_10,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_Word TypeCtorInfo_41_41 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    MR_Word Info0_12;
    MR_Word QuantVars_13;
    MR_Word Info_14;
    MR_Word NewSpecs_18;
    MR_Word SingletonHeadVarsSet_19;
    MR_Word MultiHeadVarsSet_20;
    MR_Word HeadContext_21;
    MR_Word SingletonHeadVars_22;
    MR_Word MultiHeadVars_23;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word STATE_VARIABLE_Specs_38_38;
    MR_Word _ModuleInfo_15;
    MR_Word _PredCallId_16;
    MR_Word _VarSet_17;

    Var_33 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_41_41);
    Var_34 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_41_41);
    Var_35 = mercury__term__context_init_0_f_0();
    {
      Info0_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_12, 0) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Info0_12, 1) = ((MR_Box) (PredCallId_8));
      MR_hl_field(MR_mktag(0), Info0_12, 2) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), Info0_12, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Info0_12, 4) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Info0_12, 5) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Info0_12, 6) = ((MR_Box) (Var_35));
    }
    QuantVars_13 = parse_tree__set_of_var__init_0_f_0(TypeCtorInfo_41_41);
    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Body_10, QuantVars_13, Info0_12, &Info_14);
    _ModuleInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 0)));
    _PredCallId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 1)));
    _VarSet_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 2)));
    NewSpecs_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 3)));
    SingletonHeadVarsSet_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 4)));
    MultiHeadVarsSet_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 5)));
    HeadContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 6)));
    STATE_VARIABLE_Specs_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, NewSpecs_18, STATE_VARIABLE_Specs_0_30);
    parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_41_41, SingletonHeadVarsSet_19, &SingletonHeadVars_22);
    parse_tree__set_of_var__to_sorted_list_2_p_0(TypeCtorInfo_41_41, MultiHeadVarsSet_20, &MultiHeadVars_23);
    if ((SingletonHeadVars_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_38_38 = STATE_VARIABLE_Specs_36_36;
    else
    {
      MR_Word SingleSpec_26;

      hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 0, HeadContext_21, PredCallId_8, VarSet_9, SingletonHeadVars_22, &SingleSpec_26);
      {
        STATE_VARIABLE_Specs_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_38_38, 0) = ((MR_Box) (SingleSpec_26));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_38_38, 1) = ((MR_Box) (STATE_VARIABLE_Specs_36_36));
      }
    }
    if ((MultiHeadVars_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_38_38;
    else
    {
      MR_Word MultiSpec_29;

      hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 1, HeadContext_21, PredCallId_8, VarSet_9, MultiHeadVars_23, &MultiSpec_29);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_31 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MultiSpec_29));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_38_38));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Info_9;

    hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_Info_9);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Info_9));
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(
  MR_Word tscc_proc_1_input_1_Goal_5,
  MR_Word tscc_proc_1_input_2_QuantVars_6,
  MR_Word tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_96)
{
  {
    MR_Word tscc_proc_2_input_1_X_7;
    MR_Word tscc_proc_2_input_2_RHS_8;
    MR_Word tscc_proc_2_input_3_GoalInfo_9;
    MR_Word tscc_proc_2_input_4_QuantVars_10;
    MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_96;

    // The code for TSCC PROC 1: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal/4-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal/4-0
    // proc 2 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_unify/6-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Goal_5 = tscc_proc_1_input_1_Goal_5;
      MR_Word QuantVars_6 = tscc_proc_1_input_2_QuantVars_6;
      MR_Word STATE_VARIABLE_Info_0_95 = tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
      MR_Word STATE_VARIABLE_Info_96;
      MR_bool succeeded;
      MR_Word GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0)));
      MR_Word GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_15 = (MR_Word) MR_body(((MR_Word) GoalExpr_8), (MR_Integer) 0);
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_15;
            MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
            tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
            tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 0)));
            MR_Word RHS_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 1)));
            MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 2)));
            MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 3)));
            MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 4)));
            MR_Word next_value_of_tscc_proc_2_input_1_X_7 = Var_65;
            MR_Word next_value_of_tscc_proc_2_input_2_RHS_8 = RHS_66;
            MR_Word next_value_of_tscc_proc_2_input_3_GoalInfo_9 = GoalInfo_9;
            MR_Word next_value_of_tscc_proc_2_input_4_QuantVars_10 = QuantVars_6;
            MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_95;

            // direct tailcall eliminated
            tscc_proc_2_input_1_X_7 = next_value_of_tscc_proc_2_input_1_X_7;
            tscc_proc_2_input_2_RHS_8 = next_value_of_tscc_proc_2_input_2_RHS_8;
            tscc_proc_2_input_3_GoalInfo_9 = next_value_of_tscc_proc_2_input_3_GoalInfo_9;
            tscc_proc_2_input_4_QuantVars_10 = next_value_of_tscc_proc_2_input_4_QuantVars_10;
            tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 2)));
            MR_Word NonLocals_141;
            MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 0)));
            MR_Integer Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 1)));
            MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 3)));
            MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 4)));
            MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 5)));

            NonLocals_141 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Args_55, GoalInfo_9, NonLocals_141, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
                MR_Word Args0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
                MR_Word Args1_64;
                MR_Word NonLocals_142;
                MR_Word Args_143;
                MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3)));
                MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4)));
                MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 5)));

                hlds__goal_util__generic_call_vars_2_p_0(GenericCall_59, &Args1_64);
                Args_143 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[1], Args0_60, Args1_64);
                NonLocals_142 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Args_143, GoalInfo_9, NonLocals_142, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
                MR_Word PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
                MR_Integer ProcId_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3)));
                MR_Word PragmaImpl_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 7)));
                MR_Word Context_76;
                MR_Word Lang_77;
                MR_Word NamesModes_78;
                MR_Word PragmaSpecs_79;
                MR_Word Var_108;
                MR_Word Args_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4)));
                MR_Word Var_148;
                MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 5)));
                MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 6)));
                MR_Word Var_149;
                MR_Word Var_150;
                MR_Word Var_151;
                MR_Word Var_152;
                MR_Word Var_153;
                MR_Box conv2_STATE_VARIABLE_Info_96;

                Context_76 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
                Lang_77 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_70);
                NamesModes_78 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[0], (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_6[0], Args_144);
                Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
                Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
                Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
                Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
                Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
                Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
                Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(Var_108, PragmaImpl_75, Lang_77, NamesModes_78, Context_76, Var_148, PredId_71, ProcId_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &PragmaSpecs_79);
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_6[1], PragmaSpecs_79, ((MR_Box) (STATE_VARIABLE_Info_0_95)), &conv2_STATE_VARIABLE_Info_96);
                STATE_VARIABLE_Info_96 = ((MR_Word) conv2_STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
                MR_Word _ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_11, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_135, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3)));
                MR_Word _Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
                MR_Word _CanFail_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(Cases_14, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
                MR_Word SubGoal_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) Reason_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Reason_16, (MR_Integer) 0)));
                      MR_Word SubQuantVars_23;
                      MR_Word STATE_VARIABLE_Info_129_129;
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                      if ((Vars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        SubQuantVars_23 = QuantVars_6;
                        STATE_VARIABLE_Info_129_129 = STATE_VARIABLE_Info_0_95;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_160_160;
                        MR_Word SubGoalVars_21;
                        MR_Word EmptySet_22;

                        SubGoalVars_21 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_136);
                        TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        parse_tree__set_of_var__init_1_p_0(TypeCtorInfo_160_160, &EmptySet_22);
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_17, GoalInfo_9, EmptySet_22, SubGoalVars_21, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_129_129);
                        parse_tree__set_of_var__insert_list_3_p_0(TypeCtorInfo_160_160, Vars_17, QuantVars_6, &SubQuantVars_23);
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_136;
                      next_value_of_tscc_proc_1_input_2_QuantVars_6 = SubQuantVars_23;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_129_129;
                      tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                      tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word HeadWarning_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Reason_16, (MR_Integer) 0)));
                      MR_Word TailWarnings_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Reason_16, (MR_Integer) 1)));

                      succeeded = (HeadWarning_24 == (MR_Integer) 0);
                      if (!(succeeded))
                      {
                        succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, ((MR_Box) ((MR_Integer) 0)), TailWarnings_25);
                      }
                      if (succeeded)
                        STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_0_95;
                      else
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_136;
                        MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                        MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                        // direct tailcall eliminated
                        tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                        tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                        tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Vars_187 = ((MR_Word) (MR_hl_field(MR_mktag(2), Reason_16, (MR_Integer) 0)));
                      MR_Word SubQuantVars_192;
                      MR_Word STATE_VARIABLE_Info_129_193;
                      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), Reason_16, (MR_Integer) 1)));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                      if ((Vars_187 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        SubQuantVars_192 = QuantVars_6;
                        STATE_VARIABLE_Info_129_193 = STATE_VARIABLE_Info_0_95;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_160_181;
                        MR_Word SubGoalVars_179;
                        MR_Word EmptySet_180;

                        SubGoalVars_179 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_136);
                        TypeCtorInfo_160_181 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        parse_tree__set_of_var__init_1_p_0(TypeCtorInfo_160_181, &EmptySet_180);
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_187, GoalInfo_9, EmptySet_180, SubGoalVars_179, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_129_193);
                        parse_tree__set_of_var__insert_list_3_p_0(TypeCtorInfo_160_181, Vars_187, QuantVars_6, &SubQuantVars_192);
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_136;
                      next_value_of_tscc_proc_1_input_2_QuantVars_6 = SubQuantVars_192;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_129_193;
                      tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                      tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_16, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 7:
                        {
                          MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_136;
                          MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                          // direct tailcall eliminated
                          tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                          tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                          tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                          goto top_of_proc_1;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word TermVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_16, (MR_Integer) 1)));
                          MR_Word NonLocals_40;
                          MR_Word Var_123;
                          MR_Word _Kind_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_16, (MR_Integer) 2)));

                          NonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                          {
                            Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (TermVar_38));
                            MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_123, GoalInfo_9, NonLocals_40, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
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
                MR_Word Cond_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
                MR_Word Then_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3)));
                MR_Word Else_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4)));
                MR_Word CondThenQuantVars_52;
                MR_Word STATE_VARIABLE_Info_116_116;
                MR_Word STATE_VARIABLE_Info_117_117;
                MR_Word STATE_VARIABLE_Info_118_118;
                MR_Word Vars_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                if ((Vars_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  STATE_VARIABLE_Info_116_116 = STATE_VARIABLE_Info_0_95;
                else
                {
                  MR_Word TypeCtorInfo_162_162;
                  MR_Word CondVars_49;
                  MR_Word ThenVars_50;
                  MR_Word CondThenVars_51;
                  MR_Word EmptySet_137;

                  CondVars_49 = hlds__quantification__free_goal_vars_1_f_0(Cond_44);
                  ThenVars_50 = hlds__quantification__free_goal_vars_1_f_0(Then_45);
                  TypeCtorInfo_162_162 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  parse_tree__set_of_var__union_3_p_0(TypeCtorInfo_162_162, CondVars_49, ThenVars_50, &CondThenVars_51);
                  parse_tree__set_of_var__init_1_p_0(TypeCtorInfo_162_162, &EmptySet_137);
                  hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_139, GoalInfo_9, EmptySet_137, CondThenVars_51, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_116_116);
                }
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Vars_139, QuantVars_6, &CondThenQuantVars_52);
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Cond_44, CondThenQuantVars_52, STATE_VARIABLE_Info_116_116, &STATE_VARIABLE_Info_117_117);
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Then_45, CondThenQuantVars_52, STATE_VARIABLE_Info_117_117, &STATE_VARIABLE_Info_118_118);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Goal_5 = Else_46;
                next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_118_118;
                tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ShortHand_80)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalB_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ShortHand_80, (MR_Integer) 1)));
                      MR_Word Goal_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), ShortHand_80, (MR_Integer) 0)));
                      MR_Word Goals_200;
                      MR_Word STATE_VARIABLE_Info_15_205;

                      {
                        Goals_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Goals_200, 0) = ((MR_Box) (GoalB_94));
                        MR_hl_field(MR_mktag(1), Goals_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Goal_199, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_15_205);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_200, QuantVars_6, STATE_VARIABLE_Info_15_205, &STATE_VARIABLE_Info_96);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Inner_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 2)));
                      MR_Word MainGoal_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 4)));
                      MR_Word OrElseGoals_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 5)));
                      MR_Word InnerDI_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), Inner_83, (MR_Integer) 0)));
                      MR_Word InnerUO_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Inner_83, (MR_Integer) 1)));
                      MR_Word InsideQuantVars_90;
                      MR_Word Var_102;
                      MR_Word Var_103;
                      MR_Word STATE_VARIABLE_Info_105_105;
                      MR_Word _GoalType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 0)));
                      MR_Word _Outer_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 1)));
                      MR_Word _MaybeOutputVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 3)));
                      MR_Word _OrElseInners_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 6)));

                      {
                        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (InnerUO_89));
                        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (InnerDI_88));
                        MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
                      }
                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_102, QuantVars_6, &InsideQuantVars_90);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(MainGoal_85, InsideQuantVars_90, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_105_105);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(OrElseGoals_86, InsideQuantVars_90, STATE_VARIABLE_Info_105_105, &STATE_VARIABLE_Info_96);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_80, (MR_Integer) 2)));
                      MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_80, (MR_Integer) 0)));
                      MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_80, (MR_Integer) 1)));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_145;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                      // direct tailcall eliminated
                      tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                      tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_96;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word X_7 = tscc_proc_2_input_1_X_7;
      MR_Word RHS_8 = tscc_proc_2_input_2_RHS_8;
      MR_Word GoalInfo_9 = tscc_proc_2_input_3_GoalInfo_9;
      MR_Word QuantVars_10 = tscc_proc_2_input_4_QuantVars_10;
      MR_Word STATE_VARIABLE_Info_0_29 = tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29;
      MR_Word STATE_VARIABLE_Info_30;

      switch (MR_tag((MR_Word) RHS_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_8, (MR_Integer) 0)));
            MR_Word NonLocals_13;
            MR_Word Var_38;
            MR_Word Var_40;

            NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Y_12));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_38, GoalInfo_9, NonLocals_13, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ys_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_8, (MR_Integer) 2)));
            MR_Word Var_36;
            MR_Word NonLocals_42;
            MR_Word _ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_8, (MR_Integer) 0)));
            MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_8, (MR_Integer) 1)));

            NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Ys_16));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_36, GoalInfo_9, NonLocals_42, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LambdaVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 3)));
            MR_Word LambdaGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 6)));
            MR_Word LambdaGoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaGoal_25, (MR_Integer) 1)));
            MR_Word LambdaNonLocals_28;
            MR_Word STATE_VARIABLE_Info_31_31;
            MR_Word Var_32;
            MR_Word STATE_VARIABLE_Info_33_33;
            MR_Word NonLocals_43;
            MR_Word _Purity_17 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 0)))) & (MR_Integer) 3);
            MR_Word _Groundness_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word _PredOrFunc_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word _NonLocals_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 2)));
            MR_Word _Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 4)));
            MR_Word _Det_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 5)));
            MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaGoal_25, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
            MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

            LambdaNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_27);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(LambdaVars_22, GoalInfo_9, LambdaNonLocals_28, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_31_31);
            NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_32, GoalInfo_9, NonLocals_43, QuantVars_10, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_33_33);
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Goal_5 = LambdaGoal_25;
            next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_10;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_33_33;
            tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
            tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
            tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
            goto top_of_proc_1;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_30;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_96 = tscc_output_1_STATE_VARIABLE_Info_96;
    return;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_6_p_0(
  MR_Word tscc_proc_2_input_1_X_7,
  MR_Word tscc_proc_2_input_2_RHS_8,
  MR_Word tscc_proc_2_input_3_GoalInfo_9,
  MR_Word tscc_proc_2_input_4_QuantVars_10,
  MR_Word tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_96)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_5;
    MR_Word tscc_proc_1_input_2_QuantVars_6;
    MR_Word tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
    MR_Word tscc_output_1_STATE_VARIABLE_Info_96;

    // The code for TSCC PROC 2: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_unify/6-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal/4-0
    // proc 2 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_unify/6-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Goal_5 = tscc_proc_1_input_1_Goal_5;
      MR_Word QuantVars_6 = tscc_proc_1_input_2_QuantVars_6;
      MR_Word STATE_VARIABLE_Info_0_95 = tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
      MR_Word STATE_VARIABLE_Info_96;
      MR_bool succeeded;
      MR_Word GoalExpr_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0)));
      MR_Word GoalInfo_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_15 = (MR_Word) MR_body(((MR_Word) GoalExpr_8), (MR_Integer) 0);
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_15;
            MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
            tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
            tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 0)));
            MR_Word RHS_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 1)));
            MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 2)));
            MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 3)));
            MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 4)));
            MR_Word next_value_of_tscc_proc_2_input_1_X_7 = Var_65;
            MR_Word next_value_of_tscc_proc_2_input_2_RHS_8 = RHS_66;
            MR_Word next_value_of_tscc_proc_2_input_3_GoalInfo_9 = GoalInfo_9;
            MR_Word next_value_of_tscc_proc_2_input_4_QuantVars_10 = QuantVars_6;
            MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_95;

            // direct tailcall eliminated
            tscc_proc_2_input_1_X_7 = next_value_of_tscc_proc_2_input_1_X_7;
            tscc_proc_2_input_2_RHS_8 = next_value_of_tscc_proc_2_input_2_RHS_8;
            tscc_proc_2_input_3_GoalInfo_9 = next_value_of_tscc_proc_2_input_3_GoalInfo_9;
            tscc_proc_2_input_4_QuantVars_10 = next_value_of_tscc_proc_2_input_4_QuantVars_10;
            tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Args_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 2)));
            MR_Word NonLocals_141;
            MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 0)));
            MR_Integer Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 1)));
            MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 3)));
            MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 4)));
            MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 5)));

            NonLocals_141 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Args_55, GoalInfo_9, NonLocals_141, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
                MR_Word Args0_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
                MR_Word Args1_64;
                MR_Word NonLocals_142;
                MR_Word Args_143;
                MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3)));
                MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4)));
                MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 5)));

                hlds__goal_util__generic_call_vars_2_p_0(GenericCall_59, &Args1_64);
                Args_143 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[1], Args0_60, Args1_64);
                NonLocals_142 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Args_143, GoalInfo_9, NonLocals_142, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
                MR_Word PredId_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
                MR_Integer ProcId_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3)));
                MR_Word PragmaImpl_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 7)));
                MR_Word Context_76;
                MR_Word Lang_77;
                MR_Word NamesModes_78;
                MR_Word PragmaSpecs_79;
                MR_Word Var_108;
                MR_Word Args_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4)));
                MR_Word Var_148;
                MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 5)));
                MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 6)));
                MR_Word Var_149;
                MR_Word Var_150;
                MR_Word Var_151;
                MR_Word Var_152;
                MR_Word Var_153;
                MR_Box conv2_STATE_VARIABLE_Info_96;

                Context_76 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
                Lang_77 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_70);
                NamesModes_78 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[0], (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_6[0], Args_144);
                Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0)));
                Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1)));
                Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 2)));
                Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 3)));
                Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 4)));
                Var_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 5)));
                Var_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 6)));
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(Var_108, PragmaImpl_75, Lang_77, NamesModes_78, Context_76, Var_148, PredId_71, ProcId_72, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &PragmaSpecs_79);
                mercury__list__foldl_4_p_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, (MR_Word) &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0, (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_6[1], PragmaSpecs_79, ((MR_Box) (STATE_VARIABLE_Info_0_95)), &conv2_STATE_VARIABLE_Info_96);
                STATE_VARIABLE_Info_96 = ((MR_Word) conv2_STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
                MR_Word _ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_11, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_135, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3)));
                MR_Word _Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
                MR_Word _CanFail_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(Cases_14, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
                MR_Word SubGoal_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));

                switch (MR_tag((MR_Word) Reason_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Vars_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Reason_16, (MR_Integer) 0)));
                      MR_Word SubQuantVars_23;
                      MR_Word STATE_VARIABLE_Info_129_129;
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                      if ((Vars_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        SubQuantVars_23 = QuantVars_6;
                        STATE_VARIABLE_Info_129_129 = STATE_VARIABLE_Info_0_95;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_160_160;
                        MR_Word SubGoalVars_21;
                        MR_Word EmptySet_22;

                        SubGoalVars_21 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_136);
                        TypeCtorInfo_160_160 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        parse_tree__set_of_var__init_1_p_0(TypeCtorInfo_160_160, &EmptySet_22);
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_17, GoalInfo_9, EmptySet_22, SubGoalVars_21, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_129_129);
                        parse_tree__set_of_var__insert_list_3_p_0(TypeCtorInfo_160_160, Vars_17, QuantVars_6, &SubQuantVars_23);
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_136;
                      next_value_of_tscc_proc_1_input_2_QuantVars_6 = SubQuantVars_23;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_129_129;
                      tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                      tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word HeadWarning_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), Reason_16, (MR_Integer) 0)));
                      MR_Word TailWarnings_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Reason_16, (MR_Integer) 1)));

                      succeeded = (HeadWarning_24 == (MR_Integer) 0);
                      if (!(succeeded))
                      {
                        succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0, ((MR_Box) ((MR_Integer) 0)), TailWarnings_25);
                      }
                      if (succeeded)
                        STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_0_95;
                      else
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_136;
                        MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                        MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                        // direct tailcall eliminated
                        tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                        tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                        tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Vars_187 = ((MR_Word) (MR_hl_field(MR_mktag(2), Reason_16, (MR_Integer) 0)));
                      MR_Word SubQuantVars_192;
                      MR_Word STATE_VARIABLE_Info_129_193;
                      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), Reason_16, (MR_Integer) 1)));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                      if ((Vars_187 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        SubQuantVars_192 = QuantVars_6;
                        STATE_VARIABLE_Info_129_193 = STATE_VARIABLE_Info_0_95;
                      }
                      else
                      {
                        MR_Word TypeCtorInfo_160_181;
                        MR_Word SubGoalVars_179;
                        MR_Word EmptySet_180;

                        SubGoalVars_179 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_136);
                        TypeCtorInfo_160_181 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                        parse_tree__set_of_var__init_1_p_0(TypeCtorInfo_160_181, &EmptySet_180);
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_187, GoalInfo_9, EmptySet_180, SubGoalVars_179, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_129_193);
                        parse_tree__set_of_var__insert_list_3_p_0(TypeCtorInfo_160_181, Vars_187, QuantVars_6, &SubQuantVars_192);
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_136;
                      next_value_of_tscc_proc_1_input_2_QuantVars_6 = SubQuantVars_192;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_129_193;
                      tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                      tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_16, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 7:
                        {
                          MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_136;
                          MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                          // direct tailcall eliminated
                          tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                          tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                          tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                          goto top_of_proc_1;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word TermVar_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_16, (MR_Integer) 1)));
                          MR_Word NonLocals_40;
                          MR_Word Var_123;
                          MR_Word _Kind_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_16, (MR_Integer) 2)));

                          NonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                          {
                            Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (TermVar_38));
                            MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_123, GoalInfo_9, NonLocals_40, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
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
                MR_Word Cond_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2)));
                MR_Word Then_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3)));
                MR_Word Else_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4)));
                MR_Word CondThenQuantVars_52;
                MR_Word STATE_VARIABLE_Info_116_116;
                MR_Word STATE_VARIABLE_Info_117_117;
                MR_Word STATE_VARIABLE_Info_118_118;
                MR_Word Vars_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                if ((Vars_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  STATE_VARIABLE_Info_116_116 = STATE_VARIABLE_Info_0_95;
                else
                {
                  MR_Word TypeCtorInfo_162_162;
                  MR_Word CondVars_49;
                  MR_Word ThenVars_50;
                  MR_Word CondThenVars_51;
                  MR_Word EmptySet_137;

                  CondVars_49 = hlds__quantification__free_goal_vars_1_f_0(Cond_44);
                  ThenVars_50 = hlds__quantification__free_goal_vars_1_f_0(Then_45);
                  TypeCtorInfo_162_162 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
                  parse_tree__set_of_var__union_3_p_0(TypeCtorInfo_162_162, CondVars_49, ThenVars_50, &CondThenVars_51);
                  parse_tree__set_of_var__init_1_p_0(TypeCtorInfo_162_162, &EmptySet_137);
                  hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_139, GoalInfo_9, EmptySet_137, CondThenVars_51, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_116_116);
                }
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Vars_139, QuantVars_6, &CondThenQuantVars_52);
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Cond_44, CondThenQuantVars_52, STATE_VARIABLE_Info_116_116, &STATE_VARIABLE_Info_117_117);
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Then_45, CondThenQuantVars_52, STATE_VARIABLE_Info_117_117, &STATE_VARIABLE_Info_118_118);
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_Goal_5 = Else_46;
                next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_118_118;
                tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                goto top_of_proc_1;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ShortHand_80)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalB_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ShortHand_80, (MR_Integer) 1)));
                      MR_Word Goal_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), ShortHand_80, (MR_Integer) 0)));
                      MR_Word Goals_200;
                      MR_Word STATE_VARIABLE_Info_15_205;

                      {
                        Goals_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Goals_200, 0) = ((MR_Box) (GoalB_94));
                        MR_hl_field(MR_mktag(1), Goals_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Goal_199, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_15_205);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_200, QuantVars_6, STATE_VARIABLE_Info_15_205, &STATE_VARIABLE_Info_96);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Inner_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 2)));
                      MR_Word MainGoal_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 4)));
                      MR_Word OrElseGoals_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 5)));
                      MR_Word InnerDI_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), Inner_83, (MR_Integer) 0)));
                      MR_Word InnerUO_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Inner_83, (MR_Integer) 1)));
                      MR_Word InsideQuantVars_90;
                      MR_Word Var_102;
                      MR_Word Var_103;
                      MR_Word STATE_VARIABLE_Info_105_105;
                      MR_Word _GoalType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 0)));
                      MR_Word _Outer_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 1)));
                      MR_Word _MaybeOutputVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 3)));
                      MR_Word _OrElseInners_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 6)));

                      {
                        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (InnerUO_89));
                        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (InnerDI_88));
                        MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
                      }
                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_102, QuantVars_6, &InsideQuantVars_90);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(MainGoal_85, InsideQuantVars_90, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_105_105);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(OrElseGoals_86, InsideQuantVars_90, STATE_VARIABLE_Info_105_105, &STATE_VARIABLE_Info_96);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_145 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_80, (MR_Integer) 2)));
                      MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_80, (MR_Integer) 0)));
                      MR_Word Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_80, (MR_Integer) 1)));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_145;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                      // direct tailcall eliminated
                      tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                      tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                      goto top_of_proc_1;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_96;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word X_7 = tscc_proc_2_input_1_X_7;
      MR_Word RHS_8 = tscc_proc_2_input_2_RHS_8;
      MR_Word GoalInfo_9 = tscc_proc_2_input_3_GoalInfo_9;
      MR_Word QuantVars_10 = tscc_proc_2_input_4_QuantVars_10;
      MR_Word STATE_VARIABLE_Info_0_29 = tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29;
      MR_Word STATE_VARIABLE_Info_30;

      switch (MR_tag((MR_Word) RHS_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Y_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), RHS_8, (MR_Integer) 0)));
            MR_Word NonLocals_13;
            MR_Word Var_38;
            MR_Word Var_40;

            NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Y_12));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_38, GoalInfo_9, NonLocals_13, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ys_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_8, (MR_Integer) 2)));
            MR_Word Var_36;
            MR_Word NonLocals_42;
            MR_Word _ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_8, (MR_Integer) 0)));
            MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), RHS_8, (MR_Integer) 1)));

            NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Ys_16));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_36, GoalInfo_9, NonLocals_42, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word LambdaVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 3)));
            MR_Word LambdaGoal_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 6)));
            MR_Word LambdaGoalInfo_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaGoal_25, (MR_Integer) 1)));
            MR_Word LambdaNonLocals_28;
            MR_Word STATE_VARIABLE_Info_31_31;
            MR_Word Var_32;
            MR_Word STATE_VARIABLE_Info_33_33;
            MR_Word NonLocals_43;
            MR_Word _Purity_17 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 0)))) & (MR_Integer) 3);
            MR_Word _Groundness_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word _PredOrFunc_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word _NonLocals_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 2)));
            MR_Word _Modes_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 4)));
            MR_Word _Det_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 5)));
            MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaGoal_25, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
            MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

            LambdaNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_27);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(LambdaVars_22, GoalInfo_9, LambdaNonLocals_28, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_31_31);
            NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_32, GoalInfo_9, NonLocals_43, QuantVars_10, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_33_33);
            // direct tailcall eliminated
            next_value_of_tscc_proc_1_input_1_Goal_5 = LambdaGoal_25;
            next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_10;
            next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_33_33;
            tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
            tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
            tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
            goto top_of_proc_1;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_30;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_Info_96 = tscc_output_1_STATE_VARIABLE_Info_96;
    return;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word QuantVars_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
    else
    {
      MR_Word Case_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cases_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Goal_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_9, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_Info_18_18;
      MR_Word _MainConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_9, (MR_Integer) 0)));
      MR_Word _OtherConsIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_9, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_3;

      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Goal_15, QuantVars_2, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_18_18);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Cases_10;
      next_value_of_STATE_VARIABLE_Info_0_3 = STATE_VARIABLE_Info_18_18;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Info_0_3 = next_value_of_STATE_VARIABLE_Info_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word QuantVars_2,
  MR_Word STATE_VARIABLE_Info_0_3,
  MR_Word * STATE_VARIABLE_Info_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
    else
    {
      MR_Word Goal_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Info_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_3;

      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Goal_9, QuantVars_2, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_15_15);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Goals_10;
      next_value_of_STATE_VARIABLE_Info_0_3 = STATE_VARIABLE_Info_15_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Info_0_3 = next_value_of_STATE_VARIABLE_Info_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(
  MR_Word GoalVars_7,
  MR_Word GoalInfo_8,
  MR_Word NonLocals_9,
  MR_Word QuantVars_10,
  MR_Word STATE_VARIABLE_Info_0_25,
  MR_Word * STATE_VARIABLE_Info_26)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_95_95;
    MR_Word VarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
    MR_Word CallId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
    MR_Word Context_14;
    MR_Word SingleVars_15;
    MR_Word MultiVars_19;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Var_35;
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));

    Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (NonLocals_9));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (QuantVars_10));
      MR_hl_field(MR_mktag(0), Var_27, 5) = ((MR_Box) (VarSet_12));
    }
    TypeInfo_95_95 = (MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[1];
    mercury__list__filter_3_p_0(TypeInfo_95_95, Var_27, GoalVars_7, &SingleVars_15);
    succeeded = (SingleVars_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (!(succeeded))
    {
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_8, (MR_Integer) 14);
    }
    if (succeeded)
      STATE_VARIABLE_Info_31_31 = STATE_VARIABLE_Info_0_25;
    else
    {
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_8, (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word SingleHeadVars0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
        MR_Word SingleHeadVars_17;
        MR_Word STATE_VARIABLE_Info_30_30;
        MR_Word Var_32;
        MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
        MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
        MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
        MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
        MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
        MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_73;

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, SingleVars_15, SingleHeadVars0_16, &SingleHeadVars_17);
        Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0)));
        Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1)));
        Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2)));
        Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3)));
        Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4)));
        Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5)));
        Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 6)));
        {
          STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (SingleHeadVars_17));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (Var_66));
        }
        Var_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
        Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 0)));
        Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 1)));
        Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 2)));
        Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 3)));
        Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 4)));
        Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 5)));
        Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 6)));
        {
          STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 1) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 2) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 3) = ((MR_Box) (Var_70));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 4) = ((MR_Box) (Var_71));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 5) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, 6) = ((MR_Box) (Var_32));
        }
      }
      else
      {
        MR_Word SingleSpec_18;

        hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 0, Context_14, CallId_13, VarSet_12, SingleVars_15, &SingleSpec_18);
        hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(SingleSpec_18, STATE_VARIABLE_Info_0_25, &STATE_VARIABLE_Info_31_31);
      }
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (NonLocals_9));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (VarSet_12));
    }
    mercury__list__filter_3_p_0(TypeInfo_95_95, Var_35, GoalVars_7, &MultiVars_19);
    if ((MultiVars_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_31_31;
    else
    {
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_8, (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word MultiHeadVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 5)));
        MR_Word MultiHeadVars_23;
        MR_Word STATE_VARIABLE_Info_37_37;
        MR_Word Var_39;
        MR_Word Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 0)));
        MR_Word Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 1)));
        MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 2)));
        MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3)));
        MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 4)));
        MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 6)));
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_86;
        MR_Word Var_85;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;
        MR_Word Var_93;

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, MultiVars_19, MultiHeadVars0_22, &MultiHeadVars_23);
        Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 0)));
        Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 1)));
        Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 2)));
        Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3)));
        Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 4)));
        Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 5)));
        Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 6)));
        {
          STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (MultiHeadVars_23));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) (Var_86));
        }
        Var_39 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
        Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 0)));
        Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
        Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 2)));
        Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 3)));
        Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 4)));
        Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 5)));
        Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 6)));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_Info_26 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_87));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_88));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_90));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_91));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_92));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_39));
        }
      }
      else
      {
        MR_Word MultiSpec_24;

        hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 1, Context_14, CallId_13, VarSet_12, MultiVars_19, &MultiSpec_24);
        hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(MultiSpec_24, STATE_VARIABLE_Info_31_31, STATE_VARIABLE_Info_26);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(
  MR_Word Spec_4,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Specs0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3)));
    MR_Word Specs_7;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1)));
    MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2)));
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6)));

    {
      Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Specs_7, 0) = ((MR_Box) (Spec_4));
      MR_hl_field(MR_mktag(1), Specs_7, 1) = ((MR_Box) (Specs0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_Info_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Specs_7));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_16));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_83;

    conv0_HeadVar__3_83 = hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__477__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_83));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0(
  MR_Word SingleMulti_7,
  MR_Word Context_8,
  MR_Word CallId_9,
  MR_Word VarSet_10,
  MR_Word Vars_11,
  MR_Word * Spec_12)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_81_81;
    MR_String Count_13;
    MR_Word Preamble_14;
    MR_Word VarStrs0_15;
    MR_Word VarStrs_16;
    MR_Word VarsPiece_17;
    MR_Word Pieces_19;
    MR_Word Msg_20;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_32;
    MR_String Var_33;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_78;
    MR_Word Var_35;
    MR_String Var_18;

    switch (SingleMulti_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        Count_13 = (MR_String) "more than once";
        break;
      case (MR_Integer) 0:
        Count_13 = (MR_String) "only once";
        break;
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
      MR_hl_field(MR_mktag(3), Var_25, 1) = ((MR_Box) (CallId_9));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])));
    }
    {
      Preamble_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Preamble_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[47])));
      MR_hl_field(MR_mktag(1), Preamble_14, 1) = ((MR_Box) (Var_24));
    }
    TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (VarSet_10));
    }
    VarStrs0_15 = mercury__list__map_2_f_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[1], TypeCtorInfo_81_81, Var_32, Vars_11);
    mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_81_81, VarStrs0_15, &VarStrs_16);
    Var_33 = mercury__string__join_list_2_f_0((MR_String) ", ", VarStrs_16);
    {
      VarsPiece_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), VarsPiece_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), VarsPiece_17, 1) = ((MR_Box) (Var_33));
    }
    succeeded = ((MR_tag((MR_Word) VarStrs_16)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_18 = ((MR_String) (MR_hl_field(MR_mktag(1), VarStrs_16, (MR_Integer) 0)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), VarStrs_16, (MR_Integer) 1)));
      succeeded = (Var_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_42;
      MR_Word Var_43;

      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Count_13));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[16])));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[48])));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (VarsPiece_17));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[30])));
        MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_38));
      }
    }
    else
    {
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_56;
      MR_Word Var_57;

      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_57, 1) = ((MR_Box) (Count_13));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[16])));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[49])));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (VarsPiece_17));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
      }
      {
        Pieces_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[33])));
        MR_hl_field(MR_mktag(1), Pieces_19, 1) = ((MR_Box) (Var_52));
      }
    }
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, Preamble_14, Pieces_19);
    {
      Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (Var_70));
    }
    {
      Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (((MR_Integer) 6 | (((MR_Integer) 1 << (MR_Integer) 10)))));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_68));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Msg_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_20, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Msg_20, 1) = ((MR_Box) (Var_64));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Msg_20));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *Spec_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[0])));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_78));
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_String conv0_Name_6;

    succeeded = hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv0_Name_6);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_Name_6));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PragmaImpl_12,
  MR_Word Lang_13,
  MR_Word Args_14,
  MR_Word Context_15,
  MR_Word SimpleCallId_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word STATE_VARIABLE_Specs_0_31,
  MR_Word * STATE_VARIABLE_Specs_32)
{
  {
    MR_bool succeeded;
    MR_String LangStr_20;
    MR_String Code_21;
    MR_Word C_CodeList_23;
    MR_Word UnmentionedVars_24;
    MR_Word Var_33;
    MR_Word STATE_VARIABLE_Specs_78_78;
    MR_Word CharList_87;
    MR_Word Var_22;

    LangStr_20 = libs__globals__foreign_language_string_1_f_0(Lang_13);
    Code_21 = ((MR_String) (MR_hl_field(MR_mktag(0), PragmaImpl_12, (MR_Integer) 0)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), PragmaImpl_12, (MR_Integer) 1)));
    mercury__string__to_char_list_2_p_0(Code_21, &CharList_87);
    hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(CharList_87, &C_CodeList_23);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (C_CodeList_23));
    }
    mercury__list__filter_map_3_p_0((MR_Word) &hlds__make_hlds__make_hlds_warn_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Var_33, Args_14, &UnmentionedVars_24);
    if ((UnmentionedVars_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_Specs_78_78 = STATE_VARIABLE_Specs_0_31;
    else
    {
      MR_Word TypeCtorInfo_84_84 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
      MR_Word Pieces_27;
      MR_Word Msg_28;
      MR_Word Spec_30;
      MR_Word Var_34;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_55;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_76;

      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (LangStr_20));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
        MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (SimpleCallId_16));
      }
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[45])));
        MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
      }
      Var_51 = hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(UnmentionedVars_24);
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_38));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[10])));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[46])));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_55));
      }
      Var_50 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_84_84, Var_51, Var_52);
      Pieces_27 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_84_84, Var_34, Var_50);
      {
        Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Pieces_27));
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
        MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (((MR_Integer) 6 | (((MR_Integer) 1 << (MR_Integer) 10)))));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Msg_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_28, 0) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), Msg_28, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Msg_28));
        MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Spec_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[0])));
        MR_hl_field(MR_mktag(0), Spec_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
        MR_hl_field(MR_mktag(0), Spec_30, 2) = ((MR_Box) (Var_76));
      }
      {
        STATE_VARIABLE_Specs_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_78_78, 0) = ((MR_Box) (Spec_30));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_78_78, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_31));
      }
    }
    hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(ModuleInfo_11, Lang_13, Context_15, SimpleCallId_16, PredId_17, ProcId_18, C_CodeList_23, STATE_VARIABLE_Specs_78_78, STATE_VARIABLE_Specs_32);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Lang_11,
  MR_Word Context_12,
  MR_Word SimpleCallId_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word BodyPieces_16,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_bool succeeded;
    MR_Word PredInfo_18;
    MR_Word PredStatus_19;
    MR_Word IsImported_20;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, PredId_14, &PredInfo_18);
    hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_18, &PredStatus_19);
    IsImported_20 = hlds__status__pred_status_is_imported_1_f_0(PredStatus_19);
    switch (IsImported_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_Specs_23_23;

          hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(ModuleInfo_10, Lang_11, Context_12, SimpleCallId_13, PredId_14, ProcId_15, BodyPieces_16, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_23_23);
          switch (Lang_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "return")), BodyPieces_16);
                if (succeeded)
                {
                  MR_String LangStr_32;
                  MR_Word Pieces_33;
                  MR_Word Msg_34;
                  MR_Word Spec_36;
                  MR_Word Var_40;
                  MR_Word Var_41;
                  MR_Word Var_42;
                  MR_Word Var_45;
                  MR_Word Var_46;
                  MR_Word Var_59;
                  MR_Word Var_60;
                  MR_Word Var_63;
                  MR_Word Var_64;
                  MR_Word Var_72;

                  LangStr_32 = libs__globals__foreign_language_string_1_f_0(Lang_11);
                  {
                    Var_41 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_41, 0) = ((MR_Box) (LangStr_32));
                  }
                  {
                    Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                    MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) (SimpleCallId_13));
                  }
                  {
                    Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
                    MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[29])));
                  }
                  {
                    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
                    MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
                  }
                  {
                    Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
                    MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
                  }
                  {
                    Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[36])));
                    MR_hl_field(MR_mktag(1), Pieces_33, 1) = ((MR_Box) (Var_40));
                  }
                  {
                    Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (Pieces_33));
                  }
                  {
                    Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
                    MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (((MR_Integer) 53 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                    MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
                  }
                  {
                    Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                    MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Msg_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Msg_34, 0) = ((MR_Box) (Context_12));
                    MR_hl_field(MR_mktag(0), Msg_34, 1) = ((MR_Box) (Var_59));
                  }
                  {
                    Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Msg_34));
                    MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[2])));
                    MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                    MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_72));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_22 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_23_23));
                  }
                }
                else
                  *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_23_23;
              }
              break;
            case (MR_Integer) 3:
              *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_23_23;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Lang_11,
  MR_Word Context_12,
  MR_Word SimpleCallId_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word BodyPieces_16,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    MR_bool succeeded;
    MR_Word ProcInfo_18;
    MR_Word MaybeDeclDetism_19;

    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_10, PredId_14, ProcId_15, &ProcInfo_18);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_18, &MaybeDeclDetism_19);
    if ((MaybeDeclDetism_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
    else
    {
      MR_Word Detism_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeDeclDetism_19, (MR_Integer) 0)));

      switch (Detism_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
        case (MR_Integer) 0:
        case (MR_Integer) 6:
          {
            succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), BodyPieces_16);
            if (succeeded)
            {
              MR_String LangStr_22;
              MR_Word Pieces_23;
              MR_Word Msg_24;
              MR_Word Spec_26;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_70;
              MR_Word Var_73;
              MR_Word Var_74;
              MR_Word Var_87;
              MR_Word Var_88;
              MR_Word Var_91;
              MR_Word Var_92;
              MR_Word Var_100;

              LangStr_22 = libs__globals__foreign_language_string_1_f_0(Lang_11);
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_69, 0) = ((MR_Box) (LangStr_22));
              }
              {
                Var_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), Var_74, 1) = ((MR_Box) (SimpleCallId_13));
              }
              {
                Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
                MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[41])));
              }
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
                MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (Var_73));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
              }
              {
                Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[36])));
                MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_68));
              }
              {
                Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (Pieces_23));
              }
              {
                Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
                MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (((MR_Integer) 53 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_91));
              }
              {
                Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
                MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_87));
              }
              {
                Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Msg_24));
                MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Spec_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[2])));
                MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_100));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_28 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_26));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
              }
            }
            else
              *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
          }
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 1:
          {
            succeeded = mercury__list__member_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), BodyPieces_16);
            if (succeeded)
              *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
            else
            {
              MR_Word Var_31;
              MR_Word Var_32;
              MR_Word Var_33;
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_54;
              MR_Word Var_55;
              MR_Word Var_63;
              MR_String LangStr_103;
              MR_Word Pieces_104;
              MR_Word Msg_105;
              MR_Word Spec_107;

              LangStr_103 = libs__globals__foreign_language_string_1_f_0(Lang_11);
              {
                Var_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_32, 0) = ((MR_Box) (LangStr_103));
              }
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (SimpleCallId_13));
              }
              {
                Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
                MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[44])));
              }
              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
                MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
              }
              {
                Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
                MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
              }
              {
                Pieces_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_104, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[36])));
                MR_hl_field(MR_mktag(1), Pieces_104, 1) = ((MR_Box) (Var_31));
              }
              {
                Var_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (Pieces_104));
              }
              {
                Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Var_55));
                MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (((MR_Integer) 53 | (((MR_Integer) 1 << (MR_Integer) 10)))));
                MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Msg_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Msg_105, 0) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(0), Msg_105, 1) = ((MR_Box) (Var_50));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Msg_105));
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Spec_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Spec_107, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_2[2])));
                MR_hl_field(MR_mktag(0), Spec_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), Spec_107, 2) = ((MR_Box) (Var_63));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_28 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_107));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
              }
            }
          }
          break;
        case (MR_Integer) 7:
          *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
          break;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(
  MR_Word C_Code_3,
  MR_Word * List_4)
{
  {
    MR_Word NameCharList_5;
    MR_Word TheRest_6;

    hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(C_Code_3, &NameCharList_5, &TheRest_6);
    if ((NameCharList_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *List_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Names_9;
      MR_String Name_10;

      hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(TheRest_6, &Names_9);
      mercury__string__from_char_list_2_p_0(NameCharList_5, &Name_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *List_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Name_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Names_9));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Char C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word CodeChars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      succeeded = mercury__char__is_alnum_or_underscore_1_p_0(C_4);
      if (succeeded)
      {
        MR_Word NameCharList0_8;

        hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(CodeChars_5, &NameCharList0_8, HeadVar__3_3);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (C_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NameCharList0_8));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = CodeChars_5;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Char C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word CodeChars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      succeeded = mercury__char__is_alnum_or_underscore_1_p_0(C_4);
      if (succeeded)
      {
        MR_Word NameCharList0_8;

        hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(CodeChars_5, &NameCharList0_8, HeadVar__3_3);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (C_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NameCharList0_8));
        }
      }
      else
      {
        *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *HeadVar__3_3 = CodeChars_5;
      }
    }
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(
  MR_Word UnmentionedVars_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) UnmentionedVars_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word Pieces_4;
    MR_String Var_5;
    MR_Word Var_6;

    if (succeeded)
    {
      Var_5 = ((MR_String) (MR_hl_field(MR_mktag(1), UnmentionedVars_3, (MR_Integer) 0)));
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnmentionedVars_3, (MR_Integer) 1)));
      succeeded = (Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Word Var_10;

      {
        Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (Var_5));
      }
      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[32])));
      }
      {
        Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[30])));
        MR_hl_field(MR_mktag(1), Pieces_4, 1) = ((MR_Box) (Var_9));
      }
    }
    else
    {
      MR_Word Var_17;
      MR_Word Var_18;
      MR_String Var_19;
      MR_String Var_20;

      Var_20 = mercury__string__join_list_2_f_0((MR_String) ", ", UnmentionedVars_3);
      Var_19 = parse_tree__error_util__add_quotes_1_f_0(Var_20);
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[35])));
      }
      {
        Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[33])));
        MR_hl_field(MR_mktag(1), Pieces_4, 1) = ((MR_Box) (Var_17));
      }
    }
    return Pieces_4;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Spec_8;

    conv0_Spec_8 = hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Spec_8));
    return wrapper_arg_2;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0(
  MR_Word PredCallId_6,
  MR_Word VarSet_7,
  MR_Word Warnings_8,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  {
    MR_Word TypeCtorInfo_16_16 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0;
    MR_Word WarningSpecs_10;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (PredCallId_6));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (VarSet_7));
    }
    WarningSpecs_10 = mercury__list__map_2_f_0((MR_Word) &hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0, TypeCtorInfo_16_16, Var_13, Warnings_8);
    *STATE_VARIABLE_Specs_12 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_16_16, WarningSpecs_10, STATE_VARIABLE_Specs_0_11);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module hlds.make_hlds.make_hlds_warn.
