/*
** Automatically generated from `det_check_switch.m'
** by the Mercury compiler,
** version rotd-2026-02-01
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


// :- module check_hlds.det_check_switch.
// :- implementation.

/*
INIT mercury__check_hlds__det_check_switch__init
ENDINIT
*/

#include "check_hlds.det_check_switch.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "check_hlds.det_check_goal.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_transform.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.inst_test.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_util.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
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
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_sort.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_check_switch__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_detism_check_kind_0_0[1];

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_detism_check_kind_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_detism_check_kind_0_1[3];

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_detism_check_kind_0_1;

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_detism_check_kind_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_detism_check_kind_0_1[1];

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_detism_check_kind_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_detism_check_kind_0[2];

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_detism_check_kind_0[2];

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_req_arms_in_type_order_0_0;

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_req_arms_in_type_order_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_ordinal_ordered_maybe_req_arms_in_type_order_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_name_ordered_maybe_req_arms_in_type_order_0[2];

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_maybe_req_arms_in_type_order_0[2];

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_warn_incomplete_switches_0_0;

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_warn_incomplete_switches_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_ordinal_ordered_maybe_warn_incomplete_switches_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_name_ordered_maybe_warn_incomplete_switches_0[2];

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_maybe_warn_incomplete_switches_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_missing_cons_id_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_missing_cons_id_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_missing_cons_id_info_0_0[1];

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_missing_cons_id_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_missing_cons_id_info_0[1];

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_missing_cons_id_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_reported_switch_0_0[3];

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_reported_switch_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_reported_switch_0_0[1];

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_reported_switch_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_reported_switch_0[1];

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_reported_switch_0[1];

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_reqscope_params_0_0[2];

static const MR_DuArgLocn check_hlds__det_check_switch__check_hlds__det_check_switch__field_locns_reqscope_params_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_reqscope_params_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_reqscope_params_0_0[1];

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_reqscope_params_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_reqscope_params_0[1];

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_reqscope_params_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__list__ti_list_1check_hlds__det_check_switch__type_ctor_info_switch_match_0;

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_switch_context_0_0[3];

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_switch_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_switch_context_0_0[1];

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_switch_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_switch_context_0[1];

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_switch_context_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_switch_match_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_switch_match_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_switch_match_0_0[1];

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_switch_match_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_switch_match_0[1];

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_switch_match_0[1];

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_why_report_incomplete_switch_0_0;

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_why_report_incomplete_switch_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_ordinal_ordered_why_report_incomplete_switch_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_name_ordered_why_report_incomplete_switch_0[2];

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_why_report_incomplete_switch_0[2];

static MR_Word MR_CALL 
check_hlds__det_check_switch__IntroducedFrom__func__find_missing_cons_ids__1085__1_1_f_0(
  MR_Word LambdaHeadVar__1_64);

static void MR_CALL 
check_hlds__det_check_switch____Compare____detism_check_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____detism_check_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
check_hlds__det_check_switch__switch_match_to_string_2_f_0(
  MR_Word VarTable_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_check_switch__make_switch_match_no_args_2_p_0(
  MR_Word ConsId_3,
  MR_Word * Match_4);

static void MR_CALL 
check_hlds__det_check_switch__cons_id_to_sym_name_arity_2_p_0(
  MR_Word ConsId_3,
  MR_Word * SNA_4);

static void MR_CALL 
check_hlds__det_check_switch__constructor_to_sym_name_arity_2_p_0(
  MR_Word Ctor_3,
  MR_Word * SNA_4);

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_DetInfo_0_7,
  MR_Word * STATE_VARIABLE_DetInfo_8);

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_disj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6);

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7);

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_scope_8_p_0(
  MR_Word SwitchContexts_9,
  MR_Word Reason_10,
  MR_Word SubGoal_11,
  MR_Word ScopeGoalInfo_12,
  MR_Word InstMap0_13,
  MR_Word * MaybeReportedSwitch_14,
  MR_Word STATE_VARIABLE_DetInfo_0_51,
  MR_Word * STATE_VARIABLE_DetInfo_52);

static void MR_CALL 
check_hlds__det_check_switch__generate_error_not_switch_on_required_var_6_p_0(
  MR_Word SwitchContexts_7,
  MR_Word RequiredVar_8,
  MR_String ScopeWord_9,
  MR_Word ScopeGoalInfo_10,
  MR_Word STATE_VARIABLE_DetInfo_0_19,
  MR_Word * STATE_VARIABLE_DetInfo_20);

static MR_bool MR_CALL 
check_hlds__det_check_switch__is_scope_subgoal_a_sortof_switch_5_p_0(
  MR_Word Goal_6,
  MR_Word * SwitchContext_7,
  MR_Word * SwitchVar_8,
  MR_Word * CanFail_9,
  MR_Word * Cases_10);

static MR_bool MR_CALL 
check_hlds__det_check_switch__cse_lifted_then_sortof_switch_5_p_0(
  MR_Word Conjuncts_6,
  MR_Word * SwitchContext_7,
  MR_Word * SwitchVar_8,
  MR_Word * CanFail_9,
  MR_Word * Cases_10);

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_goal_detism_for_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7);

static MR_Box MR_CALL 
check_hlds__det_check_switch__reqscope_check_goal_detism_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_goal_detism_6_p_0(
  MR_Word RequiredDetism_7,
  MR_Word Goal_8,
  MR_Word CheckKind_9,
  MR_Word InstMap0_10,
  MR_Word STATE_VARIABLE_DetInfo_0_38,
  MR_Word * STATE_VARIABLE_DetInfo_39);

static MR_Box MR_CALL 
check_hlds__det_check_switch__generate_type_order_switch_spec_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
check_hlds__det_check_switch__generate_type_order_switch_spec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_check_switch__generate_type_order_switch_spec_7_p_0(
  MR_Word GoalInfo_8,
  MR_Word TypeCtor_9,
  MR_String VarName_10,
  MR_Word TypeSNAs_11,
  MR_Word CaseSNAs_12,
  MR_Word STATE_VARIABLE_DetInfo_0_21,
  MR_Word * STATE_VARIABLE_DetInfo_22);

static void MR_CALL 
check_hlds__det_check_switch__does_switch_violate_type_order_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_switch__does_switch_violate_type_order_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__det_check_switch__does_switch_violate_type_order_6_p_0(
  MR_Word DetInfo_7,
  MR_Word VarType_8,
  MR_Word Cases_9,
  MR_Word * VarTypeCtor_10,
  MR_Word * TypeSNAs_11,
  MR_Word * CaseSNAs_12);

static void MR_CALL 
check_hlds__det_check_switch__gather_switch_arms_cons_ids_in_order_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ContextMap_0_2,
  MR_Word * STATE_VARIABLE_ContextMap_3);

static void MR_CALL 
check_hlds__det_check_switch__generate_incomplete_switch_spec_9_p_0(
  MR_Word Why_10,
  MR_Word MaybeLimit_11,
  MR_Word InstMap0_12,
  MR_Word SwitchContexts_13,
  MR_Word SwitchVar_14,
  MR_Word Cases_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_DetInfo_0_39,
  MR_Word * STATE_VARIABLE_DetInfo_40);

static MR_Box MR_CALL 
check_hlds__det_check_switch__find_missing_cons_ids_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_check_switch__find_missing_cons_ids_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Word MR_CALL 
check_hlds__det_check_switch__type_cons_ids_in_alpha_order_2_f_0(
  MR_Word TypeCtor_4,
  MR_Word TypeBodyDu_5);

static void MR_CALL 
check_hlds__det_check_switch__ctors_to_cons_ids_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__det_check_switch__LCMC__pred__ctors_to_cons_ids_loop__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_18);

static void MR_CALL 
check_hlds__det_check_switch__compute_covered_cons_ids_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CoveredConsIds_0_2,
  MR_Word * STATE_VARIABLE_CoveredConsIds_3);

static MR_Box MR_CALL 
check_hlds__det_check_switch__det_diagnose_switch_context_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_check_switch__find_switch_var_matches_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
check_hlds__det_check_switch__find_switch_var_submatches_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchVarSynonyms_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
check_hlds__det_check_switch__lambda_update_instmap_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMap_0_3,
  MR_Word * STATE_VARIABLE_InstMap_4);

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____detism_check_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_switch____Compare____detism_check_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____maybe_req_arms_in_type_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_switch____Compare____maybe_req_arms_in_type_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____maybe_warn_incomplete_switches_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_switch____Compare____maybe_warn_incomplete_switches_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____missing_cons_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_switch____Compare____missing_cons_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____reported_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_switch____Compare____reported_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____reqscope_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_switch____Compare____reqscope_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____switch_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_switch____Compare____switch_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____switch_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_switch____Compare____switch_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____why_report_incomplete_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_check_switch____Compare____why_report_incomplete_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_check_switch_scalar_common_1[82][2];

static /* final */ const MR_Box check_hlds__det_check_switch_scalar_common_2[5][1];

static /* final */ const MR_Box check_hlds__det_check_switch_scalar_common_3[9][3];

static /* final */ const MR_Box check_hlds__det_check_switch_scalar_common_4[7][5];

static /* final */ const MR_Box check_hlds__det_check_switch_scalar_common_5[1][6];


struct check_hlds__det_check_switch__vector_common_type_6_0_s {
  const MR_String check_hlds__det_check_switch__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__det_check_switch__vector_common_type_6_0_s check_hlds__det_check_switch_vector_common_6[8];



static /* final */ const MR_Box check_hlds__det_check_switch_scalar_common_1[82][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_match_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_check_switch_scalar_common_1[0]))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_check_switch_scalar_common_1[5]))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[7]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 39U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[11]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__det_check_switch_scalar_common_2[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[13])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "more."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[17]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Inside the case"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the switch on"))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[19])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[25]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[26])))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "switch on"))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is required to be complete, but it is not."))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[19])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but it does not cover"))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[31]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The switch on"))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "does not cover"))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[36]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Warning: the order of the arms of this"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[39]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  41 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "differs"))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[41]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "from"))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "the order of the constructors"))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in the definition of the"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "type."))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[47]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "and the switch arm order is the following:"))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[19])))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "The difference between the type definition order"))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[50])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "in this scope is"))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[55]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the required determinism of the goal"))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[56])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but its actual determinism is"))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[59]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the arms of the"))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[61]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "acceptable in a"))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[63]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "are required have a determinism that is"))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the arm for"))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[67]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "but the actual determinism"))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[69]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "context,"))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[71]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[70])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[73]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "scope"))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "Error: the goal inside the"))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "not a switch on"))
  },
  /* row  81 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_match_0))
  },
};

static /* final */ const MR_Box check_hlds__det_check_switch_scalar_common_2[5][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 10)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "...")) },
  /* row   2 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 224U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 228U) },
};

static /* final */ const MR_Box check_hlds__det_check_switch_scalar_common_3[9][3] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 2U))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__det_check_switch_scalar_common_4[0])),
    ((MR_Box) (check_hlds__det_check_switch__find_switch_var_matches_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__det_check_switch_scalar_common_4[1])),
    ((MR_Box) (check_hlds__det_check_switch__find_missing_cons_ids_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__det_check_switch_scalar_common_4[2])),
    ((MR_Box) (check_hlds__det_check_switch__find_missing_cons_ids_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__det_check_switch_scalar_common_4[3])),
    ((MR_Box) (check_hlds__det_check_switch__does_switch_violate_type_order_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__det_check_switch_scalar_common_4[4])),
    ((MR_Box) (check_hlds__det_check_switch__does_switch_violate_type_order_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__det_check_switch_scalar_common_4[5])),
    ((MR_Box) (check_hlds__det_check_switch__generate_type_order_switch_spec_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&check_hlds__det_check_switch_scalar_common_4[5])),
    ((MR_Box) (check_hlds__det_check_switch__generate_type_order_switch_spec_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&check_hlds__det_check_switch_scalar_common_4[6])),
    ((MR_Box) (check_hlds__det_check_switch__reqscope_check_goal_detism_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__det_check_switch_scalar_common_4[7][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_match_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__det_check_switch__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__det_check_switch_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_match_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct check_hlds__det_check_switch__vector_common_type_6_0_s check_hlds__det_check_switch_vector_common_6[8] = {
  /* row   0 */   { (MR_String) "require_switch_arms_det" },
  /* row   1 */   { (MR_String) "require_switch_arms_semidet" },
  /* row   2 */   { (MR_String) "require_switch_arms_multi" },
  /* row   3 */   { (MR_String) "require_switch_arms_nondet" },
  /* row   4 */   { (MR_String) "require_switch_arms_cc_multi" },
  /* row   5 */   { (MR_String) "require_switch_arms_cc_nondet" },
  /* row   6 */   { (MR_String) "require_switch_arms_erroneous" },
  /* row   7 */   { (MR_String) "require_switch_arms_failure" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_check_switch__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_detism_check_kind_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0) };

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_detism_check_kind_0_0 = {
  (MR_String) "require_detism_scope",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_detism_check_kind_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_detism_check_kind_0_1[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_detism_check_kind_0_1 = {
  (MR_String) "require_detism_switch_arm",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_detism_check_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_detism_check_kind_0_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_detism_check_kind_0_0 };

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_detism_check_kind_0_1[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_detism_check_kind_0_1 };

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_detism_check_kind_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_detism_check_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_detism_check_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_detism_check_kind_0[2] = {
  &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_detism_check_kind_0_0,
  &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_detism_check_kind_0_1
};

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_detism_check_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_detism_check_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_check_switch____Unify____detism_check_kind_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_switch____Compare____detism_check_kind_0_0_10001)),
  (MR_String) "check_hlds.det_check_switch",
  (MR_String) "detism_check_kind",
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_detism_check_kind_0 },
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_detism_check_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_detism_check_kind_0,

};

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_req_arms_in_type_order_0_0 = {
  (MR_String) "no_req_arms_in_type_order",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_req_arms_in_type_order_0_1 = {
  (MR_String) "req_arms_in_type_order",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_ordinal_ordered_maybe_req_arms_in_type_order_0[2] = {
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_req_arms_in_type_order_0_0,
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_req_arms_in_type_order_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_name_ordered_maybe_req_arms_in_type_order_0[2] = {
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_req_arms_in_type_order_0_0,
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_req_arms_in_type_order_0_1
};

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_maybe_req_arms_in_type_order_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_maybe_req_arms_in_type_order_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_check_switch____Unify____maybe_req_arms_in_type_order_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_switch____Compare____maybe_req_arms_in_type_order_0_0_10001)),
  (MR_String) "check_hlds.det_check_switch",
  (MR_String) "maybe_req_arms_in_type_order",
  { check_hlds__det_check_switch__check_hlds__det_check_switch__enum_name_ordered_maybe_req_arms_in_type_order_0 },
  { check_hlds__det_check_switch__check_hlds__det_check_switch__enum_ordinal_ordered_maybe_req_arms_in_type_order_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_maybe_req_arms_in_type_order_0,

};

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_warn_incomplete_switches_0_0 = {
  (MR_String) "do_not_warn_incomplete_switches",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_warn_incomplete_switches_0_1 = {
  (MR_String) "warn_incomplete_switches",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_ordinal_ordered_maybe_warn_incomplete_switches_0[2] = {
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_warn_incomplete_switches_0_0,
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_warn_incomplete_switches_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_name_ordered_maybe_warn_incomplete_switches_0[2] = {
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_warn_incomplete_switches_0_0,
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_maybe_warn_incomplete_switches_0_1
};

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_maybe_warn_incomplete_switches_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_maybe_warn_incomplete_switches_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_check_switch____Unify____maybe_warn_incomplete_switches_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_switch____Compare____maybe_warn_incomplete_switches_0_0_10001)),
  (MR_String) "check_hlds.det_check_switch",
  (MR_String) "maybe_warn_incomplete_switches",
  { check_hlds__det_check_switch__check_hlds__det_check_switch__enum_name_ordered_maybe_warn_incomplete_switches_0 },
  { check_hlds__det_check_switch__check_hlds__det_check_switch__enum_ordinal_ordered_maybe_warn_incomplete_switches_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_maybe_warn_incomplete_switches_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_missing_cons_id_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_missing_cons_id_info_0_0 = {
  (MR_String) "missing_cons_id_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_missing_cons_id_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_missing_cons_id_info_0_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_missing_cons_id_info_0_0 };

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_missing_cons_id_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_missing_cons_id_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_missing_cons_id_info_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_missing_cons_id_info_0_0 };

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_missing_cons_id_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_missing_cons_id_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_check_switch____Unify____missing_cons_id_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_switch____Compare____missing_cons_id_info_0_0_10001)),
  (MR_String) "check_hlds.det_check_switch",
  (MR_String) "missing_cons_id_info",
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_missing_cons_id_info_0 },
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_missing_cons_id_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_missing_cons_id_info_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_reported_switch_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0)
};

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_reported_switch_0_0 = {
  (MR_String) "reported_switch",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_reported_switch_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_reported_switch_0_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_reported_switch_0_0 };

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_reported_switch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_reported_switch_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_reported_switch_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_reported_switch_0_0 };

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_reported_switch_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_reported_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_check_switch____Unify____reported_switch_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_switch____Compare____reported_switch_0_0_10001)),
  (MR_String) "check_hlds.det_check_switch",
  (MR_String) "reported_switch",
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_reported_switch_0 },
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_reported_switch_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_reported_switch_0,

};

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_reqscope_params_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_maybe_warn_incomplete_switches_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_maybe_req_arms_in_type_order_0)
};

