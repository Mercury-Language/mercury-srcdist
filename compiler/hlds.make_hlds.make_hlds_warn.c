/*
** Automatically generated from `make_hlds_warn.m'
** by the Mercury compiler,
** version rotd-2026-08-29
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
#include "backend_libs.mih"
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
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_vars.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.pred_proc_id.mih"
#include "hlds.pred_table.mih"
#include "hlds.proc_info_types.mih"
#include "hlds.proc_table_struct.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_rare.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_item_inst_mode.mih"
#include "parse_tree.prog_item_pragma.mih"
#include "parse_tree.prog_item_pred_proc_id.mih"
#include "parse_tree.prog_item_type.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"



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

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_seen_quant_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_seen_quant_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_maybe_seen_quant_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_maybe_seen_quant_0[2];

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_maybe_seen_quant_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_multi_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_multi_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_maybe_warn_multi_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_maybe_warn_multi_0[2];

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_maybe_warn_multi_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_singleton_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_singleton_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_maybe_warn_singleton_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_maybe_warn_singleton_0[2];

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_maybe_warn_singleton_0[2];

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_single_or_multi_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_single_or_multi_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0[2];

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0[5];

static const MR_ConstString hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0[5];

static const MR_DuArgLocn hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_locns_warn_info_0_0[5];

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0[1];

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0[1];

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_params_0_0[5];

static const MR_ConstString hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_params_0_0[5];

static const MR_DuArgLocn hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_locns_warn_params_0_0[5];

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_params_0_0;

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_params_0_0[1];

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_params_0[1];

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_params_0[1];

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_params_0[1];

static MR_String MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__684__1_2_f_0(
  MR_Word VarSet_17,
  MR_Word HeadVar__2_62);

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__quant_warning_to_spec__147__1_2_f_0(
  MR_Word VarSet_6,
  MR_Word HeadVar__2_70);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_singleton_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_singleton_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_multi_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_multi_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(
  MR_Word PfSymNameArity_5,
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
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(
  MR_Word tscc_proc_1_input_1_Params_6,
  MR_Word tscc_proc_1_input_2_Goal_7,
  MR_Word tscc_proc_1_input_3_QuantVars_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_71);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_7_p_0(
  MR_Word tscc_proc_2_input_1_Params_8,
  MR_Word tscc_proc_2_input_2_X_9,
  MR_Word tscc_proc_2_input_3_RHS_10,
  MR_Word tscc_proc_2_input_4_GoalInfo_11,
  MR_Word tscc_proc_2_input_5_QuantVars_12,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_71);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_scope_7_p_0(
  MR_Word tscc_proc_3_input_1_Params_8,
  MR_Word tscc_proc_3_input_2_Reason_9,
  MR_Word tscc_proc_3_input_3_SubGoal_10,
  MR_Word tscc_proc_3_input_4_GoalInfo_11,
  MR_Word tscc_proc_3_input_5_QuantVars_12,
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_71);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_5_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word QuantVars_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word QuantVars_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(
  MR_Word Params_8,
  MR_Word GoalVars_9,
  MR_Word GoalInfo_10,
  MR_Word NonLocals_11,
  MR_Word QuantVars_12,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_7_p_0(
  MR_Word Params_8,
  MR_Word Context_9,
  MR_Word SingleMulti_10,
  MR_Word PfSymNameArity_11,
  MR_Word Var0_12,
  MR_Word Vars0_13,
  MR_Word * Specs_14);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_no_dym_7_p_0(
  MR_Word Context_8,
  MR_Word PreamblePieces_9,
  MR_Word WarnOption_10,
  MR_String OnlyMoreThanOnce_11,
  MR_Word VarNames0_12,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_singleton_variable_warning_dyms_11_p_0(
  MR_Word VarSet_1,
  MR_Word Context_2,
  MR_Word PreamblePieces_3,
  MR_Word WarnOption_4,
  MR_Word PlainVarNames_5,
  MR_Word BangVarNames_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_NoDymVarNames_0_8,
  MR_Word * STATE_VARIABLE_NoDymVarNames_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__separate_state_var_names_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PlainVarNames_0_2,
  MR_Word * STATE_VARIABLE_PlainVarNames_3,
  MR_Word STATE_VARIABLE_BangVarNames_0_4,
  MR_Word * STATE_VARIABLE_BangVarNames_5);

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_seen_quant_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_seen_quant_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_multi_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_multi_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_singleton_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_singleton_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_1[68][2];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_2[2][1];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_3[2][7];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_4[3][6];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_5[1][5];

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_6[2][3];




static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_1[68][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declarations."))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_proc"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[6])))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "That macro is only defined within the body of"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[8])))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "macro."))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[10])))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "MR_ALLOC_ID"))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[12])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration may refer to the"))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[14])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_String) "foreign_code"))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[16])))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the body of this"))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[18])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In clause for"))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[22])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning: variable"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "has overlapping scopes."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[22])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning: variables"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[29]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "each have overlapping scopes."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[22])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "occur"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in this scope."))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[22])))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "occurs"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration:"))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "only once"))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "disjunct contains more than one call"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[22])))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "disjunct is not a call or unification"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[22])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "universal quantification should come before the declaration name"))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[22])))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "goal in declaration is not a disjunction"))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[22])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "declaration has no universally quantified variables"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[63]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[22])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[65])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[66])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_2[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 237U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 193U) },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_3[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_pred_form_arity_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0))
  },
  /* row   1 */
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

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_4[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_5[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0)),
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__make_hlds_warn_scalar_common_6[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_5[0])),
    ((MR_Box) (hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__pti_list_1__plain_parse_tree__prog_item__type_ctor_info_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0) }
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_seen_quant_0_0 = {
  (MR_String) "have_not_seen_quant",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_seen_quant_0_1 = {
  (MR_String) "have_seen_quant",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_maybe_seen_quant_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_seen_quant_0_0,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_seen_quant_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_maybe_seen_quant_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_seen_quant_0_0,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_seen_quant_0_1
};

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_maybe_seen_quant_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_maybe_seen_quant_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____maybe_seen_quant_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____maybe_seen_quant_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "maybe_seen_quant",
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_maybe_seen_quant_0 },
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_maybe_seen_quant_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_maybe_seen_quant_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_multi_0_0 = {
  (MR_String) "do_not_warn_multi",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_multi_0_1 = {
  (MR_String) "warn_multi",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_maybe_warn_multi_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_multi_0_0,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_multi_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_maybe_warn_multi_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_multi_0_0,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_multi_0_1
};

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_maybe_warn_multi_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_maybe_warn_multi_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_multi_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_multi_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "maybe_warn_multi",
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_maybe_warn_multi_0 },
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_maybe_warn_multi_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_maybe_warn_multi_0,

};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_singleton_0_0 = {
  (MR_String) "do_not_warn_singleton",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_singleton_0_1 = {
  (MR_String) "warn_singleton",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_maybe_warn_singleton_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_singleton_0_0,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_singleton_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_maybe_warn_singleton_0[2] = {
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_singleton_0_0,
  &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_functor_desc_maybe_warn_singleton_0_1
};

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_maybe_warn_singleton_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_maybe_warn_singleton_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_singleton_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_singleton_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "maybe_warn_singleton",
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_maybe_warn_singleton_0 },
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_maybe_warn_singleton_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_maybe_warn_singleton_0,

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
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_name_ordered_single_or_multi_0 },
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__enum_ordinal_ordered_single_or_multi_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_single_or_multi_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&hlds__make_hlds__make_hlds_warn__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__list__ti_list_1parse_tree__error_spec__type_ctor_info_warn_spec_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_maybe_seen_quant_0)
};

static const MR_ConstString hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0[5] = {
  (MR_String) "wi_specs",
  (MR_String) "wi_singleton_headvars",
  (MR_String) "wi_multi_headvars",
  (MR_String) "wi_head_context",
  (MR_String) "wi_seen_quant"
};

static const MR_DuArgLocn hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_locns_warn_info_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 4,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0 = {
  (MR_String) "warn_info",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_info_0_0,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_info_0_0,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_locns_warn_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_info_0_0[1] = { &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0 };

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

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0[1] = { &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_info_0_0 };

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "warn_info",
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_info_0 },
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_info_0,

};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_params_0_0[5] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_pf_sym_name_pred_form_arity_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_maybe_warn_singleton_0),
  (MR_PseudoTypeInfo) (&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_maybe_warn_multi_0)
};

static const MR_ConstString hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_params_0_0[5] = {
  (MR_String) "wp_module_info",
  (MR_String) "wp_pf_sna",
  (MR_String) "wp_varset",
  (MR_String) "wp_warn_singleton",
  (MR_String) "wp_warn_multi"
};

static const MR_DuArgLocn hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_locns_warn_params_0_0[5] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_params_0_0 = {
  (MR_String) "warn_params",
  INT16_C(5),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_types_warn_params_0_0,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_names_warn_params_0_0,
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__field_locns_warn_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_params_0_0[1] = { &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_params_0_0 };

static const MR_DuPtagLayout hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_stag_ordered_warn_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_params_0[1] = { &hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_functor_desc_warn_params_0_0 };

static const MR_Integer hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Unify____warn_params_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__make_hlds_warn____Compare____warn_params_0_0_10001)),
  (MR_String) "hlds.make_hlds.make_hlds_warn",
  (MR_String) "warn_params",
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_name_ordered_warn_params_0 },
  { hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__du_ptag_ordered_warn_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__functor_number_map_warn_params_0,

};

static MR_String MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__684__1_2_f_0(
  MR_Word VarSet_17,
  MR_Word HeadVar__2_62)
{
  MR_String HeadVar__3_63;

  HeadVar__3_63 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, HeadVar__2_62);
  return HeadVar__3_63;
}

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__quant_warning_to_spec__147__1_2_f_0(
  MR_Word VarSet_6,
  MR_Word HeadVar__2_70)
{
  MR_Word HeadVar__3_71;

  HeadVar__3_71 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, HeadVar__2_70);
  return HeadVar__3_71;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__prog_data____Compare____pf_sym_name_pred_form_arity_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[4]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;
          MR_Integer Var_25 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_26 = (MR_Integer) (ArgY4_14);

          succeeded = (Var_25 < Var_26);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_25 > Var_26);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Integer Var_27 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_28 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_27 < Var_28);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_27 > Var_28);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_17_17;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))) & (MR_Integer) 1);

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__prog_data____Unify____pf_sym_name_pred_form_arity_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_18 == CastY_19);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);
    MR_Word ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

          mercury__term_context____Compare____term_context_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Integer Var_25 = (MR_Integer) (ArgX5_16);
            MR_Integer Var_26 = (MR_Integer) (ArgY5_17);

            succeeded = (Var_25 < Var_26);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_25 > Var_26);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
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
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))) & (MR_Integer) 1);
    MR_Word ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))) & (MR_Integer) 1);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_16_16 = (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_17_17 = (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
            succeeded = (ArgX5_11 == ArgY5_12);
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_singleton_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_singleton_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_multi_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_multi_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_seen_quant_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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

MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_seen_quant_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_GoalList_4;

  hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_GoalList_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_GoalList_4));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(
  MR_Word Goal_3,
  MR_Word * GoalList_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Goal_3)) == (MR_Integer) 2);
  MR_Word ConjunctA_6;
  MR_Word ConjunctsB_7;

  if (succeeded)
  {
    ConjunctA_6 = ((MR_Word) ((MR_hl_field(2, Goal_3, 1))));
    ConjunctsB_7 = ((MR_Word) ((MR_hl_field(2, Goal_3, 2))));
    {
      MR_Word ConjunctGoalLists_8;
      MR_Word Var_10;

      {
        Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_10, 0) = ((MR_Box) (ConjunctA_6));
        MR_hl_field(1, Var_10, 1) = ((MR_Box) (ConjunctsB_7));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_6[1]), Var_10, &ConjunctGoalLists_8);
      mercury__list__condense_2_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), ConjunctGoalLists_8, GoalList_4);
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *GoalList_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_3));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(
  MR_Word NonLocals_4,
  MR_Word VarSet_5,
  MR_Word Var_6)
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

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_2(
  void * env_ptr_arg)
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

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0_3(
  void * env_ptr_arg)
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

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(
  MR_Word NonLocals_5,
  MR_Word QuantVars_6,
  MR_Word VarSet_7,
  MR_Word Var_8)
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

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_71;

  conv0_HeadVar__3_71 = hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__quant_warning_to_spec__147__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_71));
  return wrapper_arg_2;
}

