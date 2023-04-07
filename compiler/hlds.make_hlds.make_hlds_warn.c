/*
** Automatically generated from `make_hlds_warn.m'
** by the Mercury compiler,
** version 22.01.6-beta-2023-04-07
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
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
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
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
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"



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

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_single_or_multi_0[2];

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
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__491__1_2_f_0(
  MR_Word VarSet_10,
  MR_Word HeadVar__2_83);

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
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

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
  MR_Word PFSymNameArity_13,
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
  MR_Word PFSymNameArity_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word BodyPieces_16,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

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


static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_1[79][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_2[2][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_3[4][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_5[3][3];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_1[79][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In the"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "code for"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not occur in the"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "code."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "That macro is only defined within the body of"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "macro."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "MR_ALLOC_ID"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration may refer to the"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 29U)),
    ((MR_Box) ((MR_String) "foreign_code"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the body of this"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: variable"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has overlapping scopes."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: variables"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "each have overlapping scopes."))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occurs"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in this scope."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "occur"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "do"))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: the"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may set"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "SUCCESS_INDICATOR"))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it cannot fail."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[48]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not appear to set"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it can fail."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[53]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "statement."))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "return"))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[57])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "may contain a"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[51])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[55])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "disjunct contains more than one call"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[71])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration has no universally quantified variables"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[74]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[76])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[77])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_2[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_3[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_5[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_3[3])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__maybe__pti_maybe_1__plain_parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_arg_name_mode_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)
  }
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0 = {
  (MR_String) "sm_single",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1 = {
  (MR_String) "sm_multi",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_single_or_multi_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "single_or_multi",
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0 },
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_single_or_multi_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_arity_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0)
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
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0[1] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0
};

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "warn_info",
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0 },
  {     hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0,

};

static MR_String MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__491__1_2_f_0(
  MR_Word VarSet_10,
  MR_Word HeadVar__2_83)
{
  {
    MR_String HeadVar__3_84;

    HeadVar__3_84 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, HeadVar__2_83);
    return HeadVar__3_84;
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
    MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_24 == CastY_25);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        parse_tree__prog_data____Compare____pf_sym_name_arity_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[3]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[5]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[5]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                  mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
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
    MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_17 == CastY_18);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_21_21;
      MR_Word TypeInfo_22_22;
      MR_Word TypeInfo_23_23;
      MR_Word TypeInfo_24_24;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))));
      MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____pf_sym_name_arity_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          TypeInfo_21_21 = (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[3]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_22_22 = (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_23_23 = (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[5]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_23_23, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_24_24 = (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[5]);
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
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
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
    MR_bool succeeded = ((MR_tag((MR_Word) Goal_3)) == (MR_Integer) 2);
    MR_Word GoalA_6;
    MR_Word GoalB_7;

    if (succeeded)
    {
      GoalA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_3, (MR_Integer) 1))));
      GoalB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Goal_3, (MR_Integer) 2))));
      {
        MR_Word GoalListA_8;
        MR_Word GoalListB_9;

        hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(GoalA_6, &GoalListA_8);
        hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(GoalB_7, &GoalListB_9);
        *GoalList_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), GoalListA_8, GoalListB_9);
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *GoalList_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_3));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    MR_String Name_7;
    MR_String Var_8;

    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_4, Var_6);
    if (succeeded)
    {
      succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_5, Var_6, &Name_7);
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
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) (env_ptr_arg);

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
    struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) (env_ptr_arg);

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

      (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_5, Var_8);
      (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded = !((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded);
      if ((env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__succeeded)
      {
        (env).hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__TypeCtorInfo_14_14 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
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
    MR_bool succeeded = (MaybeArg_5 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_8;
    MR_String Var_9;
    MR_Word TypeCtorInfo_10_10;

    if (succeeded)
    {
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeArg_5, (MR_Integer) 0))));
      *Name_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0))));
      Var_9 = (MR_String) "_";
      succeeded = mercury__string__prefix_2_p_0(*Name_6, Var_9);
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_10_10 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
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
    MR_Word Spec_8;
    MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Warning_7, (MR_Integer) 0))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Warning_7, (MR_Integer) 1))));
    MR_Word Pieces1_11;
    MR_Word Pieces2_13;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_20, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Var_20, 1) = ((MR_Box) (PredCallId_5));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[10])));
    }
    {
      Pieces1_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces1_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[30])));
      MR_hl_field(MR_mktag(1), Pieces1_11, 1) = ((MR_Box) (Var_19));
    }
    if ((Vars_9 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.make_hlds_warn.quant_warning_to_spec\'/3", (MR_String) "Vars = []");
    else
    {
      MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 1))));
      MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Vars_9, (MR_Integer) 0))));

      if ((Var_65 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_42;
        MR_Word Var_43;
        MR_String Var_44;

        Var_44 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Var_66);
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[33])));
        }
        {
          Pieces2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces2_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[31])));
          MR_hl_field(MR_mktag(1), Pieces2_13, 1) = ((MR_Box) (Var_42));
        }
      }
      else
      {
        MR_Word Var_30;
        MR_Word Var_31;
        MR_String Var_32;

        Var_32 = parse_tree__parse_tree_out_term__mercury_vars_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Vars_9);
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_31, 1) = ((MR_Box) (Var_32));
        }
        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[36])));
        }
        {
          Pieces2_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces2_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[34])));
          MR_hl_field(MR_mktag(1), Pieces2_13, 1) = ((MR_Box) (Var_30));
        }
      }
    }
    Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_11, Pieces2_13);
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Spec_8, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.make_hlds_warn.quant_warning_to_spec\'/3"));
      MR_hl_field(MR_mktag(3), Spec_8, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 10) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), Spec_8, 3) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(3), Spec_8, 4) = ((MR_Box) (Var_58));
    }
    return Spec_8;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_suspicious_foreign_code_5_p_0(
  MR_Word Lang_6,
  MR_Word BodyCode_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) BodyCode_7)) == (MR_Integer) 1))
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
    else
    {
      MR_String Code_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), BodyCode_7, (MR_Integer) 0))));

      switch (Lang_6) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word C_CodeList_12;
            MR_Word CharList_54;

            mercury__string__to_char_list_2_p_0(Code_11, &CharList_54);
            hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(CharList_54, &C_CodeList_12);
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "MR_ALLOC_ID")), C_CodeList_12);
            if (succeeded)
            {
              MR_Word Spec_14;
              MR_Word Var_47;
              MR_Word Var_48;

              {
                Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (Context_8));
                MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[29])));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Spec_14, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_suspicious_foreign_code\'/5"));
                MR_hl_field(MR_mktag(3), Spec_14, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 59) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                MR_hl_field(MR_mktag(3), Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Spec_14, 3) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(MR_mktag(3), Spec_14, 4) = ((MR_Box) (Var_47));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_14));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
              }
            }
            else
              *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
          break;
      }
    }
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

    if ((UnivVars_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Pieces_25;
      MR_Word Spec_26;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_String Var_31;

      Var_31 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_8);
      {
        Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (Var_31));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[78])));
      }
      {
        Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[62])));
        MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_29));
      }
      {
        Spec_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.promise_ex_error\'/5"));
        MR_hl_field(MR_mktag(1), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(1), Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(1), Spec_26, 3) = ((MR_Box) (Context_10));
        MR_hl_field(MR_mktag(1), Spec_26, 4) = ((MR_Box) (Pieces_25));
      }
      {
        STATE_VARIABLE_Specs_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_17_17, 0) = ((MR_Box) (Spec_26));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_17_17, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_14));
      }
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

    hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_GoalList_4);
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
    MR_bool succeeded = ((((MR_tag((MR_Word) Goal_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
    MR_Word SubGoal_10;
    MR_Word Var_20;
    MR_Word Var_21;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      Var_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 1))) & (MR_Integer) 1);
      SubGoal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
      succeeded = (Var_20 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Var_21 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      MR_Word next_value_of_Goal_6 = SubGoal_10;

      // direct tailcall eliminated
      ;
      Goal_6 = next_value_of_Goal_6;
      continue;
    }
    else
    {
      succeeded = ((((MR_tag((MR_Word) Goal_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        MR_Word DisjList_14;
        MR_Word DisjConjList_15;

        hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(Goal_6, &DisjList_14);
        mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[2]), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[2]), DisjList_14, &DisjConjList_15);
        hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(PromiseType_5, DisjConjList_15, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
      }
      else
      {
        MR_Word Context_16;
        MR_Word SubGoal_35;
        MR_Word Var_25;
        MR_Word Var_26;

        succeeded = ((((MR_tag((MR_Word) Goal_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          Var_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 1))) & (MR_Integer) 1);
          Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 2))));
          SubGoal_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_6, (MR_Integer) 4))));
          succeeded = (Var_25 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (Var_26 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_String Var_27;
          MR_Word STATE_VARIABLE_Specs_28_28;
          MR_Word Pieces_47;
          MR_Word Spec_48;
          MR_Word Var_51;
          MR_Word Var_52;
          MR_String Var_53;
          MR_Word Var_54;
          MR_Word Var_57;
          MR_Word Var_59;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word next_value_of_Goal_6;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_18;

          Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "universal quantification should come before ", (MR_String) "the declaration name");
          Var_53 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_5);
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Var_27));
          }
          {
            Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])));
          }
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[64])));
            MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
          }
          {
            Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_59));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[63])));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (Var_54));
          }
          {
            Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[62])));
            MR_hl_field(MR_mktag(1), Pieces_47, 1) = ((MR_Box) (Var_51));
          }
          {
            Spec_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_48, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.promise_ex_error\'/5"));
            MR_hl_field(MR_mktag(1), Spec_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), Spec_48, 2) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(1), Spec_48, 3) = ((MR_Box) (Context_16));
            MR_hl_field(MR_mktag(1), Spec_48, 4) = ((MR_Box) (Pieces_47));
          }
          {
            STATE_VARIABLE_Specs_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_28_28, 0) = ((MR_Box) (Spec_48));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_28_28, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Goal_6 = SubGoal_35;
          next_value_of_STATE_VARIABLE_Specs_0_18 = STATE_VARIABLE_Specs_28_28;
          Goal_6 = next_value_of_Goal_6;
          STATE_VARIABLE_Specs_0_18 = next_value_of_STATE_VARIABLE_Specs_0_18;
          continue;
        }
        else
        {
          MR_Word Var_32;

          Var_32 = parse_tree__prog_item__get_goal_context_1_f_0(Goal_6);
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
    ;
    if ((DisjConjList_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
    else
    {
      MR_Word ConjList_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DisjConjList_6, (MR_Integer) 0))));
      MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DisjConjList_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_13_13;
      MR_Word next_value_of_DisjConjList_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(PromiseType_5, ConjList_8, (MR_Integer) 0, STATE_VARIABLE_Specs_0_10, &STATE_VARIABLE_Specs_13_13);
      // direct tailcall eliminated
      ;
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
    ;
    if ((Goals_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
    else
    {
      MR_Word HeadGoal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_7, (MR_Integer) 0))));
      MR_Word TailGoals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Goals_7, (MR_Integer) 1))));

      succeeded = ((MR_tag((MR_Word) HeadGoal_10)) == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word next_value_of_Goals_7 = TailGoals_11;

        // direct tailcall eliminated
        ;
        Goals_7 = next_value_of_Goals_7;
        continue;
      }
      else
      {
        MR_Word HeadSubGoal_18;
        MR_Word Var_26;
        MR_Word Var_27;

        succeeded = ((((MR_tag((MR_Word) HeadGoal_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadGoal_10, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadGoal_10, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
          Var_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadGoal_10, (MR_Integer) 1))) & (MR_Integer) 1);
          HeadSubGoal_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadGoal_10, (MR_Integer) 4))));
          succeeded = (Var_26 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Var_27 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word Var_28;
          MR_Word next_value_of_Goals_7;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (HeadSubGoal_18));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (TailGoals_11));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Goals_7 = Var_28;
          Goals_7 = next_value_of_Goals_7;
          continue;
        }
        else
        {
          MR_Word Context_19;

          succeeded = ((MR_tag((MR_Word) HeadGoal_10)) == (MR_Integer) 1);
          if (succeeded)
          {
            Context_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadGoal_10, (MR_Integer) 0))));
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
                    MR_Word Pieces_44;
                    MR_Word Spec_45;
                    MR_Word Var_48;
                    MR_Word Var_49;
                    MR_String Var_50;

                    Var_50 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_6);
                    {
                      Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
                    }
                    {
                      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
                      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[73])));
                    }
                    {
                      Pieces_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Pieces_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[62])));
                      MR_hl_field(MR_mktag(1), Pieces_44, 1) = ((MR_Box) (Var_48));
                    }
                    {
                      Spec_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Spec_45, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.promise_ex_error\'/5"));
                      MR_hl_field(MR_mktag(1), Spec_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), Spec_45, 2) = ((MR_Box) ((MR_Unsigned) 40U));
                      MR_hl_field(MR_mktag(1), Spec_45, 3) = ((MR_Box) (Context_19));
                      MR_hl_field(MR_mktag(1), Spec_45, 4) = ((MR_Box) (Pieces_44));
                    }
                    {
                      STATE_VARIABLE_Specs_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_31_31, 0) = ((MR_Box) (Spec_45));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_31_31, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
                    }
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
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

            Var_34 = parse_tree__prog_item__get_goal_context_1_f_0(HeadGoal_10);
            hlds__make_hlds__make_hlds_warn__promise_ex_error_5_p_0(PromiseType_6, Var_34, (MR_String) "disjunct is not a call or unification", STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_36_36);
            // direct tailcall eliminated
            ;
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
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  {
    MR_Word Pieces_10;
    MR_Word Spec_11;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_String Var_18;
    MR_Word Var_19;
    MR_Word Var_22;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Word Var_28;

    Var_18 = parse_tree__prog_out__promise_to_string_1_f_0(PromiseType_6);
    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (Var_18));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Message_8));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])));
    }
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[64])));
      MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_27));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[63])));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_19));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[62])));
      MR_hl_field(MR_mktag(1), Pieces_10, 1) = ((MR_Box) (Var_16));
    }
    {
      Spec_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Spec_11, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.promise_ex_error\'/5"));
      MR_hl_field(MR_mktag(1), Spec_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(1), Spec_11, 2) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(1), Spec_11, 3) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(1), Spec_11, 4) = ((MR_Box) (Pieces_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_12));
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalList_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Goal_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Goal_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word GoalA_6;
    MR_Word GoalB_7;

    if (succeeded)
    {
      GoalA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_3, (MR_Integer) 2))));
      GoalB_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Goal_3, (MR_Integer) 3))));
      {
        MR_Word GoalListA_8;
        MR_Word GoalListB_9;

        hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(GoalA_6, &GoalListA_8);
        hlds__make_hlds__make_hlds_warn__flatten_to_disj_list_2_p_0(GoalB_7, &GoalListB_9);
        *GoalList_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), GoalListA_8, GoalListB_9);
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *GoalList_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_3));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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

    Var_33 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_34 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    Var_35 = mercury__term__context_init_0_f_0();
    {
      Info0_12 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Info0_12, 0) = ((MR_Box) (ModuleInfo_7));
      MR_hl_field(MR_mktag(0), Info0_12, 1) = ((MR_Box) (PredCallId_8));
      MR_hl_field(MR_mktag(0), Info0_12, 2) = ((MR_Box) (VarSet_9));
      MR_hl_field(MR_mktag(0), Info0_12, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Info0_12, 4) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Info0_12, 5) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Info0_12, 6) = ((MR_Box) (Var_35));
    }
    QuantVars_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Body_10, QuantVars_13, Info0_12, &Info_14);
    NewSpecs_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 3))));
    SingletonHeadVarsSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 4))));
    MultiHeadVarsSet_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 5))));
    HeadContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_14, (MR_Integer) 6))));
    STATE_VARIABLE_Specs_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), NewSpecs_18, STATE_VARIABLE_Specs_0_30);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SingletonHeadVarsSet_19, &SingletonHeadVars_22);
    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MultiHeadVarsSet_20, &MultiHeadVars_23);
    if ((SingletonHeadVars_22 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_38_38 = STATE_VARIABLE_Specs_36_36;
    else
    {
      MR_Word SingleSpec_26;

      hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 0, HeadContext_21, PredCallId_8, VarSet_9, SingletonHeadVars_22, &SingleSpec_26);
      {
        STATE_VARIABLE_Specs_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_38_38, 0) = ((MR_Box) (SingleSpec_26));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_38_38, 1) = ((MR_Box) (STATE_VARIABLE_Specs_36_36));
      }
    }
    if ((MultiHeadVars_23 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_38_38;
    else
    {
      MR_Word MultiSpec_29;

      hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0((MR_Integer) 1, HeadContext_21, PredCallId_8, VarSet_9, MultiHeadVars_23, &MultiSpec_29);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    hlds__make_hlds__make_hlds_warn__add_warn_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Info_9);
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

    conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_maybe_name_mode_1_f_0(((MR_Word) (wrapper_arg_1)));
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
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal/4-0
    ;
    // proc 2 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_unify/6-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Goal_5 = tscc_proc_1_input_1_Goal_5;
      MR_Word QuantVars_6 = tscc_proc_1_input_2_QuantVars_6;
      MR_Word STATE_VARIABLE_Info_0_95 = tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
      MR_Word STATE_VARIABLE_Info_96;
      MR_bool succeeded;
      MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
      MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_15 = (MR_Word) ((MR_Word) (GoalExpr_8));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_15;
            MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
            tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
            tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 0))));
            MR_Word RHS_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_X_7 = Var_65;
            MR_Word next_value_of_tscc_proc_2_input_2_RHS_8 = RHS_66;
            MR_Word next_value_of_tscc_proc_2_input_3_GoalInfo_9 = GoalInfo_9;
            MR_Word next_value_of_tscc_proc_2_input_4_QuantVars_10 = QuantVars_6;
            MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_95;

            // direct tailcall eliminated
            ;
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
            MR_Word Args_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 2))));
            MR_Word NonLocals_140;

            NonLocals_140 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Args_55, GoalInfo_9, NonLocals_140, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                MR_Word Args0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                MR_Word Args1_64;
                MR_Word NonLocals_141;
                MR_Word Args_142;

                hlds__goal_util__generic_call_vars_2_p_0(GenericCall_59, &Args1_64);
                Args_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[1]), Args0_60, Args1_64);
                NonLocals_141 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Args_142, GoalInfo_9, NonLocals_141, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                MR_Word PredId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                MR_Integer ProcId_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
                MR_Word PragmaImpl_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 7))));
                MR_Word Context_76;
                MR_Word Lang_77;
                MR_Word NamesModes_78;
                MR_Word PragmaSpecs_79;
                MR_Word Var_108;
                MR_Word Args_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
                MR_Word Var_147;
                MR_Box conv2_STATE_VARIABLE_Info_96;

                Context_76 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
                Lang_77 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_70);
                NamesModes_78 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[0]), Args_143);
                Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
                Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(Var_108, PragmaImpl_75, Lang_77, NamesModes_78, Context_76, Var_147, PredId_71, ProcId_72, (MR_Word) ((MR_Unsigned) 0U), &PragmaSpecs_79);
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[1]), PragmaSpecs_79, ((MR_Box) (STATE_VARIABLE_Info_0_95)), &conv2_STATE_VARIABLE_Info_96);
                STATE_VARIABLE_Info_96 = ((MR_Word) (conv2_STATE_VARIABLE_Info_96));
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_11, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_134, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(Cases_14, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                MR_Word SubGoal_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) Reason_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_16, (MR_Integer) 0))));
                      MR_Word SubQuantVars_23;
                      MR_Word STATE_VARIABLE_Info_128_128;
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                      if ((Vars_17 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        SubQuantVars_23 = QuantVars_6;
                        STATE_VARIABLE_Info_128_128 = STATE_VARIABLE_Info_0_95;
                      }
                      else
                      {
                        MR_Word SubGoalVars_21;
                        MR_Word EmptySet_22;

                        SubGoalVars_21 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_135);
                        parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_22);
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_17, GoalInfo_9, EmptySet_22, SubGoalVars_21, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_128_128);
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_17, QuantVars_6, &SubQuantVars_23);
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_135;
                      next_value_of_tscc_proc_1_input_2_QuantVars_6 = SubQuantVars_23;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_128_128;
                      tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                      tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word HeadWarning_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Reason_16, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word TailWarnings_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Reason_16, (MR_Integer) 1))));

                      succeeded = (HeadWarning_24 == (MR_Integer) 0);
                      if (!(succeeded))
                        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 0)), TailWarnings_25);
                      if (succeeded)
                        STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_0_95;
                      else
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_135;
                        MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                        MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                        tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                        tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Vars_186 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_16, (MR_Integer) 0))));
                      MR_Word SubQuantVars_191;
                      MR_Word STATE_VARIABLE_Info_128_192;
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                      if ((Vars_186 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        SubQuantVars_191 = QuantVars_6;
                        STATE_VARIABLE_Info_128_192 = STATE_VARIABLE_Info_0_95;
                      }
                      else
                      {
                        MR_Word SubGoalVars_178;
                        MR_Word EmptySet_179;

                        SubGoalVars_178 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_135);
                        parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_179);
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_186, GoalInfo_9, EmptySet_179, SubGoalVars_178, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_128_192);
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_186, QuantVars_6, &SubQuantVars_191);
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_135;
                      next_value_of_tscc_proc_1_input_2_QuantVars_6 = SubQuantVars_191;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_128_192;
                      tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                      tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_16, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 7:
                        {
                          MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_135;
                          MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                          // direct tailcall eliminated
                          ;
                          tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                          tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                          tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                          goto top_of_proc_1;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word TermVar_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_16, (MR_Integer) 1))));
                          MR_Word NonLocals_40;
                          MR_Word Var_122;

                          NonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                          {
                            Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (TermVar_38));
                            MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_122, GoalInfo_9, NonLocals_40, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          mercury__require__sorry_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal\'/4", (MR_String) "loop_control");
                          return;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                MR_Word Then_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
                MR_Word Else_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
                MR_Word CondThenQuantVars_52;
                MR_Word STATE_VARIABLE_Info_116_116;
                MR_Word STATE_VARIABLE_Info_117_117;
                MR_Word STATE_VARIABLE_Info_118_118;
                MR_Word Vars_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                if ((Vars_138 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_Info_116_116 = STATE_VARIABLE_Info_0_95;
                else
                {
                  MR_Word CondVars_49;
                  MR_Word ThenVars_50;
                  MR_Word CondThenVars_51;
                  MR_Word EmptySet_136;

                  CondVars_49 = hlds__quantification__free_goal_vars_1_f_0(Cond_44);
                  ThenVars_50 = hlds__quantification__free_goal_vars_1_f_0(Then_45);
                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_49, ThenVars_50, &CondThenVars_51);
                  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_136);
                  hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_138, GoalInfo_9, EmptySet_136, CondThenVars_51, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_116_116);
                }
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_138, QuantVars_6, &CondThenQuantVars_52);
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Cond_44, CondThenQuantVars_52, STATE_VARIABLE_Info_116_116, &STATE_VARIABLE_Info_117_117);
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Then_45, CondThenQuantVars_52, STATE_VARIABLE_Info_117_117, &STATE_VARIABLE_Info_118_118);
                // direct tailcall eliminated
                ;
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
                MR_Word ShortHand_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_80)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalB_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_80, (MR_Integer) 1))));
                      MR_Word Goal_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_80, (MR_Integer) 0))));
                      MR_Word Goals_199;
                      MR_Word STATE_VARIABLE_Info_15_204;

                      {
                        Goals_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Goals_199, 0) = ((MR_Box) (GoalB_94));
                        MR_hl_field(MR_mktag(1), Goals_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Goal_198, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_15_204);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_199, QuantVars_6, STATE_VARIABLE_Info_15_204, &STATE_VARIABLE_Info_96);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Inner_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 2))));
                      MR_Word MainGoal_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 4))));
                      MR_Word OrElseGoals_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 5))));
                      MR_Word InnerDI_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_83, (MR_Integer) 0))));
                      MR_Word InnerUO_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_83, (MR_Integer) 1))));
                      MR_Word InsideQuantVars_90;
                      MR_Word Var_102;
                      MR_Word Var_103;
                      MR_Word STATE_VARIABLE_Info_105_105;

                      {
                        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (InnerUO_89));
                        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (InnerDI_88));
                        MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
                      }
                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_102, QuantVars_6, &InsideQuantVars_90);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(MainGoal_85, InsideQuantVars_90, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_105_105);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(OrElseGoals_86, InsideQuantVars_90, STATE_VARIABLE_Info_105_105, &STATE_VARIABLE_Info_96);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_144 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_80, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_144;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                      // direct tailcall eliminated
                      ;
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
            MR_Word Y_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_8, (MR_Integer) 0))));
            MR_Word NonLocals_13;
            MR_Word Var_38;
            MR_Word Var_40;

            NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Y_12));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_38, GoalInfo_9, NonLocals_13, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_8, (MR_Integer) 2))));
            MR_Word Var_36;
            MR_Word NonLocals_42;

            NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Ys_16));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_36, GoalInfo_9, NonLocals_42, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgVarsModes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 3))));
            MR_Word LambdaGoal_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 5))));
            MR_Word ArgVars_25;
            MR_Word LambdaGoalInfo_27;
            MR_Word LambdaNonLocals_28;
            MR_Word STATE_VARIABLE_Info_31_31;
            MR_Word Var_32;
            MR_Word STATE_VARIABLE_Info_33_33;
            MR_Word NonLocals_43;
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
            MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

            mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_22, &ArgVars_25);
            LambdaGoalInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal_24, (MR_Integer) 1))));
            LambdaNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_27);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(ArgVars_25, GoalInfo_9, LambdaNonLocals_28, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_31_31);
            NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_32, GoalInfo_9, NonLocals_43, QuantVars_10, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_33_33);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Goal_5 = LambdaGoal_24;
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
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal/4-0
    ;
    // proc 2 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_unify/6-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Goal_5 = tscc_proc_1_input_1_Goal_5;
      MR_Word QuantVars_6 = tscc_proc_1_input_2_QuantVars_6;
      MR_Word STATE_VARIABLE_Info_0_95 = tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
      MR_Word STATE_VARIABLE_Info_96;
      MR_bool succeeded;
      MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
      MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) GoalExpr_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_15 = (MR_Word) ((MR_Word) (GoalExpr_8));
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_15;
            MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

            // direct tailcall eliminated
            ;
            tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
            tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
            tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 0))));
            MR_Word RHS_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_8, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_X_7 = Var_65;
            MR_Word next_value_of_tscc_proc_2_input_2_RHS_8 = RHS_66;
            MR_Word next_value_of_tscc_proc_2_input_3_GoalInfo_9 = GoalInfo_9;
            MR_Word next_value_of_tscc_proc_2_input_4_QuantVars_10 = QuantVars_6;
            MR_Word next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_Info_0_29 = STATE_VARIABLE_Info_0_95;

            // direct tailcall eliminated
            ;
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
            MR_Word Args_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_8, (MR_Integer) 2))));
            MR_Word NonLocals_140;

            NonLocals_140 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Args_55, GoalInfo_9, NonLocals_140, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                MR_Word Args0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                MR_Word Args1_64;
                MR_Word NonLocals_141;
                MR_Word Args_142;

                hlds__goal_util__generic_call_vars_2_p_0(GenericCall_59, &Args1_64);
                Args_142 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[1]), Args0_60, Args1_64);
                NonLocals_141 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Args_142, GoalInfo_9, NonLocals_141, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Attrs_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                MR_Word PredId_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                MR_Integer ProcId_72 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
                MR_Word PragmaImpl_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 7))));
                MR_Word Context_76;
                MR_Word Lang_77;
                MR_Word NamesModes_78;
                MR_Word PragmaSpecs_79;
                MR_Word Var_108;
                MR_Word Args_143 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
                MR_Word Var_147;
                MR_Box conv2_STATE_VARIABLE_Info_96;

                Context_76 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_9);
                Lang_77 = parse_tree__prog_data_foreign__get_foreign_language_1_f_0(Attrs_70);
                NamesModes_78 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[0]), Args_143);
                Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 0))));
                Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_95, (MR_Integer) 1))));
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0(Var_108, PragmaImpl_75, Lang_77, NamesModes_78, Context_76, Var_147, PredId_71, ProcId_72, (MR_Word) ((MR_Unsigned) 0U), &PragmaSpecs_79);
                mercury__list__foldl_4_p_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), (MR_Word) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[1]), PragmaSpecs_79, ((MR_Box) (STATE_VARIABLE_Info_0_95)), &conv2_STATE_VARIABLE_Info_96);
                STATE_VARIABLE_Info_96 = ((MR_Word) (conv2_STATE_VARIABLE_Info_96));
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_11, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_134 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_134, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));

                hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_4_p_0(Cases_14, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                MR_Word SubGoal_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

                switch (MR_tag((MR_Word) Reason_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Vars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Reason_16, (MR_Integer) 0))));
                      MR_Word SubQuantVars_23;
                      MR_Word STATE_VARIABLE_Info_128_128;
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                      if ((Vars_17 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        SubQuantVars_23 = QuantVars_6;
                        STATE_VARIABLE_Info_128_128 = STATE_VARIABLE_Info_0_95;
                      }
                      else
                      {
                        MR_Word SubGoalVars_21;
                        MR_Word EmptySet_22;

                        SubGoalVars_21 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_135);
                        parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_22);
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_17, GoalInfo_9, EmptySet_22, SubGoalVars_21, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_128_128);
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_17, QuantVars_6, &SubQuantVars_23);
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_135;
                      next_value_of_tscc_proc_1_input_2_QuantVars_6 = SubQuantVars_23;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_128_128;
                      tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                      tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word HeadWarning_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Reason_16, (MR_Integer) 0))) & (MR_Integer) 7);
                      MR_Word TailWarnings_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Reason_16, (MR_Integer) 1))));

                      succeeded = (HeadWarning_24 == (MR_Integer) 0);
                      if (!(succeeded))
                        succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 0)), TailWarnings_25);
                      if (succeeded)
                        STATE_VARIABLE_Info_96 = STATE_VARIABLE_Info_0_95;
                      else
                      {
                        MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_135;
                        MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                        MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                        // direct tailcall eliminated
                        ;
                        tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                        tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                        tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                        goto top_of_proc_1;
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Vars_186 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Reason_16, (MR_Integer) 0))));
                      MR_Word SubQuantVars_191;
                      MR_Word STATE_VARIABLE_Info_128_192;
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                      if ((Vars_186 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        SubQuantVars_191 = QuantVars_6;
                        STATE_VARIABLE_Info_128_192 = STATE_VARIABLE_Info_0_95;
                      }
                      else
                      {
                        MR_Word SubGoalVars_178;
                        MR_Word EmptySet_179;

                        SubGoalVars_178 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_135);
                        parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_179);
                        hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_186, GoalInfo_9, EmptySet_179, SubGoalVars_178, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_128_192);
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_186, QuantVars_6, &SubQuantVars_191);
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_135;
                      next_value_of_tscc_proc_1_input_2_QuantVars_6 = SubQuantVars_191;
                      next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_128_192;
                      tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                      tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                      tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                      goto top_of_proc_1;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_16, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                      case (MR_Integer) 4:
                      case (MR_Integer) 5:
                      case (MR_Integer) 7:
                        {
                          MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_135;
                          MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                          MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                          // direct tailcall eliminated
                          ;
                          tscc_proc_1_input_1_Goal_5 = next_value_of_tscc_proc_1_input_1_Goal_5;
                          tscc_proc_1_input_2_QuantVars_6 = next_value_of_tscc_proc_1_input_2_QuantVars_6;
                          tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;
                          goto top_of_proc_1;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word TermVar_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_16, (MR_Integer) 1))));
                          MR_Word NonLocals_40;
                          MR_Word Var_122;

                          NonLocals_40 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
                          {
                            Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (TermVar_38));
                            MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_122, GoalInfo_9, NonLocals_40, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_96);
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          mercury__require__sorry_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal\'/4", (MR_String) "loop_control");
                          return;
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                MR_Word Then_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
                MR_Word Else_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
                MR_Word CondThenQuantVars_52;
                MR_Word STATE_VARIABLE_Info_116_116;
                MR_Word STATE_VARIABLE_Info_117_117;
                MR_Word STATE_VARIABLE_Info_118_118;
                MR_Word Vars_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
                MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
                MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

                if ((Vars_138 == (MR_Word) ((MR_Unsigned) 0U)))
                  STATE_VARIABLE_Info_116_116 = STATE_VARIABLE_Info_0_95;
                else
                {
                  MR_Word CondVars_49;
                  MR_Word ThenVars_50;
                  MR_Word CondThenVars_51;
                  MR_Word EmptySet_136;

                  CondVars_49 = hlds__quantification__free_goal_vars_1_f_0(Cond_44);
                  ThenVars_50 = hlds__quantification__free_goal_vars_1_f_0(Then_45);
                  parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_49, ThenVars_50, &CondThenVars_51);
                  parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_136);
                  hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Vars_138, GoalInfo_9, EmptySet_136, CondThenVars_51, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_116_116);
                }
                parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_138, QuantVars_6, &CondThenQuantVars_52);
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Cond_44, CondThenQuantVars_52, STATE_VARIABLE_Info_116_116, &STATE_VARIABLE_Info_117_117);
                hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Then_45, CondThenQuantVars_52, STATE_VARIABLE_Info_117_117, &STATE_VARIABLE_Info_118_118);
                // direct tailcall eliminated
                ;
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
                MR_Word ShortHand_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_80)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalB_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_80, (MR_Integer) 1))));
                      MR_Word Goal_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ShortHand_80, (MR_Integer) 0))));
                      MR_Word Goals_199;
                      MR_Word STATE_VARIABLE_Info_15_204;

                      {
                        Goals_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Goals_199, 0) = ((MR_Box) (GoalB_94));
                        MR_hl_field(MR_mktag(1), Goals_199, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Goal_198, QuantVars_6, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_15_204);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(Goals_199, QuantVars_6, STATE_VARIABLE_Info_15_204, &STATE_VARIABLE_Info_96);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Inner_83 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 2))));
                      MR_Word MainGoal_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 4))));
                      MR_Word OrElseGoals_86 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_80, (MR_Integer) 5))));
                      MR_Word InnerDI_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_83, (MR_Integer) 0))));
                      MR_Word InnerUO_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Inner_83, (MR_Integer) 1))));
                      MR_Word InsideQuantVars_90;
                      MR_Word Var_102;
                      MR_Word Var_103;
                      MR_Word STATE_VARIABLE_Info_105_105;

                      {
                        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (InnerUO_89));
                        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      }
                      {
                        Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_102, 0) = ((MR_Box) (InnerDI_88));
                        MR_hl_field(MR_mktag(1), Var_102, 1) = ((MR_Box) (Var_103));
                      }
                      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_102, QuantVars_6, &InsideQuantVars_90);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(MainGoal_85, InsideQuantVars_90, STATE_VARIABLE_Info_0_95, &STATE_VARIABLE_Info_105_105);
                      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_4_p_0(OrElseGoals_86, InsideQuantVars_90, STATE_VARIABLE_Info_105_105, &STATE_VARIABLE_Info_96);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_144 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_80, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_5 = SubGoal_144;
                      MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6 = QuantVars_6;
                      MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95 = STATE_VARIABLE_Info_0_95;

                      // direct tailcall eliminated
                      ;
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
            MR_Word Y_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_8, (MR_Integer) 0))));
            MR_Word NonLocals_13;
            MR_Word Var_38;
            MR_Word Var_40;

            NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Y_12));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_38, GoalInfo_9, NonLocals_13, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RHS_8, (MR_Integer) 2))));
            MR_Word Var_36;
            MR_Word NonLocals_42;

            NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Ys_16));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_36, GoalInfo_9, NonLocals_42, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_30);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgVarsModes_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 3))));
            MR_Word LambdaGoal_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_8, (MR_Integer) 5))));
            MR_Word ArgVars_25;
            MR_Word LambdaGoalInfo_27;
            MR_Word LambdaNonLocals_28;
            MR_Word STATE_VARIABLE_Info_31_31;
            MR_Word Var_32;
            MR_Word STATE_VARIABLE_Info_33_33;
            MR_Word NonLocals_43;
            MR_Word next_value_of_tscc_proc_1_input_1_Goal_5;
            MR_Word next_value_of_tscc_proc_1_input_2_QuantVars_6;
            MR_Word next_value_of_tscc_proc_1_input_3_STATE_VARIABLE_Info_0_95;

            mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[1]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_22, &ArgVars_25);
            LambdaGoalInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaGoal_24, (MR_Integer) 1))));
            LambdaNonLocals_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_27);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(ArgVars_25, GoalInfo_9, LambdaNonLocals_28, QuantVars_10, STATE_VARIABLE_Info_0_29, &STATE_VARIABLE_Info_31_31);
            NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (X_7));
              MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0(Var_32, GoalInfo_9, NonLocals_43, QuantVars_10, STATE_VARIABLE_Info_31_31, &STATE_VARIABLE_Info_33_33);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_1_input_1_Goal_5 = LambdaGoal_24;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
    else
    {
      MR_Word Case_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_9, (MR_Integer) 2))));
      MR_Word STATE_VARIABLE_Info_18_18;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_3;

      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Goal_15, QuantVars_2, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_18_18);
      // direct tailcall eliminated
      ;
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_4 = STATE_VARIABLE_Info_0_3;
    else
    {
      MR_Word Goal_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Info_15_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_3;

      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_4_p_0(Goal_9, QuantVars_2, STATE_VARIABLE_Info_0_3, &STATE_VARIABLE_Info_15_15);
      // direct tailcall eliminated
      ;
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

    succeeded = hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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

    succeeded = hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word VarSet_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
    MR_Word CallId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1))));
    MR_Word Context_14;
    MR_Word SingleVars_15;
    MR_Word MultiVars_19;
    MR_Word Var_27;
    MR_Word STATE_VARIABLE_Info_31_31;
    MR_Word Var_35;

    Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (NonLocals_9));
      MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (QuantVars_10));
      MR_hl_field(MR_mktag(0), Var_27, 5) = ((MR_Box) (VarSet_12));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[1]), Var_27, GoalVars_7, &SingleVars_15);
    succeeded = (SingleVars_15 == (MR_Word) ((MR_Unsigned) 0U));
    if (!(succeeded))
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_8, (MR_Integer) 14);
    if (succeeded)
      STATE_VARIABLE_Info_31_31 = STATE_VARIABLE_Info_0_25;
    else
    {
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_8, (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word SingleHeadVars0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 4))));
        MR_Word SingleHeadVars_17;
        MR_Word STATE_VARIABLE_Info_30_30;
        MR_Word Var_32;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_72;

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SingleVars_15, SingleHeadVars0_16, &SingleHeadVars_17);
        Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 0))));
        Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 1))));
        Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 2))));
        Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 3))));
        Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 5))));
        Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_25, (MR_Integer) 6))));
        {
          STATE_VARIABLE_Info_30_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 0) = ((MR_Box) (Var_60));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 1) = ((MR_Box) (Var_61));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 2) = ((MR_Box) (Var_62));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 3) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 4) = ((MR_Box) (SingleHeadVars_17));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 5) = ((MR_Box) (Var_65));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, 6) = ((MR_Box) (Var_66));
        }
        Var_32 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
        Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 0))));
        Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 1))));
        Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 2))));
        Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 3))));
        Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 4))));
        Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_30_30, (MR_Integer) 5))));
        {
          STATE_VARIABLE_Info_31_31 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
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
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_35, 3) = ((MR_Box) (NonLocals_9));
      MR_hl_field(MR_mktag(0), Var_35, 4) = ((MR_Box) (VarSet_12));
    }
    mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[1]), Var_35, GoalVars_7, &MultiVars_19);
    if ((MultiVars_19 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_26 = STATE_VARIABLE_Info_31_31;
    else
    {
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_8, (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word MultiHeadVars0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 5))));
        MR_Word MultiHeadVars_23;
        MR_Word STATE_VARIABLE_Info_37_37;
        MR_Word Var_39;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word Var_84;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_92;

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MultiVars_19, MultiHeadVars0_22, &MultiHeadVars_23);
        Var_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 0))));
        Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 1))));
        Var_82 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 2))));
        Var_83 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 3))));
        Var_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 4))));
        Var_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_31_31, (MR_Integer) 6))));
        {
          STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (Var_82));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (Var_83));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (Var_84));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 5) = ((MR_Box) (MultiHeadVars_23));
          MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, 6) = ((MR_Box) (Var_86));
        }
        Var_39 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
        Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 0))));
        Var_88 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 1))));
        Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 2))));
        Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 3))));
        Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 4))));
        Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_37_37, (MR_Integer) 5))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
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
    MR_Word Specs0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 3))));
    MR_Word Specs_7;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 4))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 5))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_8, (MR_Integer) 6))));

    {
      Specs_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Specs_7, 0) = ((MR_Box) (Spec_4));
      MR_hl_field(MR_mktag(1), Specs_7, 1) = ((MR_Box) (Specs0_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
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
    MR_String conv0_HeadVar__3_84;

    conv0_HeadVar__3_84 = hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__491__1_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_84));
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
    MR_String Count_13;
    MR_Word Preamble_14;
    MR_Word VarStrs0_15;
    MR_Word VarStrs_16;
    MR_String VarsStr_17;
    MR_Word VarsPiece_18;
    MR_Word Pieces_20;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_34;
    MR_String Var_36;
    MR_String Var_37;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;

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
      Var_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_27, 0) = ((MR_Box) ((MR_Unsigned) 13U));
      MR_hl_field(MR_mktag(3), Var_27, 1) = ((MR_Box) (CallId_9));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[10])));
    }
    {
      Preamble_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Preamble_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[30])));
      MR_hl_field(MR_mktag(1), Preamble_14, 1) = ((MR_Box) (Var_26));
    }
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__generate_variable_warning_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_34, 3) = ((MR_Box) (VarSet_10));
    }
    VarStrs0_15 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, Vars_11);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarStrs0_15, &VarStrs_16);
    Var_37 = mercury__string__join_list_2_f_0((MR_String) ", ", VarStrs_16);
    Var_36 = mercury__string__f_43_43_2_f_0(Var_37, (MR_String) "\'");
    VarsStr_17 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_36);
    {
      VarsPiece_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), VarsPiece_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), VarsPiece_18, 1) = ((MR_Box) (VarsStr_17));
    }
    if ((VarStrs_16 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.generate_variable_warning\'/6", (MR_String) "VarStrs = []");
        return;
      }
    else
    {
      MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(1), VarStrs_16, (MR_Integer) 1))));

      if ((Var_87 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_62;
        MR_Word Var_63;

        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (Count_13));
        }
        {
          Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[39])));
        }
        {
          Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
          MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (VarsPiece_18));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
        }
        {
          Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[31])));
          MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_58));
        }
      }
      else
      {
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_47;
        MR_Word Var_48;

        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Count_13));
        }
        {
          Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
          MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[39])));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[40])));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (VarsPiece_18));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
        }
        {
          Pieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[34])));
          MR_hl_field(MR_mktag(1), Pieces_20, 1) = ((MR_Box) (Var_43));
        }
      }
    }
    Var_79 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Preamble_14, Pieces_20);
    {
      Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_79));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      *Spec_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.generate_variable_warning\'/6"));
      MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 9) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_77));
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

    succeeded = hlds__make_hlds__make_hlds_warn__var_is_unmentioned_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Name_6);
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
  MR_Word PFSymNameArity_16,
  MR_Word PredId_17,
  MR_Integer ProcId_18,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_bool succeeded;
    MR_String LangStr_20;
    MR_String Code_21;
    MR_Word C_CodeList_23;
    MR_Word UnmentionedVars_24;
    MR_Word Var_31;
    MR_Word STATE_VARIABLE_Specs_69_69;
    MR_Word CharList_78;

    LangStr_20 = libs__globals__foreign_language_string_1_f_0(Lang_13);
    Code_21 = ((MR_String) ((MR_hl_field(MR_mktag(0), PragmaImpl_12, (MR_Integer) 0))));
    mercury__string__to_char_list_2_p_0(Code_21, &CharList_78);
    hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(CharList_78, &C_CodeList_23);
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_in_pragma_foreign_proc_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (C_CodeList_23));
    }
    mercury__list__filter_map_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_31, Args_14, &UnmentionedVars_24);
    if ((UnmentionedVars_24 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_Specs_69_69 = STATE_VARIABLE_Specs_0_29;
    else
    {
      MR_Word Pieces_27;
      MR_Word Spec_28;
      MR_Word Var_32;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_53;
      MR_Word Var_66;
      MR_Word Var_67;

      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (LangStr_20));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 13U));
        MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (PFSymNameArity_16));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[10])));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[7])));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[6])));
        MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
      }
      Var_49 = hlds__make_hlds__make_hlds_warn__variable_warning_start_1_f_0(UnmentionedVars_24);
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[13])));
      }
      {
        Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[11])));
        MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
      }
      Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_49, Var_50);
      Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_32, Var_48);
      {
        Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (Context_15));
        MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (Pieces_27));
      }
      {
        Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
        MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Spec_28, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_pragma_foreign_proc\'/10"));
        MR_hl_field(MR_mktag(3), Spec_28, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 9) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
        MR_hl_field(MR_mktag(3), Spec_28, 2) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), Spec_28, 3) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(3), Spec_28, 4) = ((MR_Box) (Var_66));
      }
      {
        STATE_VARIABLE_Specs_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_69_69, 0) = ((MR_Box) (Spec_28));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_69_69, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
      }
    }
    hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(ModuleInfo_11, Lang_13, Context_15, PFSymNameArity_16, PredId_17, ProcId_18, C_CodeList_23, STATE_VARIABLE_Specs_69_69, STATE_VARIABLE_Specs_30);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__pragma_foreign_proc_body_checks_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Lang_11,
  MR_Word Context_12,
  MR_Word PFSymNameArity_13,
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

          hlds__make_hlds__make_hlds_warn__check_fp_body_for_success_indicator_9_p_0(ModuleInfo_10, Lang_11, Context_12, PFSymNameArity_13, PredId_14, ProcId_15, BodyPieces_16, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_23_23);
          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "return")), BodyPieces_16);
          if (succeeded)
          {
            MR_String LangStr_32;
            MR_Word Pieces_33;
            MR_Word Spec_34;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word Var_43;
            MR_Word Var_44;
            MR_Word Var_62;
            MR_Word Var_63;

            LangStr_32 = libs__globals__foreign_language_string_1_f_0(Lang_11);
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), Var_39, 0) = ((MR_Box) (LangStr_32));
            }
            {
              Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 13U));
              MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (PFSymNameArity_13));
            }
            {
              Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
              MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[61])));
            }
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[7])));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
            }
            {
              Pieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[45])));
              MR_hl_field(MR_mktag(1), Pieces_33, 1) = ((MR_Box) (Var_38));
            }
            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (Context_12));
              MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (Pieces_33));
            }
            {
              Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Var_63));
              MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Spec_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Spec_34, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.check_fp_body_for_return\'/6"));
              MR_hl_field(MR_mktag(3), Spec_34, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 58) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
              MR_hl_field(MR_mktag(3), Spec_34, 2) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), Spec_34, 3) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(3), Spec_34, 4) = ((MR_Box) (Var_62));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_34));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_23_23));
            }
          }
          else
            *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_23_23;
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
  MR_Word PFSymNameArity_13,
  MR_Word PredId_14,
  MR_Integer ProcId_15,
  MR_Word BodyPieces_16,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_bool succeeded;
    MR_Word ProcInfo_18;
    MR_Word MaybeDeclDetism_19;

    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_10, PredId_14, ProcId_15, &ProcInfo_18);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_18, &MaybeDeclDetism_19);
    if ((MaybeDeclDetism_19 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
    else
    {
      MR_Word Detism_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDeclDetism_19, (MR_Integer) 0))));

      switch (Detism_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
        case (MR_Integer) 0:
        case (MR_Integer) 6:
          {
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), BodyPieces_16);
            if (succeeded)
            {
              MR_String LangStr_22;
              MR_Word Pieces_23;
              MR_Word Spec_24;
              MR_Word Var_59;
              MR_Word Var_60;
              MR_Word Var_61;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_83;
              MR_Word Var_84;

              LangStr_22 = libs__globals__foreign_language_string_1_f_0(Lang_11);
              {
                Var_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_60, 0) = ((MR_Box) (LangStr_22));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (PFSymNameArity_13));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[66])));
              }
              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[7])));
                MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
              }
              {
                Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
                MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_61));
              }
              {
                Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[45])));
                MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_59));
              }
              {
                Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (Pieces_23));
              }
              {
                Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
                MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Spec_24, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.check_fp_body_for_success_indicator\'/9"));
                MR_hl_field(MR_mktag(3), Spec_24, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 58) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                MR_hl_field(MR_mktag(3), Spec_24, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Spec_24, 3) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(MR_mktag(3), Spec_24, 4) = ((MR_Box) (Var_83));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_26 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
              }
            }
            else
              *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
          }
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 1:
          {
            succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")), BodyPieces_16);
            if (succeeded)
              *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
            else
            {
              MR_Word Var_29;
              MR_Word Var_30;
              MR_Word Var_31;
              MR_Word Var_34;
              MR_Word Var_35;
              MR_Word Var_53;
              MR_Word Var_54;
              MR_String LangStr_87;
              MR_Word Pieces_88;
              MR_Word Spec_89;

              LangStr_87 = libs__globals__foreign_language_string_1_f_0(Lang_11);
              {
                Var_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_30, 0) = ((MR_Box) (LangStr_87));
              }
              {
                Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (PFSymNameArity_13));
              }
              {
                Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
                MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[68])));
              }
              {
                Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[7])));
                MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
              }
              {
                Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
                MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
              }
              {
                Pieces_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[45])));
                MR_hl_field(MR_mktag(1), Pieces_88, 1) = ((MR_Box) (Var_29));
              }
              {
                Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Context_12));
                MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Pieces_88));
              }
              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
                MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Spec_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Spec_89, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.check_fp_body_for_success_indicator\'/9"));
                MR_hl_field(MR_mktag(3), Spec_89, 1) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 58) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
                MR_hl_field(MR_mktag(3), Spec_89, 2) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), Spec_89, 3) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(MR_mktag(3), Spec_89, 4) = ((MR_Box) (Var_53));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_26 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_89));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
              }
            }
          }
          break;
        case (MR_Integer) 7:
          *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
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
    if ((NameCharList_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *List_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Names_9;
      MR_String Name_10;

      hlds__make_hlds__make_hlds_warn__c_code_to_name_list_2_2_p_0(TheRest_6, &Names_9);
      mercury__string__from_char_list_2_p_0(NameCharList_5, &Name_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Char C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word CodeChars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = mercury__char__is_alnum_or_underscore_1_p_0(C_4);
      if (succeeded)
      {
        MR_Word NameCharList0_8;

        hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(CodeChars_5, &NameCharList0_8, HeadVar__3_3);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (C_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NameCharList0_8));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = CodeChars_5;

        // direct tailcall eliminated
        ;
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

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Char C_4 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word CodeChars_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = mercury__char__is_alnum_or_underscore_1_p_0(C_4);
      if (succeeded)
      {
        MR_Word NameCharList0_8;

        hlds__make_hlds__make_hlds_warn__get_first_c_name_in_word_3_p_0(CodeChars_5, &NameCharList0_8, HeadVar__3_3);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (C_4));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NameCharList0_8));
        }
      }
      else
      {
        *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
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
    MR_bool succeeded = (UnmentionedVars_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Pieces_4;
    MR_String Var_5;
    MR_Word Var_6;

    if (succeeded)
    {
      Var_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), UnmentionedVars_3, (MR_Integer) 0))));
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), UnmentionedVars_3, (MR_Integer) 1))));
      succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
    {
      MR_Word Var_9;
      MR_Word Var_10;

      {
        Var_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_10, 1) = ((MR_Box) (Var_5));
      }
      {
        Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_10));
        MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[42])));
      }
      {
        Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[31])));
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
        Var_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_18, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_18, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__make_hlds_warn_scalar_common_1[44])));
      }
      {
        Pieces_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_4, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__make_hlds_warn_scalar_common_1[34])));
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

    conv0_Spec_8 = hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word WarningSpecs_10;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__add_quant_warnings_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (PredCallId_6));
      MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (VarSet_7));
    }
    WarningSpecs_10 = mercury__list__map_2_f_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Var_13, Warnings_8);
    *STATE_VARIABLE_Specs_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), WarningSpecs_10, STATE_VARIABLE_Specs_0_11);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

    succeeded = hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