static const MR_DuArgLocn check_hlds__det_check_switch__check_hlds__det_check_switch__field_locns_reqscope_params_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_reqscope_params_0_0 = {
  (MR_String) "reqscope_params",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_reqscope_params_0_0,
  NULL,
  check_hlds__det_check_switch__check_hlds__det_check_switch__field_locns_reqscope_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_reqscope_params_0_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_reqscope_params_0_0 };

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_reqscope_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_reqscope_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_reqscope_params_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_reqscope_params_0_0 };

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_reqscope_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_reqscope_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_check_switch____Unify____reqscope_params_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_switch____Compare____reqscope_params_0_0_10001)),
  (MR_String) "check_hlds.det_check_switch",
  (MR_String) "reqscope_params",
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_reqscope_params_0 },
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_reqscope_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_reqscope_params_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__list__ti_list_1check_hlds__det_check_switch__type_ctor_info_switch_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_match_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_switch_context_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_match_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__list__ti_list_1check_hlds__det_check_switch__type_ctor_info_switch_match_0)
};

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_switch_context_0_0 = {
  (MR_String) "switch_context",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_switch_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_switch_context_0_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_switch_context_0_0 };

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_switch_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_switch_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_switch_context_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_switch_context_0_0 };

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_switch_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_check_switch____Unify____switch_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_switch____Compare____switch_context_0_0_10001)),
  (MR_String) "check_hlds.det_check_switch",
  (MR_String) "switch_context",
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_switch_context_0 },
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_switch_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_switch_context_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__det_check_switch__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_check_switch__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__det_check_switch__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_switch_match_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_check_switch__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_switch_match_0_0 = {
  (MR_String) "switch_match",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_check_switch__check_hlds__det_check_switch__field_types_switch_match_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_switch_match_0_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_switch_match_0_0 };

static const MR_DuPtagLayout check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_switch_match_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_check_switch__check_hlds__det_check_switch__du_stag_ordered_switch_match_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_switch_match_0[1] = { &check_hlds__det_check_switch__check_hlds__det_check_switch__du_functor_desc_switch_match_0_0 };

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_switch_match_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_check_switch____Unify____switch_match_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_switch____Compare____switch_match_0_0_10001)),
  (MR_String) "check_hlds.det_check_switch",
  (MR_String) "switch_match",
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_name_ordered_switch_match_0 },
  { check_hlds__det_check_switch__check_hlds__det_check_switch__du_ptag_ordered_switch_match_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_switch_match_0,

};

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_why_report_incomplete_switch_0_0 = {
  (MR_String) "switch_required_to_be_complete",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_why_report_incomplete_switch_0_1 = {
  (MR_String) "warn_incomplete_switch_option",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_ordinal_ordered_why_report_incomplete_switch_0[2] = {
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_why_report_incomplete_switch_0_0,
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_why_report_incomplete_switch_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_check_switch__check_hlds__det_check_switch__enum_name_ordered_why_report_incomplete_switch_0[2] = {
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_why_report_incomplete_switch_0_0,
  &check_hlds__det_check_switch__check_hlds__det_check_switch__enum_functor_desc_why_report_incomplete_switch_0_1
};

static const MR_Integer check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_why_report_incomplete_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_why_report_incomplete_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_check_switch____Unify____why_report_incomplete_switch_0_0_10001)),
  ((MR_Box) (check_hlds__det_check_switch____Compare____why_report_incomplete_switch_0_0_10001)),
  (MR_String) "check_hlds.det_check_switch",
  (MR_String) "why_report_incomplete_switch",
  { check_hlds__det_check_switch__check_hlds__det_check_switch__enum_name_ordered_why_report_incomplete_switch_0 },
  { check_hlds__det_check_switch__check_hlds__det_check_switch__enum_ordinal_ordered_why_report_incomplete_switch_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_check_switch__check_hlds__det_check_switch__functor_number_map_why_report_incomplete_switch_0,

};

static MR_Word MR_CALL 
check_hlds__det_check_switch__IntroducedFrom__func__find_missing_cons_ids__1085__1_1_f_0(
  MR_Word LambdaHeadVar__1_64)
{
  MR_Word LambdaHeadVar__2_65;
  MR_Word Var_66;

  {
    Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 29U));
    MR_hl_field(3, Var_66, 1) = ((MR_Box) (LambdaHeadVar__1_64));
  }
  {
    LambdaHeadVar__2_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_65, 0) = ((MR_Box) (Var_66));
    MR_hl_field(1, LambdaHeadVar__2_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return LambdaHeadVar__2_65;
}

void MR_CALL 
check_hlds__det_check_switch____Compare____why_report_incomplete_switch_0_0(
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
check_hlds__det_check_switch____Unify____why_report_incomplete_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__det_check_switch____Compare____switch_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
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
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      check_hlds__det_check_switch____Compare____switch_match_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

void MR_CALL 
check_hlds__det_check_switch____Compare____switch_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____switch_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      succeeded = check_hlds__det_check_switch____Unify____switch_match_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____switch_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__det_check_switch____Compare____reqscope_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word SubResult1_6;
    MR_Integer Var_13 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_14 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_13 < Var_14);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_13 > Var_14);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_15 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_16 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_15 < Var_16);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_15 > Var_16);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____reqscope_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
check_hlds__det_check_switch____Compare____reported_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
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
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____reported_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word TypeInfo_13_13;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__det_check_switch____Compare____missing_cons_id_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____missing_cons_id_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Word TypeInfo_14_14;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__det_check_switch____Compare____maybe_warn_incomplete_switches_0_0(
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
check_hlds__det_check_switch____Unify____maybe_warn_incomplete_switches_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__det_check_switch____Compare____maybe_req_arms_in_type_order_0_0(
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
check_hlds__det_check_switch____Unify____maybe_req_arms_in_type_order_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch____Compare____detism_check_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_14 == CastY_15);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

      hlds__hlds_goal____Compare____hlds_goal_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
    MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    succeeded = (SubResult1_8 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_8;
    else
    {
      MR_Word SubResult2_11;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult2_11, ArgX2_9, ArgY2_10);
      succeeded = (SubResult2_11 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_11;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____detism_check_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
      TypeInfo_14_14 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_7, ArgY2_8);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  return succeeded;
}

static MR_String MR_CALL 
check_hlds__det_check_switch__switch_match_to_string_2_f_0(
  MR_Word VarTable_4,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;
  MR_Word ConsId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
  MR_Word MaybeArgVars_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

  HeadVar__3_3 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(VarTable_4, (MR_Integer) 1, ConsId_5, MaybeArgVars_6);
  return HeadVar__3_3;
}

static void MR_CALL 
check_hlds__det_check_switch__make_switch_match_no_args_2_p_0(
  MR_Word ConsId_3,
  MR_Word * Match_4)
{
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Match_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ConsId_3));
    MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
check_hlds__det_check_switch__cons_id_to_sym_name_arity_2_p_0(
  MR_Word ConsId_3,
  MR_Word * SNA_4)
{
  MR_bool succeeded = ((MR_tag((MR_Word) ConsId_3)) == (MR_Integer) 1);
  MR_Word DuCtor_5;

  if (succeeded)
  {
    DuCtor_5 = (MR_Word) (MR_body((MR_Word) (ConsId_3), (MR_Integer) 1));
    {
      MR_Word SymName_6 = ((MR_Word) ((MR_hl_field(0, DuCtor_5, 0))));
      MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(0, DuCtor_5, 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *SNA_4 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (SymName_6));
        MR_hl_field(0, base, 1) = ((MR_Box) (Arity_7));
      }
    }
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_check_switch.cons_id_to_sym_name_arity\'/2", (MR_String) "not du_data_ctor");
      return;
    }
}

static void MR_CALL 
check_hlds__det_check_switch__constructor_to_sym_name_arity_2_p_0(
  MR_Word Ctor_3,
  MR_Word * SNA_4)
{
  MR_Word SymName_7 = ((MR_Word) ((MR_hl_field(0, Ctor_3, 2))));
  MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, Ctor_3, 4))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *SNA_4 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (SymName_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Arity_9));
  }
}