static MR_Word MR_CALL 
hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(
  MR_Word PfSymNameArity_5,
  MR_Word VarSet_6,
  MR_Word Warning_7)
{
  MR_Word Spec_8;
  MR_Word Vars_9 = ((MR_Word) ((MR_hl_field(0, Warning_7, 0))));
  MR_Word Context_10 = ((MR_Word) ((MR_hl_field(0, Warning_7, 1))));
  MR_Word Pieces1_11;
  MR_Word Pieces2_15;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_65;

  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 17U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (PfSymNameArity_5));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[24])));
  }
  {
    Pieces1_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Pieces1_11, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[21])));
    MR_hl_field(1, Pieces1_11, 1) = ((MR_Box) (Var_22));
  }
  if ((Vars_9 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__require__unexpected_2_p_0((MR_String) "function \140hlds.make_hlds.make_hlds_warn.quant_warning_to_spec\'/3", (MR_String) "Vars = []");
  else
  {
    MR_Word HeadVar_12 = ((MR_Word) ((MR_hl_field(1, Vars_9, 0))));
    MR_Word TailVars_13 = ((MR_Word) ((MR_hl_field(1, Vars_9, 1))));

    if ((TailVars_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word VarPiece_14;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;

      VarPiece_14 = parse_tree__error_spec__var_to_quote_piece_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, HeadVar_12);
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (VarPiece_14));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
      Var_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_37, (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[28])));
      Pieces2_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[26])), Var_36);
    }
    else
    {
      MR_Word VarsPieces_18;
      MR_Word Var_46;
      MR_Word Var_51;
      MR_Word Var_52;

      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[2]));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0_1));
        MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_46, 3) = ((MR_Box) (VarSet_6));
      }
      VarsPieces_18 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_46, Vars_9);
      Var_52 = parse_tree__error_spec__piece_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), VarsPieces_18);
      Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[32])));
      Pieces2_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[30])), Var_51);
    }
  }
  Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Pieces1_11, Pieces2_15);
  {
    Spec_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_8, 0) = ((MR_Box) ((MR_String) "function \140hlds.make_hlds.make_hlds_warn.quant_warning_to_spec\'/3"));
    MR_hl_field(0, Spec_8, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_2[1])));
    MR_hl_field(0, Spec_8, 2) = ((MR_Box) ((MR_Unsigned) 48U));
    MR_hl_field(0, Spec_8, 3) = ((MR_Box) (Context_10));
    MR_hl_field(0, Spec_8, 4) = ((MR_Box) (Var_65));
  }
  return Spec_8;
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_suspicious_foreign_code_5_p_0(
  MR_Word Lang_6,
  MR_Word BodyCode_7,
  MR_Word Context_8,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) BodyCode_7)) == (MR_Integer) 1))
    *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
  else
  {
    MR_String Code_11 = ((MR_String) ((MR_hl_field(0, BodyCode_7, 0))));

    switch (Lang_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Identifiers_12;
          MR_Word _CommentIdentifiers_13;

          backend_libs__foreign__foreign_code_to_identifiers_4_p_0(Lang_6, Code_11, &Identifiers_12, &_CommentIdentifiers_13);
          succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "MR_ALLOC_ID")), Identifiers_12);
          if (succeeded)
          {
            MR_Word Spec_16;

            {
              Spec_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Spec_16, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_suspicious_foreign_code\'/5"));
              MR_hl_field(0, Spec_16, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_2[0])));
              MR_hl_field(0, Spec_16, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, Spec_16, 3) = ((MR_Box) (Context_8));
              MR_hl_field(0, Spec_16, 4) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[20])));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_18 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_16));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_17));
            }
          }
          else
            *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Specs_18 = STATE_VARIABLE_Specs_0_17;
        break;
    }
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_decl_6_p_0(
  MR_Word UnivVars_7,
  MR_Word PromiseType_8,
  MR_Word Goal_9,
  MR_Word Context_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word STATE_VARIABLE_Specs_1_18;

  if ((UnivVars_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word ErrSpec_12;
    MR_Word Pieces_19;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_String Var_24;

    Var_24 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_8);
    {
      Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_23, 1) = ((MR_Box) (Var_24));
    }
    {
      Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(1, Var_22, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[67])));
    }
    {
      Pieces_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_19, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
      MR_hl_field(1, Pieces_19, 1) = ((MR_Box) (Var_22));
    }
    {
      ErrSpec_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ErrSpec_12, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.promise_ex_error\'/4"));
      MR_hl_field(0, ErrSpec_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, ErrSpec_12, 2) = ((MR_Box) ((MR_Unsigned) 48U));
      MR_hl_field(0, ErrSpec_12, 3) = ((MR_Box) (Context_10));
      MR_hl_field(0, ErrSpec_12, 4) = ((MR_Box) (Pieces_19));
    }
    {
      STATE_VARIABLE_Specs_1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_18, 0) = ((MR_Box) (ErrSpec_12));
      MR_hl_field(1, STATE_VARIABLE_Specs_1_18, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_15));
    }
  }
  else
    STATE_VARIABLE_Specs_1_18 = STATE_VARIABLE_Specs_0_15;
  hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(PromiseType_8, Goal_9, STATE_VARIABLE_Specs_1_18, STATE_VARIABLE_Specs_16);
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_GoalList_4;

  hlds__make_hlds__make_hlds_warn__flatten_to_conj_list_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_GoalList_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_GoalList_4));
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__check_promise_ex_goal_4_p_0(
  MR_Word PromiseType_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Goal_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Goal_6, 0)))) == (MR_Integer) 6)));
    MR_Word SubGoal_10;
    MR_Word Var_22;
    MR_Word Var_23;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_22 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_6, 1))) >> 1)) & (MR_Integer) 1);
      Var_23 = ((MR_Unsigned) ((MR_hl_field(3, Goal_6, 1))) & (MR_Integer) 1);
      SubGoal_10 = ((MR_Word) ((MR_hl_field(3, Goal_6, 4))));
      succeeded = (Var_22 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Var_23 == (MR_Integer) 0);
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
      MR_Word Disjunct1_12;
      MR_Word Disjunct2_13;
      MR_Word Disjuncts3plus_14;

      succeeded = ((((MR_tag((MR_Word) Goal_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Goal_6, 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Disjunct1_12 = ((MR_Word) ((MR_hl_field(3, Goal_6, 2))));
        Disjunct2_13 = ((MR_Word) ((MR_hl_field(3, Goal_6, 3))));
        Disjuncts3plus_14 = ((MR_Word) ((MR_hl_field(3, Goal_6, 4))));
        {
          MR_Word DisjList_15;
          MR_Word DisjConjList_16;
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (Disjunct2_13));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) (Disjuncts3plus_14));
          }
          {
            DisjList_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, DisjList_15, 0) = ((MR_Box) (Disjunct1_12));
            MR_hl_field(1, DisjList_15, 1) = ((MR_Box) (Var_25));
          }
          mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_goal_0), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[1]), (MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_6[0]), DisjList_15, &DisjConjList_16);
          hlds__make_hlds__make_hlds_warn__check_promise_ex_disjunction_4_p_0(PromiseType_5, DisjConjList_16, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
        }
      }
      else
      {
        MR_Word Context_17;
        MR_Word SubGoal_39;
        MR_Word Var_28;
        MR_Word Var_29;

        succeeded = ((((MR_tag((MR_Word) Goal_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Goal_6, 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_28 = ((((MR_Unsigned) ((MR_hl_field(3, Goal_6, 1))) >> 1)) & (MR_Integer) 1);
          Var_29 = ((MR_Unsigned) ((MR_hl_field(3, Goal_6, 1))) & (MR_Integer) 1);
          Context_17 = ((MR_Word) ((MR_hl_field(3, Goal_6, 2))));
          SubGoal_39 = ((MR_Word) ((MR_hl_field(3, Goal_6, 4))));
          succeeded = (Var_28 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (Var_29 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word ErrSpec_19;
          MR_Word STATE_VARIABLE_Specs_3_33;
          MR_Word Pieces_44;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_String Var_49;
          MR_Word next_value_of_Goal_6;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_20;

          Var_49 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_5);
          {
            Var_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_48, 1) = ((MR_Box) (Var_49));
          }
          {
            Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
            MR_hl_field(1, Var_47, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[57])));
          }
          {
            Pieces_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_44, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
            MR_hl_field(1, Pieces_44, 1) = ((MR_Box) (Var_47));
          }
          {
            ErrSpec_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ErrSpec_19, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.promise_ex_error\'/4"));
            MR_hl_field(0, ErrSpec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ErrSpec_19, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, ErrSpec_19, 3) = ((MR_Box) (Context_17));
            MR_hl_field(0, ErrSpec_19, 4) = ((MR_Box) (Pieces_44));
          }
          {
            STATE_VARIABLE_Specs_3_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_3_33, 0) = ((MR_Box) (ErrSpec_19));
            MR_hl_field(1, STATE_VARIABLE_Specs_3_33, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Goal_6 = SubGoal_39;
          next_value_of_STATE_VARIABLE_Specs_0_20 = STATE_VARIABLE_Specs_3_33;
          Goal_6 = next_value_of_Goal_6;
          STATE_VARIABLE_Specs_0_20 = next_value_of_STATE_VARIABLE_Specs_0_20;
          continue;
        }
        else
        {
          MR_Word Var_35;
          MR_Word ErrSpec_38;
          MR_Word Pieces_66;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_String Var_71;

          Var_35 = parse_tree__prog_item__get_goal_context_1_f_0(Goal_6);
          Var_71 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_5);
          {
            Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_70, 1) = ((MR_Box) (Var_71));
          }
          {
            Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(1, Var_69, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[62])));
          }
          {
            Pieces_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Pieces_66, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
            MR_hl_field(1, Pieces_66, 1) = ((MR_Box) (Var_69));
          }
          {
            ErrSpec_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ErrSpec_38, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.promise_ex_error\'/4"));
            MR_hl_field(0, ErrSpec_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, ErrSpec_38, 2) = ((MR_Box) ((MR_Unsigned) 48U));
            MR_hl_field(0, ErrSpec_38, 3) = ((MR_Box) (Var_35));
            MR_hl_field(0, ErrSpec_38, 4) = ((MR_Box) (Pieces_66));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_21 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ErrSpec_38));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_20));
          }
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
      MR_Word ConjList_8 = ((MR_Word) ((MR_hl_field(1, DisjConjList_6, 0))));
      MR_Word Rest_9 = ((MR_Word) ((MR_hl_field(1, DisjConjList_6, 1))));
      MR_Word STATE_VARIABLE_Specs_1_13;
      MR_Word next_value_of_DisjConjList_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      hlds__make_hlds__make_hlds_warn__check_promise_ex_disj_arm_5_p_0(PromiseType_5, ConjList_8, (MR_Integer) 0, STATE_VARIABLE_Specs_0_10, &STATE_VARIABLE_Specs_1_13);
      // direct tailcall eliminated
      ;
      next_value_of_DisjConjList_6 = Rest_9;
      next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_1_13;
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
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Goals_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
    else
    {
      MR_Word HeadGoal_10 = ((MR_Word) ((MR_hl_field(1, Goals_7, 0))));
      MR_Word TailGoals_11 = ((MR_Word) ((MR_hl_field(1, Goals_7, 1))));

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
        MR_Word Var_27;
        MR_Word Var_28;

        succeeded = ((((MR_tag((MR_Word) HeadGoal_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadGoal_10, 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Var_27 = ((((MR_Unsigned) ((MR_hl_field(3, HeadGoal_10, 1))) >> 1)) & (MR_Integer) 1);
          Var_28 = ((MR_Unsigned) ((MR_hl_field(3, HeadGoal_10, 1))) & (MR_Integer) 1);
          HeadSubGoal_18 = ((MR_Word) ((MR_hl_field(3, HeadGoal_10, 4))));
          succeeded = (Var_27 == (MR_Integer) 0);
          if (succeeded)
            succeeded = (Var_28 == (MR_Integer) 0);
        }
        if (succeeded)
        {
          MR_Word Var_29;
          MR_Word next_value_of_Goals_7;

          {
            Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_29, 0) = ((MR_Box) (HeadSubGoal_18));
            MR_hl_field(1, Var_29, 1) = ((MR_Box) (TailGoals_11));
          }
          // direct tailcall eliminated
          ;
          next_value_of_Goals_7 = Var_29;
          Goals_7 = next_value_of_Goals_7;
          continue;
        }
        else
        {
          MR_Word Context_19;

          succeeded = ((MR_tag((MR_Word) HeadGoal_10)) == (MR_Integer) 1);
          if (succeeded)
          {
            Context_19 = ((MR_Word) ((MR_hl_field(1, HeadGoal_10, 0))));
            {
              MR_Word STATE_VARIABLE_Specs_3_32;
              MR_Word next_value_of_Goals_7;
              MR_Word next_value_of_STATE_VARIABLE_Specs_0_24;

              switch (CallUsed_8) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  STATE_VARIABLE_Specs_3_32 = STATE_VARIABLE_Specs_0_24;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ErrSpec_23;
                    MR_Word Pieces_40;
                    MR_Word Var_43;
                    MR_Word Var_44;
                    MR_String Var_45;

                    Var_45 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_6);
                    {
                      Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(3, Var_44, 1) = ((MR_Box) (Var_45));
                    }
                    {
                      Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
                      MR_hl_field(1, Var_43, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[47])));
                    }
                    {
                      Pieces_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Pieces_40, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
                      MR_hl_field(1, Pieces_40, 1) = ((MR_Box) (Var_43));
                    }
                    {
                      ErrSpec_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ErrSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.promise_ex_error\'/4"));
                      MR_hl_field(0, ErrSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(0, ErrSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 48U));
                      MR_hl_field(0, ErrSpec_23, 3) = ((MR_Box) (Context_19));
                      MR_hl_field(0, ErrSpec_23, 4) = ((MR_Box) (Pieces_40));
                    }
                    {
                      STATE_VARIABLE_Specs_3_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, STATE_VARIABLE_Specs_3_32, 0) = ((MR_Box) (ErrSpec_23));
                      MR_hl_field(1, STATE_VARIABLE_Specs_3_32, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
                    }
                  }
                  break;
              }
              // direct tailcall eliminated
              ;
              next_value_of_Goals_7 = TailGoals_11;
              next_value_of_STATE_VARIABLE_Specs_0_24 = STATE_VARIABLE_Specs_3_32;
              Goals_7 = next_value_of_Goals_7;
              CallUsed_8 = (MR_Integer) 1;
              STATE_VARIABLE_Specs_0_24 = next_value_of_STATE_VARIABLE_Specs_0_24;
              continue;
            }
          }
          else
          {
            MR_Word Var_35;
            MR_Word STATE_VARIABLE_Specs_5_37;
            MR_Word ErrSpec_39;
            MR_Word Pieces_62;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_String Var_67;
            MR_Word next_value_of_Goals_7;
            MR_Word next_value_of_STATE_VARIABLE_Specs_0_24;

            Var_35 = parse_tree__prog_item__get_goal_context_1_f_0(HeadGoal_10);
            Var_67 = parse_tree__parse_tree_out_misc__promise_to_string_1_f_0(PromiseType_6);
            {
              Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_66, 1) = ((MR_Box) (Var_67));
            }
            {
              Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
              MR_hl_field(1, Var_65, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[52])));
            }
            {
              Pieces_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Pieces_62, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[37])));
              MR_hl_field(1, Pieces_62, 1) = ((MR_Box) (Var_65));
            }
            {
              ErrSpec_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, ErrSpec_39, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.promise_ex_error\'/4"));
              MR_hl_field(0, ErrSpec_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, ErrSpec_39, 2) = ((MR_Box) ((MR_Unsigned) 48U));
              MR_hl_field(0, ErrSpec_39, 3) = ((MR_Box) (Var_35));
              MR_hl_field(0, ErrSpec_39, 4) = ((MR_Box) (Pieces_62));
            }
            {
              STATE_VARIABLE_Specs_5_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_Specs_5_37, 0) = ((MR_Box) (ErrSpec_39));
              MR_hl_field(1, STATE_VARIABLE_Specs_5_37, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_24));
            }
            // direct tailcall eliminated
            ;
            next_value_of_Goals_7 = TailGoals_11;
            next_value_of_STATE_VARIABLE_Specs_0_24 = STATE_VARIABLE_Specs_5_37;
            Goals_7 = next_value_of_Goals_7;
            STATE_VARIABLE_Specs_0_24 = next_value_of_STATE_VARIABLE_Specs_0_24;
            continue;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_clause_body_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word PfSymNameArity_9,
  MR_Word VarSet_10,
  MR_Word BodyGoal_11,
  MR_Word * SeenQuant_12,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_Word Globals_14;
  MR_Word WarnSingleton0_15;
  MR_Word WarnMulti0_16;
  MR_Word WarnSingleton1_21;
  MR_Word WarnMulti1_22;
  MR_Word Params_23;
  MR_Word Info0_24;
  MR_Word QuantVars_25;
  MR_Word Info_26;
  MR_Word NewSpecs_27;
  MR_Word SingletonHeadVarsSet_28;
  MR_Word MultiHeadVarsSet_29;
  MR_Word HeadContext_30;
  MR_Word SingletonHeadVars_31;
  MR_Word MultiHeadVars_32;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word STATE_VARIABLE_Specs_1_54;
  MR_Word STATE_VARIABLE_Specs_2_56;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_8, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 188, &WarnSingleton0_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 189, &WarnMulti0_16);
  switch (WarnSingleton0_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      WarnSingleton1_21 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      WarnSingleton1_21 = (MR_Integer) 1;
      break;
  }
  switch (WarnMulti0_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      WarnMulti1_22 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      WarnMulti1_22 = (MR_Integer) 1;
      break;
  }
  {
    Params_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_23, 0) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, Params_23, 1) = ((MR_Box) (PfSymNameArity_9));
    MR_hl_field(0, Params_23, 2) = ((MR_Box) (VarSet_10));
    MR_hl_field(0, Params_23, 3) = (MR_Box) (((((MR_Unsigned) (WarnSingleton1_21) << 1)) | (MR_Unsigned) (WarnMulti1_22)));
  }
  Var_50 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Var_51 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  Var_52 = mercury__term_context__dummy_context_0_f_0();
  {
    Info0_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Info0_24, 1) = ((MR_Box) (Var_50));
    MR_hl_field(0, Info0_24, 2) = ((MR_Box) (Var_51));
    MR_hl_field(0, Info0_24, 3) = ((MR_Box) (Var_52));
    MR_hl_field(0, Info0_24, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  QuantVars_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_23, BodyGoal_11, QuantVars_25, Info0_24, &Info_26);
  NewSpecs_27 = ((MR_Word) ((MR_hl_field(0, Info_26, 0))));
  SingletonHeadVarsSet_28 = ((MR_Word) ((MR_hl_field(0, Info_26, 1))));
  MultiHeadVarsSet_29 = ((MR_Word) ((MR_hl_field(0, Info_26, 2))));
  HeadContext_30 = ((MR_Word) ((MR_hl_field(0, Info_26, 3))));
  *SeenQuant_12 = ((MR_Unsigned) ((MR_hl_field(0, Info_26, 4))) & (MR_Integer) 1);
  STATE_VARIABLE_Specs_1_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), NewSpecs_27, STATE_VARIABLE_Specs_0_39);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SingletonHeadVarsSet_28, &SingletonHeadVars_31);
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MultiHeadVarsSet_29, &MultiHeadVars_32);
  if ((SingletonHeadVars_31 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Specs_2_56 = STATE_VARIABLE_Specs_1_54;
  else
  {
    MR_Word HeadSHV_33 = ((MR_Word) ((MR_hl_field(1, SingletonHeadVars_31, 0))));
    MR_Word TailSHVs_34 = ((MR_Word) ((MR_hl_field(1, SingletonHeadVars_31, 1))));
    MR_Word SingleSpecs_35;

    hlds__make_hlds__make_hlds_warn__generate_variable_warning_7_p_0(Params_23, HeadContext_30, (MR_Integer) 0, PfSymNameArity_9, HeadSHV_33, TailSHVs_34, &SingleSpecs_35);
    STATE_VARIABLE_Specs_2_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), SingleSpecs_35, STATE_VARIABLE_Specs_1_54);
  }
  if ((MultiHeadVars_32 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_2_56;
  else
  {
    MR_Word HeadMHV_36 = ((MR_Word) ((MR_hl_field(1, MultiHeadVars_32, 0))));
    MR_Word TailMHVs_37 = ((MR_Word) ((MR_hl_field(1, MultiHeadVars_32, 1))));
    MR_Word MultiSpecs_38;

    hlds__make_hlds__make_hlds_warn__generate_variable_warning_7_p_0(Params_23, HeadContext_30, (MR_Integer) 1, PfSymNameArity_9, HeadMHV_36, TailMHVs_37, &MultiSpecs_38);
    *STATE_VARIABLE_Specs_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), MultiSpecs_38, STATE_VARIABLE_Specs_2_56);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(
  MR_Word tscc_proc_1_input_1_Params_6,
  MR_Word tscc_proc_1_input_2_Goal_7,
  MR_Word tscc_proc_1_input_3_QuantVars_8,
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_71)
{
  MR_Word tscc_proc_2_input_1_Params_8;
  MR_Word tscc_proc_2_input_2_X_9;
  MR_Word tscc_proc_2_input_3_RHS_10;
  MR_Word tscc_proc_2_input_4_GoalInfo_11;
  MR_Word tscc_proc_2_input_5_QuantVars_12;
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30;
  MR_Word tscc_proc_3_input_1_Params_8;
  MR_Word tscc_proc_3_input_2_Reason_9;
  MR_Word tscc_proc_3_input_3_SubGoal_10;
  MR_Word tscc_proc_3_input_4_GoalInfo_11;
  MR_Word tscc_proc_3_input_5_QuantVars_12;
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_71;

  // The code for TSCC PROC 1: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal/5-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal/5-0
  ;
  // proc 2 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_unify/7-0
  ;
  // proc 3 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_scope/7-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Params_6 = tscc_proc_1_input_1_Params_6;
    MR_Word Goal_7 = tscc_proc_1_input_2_Goal_7;
    MR_Word QuantVars_8 = tscc_proc_1_input_3_QuantVars_8;
    MR_Word STATE_VARIABLE_Info_0_70 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
    MR_Word STATE_VARIABLE_Info_71;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_7, 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal_7, 1))));

    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_42 = (MR_Word) ((MR_Word) (GoalExpr_10));
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_42;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_70;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 0))));
          MR_Word RHS_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Params_8 = Params_6;
          MR_Word next_value_of_tscc_proc_2_input_2_X_9 = Var_12;
          MR_Word next_value_of_tscc_proc_2_input_3_RHS_10 = RHS_13;
          MR_Word next_value_of_tscc_proc_2_input_4_GoalInfo_11 = GoalInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_5_QuantVars_12 = QuantVars_8;
          MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30 = STATE_VARIABLE_Info_0_70;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Params_8 = next_value_of_tscc_proc_2_input_1_Params_8;
          tscc_proc_2_input_2_X_9 = next_value_of_tscc_proc_2_input_2_X_9;
          tscc_proc_2_input_3_RHS_10 = next_value_of_tscc_proc_2_input_3_RHS_10;
          tscc_proc_2_input_4_GoalInfo_11 = next_value_of_tscc_proc_2_input_4_GoalInfo_11;
          tscc_proc_2_input_5_QuantVars_12 = next_value_of_tscc_proc_2_input_5_QuantVars_12;
          tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Args_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 2))));
          MR_Word NonLocals_23;

          NonLocals_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_6, Args_19, GoalInfo_11, NonLocals_23, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
              MR_Word Args0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
              MR_Word Args1_29;
              MR_Word Args_98;
              MR_Word NonLocals_99;

              hlds__goal_vars__vars_in_generic_call_2_p_0(GenericCall_24, &Args1_29);
              Args_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), Args0_25, Args1_29);
              NonLocals_99 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_6, Args_98, GoalInfo_11, NonLocals_99, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal\'/5", (MR_String) "call_foreign_proc");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));

              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(Params_6, Goals_38, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));

              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(Params_6, Goals_100, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));

              hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_5_p_0(Params_6, Cases_41, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
              MR_Word SubGoal_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
              MR_Word next_value_of_tscc_proc_3_input_1_Params_8 = Params_6;
              MR_Word next_value_of_tscc_proc_3_input_2_Reason_9 = Reason_43;
              MR_Word next_value_of_tscc_proc_3_input_3_SubGoal_10 = SubGoal_101;
              MR_Word next_value_of_tscc_proc_3_input_4_GoalInfo_11 = GoalInfo_11;
              MR_Word next_value_of_tscc_proc_3_input_5_QuantVars_12 = QuantVars_8;
              MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46 = STATE_VARIABLE_Info_0_70;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_Params_8 = next_value_of_tscc_proc_3_input_1_Params_8;
              tscc_proc_3_input_2_Reason_9 = next_value_of_tscc_proc_3_input_2_Reason_9;
              tscc_proc_3_input_3_SubGoal_10 = next_value_of_tscc_proc_3_input_3_SubGoal_10;
              tscc_proc_3_input_4_GoalInfo_11 = next_value_of_tscc_proc_3_input_4_GoalInfo_11;
              tscc_proc_3_input_5_QuantVars_12 = next_value_of_tscc_proc_3_input_5_QuantVars_12;
              tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46;
              goto top_of_proc_3;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
              MR_Word Cond_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
              MR_Word Then_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
              MR_Word Else_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 4))));
              MR_Word CondThenQuantVars_54;
              MR_Word STATE_VARIABLE_Info_10_84;
              MR_Word STATE_VARIABLE_Info_11_85;
              MR_Word STATE_VARIABLE_Info_12_86;
              MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
              MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

              if ((Vars_44 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Info_10_84 = STATE_VARIABLE_Info_0_70;
              else
              {
                MR_Word CondVars_50;
                MR_Word ThenVars_51;
                MR_Word CondThenVars_52;
                MR_Word EmptySet_53;
                MR_Word STATE_VARIABLE_Info_9_82;
                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 0))));
                MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 1))));
                MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 2))));
                MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 3))));

                {
                  STATE_VARIABLE_Info_9_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 0) = ((MR_Box) (Var_103));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 1) = ((MR_Box) (Var_104));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 2) = ((MR_Box) (Var_105));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 3) = ((MR_Box) (Var_106));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                CondVars_50 = hlds__quantification__free_goal_vars_1_f_0(Cond_45);
                ThenVars_51 = hlds__quantification__free_goal_vars_1_f_0(Then_46);
                parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_50, ThenVars_51, &CondThenVars_52);
                parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_53);
                hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_6, Vars_44, GoalInfo_11, EmptySet_53, CondThenVars_52, STATE_VARIABLE_Info_9_82, &STATE_VARIABLE_Info_10_84);
              }
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_44, QuantVars_8, &CondThenQuantVars_54);
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, Cond_45, CondThenQuantVars_54, STATE_VARIABLE_Info_10_84, &STATE_VARIABLE_Info_11_85);
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, Then_46, CondThenQuantVars_54, STATE_VARIABLE_Info_11_85, &STATE_VARIABLE_Info_12_86);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
              next_value_of_tscc_proc_1_input_2_Goal_7 = Else_47;
              next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
              next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_12_86;
              tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
              tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
              tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));

              switch (MR_tag((MR_Word) ShortHand_55)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalB_69 = ((MR_Word) ((MR_hl_field(0, ShortHand_55, 1))));
                    MR_Word Goal_117 = ((MR_Word) ((MR_hl_field(0, ShortHand_55, 0))));
                    MR_Word Goals_118;
                    MR_Word STATE_VARIABLE_Info_1_122;
                    MR_Word Goal_128;
                    MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

                    {
                      Goals_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Goals_118, 0) = ((MR_Box) (GoalB_69));
                      MR_hl_field(1, Goals_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, Goal_117, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_1_122);
                    Goal_128 = ((MR_Word) ((MR_hl_field(1, Goals_118, 0))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
                    next_value_of_tscc_proc_1_input_2_Goal_7 = Goal_128;
                    next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
                    next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_1_122;
                    tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
                    tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
                    tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Inner_58 = ((MR_Word) ((MR_hl_field(1, ShortHand_55, 2))));
                    MR_Word MainGoal_60 = ((MR_Word) ((MR_hl_field(1, ShortHand_55, 4))));
                    MR_Word OrElseGoals_61 = ((MR_Word) ((MR_hl_field(1, ShortHand_55, 5))));
                    MR_Word InnerDI_63 = ((MR_Word) ((MR_hl_field(0, Inner_58, 0))));
                    MR_Word InnerUO_64 = ((MR_Word) ((MR_hl_field(0, Inner_58, 1))));
                    MR_Word InsideQuantVars_65;
                    MR_Word Var_88;
                    MR_Word Var_89;
                    MR_Word STATE_VARIABLE_Info_14_91;

                    {
                      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_89, 0) = ((MR_Box) (InnerUO_64));
                      MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_88, 0) = ((MR_Box) (InnerDI_63));
                      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_89));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_88, QuantVars_8, &InsideQuantVars_65);
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, MainGoal_60, InsideQuantVars_65, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_14_91);
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(Params_6, OrElseGoals_61, InsideQuantVars_65, STATE_VARIABLE_Info_14_91, &STATE_VARIABLE_Info_71);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_102 = ((MR_Word) ((MR_hl_field(2, ShortHand_55, 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_102;
                    MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_70;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
                    tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
                    tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_71;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Params_8 = tscc_proc_2_input_1_Params_8;
    MR_Word X_9 = tscc_proc_2_input_2_X_9;
    MR_Word RHS_10 = tscc_proc_2_input_3_RHS_10;
    MR_Word GoalInfo_11 = tscc_proc_2_input_4_GoalInfo_11;
    MR_Word QuantVars_12 = tscc_proc_2_input_5_QuantVars_12;
    MR_Word STATE_VARIABLE_Info_0_30 = tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30;
    MR_Word STATE_VARIABLE_Info_31;

    switch (MR_tag((MR_Word) RHS_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Y_14 = ((MR_Word) ((MR_hl_field(0, RHS_10, 0))));
          MR_Word NonLocals_15;
          MR_Word Var_32;
          MR_Word Var_34;

          NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          {
            Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_34, 0) = ((MR_Box) (Y_14));
            MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_32, GoalInfo_11, NonLocals_15, QuantVars_12, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_31);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ys_18 = ((MR_Word) ((MR_hl_field(1, RHS_10, 2))));
          MR_Word Var_36;
          MR_Word NonLocals_43;

          NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (Ys_18));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_36, GoalInfo_11, NonLocals_43, QuantVars_12, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_31);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVarsModes_23 = ((MR_Word) ((MR_hl_field(2, RHS_10, 2))));
          MR_Word LambdaGoal_25 = ((MR_Word) ((MR_hl_field(2, RHS_10, 4))));
          MR_Word ArgVars_26;
          MR_Word LambdaGoalInfo_28;
          MR_Word LambdaNonLocals_29;
          MR_Word STATE_VARIABLE_Info_3_38;
          MR_Word Var_39;
          MR_Word STATE_VARIABLE_Info_4_40;
          MR_Word NonLocals_44;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_23, &ArgVars_26);
          LambdaGoalInfo_28 = ((MR_Word) ((MR_hl_field(0, LambdaGoal_25, 1))));
          LambdaNonLocals_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_28);
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, ArgVars_26, GoalInfo_11, LambdaNonLocals_29, QuantVars_12, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_3_38);
          NonLocals_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_39, GoalInfo_11, NonLocals_44, QuantVars_12, STATE_VARIABLE_Info_3_38, &STATE_VARIABLE_Info_4_40);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
          next_value_of_tscc_proc_1_input_2_Goal_7 = LambdaGoal_25;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_12;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_4_40;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_31;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Params_8 = tscc_proc_3_input_1_Params_8;
    MR_Word Reason_9 = tscc_proc_3_input_2_Reason_9;
    MR_Word SubGoal_10 = tscc_proc_3_input_3_SubGoal_10;
    MR_Word GoalInfo_11 = tscc_proc_3_input_4_GoalInfo_11;
    MR_Word QuantVars_12 = tscc_proc_3_input_5_QuantVars_12;
    MR_Word STATE_VARIABLE_Info_0_46 = tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46;
    MR_Word STATE_VARIABLE_Info_47;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Reason_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(0, Reason_9, 0))));
          MR_Word Creator_15 = ((MR_Unsigned) ((MR_hl_field(0, Reason_9, 1))) & (MR_Integer) 1);
          MR_Word SubQuantVars_20;
          MR_Word STATE_VARIABLE_Info_2_50;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          if ((Vars_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubQuantVars_20 = QuantVars_12;
            STATE_VARIABLE_Info_2_50 = STATE_VARIABLE_Info_0_46;
          }
          else
          {
            MR_Word SubGoalVars_18;
            MR_Word EmptySet_19;
            MR_Word STATE_VARIABLE_Info_1_48;
            MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 0))));
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 1))));
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 2))));
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 3))));

            {
              STATE_VARIABLE_Info_1_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 0) = ((MR_Box) (Var_73));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 1) = ((MR_Box) (Var_74));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 2) = ((MR_Box) (Var_75));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 3) = ((MR_Box) (Var_76));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
            SubGoalVars_18 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_10);
            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_19);
            switch (Creator_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  SubQuantVars_20 = QuantVars_12;
                  STATE_VARIABLE_Info_2_50 = STATE_VARIABLE_Info_1_48;
                }
                break;
              case (MR_Integer) 0:
                {
                  hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Vars_14, GoalInfo_11, EmptySet_19, SubGoalVars_18, STATE_VARIABLE_Info_1_48, &STATE_VARIABLE_Info_2_50);
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_14, QuantVars_12, &SubQuantVars_20);
                }
                break;
            }
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
          next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = SubQuantVars_20;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_2_50;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadWarning_24 = ((MR_Unsigned) ((MR_hl_field(1, Reason_9, 0))) & (MR_Integer) 7);
          MR_Word TailWarnings_25 = ((MR_Word) ((MR_hl_field(1, Reason_9, 1))));
          MR_Word SubParams0_26;
          MR_Word SubParams_27;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          succeeded = (HeadWarning_24 == (MR_Integer) 0);
          if (!(succeeded))
            succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 0)), TailWarnings_25);
          if (succeeded)
          {
            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, Params_8, 0))));
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, Params_8, 1))));
            MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, Params_8, 2))));
            MR_Word Var_82 = ((MR_Unsigned) ((MR_hl_field(0, Params_8, 3))) & (MR_Integer) 1);

            {
              SubParams0_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubParams0_26, 0) = ((MR_Box) (Var_78));
              MR_hl_field(0, SubParams0_26, 1) = ((MR_Box) (Var_79));
              MR_hl_field(0, SubParams0_26, 2) = ((MR_Box) (Var_80));
              MR_hl_field(0, SubParams0_26, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_82)));
            }
          }
          else
            SubParams0_26 = Params_8;
          succeeded = (HeadWarning_24 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 1)), TailWarnings_25);
          if (succeeded)
          {
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, SubParams0_26, 0))));
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, SubParams0_26, 1))));
            MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, SubParams0_26, 2))));
            MR_Word Var_86 = ((((MR_Unsigned) ((MR_hl_field(0, SubParams0_26, 3))) >> 1)) & (MR_Integer) 1);

            {
              SubParams_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubParams_27, 0) = ((MR_Box) (Var_83));
              MR_hl_field(0, SubParams_27, 1) = ((MR_Box) (Var_84));
              MR_hl_field(0, SubParams_27, 2) = ((MR_Box) (Var_85));
              MR_hl_field(0, SubParams_27, 3) = (MR_Box) (((((MR_Unsigned) (Var_86) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
            }
          }
          else
            SubParams_27 = SubParams0_26;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = SubParams_27;
          next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_12;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_46;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Info_4_52;
          MR_Word Vars_69 = ((MR_Word) ((MR_hl_field(2, Reason_9, 0))));
          MR_Word SubQuantVars_72;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          if ((Vars_69 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubQuantVars_72 = QuantVars_12;
            STATE_VARIABLE_Info_4_52 = STATE_VARIABLE_Info_0_46;
          }
          else
          {
            MR_Word SubGoalVars_65;
            MR_Word EmptySet_66;

            SubGoalVars_65 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_10);
            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_66);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Vars_69, GoalInfo_11, EmptySet_66, SubGoalVars_65, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_4_52);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_69, QuantVars_12, &SubQuantVars_72);
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
          next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = SubQuantVars_72;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_4_52;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Reason_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
            {
              MR_Word next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
              MR_Word next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
              MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_12;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_46;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
              tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
              tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TermVar_40 = ((MR_Word) ((MR_hl_field(3, Reason_9, 1))));
              MR_Word NonLocals_42;
              MR_Word Var_60;

              NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (TermVar_40));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_60, GoalInfo_11, NonLocals_42, QuantVars_12, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_47);
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_scope\'/7", (MR_String) "loop_control");
              return;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_47;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_71 = tscc_output_1_STATE_VARIABLE_Info_71;
  return;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_unify_7_p_0(
  MR_Word tscc_proc_2_input_1_Params_8,
  MR_Word tscc_proc_2_input_2_X_9,
  MR_Word tscc_proc_2_input_3_RHS_10,
  MR_Word tscc_proc_2_input_4_GoalInfo_11,
  MR_Word tscc_proc_2_input_5_QuantVars_12,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_71)
{
  MR_Word tscc_proc_1_input_1_Params_6;
  MR_Word tscc_proc_1_input_2_Goal_7;
  MR_Word tscc_proc_1_input_3_QuantVars_8;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
  MR_Word tscc_proc_3_input_1_Params_8;
  MR_Word tscc_proc_3_input_2_Reason_9;
  MR_Word tscc_proc_3_input_3_SubGoal_10;
  MR_Word tscc_proc_3_input_4_GoalInfo_11;
  MR_Word tscc_proc_3_input_5_QuantVars_12;
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_71;

  // The code for TSCC PROC 2: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_unify/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal/5-0
  ;
  // proc 2 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_unify/7-0
  ;
  // proc 3 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_scope/7-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Params_6 = tscc_proc_1_input_1_Params_6;
    MR_Word Goal_7 = tscc_proc_1_input_2_Goal_7;
    MR_Word QuantVars_8 = tscc_proc_1_input_3_QuantVars_8;
    MR_Word STATE_VARIABLE_Info_0_70 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
    MR_Word STATE_VARIABLE_Info_71;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_7, 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal_7, 1))));

    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_42 = (MR_Word) ((MR_Word) (GoalExpr_10));
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_42;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_70;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 0))));
          MR_Word RHS_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Params_8 = Params_6;
          MR_Word next_value_of_tscc_proc_2_input_2_X_9 = Var_12;
          MR_Word next_value_of_tscc_proc_2_input_3_RHS_10 = RHS_13;
          MR_Word next_value_of_tscc_proc_2_input_4_GoalInfo_11 = GoalInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_5_QuantVars_12 = QuantVars_8;
          MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30 = STATE_VARIABLE_Info_0_70;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Params_8 = next_value_of_tscc_proc_2_input_1_Params_8;
          tscc_proc_2_input_2_X_9 = next_value_of_tscc_proc_2_input_2_X_9;
          tscc_proc_2_input_3_RHS_10 = next_value_of_tscc_proc_2_input_3_RHS_10;
          tscc_proc_2_input_4_GoalInfo_11 = next_value_of_tscc_proc_2_input_4_GoalInfo_11;
          tscc_proc_2_input_5_QuantVars_12 = next_value_of_tscc_proc_2_input_5_QuantVars_12;
          tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Args_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 2))));
          MR_Word NonLocals_23;

          NonLocals_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_6, Args_19, GoalInfo_11, NonLocals_23, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
              MR_Word Args0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
              MR_Word Args1_29;
              MR_Word Args_98;
              MR_Word NonLocals_99;

              hlds__goal_vars__vars_in_generic_call_2_p_0(GenericCall_24, &Args1_29);
              Args_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), Args0_25, Args1_29);
              NonLocals_99 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_6, Args_98, GoalInfo_11, NonLocals_99, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal\'/5", (MR_String) "call_foreign_proc");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));

              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(Params_6, Goals_38, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));

              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(Params_6, Goals_100, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));

              hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_5_p_0(Params_6, Cases_41, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
              MR_Word SubGoal_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
              MR_Word next_value_of_tscc_proc_3_input_1_Params_8 = Params_6;
              MR_Word next_value_of_tscc_proc_3_input_2_Reason_9 = Reason_43;
              MR_Word next_value_of_tscc_proc_3_input_3_SubGoal_10 = SubGoal_101;
              MR_Word next_value_of_tscc_proc_3_input_4_GoalInfo_11 = GoalInfo_11;
              MR_Word next_value_of_tscc_proc_3_input_5_QuantVars_12 = QuantVars_8;
              MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46 = STATE_VARIABLE_Info_0_70;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_Params_8 = next_value_of_tscc_proc_3_input_1_Params_8;
              tscc_proc_3_input_2_Reason_9 = next_value_of_tscc_proc_3_input_2_Reason_9;
              tscc_proc_3_input_3_SubGoal_10 = next_value_of_tscc_proc_3_input_3_SubGoal_10;
              tscc_proc_3_input_4_GoalInfo_11 = next_value_of_tscc_proc_3_input_4_GoalInfo_11;
              tscc_proc_3_input_5_QuantVars_12 = next_value_of_tscc_proc_3_input_5_QuantVars_12;
              tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46;
              goto top_of_proc_3;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
              MR_Word Cond_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
              MR_Word Then_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
              MR_Word Else_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 4))));
              MR_Word CondThenQuantVars_54;
              MR_Word STATE_VARIABLE_Info_10_84;
              MR_Word STATE_VARIABLE_Info_11_85;
              MR_Word STATE_VARIABLE_Info_12_86;
              MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
              MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

              if ((Vars_44 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Info_10_84 = STATE_VARIABLE_Info_0_70;
              else
              {
                MR_Word CondVars_50;
                MR_Word ThenVars_51;
                MR_Word CondThenVars_52;
                MR_Word EmptySet_53;
                MR_Word STATE_VARIABLE_Info_9_82;
                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 0))));
                MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 1))));
                MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 2))));
                MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 3))));

                {
                  STATE_VARIABLE_Info_9_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 0) = ((MR_Box) (Var_103));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 1) = ((MR_Box) (Var_104));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 2) = ((MR_Box) (Var_105));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 3) = ((MR_Box) (Var_106));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                CondVars_50 = hlds__quantification__free_goal_vars_1_f_0(Cond_45);
                ThenVars_51 = hlds__quantification__free_goal_vars_1_f_0(Then_46);
                parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_50, ThenVars_51, &CondThenVars_52);
                parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_53);
                hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_6, Vars_44, GoalInfo_11, EmptySet_53, CondThenVars_52, STATE_VARIABLE_Info_9_82, &STATE_VARIABLE_Info_10_84);
              }
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_44, QuantVars_8, &CondThenQuantVars_54);
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, Cond_45, CondThenQuantVars_54, STATE_VARIABLE_Info_10_84, &STATE_VARIABLE_Info_11_85);
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, Then_46, CondThenQuantVars_54, STATE_VARIABLE_Info_11_85, &STATE_VARIABLE_Info_12_86);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
              next_value_of_tscc_proc_1_input_2_Goal_7 = Else_47;
              next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
              next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_12_86;
              tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
              tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
              tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));

              switch (MR_tag((MR_Word) ShortHand_55)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalB_69 = ((MR_Word) ((MR_hl_field(0, ShortHand_55, 1))));
                    MR_Word Goal_117 = ((MR_Word) ((MR_hl_field(0, ShortHand_55, 0))));
                    MR_Word Goals_118;
                    MR_Word STATE_VARIABLE_Info_1_122;
                    MR_Word Goal_128;
                    MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

                    {
                      Goals_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Goals_118, 0) = ((MR_Box) (GoalB_69));
                      MR_hl_field(1, Goals_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, Goal_117, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_1_122);
                    Goal_128 = ((MR_Word) ((MR_hl_field(1, Goals_118, 0))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
                    next_value_of_tscc_proc_1_input_2_Goal_7 = Goal_128;
                    next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
                    next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_1_122;
                    tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
                    tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
                    tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Inner_58 = ((MR_Word) ((MR_hl_field(1, ShortHand_55, 2))));
                    MR_Word MainGoal_60 = ((MR_Word) ((MR_hl_field(1, ShortHand_55, 4))));
                    MR_Word OrElseGoals_61 = ((MR_Word) ((MR_hl_field(1, ShortHand_55, 5))));
                    MR_Word InnerDI_63 = ((MR_Word) ((MR_hl_field(0, Inner_58, 0))));
                    MR_Word InnerUO_64 = ((MR_Word) ((MR_hl_field(0, Inner_58, 1))));
                    MR_Word InsideQuantVars_65;
                    MR_Word Var_88;
                    MR_Word Var_89;
                    MR_Word STATE_VARIABLE_Info_14_91;

                    {
                      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_89, 0) = ((MR_Box) (InnerUO_64));
                      MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_88, 0) = ((MR_Box) (InnerDI_63));
                      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_89));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_88, QuantVars_8, &InsideQuantVars_65);
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, MainGoal_60, InsideQuantVars_65, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_14_91);
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(Params_6, OrElseGoals_61, InsideQuantVars_65, STATE_VARIABLE_Info_14_91, &STATE_VARIABLE_Info_71);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_102 = ((MR_Word) ((MR_hl_field(2, ShortHand_55, 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_102;
                    MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_70;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
                    tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
                    tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_71;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Params_8 = tscc_proc_2_input_1_Params_8;
    MR_Word X_9 = tscc_proc_2_input_2_X_9;
    MR_Word RHS_10 = tscc_proc_2_input_3_RHS_10;
    MR_Word GoalInfo_11 = tscc_proc_2_input_4_GoalInfo_11;
    MR_Word QuantVars_12 = tscc_proc_2_input_5_QuantVars_12;
    MR_Word STATE_VARIABLE_Info_0_30 = tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30;
    MR_Word STATE_VARIABLE_Info_31;

    switch (MR_tag((MR_Word) RHS_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Y_14 = ((MR_Word) ((MR_hl_field(0, RHS_10, 0))));
          MR_Word NonLocals_15;
          MR_Word Var_32;
          MR_Word Var_34;

          NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          {
            Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_34, 0) = ((MR_Box) (Y_14));
            MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_32, GoalInfo_11, NonLocals_15, QuantVars_12, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_31);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ys_18 = ((MR_Word) ((MR_hl_field(1, RHS_10, 2))));
          MR_Word Var_36;
          MR_Word NonLocals_43;

          NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (Ys_18));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_36, GoalInfo_11, NonLocals_43, QuantVars_12, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_31);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVarsModes_23 = ((MR_Word) ((MR_hl_field(2, RHS_10, 2))));
          MR_Word LambdaGoal_25 = ((MR_Word) ((MR_hl_field(2, RHS_10, 4))));
          MR_Word ArgVars_26;
          MR_Word LambdaGoalInfo_28;
          MR_Word LambdaNonLocals_29;
          MR_Word STATE_VARIABLE_Info_3_38;
          MR_Word Var_39;
          MR_Word STATE_VARIABLE_Info_4_40;
          MR_Word NonLocals_44;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_23, &ArgVars_26);
          LambdaGoalInfo_28 = ((MR_Word) ((MR_hl_field(0, LambdaGoal_25, 1))));
          LambdaNonLocals_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_28);
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, ArgVars_26, GoalInfo_11, LambdaNonLocals_29, QuantVars_12, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_3_38);
          NonLocals_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_39, GoalInfo_11, NonLocals_44, QuantVars_12, STATE_VARIABLE_Info_3_38, &STATE_VARIABLE_Info_4_40);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
          next_value_of_tscc_proc_1_input_2_Goal_7 = LambdaGoal_25;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_12;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_4_40;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_31;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Params_8 = tscc_proc_3_input_1_Params_8;
    MR_Word Reason_9 = tscc_proc_3_input_2_Reason_9;
    MR_Word SubGoal_10 = tscc_proc_3_input_3_SubGoal_10;
    MR_Word GoalInfo_11 = tscc_proc_3_input_4_GoalInfo_11;
    MR_Word QuantVars_12 = tscc_proc_3_input_5_QuantVars_12;
    MR_Word STATE_VARIABLE_Info_0_46 = tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46;
    MR_Word STATE_VARIABLE_Info_47;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Reason_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(0, Reason_9, 0))));
          MR_Word Creator_15 = ((MR_Unsigned) ((MR_hl_field(0, Reason_9, 1))) & (MR_Integer) 1);
          MR_Word SubQuantVars_20;
          MR_Word STATE_VARIABLE_Info_2_50;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          if ((Vars_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubQuantVars_20 = QuantVars_12;
            STATE_VARIABLE_Info_2_50 = STATE_VARIABLE_Info_0_46;
          }
          else
          {
            MR_Word SubGoalVars_18;
            MR_Word EmptySet_19;
            MR_Word STATE_VARIABLE_Info_1_48;
            MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 0))));
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 1))));
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 2))));
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 3))));

            {
              STATE_VARIABLE_Info_1_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 0) = ((MR_Box) (Var_73));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 1) = ((MR_Box) (Var_74));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 2) = ((MR_Box) (Var_75));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 3) = ((MR_Box) (Var_76));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
            SubGoalVars_18 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_10);
            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_19);
            switch (Creator_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  SubQuantVars_20 = QuantVars_12;
                  STATE_VARIABLE_Info_2_50 = STATE_VARIABLE_Info_1_48;
                }
                break;
              case (MR_Integer) 0:
                {
                  hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Vars_14, GoalInfo_11, EmptySet_19, SubGoalVars_18, STATE_VARIABLE_Info_1_48, &STATE_VARIABLE_Info_2_50);
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_14, QuantVars_12, &SubQuantVars_20);
                }
                break;
            }
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
          next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = SubQuantVars_20;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_2_50;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadWarning_24 = ((MR_Unsigned) ((MR_hl_field(1, Reason_9, 0))) & (MR_Integer) 7);
          MR_Word TailWarnings_25 = ((MR_Word) ((MR_hl_field(1, Reason_9, 1))));
          MR_Word SubParams0_26;
          MR_Word SubParams_27;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          succeeded = (HeadWarning_24 == (MR_Integer) 0);
          if (!(succeeded))
            succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 0)), TailWarnings_25);
          if (succeeded)
          {
            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, Params_8, 0))));
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, Params_8, 1))));
            MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, Params_8, 2))));
            MR_Word Var_82 = ((MR_Unsigned) ((MR_hl_field(0, Params_8, 3))) & (MR_Integer) 1);

            {
              SubParams0_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubParams0_26, 0) = ((MR_Box) (Var_78));
              MR_hl_field(0, SubParams0_26, 1) = ((MR_Box) (Var_79));
              MR_hl_field(0, SubParams0_26, 2) = ((MR_Box) (Var_80));
              MR_hl_field(0, SubParams0_26, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_82)));
            }
          }
          else
            SubParams0_26 = Params_8;
          succeeded = (HeadWarning_24 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 1)), TailWarnings_25);
          if (succeeded)
          {
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, SubParams0_26, 0))));
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, SubParams0_26, 1))));
            MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, SubParams0_26, 2))));
            MR_Word Var_86 = ((((MR_Unsigned) ((MR_hl_field(0, SubParams0_26, 3))) >> 1)) & (MR_Integer) 1);

            {
              SubParams_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubParams_27, 0) = ((MR_Box) (Var_83));
              MR_hl_field(0, SubParams_27, 1) = ((MR_Box) (Var_84));
              MR_hl_field(0, SubParams_27, 2) = ((MR_Box) (Var_85));
              MR_hl_field(0, SubParams_27, 3) = (MR_Box) (((((MR_Unsigned) (Var_86) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
            }
          }
          else
            SubParams_27 = SubParams0_26;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = SubParams_27;
          next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_12;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_46;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Info_4_52;
          MR_Word Vars_69 = ((MR_Word) ((MR_hl_field(2, Reason_9, 0))));
          MR_Word SubQuantVars_72;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          if ((Vars_69 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubQuantVars_72 = QuantVars_12;
            STATE_VARIABLE_Info_4_52 = STATE_VARIABLE_Info_0_46;
          }
          else
          {
            MR_Word SubGoalVars_65;
            MR_Word EmptySet_66;

            SubGoalVars_65 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_10);
            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_66);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Vars_69, GoalInfo_11, EmptySet_66, SubGoalVars_65, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_4_52);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_69, QuantVars_12, &SubQuantVars_72);
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
          next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = SubQuantVars_72;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_4_52;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Reason_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
            {
              MR_Word next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
              MR_Word next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
              MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_12;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_46;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
              tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
              tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TermVar_40 = ((MR_Word) ((MR_hl_field(3, Reason_9, 1))));
              MR_Word NonLocals_42;
              MR_Word Var_60;

              NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (TermVar_40));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_60, GoalInfo_11, NonLocals_42, QuantVars_12, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_47);
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_scope\'/7", (MR_String) "loop_control");
              return;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_47;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_71 = tscc_output_1_STATE_VARIABLE_Info_71;
  return;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_scope_7_p_0(
  MR_Word tscc_proc_3_input_1_Params_8,
  MR_Word tscc_proc_3_input_2_Reason_9,
  MR_Word tscc_proc_3_input_3_SubGoal_10,
  MR_Word tscc_proc_3_input_4_GoalInfo_11,
  MR_Word tscc_proc_3_input_5_QuantVars_12,
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_Info_71)
{
  MR_Word tscc_proc_1_input_1_Params_6;
  MR_Word tscc_proc_1_input_2_Goal_7;
  MR_Word tscc_proc_1_input_3_QuantVars_8;
  MR_Word tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
  MR_Word tscc_proc_2_input_1_Params_8;
  MR_Word tscc_proc_2_input_2_X_9;
  MR_Word tscc_proc_2_input_3_RHS_10;
  MR_Word tscc_proc_2_input_4_GoalInfo_11;
  MR_Word tscc_proc_2_input_5_QuantVars_12;
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30;
  MR_Word tscc_output_1_STATE_VARIABLE_Info_71;

  // The code for TSCC PROC 3: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_scope/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal/5-0
  ;
  // proc 2 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_unify/7-0
  ;
  // proc 3 in TSCC: pred hlds.make_hlds.make_hlds_warn.warn_singletons_in_scope/7-0
  ;
  ;
  goto top_of_proc_3;
top_of_proc_1:;
  {
    MR_Word Params_6 = tscc_proc_1_input_1_Params_6;
    MR_Word Goal_7 = tscc_proc_1_input_2_Goal_7;
    MR_Word QuantVars_8 = tscc_proc_1_input_3_QuantVars_8;
    MR_Word STATE_VARIABLE_Info_0_70 = tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
    MR_Word STATE_VARIABLE_Info_71;
    MR_Word GoalExpr_10 = ((MR_Word) ((MR_hl_field(0, Goal_7, 0))));
    MR_Word GoalInfo_11 = ((MR_Word) ((MR_hl_field(0, Goal_7, 1))));

    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_42 = (MR_Word) ((MR_Word) (GoalExpr_10));
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_42;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_70;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 0))));
          MR_Word RHS_13 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Params_8 = Params_6;
          MR_Word next_value_of_tscc_proc_2_input_2_X_9 = Var_12;
          MR_Word next_value_of_tscc_proc_2_input_3_RHS_10 = RHS_13;
          MR_Word next_value_of_tscc_proc_2_input_4_GoalInfo_11 = GoalInfo_11;
          MR_Word next_value_of_tscc_proc_2_input_5_QuantVars_12 = QuantVars_8;
          MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30 = STATE_VARIABLE_Info_0_70;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Params_8 = next_value_of_tscc_proc_2_input_1_Params_8;
          tscc_proc_2_input_2_X_9 = next_value_of_tscc_proc_2_input_2_X_9;
          tscc_proc_2_input_3_RHS_10 = next_value_of_tscc_proc_2_input_3_RHS_10;
          tscc_proc_2_input_4_GoalInfo_11 = next_value_of_tscc_proc_2_input_4_GoalInfo_11;
          tscc_proc_2_input_5_QuantVars_12 = next_value_of_tscc_proc_2_input_5_QuantVars_12;
          tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Args_19 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, 2))));
          MR_Word NonLocals_23;

          NonLocals_23 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_6, Args_19, GoalInfo_11, NonLocals_23, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
              MR_Word Args0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
              MR_Word Args1_29;
              MR_Word Args_98;
              MR_Word NonLocals_99;

              hlds__goal_vars__vars_in_generic_call_2_p_0(GenericCall_24, &Args1_29);
              Args_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), Args0_25, Args1_29);
              NonLocals_99 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_6, Args_98, GoalInfo_11, NonLocals_99, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_goal\'/5", (MR_String) "call_foreign_proc");
              return;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));

              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(Params_6, Goals_38, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));

              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(Params_6, Goals_100, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_41 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));

              hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_5_p_0(Params_6, Cases_41, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_71);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
              MR_Word SubGoal_101 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
              MR_Word next_value_of_tscc_proc_3_input_1_Params_8 = Params_6;
              MR_Word next_value_of_tscc_proc_3_input_2_Reason_9 = Reason_43;
              MR_Word next_value_of_tscc_proc_3_input_3_SubGoal_10 = SubGoal_101;
              MR_Word next_value_of_tscc_proc_3_input_4_GoalInfo_11 = GoalInfo_11;
              MR_Word next_value_of_tscc_proc_3_input_5_QuantVars_12 = QuantVars_8;
              MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46 = STATE_VARIABLE_Info_0_70;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_Params_8 = next_value_of_tscc_proc_3_input_1_Params_8;
              tscc_proc_3_input_2_Reason_9 = next_value_of_tscc_proc_3_input_2_Reason_9;
              tscc_proc_3_input_3_SubGoal_10 = next_value_of_tscc_proc_3_input_3_SubGoal_10;
              tscc_proc_3_input_4_GoalInfo_11 = next_value_of_tscc_proc_3_input_4_GoalInfo_11;
              tscc_proc_3_input_5_QuantVars_12 = next_value_of_tscc_proc_3_input_5_QuantVars_12;
              tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46;
              goto top_of_proc_3;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_44 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));
              MR_Word Cond_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 2))));
              MR_Word Then_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 3))));
              MR_Word Else_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 4))));
              MR_Word CondThenQuantVars_54;
              MR_Word STATE_VARIABLE_Info_10_84;
              MR_Word STATE_VARIABLE_Info_11_85;
              MR_Word STATE_VARIABLE_Info_12_86;
              MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
              MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
              MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

              if ((Vars_44 == (MR_Word) ((MR_Unsigned) 0U)))
                STATE_VARIABLE_Info_10_84 = STATE_VARIABLE_Info_0_70;
              else
              {
                MR_Word CondVars_50;
                MR_Word ThenVars_51;
                MR_Word CondThenVars_52;
                MR_Word EmptySet_53;
                MR_Word STATE_VARIABLE_Info_9_82;
                MR_Word Var_103 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 0))));
                MR_Word Var_104 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 1))));
                MR_Word Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 2))));
                MR_Word Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_70, 3))));

                {
                  STATE_VARIABLE_Info_9_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 0) = ((MR_Box) (Var_103));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 1) = ((MR_Box) (Var_104));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 2) = ((MR_Box) (Var_105));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 3) = ((MR_Box) (Var_106));
                  MR_hl_field(0, STATE_VARIABLE_Info_9_82, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                }
                CondVars_50 = hlds__quantification__free_goal_vars_1_f_0(Cond_45);
                ThenVars_51 = hlds__quantification__free_goal_vars_1_f_0(Then_46);
                parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), CondVars_50, ThenVars_51, &CondThenVars_52);
                parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_53);
                hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_6, Vars_44, GoalInfo_11, EmptySet_53, CondThenVars_52, STATE_VARIABLE_Info_9_82, &STATE_VARIABLE_Info_10_84);
              }
              parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_44, QuantVars_8, &CondThenQuantVars_54);
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, Cond_45, CondThenQuantVars_54, STATE_VARIABLE_Info_10_84, &STATE_VARIABLE_Info_11_85);
              hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, Then_46, CondThenQuantVars_54, STATE_VARIABLE_Info_11_85, &STATE_VARIABLE_Info_12_86);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
              next_value_of_tscc_proc_1_input_2_Goal_7 = Else_47;
              next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
              next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_12_86;
              tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
              tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
              tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, 1))));

              switch (MR_tag((MR_Word) ShortHand_55)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word GoalB_69 = ((MR_Word) ((MR_hl_field(0, ShortHand_55, 1))));
                    MR_Word Goal_117 = ((MR_Word) ((MR_hl_field(0, ShortHand_55, 0))));
                    MR_Word Goals_118;
                    MR_Word STATE_VARIABLE_Info_1_122;
                    MR_Word Goal_128;
                    MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
                    MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

                    {
                      Goals_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Goals_118, 0) = ((MR_Box) (GoalB_69));
                      MR_hl_field(1, Goals_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, Goal_117, QuantVars_8, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_1_122);
                    Goal_128 = ((MR_Word) ((MR_hl_field(1, Goals_118, 0))));
                    // direct tailcall eliminated
                    ;
                    next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
                    next_value_of_tscc_proc_1_input_2_Goal_7 = Goal_128;
                    next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
                    next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_1_122;
                    tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
                    tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
                    tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
                    goto top_of_proc_1;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Inner_58 = ((MR_Word) ((MR_hl_field(1, ShortHand_55, 2))));
                    MR_Word MainGoal_60 = ((MR_Word) ((MR_hl_field(1, ShortHand_55, 4))));
                    MR_Word OrElseGoals_61 = ((MR_Word) ((MR_hl_field(1, ShortHand_55, 5))));
                    MR_Word InnerDI_63 = ((MR_Word) ((MR_hl_field(0, Inner_58, 0))));
                    MR_Word InnerUO_64 = ((MR_Word) ((MR_hl_field(0, Inner_58, 1))));
                    MR_Word InsideQuantVars_65;
                    MR_Word Var_88;
                    MR_Word Var_89;
                    MR_Word STATE_VARIABLE_Info_14_91;

                    {
                      Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_89, 0) = ((MR_Box) (InnerUO_64));
                      MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Var_88, 0) = ((MR_Box) (InnerDI_63));
                      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_89));
                    }
                    parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_88, QuantVars_8, &InsideQuantVars_65);
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_6, MainGoal_60, InsideQuantVars_65, STATE_VARIABLE_Info_0_70, &STATE_VARIABLE_Info_14_91);
                    hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(Params_6, OrElseGoals_61, InsideQuantVars_65, STATE_VARIABLE_Info_14_91, &STATE_VARIABLE_Info_71);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_102 = ((MR_Word) ((MR_hl_field(2, ShortHand_55, 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Params_6 = Params_6;
                    MR_Word next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_102;
                    MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_8;
                    MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_70;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
                    tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
                    tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
                    tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_71;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Params_8 = tscc_proc_2_input_1_Params_8;
    MR_Word X_9 = tscc_proc_2_input_2_X_9;
    MR_Word RHS_10 = tscc_proc_2_input_3_RHS_10;
    MR_Word GoalInfo_11 = tscc_proc_2_input_4_GoalInfo_11;
    MR_Word QuantVars_12 = tscc_proc_2_input_5_QuantVars_12;
    MR_Word STATE_VARIABLE_Info_0_30 = tscc_proc_2_input_6_STATE_VARIABLE_Info_0_30;
    MR_Word STATE_VARIABLE_Info_31;

    switch (MR_tag((MR_Word) RHS_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Y_14 = ((MR_Word) ((MR_hl_field(0, RHS_10, 0))));
          MR_Word NonLocals_15;
          MR_Word Var_32;
          MR_Word Var_34;

          NonLocals_15 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          {
            Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_34, 0) = ((MR_Box) (Y_14));
            MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_34));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_32, GoalInfo_11, NonLocals_15, QuantVars_12, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_31);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ys_18 = ((MR_Word) ((MR_hl_field(1, RHS_10, 2))));
          MR_Word Var_36;
          MR_Word NonLocals_43;

          NonLocals_43 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          {
            Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_36, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, Var_36, 1) = ((MR_Box) (Ys_18));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_36, GoalInfo_11, NonLocals_43, QuantVars_12, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_31);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgVarsModes_23 = ((MR_Word) ((MR_hl_field(2, RHS_10, 2))));
          MR_Word LambdaGoal_25 = ((MR_Word) ((MR_hl_field(2, RHS_10, 4))));
          MR_Word ArgVars_26;
          MR_Word LambdaGoalInfo_28;
          MR_Word LambdaNonLocals_29;
          MR_Word STATE_VARIABLE_Info_3_38;
          MR_Word Var_39;
          MR_Word STATE_VARIABLE_Info_4_40;
          MR_Word NonLocals_44;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          mercury__assoc_list__keys_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), ArgVarsModes_23, &ArgVars_26);
          LambdaGoalInfo_28 = ((MR_Word) ((MR_hl_field(0, LambdaGoal_25, 1))));
          LambdaNonLocals_29 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(LambdaGoalInfo_28);
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, ArgVars_26, GoalInfo_11, LambdaNonLocals_29, QuantVars_12, STATE_VARIABLE_Info_0_30, &STATE_VARIABLE_Info_3_38);
          NonLocals_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (X_9));
            MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_39, GoalInfo_11, NonLocals_44, QuantVars_12, STATE_VARIABLE_Info_3_38, &STATE_VARIABLE_Info_4_40);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
          next_value_of_tscc_proc_1_input_2_Goal_7 = LambdaGoal_25;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_12;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_4_40;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_31;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Params_8 = tscc_proc_3_input_1_Params_8;
    MR_Word Reason_9 = tscc_proc_3_input_2_Reason_9;
    MR_Word SubGoal_10 = tscc_proc_3_input_3_SubGoal_10;
    MR_Word GoalInfo_11 = tscc_proc_3_input_4_GoalInfo_11;
    MR_Word QuantVars_12 = tscc_proc_3_input_5_QuantVars_12;
    MR_Word STATE_VARIABLE_Info_0_46 = tscc_proc_3_input_6_STATE_VARIABLE_Info_0_46;
    MR_Word STATE_VARIABLE_Info_47;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Reason_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Vars_14 = ((MR_Word) ((MR_hl_field(0, Reason_9, 0))));
          MR_Word Creator_15 = ((MR_Unsigned) ((MR_hl_field(0, Reason_9, 1))) & (MR_Integer) 1);
          MR_Word SubQuantVars_20;
          MR_Word STATE_VARIABLE_Info_2_50;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          if ((Vars_14 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubQuantVars_20 = QuantVars_12;
            STATE_VARIABLE_Info_2_50 = STATE_VARIABLE_Info_0_46;
          }
          else
          {
            MR_Word SubGoalVars_18;
            MR_Word EmptySet_19;
            MR_Word STATE_VARIABLE_Info_1_48;
            MR_Word Var_73 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 0))));
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 1))));
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 2))));
            MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_46, 3))));

            {
              STATE_VARIABLE_Info_1_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 0) = ((MR_Box) (Var_73));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 1) = ((MR_Box) (Var_74));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 2) = ((MR_Box) (Var_75));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 3) = ((MR_Box) (Var_76));
              MR_hl_field(0, STATE_VARIABLE_Info_1_48, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            }
            SubGoalVars_18 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_10);
            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_19);
            switch (Creator_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  SubQuantVars_20 = QuantVars_12;
                  STATE_VARIABLE_Info_2_50 = STATE_VARIABLE_Info_1_48;
                }
                break;
              case (MR_Integer) 0:
                {
                  hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Vars_14, GoalInfo_11, EmptySet_19, SubGoalVars_18, STATE_VARIABLE_Info_1_48, &STATE_VARIABLE_Info_2_50);
                  parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_14, QuantVars_12, &SubQuantVars_20);
                }
                break;
            }
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
          next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = SubQuantVars_20;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_2_50;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word HeadWarning_24 = ((MR_Unsigned) ((MR_hl_field(1, Reason_9, 0))) & (MR_Integer) 7);
          MR_Word TailWarnings_25 = ((MR_Word) ((MR_hl_field(1, Reason_9, 1))));
          MR_Word SubParams0_26;
          MR_Word SubParams_27;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          succeeded = (HeadWarning_24 == (MR_Integer) 0);
          if (!(succeeded))
            succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 0)), TailWarnings_25);
          if (succeeded)
          {
            MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, Params_8, 0))));
            MR_Word Var_79 = ((MR_Word) ((MR_hl_field(0, Params_8, 1))));
            MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, Params_8, 2))));
            MR_Word Var_82 = ((MR_Unsigned) ((MR_hl_field(0, Params_8, 3))) & (MR_Integer) 1);

            {
              SubParams0_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubParams0_26, 0) = ((MR_Box) (Var_78));
              MR_hl_field(0, SubParams0_26, 1) = ((MR_Box) (Var_79));
              MR_hl_field(0, SubParams0_26, 2) = ((MR_Box) (Var_80));
              MR_hl_field(0, SubParams0_26, 3) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) (Var_82)));
            }
          }
          else
            SubParams0_26 = Params_8;
          succeeded = (HeadWarning_24 == (MR_Integer) 1);
          if (!(succeeded))
            succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 1)), TailWarnings_25);
          if (succeeded)
          {
            MR_Word Var_83 = ((MR_Word) ((MR_hl_field(0, SubParams0_26, 0))));
            MR_Word Var_84 = ((MR_Word) ((MR_hl_field(0, SubParams0_26, 1))));
            MR_Word Var_85 = ((MR_Word) ((MR_hl_field(0, SubParams0_26, 2))));
            MR_Word Var_86 = ((((MR_Unsigned) ((MR_hl_field(0, SubParams0_26, 3))) >> 1)) & (MR_Integer) 1);

            {
              SubParams_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, SubParams_27, 0) = ((MR_Box) (Var_83));
              MR_hl_field(0, SubParams_27, 1) = ((MR_Box) (Var_84));
              MR_hl_field(0, SubParams_27, 2) = ((MR_Box) (Var_85));
              MR_hl_field(0, SubParams_27, 3) = (MR_Box) (((((MR_Unsigned) (Var_86) << 1)) | (MR_Unsigned) ((MR_Integer) 0)));
            }
          }
          else
            SubParams_27 = SubParams0_26;
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = SubParams_27;
          next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_12;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_46;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word STATE_VARIABLE_Info_4_52;
          MR_Word Vars_69 = ((MR_Word) ((MR_hl_field(2, Reason_9, 0))));
          MR_Word SubQuantVars_72;
          MR_Word next_value_of_tscc_proc_1_input_1_Params_6;
          MR_Word next_value_of_tscc_proc_1_input_2_Goal_7;
          MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8;
          MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;

          if ((Vars_69 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            SubQuantVars_72 = QuantVars_12;
            STATE_VARIABLE_Info_4_52 = STATE_VARIABLE_Info_0_46;
          }
          else
          {
            MR_Word SubGoalVars_65;
            MR_Word EmptySet_66;

            SubGoalVars_65 = hlds__quantification__free_goal_vars_1_f_0(SubGoal_10);
            parse_tree__set_of_var__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), &EmptySet_66);
            hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Vars_69, GoalInfo_11, EmptySet_66, SubGoalVars_65, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_4_52);
            parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Vars_69, QuantVars_12, &SubQuantVars_72);
          }
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
          next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
          next_value_of_tscc_proc_1_input_3_QuantVars_8 = SubQuantVars_72;
          next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_4_52;
          tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
          tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
          tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
          tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Reason_9, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
            {
              MR_Word next_value_of_tscc_proc_1_input_1_Params_6 = Params_8;
              MR_Word next_value_of_tscc_proc_1_input_2_Goal_7 = SubGoal_10;
              MR_Word next_value_of_tscc_proc_1_input_3_QuantVars_8 = QuantVars_12;
              MR_Word next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = STATE_VARIABLE_Info_0_46;

              // direct tailcall eliminated
              ;
              tscc_proc_1_input_1_Params_6 = next_value_of_tscc_proc_1_input_1_Params_6;
              tscc_proc_1_input_2_Goal_7 = next_value_of_tscc_proc_1_input_2_Goal_7;
              tscc_proc_1_input_3_QuantVars_8 = next_value_of_tscc_proc_1_input_3_QuantVars_8;
              tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70 = next_value_of_tscc_proc_1_input_4_STATE_VARIABLE_Info_0_70;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word TermVar_40 = ((MR_Word) ((MR_hl_field(3, Reason_9, 1))));
              MR_Word NonLocals_42;
              MR_Word Var_60;

              NonLocals_42 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_11);
              {
                Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_60, 0) = ((MR_Box) (TermVar_40));
                MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(Params_8, Var_60, GoalInfo_11, NonLocals_42, QuantVars_12, STATE_VARIABLE_Info_0_46, &STATE_VARIABLE_Info_47);
            }
            break;
          case (MR_Integer) 8:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.warn_singletons_in_scope\'/7", (MR_String) "loop_control");
              return;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_Info_71 = STATE_VARIABLE_Info_47;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_Info_71 = tscc_output_1_STATE_VARIABLE_Info_71;
  return;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_cases_5_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word QuantVars_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word Case_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Cases_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Goal_18 = ((MR_Word) ((MR_hl_field(0, Case_12, 2))));
      MR_Word STATE_VARIABLE_Info_1_21;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_1, Goal_18, QuantVars_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Cases_13;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_1_21;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_list_5_p_0(
  MR_Word Params_1,
  MR_Word HeadVar__2_2,
  MR_Word QuantVars_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
    else
    {
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Goals_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word STATE_VARIABLE_Info_1_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      hlds__make_hlds__make_hlds_warn__warn_singletons_in_goal_5_p_0(Params_1, Goal_12, QuantVars_3, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_1_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Goals_13;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_1_18;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__make_hlds_warn__is_multi_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__make_hlds__make_hlds_warn__is_singleton_var_4_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0(
  MR_Word Params_8,
  MR_Word GoalVars_9,
  MR_Word GoalInfo_10,
  MR_Word NonLocals_11,
  MR_Word QuantVars_12,
  MR_Word STATE_VARIABLE_Info_0_29,
  MR_Word * STATE_VARIABLE_Info_30)
{
  MR_bool succeeded;
  MR_Word VarSet_14 = ((MR_Word) ((MR_hl_field(0, Params_8, 2))));
  MR_Word PfSymNameArity_15 = ((MR_Word) ((MR_hl_field(0, Params_8, 1))));
  MR_Word Context_16;
  MR_Word SingleVars_17;
  MR_Word MultiVars_23;
  MR_Word Var_31;
  MR_Word STATE_VARIABLE_Info_2_35;
  MR_Word Var_39;

  Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_3[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (NonLocals_11));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (QuantVars_12));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (VarSet_14));
  }
  mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), Var_31, GoalVars_9, &SingleVars_17);
  if ((SingleVars_17 == (MR_Word) ((MR_Unsigned) 0U)))
    STATE_VARIABLE_Info_2_35 = STATE_VARIABLE_Info_0_29;
  else
  {
    MR_Word HeadSV_18 = ((MR_Word) ((MR_hl_field(1, SingleVars_17, 0))));
    MR_Word TailSVs_19 = ((MR_Word) ((MR_hl_field(1, SingleVars_17, 1))));

    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_10, (MR_Integer) 15);
    if (succeeded)
      STATE_VARIABLE_Info_2_35 = STATE_VARIABLE_Info_0_29;
    else
    {
      succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_10, (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word SingleHeadVars0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, 1))));
        MR_Word SingleHeadVars_21;
        MR_Word STATE_VARIABLE_Info_1_34;
        MR_Word Var_36;
        MR_Word Var_57;
        MR_Word Var_59;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_66;

        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SingleVars_17, SingleHeadVars0_20, &SingleHeadVars_21);
        Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, 0))));
        Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, 2))));
        Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, 3))));
        Var_61 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, 4))) & (MR_Integer) 1);
        {
          STATE_VARIABLE_Info_1_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_1_34, 0) = ((MR_Box) (Var_57));
          MR_hl_field(0, STATE_VARIABLE_Info_1_34, 1) = ((MR_Box) (SingleHeadVars_21));
          MR_hl_field(0, STATE_VARIABLE_Info_1_34, 2) = ((MR_Box) (Var_59));
          MR_hl_field(0, STATE_VARIABLE_Info_1_34, 3) = ((MR_Box) (Var_60));
          MR_hl_field(0, STATE_VARIABLE_Info_1_34, 4) = (MR_Box) ((MR_Unsigned) (Var_61));
        }
        Var_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
        Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_34, 0))));
        Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_34, 1))));
        Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_1_34, 2))));
        Var_66 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_1_34, 4))) & (MR_Integer) 1);
        {
          STATE_VARIABLE_Info_2_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_2_35, 0) = ((MR_Box) (Var_62));
          MR_hl_field(0, STATE_VARIABLE_Info_2_35, 1) = ((MR_Box) (Var_63));
          MR_hl_field(0, STATE_VARIABLE_Info_2_35, 2) = ((MR_Box) (Var_64));
          MR_hl_field(0, STATE_VARIABLE_Info_2_35, 3) = ((MR_Box) (Var_36));
          MR_hl_field(0, STATE_VARIABLE_Info_2_35, 4) = (MR_Box) ((MR_Unsigned) (Var_66));
        }
      }
      else
      {
        MR_Word SingleSpecs_22;
        MR_Word Specs0_86;
        MR_Word Specs_87;
        MR_Word Var_93;
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;

        hlds__make_hlds__make_hlds_warn__generate_variable_warning_7_p_0(Params_8, Context_16, (MR_Integer) 0, PfSymNameArity_15, HeadSV_18, TailSVs_19, &SingleSpecs_22);
        Specs0_86 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, 0))));
        Specs_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), SingleSpecs_22, Specs0_86);
        Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, 1))));
        Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, 2))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, 3))));
        Var_96 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_0_29, 4))) & (MR_Integer) 1);
        {
          STATE_VARIABLE_Info_2_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, STATE_VARIABLE_Info_2_35, 0) = ((MR_Box) (Specs_87));
          MR_hl_field(0, STATE_VARIABLE_Info_2_35, 1) = ((MR_Box) (Var_93));
          MR_hl_field(0, STATE_VARIABLE_Info_2_35, 2) = ((MR_Box) (Var_94));
          MR_hl_field(0, STATE_VARIABLE_Info_2_35, 3) = ((MR_Box) (Var_95));
          MR_hl_field(0, STATE_VARIABLE_Info_2_35, 4) = (MR_Box) ((MR_Unsigned) (Var_96));
        }
      }
    }
  }
  {
    Var_39 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[1]));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__warn_singletons_goal_vars_7_p_0_2));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_39, 3) = ((MR_Box) (NonLocals_11));
    MR_hl_field(0, Var_39, 4) = ((MR_Box) (VarSet_14));
  }
  mercury__list__filter_3_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), Var_39, GoalVars_9, &MultiVars_23);
  if ((MultiVars_23 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Info_30 = STATE_VARIABLE_Info_2_35;
  else
  {
    MR_Word HeadMV_24 = ((MR_Word) ((MR_hl_field(1, MultiVars_23, 0))));
    MR_Word TailMVs_25 = ((MR_Word) ((MR_hl_field(1, MultiVars_23, 1))));

    succeeded = hlds__hlds_goal__goal_info_has_feature_2_p_0(GoalInfo_10, (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word MultiHeadVars0_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_35, 2))));
      MR_Word MultiHeadVars_27;
      MR_Word STATE_VARIABLE_Info_4_41;
      MR_Word Var_43;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_80;

      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), MultiVars_23, MultiHeadVars0_26, &MultiHeadVars_27);
      Var_71 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_35, 0))));
      Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_35, 1))));
      Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_35, 3))));
      Var_75 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_2_35, 4))) & (MR_Integer) 1);
      {
        STATE_VARIABLE_Info_4_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, STATE_VARIABLE_Info_4_41, 0) = ((MR_Box) (Var_71));
        MR_hl_field(0, STATE_VARIABLE_Info_4_41, 1) = ((MR_Box) (Var_72));
        MR_hl_field(0, STATE_VARIABLE_Info_4_41, 2) = ((MR_Box) (MultiHeadVars_27));
        MR_hl_field(0, STATE_VARIABLE_Info_4_41, 3) = ((MR_Box) (Var_74));
        MR_hl_field(0, STATE_VARIABLE_Info_4_41, 4) = (MR_Box) ((MR_Unsigned) (Var_75));
      }
      Var_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_10);
      Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_4_41, 0))));
      Var_77 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_4_41, 1))));
      Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_4_41, 2))));
      Var_80 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_4_41, 4))) & (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_30 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_76));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_77));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_78));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_43));
        MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (Var_80));
      }
    }
    else
    {
      MR_Word MultiSpecs_28;
      MR_Word Specs0_98;
      MR_Word Specs_99;
      MR_Word Var_105;
      MR_Word Var_106;
      MR_Word Var_107;
      MR_Word Var_108;

      hlds__make_hlds__make_hlds_warn__generate_variable_warning_7_p_0(Params_8, Context_16, (MR_Integer) 1, PfSymNameArity_15, HeadMV_24, TailMVs_25, &MultiSpecs_28);
      Specs0_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_35, 0))));
      Specs_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), MultiSpecs_28, Specs0_98);
      Var_105 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_35, 1))));
      Var_106 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_35, 2))));
      Var_107 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Info_2_35, 3))));
      Var_108 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_Info_2_35, 4))) & (MR_Integer) 1);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_30 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Specs_99));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_105));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_106));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_107));
        MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) (Var_108));
      }
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_63;

  conv0_HeadVar__3_63 = hlds__make_hlds__make_hlds_warn__IntroducedFrom__func__generate_variable_warning__684__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_63));
  return wrapper_arg_2;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_7_p_0(
  MR_Word Params_8,
  MR_Word Context_9,
  MR_Word SingleMulti_10,
  MR_Word PfSymNameArity_11,
  MR_Word Var0_12,
  MR_Word Vars0_13,
  MR_Word * Specs_14)
{
  MR_bool succeeded;
  MR_Word Var_65 = ((MR_Unsigned) ((MR_hl_field(0, Params_8, 3))) & (MR_Integer) 1);
  MR_Word Var_66 = ((((MR_Unsigned) ((MR_hl_field(0, Params_8, 3))) >> 1)) & (MR_Integer) 1);

  switch (SingleMulti_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      succeeded = (Var_65 == (MR_Integer) 0);
      break;
    case (MR_Integer) 0:
      succeeded = (Var_66 == (MR_Integer) 0);
      break;
  }
  if (succeeded)
    *Specs_14 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word PreamblePieces_15;
    MR_Word Vars_16;
    MR_Word VarSet_17;
    MR_Word WarnOption_18;
    MR_Word NoDymVarNames_25;
    MR_Word Specs0_26;
    MR_String OnlyMoreThanOnce_27;
    MR_Word Var_32;
    MR_Word Var_33;

    {
      Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(3, Var_33, 1) = ((MR_Box) (PfSymNameArity_11));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[24])));
    }
    {
      PreamblePieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PreamblePieces_15, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[21])));
      MR_hl_field(1, PreamblePieces_15, 1) = ((MR_Box) (Var_32));
    }
    {
      Vars_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Vars_16, 0) = ((MR_Box) (Var0_12));
      MR_hl_field(1, Vars_16, 1) = ((MR_Box) (Vars0_13));
    }
    VarSet_17 = ((MR_Word) ((MR_hl_field(0, Params_8, 2))));
    switch (SingleMulti_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Var_44;

          WarnOption_18 = (MR_Integer) 189;
          OnlyMoreThanOnce_27 = (MR_String) "more than once";
          {
            Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_44, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_4[0]));
            MR_hl_field(0, Var_44, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__generate_variable_warning_7_p_0_1));
            MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Var_44, 3) = ((MR_Box) (VarSet_17));
          }
          NoDymVarNames_25 = mercury__list__map_2_f_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, Vars_16);
          Specs0_26 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word AllVarNamesAL_19;
          MR_Word AllVarNames_20;
          MR_Word PlainVarNameList_21;
          MR_Word BangVarNameList_22;
          MR_Word PlainVarNames_23;
          MR_Word BangVarNames_24;

          WarnOption_18 = (MR_Integer) 188;
          mercury__varset__var_name_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_17, &AllVarNamesAL_19);
          mercury__assoc_list__values_2_p_0((MR_Word) (&hlds__make_hlds__make_hlds_warn_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), AllVarNamesAL_19, &AllVarNames_20);
          hlds__make_hlds__make_hlds_warn__separate_state_var_names_5_p_0(AllVarNames_20, (MR_Word) ((MR_Unsigned) 0U), &PlainVarNameList_21, (MR_Word) ((MR_Unsigned) 0U), &BangVarNameList_22);
          mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PlainVarNameList_21, &PlainVarNames_23);
          mercury__set__list_to_set_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BangVarNameList_22, &BangVarNames_24);
          hlds__make_hlds__make_hlds_warn__generate_singleton_variable_warning_dyms_11_p_0(VarSet_17, Context_9, PreamblePieces_15, WarnOption_18, PlainVarNames_23, BangVarNames_24, Vars_16, (MR_Word) ((MR_Unsigned) 0U), &NoDymVarNames_25, (MR_Word) ((MR_Unsigned) 0U), &Specs0_26);
          OnlyMoreThanOnce_27 = (MR_String) "only once";
        }
        break;
    }
    hlds__make_hlds__make_hlds_warn__generate_variable_warning_no_dym_7_p_0(Context_9, PreamblePieces_15, WarnOption_18, OnlyMoreThanOnce_27, NoDymVarNames_25, Specs0_26, Specs_14);
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_variable_warning_no_dym_7_p_0(
  MR_Word Context_8,
  MR_Word PreamblePieces_9,
  MR_Word WarnOption_10,
  MR_String OnlyMoreThanOnce_11,
  MR_Word VarNames0_12,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_Word VarNames_14;

  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), VarNames0_12, &VarNames_14);
  if ((VarNames_14 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  else
  {
    MR_Word Var_62 = ((MR_Word) ((MR_hl_field(1, VarNames_14, 1))));
    MR_String Var_63 = ((MR_String) ((MR_hl_field(1, VarNames_14, 0))));

    if ((Var_62 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word WarnPieces_16;
      MR_Word Spec_21;
      MR_Word Var_49;
      MR_Word Var_51;
      MR_Word Var_68;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_Word Var_78;
      MR_Word Var_79;

      {
        Var_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_71, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_71, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_71));
        MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_69 = parse_tree__error_spec__color_as_subject_1_f_0(Var_70);
      {
        Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_79, 1) = ((MR_Box) (OnlyMoreThanOnce_11));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[36])));
        MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
      }
      Var_74 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_75);
      Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_74, (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[35])));
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, Var_73);
      WarnPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[26])), Var_68);
      {
        Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_49, 0) = (MR_Box) ((MR_Unsigned) (WarnOption_10));
      }
      Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PreamblePieces_9, WarnPieces_16);
      {
        Spec_21 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_21, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.generate_variable_warning_no_dym\'/7"));
        MR_hl_field(0, Spec_21, 1) = ((MR_Box) (Var_49));
        MR_hl_field(0, Spec_21, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_21, 3) = ((MR_Box) (Context_8));
        MR_hl_field(0, Spec_21, 4) = ((MR_Box) (Var_51));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_23 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_21));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
      }
    }
    else
    {
      MR_Word VarsPieces_20;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word WarnPieces_55;
      MR_Word Spec_56;
      MR_Word Var_58;
      MR_Word Var_60;

      VarsPieces_20 = parse_tree__error_spec__quote_list_to_color_pieces_4_f_0((MR_Integer) 0, (MR_String) "and", (MR_Word) ((MR_Unsigned) 0U), VarNames_14);
      {
        Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 9U));
        MR_hl_field(3, Var_40, 1) = ((MR_Box) (OnlyMoreThanOnce_11));
      }
      {
        Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
        MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_36, 0) = ((MR_Box) (MR_mkword(3, &hlds__make_hlds__make_hlds_warn_scalar_common_1[33])));
        MR_hl_field(1, Var_36, 1) = ((MR_Box) (Var_39));
      }
      Var_35 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_36);
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_35, (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[35])));
      Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), VarsPieces_20, Var_34);
      WarnPieces_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[30])), Var_33);
      {
        Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_58, 0) = (MR_Box) ((MR_Unsigned) (WarnOption_10));
      }
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PreamblePieces_9, WarnPieces_55);
      {
        Spec_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Spec_56, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.generate_variable_warning_no_dym\'/7"));
        MR_hl_field(0, Spec_56, 1) = ((MR_Box) (Var_58));
        MR_hl_field(0, Spec_56, 2) = ((MR_Box) ((MR_Unsigned) 48U));
        MR_hl_field(0, Spec_56, 3) = ((MR_Box) (Context_8));
        MR_hl_field(0, Spec_56, 4) = ((MR_Box) (Var_60));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_23 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Spec_56));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_22));
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__generate_singleton_variable_warning_dyms_11_p_0(
  MR_Word VarSet_1,
  MR_Word Context_2,
  MR_Word PreamblePieces_3,
  MR_Word WarnOption_4,
  MR_Word PlainVarNames_5,
  MR_Word BangVarNames_6,
  MR_Word HeadVar__7_7,
  MR_Word STATE_VARIABLE_NoDymVarNames_0_8,
  MR_Word * STATE_VARIABLE_NoDymVarNames_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
      *STATE_VARIABLE_NoDymVarNames_9 = STATE_VARIABLE_NoDymVarNames_0_8;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 0))));
      MR_Word Vars_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, 1))));
      MR_String VarName_34;
      MR_String DymVarName_38;
      MR_Integer RelevantNameLen_39;
      MR_Word CompareToNames_40;
      MR_Word STATE_VARIABLE_Specs_1_57;
      MR_Word STATE_VARIABLE_NoDymVarNames_1_58;
      MR_String StateVarName_35;
      MR_String StateVarNameNum_63;
      MR_Word StateVarNameNumPieces_64;
      MR_Char Var_69;
      MR_Word NonLastStateVarNameNumPieces_65;
      MR_Word TypeCtorInfo_13_71;
      MR_String LastStateVarNameNumPieces_66;
      MR_Box conv0_LastStateVarNameNumPieces_66;
      MR_Integer _SuffixNum_67;
      MR_Word DymPieces_43;
      MR_Word TypeCtorInfo_62_62;
      MR_Word CompareToNamesList_42;
      MR_Word next_value_of_HeadVar__7_7;
      MR_Word next_value_of_STATE_VARIABLE_NoDymVarNames_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      VarName_34 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_vs_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_1, Var_30);
      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "STATE_VARIABLE_", VarName_34, &StateVarNameNum_63);
      if (succeeded)
      {
        Var_69 = (MR_Char) 95;
        StateVarNameNumPieces_64 = mercury__string__split_at_char_2_f_0(Var_69, StateVarNameNum_63);
        TypeCtorInfo_13_71 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
        succeeded = mercury__list__split_last_3_p_0(TypeCtorInfo_13_71, StateVarNameNumPieces_64, &NonLastStateVarNameNumPieces_65, &conv0_LastStateVarNameNumPieces_66);
        if (succeeded)
        {
          LastStateVarNameNumPieces_66 = ((MR_String) (conv0_LastStateVarNameNumPieces_66));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          succeeded = mercury__string__to_int_2_p_0(LastStateVarNameNumPieces_66, &_SuffixNum_67);
        if (succeeded)
          StateVarName_35 = mercury__string__join_list_2_f_0((MR_String) "_", NonLastStateVarNameNumPieces_65);
        else
          StateVarName_35 = StateVarNameNum_63;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String ColonVarName_37;
        MR_Word Var_53;
        MR_Word Var_54;

        DymVarName_38 = mercury__string__f_43_43_2_f_0((MR_String) "!.", StateVarName_35);
        ColonVarName_37 = mercury__string__f_43_43_2_f_0((MR_String) "!:", StateVarName_35);
        mercury__string__count_code_points_2_p_0(StateVarName_35, &RelevantNameLen_39);
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (ColonVarName_37));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (DymVarName_38));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
        }
        mercury__set__delete_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_53, BangVarNames_6, &CompareToNames_40);
      }
      else
      {
        MR_Word OtherPlainVarNames_41;

        DymVarName_38 = VarName_34;
        mercury__string__count_code_points_2_p_0(VarName_34, &RelevantNameLen_39);
        mercury__set__delete_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (VarName_34)), PlainVarNames_5, &OtherPlainVarNames_41);
        mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OtherPlainVarNames_41, BangVarNames_6, &CompareToNames_40);
      }
      succeeded = (RelevantNameLen_39 > (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_62_62 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
        mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_62_62, CompareToNames_40, &CompareToNamesList_42);
        parse_tree__error_spec__maybe_construct_did_you_mean_pieces_3_p_0(DymVarName_38, CompareToNamesList_42, &DymPieces_43);
        succeeded = (DymPieces_43 != (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
      {
        MR_Word DymSpec_46;
        MR_Word WarnPieces_72;
        MR_Word Var_75;
        MR_Word Var_77;
        MR_Word Var_78;
        MR_Word Var_84;
        MR_Word Var_85;
        MR_Word Var_86;
        MR_Word Var_87;
        MR_Word Var_89;
        MR_Word Var_90;

        {
          Var_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_87, 1) = ((MR_Box) (VarName_34));
        }
        {
          Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
          MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_85 = parse_tree__error_spec__color_as_subject_1_f_0(Var_86);
        Var_90 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[42])));
        Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_90, (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[35])));
        Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_85, Var_89);
        WarnPieces_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &hlds__make_hlds__make_hlds_warn_scalar_common_1[26])), Var_84);
        {
          Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_75, 0) = (MR_Box) ((MR_Unsigned) (WarnOption_4));
        }
        Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), WarnPieces_72, DymPieces_43);
        Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PreamblePieces_3, Var_78);
        {
          DymSpec_46 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, DymSpec_46, 0) = ((MR_Box) ((MR_String) "predicate \140hlds.make_hlds.make_hlds_warn.generate_singleton_variable_warning_dym\'/6"));
          MR_hl_field(0, DymSpec_46, 1) = ((MR_Box) (Var_75));
          MR_hl_field(0, DymSpec_46, 2) = ((MR_Box) ((MR_Unsigned) 48U));
          MR_hl_field(0, DymSpec_46, 3) = ((MR_Box) (Context_2));
          MR_hl_field(0, DymSpec_46, 4) = ((MR_Box) (Var_77));
        }
        {
          STATE_VARIABLE_Specs_1_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_57, 0) = ((MR_Box) (DymSpec_46));
          MR_hl_field(1, STATE_VARIABLE_Specs_1_57, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_10));
        }
        STATE_VARIABLE_NoDymVarNames_1_58 = STATE_VARIABLE_NoDymVarNames_0_8;
      }
      else
      {
        {
          STATE_VARIABLE_NoDymVarNames_1_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_NoDymVarNames_1_58, 0) = ((MR_Box) (VarName_34));
          MR_hl_field(1, STATE_VARIABLE_NoDymVarNames_1_58, 1) = ((MR_Box) (STATE_VARIABLE_NoDymVarNames_0_8));
        }
        STATE_VARIABLE_Specs_1_57 = STATE_VARIABLE_Specs_0_10;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__7_7 = Vars_31;
      next_value_of_STATE_VARIABLE_NoDymVarNames_0_8 = STATE_VARIABLE_NoDymVarNames_1_58;
      next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_1_57;
      HeadVar__7_7 = next_value_of_HeadVar__7_7;
      STATE_VARIABLE_NoDymVarNames_0_8 = next_value_of_STATE_VARIABLE_NoDymVarNames_0_8;
      STATE_VARIABLE_Specs_0_10 = next_value_of_STATE_VARIABLE_Specs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn__separate_state_var_names_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_PlainVarNames_0_2,
  MR_Word * STATE_VARIABLE_PlainVarNames_3,
  MR_Word STATE_VARIABLE_BangVarNames_0_4,
  MR_Word * STATE_VARIABLE_BangVarNames_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_BangVarNames_5 = STATE_VARIABLE_BangVarNames_0_4;
      *STATE_VARIABLE_PlainVarNames_3 = STATE_VARIABLE_PlainVarNames_0_2;
    }
    else
    {
      MR_String Name_12 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Names_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_BangVarNames_1_21;
      MR_Word STATE_VARIABLE_PlainVarNames_1_27;
      MR_String StateVarName_16;
      MR_String StateVarNameNum_28;
      MR_Word StateVarNameNumPieces_29;
      MR_Char Var_34;
      MR_Word NonLastStateVarNameNumPieces_30;
      MR_Word TypeCtorInfo_13_36;
      MR_String LastStateVarNameNumPieces_31;
      MR_Box conv0_LastStateVarNameNumPieces_31;
      MR_Integer _SuffixNum_32;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_PlainVarNames_0_2;
      MR_Word next_value_of_STATE_VARIABLE_BangVarNames_0_4;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "STATE_VARIABLE_", Name_12, &StateVarNameNum_28);
      if (succeeded)
      {
        Var_34 = (MR_Char) 95;
        StateVarNameNumPieces_29 = mercury__string__split_at_char_2_f_0(Var_34, StateVarNameNum_28);
        TypeCtorInfo_13_36 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
        succeeded = mercury__list__split_last_3_p_0(TypeCtorInfo_13_36, StateVarNameNumPieces_29, &NonLastStateVarNameNumPieces_30, &conv0_LastStateVarNameNumPieces_31);
        if (succeeded)
        {
          LastStateVarNameNumPieces_31 = ((MR_String) (conv0_LastStateVarNameNumPieces_31));
          succeeded = MR_TRUE;
        }
        if (succeeded)
          succeeded = mercury__string__to_int_2_p_0(LastStateVarNameNumPieces_31, &_SuffixNum_32);
        if (succeeded)
          StateVarName_16 = mercury__string__join_list_2_f_0((MR_String) "_", NonLastStateVarNameNumPieces_30);
        else
          StateVarName_16 = StateVarNameNum_28;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_String Var_22;
        MR_Word Var_24;
        MR_String Var_25;

        Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "!.", StateVarName_16);
        Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "!:", StateVarName_16);
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (STATE_VARIABLE_BangVarNames_0_4));
        }
        {
          STATE_VARIABLE_BangVarNames_1_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_BangVarNames_1_21, 0) = ((MR_Box) (Var_22));
          MR_hl_field(1, STATE_VARIABLE_BangVarNames_1_21, 1) = ((MR_Box) (Var_24));
        }
        STATE_VARIABLE_PlainVarNames_1_27 = STATE_VARIABLE_PlainVarNames_0_2;
      }
      else
      {
        {
          STATE_VARIABLE_PlainVarNames_1_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_PlainVarNames_1_27, 0) = ((MR_Box) (Name_12));
          MR_hl_field(1, STATE_VARIABLE_PlainVarNames_1_27, 1) = ((MR_Box) (STATE_VARIABLE_PlainVarNames_0_2));
        }
        STATE_VARIABLE_BangVarNames_1_21 = STATE_VARIABLE_BangVarNames_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Names_13;
      next_value_of_STATE_VARIABLE_PlainVarNames_0_2 = STATE_VARIABLE_PlainVarNames_1_27;
      next_value_of_STATE_VARIABLE_BangVarNames_0_4 = STATE_VARIABLE_BangVarNames_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_PlainVarNames_0_2 = next_value_of_STATE_VARIABLE_PlainVarNames_0_2;
      STATE_VARIABLE_BangVarNames_0_4 = next_value_of_STATE_VARIABLE_BangVarNames_0_4;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Spec_8;

  conv0_Spec_8 = hlds__make_hlds__make_hlds_warn__quant_warning_to_spec_3_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Spec_8));
  return wrapper_arg_2;
}