void MR_CALL 
check_hlds__det_check_switch__reqscope_check_goal_7_p_0(
  MR_Word Params_8,
  MR_Word InstMap0_9,
  MR_Word MaybeReportedSwitch_10,
  MR_Word SwitchContexts_11,
  MR_Word Goal_12,
  MR_Word STATE_VARIABLE_DetInfo_0_92,
  MR_Word * STATE_VARIABLE_DetInfo_93)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal_12, 0))));
    MR_Word GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_12, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_77 = (MR_Word) ((MR_Word) (GoalExpr_14));
          MR_Word next_value_of_Goal_12 = SubGoal_77;

          // direct tailcall eliminated
          ;
          MaybeReportedSwitch_10 = (MR_Word) ((MR_Unsigned) 0U);
          Goal_12 = next_value_of_Goal_12;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr_14, 1))));

          switch (MR_tag((MR_Word) RHS_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_DetInfo_93 = STATE_VARIABLE_DetInfo_0_92;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_DetInfo_93 = STATE_VARIABLE_DetInfo_0_92;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgVarsModes_29 = ((MR_Word) ((MR_hl_field(2, RHS_17, 2))));
                MR_Word LambdaGoal_31 = ((MR_Word) ((MR_hl_field(2, RHS_17, 4))));
                MR_Word ModuleInfo_32;
                MR_Word LambdaInstMap0_33;
                MR_Word next_value_of_InstMap0_9;
                MR_Word next_value_of_Goal_12;

                check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_92, &ModuleInfo_32);
                check_hlds__det_check_switch__lambda_update_instmap_4_p_0(ModuleInfo_32, ArgVarsModes_29, InstMap0_9, &LambdaInstMap0_33);
                // direct tailcall eliminated
                ;
                next_value_of_InstMap0_9 = LambdaInstMap0_33;
                next_value_of_Goal_12 = LambdaGoal_31;
                InstMap0_9 = next_value_of_InstMap0_9;
                MaybeReportedSwitch_10 = (MR_Word) ((MR_Unsigned) 0U);
                SwitchContexts_11 = (MR_Word) ((MR_Unsigned) 0U);
                Goal_12 = next_value_of_Goal_12;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_DetInfo_93 = STATE_VARIABLE_DetInfo_0_92;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_14, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_DetInfo_93 = STATE_VARIABLE_DetInfo_0_92;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_DetInfo_93 = STATE_VARIABLE_DetInfo_0_92;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_53 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 2))));

              check_hlds__det_check_switch__reqscope_check_conj_7_p_0(Params_8, InstMap0_9, MaybeReportedSwitch_10, SwitchContexts_11, Goals_53, STATE_VARIABLE_DetInfo_0_92, STATE_VARIABLE_DetInfo_93);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_122 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));

              check_hlds__det_check_switch__reqscope_check_disj_6_p_0(Params_8, InstMap0_9, SwitchContexts_11, Goals_122, STATE_VARIABLE_DetInfo_0_92, STATE_VARIABLE_DetInfo_93);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));
              MR_Word CanFail_55 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_14, 2))) & (MR_Integer) 1);
              MR_Word Cases_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 3))));
              MR_Word WIS_57 = ((((MR_Unsigned) ((MR_hl_field(0, Params_8, 0))) >> 1)) & (MR_Integer) 1);
              MR_Word ReqArmsTypeOrder_58 = ((MR_Unsigned) ((MR_hl_field(0, Params_8, 0))) & (MR_Integer) 1);
              MR_Word VarTable_64;
              MR_Word VarEntry_65;
              MR_String VarName_66;
              MR_Word VarType_67;
              MR_Word STATE_VARIABLE_DetInfo_4_101;
              MR_Word STATE_VARIABLE_DetInfo_5_103;
              MR_Word VarTypeCtor_69;
              MR_Word TypeSNAs_70;
              MR_Word CaseSNAs_71;

              switch (CanFail_55) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Context_59;

                    Context_59 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
                    succeeded = (WIS_57 == (MR_Integer) 0);
                    if (!(succeeded))
                    {
                      MR_Word TypeInfo_126_126;
                      MR_Word TypeInfo_127_127;
                      MR_Word ReportedSwitch_60;
                      MR_Word ReportedContext_61;
                      MR_Word ReportedVar_62;
                      MR_Word ReportedCases_63;

                      succeeded = (MaybeReportedSwitch_10 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ReportedSwitch_60 = ((MR_Word) ((MR_hl_field(1, MaybeReportedSwitch_10, 0))));
                        ReportedContext_61 = ((MR_Word) ((MR_hl_field(0, ReportedSwitch_60, 0))));
                        ReportedVar_62 = ((MR_Word) ((MR_hl_field(0, ReportedSwitch_60, 1))));
                        ReportedCases_63 = ((MR_Word) ((MR_hl_field(0, ReportedSwitch_60, 2))));
                        succeeded = mercury__term_context____Unify____term_context_0_0(ReportedContext_61, Context_59);
                        if (succeeded)
                        {
                          TypeInfo_126_126 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_126_126, ((MR_Box) (ReportedVar_62)), ((MR_Box) (Var_54)));
                          if (succeeded)
                          {
                            TypeInfo_127_127 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[3]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_127_127, ((MR_Box) (ReportedCases_63)), ((MR_Box) (Cases_56)));
                          }
                        }
                      }
                    }
                    if (succeeded)
                      STATE_VARIABLE_DetInfo_4_101 = STATE_VARIABLE_DetInfo_0_92;
                    else
                      check_hlds__det_check_switch__generate_incomplete_switch_spec_9_p_0((MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_2[0])), InstMap0_9, SwitchContexts_11, Var_54, Cases_56, Context_59, STATE_VARIABLE_DetInfo_0_92, &STATE_VARIABLE_DetInfo_4_101);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_DetInfo_4_101 = STATE_VARIABLE_DetInfo_0_92;
                  break;
              }
              check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_4_101, &VarTable_64);
              parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_64, Var_54, &VarEntry_65);
              VarName_66 = ((MR_String) ((MR_hl_field(0, VarEntry_65, 0))));
              VarType_67 = ((MR_Word) ((MR_hl_field(0, VarEntry_65, 1))));
              succeeded = (ReqArmsTypeOrder_58 == (MR_Integer) 1);
              if (succeeded)
                succeeded = check_hlds__det_check_switch__does_switch_violate_type_order_6_p_0(STATE_VARIABLE_DetInfo_4_101, VarType_67, Cases_56, &VarTypeCtor_69, &TypeSNAs_70, &CaseSNAs_71);
              if (succeeded)
                check_hlds__det_check_switch__generate_type_order_switch_spec_7_p_0(GoalInfo_15, VarTypeCtor_69, VarName_66, TypeSNAs_70, CaseSNAs_71, STATE_VARIABLE_DetInfo_4_101, &STATE_VARIABLE_DetInfo_5_103);
              else
                STATE_VARIABLE_DetInfo_5_103 = STATE_VARIABLE_DetInfo_4_101;
              check_hlds__det_check_switch__reqscope_check_cases_8_p_0(Params_8, InstMap0_9, SwitchContexts_11, Var_54, VarType_67, Cases_56, STATE_VARIABLE_DetInfo_5_103, STATE_VARIABLE_DetInfo_93);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));
              MR_Word ScopeMaybeReportedSwitch_79;
              MR_Word STATE_VARIABLE_DetInfo_11_113;
              MR_Word SubGoal_123 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 2))));
              MR_Word next_value_of_MaybeReportedSwitch_10;
              MR_Word next_value_of_Goal_12;
              MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_92;

              check_hlds__det_check_switch__reqscope_check_scope_8_p_0(SwitchContexts_11, Reason_78, SubGoal_123, GoalInfo_15, InstMap0_9, &ScopeMaybeReportedSwitch_79, STATE_VARIABLE_DetInfo_0_92, &STATE_VARIABLE_DetInfo_11_113);
              // direct tailcall eliminated
              ;
              next_value_of_MaybeReportedSwitch_10 = ScopeMaybeReportedSwitch_79;
              next_value_of_Goal_12 = SubGoal_123;
              next_value_of_STATE_VARIABLE_DetInfo_0_92 = STATE_VARIABLE_DetInfo_11_113;
              MaybeReportedSwitch_10 = next_value_of_MaybeReportedSwitch_10;
              Goal_12 = next_value_of_Goal_12;
              STATE_VARIABLE_DetInfo_0_92 = next_value_of_STATE_VARIABLE_DetInfo_0_92;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 2))));
              MR_Word Then_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 3))));
              MR_Word Else_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 4))));
              MR_Word InstMap1_76;
              MR_Word STATE_VARIABLE_DetInfo_7_106;
              MR_Word STATE_VARIABLE_DetInfo_8_108;
              MR_Word next_value_of_Goal_12;
              MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_92;

              check_hlds__det_check_switch__reqscope_check_goal_7_p_0(Params_8, InstMap0_9, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts_11, Cond_73, STATE_VARIABLE_DetInfo_0_92, &STATE_VARIABLE_DetInfo_7_106);
              hlds__goal_util__apply_goal_instmap_delta_3_p_0(Cond_73, InstMap0_9, &InstMap1_76);
              check_hlds__det_check_switch__reqscope_check_goal_7_p_0(Params_8, InstMap1_76, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts_11, Then_74, STATE_VARIABLE_DetInfo_7_106, &STATE_VARIABLE_DetInfo_8_108);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_12 = Else_75;
              next_value_of_STATE_VARIABLE_DetInfo_0_92 = STATE_VARIABLE_DetInfo_8_108;
              MaybeReportedSwitch_10 = (MR_Word) ((MR_Unsigned) 0U);
              Goal_12 = next_value_of_Goal_12;
              STATE_VARIABLE_DetInfo_0_92 = next_value_of_STATE_VARIABLE_DetInfo_0_92;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, 1))));

              switch (MR_tag((MR_Word) ShortHand_80)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_check_switch.reqscope_check_goal\'/7", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_85 = ((MR_Word) ((MR_hl_field(1, ShortHand_80, 4))));
                    MR_Word OrElseGoals_86 = ((MR_Word) ((MR_hl_field(1, ShortHand_80, 5))));
                    MR_Word STATE_VARIABLE_DetInfo_13_116;

                    check_hlds__det_check_switch__reqscope_check_goal_7_p_0(Params_8, InstMap0_9, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts_11, MainGoal_85, STATE_VARIABLE_DetInfo_0_92, &STATE_VARIABLE_DetInfo_13_116);
                    check_hlds__det_check_switch__reqscope_check_disj_6_p_0(Params_8, InstMap0_9, SwitchContexts_11, OrElseGoals_86, STATE_VARIABLE_DetInfo_13_116, STATE_VARIABLE_DetInfo_93);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_124 = ((MR_Word) ((MR_hl_field(2, ShortHand_80, 2))));
                    MR_Word next_value_of_Goal_12 = SubGoal_124;

                    // direct tailcall eliminated
                    ;
                    MaybeReportedSwitch_10 = (MR_Word) ((MR_Unsigned) 0U);
                    Goal_12 = next_value_of_Goal_12;
                    continue;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_DetInfo_0_7,
  MR_Word * STATE_VARIABLE_DetInfo_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DetInfo_8 = STATE_VARIABLE_DetInfo_0_7;
    else
    {
      MR_Word Case_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 0))));
      MR_Word Cases_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, 1))));
      MR_Word MainConsId_25 = ((MR_Word) ((MR_hl_field(0, Case_22, 0))));
      MR_Word OtherConsIds_26 = ((MR_Word) ((MR_hl_field(0, Case_22, 1))));
      MR_Word Goal_27 = ((MR_Word) ((MR_hl_field(0, Case_22, 2))));
      MR_Word GoalSeq_28;
      MR_Word MainMatch_29;
      MR_Word OtherMatches_30;
      MR_Word NewSwitchContext_31;
      MR_Word SwitchContexts1_32;
      MR_Word ModuleInfo0_33;
      MR_Word InstMap1_34;
      MR_Word ModuleInfo_35;
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_DetInfo_1_40;
      MR_Word STATE_VARIABLE_DetInfo_2_42;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_7;

      hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_27, &GoalSeq_28);
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      check_hlds__det_check_switch__find_switch_var_matches_6_p_0(GoalSeq_28, Var_38, MainConsId_25, OtherConsIds_26, &MainMatch_29, &OtherMatches_30);
      {
        NewSwitchContext_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewSwitchContext_31, 0) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(0, NewSwitchContext_31, 1) = ((MR_Box) (MainMatch_29));
        MR_hl_field(0, NewSwitchContext_31, 2) = ((MR_Box) (OtherMatches_30));
      }
      {
        SwitchContexts1_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SwitchContexts1_32, 0) = ((MR_Box) (NewSwitchContext_31));
        MR_hl_field(1, SwitchContexts1_32, 1) = ((MR_Box) (HeadVar__3_3));
      }
      check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_7, &ModuleInfo0_33);
      hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__4_4, HeadVar__5_5, MainConsId_25, OtherConsIds_26, HeadVar__2_2, &InstMap1_34, ModuleInfo0_33, &ModuleInfo_35);
      check_hlds__det_util__det_info_set_module_info_3_p_0(ModuleInfo_35, STATE_VARIABLE_DetInfo_0_7, &STATE_VARIABLE_DetInfo_1_40);
      check_hlds__det_check_switch__reqscope_check_goal_7_p_0(HeadVar__1_1, InstMap1_34, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts1_32, Goal_27, STATE_VARIABLE_DetInfo_1_40, &STATE_VARIABLE_DetInfo_2_42);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__6_6 = Cases_23;
      next_value_of_STATE_VARIABLE_DetInfo_0_7 = STATE_VARIABLE_DetInfo_2_42;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_DetInfo_0_7 = next_value_of_STATE_VARIABLE_DetInfo_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_disj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DetInfo_6 = STATE_VARIABLE_DetInfo_0_5;
    else
    {
      MR_Word Goal_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word STATE_VARIABLE_DetInfo_1_22;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_5;

      check_hlds__det_check_switch__reqscope_check_goal_7_p_0(HeadVar__1_1, HeadVar__2_2, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3, Goal_16, STATE_VARIABLE_DetInfo_0_5, &STATE_VARIABLE_DetInfo_1_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Goals_17;
      next_value_of_STATE_VARIABLE_DetInfo_0_5 = STATE_VARIABLE_DetInfo_1_22;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DetInfo_0_5 = next_value_of_STATE_VARIABLE_DetInfo_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DetInfo_7 = STATE_VARIABLE_DetInfo_0_6;
    else
    {
      MR_Word Goal_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 0))));
      MR_Word Goals_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, 1))));
      MR_Word InstMap1_22;
      MR_Word STATE_VARIABLE_DetInfo_1_25;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_6;

      check_hlds__det_check_switch__reqscope_check_goal_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Goal_19, STATE_VARIABLE_DetInfo_0_6, &STATE_VARIABLE_DetInfo_1_25);
      hlds__goal_util__apply_goal_instmap_delta_3_p_0(Goal_19, HeadVar__2_2, &InstMap1_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = InstMap1_22;
      next_value_of_HeadVar__5_5 = Goals_20;
      next_value_of_STATE_VARIABLE_DetInfo_0_6 = STATE_VARIABLE_DetInfo_1_25;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_DetInfo_0_6 = next_value_of_STATE_VARIABLE_DetInfo_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_scope_8_p_0(
  MR_Word SwitchContexts_9,
  MR_Word Reason_10,
  MR_Word SubGoal_11,
  MR_Word ScopeGoalInfo_12,
  MR_Word InstMap0_13,
  MR_Word * MaybeReportedSwitch_14,
  MR_Word STATE_VARIABLE_DetInfo_0_51,
  MR_Word * STATE_VARIABLE_DetInfo_52)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Reason_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_DetInfo_52 = STATE_VARIABLE_DetInfo_0_51;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Reason_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          {
            *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_DetInfo_52 = STATE_VARIABLE_DetInfo_0_51;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RequiredDetism_16 = ((MR_Unsigned) ((MR_hl_field(3, Reason_10, 1))) & (MR_Integer) 7);
            MR_Word Var_53;

            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (ScopeGoalInfo_12));
            }
            check_hlds__det_check_switch__reqscope_check_goal_detism_6_p_0(RequiredDetism_16, SubGoal_11, Var_53, InstMap0_13, STATE_VARIABLE_DetInfo_0_51, STATE_VARIABLE_DetInfo_52);
            *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word RequiredVar_17 = ((MR_Word) ((MR_hl_field(3, Reason_10, 1))));
            MR_Word SwitchGoalContext_18;
            MR_Word SwitchVar_19;
            MR_Word CanFail_20;
            MR_Word Cases_21;
            MR_Word TypeInfo_68_68;
            MR_Word GoalExpr_69 = ((MR_Word) ((MR_hl_field(0, SubGoal_11, 0))));
            MR_Word GoalInfo_70 = ((MR_Word) ((MR_hl_field(0, SubGoal_11, 1))));

            switch (MR_tag((MR_Word) GoalExpr_69)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_69, 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Conjuncts0_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_69, 2))));
                      MR_Word Conjuncts_77;
                      MR_Word Var_108 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_69, 1))) & (MR_Integer) 1);

                      succeeded = (Var_108 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        hlds__goal_transform__flatten_conj_2_p_0(Conjuncts0_76, &Conjuncts_77);
                        succeeded = check_hlds__det_check_switch__cse_lifted_then_sortof_switch_5_p_0(Conjuncts_77, &SwitchGoalContext_18, &SwitchVar_19, &CanFail_20, &Cases_21);
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      SwitchVar_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_69, 1))));
                      CanFail_20 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_69, 2))) & (MR_Integer) 1);
                      Cases_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_69, 3))));
                      SwitchGoalContext_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_70);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word Reason_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_69, 1))));
                      MR_Word SubGoal_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_69, 2))));
                      MR_Word SubGoalExpr_74;
                      MR_Word SubGoalInfo_75;

                      succeeded = ((((MR_tag((MR_Word) Reason_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_71, 0)))) == (MR_Integer) 4)));
                      if (succeeded)
                      {
                        SubGoalExpr_74 = ((MR_Word) ((MR_hl_field(0, SubGoal_72, 0))));
                        SubGoalInfo_75 = ((MR_Word) ((MR_hl_field(0, SubGoal_72, 1))));
                        succeeded = ((((MR_tag((MR_Word) SubGoalExpr_74)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr_74, 0)))) == (MR_Integer) 4)));
                        if (succeeded)
                        {
                          SwitchVar_19 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_74, 1))));
                          CanFail_20 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr_74, 2))) & (MR_Integer) 1);
                          Cases_21 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_74, 3))));
                          SwitchGoalContext_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(SubGoalInfo_75);
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    break;
                }
                break;
            }
            if (succeeded)
            {
              TypeInfo_68_68 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_68_68, ((MR_Box) (SwitchVar_19)), ((MR_Box) (RequiredVar_17)));
            }
            if (succeeded)
              switch (CanFail_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ScopeContext_22;
                    MR_Word ReportedSwitch_23;

                    ScopeContext_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(ScopeGoalInfo_12);
                    check_hlds__det_check_switch__generate_incomplete_switch_spec_9_p_0((MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), InstMap0_13, SwitchContexts_9, RequiredVar_17, Cases_21, ScopeContext_22, STATE_VARIABLE_DetInfo_0_51, STATE_VARIABLE_DetInfo_52);
                    {
                      ReportedSwitch_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, ReportedSwitch_23, 0) = ((MR_Box) (SwitchGoalContext_18));
                      MR_hl_field(0, ReportedSwitch_23, 1) = ((MR_Box) (SwitchVar_19));
                      MR_hl_field(0, ReportedSwitch_23, 2) = ((MR_Box) (Cases_21));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeReportedSwitch_14 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (ReportedSwitch_23));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
                    *STATE_VARIABLE_DetInfo_52 = STATE_VARIABLE_DetInfo_0_51;
                  }
                  break;
              }
            else
            {
              check_hlds__det_check_switch__generate_error_not_switch_on_required_var_6_p_0(SwitchContexts_9, RequiredVar_17, (MR_String) "require_complete_switch", ScopeGoalInfo_12, STATE_VARIABLE_DetInfo_0_51, STATE_VARIABLE_DetInfo_52);
              *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word RequiredDetism_66 = ((MR_Unsigned) ((MR_hl_field(3, Reason_10, 2))) & (MR_Integer) 7);
            MR_Word RequiredVar_67 = ((MR_Word) ((MR_hl_field(3, Reason_10, 1))));
            MR_Word SwitchVar_64;
            MR_Word Cases_65;
            MR_Word _SwitchContext_24;
            MR_Word _CanFail_25;

            succeeded = check_hlds__det_check_switch__is_scope_subgoal_a_sortof_switch_5_p_0(SubGoal_11, &_SwitchContext_24, &SwitchVar_64, &_CanFail_25, &Cases_65);
            if (succeeded)
            {
              MR_Word VarTable_26;
              MR_Word SwitchVarType_27;

              check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_51, &VarTable_26);
              parse_tree__var_table__lookup_var_type_3_p_0(VarTable_26, SwitchVar_64, &SwitchVarType_27);
              check_hlds__det_check_switch__reqscope_check_goal_detism_for_cases_7_p_0(RequiredDetism_66, SwitchVar_64, SwitchVarType_27, Cases_65, InstMap0_13, STATE_VARIABLE_DetInfo_0_51, STATE_VARIABLE_DetInfo_52);
            }
            else
            {
              MR_String ScopeWord_28 = ((&check_hlds__det_check_switch_vector_common_6[0 + RequiredDetism_66]))->check_hlds__det_check_switch__vector_common_type_6_0__vct_6_f_0;

              check_hlds__det_check_switch__generate_error_not_switch_on_required_var_6_p_0(SwitchContexts_9, RequiredVar_67, ScopeWord_28, ScopeGoalInfo_12, STATE_VARIABLE_DetInfo_0_51, STATE_VARIABLE_DetInfo_52);
            }
            *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word SubGoalInfo_33 = ((MR_Word) ((MR_hl_field(0, SubGoal_11, 1))));
            MR_Word Detism_34;

            Detism_34 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_33);
            switch (Detism_34) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 4:
                {
                }
                break;
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 1:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_check_switch.reqscope_check_scope\'/8", (MR_String) "Loop control scope with strange determinism");
                  return;
                }
                break;
              case (MR_Integer) 0:
                {
                }
                break;
            }
            *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_DetInfo_52 = STATE_VARIABLE_DetInfo_0_51;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
check_hlds__det_check_switch__generate_error_not_switch_on_required_var_6_p_0(
  MR_Word SwitchContexts_7,
  MR_Word RequiredVar_8,
  MR_String ScopeWord_9,
  MR_Word ScopeGoalInfo_10,
  MR_Word STATE_VARIABLE_DetInfo_0_19,
  MR_Word * STATE_VARIABLE_DetInfo_20)
{
  MR_Word NestingPieces_12;
  MR_Word VarTable_13;
  MR_String RequiredVarStr_14;
  MR_Word ScopePieces_15;
  MR_Word Pieces_16;
  MR_Word Context_17;
  MR_Word Spec_18;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_String Var_25;
  MR_String Var_27;
  MR_Word Var_33;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_53;

  check_hlds__det_check_switch__det_diagnose_switch_context_3_p_0(STATE_VARIABLE_DetInfo_0_19, SwitchContexts_7, &NestingPieces_12);
  check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_19, &VarTable_13);
  RequiredVarStr_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_13, (MR_Integer) 0, RequiredVar_8);
  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_22, 1) = ((MR_Box) (ScopeWord_9));
  }
  Var_27 = mercury__string__f_43_43_2_f_0(RequiredVarStr_14, (MR_String) "]");
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_27);
  {
    Var_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_24, 0) = ((MR_Box) (Var_25));
  }
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[76])));
  }
  {
    ScopePieces_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ScopePieces_15, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, ScopePieces_15, 1) = ((MR_Box) (Var_23));
  }
  Var_41 = parse_tree__error_spec__color_as_subject_1_f_0(ScopePieces_15);
  {
    Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_53, 1) = ((MR_Box) (RequiredVarStr_14));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[10])));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[80])));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
  }
  Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_49);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[19])));
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[74])), Var_47);
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_42);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[79])), Var_40);
  Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_12, Var_33);
  Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(ScopeGoalInfo_10);
  {
    Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_switch.generate_error_not_switch_on_required_var\'/6"));
    MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 68U));
    MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Context_17));
    MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_16));
  }
  check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_18, STATE_VARIABLE_DetInfo_0_19, STATE_VARIABLE_DetInfo_20);
}