void MR_CALL 
hlds__make_hlds__make_hlds_warn__add_quant_warnings_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PfSymNameArity_8,
  MR_Word VarSet_9,
  MR_Word Warnings_10,
  MR_Word STATE_VARIABLE_Specs_0_15,
  MR_Word * STATE_VARIABLE_Specs_16)
{
  MR_Word Globals_12;
  MR_Word WarnOverlap_13;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 193, &WarnOverlap_13);
  switch (WarnOverlap_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Specs_16 = STATE_VARIABLE_Specs_0_15;
      break;
    case (MR_Integer) 1:
      {
        MR_Word WarningSpecs_14;
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_18, 0) = ((MR_Box) (&hlds__make_hlds__make_hlds_warn_scalar_common_3[0]));
          MR_hl_field(0, Var_18, 1) = ((MR_Box) (hlds__make_hlds__make_hlds_warn__add_quant_warnings_6_p_0_1));
          MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_18, 3) = ((MR_Box) (PfSymNameArity_8));
          MR_hl_field(0, Var_18, 4) = ((MR_Box) (VarSet_9));
        }
        WarningSpecs_14 = mercury__list__map_2_f_0((MR_Word) (&hlds__quantification__hlds__quantification__type_ctor_info_quant_warning_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), Var_18, Warnings_10);
        *STATE_VARIABLE_Specs_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_warn_spec_0), WarningSpecs_14, STATE_VARIABLE_Specs_0_15);
      }
      break;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_seen_quant_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_warn____Unify____maybe_seen_quant_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_seen_quant_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_warn____Compare____maybe_seen_quant_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_multi_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_multi_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_multi_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_multi_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_singleton_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_warn____Unify____maybe_warn_singleton_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_singleton_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_warn____Compare____maybe_warn_singleton_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_warn____Unify____single_or_multi_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_warn____Compare____single_or_multi_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_warn____Unify____warn_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_warn____Compare____warn_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
hlds__make_hlds__make_hlds_warn____Unify____warn_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = hlds__make_hlds__make_hlds_warn____Unify____warn_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
hlds__make_hlds__make_hlds_warn____Compare____warn_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  hlds__make_hlds__make_hlds_warn____Compare____warn_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__hlds__make_hlds__make_hlds_warn__init(void)
{
}

void mercury__hlds__make_hlds__make_hlds_warn__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_maybe_seen_quant_0);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_maybe_warn_multi_0);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_maybe_warn_singleton_0);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_single_or_multi_0);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_info_0);
  MR_register_type_ctor_info(&hlds__make_hlds__make_hlds_warn__hlds__make_hlds__make_hlds_warn__type_ctor_info_warn_params_0);
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