static MR_bool MR_CALL 
check_hlds__det_check_switch__is_scope_subgoal_a_sortof_switch_5_p_0(
  MR_Word Goal_6,
  MR_Word * SwitchContext_7,
  MR_Word * SwitchVar_8,
  MR_Word * CanFail_9,
  MR_Word * Cases_10)
{
  MR_bool succeeded;
  MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_6, 0))));
  MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(0, Goal_6, 1))));

  switch (MR_tag((MR_Word) GoalExpr_11)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Conjuncts0_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
            MR_Word Conjuncts_19;
            MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_11, 1))) & (MR_Integer) 1);

            succeeded = (Var_50 == (MR_Integer) 0);
            if (succeeded)
            {
              hlds__goal_transform__flatten_conj_2_p_0(Conjuncts0_18, &Conjuncts_19);
              succeeded = check_hlds__det_check_switch__cse_lifted_then_sortof_switch_5_p_0(Conjuncts_19, SwitchContext_7, SwitchVar_8, CanFail_9, Cases_10);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            *SwitchVar_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
            *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_11, 2))) & (MR_Integer) 1);
            *Cases_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 3))));
            *SwitchContext_7 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 1))));
            MR_Word SubGoal_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, 2))));
            MR_Word SubGoalExpr_16;
            MR_Word SubGoalInfo_17;

            succeeded = ((((MR_tag((MR_Word) Reason_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_13, 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              SubGoalExpr_16 = ((MR_Word) ((MR_hl_field(0, SubGoal_14, 0))));
              SubGoalInfo_17 = ((MR_Word) ((MR_hl_field(0, SubGoal_14, 1))));
              succeeded = ((((MR_tag((MR_Word) SubGoalExpr_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr_16, 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                *SwitchVar_8 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_16, 1))));
                *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr_16, 2))) & (MR_Integer) 1);
                *Cases_10 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_16, 3))));
                *SwitchContext_7 = hlds__hlds_goal__goal_info_get_context_1_f_0(SubGoalInfo_17);
                succeeded = MR_TRUE;
              }
            }
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__det_check_switch__cse_lifted_then_sortof_switch_5_p_0(
  MR_Word Conjuncts_6,
  MR_Word * SwitchContext_7,
  MR_Word * SwitchVar_8,
  MR_Word * CanFail_9,
  MR_Word * Cases_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Conjuncts_6 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var_19;
    MR_Word Var_20;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_20 = ((MR_Word) ((MR_hl_field(1, Conjuncts_6, 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(1, Conjuncts_6, 1))));
      if ((Var_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word GoalExpr_21 = ((MR_Word) ((MR_hl_field(0, Var_20, 0))));
        MR_Word GoalInfo_22 = ((MR_Word) ((MR_hl_field(0, Var_20, 1))));

        switch (MR_tag((MR_Word) GoalExpr_21)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_21, 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts0_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, 2))));
                  MR_Word Conjuncts_29;
                  MR_Word Var_60 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_21, 1))) & (MR_Integer) 1);
                  MR_Word next_value_of_Conjuncts_6;

                  succeeded = (Var_60 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    hlds__goal_transform__flatten_conj_2_p_0(Conjuncts0_28, &Conjuncts_29);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Conjuncts_6 = Conjuncts_29;
                    Conjuncts_6 = next_value_of_Conjuncts_6;
                    continue;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  *SwitchVar_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, 1))));
                  *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_21, 2))) & (MR_Integer) 1);
                  *Cases_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, 3))));
                  *SwitchContext_7 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_22);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, 1))));
                  MR_Word SubGoal_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, 2))));
                  MR_Word SubGoalExpr_26;
                  MR_Word SubGoalInfo_27;

                  succeeded = ((((MR_tag((MR_Word) Reason_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_23, 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    SubGoalExpr_26 = ((MR_Word) ((MR_hl_field(0, SubGoal_24, 0))));
                    SubGoalInfo_27 = ((MR_Word) ((MR_hl_field(0, SubGoal_24, 1))));
                    succeeded = ((((MR_tag((MR_Word) SubGoalExpr_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr_26, 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      *SwitchVar_8 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_26, 1))));
                      *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr_26, 2))) & (MR_Integer) 1);
                      *Cases_10 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_26, 3))));
                      *SwitchContext_7 = hlds__hlds_goal__goal_info_get_context_1_f_0(SubGoalInfo_27);
                      succeeded = MR_TRUE;
                    }
                  }
                }
                break;
            }
            break;
        }
      }
      else
      {
        MR_Word next_value_of_Conjuncts_6;

        succeeded = hlds__hlds_goal__goal_has_feature_2_p_0(Var_20, (MR_Integer) 28);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_Conjuncts_6 = Var_19;
          Conjuncts_6 = next_value_of_Conjuncts_6;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_goal_detism_for_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DetInfo_7 = STATE_VARIABLE_DetInfo_0_6;
    else
    {
      MR_Word Case_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case_18, 0))));
      MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case_18, 1))));
      MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(0, Case_18, 2))));
      MR_Word ModuleInfo0_25;
      MR_Word InstMap1_26;
      MR_Word ModuleInfo_27;
      MR_Word CheckKind_28;
      MR_Word STATE_VARIABLE_DetInfo_1_31;
      MR_Word STATE_VARIABLE_DetInfo_2_32;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_6;

      check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_6, &ModuleInfo0_25);
      hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__2_2, HeadVar__3_3, MainConsId_22, OtherConsIds_23, HeadVar__5_5, &InstMap1_26, ModuleInfo0_25, &ModuleInfo_27);
      check_hlds__det_util__det_info_set_module_info_3_p_0(ModuleInfo_27, STATE_VARIABLE_DetInfo_0_6, &STATE_VARIABLE_DetInfo_1_31);
      {
        CheckKind_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CheckKind_28, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(1, CheckKind_28, 1) = ((MR_Box) (MainConsId_22));
        MR_hl_field(1, CheckKind_28, 2) = ((MR_Box) (OtherConsIds_23));
      }
      check_hlds__det_check_switch__reqscope_check_goal_detism_6_p_0(HeadVar__1_1, Goal_24, CheckKind_28, InstMap1_26, STATE_VARIABLE_DetInfo_1_31, &STATE_VARIABLE_DetInfo_2_32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Cases_19;
      next_value_of_STATE_VARIABLE_DetInfo_0_6 = STATE_VARIABLE_DetInfo_2_32;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DetInfo_0_6 = next_value_of_STATE_VARIABLE_DetInfo_0_6;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__det_check_switch__reqscope_check_goal_detism_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_check_switch__reqscope_check_goal_detism_6_p_0(
  MR_Word RequiredDetism_7,
  MR_Word Goal_8,
  MR_Word CheckKind_9,
  MR_Word InstMap0_10,
  MR_Word STATE_VARIABLE_DetInfo_0_38,
  MR_Word * STATE_VARIABLE_DetInfo_39)
{
  MR_bool succeeded;
  MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, Goal_8, 1))));
  MR_Word ActualDetism_14;
  MR_Word CompareResult_15;

  ActualDetism_14 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_13);
  parse_tree__prog_detism__compare_determinisms_3_p_0(ActualDetism_14, RequiredDetism_7, &CompareResult_15);
  if (((MR_tag((MR_Word) CheckKind_9)) == (MR_Integer) 0))
    succeeded = (CompareResult_15 == (MR_Integer) 1);
  else
    switch (CompareResult_15) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
    }
  if (succeeded)
    *STATE_VARIABLE_DetInfo_39 = STATE_VARIABLE_DetInfo_0_38;
  else
  {
    MR_String ReqDetismStr_20;
    MR_String ActDetismStr_21;
    MR_Word ReqPieces_22;
    MR_Word ActPieces_23;
    MR_Word Context_25;
    MR_Word Pieces_26;
    MR_Word Msg_35;
    MR_Word SubMsgs_36;
    MR_Word Spec_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word STATE_VARIABLE_DetInfo_1_118;
    MR_Word Var_122;

    ReqDetismStr_20 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(RequiredDetism_7);
    ActDetismStr_21 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(ActualDetism_14);
    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (ReqDetismStr_20));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[54])));
    }
    ReqPieces_22 = parse_tree__error_spec__color_as_correct_1_f_0(Var_40);
    {
      Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_47, 1) = ((MR_Box) (ActDetismStr_21));
    }
    {
      Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_46, 0) = ((MR_Box) (Var_47));
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[10])));
    }
    ActPieces_23 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_46);
    if (((MR_tag((MR_Word) CheckKind_9)) == (MR_Integer) 0))
    {
      MR_Word ScopeGoalInfo_24 = ((MR_Word) ((MR_hl_field(0, CheckKind_9, 0))));
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_65;

      Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(ScopeGoalInfo_24);
      Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[19])));
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[60])), Var_65);
      Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ReqPieces_22, Var_60);
      Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[58])), Var_59);
    }
    else
    {
      MR_Word SwitchVar_27 = ((MR_Word) ((MR_hl_field(1, CheckKind_9, 0))));
      MR_Word MainConsId_28 = ((MR_Word) ((MR_hl_field(1, CheckKind_9, 1))));
      MR_Word OtherConsIds_29 = ((MR_Word) ((MR_hl_field(1, CheckKind_9, 2))));
      MR_Word VarTable_30;
      MR_String SwitchVarName_31;
      MR_String MainConsIdStr_32;
      MR_Word OtherConsIdStrs_33;
      MR_Word ConsIdsPieces_34;
      MR_Word Var_71;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_84;
      MR_Word Var_92;
      MR_Word Var_93;
      MR_Word Var_94;
      MR_Word Var_97;
      MR_Word Var_108;
      MR_Word Var_109;
      MR_Word Var_114;

      Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
      check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_38, &VarTable_30);
      SwitchVarName_31 = parse_tree__var_table__var_table_entry_name_2_f_0(VarTable_30, SwitchVar_27);
      MainConsIdStr_32 = parse_tree__parse_tree_out_cons_id__cons_id_and_arity_to_string_1_f_0(MainConsId_28);
      OtherConsIdStrs_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__det_check_switch_scalar_common_3[8]), OtherConsIds_29);
      {
        Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_71, 0) = ((MR_Box) (MainConsIdStr_32));
        MR_hl_field(1, Var_71, 1) = ((MR_Box) (OtherConsIdStrs_33));
      }
      ConsIdsPieces_34 = parse_tree__error_spec__fixed_list_to_pieces_2_f_0((MR_String) "and", Var_71);
      {
        Var_82 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_82, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, Var_82, 1) = ((MR_Box) (SwitchVarName_31));
      }
      {
        Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[28])));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
      }
      Var_77 = parse_tree__error_spec__color_as_subject_1_f_0(Var_78);
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_93 = parse_tree__error_spec__color_as_correct_1_f_0(Var_94);
      Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[19])));
      Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[74])), Var_114);
      Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConsIdsPieces_34, Var_109);
      Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[72])), Var_108);
      Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_97);
      Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[66])), Var_92);
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_84);
      Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[62])), Var_76);
    }
    {
      Msg_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Msg_35, 0) = ((MR_Box) (Context_25));
      MR_hl_field(0, Msg_35, 1) = ((MR_Box) (Pieces_26));
    }
    check_hlds__det_check_goal__det_diagnose_goal_get_msgs_6_p_0(InstMap0_10, RequiredDetism_7, Goal_8, &SubMsgs_36, STATE_VARIABLE_DetInfo_0_38, &STATE_VARIABLE_DetInfo_1_118);
    {
      Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_122, 0) = ((MR_Box) (Msg_35));
      MR_hl_field(1, Var_122, 1) = ((MR_Box) (SubMsgs_36));
    }
    {
      Spec_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_switch.reqscope_check_goal_detism\'/6"));
      MR_hl_field(2, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(2, Spec_37, 3) = ((MR_Box) (Var_122));
    }
    check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_37, STATE_VARIABLE_DetInfo_1_118, STATE_VARIABLE_DetInfo_39);
  }
}

static MR_Box MR_CALL 
check_hlds__det_check_switch__generate_type_order_switch_spec_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__parse_tree_out_sym_name__mercury_sym_name_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
check_hlds__det_check_switch__generate_type_order_switch_spec_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = parse_tree__parse_tree_out_sym_name__mercury_sym_name_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_check_switch__generate_type_order_switch_spec_7_p_0(
  MR_Word GoalInfo_8,
  MR_Word TypeCtor_9,
  MR_String VarName_10,
  MR_Word TypeSNAs_11,
  MR_Word CaseSNAs_12,
  MR_Word STATE_VARIABLE_DetInfo_0_21,
  MR_Word * STATE_VARIABLE_DetInfo_22)
{
  MR_Word Context_14;
  MR_Word TypeSNAStrs_15;
  MR_Word CaseSNAStrs_16;
  MR_Word DiffPieces_18;
  MR_Word Pieces_19;
  MR_Word Spec_20;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_46;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_56;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_65;

  Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_8);
  TypeSNAStrs_15 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__det_check_switch_scalar_common_3[6]), TypeSNAs_11);
  CaseSNAStrs_16 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__det_check_switch_scalar_common_3[7]), CaseSNAs_12);
  parse_tree__error_spec__construct_diff_for_string_seqs_4_p_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_3[0]), TypeSNAStrs_15, CaseSNAStrs_16, &DiffPieces_18);
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (VarName_10));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[28])));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) (Var_37));
  }
  Var_33 = parse_tree__error_spec__color_as_subject_1_f_0(Var_34);
  Var_41 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[42])));
  {
    Var_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_60, 0) = ((MR_Box) ((MR_Unsigned) 21U));
    MR_hl_field(3, Var_60, 1) = ((MR_Box) (TypeCtor_9));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[48])));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[46])));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[45])));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_56));
  }
  Var_52 = parse_tree__error_spec__color_as_correct_1_f_0(Var_53);
  Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[53])), DiffPieces_18);
  Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_52, Var_65);
  Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[44])), Var_51);
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_46);
  Var_32 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_33, Var_40);
  Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[40])), Var_32);
  {
    Spec_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_20, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_switch.generate_type_order_switch_spec\'/7"));
    MR_hl_field(0, Spec_20, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__det_check_switch_scalar_common_2[4])));
    MR_hl_field(0, Spec_20, 2) = ((MR_Box) ((MR_Unsigned) 68U));
    MR_hl_field(0, Spec_20, 3) = ((MR_Box) (Context_14));
    MR_hl_field(0, Spec_20, 4) = ((MR_Box) (Pieces_19));
  }
  check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_20, STATE_VARIABLE_DetInfo_0_21, STATE_VARIABLE_DetInfo_22);
}

static void MR_CALL 
check_hlds__det_check_switch__does_switch_violate_type_order_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_SNA_4;

  check_hlds__det_check_switch__cons_id_to_sym_name_arity_2_p_0(((MR_Word) (wrapper_arg_1)), &conv1_SNA_4);
  *wrapper_arg_2 = ((MR_Box) (conv1_SNA_4));
}

static void MR_CALL 
check_hlds__det_check_switch__does_switch_violate_type_order_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_SNA_4;

  check_hlds__det_check_switch__constructor_to_sym_name_arity_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_SNA_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_SNA_4));
}

static MR_bool MR_CALL 
check_hlds__det_check_switch__does_switch_violate_type_order_6_p_0(
  MR_Word DetInfo_7,
  MR_Word VarType_8,
  MR_Word Cases_9,
  MR_Word * VarTypeCtor_10,
  MR_Word * TypeSNAs_11,
  MR_Word * CaseSNAs_12)
{
  MR_bool succeeded;
  MR_Word TypeCtorInfo_31_31;
  MR_Word TypeCtorInfo_32_32;
  MR_Word TypeInfo_33_33;
  MR_Word TypeCtorInfo_34_34;
  MR_Word TypeCtorInfo_37_37;
  MR_Word ModuleInfo_13;
  MR_Word TypeTable_14;
  MR_Word TypeDefn_15;
  MR_Word TypeBody_16;
  MR_Word TypeBodyDu_17;
  MR_Word OoMTypeConstructors_18;
  MR_Word TypeConstructors_24;
  MR_Word ContextMap_25;
  MR_Word ContextConsIdLists_26;
  MR_Word CaseConsIds_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word TypeInfo_40_40;

  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_7, &ModuleInfo_13);
  hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_13, &TypeTable_14);
  parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_8, VarTypeCtor_10);
  succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_14, *VarTypeCtor_10, &TypeDefn_15);
  if (succeeded)
  {
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_15, &TypeBody_16);
    succeeded = ((MR_tag((MR_Word) TypeBody_16)) == (MR_Integer) 0);
    if (succeeded)
    {
      TypeBodyDu_17 = (MR_Word) ((MR_Word) (TypeBody_16));
      OoMTypeConstructors_18 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_17, 0))));
      TypeCtorInfo_31_31 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0);
      TypeConstructors_24 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_31_31, OoMTypeConstructors_18);
      TypeCtorInfo_32_32 = (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0);
      TypeInfo_33_33 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[2]);
      Var_28 = mercury__map__init_0_f_0(TypeCtorInfo_32_32, TypeInfo_33_33);
      check_hlds__det_check_switch__gather_switch_arms_cons_ids_in_order_3_p_0(Cases_9, Var_28, &ContextMap_25);
      mercury__map__values_2_p_0(TypeCtorInfo_32_32, TypeInfo_33_33, ContextMap_25, &ContextConsIdLists_26);
      TypeCtorInfo_34_34 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
      mercury__list__condense_2_p_0(TypeCtorInfo_34_34, ContextConsIdLists_26, &CaseConsIds_27);
      Var_29 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_3[4]);
      TypeCtorInfo_37_37 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_arity_0);
      mercury__list__map_3_p_0(TypeCtorInfo_31_31, TypeCtorInfo_37_37, Var_29, TypeConstructors_24, TypeSNAs_11);
      Var_30 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_3[5]);
      mercury__list__map_3_p_0(TypeCtorInfo_34_34, TypeCtorInfo_37_37, Var_30, CaseConsIds_27, CaseSNAs_12);
      TypeInfo_40_40 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[38]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_40_40, ((MR_Box) (*TypeSNAs_11)), ((MR_Box) (*CaseSNAs_12)));
      succeeded = !(succeeded);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch__gather_switch_arms_cons_ids_in_order_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ContextMap_0_2,
  MR_Word * STATE_VARIABLE_ContextMap_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ContextMap_3 = STATE_VARIABLE_ContextMap_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(0, Case_7, 0))));
      MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(0, Case_7, 1))));
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(0, Case_7, 2))));
      MR_Word CaseConsIds_13;
      MR_Word GoalInfo_15;
      MR_Word Context_16;
      MR_Word STATE_VARIABLE_ContextMap_1_21;
      MR_Word OldConsIds_17;
      MR_Box conv0_OldConsIds_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ContextMap_0_2;

      {
        CaseConsIds_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CaseConsIds_13, 0) = ((MR_Box) (MainConsId_10));
        MR_hl_field(1, CaseConsIds_13, 1) = ((MR_Box) (OtherConsIds_11));
      }
      GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_12, 1))));
      Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
      succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[2]), STATE_VARIABLE_ContextMap_0_2, ((MR_Box) (Context_16)), &conv0_OldConsIds_17);
      if (succeeded)
      {
        OldConsIds_17 = ((MR_Word) (conv0_OldConsIds_17));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word NewConsIds_18;

        NewConsIds_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), OldConsIds_17, CaseConsIds_13);
        mercury__map__det_update_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[2]), ((MR_Box) (Context_16)), ((MR_Box) (NewConsIds_18)), STATE_VARIABLE_ContextMap_0_2, &STATE_VARIABLE_ContextMap_1_21);
      }
      else
        mercury__map__det_insert_4_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[2]), ((MR_Box) (Context_16)), ((MR_Box) (CaseConsIds_13)), STATE_VARIABLE_ContextMap_0_2, &STATE_VARIABLE_ContextMap_1_21);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_ContextMap_0_2 = STATE_VARIABLE_ContextMap_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ContextMap_0_2 = next_value_of_STATE_VARIABLE_ContextMap_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_check_switch__generate_incomplete_switch_spec_9_p_0(
  MR_Word Why_10,
  MR_Word MaybeLimit_11,
  MR_Word InstMap0_12,
  MR_Word SwitchContexts_13,
  MR_Word SwitchVar_14,
  MR_Word Cases_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_DetInfo_0_39,
  MR_Word * STATE_VARIABLE_DetInfo_40)
{
  MR_bool succeeded;
  MR_Word NestingPieces_18;
  MR_String SwitchVarStr_19;
  MR_Word MaybeMissingInfo_20;

  check_hlds__det_check_switch__find_missing_cons_ids_9_p_0(STATE_VARIABLE_DetInfo_0_39, MaybeLimit_11, InstMap0_12, SwitchContexts_13, SwitchVar_14, Cases_15, &NestingPieces_18, &SwitchVarStr_19, &MaybeMissingInfo_20);
  switch (Why_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeSeverityComponents_28;
        MR_Word Severity_35;
        MR_Word SpecComponents_36;
        MR_Word Msg_37;
        MR_Word Spec_38;
        MR_Tuple Var_114;
        MR_Word Var_117;

        if ((MaybeMissingInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_95;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_109;
          MR_Tuple Var_110;
          MR_Word Var_112;
          MR_Word Component_123;
          MR_Word NoCoverPieces_124;

          {
            Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_101, 1) = ((MR_Box) (SwitchVarStr_19));
          }
          {
            Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
            MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_97, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[28])));
            MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_100));
          }
          Var_96 = parse_tree__error_spec__color_as_subject_1_f_0(Var_97);
          Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[30])));
          NoCoverPieces_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[27])), Var_95);
          Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_18, NoCoverPieces_124);
          {
            Component_123 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Component_123, 0) = ((MR_Box) (Var_109));
          }
          {
            Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_112, 0) = ((MR_Box) (Component_123));
            MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_110 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_110, 1) = ((MR_Box) (Var_112));
          }
          {
            MaybeSeverityComponents_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeSeverityComponents_28, 0) = ((MR_Box) (Var_110));
          }
        }
        else
        {
          MR_Word MissingInfo_21 = ((MR_Word) ((MR_hl_field(1, MaybeMissingInfo_20, 0))));
          MR_Word MainPieces_24 = ((MR_Word) ((MR_hl_field(0, MissingInfo_21, 2))));
          MR_Word VerbosePieces_25 = ((MR_Word) ((MR_hl_field(0, MissingInfo_21, 3))));
          MR_Word ErrorPieces_26;
          MR_Word Component_27;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word Var_49;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_63;
          MR_Tuple Var_66;
          MR_Word Var_68;

          {
            Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_53, 1) = ((MR_Box) (SwitchVarStr_19));
          }
          {
            Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
            MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[28])));
            MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
          }
          Var_48 = parse_tree__error_spec__color_as_subject_1_f_0(Var_49);
          Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[34])));
          ErrorPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[27])), Var_47);
          Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_18, ErrorPieces_26);
          parse_tree__error_spec__append_prefix_and_maybe_verbose_6_p_0((MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_2[2])), Var_63, (MR_Word) ((MR_Unsigned) 0U), MainPieces_24, VerbosePieces_25, &Component_27);
          {
            Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_68, 0) = ((MR_Box) (Component_27));
            MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_66 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(0, Var_66, 1) = ((MR_Box) (Var_68));
          }
          {
            MaybeSeverityComponents_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeSeverityComponents_28, 0) = ((MR_Box) (Var_66));
          }
        }
        Var_114 = ((MR_Tuple) ((MR_hl_field(1, MaybeSeverityComponents_28, 0))));
        Severity_35 = ((MR_Word) ((MR_hl_field(0, Var_114, 0))));
        SpecComponents_36 = ((MR_Word) ((MR_hl_field(0, Var_114, 1))));
        {
          Msg_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Msg_37, 0) = ((MR_Box) (Context_16));
          MR_hl_field(2, Msg_37, 1) = ((MR_Box) (SpecComponents_36));
        }
        {
          Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_117, 0) = ((MR_Box) (Msg_37));
          MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_38, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_switch.generate_incomplete_switch_spec\'/9"));
          MR_hl_field(2, Spec_38, 1) = ((MR_Box) (Severity_35));
          MR_hl_field(2, Spec_38, 2) = ((MR_Box) ((MR_Unsigned) 68U));
          MR_hl_field(2, Spec_38, 3) = ((MR_Box) (Var_117));
        }
        check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_38, STATE_VARIABLE_DetInfo_0_39, STATE_VARIABLE_DetInfo_40);
      }
      break;
    case (MR_Integer) 1:
      if ((MaybeMissingInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_DetInfo_40 = STATE_VARIABLE_DetInfo_0_39;
      else
      {
        MR_Word ModuleInfo_29;
        MR_Word Globals_30;
        MR_Integer Threshold_31;
        MR_Integer NumCoveredConsIds_32;
        MR_Word MissingInfo_127 = ((MR_Word) ((MR_hl_field(1, MaybeMissingInfo_20, 0))));
        MR_Integer NumPossibleConsIds_128 = ((MR_Integer) ((MR_hl_field(0, MissingInfo_127, 0))));
        MR_Integer NumUncoveredConsIds_129 = ((MR_Integer) ((MR_hl_field(0, MissingInfo_127, 1))));
        MR_Word MainPieces_130 = ((MR_Word) ((MR_hl_field(0, MissingInfo_127, 2))));
        MR_Word VerbosePieces_131 = ((MR_Word) ((MR_hl_field(0, MissingInfo_127, 3))));
        MR_Integer Var_71;
        MR_Integer Var_72;

        check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_39, &ModuleInfo_29);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_29, &Globals_30);
        libs__globals__lookup_int_option_3_p_0(Globals_30, (MR_Integer) 225, &Threshold_31);
        NumCoveredConsIds_32 = (MR_Integer) ((MR_Unsigned) NumPossibleConsIds_128 - (MR_Unsigned) NumUncoveredConsIds_129);
        Var_71 = (MR_Integer) ((MR_Unsigned) NumCoveredConsIds_32 * (MR_Unsigned) 100);
        Var_72 = (MR_Integer) ((MR_Unsigned) NumPossibleConsIds_128 * (MR_Unsigned) Threshold_31);
        succeeded = (Var_71 >= Var_72);
        if (succeeded)
        {
          MR_Word NoCoverPieces_33;
          MR_Word Var_75;
          MR_Word Var_78;
          MR_Word Var_79;
          MR_Word Component_120;
          MR_Word SpecComponents_138;
          MR_Word Msg_139;
          MR_Word Spec_140;
          MR_Word Var_144;

          {
            Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_79, 1) = ((MR_Box) (SwitchVarStr_19));
          }
          {
            Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
            MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[37])));
          }
          {
            Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[35])));
            MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
          }
          {
            NoCoverPieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NoCoverPieces_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, NoCoverPieces_33, 1) = ((MR_Box) (Var_75));
          }
          parse_tree__error_spec__append_prefix_and_maybe_verbose_6_p_0((MR_Word) ((MR_Unsigned) 0U), NestingPieces_18, NoCoverPieces_33, MainPieces_130, VerbosePieces_131, &Component_120);
          {
            SpecComponents_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SpecComponents_138, 0) = ((MR_Box) (Component_120));
            MR_hl_field(1, SpecComponents_138, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Msg_139 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Msg_139, 0) = ((MR_Box) (Context_16));
            MR_hl_field(2, Msg_139, 1) = ((MR_Box) (SpecComponents_138));
          }
          {
            Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_144, 0) = ((MR_Box) (Msg_139));
            MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Spec_140 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Spec_140, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_check_switch.generate_incomplete_switch_spec\'/9"));
            MR_hl_field(2, Spec_140, 1) = ((MR_Box) (MR_mkword(2, &check_hlds__det_check_switch_scalar_common_2[3])));
            MR_hl_field(2, Spec_140, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(2, Spec_140, 3) = ((MR_Box) (Var_144));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_140, STATE_VARIABLE_DetInfo_0_39, STATE_VARIABLE_DetInfo_40);
        }
        else
          *STATE_VARIABLE_DetInfo_40 = STATE_VARIABLE_DetInfo_0_39;
      }
      break;
  }
}

static MR_Box MR_CALL 
check_hlds__det_check_switch__find_missing_cons_ids_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_65;

  conv1_LambdaHeadVar__2_65 = check_hlds__det_check_switch__IntroducedFrom__func__find_missing_cons_ids__1085__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_65));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_check_switch__find_missing_cons_ids_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  parse_tree__prog_util__strip_module_qualifier_from_cons_id_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

void MR_CALL 
check_hlds__det_check_switch__find_missing_cons_ids_9_p_0(
  MR_Word DetInfo_10,
  MR_Word MaybeLimit_11,
  MR_Word InstMap0_12,
  MR_Word SwitchContexts_13,
  MR_Word Var_14,
  MR_Word Cases_15,
  MR_Word * NestingPieces_16,
  MR_String * VarStr_17,
  MR_Word * MaybeMissingInfo_18)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_19;
  MR_Word VarTable_20;
  MR_Word VarInst_21;
  MR_Word PossibleConsIdsSet_34;
  MR_Word VarType_22;
  MR_Word VarTypeCtor_23;
  MR_Word TypeTable_24;
  MR_Word Var_145;
  MR_Word BoundFunctors_25;

  check_hlds__det_check_switch__det_diagnose_switch_context_3_p_0(DetInfo_10, SwitchContexts_13, NestingPieces_16);
  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_10, &ModuleInfo_19);
  check_hlds__det_util__det_info_get_var_table_2_p_0(DetInfo_10, &VarTable_20);
  *VarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_20, (MR_Integer) 0, Var_14);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_12, Var_14, &VarInst_21);
  check_hlds__det_util__det_info_get_var_table_2_p_0(DetInfo_10, &Var_145);
  succeeded = parse_tree__var_table____Unify____var_table_0_0(VarTable_20, Var_145);
  if (succeeded)
  {
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_20, Var_14, &VarType_22);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_22, &VarTypeCtor_23);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_19, &TypeTable_24);
    succeeded = hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_19, VarInst_21, &BoundFunctors_25);
    if (succeeded)
    {
      MR_Word BoundConsIds_26;
      MR_Word SortedBoundConsIds_27;
      MR_Word BoundConsIdsSet_28;
      MR_Word TypeBodyDu_31;
      MR_Word TypeDefn_29;
      MR_Word TypeBody_30;

      parse_tree__prog_mode__bound_functors_to_cons_ids_3_p_0(VarTypeCtor_23, BoundFunctors_25, &BoundConsIds_26);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), BoundConsIds_26, &SortedBoundConsIds_27);
      mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), SortedBoundConsIds_27, &BoundConsIdsSet_28);
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_24, VarTypeCtor_23, &TypeDefn_29);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_29, &TypeBody_30);
        succeeded = ((MR_tag((MR_Word) TypeBody_30)) == (MR_Integer) 0);
        if (succeeded)
          TypeBodyDu_31 = (MR_Word) ((MR_Word) (TypeBody_30));
      }
      if (succeeded)
      {
        MR_Word SortedTypeConsIds_32;
        MR_Word TypeConsIdsSet_33;
        MR_Word SortedOoMCtors_148 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_31, 1))));
        MR_Word SortedCtors_153;

        SortedCtors_153 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), SortedOoMCtors_148);
        check_hlds__det_check_switch__ctors_to_cons_ids_loop_3_p_0(VarTypeCtor_23, SortedCtors_153, &SortedTypeConsIds_32);
        mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), SortedTypeConsIds_32, &TypeConsIdsSet_33);
        mercury__set_tree234__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), TypeConsIdsSet_33, BoundConsIdsSet_28, &PossibleConsIdsSet_34);
      }
      else
        PossibleConsIdsSet_34 = BoundConsIdsSet_28;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_138_138;
      MR_Word TypeDefn_131;
      MR_Word TypeBody_132;
      MR_Word TypeBodyDu_133;
      MR_Word SortedTypeConsIds_134;

      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_24, VarTypeCtor_23, &TypeDefn_131);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_131, &TypeBody_132);
        succeeded = ((MR_tag((MR_Word) TypeBody_132)) == (MR_Integer) 0);
        if (succeeded)
        {
          TypeBodyDu_133 = (MR_Word) ((MR_Word) (TypeBody_132));
          SortedTypeConsIds_134 = check_hlds__det_check_switch__type_cons_ids_in_alpha_order_2_f_0(VarTypeCtor_23, TypeBodyDu_133);
          TypeCtorInfo_138_138 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
          mercury__set_tree234__sorted_list_to_set_2_p_0(TypeCtorInfo_138_138, SortedTypeConsIds_134, &PossibleConsIdsSet_34);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word CoveredConsIdsSet_35;
    MR_Word UncoveredConsIdsSet_36;
    MR_Integer NumPossibleConsIds_37;
    MR_Integer NumUncoveredConsIds_38;
    MR_Word UncoveredConsIds_39;
    MR_Word UnQualConsIds_40;
    MR_Word SortedUnQualConsIds_41;
    MR_Word PrintedConsIds_42;
    MR_Word NonPrintedConsIds_43;
    MR_Word Var_60;

    Var_60 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0));
    check_hlds__det_check_switch__compute_covered_cons_ids_3_p_0(Cases_15, Var_60, &CoveredConsIdsSet_35);
    mercury__set_tree234__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), PossibleConsIdsSet_34, CoveredConsIdsSet_35, &UncoveredConsIdsSet_36);
    NumPossibleConsIds_37 = mercury__set_tree234__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), PossibleConsIdsSet_34);
    NumUncoveredConsIds_38 = mercury__set_tree234__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UncoveredConsIdsSet_36);
    UncoveredConsIds_39 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UncoveredConsIdsSet_36);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__det_check_switch_scalar_common_3[2]), UncoveredConsIds_39, &UnQualConsIds_40);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UnQualConsIds_40, &SortedUnQualConsIds_41);
    if ((MaybeLimit_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PrintedConsIds_42 = SortedUnQualConsIds_41;
      NonPrintedConsIds_43 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Integer Limit_44 = ((MR_Integer) ((MR_hl_field(1, MaybeLimit_11, 0))));
      MR_Integer NumConsIds_45;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), SortedUnQualConsIds_41, &NumConsIds_45);
      succeeded = (NumConsIds_45 <= Limit_44);
      if (succeeded)
      {
        PrintedConsIds_42 = SortedUnQualConsIds_41;
        NonPrintedConsIds_43 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Integer Var_62 = (MR_Integer) ((MR_Unsigned) Limit_44 - (MR_Unsigned) 1);

        mercury__list__split_upto_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_62, SortedUnQualConsIds_41, &PrintedConsIds_42, &NonPrintedConsIds_43);
      }
    }
    if ((PrintedConsIds_42 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeMissingInfo_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PrintedConsIdPieces_50;
      MR_Word MainPieces_51;
      MR_Word VerbosePieces_52;
      MR_Word MissingInfo_58;

      PrintedConsIdPieces_50 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[1]), (MR_Word) (&check_hlds__det_check_switch_scalar_common_3[3]), PrintedConsIds_42);
      if ((NonPrintedConsIds_43 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_72;
        MR_Word Var_73;

        Var_73 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[10])), PrintedConsIdPieces_50);
        Var_72 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_73, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[12])));
        MainPieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[8])), Var_72);
        VerbosePieces_52 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word NonPrintedConsIdPieces_55;
        MR_Integer NumNonPrintedConsIds_56;
        MR_Word ConsIdPieces_57;
        MR_Word Var_87;
        MR_Word Var_88;
        MR_Word Var_97;
        MR_Word Var_102;
        MR_Word Var_103;
        MR_Word Var_104;
        MR_Word Var_107;
        MR_Word Var_108;
        MR_Word Var_120;
        MR_Word Var_121;

        NonPrintedConsIdPieces_55 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[1]), (MR_Word) (&check_hlds__det_check_switch_scalar_common_3[3]), NonPrintedConsIds_43);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), NonPrintedConsIds_43, &NumNonPrintedConsIds_56);
        Var_88 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[15])), PrintedConsIdPieces_50);
        {
          Var_108 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_108, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_108, 1) = ((MR_Box) (NumNonPrintedConsIds_56));
        }
        {
          Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_107, 0) = ((MR_Box) (Var_108));
          MR_hl_field(1, Var_107, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[18])));
        }
        {
          Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_104, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[16])));
          MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_107));
        }
        Var_103 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_104);
        Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_103, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[19])));
        Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[12])), Var_102);
        Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, Var_97);
        MainPieces_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[8])), Var_87);
        ConsIdPieces_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_check_switch_scalar_common_1[1]), PrintedConsIdPieces_50, NonPrintedConsIdPieces_55);
        Var_121 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[10])), ConsIdPieces_57);
        Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_121, (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[12])));
        VerbosePieces_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[8])), Var_120);
      }
      {
        MissingInfo_58 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MissingInfo_58, 0) = ((MR_Box) (NumPossibleConsIds_37));
        MR_hl_field(0, MissingInfo_58, 1) = ((MR_Box) (NumUncoveredConsIds_38));
        MR_hl_field(0, MissingInfo_58, 2) = ((MR_Box) (MainPieces_51));
        MR_hl_field(0, MissingInfo_58, 3) = ((MR_Box) (VerbosePieces_52));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMissingInfo_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MissingInfo_58));
      }
    }
  }
  else
    *MaybeMissingInfo_18 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Word MR_CALL 
check_hlds__det_check_switch__type_cons_ids_in_alpha_order_2_f_0(
  MR_Word TypeCtor_4,
  MR_Word TypeBodyDu_5)
{
  MR_Word SortedConsIds_6;
  MR_Word SortedOoMCtors_8 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_5, 1))));
  MR_Word SortedCtors_13;

  SortedCtors_13 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), SortedOoMCtors_8);
  check_hlds__det_check_switch__ctors_to_cons_ids_loop_3_p_0(TypeCtor_4, SortedCtors_13, &SortedConsIds_6);
  return SortedConsIds_6;
}

static void MR_CALL 
check_hlds__det_check_switch__ctors_to_cons_ids_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Ctor_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Ctors_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ConsId_8;
    MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, Ctor_6, 2))));
    MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, Ctor_6, 4))));
    MR_Word DuCtor_16;
    MR_Word * AddrConsIds_17;

    {
      DuCtor_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DuCtor_16, 0) = ((MR_Box) (SymName_12));
      MR_hl_field(0, DuCtor_16, 1) = ((MR_Box) (Arity_14));
      MR_hl_field(0, DuCtor_16, 2) = ((MR_Box) (HeadVar__1_1));
    }
    ConsId_8 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_16)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ConsId_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrConsIds_17 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    check_hlds__det_check_switch__LCMC__pred__ctors_to_cons_ids_loop__1_3_p_0(HeadVar__1_1, Ctors_7, AddrConsIds_17);
  }
}

static void MR_CALL 
check_hlds__det_check_switch__LCMC__pred__ctors_to_cons_ids_loop__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Ctor_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Ctors_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word ConsId_8;
      MR_Word SymName_12 = ((MR_Word) ((MR_hl_field(0, Ctor_6, 2))));
      MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, Ctor_6, 4))));
      MR_Word DuCtor_16;
      MR_Word * AddrConsIds_17;
      MR_Word HeadVar__3_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_18;

      {
        DuCtor_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DuCtor_16, 0) = ((MR_Box) (SymName_12));
        MR_hl_field(0, DuCtor_16, 1) = ((MR_Box) (Arity_14));
        MR_hl_field(0, DuCtor_16, 2) = ((MR_Box) (HeadVar__1_1));
      }
      ConsId_8 = (MR_Word) (MR_mkword(1, (MR_Word) (DuCtor_16)));
      {
        HeadVar__3_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_19, 0) = ((MR_Box) (ConsId_8));
        MR_hl_field(1, HeadVar__3_19, 1) = NULL;
      }
      AddrConsIds_17 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_19, 1)));
      *AddrOfHeadVar__3_18 = HeadVar__3_19;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Ctors_7;
      next_value_of_AddrOfHeadVar__3_18 = AddrConsIds_17;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_18 = next_value_of_AddrOfHeadVar__3_18;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_check_switch__compute_covered_cons_ids_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CoveredConsIds_0_2,
  MR_Word * STATE_VARIABLE_CoveredConsIds_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_CoveredConsIds_3 = STATE_VARIABLE_CoveredConsIds_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(0, Case_7, 0))));
      MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(0, Case_7, 1))));
      MR_Word STATE_VARIABLE_CoveredConsIds_1_15;
      MR_Word STATE_VARIABLE_CoveredConsIds_2_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CoveredConsIds_0_2;

      mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (MainConsId_10)), STATE_VARIABLE_CoveredConsIds_0_2, &STATE_VARIABLE_CoveredConsIds_1_15);
      mercury__set_tree234__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), OtherConsIds_11, STATE_VARIABLE_CoveredConsIds_1_15, &STATE_VARIABLE_CoveredConsIds_2_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_CoveredConsIds_0_2 = STATE_VARIABLE_CoveredConsIds_2_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CoveredConsIds_0_2 = next_value_of_STATE_VARIABLE_CoveredConsIds_0_2;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__det_check_switch__det_diagnose_switch_context_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = check_hlds__det_check_switch__switch_match_to_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

void MR_CALL 
check_hlds__det_check_switch__det_diagnose_switch_context_3_p_0(
  MR_Word DetInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SwitchContext_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word SwitchContexts_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word VarTable_9;
    MR_Word Var_10;
    MR_Word MainMatch_11;
    MR_Word OtherMatches_12;
    MR_String MainMatchStr_13;
    MR_Word OtherMatchStrs_14;
    MR_String MatchsStr_15;
    MR_String VarStr_16;
    MR_Word InnerPieces_17;
    MR_Word OuterPieces_18;
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_38;
    MR_Word ConsId_47;
    MR_Word MaybeArgVars_48;

    check_hlds__det_util__det_info_get_var_table_2_p_0(DetInfo_1, &VarTable_9);
    Var_10 = ((MR_Word) ((MR_hl_field(0, SwitchContext_6, 0))));
    MainMatch_11 = ((MR_Word) ((MR_hl_field(0, SwitchContext_6, 1))));
    OtherMatches_12 = ((MR_Word) ((MR_hl_field(0, SwitchContext_6, 2))));
    ConsId_47 = ((MR_Word) ((MR_hl_field(0, MainMatch_11, 0))));
    MaybeArgVars_48 = ((MR_Word) ((MR_hl_field(0, MainMatch_11, 1))));
    MainMatchStr_13 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(VarTable_9, (MR_Integer) 1, ConsId_47, MaybeArgVars_48);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__det_check_switch_scalar_common_5[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (check_hlds__det_check_switch__det_diagnose_switch_context_3_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (VarTable_9));
    }
    OtherMatchStrs_14 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_match_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, OtherMatches_12);
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (MainMatchStr_13));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (OtherMatchStrs_14));
    }
    MatchsStr_15 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_21);
    VarStr_16 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_9, (MR_Integer) 0, Var_10);
    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (MatchsStr_15));
    }
    {
      Var_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_31, 0) = ((MR_Box) (VarStr_16));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[23])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[21])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      InnerPieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InnerPieces_17, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_check_switch_scalar_common_1[20])));
      MR_hl_field(1, InnerPieces_17, 1) = ((MR_Box) (Var_25));
    }
    check_hlds__det_check_switch__det_diagnose_switch_context_3_p_0(DetInfo_1, SwitchContexts_7, &OuterPieces_18);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_check_switch_scalar_common_1[24])), InnerPieces_17);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_18, Var_38);
  }
}

static void MR_CALL 
check_hlds__det_check_switch__find_switch_var_matches_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Match_4;

  check_hlds__det_check_switch__make_switch_match_no_args_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Match_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Match_4));
}

void MR_CALL 
check_hlds__det_check_switch__find_switch_var_matches_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SwitchVarSynonyms_0_2,
  MR_Word MainConsId_3,
  MR_Word OtherConsIds_4,
  MR_Word * MainMatch_5,
  MR_Word * OtherMatches_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        *MainMatch_5 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_3));
        MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_match_0), (MR_Word) (&check_hlds__det_check_switch_scalar_common_3[1]), OtherConsIds_4, OtherMatches_6);
    }
    else
    {
      MR_Word Conjunct_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Conjuncts_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(0, Conjunct_13, 0))));
      MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Conjunct_13, 1))));
      MR_Word ArgVars_28;
      MR_Word TypeInfo_54_54;
      MR_Word Unification_25;
      MR_Word Var_27;
      MR_Word Var_57;

      succeeded = ((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unification_25 = ((MR_Word) ((MR_hl_field(1, GoalExpr_20, 3))));
        succeeded = ((MR_tag((MR_Word) Unification_25)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_27 = ((MR_Word) ((MR_hl_field(1, Unification_25, 0))));
          Var_57 = ((MR_Word) ((MR_hl_field(1, Unification_25, 1))));
          ArgVars_28 = ((MR_Word) ((MR_hl_field(1, Unification_25, 2))));
          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(MainConsId_3, Var_57);
          if (succeeded)
          {
            TypeInfo_54_54 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]);
            succeeded = mercury__list__member_2_p_0(TypeInfo_54_54, ((MR_Box) (Var_27)), STATE_VARIABLE_SwitchVarSynonyms_0_2);
            if (succeeded)
              succeeded = (OtherConsIds_4 == (MR_Word) ((MR_Unsigned) 0U));
          }
        }
      }
      if (succeeded)
      {
        MR_Word NonLocals_32;
        MR_Word ArgVarsSet_33;
        MR_Word MaybeArgVars_35;
        MR_Word NonLocalArgVarsSet_34;

        NonLocals_32 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_21);
        ArgVarsSet_33 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ArgVars_28);
        parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_32, ArgVarsSet_33, &NonLocalArgVarsSet_34);
        succeeded = parse_tree__set_of_var__is_non_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalArgVarsSet_34);
        if (succeeded)
          {
            MaybeArgVars_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeArgVars_35, 0) = ((MR_Box) (ArgVars_28));
          }
        else
          MaybeArgVars_35 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *MainMatch_5 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (MainConsId_3));
          MR_hl_field(0, base, 1) = ((MR_Box) (MaybeArgVars_35));
        }
        *OtherMatches_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word MainMatch0_37;
        MR_Word OtherMatches0_38;
        MR_Word Disjuncts_36;
        MR_Word Var_46;
        MR_Word Var_47;

        succeeded = ((((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_20, 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Disjuncts_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, 1))));
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (MainConsId_3));
          }
          succeeded = check_hlds__det_check_switch__find_switch_var_submatches_6_p_0(Disjuncts_36, STATE_VARIABLE_SwitchVarSynonyms_0_2, Var_46, OtherConsIds_4, &Var_47, &OtherMatches0_38);
          if (succeeded)
          {
            succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              MainMatch0_37 = ((MR_Word) ((MR_hl_field(1, Var_47, 0))));
          }
        }
        if (succeeded)
        {
          *MainMatch_5 = MainMatch0_37;
          *OtherMatches_6 = OtherMatches0_38;
        }
        else
        {
          MR_Word STATE_VARIABLE_SwitchVarSynonyms_1_48;
          MR_Word ToVar_43;
          MR_Word TypeInfo_56_56;
          MR_Word FromVar_44;
          MR_Word Unification_49;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_SwitchVarSynonyms_0_2;

          succeeded = ((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            Unification_49 = ((MR_Word) ((MR_hl_field(1, GoalExpr_20, 3))));
            succeeded = ((MR_tag((MR_Word) Unification_49)) == (MR_Integer) 2);
            if (succeeded)
            {
              ToVar_43 = ((MR_Word) ((MR_hl_field(2, Unification_49, 0))));
              FromVar_44 = ((MR_Word) ((MR_hl_field(2, Unification_49, 1))));
              TypeInfo_56_56 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]);
              succeeded = mercury__list__member_2_p_0(TypeInfo_56_56, ((MR_Box) (FromVar_44)), STATE_VARIABLE_SwitchVarSynonyms_0_2);
            }
          }
          if (succeeded)
            {
              STATE_VARIABLE_SwitchVarSynonyms_1_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_SwitchVarSynonyms_1_48, 0) = ((MR_Box) (ToVar_43));
              MR_hl_field(1, STATE_VARIABLE_SwitchVarSynonyms_1_48, 1) = ((MR_Box) (STATE_VARIABLE_SwitchVarSynonyms_0_2));
            }
          else
            STATE_VARIABLE_SwitchVarSynonyms_1_48 = STATE_VARIABLE_SwitchVarSynonyms_0_2;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Conjuncts_14;
          next_value_of_STATE_VARIABLE_SwitchVarSynonyms_0_2 = STATE_VARIABLE_SwitchVarSynonyms_1_48;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_SwitchVarSynonyms_0_2 = next_value_of_STATE_VARIABLE_SwitchVarSynonyms_0_2;
          continue;
        }
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__det_check_switch__find_switch_var_submatches_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchVarSynonyms_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
    }
  }
  else
  {
    MR_Word TypeInfo_40_40;
    MR_Word Disjunct_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Disjuncts_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word GoalExpr_15 = ((MR_Word) ((MR_hl_field(0, Disjunct_8, 0))));
    MR_Word GoalInfo_16 = ((MR_Word) ((MR_hl_field(0, Disjunct_8, 1))));
    MR_Word Unification_20;
    MR_Word Var_22;
    MR_Word ConsId_23;
    MR_Word ArgVars_24;
    MR_Word MainConsId_28;

    succeeded = ((MR_tag((MR_Word) GoalExpr_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      Unification_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr_15, 3))));
      succeeded = ((MR_tag((MR_Word) Unification_20)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_22 = ((MR_Word) ((MR_hl_field(1, Unification_20, 0))));
        ConsId_23 = ((MR_Word) ((MR_hl_field(1, Unification_20, 1))));
        ArgVars_24 = ((MR_Word) ((MR_hl_field(1, Unification_20, 2))));
        TypeInfo_40_40 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[0]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_40_40, ((MR_Box) (Var_22)), SwitchVarSynonyms_2);
        if (succeeded)
        {
          succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MainConsId_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_23, MainConsId_28);
          }
          if (succeeded)
          {
            MR_Word TypeInfo_45_45;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_43;

            succeeded = check_hlds__det_check_switch__find_switch_var_submatches_6_p_0(Disjuncts_9, SwitchVarSynonyms_2, (MR_Word) ((MR_Unsigned) 0U), HeadVar__4_4, &Var_43, HeadVar__6_6);
            if (succeeded)
            {
              TypeInfo_45_45 = (MR_Word) (&check_hlds__det_check_switch_scalar_common_1[81]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_43)));
              if (succeeded)
              {
                {
                  Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_38, 0) = ((MR_Box) (ArgVars_24));
                }
                {
                  Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_37, 0) = ((MR_Box) (ConsId_23));
                  MR_hl_field(0, Var_37, 1) = ((MR_Box) (Var_38));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_37));
                }
                succeeded = MR_TRUE;
              }
            }
          }
          else
          {
            MR_Word TypeCtorInfo_42_42;
            MR_Word LeftOverConsIds_29;
            MR_Word LeftOverMatches_30;
            MR_Word NonLocals_31;
            MR_Word ArgVarsSet_32;
            MR_Word MaybeArgVars_34;
            MR_Word Var_39;
            MR_Word NonLocalArgVarsSet_33;

            succeeded = mercury__list__delete_first_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), HeadVar__4_4, ((MR_Box) (ConsId_23)), &LeftOverConsIds_29);
            if (succeeded)
            {
              succeeded = check_hlds__det_check_switch__find_switch_var_submatches_6_p_0(Disjuncts_9, SwitchVarSynonyms_2, HeadVar__3_3, LeftOverConsIds_29, HeadVar__5_5, &LeftOverMatches_30);
              if (succeeded)
              {
                NonLocals_31 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_16);
                TypeCtorInfo_42_42 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
                parse_tree__set_of_var__list_to_set_2_p_0(TypeCtorInfo_42_42, ArgVars_24, &ArgVarsSet_32);
                parse_tree__set_of_var__intersect_3_p_0(TypeCtorInfo_42_42, NonLocals_31, ArgVarsSet_32, &NonLocalArgVarsSet_33);
                succeeded = parse_tree__set_of_var__is_non_empty_1_p_0(TypeCtorInfo_42_42, NonLocalArgVarsSet_33);
                if (succeeded)
                  {
                    MaybeArgVars_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, MaybeArgVars_34, 0) = ((MR_Box) (ArgVars_24));
                  }
                else
                  MaybeArgVars_34 = (MR_Word) ((MR_Unsigned) 0U);
                {
                  Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_39, 0) = ((MR_Box) (ConsId_23));
                  MR_hl_field(0, Var_39, 1) = ((MR_Box) (MaybeArgVars_34));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__6_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Var_39));
                  MR_hl_field(1, base, 1) = ((MR_Box) (LeftOverMatches_30));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch__lambda_update_instmap_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMap_0_3,
  MR_Word * STATE_VARIABLE_InstMap_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstMap_4 = STATE_VARIABLE_InstMap_0_3;
    else
    {
      MR_Word Var_10;
      MR_Word Mode_11;
      MR_Word VarsModes_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word InitInst_14;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word STATE_VARIABLE_InstMap_1_19;
      MR_Word _FinalInst_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InstMap_0_3;

      Var_10 = ((MR_Word) ((MR_hl_field(0, Var_18, 0))));
      Mode_11 = ((MR_Word) ((MR_hl_field(0, Var_18, 1))));
      hlds__mode_util__mode_get_insts_4_p_0(HeadVar__1_1, Mode_11, &InitInst_14, &_FinalInst_15);
      hlds__instmap__instmap_set_var_4_p_0(Var_10, InitInst_14, STATE_VARIABLE_InstMap_0_3, &STATE_VARIABLE_InstMap_1_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = VarsModes_12;
      next_value_of_STATE_VARIABLE_InstMap_0_3 = STATE_VARIABLE_InstMap_1_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InstMap_0_3 = next_value_of_STATE_VARIABLE_InstMap_0_3;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____detism_check_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_switch____Unify____detism_check_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch____Compare____detism_check_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_switch____Compare____detism_check_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____maybe_req_arms_in_type_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_switch____Unify____maybe_req_arms_in_type_order_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch____Compare____maybe_req_arms_in_type_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_switch____Compare____maybe_req_arms_in_type_order_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____maybe_warn_incomplete_switches_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_switch____Unify____maybe_warn_incomplete_switches_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch____Compare____maybe_warn_incomplete_switches_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_switch____Compare____maybe_warn_incomplete_switches_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____missing_cons_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_switch____Unify____missing_cons_id_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch____Compare____missing_cons_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_switch____Compare____missing_cons_id_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____reported_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_switch____Unify____reported_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch____Compare____reported_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_switch____Compare____reported_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____reqscope_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_switch____Unify____reqscope_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch____Compare____reqscope_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_switch____Compare____reqscope_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____switch_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_switch____Unify____switch_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch____Compare____switch_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_switch____Compare____switch_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____switch_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_switch____Unify____switch_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch____Compare____switch_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_switch____Compare____switch_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_check_switch____Unify____why_report_incomplete_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_check_switch____Unify____why_report_incomplete_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_check_switch____Compare____why_report_incomplete_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_check_switch____Compare____why_report_incomplete_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__det_check_switch__init(void)
{
}

void mercury__check_hlds__det_check_switch__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_detism_check_kind_0);
  MR_register_type_ctor_info(&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_maybe_req_arms_in_type_order_0);
  MR_register_type_ctor_info(&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_maybe_warn_incomplete_switches_0);
  MR_register_type_ctor_info(&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_missing_cons_id_info_0);
  MR_register_type_ctor_info(&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_reported_switch_0);
  MR_register_type_ctor_info(&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_reqscope_params_0);
  MR_register_type_ctor_info(&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_context_0);
  MR_register_type_ctor_info(&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_switch_match_0);
  MR_register_type_ctor_info(&check_hlds__det_check_switch__check_hlds__det_check_switch__type_ctor_info_why_report_incomplete_switch_0);
}

void mercury__check_hlds__det_check_switch__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__det_check_switch__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.det_check_switch.
