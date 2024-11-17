/*
** Automatically generated from `det_report.m'
** by the Mercury compiler,
** version rotd-2024-11-17
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


// :- module check_hlds.det_report.
// :- implementation.

/*
INIT mercury__check_hlds__det_report__init
ENDINIT
*/

#include "check_hlds.det_report.mih"


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
#include "solutions.mih"
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
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_sort.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_type_util.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_misc.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "parse_tree.module_qual.mq_info.mih"



struct check_hlds__det_report__get_valid_determinisms_2_p_0_env_0_s {
  MR_Word check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__TabledMethod_3;
  MR_Word * check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__Detism_4;
  MR_Cont check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__cont;
  void * check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__succeeded;
};

struct check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0_s {
  MR_Box * check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__wrapper_arg_1;
  MR_Cont check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__cont;
  void * check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__cont_env_ptr;
  MR_Word check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__conv0_Detism_4;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0;

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0[2];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0[2];

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0[1];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_1[3];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0[2];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0[2];

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1];

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0;

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5;

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0[4];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0[7];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0[7];

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_maybe_inform_incomplete_switches_0_0;

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_maybe_inform_incomplete_switches_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_ordinal_ordered_maybe_inform_incomplete_switches_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_name_ordered_maybe_inform_incomplete_switches_0[2];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_maybe_inform_incomplete_switches_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_missing_cons_id_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_missing_cons_id_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_missing_cons_id_info_0_0[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_missing_cons_id_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_missing_cons_id_info_0[1];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_missing_cons_id_info_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_reported_switch_0_0[3];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_reported_switch_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_reported_switch_0_0[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_reported_switch_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_reported_switch_0[1];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_reported_switch_0[1];

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0;

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0[2];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0[2];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1];

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_why_report_incomplete_switch_0_0;

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_why_report_incomplete_switch_0_1;

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_ordinal_ordered_why_report_incomplete_switch_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_name_ordered_why_report_incomplete_switch_0[2];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_why_report_incomplete_switch_0[2];

static MR_Word MR_CALL 
check_hlds__det_report__IntroducedFrom__func__find_missing_cons_ids__2312__1_1_f_0(
  MR_Word LambdaHeadVar__1_75);

static MR_Word MR_CALL 
check_hlds__det_report__IntroducedFrom__func__det_diagnose_goal_expr__1171__1_2_f_0(
  MR_Word LaterDisjPieces_65,
  MR_Word LambdaHeadVar__1_203);

static void MR_CALL 
check_hlds__det_report____Compare____why_report_incomplete_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____why_report_incomplete_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report____Compare____reported_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____reported_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report____Compare____missing_cons_id_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____missing_cons_id_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report____Compare____maybe_inform_incomplete_switches_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____maybe_inform_incomplete_switches_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Globals_0_7,
  MR_Word * STATE_VARIABLE_Globals_8);

static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word FailingContext_7);

static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
  MR_Word VarTable_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
  MR_Word ConsId_3,
  MR_Word * Match_4);

static void MR_CALL 
check_hlds__det_report__get_valid_determinisms_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__get_valid_determinisms_2_p_0(
  MR_Word TabledMethod_3,
  MR_Word * Detism_4,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_7_p_0(
  MR_Word Goal_8,
  MR_Word InstMap0_9,
  MR_Word IIS_10,
  MR_Word MaybeReportedSwitch_11,
  MR_Word SwitchContexts_12,
  MR_Word STATE_VARIABLE_DetInfo_0_84,
  MR_Word * STATE_VARIABLE_DetInfo_85);

static void MR_CALL 
check_hlds__det_report__reqscope_check_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_DetInfo_0_7,
  MR_Word * STATE_VARIABLE_DetInfo_8);

static void MR_CALL 
check_hlds__det_report__reqscope_check_disj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6);

static void MR_CALL 
check_hlds__det_report__reqscope_check_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7);

static void MR_CALL 
check_hlds__det_report__lambda_update_instmap_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMap_0_3,
  MR_Word * STATE_VARIABLE_InstMap_4);

static void MR_CALL 
check_hlds__det_report__reqscope_check_scope_8_p_0(
  MR_Word SwitchContexts_9,
  MR_Word Reason_10,
  MR_Word SubGoal_11,
  MR_Word ScopeGoalInfo_12,
  MR_Word InstMap0_13,
  MR_Word * MaybeReportedSwitch_14,
  MR_Word STATE_VARIABLE_DetInfo_0_51,
  MR_Word * STATE_VARIABLE_DetInfo_52);

static void MR_CALL 
check_hlds__det_report__generate_error_not_switch_on_required_var_6_p_0(
  MR_Word SwitchContexts_7,
  MR_Word RequiredVar_8,
  MR_String ScopeWord_9,
  MR_Word ScopeGoalInfo_10,
  MR_Word STATE_VARIABLE_DetInfo_0_19,
  MR_Word * STATE_VARIABLE_DetInfo_20);

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_for_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7);

static MR_Box MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0(
  MR_Word RequiredDetism_7,
  MR_Word Goal_8,
  MR_Word CheckKind_9,
  MR_Word InstMap0_10,
  MR_Word STATE_VARIABLE_DetInfo_0_38,
  MR_Word * STATE_VARIABLE_DetInfo_39);

static void MR_CALL 
check_hlds__det_report__generate_incomplete_switch_spec_9_p_0(
  MR_Word Why_10,
  MR_Word MaybeLimit_11,
  MR_Word InstMap0_12,
  MR_Word SwitchContexts_13,
  MR_Word SwitchVar_14,
  MR_Word Cases_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_DetInfo_0_38,
  MR_Word * STATE_VARIABLE_DetInfo_39);

static MR_bool MR_CALL 
check_hlds__det_report__is_scope_subgoal_a_sortof_switch_5_p_0(
  MR_Word Goal_6,
  MR_Word * SwitchContext_7,
  MR_Word * SwitchVar_8,
  MR_Word * CanFail_9,
  MR_Word * Cases_10);

static MR_bool MR_CALL 
check_hlds__det_report__cse_lifted_then_sortof_switch_5_p_0(
  MR_Word Conjuncts_6,
  MR_Word * SwitchContext_7,
  MR_Word * SwitchVar_8,
  MR_Word * CanFail_9,
  MR_Word * Cases_10);

static MR_bool MR_CALL 
check_hlds__det_report__is_proc_pragma_exported_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word * Context_9);

static void MR_CALL 
check_hlds__det_report__check_io_state_proc_detism_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
check_hlds__det_report__check_function_semantics_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static MR_Word MR_CALL 
check_hlds__det_report__report_can_fail_func_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word PredProcId_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word ResultType0_12,
  MR_Word InferredDetism_13);

static void MR_CALL 
check_hlds__det_report__check_determinism_if_pred_is_main_4_p_0(
  MR_Word PredInfo_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_for_eval_method_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_report__check_determinism_for_eval_method_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__det_report__check_determinism_for_eval_method_3_p_0(
  MR_Word ProcInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
check_hlds__det_report__check_for_too_tight_or_loose_declared_determinism_7_p_0(
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40);

static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
  MR_Word tscc_proc_1_input_1_Goal_8,
  MR_Word tscc_proc_1_input_2_InstMap0_9,
  MR_Word tscc_proc_1_input_3_Desired_10,
  MR_Word tscc_proc_1_input_4_SwitchContexts_11,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19,
  MR_Word * tscc_output_ptr_2_MsgGroups_13);

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_10,
  MR_Word tscc_proc_2_input_2_GoalInfo_11,
  MR_Word tscc_proc_2_input_3_InstMap0_12,
  MR_Word tscc_proc_2_input_4_Desired_13,
  MR_Word tscc_proc_2_input_5_Actual_14,
  MR_Word tscc_proc_2_input_6_SwitchContexts_15,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19,
  MR_Word * tscc_output_ptr_2_MsgGroups_13);

static void MR_CALL 
check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap0_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6,
  MR_Word * HeadVar__7_7);

static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_arms_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word InstMap0_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_DetInfo_0_7,
  MR_Word * STATE_VARIABLE_DetInfo_8,
  MR_Word * HeadVar__9_9);

static void MR_CALL 
check_hlds__det_report__det_diagnose_disj_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7,
  MR_Word STATE_VARIABLE_DisjunctsWithSoln_0_8,
  MR_Word * STATE_VARIABLE_DisjunctsWithSoln_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
  MR_Word CallUnifyContext_8,
  MR_Word DetInfo_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word * UnifyPieces_12,
  MR_Word * SurroundingUnifyContextPieces_13,
  MR_Word * GoalPieces_14);

static void MR_CALL 
check_hlds__det_report__det_report_unify_context_8_p_0(
  MR_Word STATE_VARIABLE_First_0_27,
  MR_Word Last_10,
  MR_Word UnifyContext_11,
  MR_Word DetInfo_12,
  MR_Word LHSVar_13,
  MR_Word RHS_14,
  MR_Word * SurroundingContextPieces_15,
  MR_Word * MainPieces_16);

static MR_Box MR_CALL 
check_hlds__det_report__find_missing_cons_ids_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_9_p_0(
  MR_Word DetInfo_10,
  MR_Word MaybeLimit_11,
  MR_Word InstMap0_12,
  MR_Word SwitchContexts_13,
  MR_Word Var_14,
  MR_Word Cases_15,
  MR_Word * NestingPieces_16,
  MR_String * VarStr_17,
  MR_Word * MaybeMissingInfo_18);

static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0(
  MR_Word DetInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CoveredConsIds_0_2,
  MR_Word * STATE_VARIABLE_CoveredConsIds_3);

static void MR_CALL 
check_hlds__det_report__append_prefix_and_maybe_verbose_6_p_0(
  MR_Word MaybeColor_7,
  MR_Word NeutralPrefixPieces_8,
  MR_Word ColorPrefixPieces0_9,
  MR_Word MainPieces_10,
  MR_Word VerbosePieces_11,
  MR_Word * Component_12);

static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_SwitchVarSynonyms_0_2,
  MR_Word MainConsId_3,
  MR_Word OtherConsIds_4,
  MR_Word * MainMatch_5,
  MR_Word * OtherMatches_6);

static MR_bool MR_CALL 
check_hlds__det_report__find_switch_var_submatches_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word SwitchVarSynonyms_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
check_hlds__det_report__det_diagnose_primitive_goal_3_p_0(
  MR_Word Desired_4,
  MR_Word Actual_5,
  MR_Word * Pieces_6);

static void MR_CALL 
check_hlds__det_report__report_determinism_problem_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredProcId_10,
  MR_String ErrorOrWarn_11,
  MR_String ProblemStr_12,
  MR_Word ReasonPieces_13,
  MR_Word DeclaredDetism_14,
  MR_Word InferredDetism_15,
  MR_Word * Msg_16);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____maybe_inform_incomplete_switches_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____maybe_inform_incomplete_switches_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____missing_cons_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____missing_cons_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____reported_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____reported_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____why_report_incomplete_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__det_report____Compare____why_report_incomplete_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__det_report_scalar_common_1[7][3];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[288][2];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[7][1];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_5[6][5];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_6[3][6];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_8[1][7];


struct check_hlds__det_report__vector_common_type_4_0_s {
  const MR_Word check_hlds__det_report__vector_common_type_4_0__vct_4_f_0;
};

static /* final */ const struct check_hlds__det_report__vector_common_type_4_0_s check_hlds__det_report_vector_common_4[4];

struct check_hlds__det_report__vector_common_type_7_0_s {
  const MR_String check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__det_report__vector_common_type_7_0_s check_hlds__det_report_vector_common_7[8];

struct check_hlds__det_report__vector_common_type_9_0_s {
  const MR_Word check_hlds__det_report__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct check_hlds__det_report__vector_common_type_9_0_s check_hlds__det_report_vector_common_9[8];



static /* final */ const MR_Box check_hlds__det_report_scalar_common_1[7][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_5[0])),
    ((MR_Box) (check_hlds__det_report__find_switch_var_matches_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_5[1])),
    ((MR_Box) (check_hlds__det_report__find_missing_cons_ids_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_5[2])),
    ((MR_Box) (check_hlds__det_report__find_missing_cons_ids_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_5[4])),
    ((MR_Box) (check_hlds__det_report__check_determinism_for_eval_method_3_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_5[5])),
    ((MR_Box) (check_hlds__det_report__reqscope_check_goal_detism_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_6[2])),
    ((MR_Box) (check_hlds__det_report__restore_det_warnings_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[288][2] = {
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
    ((MR_Box) (&check_hlds__det_report_scalar_common_1[0]))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[0]))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[6]))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[10]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[12]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[14]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "determinism error in lambda expression."))
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Declared"))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[20]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "inferred"))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[22]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "higher-order call"))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[24]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "call to"))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is the following."))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[27]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The reason for the difference"))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[29]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[28])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are the following."))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[31]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The reasons for the difference"))
  },
  /* row  34 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[33]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[32])))
  },
  /* row  35 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "by performing this transformation manually."))
  },
  /* row  36 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[35]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row  37 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the programmer can fix the determinism error"))
  },
  /* row  38 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[37]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[36])))
  },
  /* row  39 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In cases where this uniqueness is not needed,"))
  },
  /* row  40 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[39]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[38])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[40])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "this transformation could destroy the uniqueness."))
  },
  /* row  43 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[41])))
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but due to limitations of the current modechecker,"))
  },
  /* row  45 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[43])))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with just one unification before the disjunction,"))
  },
  /* row  47 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[45])))
  },
  /* row  48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(e.g. the tail of a list) with the same function symbol,"))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[47])))
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "that each unify the variable representing the subterm"))
  },
  /* row  51 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[50]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[49])))
  },
  /* row  52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "one in each arm of the disjunction,"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[52]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[51])))
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "requires replacing several unifications,"))
  },
  /* row  55 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[54]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[53])))
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This is because converting such a disjunction to a switch"))
  },
  /* row  57 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[56]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[55])))
  },
  /* row  58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is at least partially unique."))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[58]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[57])))
  },
  /* row  60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "when the instantiation state of that variable"))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[60]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[59])))
  },
  /* row  62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is a switch on a *subterm* of a variable"))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[62]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[61])))
  },
  /* row  64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a disjunction (usually created by the compiler for a switch arm)"))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[64]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[63])))
  },
  /* row  66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is the inability of determinism analysis to recognize that"))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[66]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[65])))
  },
  /* row  68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the cause of the declared determinism not being satisfied"))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[68]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[67])))
  },
  /* row  70 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "It is possible that"))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[70]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[69])))
  },
  /* row  72 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[72]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  74 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declarations"))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[74]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  76 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are"))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[76]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  78 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not allowed"))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[78]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for procedures with determinism"))
  },
  /* row  81 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[80]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This pragma is valid only for the following"))
  },
  /* row  83 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[2])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row  84 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[83]))
  },
  /* row  85 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[84]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  86 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row  87 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  88 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "exported,"))
  },
  /* row  89 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  90 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but"))
  },
  /* row  91 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it is not."))
  },
  /* row  93 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  94 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must have a"))
  },
  /* row  95 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  96 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declared determinism,"))
  },
  /* row  97 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[96]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it does not."))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[98]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "must be either"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "det"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[104]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 106 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ";"))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[106]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 108 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[108]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[107])))
  },
  /* row 110 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "it may not be"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[110]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 112 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: invalid determinism for"))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[112]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the primary mode of a function cannot be"))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[114]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[115])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not a function."))
  },
  /* row 118 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[117]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Most likely, this procedure should be a predicate,"))
  },
  /* row 120 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[119]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "arguments would break referential transparency.)"))
  },
  /* row 122 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[121]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[120])))
  },
  /* row 123 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(Allowing functions to have more than one result for the same"))
  },
  /* row 124 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[123]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[122])))
  },
  /* row 125 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "should be determined only by the values of its arguments."))
  },
  /* row 126 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[125]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[124])))
  },
  /* row 127 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of its arguments; that is, the value of the function\'s result"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[127]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[126])))
  },
  /* row 129 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "a function is supposed to be a true mathematical function"))
  },
  /* row 130 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[129]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[128])))
  },
  /* row 131 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "In Mercury,"))
  },
  /* row 132 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[131]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[130])))
  },
  /* row 133 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Warning: the primary mode of the"))
  },
  /* row 134 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[133]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 135 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 136 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[135]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 137 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Consider turning this"))
  },
  /* row 138 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "function"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "either into a"))
  },
  /* row 140 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "predicate,"))
  },
  /* row 141 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "or into a"))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "by changing the return type from"))
  },
  /* row 143 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[142]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 144 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[138]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[143])))
  },
  /* row 145 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "to"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[145]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 147 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 148 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the inferred determinism"))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[148]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 150 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[102]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[11])))
  },
  /* row 151 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[108]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 153 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[152]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "erroneous"))
  },
  /* row 155 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[154]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[11])))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 157 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[156]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 158 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[157])))
  },
  /* row 159 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The valid determinisms for such predicates are"))
  },
  /* row 160 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[159]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 161 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for a predicate that has I/O state arguments."))
  },
  /* row 162 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[161]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[160])))
  },
  /* row 163 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is not a valid determinism"))
  },
  /* row 164 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[163]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[162])))
  },
  /* row 165 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "nor destroyed."))
  },
  /* row 166 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[165]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 167 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "since the I/O state can be neither duplicated"))
  },
  /* row 168 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[167]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[166])))
  },
  /* row 169 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for a procedure whose determinism is"))
  },
  /* row 170 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[169]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 171 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "declaration"))
  },
  /* row 172 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[171]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[170])))
  },
  /* row 173 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 33U)),
    ((MR_Box) ((MR_String) "foreign_export"))
  },
  /* row 174 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[173]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[172])))
  },
  /* row 175 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[72]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[174])))
  },
  /* row 176 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "the"))
  },
  /* row 177 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 178 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[177]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 179 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Determinism declaration not satisfied."))
  },
  /* row 180 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Desired determinism is"))
  },
  /* row 181 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with solutions."))
  },
  /* row 182 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[181]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 183 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Disjunction has more than one disjunct"))
  },
  /* row 184 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[183]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[182])))
  },
  /* row 185 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[184])))
  },
  /* row 186 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This later disjunct"))
  },
  /* row 187 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[186]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 188 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "may have a solution."))
  },
  /* row 189 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[188]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 190 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Negated goal can succeed."))
  },
  /* row 191 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[190]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 192 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row 193 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[192]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 194 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 195 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The switch on"))
  },
  /* row 196 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[135]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 197 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[195]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 198 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[197])))
  },
  /* row 199 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "does not cover"))
  },
  /* row 200 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[199]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 201 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "can fail"))
  },
  /* row 202 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[201]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 203 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "can succeed"))
  },
  /* row 204 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[203]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 205 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "can succeed more than once"))
  },
  /* row 206 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[205]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 207 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "desired determinism is"))
  },
  /* row 208 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[207]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 209 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[208])))
  },
  /* row 210 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "has unknown determinism problem;"))
  },
  /* row 211 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[210]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[209])))
  },
  /* row 212 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "while actual determinism is"))
  },
  /* row 213 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[212]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 214 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row 215 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 216 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[215]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 217 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[216])))
  },
  /* row 218 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "switch on"))
  },
  /* row 219 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is required to be complete, but it is not."))
  },
  /* row 220 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[219]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 221 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but it does not cover"))
  },
  /* row 222 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[221]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 223 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row 224 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[223]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[222])))
  },
  /* row 225 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "in this scope is"))
  },
  /* row 226 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[225]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 227 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the required determinism of the goal"))
  },
  /* row 228 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[227]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[226])))
  },
  /* row 229 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but its actual determinism is"))
  },
  /* row 230 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[229]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 231 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the arms of the"))
  },
  /* row 232 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[231]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 233 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "acceptable in a"))
  },
  /* row 234 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[233]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 235 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "are required have a determinism that is"))
  },
  /* row 236 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[235]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[234])))
  },
  /* row 237 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the arm for"))
  },
  /* row 238 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[237]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 239 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "but the actual determinism"))
  },
  /* row 240 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[239]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[238])))
  },
  /* row 241 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "context,"))
  },
  /* row 242 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[241]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[240])))
  },
  /* row 243 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 244 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[243]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 245 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "scope"))
  },
  /* row 246 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[245]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 247 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Error: the goal inside the"))
  },
  /* row 248 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[247]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 249 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[248])))
  },
  /* row 250 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "not a switch on"))
  },
  /* row 251 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 252 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[251]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 253 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 36U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 254 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[253]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 255 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__det_report_scalar_common_3[6]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 256 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[255])))
  },
  /* row 257 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "more."))
  },
  /* row 258 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[257]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 259 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Inside the case"))
  },
  /* row 260 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of the switch on"))
  },
  /* row 261 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 262 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "type-specific unify predicate\?)"))
  },
  /* row 263 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[262]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 264 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "(or explicit call to a"))
  },
  /* row 265 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[264]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[263])))
  },
  /* row 266 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Some weird unification"))
  },
  /* row 267 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[266]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[265])))
  },
  /* row 268 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "This call to"))
  },
  /* row 269 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[268]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 270 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 271 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[270]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 272 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 273 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[272]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 274 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Call to"))
  },
  /* row 275 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[274]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 276 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Unification of"))
  },
  /* row 277 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[276]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 278 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Fail goal"))
  },
  /* row 279 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[278]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 280 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 281 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[280]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 282 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "incomplete."))
  },
  /* row 283 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[282]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 284 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "Negated goal"))
  },
  /* row 285 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[284]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 286 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[132])))
  },
  /* row 287 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__det_report_scalar_common_2[286]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[7][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "main")) },
  /* row   3 */
  { ((MR_Box) ((MR_String) "maybe")) },
  /* row   4 */
  { ((MR_Box) ((MR_Integer) 10)) },
  /* row   5 */
  { ((MR_Box) ((MR_Integer) 2)) },
  /* row   6 */
  { ((MR_Box) ((MR_String) "...")) },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_5[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
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
    ((MR_Box) (&check_hlds__det_report__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_tabled_eval_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_6[3][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_report__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0))
  },
};


static /* final */ const struct check_hlds__det_report__vector_common_type_4_0_s check_hlds__det_report_vector_common_4[4] = {
  /* row   0 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[204])) },
  /* row   1 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[206])) },
  /* row   2 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[204])) },
  /* row   3 */   { (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[204])) },
};

static /* final */ const struct check_hlds__det_report__vector_common_type_7_0_s check_hlds__det_report_vector_common_7[8] = {
  /* row   0 */   { (MR_String) "require_switch_arms_det" },
  /* row   1 */   { (MR_String) "require_switch_arms_semidet" },
  /* row   2 */   { (MR_String) "require_switch_arms_multi" },
  /* row   3 */   { (MR_String) "require_switch_arms_nondet" },
  /* row   4 */   { (MR_String) "require_switch_arms_cc_multi" },
  /* row   5 */   { (MR_String) "require_switch_arms_cc_nondet" },
  /* row   6 */   { (MR_String) "require_switch_arms_erroneous" },
  /* row   7 */   { (MR_String) "require_switch_arms_failure" },
};

static /* final */ const struct check_hlds__det_report__vector_common_type_9_0_s check_hlds__det_report_vector_common_9[8] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 2 },
  /* row   3 */   { (MR_Integer) 3 },
  /* row   4 */   { (MR_Integer) 4 },
  /* row   5 */   { (MR_Integer) 5 },
  /* row   6 */   { (MR_Integer) 6 },
  /* row   7 */   { (MR_Integer) 7 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0) };

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0 = {
  (MR_String) "ccuc_unify",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1 = {
  (MR_String) "ccuc_switch",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1 };

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0 };

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_cc_unify_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____cc_unify_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____cc_unify_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "cc_unify_context",
  { check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0 },
  { check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0,

};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0) };

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0 = {
  (MR_String) "require_detism_scope",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_1[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1 = {
  (MR_String) "require_detism_switch_arm",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0 };

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1 };

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_detism_check_kind_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____detism_check_kind_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____detism_check_kind_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "detism_check_kind",
  { check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0 },
  { check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0,

};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0 = {
  (MR_String) "failing_context",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0 };

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0 };

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____failing_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____failing_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "failing_context",
  { check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0 },
  { check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0,

};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1] = { (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) };

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0 = {
  (MR_String) "incomplete_switch",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1 = {
  (MR_String) "fail_goal",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2 = {
  (MR_String) "test_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3 = {
  (MR_String) "deconstruct_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4 = {
  (MR_String) "call_goal",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0) };

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5 = {
  (MR_String) "generic_call_goal",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6 = {
  (MR_String) "negated_goal",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0 };

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2 };

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0[4] = {
  {
    UINT32_C(2),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(3),
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0[7] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0[7] = {
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____failing_goal_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____failing_goal_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "failing_goal",
  { check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0 },
  { check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0 },
  (MR_Integer) 7,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0,

};

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_maybe_inform_incomplete_switches_0_0 = {
  (MR_String) "do_not_inform_incomplete_switches",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_maybe_inform_incomplete_switches_0_1 = {
  (MR_String) "inform_incomplete_switches",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_ordinal_ordered_maybe_inform_incomplete_switches_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_maybe_inform_incomplete_switches_0_0,
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_maybe_inform_incomplete_switches_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_name_ordered_maybe_inform_incomplete_switches_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_maybe_inform_incomplete_switches_0_0,
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_maybe_inform_incomplete_switches_0_1
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_maybe_inform_incomplete_switches_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_maybe_inform_incomplete_switches_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_report____Unify____maybe_inform_incomplete_switches_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____maybe_inform_incomplete_switches_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "maybe_inform_incomplete_switches",
  { check_hlds__det_report__check_hlds__det_report__enum_name_ordered_maybe_inform_incomplete_switches_0 },
  { check_hlds__det_report__check_hlds__det_report__enum_ordinal_ordered_maybe_inform_incomplete_switches_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_maybe_inform_incomplete_switches_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_missing_cons_id_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1parse_tree__error_spec__type_ctor_info_format_piece_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_missing_cons_id_info_0_0 = {
  (MR_String) "missing_cons_id_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_report__check_hlds__det_report__field_types_missing_cons_id_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_missing_cons_id_info_0_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_missing_cons_id_info_0_0 };

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_missing_cons_id_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_missing_cons_id_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_missing_cons_id_info_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_missing_cons_id_info_0_0 };

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_missing_cons_id_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_missing_cons_id_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____missing_cons_id_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____missing_cons_id_info_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "missing_cons_id_info",
  { check_hlds__det_report__check_hlds__det_report__du_name_ordered_missing_cons_id_info_0 },
  { check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_missing_cons_id_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_missing_cons_id_info_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_options_to_restore_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__det_report____Unify____options_to_restore_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____options_to_restore_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "options_to_restore",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_reported_switch_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_reported_switch_0_0 = {
  (MR_String) "reported_switch",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_report__check_hlds__det_report__field_types_reported_switch_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_reported_switch_0_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_reported_switch_0_0 };

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_reported_switch_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_reported_switch_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_reported_switch_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_reported_switch_0_0 };

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_reported_switch_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_reported_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____reported_switch_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____reported_switch_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "reported_switch",
  { check_hlds__det_report__check_hlds__det_report__du_name_ordered_reported_switch_0 },
  { check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_reported_switch_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_reported_switch_0,

};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0 = {
  (MR_String) "seen_call",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1 = {
  (MR_String) "higher_order_call",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1 };

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0 };

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____seen_call_id_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____seen_call_id_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "seen_call_id",
  { check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0 },
  { check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0 = {
  (MR_String) "switch_context",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0 };

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0 };

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____switch_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____switch_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "switch_context",
  { check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0 },
  { check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0 = {
  (MR_String) "switch_match",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0 };

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1] = { &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0 };

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____switch_match_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____switch_match_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "switch_match",
  { check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0 },
  { check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0,

};

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_why_report_incomplete_switch_0_0 = {
  (MR_String) "switch_required_to_be_complete",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_why_report_incomplete_switch_0_1 = {
  (MR_String) "inform_incomplete_switch_option",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_ordinal_ordered_why_report_incomplete_switch_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_why_report_incomplete_switch_0_0,
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_why_report_incomplete_switch_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_name_ordered_why_report_incomplete_switch_0[2] = {
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_why_report_incomplete_switch_0_1,
  &check_hlds__det_report__check_hlds__det_report__enum_functor_desc_why_report_incomplete_switch_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_why_report_incomplete_switch_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_why_report_incomplete_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_report____Unify____why_report_incomplete_switch_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____why_report_incomplete_switch_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "why_report_incomplete_switch",
  { check_hlds__det_report__check_hlds__det_report__enum_name_ordered_why_report_incomplete_switch_0 },
  { check_hlds__det_report__check_hlds__det_report__enum_ordinal_ordered_why_report_incomplete_switch_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__det_report__check_hlds__det_report__functor_number_map_why_report_incomplete_switch_0,

};

static MR_Word MR_CALL 
check_hlds__det_report__IntroducedFrom__func__find_missing_cons_ids__2312__1_1_f_0(
  MR_Word LambdaHeadVar__1_75)
{
  MR_Word LambdaHeadVar__2_76;
  MR_Word Var_77;

  {
    Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 26U));
    MR_hl_field(3, Var_77, 1) = ((MR_Box) (LambdaHeadVar__1_75));
  }
  {
    LambdaHeadVar__2_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, LambdaHeadVar__2_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(1, LambdaHeadVar__2_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return LambdaHeadVar__2_76;
}

static MR_Word MR_CALL 
check_hlds__det_report__IntroducedFrom__func__det_diagnose_goal_expr__1171__1_2_f_0(
  MR_Word LaterDisjPieces_65,
  MR_Word LambdaHeadVar__1_203)
{
  MR_Word LambdaHeadVar__2_204;

  {
    LambdaHeadVar__2_204 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, LambdaHeadVar__2_204, 0) = ((MR_Box) (LambdaHeadVar__1_203));
    MR_hl_field(0, LambdaHeadVar__2_204, 1) = ((MR_Box) (LaterDisjPieces_65));
  }
  return LambdaHeadVar__2_204;
}

static void MR_CALL 
check_hlds__det_report____Compare____why_report_incomplete_switch_0_0(
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
check_hlds__det_report____Unify____why_report_incomplete_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__det_report_scalar_common_2[7]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer CastX_22 = (MR_Integer) (ArgX2_7);
      MR_Integer CastY_23 = (MR_Integer) (ArgY2_8);

      succeeded = (CastX_22 == CastY_23);
      if (succeeded)
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 0))));
        MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 0))));
        MR_Word ArgX2_20 = ((MR_Word) ((MR_hl_field(0, ArgX2_7, (MR_Integer) 1))));
        MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(0, ArgY2_8, (MR_Integer) 1))));
        MR_Word SubResult1_19;

        parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_19, ArgX1_17, ArgY1_18);
        succeeded = (SubResult1_19 != (MR_Integer) 0);
        if (succeeded)
        {
          SubResult2_9 = SubResult1_19;
          succeeded = (SubResult2_9 != (MR_Integer) 0);
        }
        else
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[7]), &SubResult2_9, ((MR_Box) (ArgX2_20)), ((MR_Box) (ArgY2_21)));
          succeeded = (SubResult2_9 != (MR_Integer) 0);
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer CastX_17;
    MR_Integer CastY_18;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      CastX_17 = (MR_Integer) (ArgX2_5);
      CastY_18 = (MR_Integer) (ArgY2_6);
      succeeded = (CastX_17 == CastY_18);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Word TypeInfo_10_20;
        MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(0, ArgX2_5, (MR_Integer) 0))));
        MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(0, ArgY2_6, (MR_Integer) 0))));
        MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(0, ArgX2_5, (MR_Integer) 1))));
        MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(0, ArgY2_6, (MR_Integer) 1))));

        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_13, ArgY1_14);
        if (succeeded)
        {
          TypeInfo_10_20 = (MR_Word) (&check_hlds__det_report_scalar_common_2[7]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_20, ((MR_Box) (ArgX2_15)), ((MR_Box) (ArgY2_16)));
        }
      }
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&check_hlds__det_report_scalar_common_2[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____reported_switch_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____reported_switch_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&check_hlds__det_report_scalar_common_2[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____missing_cons_id_info_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
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
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____missing_cons_id_info_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        TypeInfo_13_13 = (MR_Word) (&check_hlds__det_report_scalar_common_2[1]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
        {
          TypeInfo_14_14 = (MR_Word) (&check_hlds__det_report_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____maybe_inform_incomplete_switches_0_0(
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
check_hlds__det_report____Unify____maybe_inform_incomplete_switches_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__term_context____Compare____term_context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      check_hlds__det_report____Compare____failing_goal_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
              MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
              MR_Word SubResult1_8;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
              succeeded = (SubResult1_8 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult1_8;
              else
                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
            }
            break;
          case (MR_Integer) 3:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Word ArgX2_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Word ArgY2_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word SubResult1_13;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), &SubResult1_13, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                      succeeded = (SubResult1_13 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_13;
                      else
                        parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, ArgX2_14, ArgY2_15);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ArgX1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                      MR_Integer ArgX2_19 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                      MR_Integer ArgY2_20 = ((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 2))));
                      MR_Word SubResult1_18;

                      hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_18, ArgX1_16, ArgY1_17);
                      succeeded = (SubResult1_18 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult1_18;
                      else
                      {
                        succeeded = (ArgX2_19 < ArgY2_20);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (ArgX2_19 > ArgY2_20);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 2;
                          else
                            *HeadVar__1_1 = (MR_Integer) 0;
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                      MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                      hlds__hlds_goal____Compare____generic_call_0_0(HeadVar__1_1, ArgX1_21, ArgY1_22);
                    }
                    break;
                }
                break;
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = mercury__term_context____Unify____term_context_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = check_hlds__det_report____Unify____failing_goal_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_20 == CastX_19);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeInfo_28_28;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            TypeInfo_28_28 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_29_29;
          MR_Word TypeInfo_30_30;
          MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_6;
          MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
          MR_Word ArgY2_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
            TypeInfo_29_29 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
            if (succeeded)
            {
              TypeInfo_30_30 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeInfo_25_25;
              MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_10;
              MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Word ArgY2_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                TypeInfo_25_25 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
                if (succeeded)
                  succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_11, ArgY2_12);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_14;
              MR_Integer ArgX2_15 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
              MR_Integer ArgY2_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                ArgY2_16 = ((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 2))));
                succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_13, ArgY1_14);
                if (succeeded)
                  succeeded = (ArgX2_15 == ArgY2_16);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Word ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = hlds__hlds_goal____Unify____generic_call_0_0(ArgX1_17, ArgY1_18);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      hlds__hlds_goal____Compare____hlds_goal_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_8;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), &SubResult1_8, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
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
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX3_12)), ((MR_Box) (ArgY3_13)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_16_16;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      TypeInfo_14_14 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_7, ArgY2_8);
        if (succeeded)
        {
          TypeInfo_16_16 = (MR_Word) (&check_hlds__det_report_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    hlds__hlds_goal____Compare____unify_context_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = hlds__hlds_goal____Unify____unify_context_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Globals_0_7,
  MR_Word * STATE_VARIABLE_Globals_8)
{
  MR_Word Option_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word Value_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  libs__globals__set_option_4_p_0(Option_4, Value_5, STATE_VARIABLE_Globals_0_7, STATE_VARIABLE_Globals_8);
}

static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word FailingContext_7)
{
  MR_Word Msg_8;
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(0, FailingContext_7, (MR_Integer) 0))));
  MR_Word FailingGoal_10 = ((MR_Word) ((MR_hl_field(0, FailingContext_7, (MR_Integer) 1))));
  MR_Word Pieces_13;

  switch (MR_tag((MR_Word) FailingGoal_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(FailingGoal_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_51;
            MR_Word Var_56;
            MR_Word Var_57;

            Var_51 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[279])));
            Var_57 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[196])));
            Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_57, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_56);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_149;
            MR_Word Var_154;
            MR_Word Var_155;

            Var_149 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[285])));
            Var_155 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[196])));
            Var_154 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_155, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_149, Var_154);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, FailingGoal_10, (MR_Integer) 0))));
        MR_Word VarPiece_12;
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_35;
        MR_Word Var_37;
        MR_Word Var_42;
        MR_Word Var_43;

        VarPiece_12 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(VarTable_6, Var_11);
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (VarPiece_12));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[218])));
          MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
        }
        Var_31 = parse_tree__error_spec__color_as_subject_1_f_0(Var_32);
        Var_43 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[283])));
        Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
        Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[244])), Var_42);
        Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_37);
        Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[281])), Var_30);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word VarA_14 = ((MR_Word) ((MR_hl_field(2, FailingGoal_10, (MR_Integer) 0))));
        MR_Word VarB_15 = ((MR_Word) ((MR_hl_field(2, FailingGoal_10, (MR_Integer) 1))));
        MR_Word VarPieceA_16;
        MR_Word VarPieceB_17;
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;
        MR_Word Var_73;
        MR_Word Var_78;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_82;
        MR_Word Var_83;

        VarPieceA_16 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(VarTable_6, VarA_14);
        VarPieceB_17 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(VarTable_6, VarB_15);
        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (VarPieceA_16));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_70 = parse_tree__error_spec__color_as_subject_1_f_0(Var_71);
        {
          Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_80, 0) = ((MR_Box) (VarPieceB_17));
          MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_79 = parse_tree__error_spec__color_as_subject_1_f_0(Var_80);
        Var_83 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[196])));
        Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_83, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
        Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_79, Var_82);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[153])), Var_78);
        Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_70, Var_73);
        Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[277])), Var_69);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, FailingGoal_10, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ConsId_18 = ((MR_Word) ((MR_hl_field(3, FailingGoal_10, (MR_Integer) 2))));
            MR_Word Var_95;
            MR_Word Var_96;
            MR_Word Var_97;
            MR_Word Var_99;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_106;
            MR_Word Var_107;
            MR_Word Var_109;
            MR_Word Var_110;
            MR_Word Var_163 = ((MR_Word) ((MR_hl_field(3, FailingGoal_10, (MR_Integer) 1))));
            MR_Word VarPiece_164;

            VarPiece_164 = parse_tree__error_spec__var_in_table_to_quote_piece_2_f_0(VarTable_6, Var_163);
            {
              Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_97, 0) = ((MR_Box) (VarPiece_164));
              MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_96 = parse_tree__error_spec__color_as_subject_1_f_0(Var_97);
            {
              Var_107 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_107, 0) = ((MR_Box) ((MR_Unsigned) 25U));
              MR_hl_field(3, Var_107, 1) = ((MR_Box) (ConsId_18));
            }
            {
              Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
              MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_105 = parse_tree__error_spec__color_as_subject_1_f_0(Var_106);
            Var_110 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[196])));
            Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_110, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
            Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, Var_109);
            Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[271])), Var_104);
            Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_96, Var_99);
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[277])), Var_95);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(3, FailingGoal_10, (MR_Integer) 1))));
            MR_Word PredInfo_21;
            MR_String Name_22;
            MR_Word Var_122;
            MR_Word Var_123;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_127;
            MR_Word Var_128;

            hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_19, &PredInfo_21);
            Name_22 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_21);
            {
              Var_125 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_125, 0) = ((MR_Box) (Name_22));
            }
            {
              Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
              MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_123 = parse_tree__error_spec__color_as_subject_1_f_0(Var_124);
            Var_128 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[196])));
            Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_128, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
            Var_122 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_123, Var_127);
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[275])), Var_122);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word GenericCall_23 = ((MR_Word) ((MR_hl_field(3, FailingGoal_10, (MR_Integer) 1))));
            MR_Word VarNameSrc_24;
            MR_Word GenericCallPieces_25;
            MR_Word Var_137;
            MR_Word Var_138;
            MR_Word Var_140;
            MR_Word Var_141;

            {
              VarNameSrc_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, VarNameSrc_24, 0) = ((MR_Box) (VarTable_6));
            }
            GenericCallPieces_25 = hlds__hlds_out__hlds_out_util__generic_call_to_pieces_3_f_0((MR_Integer) 1, VarNameSrc_24, GenericCall_23);
            {
              Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(1, Var_138, 1) = ((MR_Box) (GenericCallPieces_25));
            }
            Var_137 = parse_tree__error_spec__color_as_subject_1_f_0(Var_138);
            Var_141 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[196])));
            Var_140 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_141, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
            Pieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_137, Var_140);
          }
          break;
      }
      break;
  }
  {
    Msg_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Msg_8, 0) = ((MR_Box) (Context_9));
    MR_hl_field(0, Msg_8, 1) = ((MR_Box) (Pieces_13));
  }
  return Msg_8;
}

static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
  MR_Word VarTable_4,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;
  MR_Word ConsId_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word MaybeArgVars_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

  HeadVar__3_3 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(VarTable_4, (MR_Integer) 1, ConsId_5, MaybeArgVars_6);
  return HeadVar__3_3;
}

static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
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
check_hlds__det_report__get_valid_determinisms_2_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__det_report__get_valid_determinisms_2_p_0_env_0_s * env_ptr = (struct check_hlds__det_report__get_valid_determinisms_2_p_0_env_0_s *) (env_ptr_arg);

  switch (MR_tag((MR_Word) (env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__TabledMethod_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_Word MaxSoln_8;
        MR_Word Var_7;

        parse_tree__prog_data__determinism_components_3_p_0(*((env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__Detism_4), &Var_7, &MaxSoln_8);
        switch (MaxSoln_8) {
          default:
            (env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            (env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__succeeded = MR_TRUE;
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.det_report.valid_determinism_for_tabled_eval_method\'/2", (MR_String) "called after tabling phase");
          return;
        }
        (env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (*((env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__Detism_4)) {
        default:
          (env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          (env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          (env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__succeeded = MR_TRUE;
          break;
      }
      break;
  }
  if ((env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__succeeded)
    ((env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__cont)((env_ptr)->check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__det_report__get_valid_determinisms_2_p_0(
  MR_Word TabledMethod_3,
  MR_Word * Detism_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__det_report__get_valid_determinisms_2_p_0_env_0_s env;

  (env).check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__TabledMethod_3 = TabledMethod_3;
  (env).check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__Detism_4 = Detism_4;
  (env).check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__cont = cont;
  (env).check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      *((env).check_hlds__det_report__get_valid_determinisms_2_p_0_env_0__Detism_4) = ((&check_hlds__det_report_vector_common_9[0 + slot_0]))->check_hlds__det_report__vector_common_type_9_0__vct_9_f_0;
      check_hlds__det_report__get_valid_determinisms_2_p_0_1(&env);
      slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) 1);
    }
    while ((slot_0 < (MR_Integer) 8));
  }
}

static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Globals_8;

  check_hlds__det_report__restore_option_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Globals_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Globals_8));
}

void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0(
  MR_Word OptionsToRestore_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  MR_Box conv1_STATE_VARIABLE_Globals_7;

  mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__det_report_scalar_common_1[0]), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_globals_0), (MR_Word) (&check_hlds__det_report_scalar_common_1[6]), OptionsToRestore_4, ((MR_Box) (STATE_VARIABLE_Globals_0_6)), &conv1_STATE_VARIABLE_Globals_7);
  *STATE_VARIABLE_Globals_7 = ((MR_Word) (conv1_STATE_VARIABLE_Globals_7));
}

void MR_CALL 
check_hlds__det_report__disable_det_warnings_3_p_0(
  MR_Word * OptionsToRestore_4,
  MR_Word STATE_VARIABLE_Globals_0_8,
  MR_Word * STATE_VARIABLE_Globals_9)
{
  MR_Word WarnSimple_6;
  MR_Word WarnDeclsTooLax_7;
  MR_Word STATE_VARIABLE_Globals_14_14;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;

  libs__globals__lookup_option_3_p_0(STATE_VARIABLE_Globals_0_8, (MR_Integer) 27, &WarnSimple_6);
  libs__globals__lookup_option_3_p_0(STATE_VARIABLE_Globals_0_8, (MR_Integer) 11, &WarnDeclsTooLax_7);
  libs__globals__set_option_4_p_0((MR_Integer) 27, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[1])), STATE_VARIABLE_Globals_0_8, &STATE_VARIABLE_Globals_14_14);
  libs__globals__set_option_4_p_0((MR_Integer) 11, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[1])), STATE_VARIABLE_Globals_14_14, STATE_VARIABLE_Globals_9);
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) ((MR_Integer) 27));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (WarnSimple_6));
  }
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) ((MR_Integer) 11));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (WarnDeclsTooLax_7));
  }
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_23));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *OptionsToRestore_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_22));
  }
}

MR_Word MR_CALL 
check_hlds__det_report__det_report_seen_call_id_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word SeenCall_5)
{
  MR_Word Pieces_6;

  if ((SeenCall_5 == (MR_Word) ((MR_Unsigned) 0U)))
    Pieces_6 = (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[25]));
  else
  {
    MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(1, SeenCall_5, (MR_Integer) 0))));
    MR_Word PredPieces_9;

    PredPieces_9 = hlds__hlds_error_util__describe_one_pred_name_5_f_0(ModuleInfo_4, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_7);
    {
      Pieces_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_6, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[26])));
      MR_hl_field(1, Pieces_6, 1) = ((MR_Box) (PredPieces_9));
    }
  }
  return Pieces_6;
}

static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Msg_8;

  conv0_Msg_8 = check_hlds__det_report__failing_context_description_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Msg_8));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word FailingContexts_7)
{
  MR_Word HeadVar__4_4;
  MR_Word Var_8;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_8[0]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (check_hlds__det_report__failing_contexts_description_3_f_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (ModuleInfo_5));
    MR_hl_field(0, Var_8, 4) = ((MR_Box) (VarTable_6));
  }
  HeadVar__4_4 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), Var_8, FailingContexts_7);
  return HeadVar__4_4;
}

MR_String MR_CALL 
check_hlds__det_report__promise_solutions_kind_str_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "promise_equivalent_solution_sets";
      break;
    case (MR_Integer) 2:
      HeadVar__2_2 = (MR_String) "arbitrary";
      break;
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "promise_equivalent_solutions";
      break;
  }
  return HeadVar__2_2;
}

void MR_CALL 
check_hlds__det_report__det_check_lambda_7_p_0(
  MR_Word DeclaredDetism_8,
  MR_Word InferredDetism_9,
  MR_Word Goal_10,
  MR_Word GoalInfo_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_DetInfo_0_26,
  MR_Word * STATE_VARIABLE_DetInfo_27)
{
  MR_Word Cmp_14;

  parse_tree__prog_detism__compare_determinisms_3_p_0(DeclaredDetism_8, InferredDetism_9, &Cmp_14);
  switch (Cmp_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 0:
      {
        MR_Word PredProcId_15;
        MR_Word Context_16;
        MR_Word ModuleInfo_17;
        MR_Word ProcColonPieces_18;
        MR_String DeclaredStr_19;
        MR_String InferredStr_20;
        MR_Word DeclaredPieces_21;
        MR_Word InferredPieces_22;
        MR_Word Pieces_23;
        MR_Word GoalMsgs_24;
        MR_Word Spec_25;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_52;
        MR_Word Var_53;
        MR_Word Var_62;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_73;
        MR_Word STATE_VARIABLE_DetInfo_78_78;
        MR_Word Var_82;
        MR_Word Var_83;
        MR_Word MsgGroups_85;
        MR_Word SortedMsgGroups_86;
        MR_Word GoalExpr_87;
        MR_Word GoalInfo_88;
        MR_Word Actual_89;
        MR_Word CompareResult_90;

        check_hlds__det_util__det_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_DetInfo_0_26, &PredProcId_15);
        Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
        check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_26, &ModuleInfo_17);
        ProcColonPieces_18 = hlds__hlds_error_util__describe_one_proc_name_mode_6_f_0(ModuleInfo_17, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[0])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[9])), PredProcId_15);
        DeclaredStr_19 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(DeclaredDetism_8);
        InferredStr_20 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(InferredDetism_9);
        {
          Var_37 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_37, 1) = ((MR_Box) (DeclaredStr_19));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
          MR_hl_field(1, Var_36, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[11])));
        }
        DeclaredPieces_21 = parse_tree__error_spec__color_as_correct_1_f_0(Var_36);
        {
          Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_43, 1) = ((MR_Box) (InferredStr_20));
        }
        {
          Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(1, Var_42, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
        }
        InferredPieces_22 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_42);
        Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InferredPieces_22, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
        Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[23])), Var_73);
        Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DeclaredPieces_21, Var_68);
        Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[21])), Var_67);
        Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[19])), Var_62);
        Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcColonPieces_18, Var_53);
        Pieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[15])), Var_52);
        GoalExpr_87 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 0))));
        GoalInfo_88 = ((MR_Word) ((MR_hl_field(0, Goal_10, (MR_Integer) 1))));
        Actual_89 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_88);
        parse_tree__prog_detism__compare_determinisms_3_p_0(DeclaredDetism_8, Actual_89, &CompareResult_90);
        switch (CompareResult_90) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 3:
          case (MR_Integer) 0:
            check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_87, GoalInfo_88, InstMap0_12, DeclaredDetism_8, Actual_89, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_DetInfo_0_26, &STATE_VARIABLE_DetInfo_78_78, &MsgGroups_85);
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              MsgGroups_85 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_DetInfo_78_78 = STATE_VARIABLE_DetInfo_0_26;
            }
            break;
        }
        parse_tree__error_sort__sort_error_msg_groups_2_p_0(MsgGroups_85, &SortedMsgGroups_86);
        GoalMsgs_24 = parse_tree__error_sort__flatten_error_msg_groups_1_f_0(SortedMsgGroups_86);
        {
          Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_83, 0) = ((MR_Box) (Context_16));
          MR_hl_field(0, Var_83, 1) = ((MR_Box) (Pieces_23));
        }
        {
          Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
          MR_hl_field(1, Var_82, 1) = ((MR_Box) (GoalMsgs_24));
        }
        {
          Spec_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Spec_25, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.det_check_lambda\'/7"));
          MR_hl_field(2, Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, Spec_25, 2) = ((MR_Box) ((MR_Unsigned) 68U));
          MR_hl_field(2, Spec_25, 3) = ((MR_Box) (Var_82));
        }
        check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_25, STATE_VARIABLE_DetInfo_78_78, STATE_VARIABLE_DetInfo_27);
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_DetInfo_27 = STATE_VARIABLE_DetInfo_0_26;
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_DetInfo_27 = STATE_VARIABLE_DetInfo_0_26;
      break;
  }
}

void MR_CALL 
check_hlds__det_report__check_determinism_of_imported_procs_5_p_0(
  MR_Word ProgressStream_1,
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_95_91_49_93_95_48_5_p_0(ModuleInfo_2, HeadVar__3_3, STATE_VARIABLE_Specs_0_4, STATE_VARIABLE_Specs_5);
}

void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_105_109_112_111_114_116_101_100_95_112_114_111_99_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word ModuleInfo_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word PredProcId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PredProcIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Specs_18_18;
      MR_Word PredInfo_19;
      MR_Word ProcInfo_20;
      MR_Word STATE_VARIABLE_Specs_31_37;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo_2, PredProcId_13, &PredInfo_19, &ProcInfo_20);
      check_hlds__det_report__check_function_semantics_6_p_0(ModuleInfo_2, PredProcId_13, PredInfo_19, ProcInfo_20, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_31_37);
      check_hlds__det_report__check_io_state_proc_detism_6_p_0(ModuleInfo_2, PredProcId_13, PredInfo_19, ProcInfo_20, STATE_VARIABLE_Specs_31_37, &STATE_VARIABLE_Specs_18_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredProcIds_14;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_18_18;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__det_report__check_determinism_of_proc_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_112_114_111_99_95_95_91_49_93_95_48_6_p_0(PredProcId_8, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
}

void MR_CALL 
check_hlds__det_report__check_determinism_of_procs_6_p_0(
  MR_Word ProgressStream_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_112_114_111_99_115_95_95_91_49_93_95_48_6_p_0(HeadVar__2_2, STATE_VARIABLE_ModuleInfo_0_3, STATE_VARIABLE_ModuleInfo_4, STATE_VARIABLE_Specs_0_5, STATE_VARIABLE_Specs_6);
}

void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_112_114_111_99_115_95_95_91_49_93_95_48_6_p_0(
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      *STATE_VARIABLE_ModuleInfo_4 = STATE_VARIABLE_ModuleInfo_0_3;
    }
    else
    {
      MR_Word PredProcId_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word PredProcIds_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_ModuleInfo_23_23;
      MR_Word STATE_VARIABLE_Specs_24_24;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_112_114_111_99_95_95_91_49_93_95_48_6_p_0(PredProcId_15, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_23_23, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_24_24);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = PredProcIds_16;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_23_23;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_24_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_101_99_107_95_100_101_116_101_114_109_105_110_105_115_109_95_111_102_95_112_114_111_99_95_95_91_49_93_95_48_6_p_0(
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word PredInfo_11;
  MR_Word ProcInfo_12;
  MR_Word STATE_VARIABLE_ModuleInfo_34_34;
  MR_Word STATE_VARIABLE_Specs_35_35;
  MR_Word STATE_VARIABLE_Specs_36_36;
  MR_Word STATE_VARIABLE_Specs_37_37;
  MR_Word STATE_VARIABLE_Specs_38_38;
  MR_Word STATE_VARIABLE_Specs_39_39;
  MR_Word STATE_VARIABLE_Specs_40_40;
  MR_Word Markers_45;
  MR_Word ExportedProcsCord0_63;
  MR_Word ExportedProcs_64;
  MR_Word ExportedProcsCord_65;
  MR_Word Detism_66;
  MR_Word PredId_67;
  MR_Integer ProcId_68;
  MR_Word InformIncompleteSwitches_47;
  MR_Word Globals_46;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word ExportContext_69;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_20, PredProcId_8, &PredInfo_11, &ProcInfo_12);
  check_hlds__det_report__check_for_too_tight_or_loose_declared_determinism_7_p_0(PredProcId_8, PredInfo_11, ProcInfo_12, STATE_VARIABLE_ModuleInfo_0_20, &STATE_VARIABLE_ModuleInfo_34_34, STATE_VARIABLE_Specs_0_22, &STATE_VARIABLE_Specs_35_35);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_11, &Markers_45);
  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_45, (MR_Integer) 26);
  if (succeeded)
  {
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_34_34, &Globals_46);
    Var_55 = (MR_Integer) 55;
    Var_56 = (MR_Integer) 1;
    succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_46, Var_55, Var_56);
  }
  if (succeeded)
  {
    InformIncompleteSwitches_47 = (MR_Integer) 1;
    succeeded = MR_TRUE;
  }
  else
  {
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_45, (MR_Integer) 25);
    if (succeeded)
    {
      InformIncompleteSwitches_47 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    MR_Word Goal_48;
    MR_Word VarTable_49;
    MR_Word InstMap0_50;
    MR_Word DetInfo0_51;
    MR_Word DetInfo_52;
    MR_Word RCSSpecs_53;

    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Goal_48);
    hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_12, &VarTable_49);
    hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_34_34, ProcInfo_12, &InstMap0_50);
    check_hlds__det_util__det_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_34_34, PredProcId_8, VarTable_49, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_51);
    check_hlds__det_report__reqscope_check_goal_7_p_0(Goal_48, InstMap0_50, InformIncompleteSwitches_47, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), DetInfo0_51, &DetInfo_52);
    check_hlds__det_util__det_info_get_error_specs_2_p_0(DetInfo_52, &RCSSpecs_53);
    STATE_VARIABLE_Specs_36_36 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RCSSpecs_53, STATE_VARIABLE_Specs_35_35);
  }
  else
    STATE_VARIABLE_Specs_36_36 = STATE_VARIABLE_Specs_35_35;
  check_hlds__det_report__check_determinism_for_eval_method_3_p_0(ProcInfo_12, STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_37_37);
  check_hlds__det_report__check_determinism_if_pred_is_main_4_p_0(PredInfo_11, ProcInfo_12, STATE_VARIABLE_Specs_37_37, &STATE_VARIABLE_Specs_38_38);
  check_hlds__det_report__check_function_semantics_6_p_0(STATE_VARIABLE_ModuleInfo_34_34, PredProcId_8, PredInfo_11, ProcInfo_12, STATE_VARIABLE_Specs_38_38, &STATE_VARIABLE_Specs_39_39);
  check_hlds__det_report__check_io_state_proc_detism_6_p_0(STATE_VARIABLE_ModuleInfo_34_34, PredProcId_8, PredInfo_11, ProcInfo_12, STATE_VARIABLE_Specs_39_39, &STATE_VARIABLE_Specs_40_40);
  hlds__hlds_module__module_info_get_pragma_exported_procs_2_p_0(STATE_VARIABLE_ModuleInfo_34_34, &ExportedProcsCord0_63);
  ExportedProcs_64 = mercury__cord__list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcsCord0_63);
  ExportedProcsCord_65 = mercury__cord__from_list_1_f_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_pragma_exported_proc_0), ExportedProcs_64);
  hlds__hlds_module__module_info_set_pragma_exported_procs_3_p_0(ExportedProcsCord_65, STATE_VARIABLE_ModuleInfo_34_34, STATE_VARIABLE_ModuleInfo_21);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_12, &Detism_66);
  PredId_67 = ((MR_Word) ((MR_hl_field(0, PredProcId_8, (MR_Integer) 0))));
  ProcId_68 = ((MR_Integer) ((MR_hl_field(0, PredProcId_8, (MR_Integer) 1))));
  succeeded = check_hlds__det_report__is_proc_pragma_exported_4_p_0(ExportedProcs_64, PredId_67, ProcId_68, &ExportContext_69);
  if (succeeded)
    switch (Detism_66) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        succeeded = MR_TRUE;
        break;
    }
  if (succeeded)
  {
    MR_String DetismStr_70;
    MR_Word Pieces_71;
    MR_Word Spec_72;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;

    DetismStr_70 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Detism_66);
    {
      Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_77, 1) = ((MR_Box) (DetismStr_70));
    }
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
    }
    Var_75 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_76);
    Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_75, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
    Pieces_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[175])), Var_74);
    {
      Spec_72 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_72, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.check_exported_proc_detism\'/6"));
      MR_hl_field(0, Spec_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_72, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(0, Spec_72, 3) = ((MR_Box) (ExportContext_69));
      MR_hl_field(0, Spec_72, 4) = ((MR_Box) (Pieces_71));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_23 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_72));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_40_40));
    }
  }
  else
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_40_40;
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_7_p_0(
  MR_Word Goal_8,
  MR_Word InstMap0_9,
  MR_Word IIS_10,
  MR_Word MaybeReportedSwitch_11,
  MR_Word SwitchContexts_12,
  MR_Word STATE_VARIABLE_DetInfo_0_84,
  MR_Word * STATE_VARIABLE_DetInfo_85)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_33 = (MR_Word) ((MR_Word) (GoalExpr_14));
          MR_Word next_value_of_Goal_8 = SubGoal_33;

          // direct tailcall eliminated
          ;
          Goal_8 = next_value_of_Goal_8;
          MaybeReportedSwitch_11 = (MR_Word) ((MR_Unsigned) 0U);
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_49 = ((MR_Word) ((MR_hl_field(1, GoalExpr_14, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) RHS_49)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_DetInfo_85 = STATE_VARIABLE_DetInfo_0_84;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_DetInfo_85 = STATE_VARIABLE_DetInfo_0_84;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgVarsModes_61 = ((MR_Word) ((MR_hl_field(2, RHS_49, (MR_Integer) 2))));
                MR_Word LambdaGoal_63 = ((MR_Word) ((MR_hl_field(2, RHS_49, (MR_Integer) 4))));
                MR_Word ModuleInfo_64;
                MR_Word LambdaInstMap0_65;
                MR_Word next_value_of_Goal_8;
                MR_Word next_value_of_InstMap0_9;

                check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_84, &ModuleInfo_64);
                check_hlds__det_report__lambda_update_instmap_4_p_0(ModuleInfo_64, ArgVarsModes_61, InstMap0_9, &LambdaInstMap0_65);
                // direct tailcall eliminated
                ;
                next_value_of_Goal_8 = LambdaGoal_63;
                next_value_of_InstMap0_9 = LambdaInstMap0_65;
                Goal_8 = next_value_of_Goal_8;
                InstMap0_9 = next_value_of_InstMap0_9;
                MaybeReportedSwitch_11 = (MR_Word) ((MR_Unsigned) 0U);
                SwitchContexts_12 = (MR_Word) ((MR_Unsigned) 0U);
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_DetInfo_85 = STATE_VARIABLE_DetInfo_0_84;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_DetInfo_85 = STATE_VARIABLE_DetInfo_0_84;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_DetInfo_85 = STATE_VARIABLE_DetInfo_0_84;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));

              check_hlds__det_report__reqscope_check_conj_7_p_0(Goals_17, InstMap0_9, IIS_10, MaybeReportedSwitch_11, SwitchContexts_12, STATE_VARIABLE_DetInfo_0_84, STATE_VARIABLE_DetInfo_85);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_113 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));

              check_hlds__det_report__reqscope_check_disj_6_p_0(Goals_113, InstMap0_9, IIS_10, SwitchContexts_12, STATE_VARIABLE_DetInfo_0_84, STATE_VARIABLE_DetInfo_85);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));
              MR_Word CanFail_19 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 3))));
              MR_Word VarTable_26;
              MR_Word VarType_27;
              MR_Word STATE_VARIABLE_DetInfo_90_90;

              switch (CanFail_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Context_21;

                    Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
                    succeeded = (IIS_10 == (MR_Integer) 0);
                    if (!(succeeded))
                    {
                      MR_Word TypeInfo_117_117;
                      MR_Word TypeInfo_118_118;
                      MR_Word ReportedSwitch_22;
                      MR_Word ReportedContext_23;
                      MR_Word ReportedVar_24;
                      MR_Word ReportedCases_25;

                      succeeded = (MaybeReportedSwitch_11 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ReportedSwitch_22 = ((MR_Word) ((MR_hl_field(1, MaybeReportedSwitch_11, (MR_Integer) 0))));
                        ReportedContext_23 = ((MR_Word) ((MR_hl_field(0, ReportedSwitch_22, (MR_Integer) 0))));
                        ReportedVar_24 = ((MR_Word) ((MR_hl_field(0, ReportedSwitch_22, (MR_Integer) 1))));
                        ReportedCases_25 = ((MR_Word) ((MR_hl_field(0, ReportedSwitch_22, (MR_Integer) 2))));
                        succeeded = mercury__term_context____Unify____term_context_0_0(ReportedContext_23, Context_21);
                        if (succeeded)
                        {
                          TypeInfo_117_117 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_117_117, ((MR_Box) (ReportedVar_24)), ((MR_Box) (Var_18)));
                          if (succeeded)
                          {
                            TypeInfo_118_118 = (MR_Word) (&check_hlds__det_report_scalar_common_2[4]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_118_118, ((MR_Box) (ReportedCases_25)), ((MR_Box) (Cases_20)));
                          }
                        }
                      }
                    }
                    if (succeeded)
                      STATE_VARIABLE_DetInfo_90_90 = STATE_VARIABLE_DetInfo_0_84;
                    else
                      check_hlds__det_report__generate_incomplete_switch_spec_9_p_0((MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[4])), InstMap0_9, SwitchContexts_12, Var_18, Cases_20, Context_21, STATE_VARIABLE_DetInfo_0_84, &STATE_VARIABLE_DetInfo_90_90);
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_DetInfo_90_90 = STATE_VARIABLE_DetInfo_0_84;
                  break;
              }
              check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_90_90, &VarTable_26);
              parse_tree__var_table__lookup_var_type_3_p_0(VarTable_26, Var_18, &VarType_27);
              check_hlds__det_report__reqscope_check_cases_8_p_0(Var_18, VarType_27, Cases_20, InstMap0_9, IIS_10, SwitchContexts_12, STATE_VARIABLE_DetInfo_90_90, STATE_VARIABLE_DetInfo_85);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));
              MR_Word ScopeMaybeReportedSwitch_35;
              MR_Word STATE_VARIABLE_DetInfo_101_101;
              MR_Word SubGoal_114 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_8;
              MR_Word next_value_of_MaybeReportedSwitch_11;
              MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_84;

              check_hlds__det_report__reqscope_check_scope_8_p_0(SwitchContexts_12, Reason_34, SubGoal_114, GoalInfo_15, InstMap0_9, &ScopeMaybeReportedSwitch_35, STATE_VARIABLE_DetInfo_0_84, &STATE_VARIABLE_DetInfo_101_101);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_8 = SubGoal_114;
              next_value_of_MaybeReportedSwitch_11 = ScopeMaybeReportedSwitch_35;
              next_value_of_STATE_VARIABLE_DetInfo_0_84 = STATE_VARIABLE_DetInfo_101_101;
              Goal_8 = next_value_of_Goal_8;
              MaybeReportedSwitch_11 = next_value_of_MaybeReportedSwitch_11;
              STATE_VARIABLE_DetInfo_0_84 = next_value_of_STATE_VARIABLE_DetInfo_0_84;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 2))));
              MR_Word Then_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 3))));
              MR_Word Else_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 4))));
              MR_Word InstMap1_32;
              MR_Word STATE_VARIABLE_DetInfo_94_94;
              MR_Word STATE_VARIABLE_DetInfo_96_96;
              MR_Word next_value_of_Goal_8;
              MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_84;

              check_hlds__det_report__reqscope_check_goal_7_p_0(Cond_29, InstMap0_9, IIS_10, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts_12, STATE_VARIABLE_DetInfo_0_84, &STATE_VARIABLE_DetInfo_94_94);
              hlds__goal_util__update_instmap_3_p_0(Cond_29, InstMap0_9, &InstMap1_32);
              check_hlds__det_report__reqscope_check_goal_7_p_0(Then_30, InstMap1_32, IIS_10, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts_12, STATE_VARIABLE_DetInfo_94_94, &STATE_VARIABLE_DetInfo_96_96);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_8 = Else_31;
              next_value_of_STATE_VARIABLE_DetInfo_0_84 = STATE_VARIABLE_DetInfo_96_96;
              Goal_8 = next_value_of_Goal_8;
              MaybeReportedSwitch_11 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_DetInfo_0_84 = next_value_of_STATE_VARIABLE_DetInfo_0_84;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_14, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_report.reqscope_check_goal\'/7", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_41 = ((MR_Word) ((MR_hl_field(1, ShortHand_36, (MR_Integer) 4))));
                    MR_Word OrElseGoals_42 = ((MR_Word) ((MR_hl_field(1, ShortHand_36, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_DetInfo_104_104;

                    check_hlds__det_report__reqscope_check_goal_7_p_0(MainGoal_41, InstMap0_9, IIS_10, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts_12, STATE_VARIABLE_DetInfo_0_84, &STATE_VARIABLE_DetInfo_104_104);
                    check_hlds__det_report__reqscope_check_disj_6_p_0(OrElseGoals_42, InstMap0_9, IIS_10, SwitchContexts_12, STATE_VARIABLE_DetInfo_104_104, STATE_VARIABLE_DetInfo_85);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_115 = ((MR_Word) ((MR_hl_field(2, ShortHand_36, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_8 = SubGoal_115;

                    // direct tailcall eliminated
                    ;
                    Goal_8 = next_value_of_Goal_8;
                    MaybeReportedSwitch_11 = (MR_Word) ((MR_Unsigned) 0U);
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
check_hlds__det_report__reqscope_check_cases_8_p_0(
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
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DetInfo_8 = STATE_VARIABLE_DetInfo_0_7;
    else
    {
      MR_Word Case_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Cases_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word MainConsId_25 = ((MR_Word) ((MR_hl_field(0, Case_19, (MR_Integer) 0))));
      MR_Word OtherConsIds_26 = ((MR_Word) ((MR_hl_field(0, Case_19, (MR_Integer) 1))));
      MR_Word Goal_27 = ((MR_Word) ((MR_hl_field(0, Case_19, (MR_Integer) 2))));
      MR_Word GoalSeq_28;
      MR_Word MainMatch_29;
      MR_Word OtherMatches_30;
      MR_Word NewSwitchContext_31;
      MR_Word SwitchContexts1_32;
      MR_Word ModuleInfo0_33;
      MR_Word InstMap1_34;
      MR_Word ModuleInfo_35;
      MR_Word Var_38;
      MR_Word STATE_VARIABLE_DetInfo_40_40;
      MR_Word STATE_VARIABLE_DetInfo_42_42;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_7;

      hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_27, &GoalSeq_28);
      {
        Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_38, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      check_hlds__det_report__find_switch_var_matches_6_p_0(GoalSeq_28, Var_38, MainConsId_25, OtherConsIds_26, &MainMatch_29, &OtherMatches_30);
      {
        NewSwitchContext_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, NewSwitchContext_31, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, NewSwitchContext_31, 1) = ((MR_Box) (MainMatch_29));
        MR_hl_field(0, NewSwitchContext_31, 2) = ((MR_Box) (OtherMatches_30));
      }
      {
        SwitchContexts1_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, SwitchContexts1_32, 0) = ((MR_Box) (NewSwitchContext_31));
        MR_hl_field(1, SwitchContexts1_32, 1) = ((MR_Box) (HeadVar__6_6));
      }
      check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_7, &ModuleInfo0_33);
      hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__1_1, HeadVar__2_2, MainConsId_25, OtherConsIds_26, HeadVar__4_4, &InstMap1_34, ModuleInfo0_33, &ModuleInfo_35);
      check_hlds__det_util__det_info_set_module_info_3_p_0(ModuleInfo_35, STATE_VARIABLE_DetInfo_0_7, &STATE_VARIABLE_DetInfo_40_40);
      check_hlds__det_report__reqscope_check_goal_7_p_0(Goal_27, InstMap1_34, HeadVar__5_5, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts1_32, STATE_VARIABLE_DetInfo_40_40, &STATE_VARIABLE_DetInfo_42_42);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = Cases_20;
      next_value_of_STATE_VARIABLE_DetInfo_0_7 = STATE_VARIABLE_DetInfo_42_42;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_DetInfo_0_7 = next_value_of_STATE_VARIABLE_DetInfo_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_disj_6_p_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DetInfo_6 = STATE_VARIABLE_DetInfo_0_5;
    else
    {
      MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_DetInfo_22_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_5;

      check_hlds__det_report__reqscope_check_goal_7_p_0(Goal_13, HeadVar__2_2, HeadVar__3_3, (MR_Word) ((MR_Unsigned) 0U), HeadVar__4_4, STATE_VARIABLE_DetInfo_0_5, &STATE_VARIABLE_DetInfo_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_14;
      next_value_of_STATE_VARIABLE_DetInfo_0_5 = STATE_VARIABLE_DetInfo_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_DetInfo_0_5 = next_value_of_STATE_VARIABLE_DetInfo_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_conj_7_p_0(
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DetInfo_7 = STATE_VARIABLE_DetInfo_0_6;
    else
    {
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InstMap1_22;
      MR_Word STATE_VARIABLE_DetInfo_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_6;

      check_hlds__det_report__reqscope_check_goal_7_p_0(Goal_15, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_DetInfo_0_6, &STATE_VARIABLE_DetInfo_25_25);
      hlds__goal_util__update_instmap_3_p_0(Goal_15, HeadVar__2_2, &InstMap1_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_16;
      next_value_of_HeadVar__2_2 = InstMap1_22;
      next_value_of_STATE_VARIABLE_DetInfo_0_6 = STATE_VARIABLE_DetInfo_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_DetInfo_0_6 = next_value_of_STATE_VARIABLE_DetInfo_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_report__lambda_update_instmap_4_p_0(
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
      MR_Word VarsModes_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word InitInst_14;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_InstMap_19_19;
      MR_Word _FinalInst_15;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_InstMap_0_3;

      Var_10 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 0))));
      Mode_11 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 1))));
      check_hlds__mode_util__mode_get_insts_4_p_0(HeadVar__1_1, Mode_11, &InitInst_14, &_FinalInst_15);
      hlds__instmap__instmap_set_var_4_p_0(Var_10, InitInst_14, STATE_VARIABLE_InstMap_0_3, &STATE_VARIABLE_InstMap_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = VarsModes_12;
      next_value_of_STATE_VARIABLE_InstMap_0_3 = STATE_VARIABLE_InstMap_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_InstMap_0_3 = next_value_of_STATE_VARIABLE_InstMap_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_scope_8_p_0(
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
      switch (((MR_Integer) ((MR_hl_field(3, Reason_10, (MR_Integer) 0))))) {
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
            MR_Word RequiredDetism_16 = ((MR_Unsigned) ((MR_hl_field(3, Reason_10, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word Var_53;

            {
              Var_53 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_53, 0) = ((MR_Box) (ScopeGoalInfo_12));
            }
            check_hlds__det_report__reqscope_check_goal_detism_6_p_0(RequiredDetism_16, SubGoal_11, Var_53, InstMap0_13, STATE_VARIABLE_DetInfo_0_51, STATE_VARIABLE_DetInfo_52);
            *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word RequiredVar_17 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 1))));
            MR_Word SwitchGoalContext_18;
            MR_Word SwitchVar_19;
            MR_Word CanFail_20;
            MR_Word Cases_21;
            MR_Word TypeInfo_68_68;
            MR_Word GoalExpr_69 = ((MR_Word) ((MR_hl_field(0, SubGoal_11, (MR_Integer) 0))));
            MR_Word GoalInfo_70 = ((MR_Word) ((MR_hl_field(0, SubGoal_11, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) GoalExpr_69)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_69, (MR_Integer) 0))))) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Conjuncts0_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_69, (MR_Integer) 2))));
                      MR_Word Conjuncts_77;
                      MR_Word Var_108 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_69, (MR_Integer) 1))) & (MR_Integer) 1);

                      succeeded = (Var_108 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        hlds__goal_util__flatten_conj_2_p_0(Conjuncts0_76, &Conjuncts_77);
                        succeeded = check_hlds__det_report__cse_lifted_then_sortof_switch_5_p_0(Conjuncts_77, &SwitchGoalContext_18, &SwitchVar_19, &CanFail_20, &Cases_21);
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      SwitchVar_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_69, (MR_Integer) 1))));
                      CanFail_20 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_69, (MR_Integer) 2))) & (MR_Integer) 1);
                      Cases_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_69, (MR_Integer) 3))));
                      SwitchGoalContext_18 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_70);
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word Reason_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_69, (MR_Integer) 1))));
                      MR_Word SubGoal_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_69, (MR_Integer) 2))));
                      MR_Word SubGoalExpr_74;
                      MR_Word SubGoalInfo_75;

                      succeeded = ((((MR_tag((MR_Word) Reason_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_71, (MR_Integer) 0)))) == (MR_Integer) 4)));
                      if (succeeded)
                      {
                        SubGoalExpr_74 = ((MR_Word) ((MR_hl_field(0, SubGoal_72, (MR_Integer) 0))));
                        SubGoalInfo_75 = ((MR_Word) ((MR_hl_field(0, SubGoal_72, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) SubGoalExpr_74)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr_74, (MR_Integer) 0)))) == (MR_Integer) 4)));
                        if (succeeded)
                        {
                          SwitchVar_19 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_74, (MR_Integer) 1))));
                          CanFail_20 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr_74, (MR_Integer) 2))) & (MR_Integer) 1);
                          Cases_21 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_74, (MR_Integer) 3))));
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
              TypeInfo_68_68 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
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
                    check_hlds__det_report__generate_incomplete_switch_spec_9_p_0((MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), InstMap0_13, SwitchContexts_9, RequiredVar_17, Cases_21, ScopeContext_22, STATE_VARIABLE_DetInfo_0_51, STATE_VARIABLE_DetInfo_52);
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
              check_hlds__det_report__generate_error_not_switch_on_required_var_6_p_0(SwitchContexts_9, RequiredVar_17, (MR_String) "require_complete_switch", ScopeGoalInfo_12, STATE_VARIABLE_DetInfo_0_51, STATE_VARIABLE_DetInfo_52);
              *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word RequiredDetism_66 = ((MR_Unsigned) ((MR_hl_field(3, Reason_10, (MR_Integer) 2))) & (MR_Integer) 7);
            MR_Word RequiredVar_67 = ((MR_Word) ((MR_hl_field(3, Reason_10, (MR_Integer) 1))));
            MR_Word SwitchVar_64;
            MR_Word Cases_65;
            MR_Word _SwitchContext_24;
            MR_Word _CanFail_25;

            succeeded = check_hlds__det_report__is_scope_subgoal_a_sortof_switch_5_p_0(SubGoal_11, &_SwitchContext_24, &SwitchVar_64, &_CanFail_25, &Cases_65);
            if (succeeded)
            {
              MR_Word VarTable_26;
              MR_Word SwitchVarType_27;

              check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_51, &VarTable_26);
              parse_tree__var_table__lookup_var_type_3_p_0(VarTable_26, SwitchVar_64, &SwitchVarType_27);
              check_hlds__det_report__reqscope_check_goal_detism_for_cases_7_p_0(RequiredDetism_66, SwitchVar_64, SwitchVarType_27, Cases_65, InstMap0_13, STATE_VARIABLE_DetInfo_0_51, STATE_VARIABLE_DetInfo_52);
            }
            else
            {
              MR_String ScopeWord_28 = ((&check_hlds__det_report_vector_common_7[0 + RequiredDetism_66]))->check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;

              check_hlds__det_report__generate_error_not_switch_on_required_var_6_p_0(SwitchContexts_9, RequiredVar_67, ScopeWord_28, ScopeGoalInfo_12, STATE_VARIABLE_DetInfo_0_51, STATE_VARIABLE_DetInfo_52);
            }
            *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word SubGoalInfo_33 = ((MR_Word) ((MR_hl_field(0, SubGoal_11, (MR_Integer) 1))));
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
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_report.reqscope_check_scope\'/8", (MR_String) "Loop control scope with strange determinism");
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
check_hlds__det_report__generate_error_not_switch_on_required_var_6_p_0(
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

  check_hlds__det_report__det_diagnose_switch_context_3_p_0(STATE_VARIABLE_DetInfo_0_19, SwitchContexts_7, &NestingPieces_12);
  check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_19, &VarTable_13);
  RequiredVarStr_14 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_13, (MR_Integer) 0, RequiredVar_8);
  {
    Var_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_22, 0) = ((MR_Box) ((MR_Unsigned) 6U));
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
    MR_hl_field(1, Var_23, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[246])));
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
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[250])));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_52));
  }
  Var_48 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_49);
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_48, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
  Var_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[244])), Var_47);
  Var_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_41, Var_42);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[249])), Var_40);
  Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_12, Var_33);
  Context_17 = hlds__hlds_goal__goal_info_get_context_1_f_0(ScopeGoalInfo_10);
  {
    Spec_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_18, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.generate_error_not_switch_on_required_var\'/6"));
    MR_hl_field(0, Spec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Spec_18, 2) = ((MR_Box) ((MR_Unsigned) 68U));
    MR_hl_field(0, Spec_18, 3) = ((MR_Box) (Context_17));
    MR_hl_field(0, Spec_18, 4) = ((MR_Box) (Pieces_16));
  }
  check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_18, STATE_VARIABLE_DetInfo_0_19, STATE_VARIABLE_DetInfo_20);
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_for_cases_7_p_0(
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
      MR_Word Case_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case_18, (MR_Integer) 0))));
      MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case_18, (MR_Integer) 1))));
      MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(0, Case_18, (MR_Integer) 2))));
      MR_Word ModuleInfo0_25;
      MR_Word InstMap1_26;
      MR_Word ModuleInfo_27;
      MR_Word CheckKind_28;
      MR_Word STATE_VARIABLE_DetInfo_31_31;
      MR_Word STATE_VARIABLE_DetInfo_32_32;
      MR_Word next_value_of_HeadVar__4_4;
      MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_6;

      check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_6, &ModuleInfo0_25);
      hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__2_2, HeadVar__3_3, MainConsId_22, OtherConsIds_23, HeadVar__5_5, &InstMap1_26, ModuleInfo0_25, &ModuleInfo_27);
      check_hlds__det_util__det_info_set_module_info_3_p_0(ModuleInfo_27, STATE_VARIABLE_DetInfo_0_6, &STATE_VARIABLE_DetInfo_31_31);
      {
        CheckKind_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CheckKind_28, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(1, CheckKind_28, 1) = ((MR_Box) (MainConsId_22));
        MR_hl_field(1, CheckKind_28, 2) = ((MR_Box) (OtherConsIds_23));
      }
      check_hlds__det_report__reqscope_check_goal_detism_6_p_0(HeadVar__1_1, Goal_24, CheckKind_28, InstMap1_26, STATE_VARIABLE_DetInfo_31_31, &STATE_VARIABLE_DetInfo_32_32);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = Cases_19;
      next_value_of_STATE_VARIABLE_DetInfo_0_6 = STATE_VARIABLE_DetInfo_32_32;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      STATE_VARIABLE_DetInfo_0_6 = next_value_of_STATE_VARIABLE_DetInfo_0_6;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0_1(
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
check_hlds__det_report__reqscope_check_goal_detism_6_p_0(
  MR_Word RequiredDetism_7,
  MR_Word Goal_8,
  MR_Word CheckKind_9,
  MR_Word InstMap0_10,
  MR_Word STATE_VARIABLE_DetInfo_0_38,
  MR_Word * STATE_VARIABLE_DetInfo_39)
{
  MR_bool succeeded;
  MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 1))));
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
    MR_Word STATE_VARIABLE_DetInfo_119_119;
    MR_Word Var_123;
    MR_Word MsgGroups_130;
    MR_Word SortedMsgGroups_131;
    MR_Word GoalExpr_132;
    MR_Word GoalInfo_133;
    MR_Word Actual_134;
    MR_Word CompareResult_135;

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
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[11])));
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
      MR_hl_field(1, Var_46, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
    }
    ActPieces_23 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_46);
    if (((MR_tag((MR_Word) CheckKind_9)) == (MR_Integer) 0))
    {
      MR_Word ScopeGoalInfo_24 = ((MR_Word) ((MR_hl_field(0, CheckKind_9, (MR_Integer) 0))));
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_65;

      Context_25 = hlds__hlds_goal__goal_info_get_context_1_f_0(ScopeGoalInfo_24);
      Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
      Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[230])), Var_65);
      Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ReqPieces_22, Var_60);
      Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[228])), Var_59);
    }
    else
    {
      MR_Word SwitchVar_27 = ((MR_Word) ((MR_hl_field(1, CheckKind_9, (MR_Integer) 0))));
      MR_Word MainConsId_28 = ((MR_Word) ((MR_hl_field(1, CheckKind_9, (MR_Integer) 1))));
      MR_Word OtherConsIds_29 = ((MR_Word) ((MR_hl_field(1, CheckKind_9, (MR_Integer) 2))));
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
      OtherConsIdStrs_33 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__det_report_scalar_common_1[5]), OtherConsIds_29);
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
        MR_hl_field(1, Var_78, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[218])));
        MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_81));
      }
      Var_77 = parse_tree__error_spec__color_as_subject_1_f_0(Var_78);
      {
        Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_41));
        MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_93 = parse_tree__error_spec__color_as_correct_1_f_0(Var_94);
      Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
      Var_109 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[244])), Var_114);
      Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ConsIdsPieces_34, Var_109);
      Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[242])), Var_108);
      Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_93, Var_97);
      Var_84 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[236])), Var_92);
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_84);
      Pieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[232])), Var_76);
    }
    {
      Msg_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Msg_35, 0) = ((MR_Box) (Context_25));
      MR_hl_field(0, Msg_35, 1) = ((MR_Box) (Pieces_26));
    }
    GoalExpr_132 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    GoalInfo_133 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 1))));
    Actual_134 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_133);
    parse_tree__prog_detism__compare_determinisms_3_p_0(RequiredDetism_7, Actual_134, &CompareResult_135);
    switch (CompareResult_135) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_132, GoalInfo_133, InstMap0_10, RequiredDetism_7, Actual_134, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_DetInfo_0_38, &STATE_VARIABLE_DetInfo_119_119, &MsgGroups_130);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MsgGroups_130 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_119_119 = STATE_VARIABLE_DetInfo_0_38;
        }
        break;
    }
    parse_tree__error_sort__sort_error_msg_groups_2_p_0(MsgGroups_130, &SortedMsgGroups_131);
    SubMsgs_36 = parse_tree__error_sort__flatten_error_msg_groups_1_f_0(SortedMsgGroups_131);
    {
      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_123, 0) = ((MR_Box) (Msg_35));
      MR_hl_field(1, Var_123, 1) = ((MR_Box) (SubMsgs_36));
    }
    {
      Spec_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.reqscope_check_goal_detism\'/6"));
      MR_hl_field(2, Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(2, Spec_37, 3) = ((MR_Box) (Var_123));
    }
    check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_37, STATE_VARIABLE_DetInfo_119_119, STATE_VARIABLE_DetInfo_39);
  }
}

static void MR_CALL 
check_hlds__det_report__generate_incomplete_switch_spec_9_p_0(
  MR_Word Why_10,
  MR_Word MaybeLimit_11,
  MR_Word InstMap0_12,
  MR_Word SwitchContexts_13,
  MR_Word SwitchVar_14,
  MR_Word Cases_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_DetInfo_0_38,
  MR_Word * STATE_VARIABLE_DetInfo_39)
{
  MR_bool succeeded;
  MR_Word NestingPieces_18;
  MR_String SwitchVarStr_19;
  MR_Word MaybeMissingInfo_20;
  MR_Word MaybeSeverityComponents_28;

  check_hlds__det_report__find_missing_cons_ids_9_p_0(STATE_VARIABLE_DetInfo_0_38, MaybeLimit_11, InstMap0_12, SwitchContexts_13, SwitchVar_14, Cases_15, &NestingPieces_18, &SwitchVarStr_19, &MaybeMissingInfo_20);
  switch (Why_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      if ((MaybeMissingInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeSeverityComponents_28 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word MissingInfo_21 = ((MR_Word) ((MR_hl_field(1, MaybeMissingInfo_20, (MR_Integer) 0))));
        MR_Integer NumPossibleConsIds_22 = ((MR_Integer) ((MR_hl_field(0, MissingInfo_21, (MR_Integer) 0))));
        MR_Integer NumUncoveredConsIds_23 = ((MR_Integer) ((MR_hl_field(0, MissingInfo_21, (MR_Integer) 1))));
        MR_Word MainPieces_24 = ((MR_Word) ((MR_hl_field(0, MissingInfo_21, (MR_Integer) 2))));
        MR_Word VerbosePieces_25 = ((MR_Word) ((MR_hl_field(0, MissingInfo_21, (MR_Integer) 3))));
        MR_Word ModuleInfo_29;
        MR_Word Globals_30;
        MR_Integer Threshold_31;
        MR_Integer NumCoveredConsIds_32;
        MR_Integer Var_70;
        MR_Integer Var_71;

        check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_38, &ModuleInfo_29);
        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_29, &Globals_30);
        libs__globals__lookup_int_option_3_p_0(Globals_30, (MR_Integer) 56, &Threshold_31);
        NumCoveredConsIds_32 = (MR_Integer) ((MR_Unsigned) NumPossibleConsIds_22 - (MR_Unsigned) NumUncoveredConsIds_23);
        Var_70 = (MR_Integer) ((MR_Unsigned) NumCoveredConsIds_32 * (MR_Unsigned) 100);
        Var_71 = (MR_Integer) ((MR_Unsigned) NumPossibleConsIds_22 * (MR_Unsigned) Threshold_31);
        succeeded = (Var_70 >= Var_71);
        if (succeeded)
        {
          MR_Word NoCoverPieces_33;
          MR_Word Var_74;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Tuple Var_84;
          MR_Word Var_86;
          MR_Word Component_119;

          {
            Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_78, 1) = ((MR_Box) (SwitchVarStr_19));
          }
          {
            Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
            MR_hl_field(1, Var_77, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[200])));
          }
          {
            Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_74, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[195])));
            MR_hl_field(1, Var_74, 1) = ((MR_Box) (Var_77));
          }
          {
            NoCoverPieces_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, NoCoverPieces_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, NoCoverPieces_33, 1) = ((MR_Box) (Var_74));
          }
          check_hlds__det_report__append_prefix_and_maybe_verbose_6_p_0((MR_Word) ((MR_Unsigned) 0U), NestingPieces_18, NoCoverPieces_33, MainPieces_24, VerbosePieces_25, &Component_119);
          {
            Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_86, 0) = ((MR_Box) (Component_119));
            MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_84 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_84, 0) = ((MR_Box) ((MR_Unsigned) 8U));
            MR_hl_field(0, Var_84, 1) = ((MR_Box) (Var_86));
          }
          {
            MaybeSeverityComponents_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeSeverityComponents_28, 0) = ((MR_Box) (Var_84));
          }
        }
        else
          MaybeSeverityComponents_28 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 0:
      if ((MaybeMissingInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_94;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_99;
        MR_Word Var_100;
        MR_Word Var_108;
        MR_Tuple Var_109;
        MR_Word Var_111;
        MR_Word Component_122;
        MR_Word NoCoverPieces_123;

        {
          Var_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_100, 1) = ((MR_Box) (SwitchVarStr_19));
        }
        {
          Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
          MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_96, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[218])));
          MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_99));
        }
        Var_95 = parse_tree__error_spec__color_as_subject_1_f_0(Var_96);
        Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_95, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[220])));
        NoCoverPieces_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[217])), Var_94);
        Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_18, NoCoverPieces_123);
        {
          Component_122 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Component_122, 0) = ((MR_Box) (Var_108));
        }
        {
          Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_111, 0) = ((MR_Box) (Component_122));
          MR_hl_field(1, Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_109 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_109, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_109, 1) = ((MR_Box) (Var_111));
        }
        {
          MaybeSeverityComponents_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSeverityComponents_28, 0) = ((MR_Box) (Var_109));
        }
      }
      else
      {
        MR_Word ErrorPieces_26;
        MR_Word Component_27;
        MR_Word Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_62;
        MR_Tuple Var_65;
        MR_Word Var_67;
        MR_Word MissingInfo_128 = ((MR_Word) ((MR_hl_field(1, MaybeMissingInfo_20, (MR_Integer) 0))));
        MR_Word MainPieces_131 = ((MR_Word) ((MR_hl_field(0, MissingInfo_128, (MR_Integer) 2))));
        MR_Word VerbosePieces_132 = ((MR_Word) ((MR_hl_field(0, MissingInfo_128, (MR_Integer) 3))));

        {
          Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_52, 1) = ((MR_Box) (SwitchVarStr_19));
        }
        {
          Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[218])));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
        }
        Var_47 = parse_tree__error_spec__color_as_subject_1_f_0(Var_48);
        Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_47, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[224])));
        ErrorPieces_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[217])), Var_46);
        Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_18, ErrorPieces_26);
        check_hlds__det_report__append_prefix_and_maybe_verbose_6_p_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[5])), Var_62, (MR_Word) ((MR_Unsigned) 0U), MainPieces_131, VerbosePieces_132, &Component_27);
        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (Component_27));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_65 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, Var_65, 1) = ((MR_Box) (Var_67));
        }
        {
          MaybeSeverityComponents_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeSeverityComponents_28, 0) = ((MR_Box) (Var_65));
        }
      }
      break;
  }
  if ((MaybeSeverityComponents_28 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_DetInfo_39 = STATE_VARIABLE_DetInfo_0_38;
  else
  {
    MR_Word Severity_34;
    MR_Word SpecComponents_35;
    MR_Word Msg_36;
    MR_Word Spec_37;
    MR_Tuple Var_113 = ((MR_Tuple) ((MR_hl_field(1, MaybeSeverityComponents_28, (MR_Integer) 0))));
    MR_Word Var_116;

    Severity_34 = ((MR_Word) ((MR_hl_field(0, Var_113, (MR_Integer) 0))));
    SpecComponents_35 = ((MR_Word) ((MR_hl_field(0, Var_113, (MR_Integer) 1))));
    {
      Msg_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Msg_36, 0) = ((MR_Box) (Context_16));
      MR_hl_field(2, Msg_36, 1) = ((MR_Box) (SpecComponents_35));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) (Msg_36));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Spec_37, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.generate_incomplete_switch_spec\'/9"));
      MR_hl_field(2, Spec_37, 1) = ((MR_Box) (Severity_34));
      MR_hl_field(2, Spec_37, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(2, Spec_37, 3) = ((MR_Box) (Var_116));
    }
    check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_37, STATE_VARIABLE_DetInfo_0_38, STATE_VARIABLE_DetInfo_39);
  }
}

static MR_bool MR_CALL 
check_hlds__det_report__is_scope_subgoal_a_sortof_switch_5_p_0(
  MR_Word Goal_6,
  MR_Word * SwitchContext_7,
  MR_Word * SwitchVar_8,
  MR_Word * CanFail_9,
  MR_Word * Cases_10)
{
  MR_bool succeeded;
  MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
  MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));

  switch (MR_tag((MR_Word) GoalExpr_11)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Conjuncts0_18 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
            MR_Word Conjuncts_19;
            MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))) & (MR_Integer) 1);

            succeeded = (Var_50 == (MR_Integer) 0);
            if (succeeded)
            {
              hlds__goal_util__flatten_conj_2_p_0(Conjuncts0_18, &Conjuncts_19);
              succeeded = check_hlds__det_report__cse_lifted_then_sortof_switch_5_p_0(Conjuncts_19, SwitchContext_7, SwitchVar_8, CanFail_9, Cases_10);
            }
          }
          break;
        case (MR_Integer) 4:
          {
            *SwitchVar_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
            *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))) & (MR_Integer) 1);
            *Cases_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 3))));
            *SwitchContext_7 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_13 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 1))));
            MR_Word SubGoal_14 = ((MR_Word) ((MR_hl_field(3, GoalExpr_11, (MR_Integer) 2))));
            MR_Word SubGoalExpr_16;
            MR_Word SubGoalInfo_17;

            succeeded = ((((MR_tag((MR_Word) Reason_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              SubGoalExpr_16 = ((MR_Word) ((MR_hl_field(0, SubGoal_14, (MR_Integer) 0))));
              SubGoalInfo_17 = ((MR_Word) ((MR_hl_field(0, SubGoal_14, (MR_Integer) 1))));
              succeeded = ((((MR_tag((MR_Word) SubGoalExpr_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                *SwitchVar_8 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_16, (MR_Integer) 1))));
                *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr_16, (MR_Integer) 2))) & (MR_Integer) 1);
                *Cases_10 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_16, (MR_Integer) 3))));
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
check_hlds__det_report__cse_lifted_then_sortof_switch_5_p_0(
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
      Var_20 = ((MR_Word) ((MR_hl_field(1, Conjuncts_6, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(1, Conjuncts_6, (MR_Integer) 1))));
      if ((Var_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word GoalExpr_21 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
        MR_Word GoalInfo_22 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalExpr_21)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_21, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts0_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, (MR_Integer) 2))));
                  MR_Word Conjuncts_29;
                  MR_Word Var_60 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_21, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word next_value_of_Conjuncts_6;

                  succeeded = (Var_60 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    hlds__goal_util__flatten_conj_2_p_0(Conjuncts0_28, &Conjuncts_29);
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
                  *SwitchVar_8 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, (MR_Integer) 1))));
                  *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_21, (MR_Integer) 2))) & (MR_Integer) 1);
                  *Cases_10 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, (MR_Integer) 3))));
                  *SwitchContext_7 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_22);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, (MR_Integer) 1))));
                  MR_Word SubGoal_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_21, (MR_Integer) 2))));
                  MR_Word SubGoalExpr_26;
                  MR_Word SubGoalInfo_27;

                  succeeded = ((((MR_tag((MR_Word) Reason_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_23, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    SubGoalExpr_26 = ((MR_Word) ((MR_hl_field(0, SubGoal_24, (MR_Integer) 0))));
                    SubGoalInfo_27 = ((MR_Word) ((MR_hl_field(0, SubGoal_24, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) SubGoalExpr_26)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubGoalExpr_26, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      *SwitchVar_8 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_26, (MR_Integer) 1))));
                      *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(3, SubGoalExpr_26, (MR_Integer) 2))) & (MR_Integer) 1);
                      *Cases_10 = ((MR_Word) ((MR_hl_field(3, SubGoalExpr_26, (MR_Integer) 3))));
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

        succeeded = hlds__hlds_goal__goal_has_feature_2_p_0(Var_20, (MR_Integer) 27);
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

static MR_bool MR_CALL 
check_hlds__det_report__is_proc_pragma_exported_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word * Context_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ExportProc_5;
    MR_Word ExportProcs_6;
    MR_Word Context0_12;
    MR_Word Var_13;
    MR_Integer Var_14;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      ExportProc_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      ExportProcs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Var_13 = ((MR_Word) ((MR_hl_field(0, ExportProc_5, (MR_Integer) 1))));
      Var_14 = ((MR_Integer) ((MR_hl_field(0, ExportProc_5, (MR_Integer) 2))));
      Context0_12 = ((MR_Word) ((MR_hl_field(0, ExportProc_5, (MR_Integer) 4))));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(PredId_7, Var_13);
      if (succeeded)
        succeeded = (ProcId_8 == Var_14);
      if (succeeded)
      {
        *Context_9 = Context0_12;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = ExportProcs_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
check_hlds__det_report__check_io_state_proc_detism_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word BadDetismPieces_16;
  MR_Word ActualDetism_14;
  MR_Word MaybeDeclaredDetism_15;
  MR_Integer _InArg_12;
  MR_Integer _OutArg_13;

  succeeded = hlds__hlds_proc_util__proc_info_has_io_state_pair_4_p_0(ModuleInfo_7, ProcInfo_10, &_InArg_12, &_OutArg_13);
  if (succeeded)
  {
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_10, &ActualDetism_14);
    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_10, &MaybeDeclaredDetism_15);
    switch (ActualDetism_14) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 5:
      case (MR_Integer) 7:
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      if ((MaybeDeclaredDetism_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_String Var_37;

        Var_37 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(ActualDetism_14);
        {
          Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_36, 1) = ((MR_Box) (Var_37));
        }
        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_34 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_35);
        BadDetismPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[149])), Var_34);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word DeclaredDetism_17 = ((MR_Word) ((MR_hl_field(1, MaybeDeclaredDetism_15, (MR_Integer) 0))));
        MR_Word Var_39;
        MR_Word Var_40;
        MR_String Var_41;
        MR_Word Var_42;

        switch (DeclaredDetism_17) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
        }
        if (succeeded)
        {
          Var_41 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(DeclaredDetism_17);
          Var_42 = (MR_Word) ((MR_Unsigned) 0U);
          {
            Var_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_40, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
            MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_42));
          }
          BadDetismPieces_16 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_39);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word PredModuleName_19;
    MR_Word ModuleName_20;
    MR_Word ShouldModuleQual_21;
    MR_Word ProcColonPieces_22;
    MR_Word GoodDetismPieces_23;
    MR_Word Pieces_24;
    MR_Word ProcContext_25;
    MR_Word Spec_26;
    MR_Word Var_50;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_64;
    MR_Word Var_69;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_101;

    hlds__hlds_pred__pred_info_get_module_name_2_p_0(PredInfo_9, &PredModuleName_19);
    hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_7, &ModuleName_20);
    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_20, PredModuleName_19);
    if (succeeded)
      ShouldModuleQual_21 = (MR_Integer) 1;
    else
      ShouldModuleQual_21 = (MR_Integer) 0;
    ProcColonPieces_22 = hlds__hlds_error_util__describe_one_proc_name_mode_6_f_0(ModuleInfo_7, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[0])), ShouldModuleQual_21, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[9])), PredProcId_8);
    Var_50 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[150])));
    Var_59 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[151])));
    Var_69 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[155])));
    Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[153])), Var_69);
    Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_64);
    GoodDetismPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_50, Var_58);
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoodDetismPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[168])));
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[164])), Var_101);
    Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), BadDetismPieces_16, Var_90);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[158])), Var_89);
    Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcColonPieces_22, Var_82);
    Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[15])), Var_81);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_10, &ProcContext_25);
    {
      Spec_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Spec_26, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.check_io_state_proc_detism\'/6"));
      MR_hl_field(0, Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, Spec_26, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(0, Spec_26, 3) = ((MR_Box) (ProcContext_25));
      MR_hl_field(0, Spec_26, 4) = ((MR_Box) (Pieces_24));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_28 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Spec_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
    }
  }
  else
    *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
}

static void MR_CALL 
check_hlds__det_report__check_function_semantics_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_bool succeeded;
  MR_Word PredArgModes_12;
  MR_Word FuncResultType_15;
  MR_Word TypeCtorInfo_35_35;
  MR_Word TypeCtorInfo_36_36;
  MR_Word PredArgTypes_13;
  MR_Word FuncArgTypes_14;
  MR_Word FuncArgModes_16;
  MR_Word Var_31;
  MR_Box conv0_FuncResultType_15;
  MR_Box conv1__FuncResultMode_17;

  Var_31 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_9);
  succeeded = (Var_31 == (MR_Integer) 1);
  if (succeeded)
  {
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_10, &PredArgModes_12);
    hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_9, &PredArgTypes_13);
    TypeCtorInfo_35_35 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_35_35, PredArgTypes_13, &FuncArgTypes_14, &conv0_FuncResultType_15);
    FuncResultType_15 = ((MR_Word) (conv0_FuncResultType_15));
    TypeCtorInfo_36_36 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
    parse_tree__prog_util__pred_args_to_func_args_3_p_0(TypeCtorInfo_36_36, PredArgModes_12, &FuncArgModes_16, &conv1__FuncResultMode_17);
    succeeded = check_hlds__mode_test__all_modes_are_fully_input_3_p_0(ModuleInfo_7, FuncArgTypes_14, FuncArgModes_16);
  }
  if (succeeded)
  {
    MR_Word InferredDetism_18;
    MR_Word CanFail_19;
    MR_Word NumSolns_20;
    MR_Word STATE_VARIABLE_Specs_32_32;

    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_10, &InferredDetism_18);
    parse_tree__prog_data__determinism_components_3_p_0(InferredDetism_18, &CanFail_19, &NumSolns_20);
    switch (NumSolns_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        {
          MR_Word MultiSolnSpec_21;
          MR_Word FuncContext_37;
          MR_Word InstVarSet_38;
          MR_Word PredId_39;
          MR_Word PredModePieces_41;
          MR_String InferredDetismStr_42;
          MR_Word MainPieces_43;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_Word Var_55;
          MR_Word Var_60;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Var_76;
          MR_Word Var_77;
          MR_Word Var_78;
          MR_Word Var_79;

          hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_10, &FuncContext_37);
          hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_10, &InstVarSet_38);
          PredId_39 = ((MR_Word) ((MR_hl_field(0, PredProcId_8, (MR_Integer) 0))));
          PredModePieces_41 = hlds__hlds_error_util__describe_one_pred_name_mode_8_f_0(ModuleInfo_7, (MR_Integer) 0, InstVarSet_38, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredId_39, PredArgModes_12);
          InferredDetismStr_42 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(InferredDetism_18);
          Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PredModePieces_41, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[9])));
          Var_54 = parse_tree__error_spec__color_as_subject_1_f_0(Var_55);
          {
            Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Var_65, 1) = ((MR_Box) (InferredDetismStr_42));
          }
          {
            Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
            MR_hl_field(1, Var_64, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
          }
          Var_63 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_64);
          Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
          Var_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[116])), Var_62);
          Var_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_54, Var_60);
          MainPieces_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[113])), Var_53);
          {
            Var_79 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_79, 0) = ((MR_Box) (MainPieces_43));
          }
          {
            Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
            MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[287])));
          }
          {
            Var_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Var_77, 0) = ((MR_Box) (FuncContext_37));
            MR_hl_field(2, Var_77, 1) = ((MR_Box) (Var_78));
          }
          {
            Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
            MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MultiSolnSpec_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, MultiSolnSpec_21, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.det_report.report_multisoln_func\'/5"));
            MR_hl_field(2, MultiSolnSpec_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, MultiSolnSpec_21, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(2, MultiSolnSpec_21, 3) = ((MR_Box) (Var_76));
          }
          {
            STATE_VARIABLE_Specs_32_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_Specs_32_32, 0) = ((MR_Box) (MultiSolnSpec_21));
            MR_hl_field(1, STATE_VARIABLE_Specs_32_32, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_29));
          }
        }
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_Specs_32_32 = STATE_VARIABLE_Specs_0_29;
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_Specs_32_32 = STATE_VARIABLE_Specs_0_29;
        break;
    }
    switch (CanFail_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Globals_22;
          MR_Word WarnCanFailFunction_23;
          MR_Word PredStatus_24;
          MR_Word Origin_25;
          MR_Word MaybeObsolete_26;
          MR_Word Var_34;

          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_22);
          libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 75, &WarnCanFailFunction_23);
          hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_9, &PredStatus_24);
          hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_9, &Origin_25);
          hlds__hlds_pred__pred_info_get_obsolete_in_favour_of_2_p_0(PredInfo_9, &MaybeObsolete_26);
          succeeded = (WarnCanFailFunction_23 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_34 = hlds__status__pred_status_defined_in_this_module_1_f_0(PredStatus_24);
            succeeded = (Var_34 == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Origin_25)) == (MR_Integer) 0);
              if (succeeded)
                succeeded = (MaybeObsolete_26 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if (succeeded)
          {
            MR_Word CanFailSpec_28;

            CanFailSpec_28 = check_hlds__det_report__report_can_fail_func_6_f_0(ModuleInfo_7, PredProcId_8, PredInfo_9, ProcInfo_10, FuncResultType_15, InferredDetism_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_30 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (CanFailSpec_28));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_32_32));
            }
          }
          else
            *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_32_32;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_32_32;
        break;
    }
  }
  else
    *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
}

static MR_Word MR_CALL 
check_hlds__det_report__report_can_fail_func_6_f_0(
  MR_Word ModuleInfo_8,
  MR_Word PredProcId_9,
  MR_Word PredInfo_10,
  MR_Word ProcInfo_11,
  MR_Word ResultType0_12,
  MR_Word InferredDetism_13)
{
  MR_Word Spec_14;
  MR_Word FuncContext_15;
  MR_Word PredId_16;
  MR_Word PredNamePieces_18;
  MR_Word MaxSolns_20;
  MR_Word ProposedDetism_21;
  MR_String InferredDetismStr_22;
  MR_String ProposedDetismStr_23;
  MR_Word TypeVarSet_24;
  MR_Word InstVarSet_25;
  MR_Word ResultType_26;
  MR_Word ResultTypePieces_28;
  MR_Word NewResultType_29;
  MR_Word NewResultTypePieces_30;
  MR_Word Pieces_31;
  MR_Word Var_39;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_67;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_Word Var_75;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_93;
  MR_Word Var_19;

  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_11, &FuncContext_15);
  PredId_16 = ((MR_Word) ((MR_hl_field(0, PredProcId_9, (MR_Integer) 0))));
  PredNamePieces_18 = hlds__hlds_error_util__describe_unqual_pred_name_2_f_0(ModuleInfo_8, PredId_16);
  parse_tree__prog_data__determinism_components_3_p_0(InferredDetism_13, &Var_19, &MaxSolns_20);
  parse_tree__prog_data__determinism_components_3_p_1(&ProposedDetism_21, (MR_Integer) 1, MaxSolns_20);
  InferredDetismStr_22 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(InferredDetism_13);
  ProposedDetismStr_23 = parse_tree__parse_tree_out_misc__mercury_det_to_string_1_f_0(ProposedDetism_21);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(PredInfo_10, &TypeVarSet_24);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_11, &InstVarSet_25);
  parse_tree__prog_type__strip_module_names_from_type_4_p_0((MR_Integer) 1, (MR_Integer) 1, ResultType0_12, &ResultType_26);
  ResultTypePieces_28 = parse_tree__error_type_util__type_to_pieces_6_f_0(TypeVarSet_24, InstVarSet_25, (MR_Integer) 0, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), ResultType_26);
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (ResultType_26));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    NewResultType_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, NewResultType_29, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_3[3]));
    MR_hl_field(1, NewResultType_29, 1) = ((MR_Box) (Var_39));
    MR_hl_field(1, NewResultType_29, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  NewResultTypePieces_30 = parse_tree__error_type_util__type_to_pieces_6_f_0(TypeVarSet_24, InstVarSet_25, (MR_Integer) 0, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), NewResultType_29);
  Var_49 = parse_tree__error_spec__color_as_subject_1_f_0(PredNamePieces_18);
  Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[136])));
  {
    Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_63, 1) = ((MR_Box) (InferredDetismStr_22));
  }
  {
    Var_79 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_79, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_79, 1) = ((MR_Box) (ProposedDetismStr_23));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (Var_79));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[144])));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[141])));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_78));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[140])));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (Var_63));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[139])));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[138])));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Var_63));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[137])));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_62));
  }
  Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NewResultTypePieces_30, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[147])));
  Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[146])), Var_93);
  Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ResultTypePieces_28, Var_88);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_59, Var_87);
  Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, Var_58);
  Var_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_50);
  Pieces_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[134])), Var_48);
  {
    Spec_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Spec_14, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.det_report.report_can_fail_func\'/6"));
    MR_hl_field(0, Spec_14, 1) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(0, Spec_14, 2) = ((MR_Box) ((MR_Unsigned) 68U));
    MR_hl_field(0, Spec_14, 3) = ((MR_Box) (FuncContext_15));
    MR_hl_field(0, Spec_14, 4) = ((MR_Box) (Pieces_31));
  }
  return Spec_14;
}

static void MR_CALL 
check_hlds__det_report__check_determinism_if_pred_is_main_4_p_0(
  MR_Word PredInfo_5,
  MR_Word ProcInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  MR_bool succeeded;
  MR_Word MaybeDetism_8;
  MR_String Var_20;
  MR_Word Var_21;
  MR_Integer Var_22;

  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_6, &MaybeDetism_8);
  Var_20 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_5);
  succeeded = (strcmp(Var_20, (MR_String) "main") == 0);
  if (succeeded)
  {
    Var_21 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(PredInfo_5);
    Var_22 = (MR_Integer) (Var_21);
    succeeded = (Var_22 == (MR_Integer) 2);
  }
  if (succeeded)
  {
    MR_Word ProcContext_11;
    MR_Word STATE_VARIABLE_Specs_62_62;

    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_6, &ProcContext_11);
    succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_5);
    if (succeeded)
      STATE_VARIABLE_Specs_62_62 = STATE_VARIABLE_Specs_0_18;
    else
    {
      MR_Word ExportPieces_12;
      MR_Word ExportSpec_13;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_34;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_45;
      MR_Word Var_50;
      MR_Word Var_51;

      Var_31 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[85])));
      Var_40 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[89])));
      Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[93])));
      Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
      Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[91])), Var_50);
      Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_45);
      Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[87])), Var_39);
      Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_34);
      ExportPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[73])), Var_30);
      {
        ExportSpec_13 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ExportSpec_13, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.check_determinism_if_pred_is_main\'/4"));
        MR_hl_field(0, ExportSpec_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, ExportSpec_13, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(0, ExportSpec_13, 3) = ((MR_Box) (ProcContext_11));
        MR_hl_field(0, ExportSpec_13, 4) = ((MR_Box) (ExportPieces_12));
      }
      {
        STATE_VARIABLE_Specs_62_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_Specs_62_62, 0) = ((MR_Box) (ExportSpec_13));
        MR_hl_field(1, STATE_VARIABLE_Specs_62_62, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_18));
      }
    }
    if ((MaybeDetism_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word DetismPieces_14;
      MR_Word DetismSpec_15;
      MR_Word Var_67;
      MR_Word Var_68;
      MR_Word Var_71;
      MR_Word Var_76;
      MR_Word Var_77;
      MR_Word Var_82;
      MR_Word Var_87;
      MR_Word Var_88;

      Var_68 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[85])));
      Var_77 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[97])));
      Var_88 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[99])));
      Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_88, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
      Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[91])), Var_87);
      Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_77, Var_82);
      Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[95])), Var_76);
      Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_68, Var_71);
      DetismPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[73])), Var_67);
      {
        DetismSpec_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, DetismSpec_15, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.check_determinism_if_pred_is_main\'/4"));
        MR_hl_field(0, DetismSpec_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, DetismSpec_15, 2) = ((MR_Box) ((MR_Unsigned) 68U));
        MR_hl_field(0, DetismSpec_15, 3) = ((MR_Box) (ProcContext_11));
        MR_hl_field(0, DetismSpec_15, 4) = ((MR_Box) (DetismPieces_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_19 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DetismSpec_15));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_62_62));
      }
    }
    else
    {
      MR_Word DeclaredDetism_16 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_8, (MR_Integer) 0))));

      switch (DeclaredDetism_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 4:
          *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_62_62;
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 2:
        case (MR_Integer) 3:
        case (MR_Integer) 1:
          {
            MR_String DetismStr_17;
            MR_Word Var_104;
            MR_Word Var_105;
            MR_Word Var_108;
            MR_Word Var_113;
            MR_Word Var_114;
            MR_Word Var_119;
            MR_Word Var_124;
            MR_Word Var_125;
            MR_Word Var_133;
            MR_Word Var_138;
            MR_Word Var_139;
            MR_Word Var_140;
            MR_Word Var_141;
            MR_Word DetismPieces_153;
            MR_Word DetismSpec_154;

            DetismStr_17 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(DeclaredDetism_16);
            Var_105 = parse_tree__error_spec__color_as_subject_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[85])));
            Var_114 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[103])));
            Var_125 = parse_tree__error_spec__color_as_correct_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[109])));
            {
              Var_141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_141, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, Var_141, 1) = ((MR_Box) (DetismStr_17));
            }
            {
              Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_140, 0) = ((MR_Box) (Var_141));
              MR_hl_field(1, Var_140, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
            }
            Var_139 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_140);
            Var_138 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_139, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
            Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[111])), Var_138);
            Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_125, Var_133);
            Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[105])), Var_124);
            Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, Var_119);
            Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[101])), Var_113);
            Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_105, Var_108);
            DetismPieces_153 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[73])), Var_104);
            {
              DetismSpec_154 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, DetismSpec_154, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.check_determinism_if_pred_is_main\'/4"));
              MR_hl_field(0, DetismSpec_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, DetismSpec_154, 2) = ((MR_Box) ((MR_Unsigned) 68U));
              MR_hl_field(0, DetismSpec_154, 3) = ((MR_Box) (ProcContext_11));
              MR_hl_field(0, DetismSpec_154, 4) = ((MR_Box) (DetismPieces_153));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_19 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (DetismSpec_154));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_62_62));
            }
          }
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_62_62;
          break;
      }
    }
  }
  else
    *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
}

static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_for_eval_method_3_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_report__check_determinism_for_eval_method_3_p_0_1(
  void * env_ptr_arg)
{
  struct check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0_s * env_ptr = (struct check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0_s *) (env_ptr_arg);

  *((env_ptr)->check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__conv0_Detism_4));
  ((env_ptr)->check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__cont)((env_ptr)->check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__cont_env_ptr);
}

static void MR_CALL 
check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0_s env;

  (env).check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
  (env).check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__cont = cont;
  (env).check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_Box closure = closure_arg;

    check_hlds__det_report__get_valid_determinisms_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), &(env).check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2_env_0__conv0_Detism_4, check_hlds__det_report__check_determinism_for_eval_method_3_p_0_1, &env);
  }
}

static void MR_CALL 
check_hlds__det_report__check_determinism_for_eval_method_3_p_0(
  MR_Word ProcInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_bool succeeded;
  MR_Word InferredDetism_6;
  MR_Word EvalMethod_7;
  MR_Word TabledMethod_8;

  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_4, &InferredDetism_6);
  hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_4, &EvalMethod_7);
  succeeded = (EvalMethod_7 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TabledMethod_8 = ((MR_Word) ((MR_hl_field(1, EvalMethod_7, (MR_Integer) 0))));
    switch (MR_tag((MR_Word) TabledMethod_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word MaxSoln_101;
          MR_Word Var_100;

          parse_tree__prog_data__determinism_components_3_p_0(InferredDetism_6, &Var_100, &MaxSoln_101);
          succeeded = (MaxSoln_101 == (MR_Integer) 0);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140check_hlds.det_report.valid_determinism_for_tabled_eval_method\'/2", (MR_String) "called after tabling phase");
            return;
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        if (((MR_Unsigned) 243U & (((MR_Integer) 1 << InferredDetism_6))))
          succeeded = MR_TRUE;
        else
          succeeded = MR_FALSE;
        break;
    }
  }
  if (succeeded)
  {
    MR_String PragmaName_9;
    MR_String InferredDetismStr_10;
    MR_Word Context_11;
    MR_Word MainPieces_12;
    MR_Word Detisms_13;
    MR_Word DetismStrs_14;
    MR_Word SortedDetismStrs_15;
    MR_Word DetismPieces_16;
    MR_Word VerbosePieces_17;
    MR_Word ValidSpec_18;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_34;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_45;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_61;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_String Var_74;
    MR_Word Var_77;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Box conv2_Var_74;

    PragmaName_9 = parse_tree__parse_tree_out_misc__tabled_eval_method_to_pragma_name_1_f_0(TabledMethod_8);
    InferredDetismStr_10 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(InferredDetism_6);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_4, &Context_11);
    {
      Var_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_29, 0) = ((MR_Box) ((MR_Unsigned) 33U));
      MR_hl_field(3, Var_29, 1) = ((MR_Box) (PragmaName_9));
    }
    {
      Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(1, Var_28, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[75])));
    }
    Var_27 = parse_tree__error_spec__color_as_subject_1_f_0(Var_28);
    Var_40 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[79])));
    {
      Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_53, 1) = ((MR_Box) (InferredDetismStr_10));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (Var_53));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
    }
    Var_51 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_52);
    Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_51, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[81])), Var_50);
    Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_40, Var_45);
    Var_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[77])), Var_39);
    Var_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_27, Var_34);
    MainPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[73])), Var_26);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_61, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_5[3]));
      MR_hl_field(0, Var_61, 1) = ((MR_Box) (check_hlds__det_report__check_determinism_for_eval_method_3_p_0_2));
      MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_61, 3) = ((MR_Box) (TabledMethod_8));
    }
    mercury__solutions__solutions_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), Var_61, &Detisms_13);
    DetismStrs_14 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__det_report_scalar_common_1[4]), Detisms_13);
    mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetismStrs_14, &SortedDetismStrs_15);
    DetismPieces_16 = parse_tree__error_spec__fixed_list_to_color_pieces_4_f_0((MR_Integer) 1, (MR_String) "and", (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])), SortedDetismStrs_15);
    conv2_Var_74 = parse_tree__error_spec__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Detisms_13, ((MR_Box) ((MR_String) "determinism")), ((MR_Box) ((MR_String) "determinisms")));
    Var_74 = ((MR_String) (conv2_Var_74));
    {
      Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_73, 1) = ((MR_Box) (Var_74));
    }
    {
      Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_77, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[8])));
      MR_hl_field(1, Var_77, 1) = ((MR_Box) (DetismPieces_16));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[82])));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_72));
    }
    VerbosePieces_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_69, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
    {
      Var_89 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_89, 0) = ((MR_Box) (MainPieces_12));
    }
    {
      Var_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_91, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(2, Var_91, 1) = ((MR_Box) (VerbosePieces_17));
    }
    {
      Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
      MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_90));
    }
    {
      Var_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_87, 0) = ((MR_Box) (Context_11));
      MR_hl_field(2, Var_87, 1) = ((MR_Box) (Var_88));
    }
    {
      Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_86, 0) = ((MR_Box) (Var_87));
      MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ValidSpec_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, ValidSpec_18, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.check_determinism_for_eval_method\'/3"));
      MR_hl_field(2, ValidSpec_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(2, ValidSpec_18, 2) = ((MR_Box) ((MR_Unsigned) 68U));
      MR_hl_field(2, ValidSpec_18, 3) = ((MR_Box) (Var_86));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_20 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ValidSpec_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
    }
  }
  else
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
}

static void MR_CALL 
check_hlds__det_report__check_for_too_tight_or_loose_declared_determinism_7_p_0(
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_37,
  MR_Word * STATE_VARIABLE_ModuleInfo_38,
  MR_Word STATE_VARIABLE_Specs_0_39,
  MR_Word * STATE_VARIABLE_Specs_40)
{
  MR_bool succeeded;
  MR_Word MaybeDetism_13;
  MR_Word InferredDetism_14;

  hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_10, &MaybeDetism_13);
  hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_10, &InferredDetism_14);
  if ((MaybeDetism_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
    *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
  }
  else
  {
    MR_Word DeclaredDetism_15 = ((MR_Word) ((MR_hl_field(1, MaybeDetism_13, (MR_Integer) 0))));
    MR_Word Cmp_16;

    parse_tree__prog_detism__compare_determinisms_3_p_0(DeclaredDetism_15, InferredDetism_14, &Cmp_16);
    switch (Cmp_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        {
          MR_Word Goal_24;
          MR_Word VarTable_25;
          MR_Word InstMap0_26;
          MR_Word DetInfo0_27;
          MR_Word DetInfo_28;
          MR_Word GoalMsgs_29;
          MR_Word CseMsgs_30;
          MR_Word DetailMsgs_31;
          MR_Word ReasonPieces_32;
          MR_Word Var_83;
          MR_Word Var_84;
          MR_Word ReportMsg_86;
          MR_Word ReportSpec_87;
          MR_Word MsgGroups_91;
          MR_Word SortedMsgGroups_92;
          MR_Word GoalExpr_93;
          MR_Word GoalInfo_94;
          MR_Word Actual_95;
          MR_Word CompareResult_96;
          MR_Word CseNoPullContexts_97;
          MR_Word SortedCseNoPullContexts_98;

          hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_10, &Goal_24);
          hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_10, &VarTable_25);
          hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_37, ProcInfo_10, &InstMap0_26);
          check_hlds__det_util__det_info_init_6_p_0(STATE_VARIABLE_ModuleInfo_0_37, PredProcId_8, VarTable_25, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_27);
          GoalExpr_93 = ((MR_Word) ((MR_hl_field(0, Goal_24, (MR_Integer) 0))));
          GoalInfo_94 = ((MR_Word) ((MR_hl_field(0, Goal_24, (MR_Integer) 1))));
          Actual_95 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_94);
          parse_tree__prog_detism__compare_determinisms_3_p_0(DeclaredDetism_15, Actual_95, &CompareResult_96);
          switch (CompareResult_96) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 0:
              check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_93, GoalInfo_94, InstMap0_26, DeclaredDetism_15, Actual_95, (MR_Word) ((MR_Unsigned) 0U), DetInfo0_27, &DetInfo_28, &MsgGroups_91);
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                MsgGroups_91 = (MR_Word) ((MR_Unsigned) 0U);
                DetInfo_28 = DetInfo0_27;
              }
              break;
          }
          parse_tree__error_sort__sort_error_msg_groups_2_p_0(MsgGroups_91, &SortedMsgGroups_92);
          GoalMsgs_29 = parse_tree__error_sort__flatten_error_msg_groups_1_f_0(SortedMsgGroups_92);
          check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_28, STATE_VARIABLE_ModuleInfo_38);
          hlds__hlds_pred__proc_info_get_cse_nopull_contexts_2_p_0(ProcInfo_10, &CseNoPullContexts_97);
          mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), CseNoPullContexts_97, &SortedCseNoPullContexts_98);
          if ((SortedCseNoPullContexts_98 == (MR_Word) ((MR_Unsigned) 0U)))
            CseMsgs_30 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word FirstNoPullContext_99 = ((MR_Word) ((MR_hl_field(1, SortedCseNoPullContexts_98, (MR_Integer) 0))));
            MR_Word Var_101;

            {
              Var_101 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_101, 0) = ((MR_Box) (FirstNoPullContext_99));
              MR_hl_field(0, Var_101, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[71])));
            }
            {
              CseMsgs_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, CseMsgs_30, 0) = ((MR_Box) (Var_101));
              MR_hl_field(1, CseMsgs_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          DetailMsgs_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), GoalMsgs_29, CseMsgs_30);
          if ((DetailMsgs_31 == (MR_Word) ((MR_Unsigned) 0U)))
            ReasonPieces_32 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word Var_89 = ((MR_Word) ((MR_hl_field(1, DetailMsgs_31, (MR_Integer) 1))));

            if ((Var_89 == (MR_Word) ((MR_Unsigned) 0U)))
              ReasonPieces_32 = (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[30]));
            else
              ReasonPieces_32 = (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[34]));
          }
          check_hlds__det_report__report_determinism_problem_8_p_0(*STATE_VARIABLE_ModuleInfo_38, PredProcId_8, (MR_String) "Error", (MR_String) "is not satisfied", ReasonPieces_32, DeclaredDetism_15, InferredDetism_14, &ReportMsg_86);
          Var_84 = parse_tree__error_util__start_each_msg_with_blank_line_1_f_0(DetailMsgs_31);
          {
            Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_83, 0) = ((MR_Box) (ReportMsg_86));
            MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
          }
          {
            ReportSpec_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, ReportSpec_87, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.check_for_too_tight_or_loose_declared_determinism\'/7"));
            MR_hl_field(2, ReportSpec_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(2, ReportSpec_87, 2) = ((MR_Box) ((MR_Unsigned) 68U));
            MR_hl_field(2, ReportSpec_87, 3) = ((MR_Box) (Var_83));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_40 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (ReportSpec_87));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Globals_17;
          MR_Word ShouldIssueWarning_18;
          MR_Word WarnAboutInferredErroneous_19;
          MR_Word Markers_20;
          MR_Word Status_21;
          MR_Word Var_46;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_45;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_37, &Globals_17);
          libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 11, &ShouldIssueWarning_18);
          libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 12, &WarnAboutInferredErroneous_19);
          hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_9, &Markers_20);
          succeeded = (ShouldIssueWarning_18 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_43 = (MR_Integer) 12;
            succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, Var_43);
            succeeded = !(succeeded);
            if (succeeded)
            {
              Var_44 = (MR_Integer) 0;
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, Var_44);
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_45 = (MR_Integer) 5;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, Var_45);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_9);
                  succeeded = !(succeeded);
                  if (succeeded)
                  {
                    switch (WarnAboutInferredErroneous_19) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        succeeded = (InferredDetism_14 != (MR_Integer) 6);
                        break;
                      case (MR_Integer) 1:
                        succeeded = MR_TRUE;
                        break;
                    }
                    if (succeeded)
                    {
                      hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_9, &Status_21);
                      Var_46 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_21);
                      succeeded = (Var_46 == (MR_Integer) 1);
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word ReportMsg_22;
            MR_Word ReportSpec_23;
            MR_Word Var_53;

            check_hlds__det_report__report_determinism_problem_8_p_0(STATE_VARIABLE_ModuleInfo_0_37, PredProcId_8, (MR_String) "Warning", (MR_String) "could be tighter", (MR_Word) ((MR_Unsigned) 0U), DeclaredDetism_15, InferredDetism_14, &ReportMsg_22);
            {
              Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_53, 0) = ((MR_Box) (ReportMsg_22));
              MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ReportSpec_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, ReportSpec_23, 0) = ((MR_Box) ((MR_String) "predicate \140check_hlds.det_report.check_for_too_tight_or_loose_declared_determinism\'/7"));
              MR_hl_field(2, ReportSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(2, ReportSpec_23, 2) = ((MR_Box) ((MR_Unsigned) 68U));
              MR_hl_field(2, ReportSpec_23, 3) = ((MR_Box) (Var_53));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_40 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (ReportSpec_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_39));
            }
          }
          else
            *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
          *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_ModuleInfo_38 = STATE_VARIABLE_ModuleInfo_0_37;
          *STATE_VARIABLE_Specs_40 = STATE_VARIABLE_Specs_0_39;
        }
        break;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_204;

  conv0_LambdaHeadVar__2_204 = check_hlds__det_report__IntroducedFrom__func__det_diagnose_goal_expr__1171__1_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_204));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
  MR_Word tscc_proc_1_input_1_Goal_8,
  MR_Word tscc_proc_1_input_2_InstMap0_9,
  MR_Word tscc_proc_1_input_3_Desired_10,
  MR_Word tscc_proc_1_input_4_SwitchContexts_11,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19,
  MR_Word * tscc_output_ptr_2_MsgGroups_13)
{
  MR_Word tscc_proc_2_input_1_GoalExpr_10;
  MR_Word tscc_proc_2_input_2_GoalInfo_11;
  MR_Word tscc_proc_2_input_3_InstMap0_12;
  MR_Word tscc_proc_2_input_4_Desired_13;
  MR_Word tscc_proc_2_input_5_Actual_14;
  MR_Word tscc_proc_2_input_6_SwitchContexts_15;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131;
  MR_Word tscc_output_1_STATE_VARIABLE_DetInfo_19;
  MR_Word tscc_output_2_MsgGroups_13;

  // The code for TSCC PROC 1: pred check_hlds.det_report.det_diagnose_goal/7-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.det_report.det_diagnose_goal/7-0
  ;
  // proc 2 in TSCC: pred check_hlds.det_report.det_diagnose_goal_expr/9-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Goal_8 = tscc_proc_1_input_1_Goal_8;
    MR_Word InstMap0_9 = tscc_proc_1_input_2_InstMap0_9;
    MR_Word Desired_10 = tscc_proc_1_input_3_Desired_10;
    MR_Word SwitchContexts_11 = tscc_proc_1_input_4_SwitchContexts_11;
    MR_Word STATE_VARIABLE_DetInfo_0_18 = tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;
    MR_Word STATE_VARIABLE_DetInfo_19;
    MR_Word MsgGroups_13;
    MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 1))));
    MR_Word Actual_16;
    MR_Word CompareResult_17;

    Actual_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_15);
    parse_tree__prog_detism__compare_determinisms_3_p_0(Desired_10, Actual_16, &CompareResult_17);
    switch (CompareResult_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10 = GoalExpr_14;
          MR_Word next_value_of_tscc_proc_2_input_2_GoalInfo_11 = GoalInfo_15;
          MR_Word next_value_of_tscc_proc_2_input_3_InstMap0_12 = InstMap0_9;
          MR_Word next_value_of_tscc_proc_2_input_4_Desired_13 = Desired_10;
          MR_Word next_value_of_tscc_proc_2_input_5_Actual_14 = Actual_16;
          MR_Word next_value_of_tscc_proc_2_input_6_SwitchContexts_15 = SwitchContexts_11;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131 = STATE_VARIABLE_DetInfo_0_18;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
          tscc_proc_2_input_2_GoalInfo_11 = next_value_of_tscc_proc_2_input_2_GoalInfo_11;
          tscc_proc_2_input_3_InstMap0_12 = next_value_of_tscc_proc_2_input_3_InstMap0_12;
          tscc_proc_2_input_4_Desired_13 = next_value_of_tscc_proc_2_input_4_Desired_13;
          tscc_proc_2_input_5_Actual_14 = next_value_of_tscc_proc_2_input_5_Actual_14;
          tscc_proc_2_input_6_SwitchContexts_15 = next_value_of_tscc_proc_2_input_6_SwitchContexts_15;
          tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MsgGroups_13 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_0_18;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_19;
    tscc_output_2_MsgGroups_13 = MsgGroups_13;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word GoalExpr_10 = tscc_proc_2_input_1_GoalExpr_10;
    MR_Word GoalInfo_11 = tscc_proc_2_input_2_GoalInfo_11;
    MR_Word InstMap0_12 = tscc_proc_2_input_3_InstMap0_12;
    MR_Word Desired_13 = tscc_proc_2_input_4_Desired_13;
    MR_Word Actual_14 = tscc_proc_2_input_5_Actual_14;
    MR_Word SwitchContexts_15 = tscc_proc_2_input_6_SwitchContexts_15;
    MR_Word STATE_VARIABLE_DetInfo_0_131 = tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131;
    MR_Word STATE_VARIABLE_DetInfo_132;
    MR_Word MsgGroups_17;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DesiredCanFail_106;
          MR_Word ActualCanFail_107;
          MR_Word ActualSolns_108;
          MR_Word DesiredSolns_310;

          parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &DesiredCanFail_106, &DesiredSolns_310);
          parse_tree__prog_data__determinism_components_3_p_0(Actual_14, &ActualCanFail_107, &ActualSolns_108);
          succeeded = (DesiredCanFail_106 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (ActualCanFail_107 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_258;
            MR_Word Var_259;
            MR_Word Context_300;

            Context_300 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            {
              Var_259 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_259, 0) = ((MR_Box) (Context_300));
              MR_hl_field(0, Var_259, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[191])));
            }
            {
              Var_258 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_258, 0) = ((MR_Box) (Var_259));
              MR_hl_field(0, Var_258, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_258));
              MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            succeeded = (DesiredSolns_310 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (ActualSolns_108 != (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word Var_267;
              MR_Word Var_268;
              MR_Word Context_302;

              Context_302 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              {
                Var_268 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_268, 0) = ((MR_Box) (Context_302));
                MR_hl_field(0, Var_268, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[193])));
              }
              {
                Var_267 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_267, 0) = ((MR_Box) (Var_268));
                MR_hl_field(0, Var_267, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_267));
                MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
              MsgGroups_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 0))));
          MR_Word RHS_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 1))));
          MR_Word UnifyContext_22 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 4))));
          MR_Word Context_23;
          MR_Word SurroundingContextPieces_24;
          MR_Word GoalPieces_25;
          MR_Word ProblemPieces_26;
          MR_Word Pieces_27;
          MR_Word Var_135;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_141;

          Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          check_hlds__det_report__det_report_unify_context_8_p_0((MR_Integer) 0, (MR_Integer) 0, UnifyContext_22, STATE_VARIABLE_DetInfo_0_131, LHS_18, RHS_19, &SurroundingContextPieces_24, &GoalPieces_25);
          check_hlds__det_report__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_26);
          Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_25, ProblemPieces_26);
          Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[194])), Var_139);
          Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SurroundingContextPieces_24, Var_135);
          {
            Var_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_141, 0) = ((MR_Box) (Context_23));
            MR_hl_field(0, Var_141, 1) = ((MR_Box) (Pieces_27));
          }
          {
            Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_140, 0) = ((MR_Box) (Var_141));
            MR_hl_field(0, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_140));
            MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 0))));
          MR_Integer ProcId_29 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 1))));
          MR_Word CallContext_32 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 4))));
          MR_Word AnyUnifyPieces_34;
          MR_Word Var_144;
          MR_Word Var_145;
          MR_Word Var_149;
          MR_Word Var_150;
          MR_Word Var_151;
          MR_Word Context_278;
          MR_Word SurroundingContextPieces_279;
          MR_Word GoalPieces_280;
          MR_Word ProblemPieces_281;
          MR_Word Pieces_282;

          Context_278 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          check_hlds__det_report__det_report_call_context_7_p_0(CallContext_32, STATE_VARIABLE_DetInfo_0_131, PredId_28, ProcId_29, &AnyUnifyPieces_34, &SurroundingContextPieces_279, &GoalPieces_280);
          check_hlds__det_report__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_281);
          Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_280, ProblemPieces_281);
          Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[194])), Var_149);
          Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SurroundingContextPieces_279, Var_145);
          Pieces_282 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AnyUnifyPieces_34, Var_144);
          {
            Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_151, 0) = ((MR_Box) (Context_278));
            MR_hl_field(0, Var_151, 1) = ((MR_Box) (Pieces_282));
          }
          {
            Var_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_150, 0) = ((MR_Box) (Var_151));
            MR_hl_field(0, Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_150));
            MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
              MR_Word VarTable_40;
              MR_Word VarNameSrc_41;
              MR_Word GenericCallPieces_42;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Word Context_283;
              MR_Word GoalPieces_284;
              MR_Word ProblemPieces_285;
              MR_Word Pieces_286;

              Context_283 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_131, &VarTable_40);
              {
                VarNameSrc_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, VarNameSrc_41, 0) = ((MR_Box) (VarTable_40));
              }
              GenericCallPieces_42 = hlds__hlds_out__hlds_out_util__generic_call_to_pieces_3_f_0((MR_Integer) 1, VarNameSrc_41, GenericCall_35);
              GoalPieces_284 = parse_tree__error_spec__color_as_subject_1_f_0(GenericCallPieces_42);
              check_hlds__det_report__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_285);
              Pieces_286 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_284, ProblemPieces_285);
              {
                Var_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_156, 0) = ((MR_Box) (Context_283));
                MR_hl_field(0, Var_156, 1) = ((MR_Box) (Pieces_286));
              }
              {
                Var_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_155, 0) = ((MR_Box) (Var_156));
                MR_hl_field(0, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_155));
                MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String DesiredStr_50;
              MR_Word Var_161;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Var_172;
              MR_Word Var_173;
              MR_Word Context_287;
              MR_Word Pieces_288;

              Context_287 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              DesiredStr_50 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Desired_13);
              {
                Var_165 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_165, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_165, 1) = ((MR_Box) (DesiredStr_50));
              }
              {
                Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
                MR_hl_field(1, Var_164, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[147])));
              }
              {
                Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_161, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[180])));
                MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_164));
              }
              {
                Pieces_288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_288, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[179])));
                MR_hl_field(1, Pieces_288, 1) = ((MR_Box) (Var_161));
              }
              {
                Var_173 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_173, 0) = ((MR_Box) (Context_287));
                MR_hl_field(0, Var_173, 1) = ((MR_Box) (Pieces_288));
              }
              {
                Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_172, 0) = ((MR_Box) (Var_173));
                MR_hl_field(0, Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_172));
                MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));

              check_hlds__det_report__det_diagnose_conj_7_p_0(Goals_52, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_132, &MsgGroups_17);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word DisjunctsWithSolnSet_53;
              MR_Word SubMsgGroups_54;
              MR_Word DesSolns_56;
              MR_Word DisjunctsWithSoln_57;
              MR_Word Var_178;
              MR_Word Goals_290 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
              MR_Word Var_55;
              MR_Word FirstContext_58;
              MR_Word LaterContexts_59;

              Var_178 = mercury__bag__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
              check_hlds__det_report__det_diagnose_disj_10_p_0(Goals_290, InstMap0_12, Desired_13, Actual_14, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_132, Var_178, &DisjunctsWithSolnSet_53, &SubMsgGroups_54);
              parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_55, &DesSolns_56);
              mercury__bag__to_list_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), DisjunctsWithSolnSet_53, &DisjunctsWithSoln_57);
              succeeded = (DesSolns_56 != (MR_Integer) 3);
              if (succeeded)
              {
                succeeded = (DesSolns_56 != (MR_Integer) 2);
                if (succeeded)
                {
                  succeeded = (DisjunctsWithSoln_57 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    FirstContext_58 = ((MR_Word) ((MR_hl_field(1, DisjunctsWithSoln_57, (MR_Integer) 0))));
                    LaterContexts_59 = ((MR_Word) ((MR_hl_field(1, DisjunctsWithSoln_57, (MR_Integer) 1))));
                    succeeded = (LaterContexts_59 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word NestingPieces_62;
                MR_Word FirstMsg_64;
                MR_Word LaterDisjPieces_65;
                MR_Word MakeLaterMsgs_66;
                MR_Word SortedLaterContexts_69;
                MR_Word LaterMsgs_70;
                MR_Word DisjMsgGroup_71;
                MR_Word Var_189;
                MR_Word Var_194;
                MR_Word Var_195;

                check_hlds__det_report__det_diagnose_switch_context_3_p_0(STATE_VARIABLE_DetInfo_132, SwitchContexts_15, &NestingPieces_62);
                Var_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_62, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[185])));
                {
                  FirstMsg_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, FirstMsg_64, 0) = ((MR_Box) (FirstContext_58));
                  MR_hl_field(0, FirstMsg_64, 1) = ((MR_Box) (Var_189));
                }
                Var_195 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[189])));
                Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_195, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
                LaterDisjPieces_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[187])), Var_194);
                {
                  MakeLaterMsgs_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MakeLaterMsgs_66, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_6[1]));
                  MR_hl_field(0, MakeLaterMsgs_66, 1) = ((MR_Box) (check_hlds__det_report__det_diagnose_goal_expr_9_p_0_1));
                  MR_hl_field(0, MakeLaterMsgs_66, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, MakeLaterMsgs_66, 3) = ((MR_Box) (LaterDisjPieces_65));
                }
                mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), LaterContexts_59, &SortedLaterContexts_69);
                LaterMsgs_70 = mercury__list__map_2_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), MakeLaterMsgs_66, SortedLaterContexts_69);
                {
                  DisjMsgGroup_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, DisjMsgGroup_71, 0) = ((MR_Box) (FirstMsg_64));
                  MR_hl_field(0, DisjMsgGroup_71, 1) = ((MR_Box) (LaterMsgs_70));
                }
                {
                  MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (DisjMsgGroup_71));
                  MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) (SubMsgGroups_54));
                }
              }
              else
                MsgGroups_17 = SubMsgGroups_54;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
              MR_Word SwitchCanFail_73 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word SwitchMsgGroups_87;
              MR_Word VarType_88;
              MR_Word VarTable_297;
              MR_Word SubMsgGroups_298;
              MR_Word Var_205;
              MR_Word Var_323;
              MR_Word Var_75;

              succeeded = (SwitchCanFail_73 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_205 = (MR_Integer) 1;
                parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_323, &Var_75);
                succeeded = (Var_205 == Var_323);
              }
              if (succeeded)
              {
                MR_String VarStr_76;
                MR_Word MaybeMissingInfo_77;
                MR_Word Component_85;
                MR_Word SwitchMsg_86;
                MR_Word Var_242;
                MR_Word Var_244;
                MR_Word Context_292;
                MR_Word NestingPieces_293;

                Context_292 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                check_hlds__det_report__find_missing_cons_ids_9_p_0(STATE_VARIABLE_DetInfo_0_131, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[4])), InstMap0_12, SwitchContexts_15, Var_72, Cases_74, &NestingPieces_293, &VarStr_76, &MaybeMissingInfo_77);
                if ((MaybeMissingInfo_77 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_224;
                  MR_Word Var_226;
                  MR_Word Var_229;
                  MR_Word Var_230;
                  MR_Word Var_232;
                  MR_Word Var_233;
                  MR_Word Var_241;
                  MR_Word NoCoverPieces_291;

                  {
                    Var_230 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_230, 0) = ((MR_Box) (VarStr_76));
                  }
                  {
                    Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_229, 0) = ((MR_Box) (Var_230));
                    MR_hl_field(1, Var_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_226, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[195])));
                    MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_229));
                  }
                  {
                    Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_224, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_226));
                  }
                  Var_233 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[196])));
                  Var_232 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_233, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
                  NoCoverPieces_291 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_224, Var_232);
                  Var_241 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_293, NoCoverPieces_291);
                  {
                    Component_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Component_85, 0) = ((MR_Box) (Var_241));
                  }
                }
                else
                {
                  MR_Word MissingInfo_78 = ((MR_Word) ((MR_hl_field(1, MaybeMissingInfo_77, (MR_Integer) 0))));
                  MR_Word MainPieces_81 = ((MR_Word) ((MR_hl_field(0, MissingInfo_78, (MR_Integer) 2))));
                  MR_Word VerbosePieces_82 = ((MR_Word) ((MR_hl_field(0, MissingInfo_78, (MR_Integer) 3))));
                  MR_Word SwitchOnPieces_83;
                  MR_Word Var_214;
                  MR_Word Var_215;
                  MR_Word Var_216;
                  MR_Word Var_222;

                  {
                    Var_216 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_216, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_216, 1) = ((MR_Box) (VarStr_76));
                  }
                  {
                    Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_215, 0) = ((MR_Box) (Var_216));
                    MR_hl_field(1, Var_215, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_214 = parse_tree__error_spec__color_as_subject_1_f_0(Var_215);
                  SwitchOnPieces_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[198])), Var_214);
                  Var_222 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_293, SwitchOnPieces_83);
                  check_hlds__det_report__append_prefix_and_maybe_verbose_6_p_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[5])), Var_222, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[200])), MainPieces_81, VerbosePieces_82, &Component_85);
                }
                {
                  Var_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_242, 0) = ((MR_Box) (Component_85));
                  MR_hl_field(1, Var_242, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  SwitchMsg_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, SwitchMsg_86, 0) = ((MR_Box) (Context_292));
                  MR_hl_field(2, SwitchMsg_86, 1) = ((MR_Box) (Var_242));
                }
                {
                  Var_244 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_244, 0) = ((MR_Box) (SwitchMsg_86));
                  MR_hl_field(0, Var_244, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  SwitchMsgGroups_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SwitchMsgGroups_87, 0) = ((MR_Box) (Var_244));
                  MR_hl_field(1, SwitchMsgGroups_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
                SwitchMsgGroups_87 = (MR_Word) ((MR_Unsigned) 0U);
              check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_131, &VarTable_297);
              parse_tree__var_table__lookup_var_type_3_p_0(VarTable_297, Var_72, &VarType_88);
              check_hlds__det_report__det_diagnose_switch_arms_9_p_0(Var_72, VarType_88, Cases_74, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_132, &SubMsgGroups_298);
              MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), SwitchMsgGroups_87, SubMsgGroups_298);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_110 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word SubGoalInfo_112 = ((MR_Word) ((MR_hl_field(0, SubGoal_110, (MR_Integer) 1))));
              MR_Word Internal_113;
              MR_Word InternalDesired_114;
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_8;
              MR_Word next_value_of_tscc_proc_1_input_2_InstMap0_9;
              MR_Word next_value_of_tscc_proc_1_input_3_Desired_10;
              MR_Word next_value_of_tscc_proc_1_input_4_SwitchContexts_11;
              MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;

              Internal_113 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_112);
              succeeded = (Actual_14 == Internal_113);
              if (succeeded)
                InternalDesired_114 = Desired_13;
              else
              {
                MR_Word CanFail_115;
                MR_Word Var_116;

                parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &CanFail_115, &Var_116);
                parse_tree__prog_data__determinism_components_3_p_1(&InternalDesired_114, CanFail_115, (MR_Integer) 3);
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_8 = SubGoal_110;
              next_value_of_tscc_proc_1_input_2_InstMap0_9 = InstMap0_12;
              next_value_of_tscc_proc_1_input_3_Desired_10 = InternalDesired_114;
              next_value_of_tscc_proc_1_input_4_SwitchContexts_11 = SwitchContexts_15;
              next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = STATE_VARIABLE_DetInfo_0_131;
              tscc_proc_1_input_1_Goal_8 = next_value_of_tscc_proc_1_input_1_Goal_8;
              tscc_proc_1_input_2_InstMap0_9 = next_value_of_tscc_proc_1_input_2_InstMap0_9;
              tscc_proc_1_input_3_Desired_10 = next_value_of_tscc_proc_1_input_3_Desired_10;
              tscc_proc_1_input_4_SwitchContexts_11 = next_value_of_tscc_proc_1_input_4_SwitchContexts_11;
              tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word Then_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word Else_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));
              MR_Word DesiredSolns_94;
              MR_Word CondInfo_96;
              MR_Word CondDetism_97;
              MR_Word CondSolns_99;
              MR_Word MsgGroupsCond_101;
              MR_Word InstMap1_102;
              MR_Word MsgGroupsThen_103;
              MR_Word MsgGroupsElse_104;
              MR_Word STATE_VARIABLE_DetInfo_249_249;
              MR_Word STATE_VARIABLE_DetInfo_250_250;
              MR_Word Var_252;
              MR_Word _DesiredCanFail_93;
              MR_Word _CondCanFail_98;

              parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &_DesiredCanFail_93, &DesiredSolns_94);
              CondInfo_96 = ((MR_Word) ((MR_hl_field(0, Cond_90, (MR_Integer) 1))));
              CondDetism_97 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondInfo_96);
              parse_tree__prog_data__determinism_components_3_p_0(CondDetism_97, &_CondCanFail_98, &CondSolns_99);
              succeeded = (CondSolns_99 == (MR_Integer) 3);
              if (succeeded)
                succeeded = (DesiredSolns_94 != (MR_Integer) 3);
              if (succeeded)
              {
                MR_Word DesiredCond_100;

                parse_tree__prog_data__determinism_components_3_p_1(&DesiredCond_100, (MR_Integer) 0, DesiredSolns_94);
                check_hlds__det_report__det_diagnose_goal_7_p_0(Cond_90, InstMap0_12, DesiredCond_100, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_249_249, &MsgGroupsCond_101);
              }
              else
              {
                MsgGroupsCond_101 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_DetInfo_249_249 = STATE_VARIABLE_DetInfo_0_131;
              }
              hlds__goal_util__update_instmap_3_p_0(Cond_90, InstMap0_12, &InstMap1_102);
              check_hlds__det_report__det_diagnose_goal_7_p_0(Then_91, InstMap1_102, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_249_249, &STATE_VARIABLE_DetInfo_250_250, &MsgGroupsThen_103);
              check_hlds__det_report__det_diagnose_goal_7_p_0(Else_92, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_250_250, &STATE_VARIABLE_DetInfo_132, &MsgGroupsElse_104);
              Var_252 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MsgGroupsThen_103, MsgGroupsElse_104);
              MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MsgGroupsCond_101, Var_252);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_117 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_117)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_report.det_diagnose_goal_expr\'/9", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_122 = ((MR_Word) ((MR_hl_field(1, ShortHand_117, (MR_Integer) 4))));
                    MR_Word OrElseGoals_123 = ((MR_Word) ((MR_hl_field(1, ShortHand_117, (MR_Integer) 5))));
                    MR_Word MainMsgGroups_125;
                    MR_Word OrElseMsgGroups_126;
                    MR_Word STATE_VARIABLE_DetInfo_273_273;

                    check_hlds__det_report__det_diagnose_goal_7_p_0(MainGoal_122, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_273_273, &MainMsgGroups_125);
                    check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(OrElseGoals_123, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_273_273, &STATE_VARIABLE_DetInfo_132, &OrElseMsgGroups_126);
                    MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MainMsgGroups_125, OrElseMsgGroups_126);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_311 = ((MR_Word) ((MR_hl_field(2, ShortHand_117, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_8 = SubGoal_311;
                    MR_Word next_value_of_tscc_proc_1_input_2_InstMap0_9 = InstMap0_12;
                    MR_Word next_value_of_tscc_proc_1_input_3_Desired_10 = Desired_13;
                    MR_Word next_value_of_tscc_proc_1_input_4_SwitchContexts_11 = SwitchContexts_15;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = STATE_VARIABLE_DetInfo_0_131;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_8 = next_value_of_tscc_proc_1_input_1_Goal_8;
                    tscc_proc_1_input_2_InstMap0_9 = next_value_of_tscc_proc_1_input_2_InstMap0_9;
                    tscc_proc_1_input_3_Desired_10 = next_value_of_tscc_proc_1_input_3_Desired_10;
                    tscc_proc_1_input_4_SwitchContexts_11 = next_value_of_tscc_proc_1_input_4_SwitchContexts_11;
                    tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_132;
    tscc_output_2_MsgGroups_13 = MsgGroups_17;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19 = tscc_output_1_STATE_VARIABLE_DetInfo_19;
  *tscc_output_ptr_2_MsgGroups_13 = tscc_output_2_MsgGroups_13;
  return;
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_10,
  MR_Word tscc_proc_2_input_2_GoalInfo_11,
  MR_Word tscc_proc_2_input_3_InstMap0_12,
  MR_Word tscc_proc_2_input_4_Desired_13,
  MR_Word tscc_proc_2_input_5_Actual_14,
  MR_Word tscc_proc_2_input_6_SwitchContexts_15,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19,
  MR_Word * tscc_output_ptr_2_MsgGroups_13)
{
  MR_Word tscc_proc_1_input_1_Goal_8;
  MR_Word tscc_proc_1_input_2_InstMap0_9;
  MR_Word tscc_proc_1_input_3_Desired_10;
  MR_Word tscc_proc_1_input_4_SwitchContexts_11;
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;
  MR_Word tscc_output_1_STATE_VARIABLE_DetInfo_19;
  MR_Word tscc_output_2_MsgGroups_13;

  // The code for TSCC PROC 2: pred check_hlds.det_report.det_diagnose_goal_expr/9-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred check_hlds.det_report.det_diagnose_goal/7-0
  ;
  // proc 2 in TSCC: pred check_hlds.det_report.det_diagnose_goal_expr/9-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Goal_8 = tscc_proc_1_input_1_Goal_8;
    MR_Word InstMap0_9 = tscc_proc_1_input_2_InstMap0_9;
    MR_Word Desired_10 = tscc_proc_1_input_3_Desired_10;
    MR_Word SwitchContexts_11 = tscc_proc_1_input_4_SwitchContexts_11;
    MR_Word STATE_VARIABLE_DetInfo_0_18 = tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;
    MR_Word STATE_VARIABLE_DetInfo_19;
    MR_Word MsgGroups_13;
    MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_15 = ((MR_Word) ((MR_hl_field(0, Goal_8, (MR_Integer) 1))));
    MR_Word Actual_16;
    MR_Word CompareResult_17;

    Actual_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_15);
    parse_tree__prog_detism__compare_determinisms_3_p_0(Desired_10, Actual_16, &CompareResult_17);
    switch (CompareResult_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        {
          MR_Word next_value_of_tscc_proc_2_input_1_GoalExpr_10 = GoalExpr_14;
          MR_Word next_value_of_tscc_proc_2_input_2_GoalInfo_11 = GoalInfo_15;
          MR_Word next_value_of_tscc_proc_2_input_3_InstMap0_12 = InstMap0_9;
          MR_Word next_value_of_tscc_proc_2_input_4_Desired_13 = Desired_10;
          MR_Word next_value_of_tscc_proc_2_input_5_Actual_14 = Actual_16;
          MR_Word next_value_of_tscc_proc_2_input_6_SwitchContexts_15 = SwitchContexts_11;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131 = STATE_VARIABLE_DetInfo_0_18;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
          tscc_proc_2_input_2_GoalInfo_11 = next_value_of_tscc_proc_2_input_2_GoalInfo_11;
          tscc_proc_2_input_3_InstMap0_12 = next_value_of_tscc_proc_2_input_3_InstMap0_12;
          tscc_proc_2_input_4_Desired_13 = next_value_of_tscc_proc_2_input_4_Desired_13;
          tscc_proc_2_input_5_Actual_14 = next_value_of_tscc_proc_2_input_5_Actual_14;
          tscc_proc_2_input_6_SwitchContexts_15 = next_value_of_tscc_proc_2_input_6_SwitchContexts_15;
          tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MsgGroups_13 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_0_18;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_19;
    tscc_output_2_MsgGroups_13 = MsgGroups_13;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word GoalExpr_10 = tscc_proc_2_input_1_GoalExpr_10;
    MR_Word GoalInfo_11 = tscc_proc_2_input_2_GoalInfo_11;
    MR_Word InstMap0_12 = tscc_proc_2_input_3_InstMap0_12;
    MR_Word Desired_13 = tscc_proc_2_input_4_Desired_13;
    MR_Word Actual_14 = tscc_proc_2_input_5_Actual_14;
    MR_Word SwitchContexts_15 = tscc_proc_2_input_6_SwitchContexts_15;
    MR_Word STATE_VARIABLE_DetInfo_0_131 = tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_131;
    MR_Word STATE_VARIABLE_DetInfo_132;
    MR_Word MsgGroups_17;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) GoalExpr_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DesiredCanFail_106;
          MR_Word ActualCanFail_107;
          MR_Word ActualSolns_108;
          MR_Word DesiredSolns_310;

          parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &DesiredCanFail_106, &DesiredSolns_310);
          parse_tree__prog_data__determinism_components_3_p_0(Actual_14, &ActualCanFail_107, &ActualSolns_108);
          succeeded = (DesiredCanFail_106 == (MR_Integer) 1);
          if (succeeded)
            succeeded = (ActualCanFail_107 == (MR_Integer) 0);
          if (succeeded)
          {
            MR_Word Var_258;
            MR_Word Var_259;
            MR_Word Context_300;

            Context_300 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            {
              Var_259 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_259, 0) = ((MR_Box) (Context_300));
              MR_hl_field(0, Var_259, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[191])));
            }
            {
              Var_258 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_258, 0) = ((MR_Box) (Var_259));
              MR_hl_field(0, Var_258, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_258));
              MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            succeeded = (DesiredSolns_310 == (MR_Integer) 0);
            if (succeeded)
              succeeded = (ActualSolns_108 != (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word Var_267;
              MR_Word Var_268;
              MR_Word Context_302;

              Context_302 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              {
                Var_268 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_268, 0) = ((MR_Box) (Context_302));
                MR_hl_field(0, Var_268, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[193])));
              }
              {
                Var_267 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_267, 0) = ((MR_Box) (Var_268));
                MR_hl_field(0, Var_267, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_267));
                MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
              MsgGroups_17 = (MR_Word) ((MR_Unsigned) 0U);
          }
          STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_18 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 0))));
          MR_Word RHS_19 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 1))));
          MR_Word UnifyContext_22 = ((MR_Word) ((MR_hl_field(1, GoalExpr_10, (MR_Integer) 4))));
          MR_Word Context_23;
          MR_Word SurroundingContextPieces_24;
          MR_Word GoalPieces_25;
          MR_Word ProblemPieces_26;
          MR_Word Pieces_27;
          MR_Word Var_135;
          MR_Word Var_139;
          MR_Word Var_140;
          MR_Word Var_141;

          Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          check_hlds__det_report__det_report_unify_context_8_p_0((MR_Integer) 0, (MR_Integer) 0, UnifyContext_22, STATE_VARIABLE_DetInfo_0_131, LHS_18, RHS_19, &SurroundingContextPieces_24, &GoalPieces_25);
          check_hlds__det_report__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_26);
          Var_139 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_25, ProblemPieces_26);
          Var_135 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[194])), Var_139);
          Pieces_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SurroundingContextPieces_24, Var_135);
          {
            Var_141 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_141, 0) = ((MR_Box) (Context_23));
            MR_hl_field(0, Var_141, 1) = ((MR_Box) (Pieces_27));
          }
          {
            Var_140 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_140, 0) = ((MR_Box) (Var_141));
            MR_hl_field(0, Var_140, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_140));
            MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word PredId_28 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 0))));
          MR_Integer ProcId_29 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 1))));
          MR_Word CallContext_32 = ((MR_Word) ((MR_hl_field(2, GoalExpr_10, (MR_Integer) 4))));
          MR_Word AnyUnifyPieces_34;
          MR_Word Var_144;
          MR_Word Var_145;
          MR_Word Var_149;
          MR_Word Var_150;
          MR_Word Var_151;
          MR_Word Context_278;
          MR_Word SurroundingContextPieces_279;
          MR_Word GoalPieces_280;
          MR_Word ProblemPieces_281;
          MR_Word Pieces_282;

          Context_278 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          check_hlds__det_report__det_report_call_context_7_p_0(CallContext_32, STATE_VARIABLE_DetInfo_0_131, PredId_28, ProcId_29, &AnyUnifyPieces_34, &SurroundingContextPieces_279, &GoalPieces_280);
          check_hlds__det_report__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_281);
          Var_149 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_280, ProblemPieces_281);
          Var_145 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[194])), Var_149);
          Var_144 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SurroundingContextPieces_279, Var_145);
          Pieces_282 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), AnyUnifyPieces_34, Var_144);
          {
            Var_151 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_151, 0) = ((MR_Box) (Context_278));
            MR_hl_field(0, Var_151, 1) = ((MR_Box) (Pieces_282));
          }
          {
            Var_150 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_150, 0) = ((MR_Box) (Var_151));
            MR_hl_field(0, Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_150));
            MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
              MR_Word VarTable_40;
              MR_Word VarNameSrc_41;
              MR_Word GenericCallPieces_42;
              MR_Word Var_155;
              MR_Word Var_156;
              MR_Word Context_283;
              MR_Word GoalPieces_284;
              MR_Word ProblemPieces_285;
              MR_Word Pieces_286;

              Context_283 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_131, &VarTable_40);
              {
                VarNameSrc_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, VarNameSrc_41, 0) = ((MR_Box) (VarTable_40));
              }
              GenericCallPieces_42 = hlds__hlds_out__hlds_out_util__generic_call_to_pieces_3_f_0((MR_Integer) 1, VarNameSrc_41, GenericCall_35);
              GoalPieces_284 = parse_tree__error_spec__color_as_subject_1_f_0(GenericCallPieces_42);
              check_hlds__det_report__det_diagnose_primitive_goal_3_p_0(Desired_13, Actual_14, &ProblemPieces_285);
              Pieces_286 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), GoalPieces_284, ProblemPieces_285);
              {
                Var_156 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_156, 0) = ((MR_Box) (Context_283));
                MR_hl_field(0, Var_156, 1) = ((MR_Box) (Pieces_286));
              }
              {
                Var_155 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_155, 0) = ((MR_Box) (Var_156));
                MR_hl_field(0, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_155));
                MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String DesiredStr_50;
              MR_Word Var_161;
              MR_Word Var_164;
              MR_Word Var_165;
              MR_Word Var_172;
              MR_Word Var_173;
              MR_Word Context_287;
              MR_Word Pieces_288;

              Context_287 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              DesiredStr_50 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Desired_13);
              {
                Var_165 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_165, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_165, 1) = ((MR_Box) (DesiredStr_50));
              }
              {
                Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
                MR_hl_field(1, Var_164, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[147])));
              }
              {
                Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_161, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[180])));
                MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_164));
              }
              {
                Pieces_288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Pieces_288, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[179])));
                MR_hl_field(1, Pieces_288, 1) = ((MR_Box) (Var_161));
              }
              {
                Var_173 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_173, 0) = ((MR_Box) (Context_287));
                MR_hl_field(0, Var_173, 1) = ((MR_Box) (Pieces_288));
              }
              {
                Var_172 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_172, 0) = ((MR_Box) (Var_173));
                MR_hl_field(0, Var_172, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (Var_172));
                MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              STATE_VARIABLE_DetInfo_132 = STATE_VARIABLE_DetInfo_0_131;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_52 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));

              check_hlds__det_report__det_diagnose_conj_7_p_0(Goals_52, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_132, &MsgGroups_17);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word DisjunctsWithSolnSet_53;
              MR_Word SubMsgGroups_54;
              MR_Word DesSolns_56;
              MR_Word DisjunctsWithSoln_57;
              MR_Word Var_178;
              MR_Word Goals_290 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
              MR_Word Var_55;
              MR_Word FirstContext_58;
              MR_Word LaterContexts_59;

              Var_178 = mercury__bag__init_0_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0));
              check_hlds__det_report__det_diagnose_disj_10_p_0(Goals_290, InstMap0_12, Desired_13, Actual_14, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_132, Var_178, &DisjunctsWithSolnSet_53, &SubMsgGroups_54);
              parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_55, &DesSolns_56);
              mercury__bag__to_list_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), DisjunctsWithSolnSet_53, &DisjunctsWithSoln_57);
              succeeded = (DesSolns_56 != (MR_Integer) 3);
              if (succeeded)
              {
                succeeded = (DesSolns_56 != (MR_Integer) 2);
                if (succeeded)
                {
                  succeeded = (DisjunctsWithSoln_57 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    FirstContext_58 = ((MR_Word) ((MR_hl_field(1, DisjunctsWithSoln_57, (MR_Integer) 0))));
                    LaterContexts_59 = ((MR_Word) ((MR_hl_field(1, DisjunctsWithSoln_57, (MR_Integer) 1))));
                    succeeded = (LaterContexts_59 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                    }
                  }
                }
              }
              if (succeeded)
              {
                MR_Word NestingPieces_62;
                MR_Word FirstMsg_64;
                MR_Word LaterDisjPieces_65;
                MR_Word MakeLaterMsgs_66;
                MR_Word SortedLaterContexts_69;
                MR_Word LaterMsgs_70;
                MR_Word DisjMsgGroup_71;
                MR_Word Var_189;
                MR_Word Var_194;
                MR_Word Var_195;

                check_hlds__det_report__det_diagnose_switch_context_3_p_0(STATE_VARIABLE_DetInfo_132, SwitchContexts_15, &NestingPieces_62);
                Var_189 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_62, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[185])));
                {
                  FirstMsg_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, FirstMsg_64, 0) = ((MR_Box) (FirstContext_58));
                  MR_hl_field(0, FirstMsg_64, 1) = ((MR_Box) (Var_189));
                }
                Var_195 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[189])));
                Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_195, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
                LaterDisjPieces_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[187])), Var_194);
                {
                  MakeLaterMsgs_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, MakeLaterMsgs_66, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_6[1]));
                  MR_hl_field(0, MakeLaterMsgs_66, 1) = ((MR_Box) (check_hlds__det_report__det_diagnose_goal_expr_9_p_0_1));
                  MR_hl_field(0, MakeLaterMsgs_66, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(0, MakeLaterMsgs_66, 3) = ((MR_Box) (LaterDisjPieces_65));
                }
                mercury__list__sort_2_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), LaterContexts_59, &SortedLaterContexts_69);
                LaterMsgs_70 = mercury__list__map_2_f_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), (MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_msg_0), MakeLaterMsgs_66, SortedLaterContexts_69);
                {
                  DisjMsgGroup_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, DisjMsgGroup_71, 0) = ((MR_Box) (FirstMsg_64));
                  MR_hl_field(0, DisjMsgGroup_71, 1) = ((MR_Box) (LaterMsgs_70));
                }
                {
                  MsgGroups_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, MsgGroups_17, 0) = ((MR_Box) (DisjMsgGroup_71));
                  MR_hl_field(1, MsgGroups_17, 1) = ((MR_Box) (SubMsgGroups_54));
                }
              }
              else
                MsgGroups_17 = SubMsgGroups_54;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_72 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));
              MR_Word SwitchCanFail_73 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word SwitchMsgGroups_87;
              MR_Word VarType_88;
              MR_Word VarTable_297;
              MR_Word SubMsgGroups_298;
              MR_Word Var_205;
              MR_Word Var_323;
              MR_Word Var_75;

              succeeded = (SwitchCanFail_73 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_205 = (MR_Integer) 1;
                parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_323, &Var_75);
                succeeded = (Var_205 == Var_323);
              }
              if (succeeded)
              {
                MR_String VarStr_76;
                MR_Word MaybeMissingInfo_77;
                MR_Word Component_85;
                MR_Word SwitchMsg_86;
                MR_Word Var_242;
                MR_Word Var_244;
                MR_Word Context_292;
                MR_Word NestingPieces_293;

                Context_292 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                check_hlds__det_report__find_missing_cons_ids_9_p_0(STATE_VARIABLE_DetInfo_0_131, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[4])), InstMap0_12, SwitchContexts_15, Var_72, Cases_74, &NestingPieces_293, &VarStr_76, &MaybeMissingInfo_77);
                if ((MaybeMissingInfo_77 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word Var_224;
                  MR_Word Var_226;
                  MR_Word Var_229;
                  MR_Word Var_230;
                  MR_Word Var_232;
                  MR_Word Var_233;
                  MR_Word Var_241;
                  MR_Word NoCoverPieces_291;

                  {
                    Var_230 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Var_230, 0) = ((MR_Box) (VarStr_76));
                  }
                  {
                    Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_229, 0) = ((MR_Box) (Var_230));
                    MR_hl_field(1, Var_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_226, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[195])));
                    MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_229));
                  }
                  {
                    Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_224, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_226));
                  }
                  Var_233 = parse_tree__error_spec__color_as_incorrect_1_f_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[196])));
                  Var_232 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_233, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
                  NoCoverPieces_291 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_224, Var_232);
                  Var_241 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_293, NoCoverPieces_291);
                  {
                    Component_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(0, Component_85, 0) = ((MR_Box) (Var_241));
                  }
                }
                else
                {
                  MR_Word MissingInfo_78 = ((MR_Word) ((MR_hl_field(1, MaybeMissingInfo_77, (MR_Integer) 0))));
                  MR_Word MainPieces_81 = ((MR_Word) ((MR_hl_field(0, MissingInfo_78, (MR_Integer) 2))));
                  MR_Word VerbosePieces_82 = ((MR_Word) ((MR_hl_field(0, MissingInfo_78, (MR_Integer) 3))));
                  MR_Word SwitchOnPieces_83;
                  MR_Word Var_214;
                  MR_Word Var_215;
                  MR_Word Var_216;
                  MR_Word Var_222;

                  {
                    Var_216 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, Var_216, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(3, Var_216, 1) = ((MR_Box) (VarStr_76));
                  }
                  {
                    Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Var_215, 0) = ((MR_Box) (Var_216));
                    MR_hl_field(1, Var_215, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Var_214 = parse_tree__error_spec__color_as_subject_1_f_0(Var_215);
                  SwitchOnPieces_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[198])), Var_214);
                  Var_222 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NestingPieces_293, SwitchOnPieces_83);
                  check_hlds__det_report__append_prefix_and_maybe_verbose_6_p_0((MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[5])), Var_222, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[200])), MainPieces_81, VerbosePieces_82, &Component_85);
                }
                {
                  Var_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_242, 0) = ((MR_Box) (Component_85));
                  MR_hl_field(1, Var_242, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  SwitchMsg_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, SwitchMsg_86, 0) = ((MR_Box) (Context_292));
                  MR_hl_field(2, SwitchMsg_86, 1) = ((MR_Box) (Var_242));
                }
                {
                  Var_244 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Var_244, 0) = ((MR_Box) (SwitchMsg_86));
                  MR_hl_field(0, Var_244, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  SwitchMsgGroups_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, SwitchMsgGroups_87, 0) = ((MR_Box) (Var_244));
                  MR_hl_field(1, SwitchMsgGroups_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
                SwitchMsgGroups_87 = (MR_Word) ((MR_Unsigned) 0U);
              check_hlds__det_util__det_info_get_var_table_2_p_0(STATE_VARIABLE_DetInfo_0_131, &VarTable_297);
              parse_tree__var_table__lookup_var_type_3_p_0(VarTable_297, Var_72, &VarType_88);
              check_hlds__det_report__det_diagnose_switch_arms_9_p_0(Var_72, VarType_88, Cases_74, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_132, &SubMsgGroups_298);
              MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), SwitchMsgGroups_87, SubMsgGroups_298);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_110 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word SubGoalInfo_112 = ((MR_Word) ((MR_hl_field(0, SubGoal_110, (MR_Integer) 1))));
              MR_Word Internal_113;
              MR_Word InternalDesired_114;
              MR_Word next_value_of_tscc_proc_1_input_1_Goal_8;
              MR_Word next_value_of_tscc_proc_1_input_2_InstMap0_9;
              MR_Word next_value_of_tscc_proc_1_input_3_Desired_10;
              MR_Word next_value_of_tscc_proc_1_input_4_SwitchContexts_11;
              MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;

              Internal_113 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_112);
              succeeded = (Actual_14 == Internal_113);
              if (succeeded)
                InternalDesired_114 = Desired_13;
              else
              {
                MR_Word CanFail_115;
                MR_Word Var_116;

                parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &CanFail_115, &Var_116);
                parse_tree__prog_data__determinism_components_3_p_1(&InternalDesired_114, CanFail_115, (MR_Integer) 3);
              }
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_1_input_1_Goal_8 = SubGoal_110;
              next_value_of_tscc_proc_1_input_2_InstMap0_9 = InstMap0_12;
              next_value_of_tscc_proc_1_input_3_Desired_10 = InternalDesired_114;
              next_value_of_tscc_proc_1_input_4_SwitchContexts_11 = SwitchContexts_15;
              next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = STATE_VARIABLE_DetInfo_0_131;
              tscc_proc_1_input_1_Goal_8 = next_value_of_tscc_proc_1_input_1_Goal_8;
              tscc_proc_1_input_2_InstMap0_9 = next_value_of_tscc_proc_1_input_2_InstMap0_9;
              tscc_proc_1_input_3_Desired_10 = next_value_of_tscc_proc_1_input_3_Desired_10;
              tscc_proc_1_input_4_SwitchContexts_11 = next_value_of_tscc_proc_1_input_4_SwitchContexts_11;
              tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;
              goto top_of_proc_1;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_90 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 2))));
              MR_Word Then_91 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 3))));
              MR_Word Else_92 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 4))));
              MR_Word DesiredSolns_94;
              MR_Word CondInfo_96;
              MR_Word CondDetism_97;
              MR_Word CondSolns_99;
              MR_Word MsgGroupsCond_101;
              MR_Word InstMap1_102;
              MR_Word MsgGroupsThen_103;
              MR_Word MsgGroupsElse_104;
              MR_Word STATE_VARIABLE_DetInfo_249_249;
              MR_Word STATE_VARIABLE_DetInfo_250_250;
              MR_Word Var_252;
              MR_Word _DesiredCanFail_93;
              MR_Word _CondCanFail_98;

              parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &_DesiredCanFail_93, &DesiredSolns_94);
              CondInfo_96 = ((MR_Word) ((MR_hl_field(0, Cond_90, (MR_Integer) 1))));
              CondDetism_97 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondInfo_96);
              parse_tree__prog_data__determinism_components_3_p_0(CondDetism_97, &_CondCanFail_98, &CondSolns_99);
              succeeded = (CondSolns_99 == (MR_Integer) 3);
              if (succeeded)
                succeeded = (DesiredSolns_94 != (MR_Integer) 3);
              if (succeeded)
              {
                MR_Word DesiredCond_100;

                parse_tree__prog_data__determinism_components_3_p_1(&DesiredCond_100, (MR_Integer) 0, DesiredSolns_94);
                check_hlds__det_report__det_diagnose_goal_7_p_0(Cond_90, InstMap0_12, DesiredCond_100, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_249_249, &MsgGroupsCond_101);
              }
              else
              {
                MsgGroupsCond_101 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_DetInfo_249_249 = STATE_VARIABLE_DetInfo_0_131;
              }
              hlds__goal_util__update_instmap_3_p_0(Cond_90, InstMap0_12, &InstMap1_102);
              check_hlds__det_report__det_diagnose_goal_7_p_0(Then_91, InstMap1_102, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_249_249, &STATE_VARIABLE_DetInfo_250_250, &MsgGroupsThen_103);
              check_hlds__det_report__det_diagnose_goal_7_p_0(Else_92, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_250_250, &STATE_VARIABLE_DetInfo_132, &MsgGroupsElse_104);
              Var_252 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MsgGroupsThen_103, MsgGroupsElse_104);
              MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MsgGroupsCond_101, Var_252);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_117 = ((MR_Word) ((MR_hl_field(3, GoalExpr_10, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_117)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_report.det_diagnose_goal_expr\'/9", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_122 = ((MR_Word) ((MR_hl_field(1, ShortHand_117, (MR_Integer) 4))));
                    MR_Word OrElseGoals_123 = ((MR_Word) ((MR_hl_field(1, ShortHand_117, (MR_Integer) 5))));
                    MR_Word MainMsgGroups_125;
                    MR_Word OrElseMsgGroups_126;
                    MR_Word STATE_VARIABLE_DetInfo_273_273;

                    check_hlds__det_report__det_diagnose_goal_7_p_0(MainGoal_122, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_131, &STATE_VARIABLE_DetInfo_273_273, &MainMsgGroups_125);
                    check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(OrElseGoals_123, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_273_273, &STATE_VARIABLE_DetInfo_132, &OrElseMsgGroups_126);
                    MsgGroups_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), MainMsgGroups_125, OrElseMsgGroups_126);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_311 = ((MR_Word) ((MR_hl_field(2, ShortHand_117, (MR_Integer) 2))));
                    MR_Word next_value_of_tscc_proc_1_input_1_Goal_8 = SubGoal_311;
                    MR_Word next_value_of_tscc_proc_1_input_2_InstMap0_9 = InstMap0_12;
                    MR_Word next_value_of_tscc_proc_1_input_3_Desired_10 = Desired_13;
                    MR_Word next_value_of_tscc_proc_1_input_4_SwitchContexts_11 = SwitchContexts_15;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = STATE_VARIABLE_DetInfo_0_131;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_Goal_8 = next_value_of_tscc_proc_1_input_1_Goal_8;
                    tscc_proc_1_input_2_InstMap0_9 = next_value_of_tscc_proc_1_input_2_InstMap0_9;
                    tscc_proc_1_input_3_Desired_10 = next_value_of_tscc_proc_1_input_3_Desired_10;
                    tscc_proc_1_input_4_SwitchContexts_11 = next_value_of_tscc_proc_1_input_4_SwitchContexts_11;
                    tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;
                    goto top_of_proc_1;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_132;
    tscc_output_2_MsgGroups_13 = MsgGroups_17;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19 = tscc_output_1_STATE_VARIABLE_DetInfo_19;
  *tscc_output_ptr_2_MsgGroups_13 = tscc_output_2_MsgGroups_13;
  return;
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word InstMap0_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_6 = STATE_VARIABLE_DetInfo_0_5;
  }
  else
  {
    MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadMsgGroups_21;
    MR_Word TailMsgGroups_22;
    MR_Word STATE_VARIABLE_DetInfo_25_25;
    MR_Word GoalExpr_27 = ((MR_Word) ((MR_hl_field(0, Goal_14, (MR_Integer) 0))));
    MR_Word GoalInfo_28 = ((MR_Word) ((MR_hl_field(0, Goal_14, (MR_Integer) 1))));
    MR_Word Actual_29;
    MR_Word CompareResult_30;

    Actual_29 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_28);
    parse_tree__prog_detism__compare_determinisms_3_p_0(HeadVar__3_3, Actual_29, &CompareResult_30);
    switch (CompareResult_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_27, GoalInfo_28, InstMap0_2, HeadVar__3_3, Actual_29, HeadVar__4_4, STATE_VARIABLE_DetInfo_0_5, &STATE_VARIABLE_DetInfo_25_25, &HeadMsgGroups_21);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          HeadMsgGroups_21 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_25_25 = STATE_VARIABLE_DetInfo_0_5;
        }
        break;
    }
    check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(Goals_15, InstMap0_2, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_DetInfo_25_25, STATE_VARIABLE_DetInfo_6, &TailMsgGroups_22);
    *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), HeadMsgGroups_21, TailMsgGroups_22);
  }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_arms_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word InstMap0_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_DetInfo_0_7,
  MR_Word * STATE_VARIABLE_DetInfo_8,
  MR_Word * HeadVar__9_9)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__9_9 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_8 = STATE_VARIABLE_DetInfo_0_7;
  }
  else
  {
    MR_Word Case_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word MainConsId_27 = ((MR_Word) ((MR_hl_field(0, Case_20, (MR_Integer) 0))));
    MR_Word OtherConsIds_28 = ((MR_Word) ((MR_hl_field(0, Case_20, (MR_Integer) 1))));
    MR_Word Goal_29 = ((MR_Word) ((MR_hl_field(0, Case_20, (MR_Integer) 2))));
    MR_Word GoalSeq_30;
    MR_Word MainMatch_31;
    MR_Word OtherMatches_32;
    MR_Word NewSwitchContext_33;
    MR_Word SwitchContexts1_34;
    MR_Word ModuleInfo0_35;
    MR_Word InstMap1_36;
    MR_Word ModuleInfo_37;
    MR_Word HeadMsgGroups_38;
    MR_Word TailMsgGroups_39;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_DetInfo_44_44;
    MR_Word STATE_VARIABLE_DetInfo_45_45;
    MR_Word GoalExpr_47;
    MR_Word GoalInfo_48;
    MR_Word Actual_49;
    MR_Word CompareResult_50;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_29, &GoalSeq_30);
    {
      Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_42, 0) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    check_hlds__det_report__find_switch_var_matches_6_p_0(GoalSeq_30, Var_42, MainConsId_27, OtherConsIds_28, &MainMatch_31, &OtherMatches_32);
    {
      NewSwitchContext_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, NewSwitchContext_33, 0) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(0, NewSwitchContext_33, 1) = ((MR_Box) (MainMatch_31));
      MR_hl_field(0, NewSwitchContext_33, 2) = ((MR_Box) (OtherMatches_32));
    }
    {
      SwitchContexts1_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SwitchContexts1_34, 0) = ((MR_Box) (NewSwitchContext_33));
      MR_hl_field(1, SwitchContexts1_34, 1) = ((MR_Box) (HeadVar__6_6));
    }
    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_7, &ModuleInfo0_35);
    hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__1_1, HeadVar__2_2, MainConsId_27, OtherConsIds_28, InstMap0_4, &InstMap1_36, ModuleInfo0_35, &ModuleInfo_37);
    check_hlds__det_util__det_info_set_module_info_3_p_0(ModuleInfo_37, STATE_VARIABLE_DetInfo_0_7, &STATE_VARIABLE_DetInfo_44_44);
    GoalExpr_47 = ((MR_Word) ((MR_hl_field(0, Goal_29, (MR_Integer) 0))));
    GoalInfo_48 = ((MR_Word) ((MR_hl_field(0, Goal_29, (MR_Integer) 1))));
    Actual_49 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_48);
    parse_tree__prog_detism__compare_determinisms_3_p_0(HeadVar__5_5, Actual_49, &CompareResult_50);
    switch (CompareResult_50) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_47, GoalInfo_48, InstMap1_36, HeadVar__5_5, Actual_49, SwitchContexts1_34, STATE_VARIABLE_DetInfo_44_44, &STATE_VARIABLE_DetInfo_45_45, &HeadMsgGroups_38);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          HeadMsgGroups_38 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_45_45 = STATE_VARIABLE_DetInfo_44_44;
        }
        break;
    }
    check_hlds__det_report__det_diagnose_switch_arms_9_p_0(HeadVar__1_1, HeadVar__2_2, Cases_21, InstMap0_4, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_DetInfo_45_45, STATE_VARIABLE_DetInfo_8, &TailMsgGroups_39);
    *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), HeadMsgGroups_38, TailMsgGroups_39);
  }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_disj_10_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_DetInfo_0_6,
  MR_Word * STATE_VARIABLE_DetInfo_7,
  MR_Word STATE_VARIABLE_DisjunctsWithSoln_0_8,
  MR_Word * STATE_VARIABLE_DisjunctsWithSoln_9,
  MR_Word * HeadVar__10_10)
{
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__10_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DisjunctsWithSoln_9 = STATE_VARIABLE_DisjunctsWithSoln_0_8;
    *STATE_VARIABLE_DetInfo_7 = STATE_VARIABLE_DetInfo_0_6;
  }
  else
  {
    MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ActualCanFail_30;
    MR_Word DesiredCanFail_32;
    MR_Word DesiredSolns_33;
    MR_Word ClauseCanFail_34;
    MR_Word ClauseDesired_35;
    MR_Word HeadMsgGroups_36;
    MR_Word GoalInfo_38;
    MR_Word TailMsgGroups_42;
    MR_Word STATE_VARIABLE_DetInfo_47_47;
    MR_Word STATE_VARIABLE_DisjunctsWithSoln_49_49;
    MR_Word GoalExpr_53;
    MR_Word GoalInfo_54;
    MR_Word Actual_55;
    MR_Word CompareResult_56;
    MR_Word Var_31;
    MR_Word GoalDetism_39;
    MR_Word Var_52;
    MR_Word Var_40;

    parse_tree__prog_data__determinism_components_3_p_0(HeadVar__4_4, &ActualCanFail_30, &Var_31);
    parse_tree__prog_data__determinism_components_3_p_0(HeadVar__3_3, &DesiredCanFail_32, &DesiredSolns_33);
    succeeded = (DesiredCanFail_32 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (ActualCanFail_30 == (MR_Integer) 0);
    if (succeeded)
      ClauseCanFail_34 = (MR_Integer) 1;
    else
      ClauseCanFail_34 = (MR_Integer) 0;
    parse_tree__prog_data__determinism_components_3_p_1(&ClauseDesired_35, ClauseCanFail_34, DesiredSolns_33);
    GoalExpr_53 = ((MR_Word) ((MR_hl_field(0, Goal_21, (MR_Integer) 0))));
    GoalInfo_54 = ((MR_Word) ((MR_hl_field(0, Goal_21, (MR_Integer) 1))));
    Actual_55 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_54);
    parse_tree__prog_detism__compare_determinisms_3_p_0(ClauseDesired_35, Actual_55, &CompareResult_56);
    switch (CompareResult_56) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_53, GoalInfo_54, HeadVar__2_2, ClauseDesired_35, Actual_55, HeadVar__5_5, STATE_VARIABLE_DetInfo_0_6, &STATE_VARIABLE_DetInfo_47_47, &HeadMsgGroups_36);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          HeadMsgGroups_36 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_47_47 = STATE_VARIABLE_DetInfo_0_6;
        }
        break;
    }
    GoalInfo_38 = ((MR_Word) ((MR_hl_field(0, Goal_21, (MR_Integer) 1))));
    GoalDetism_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_38);
    parse_tree__prog_data__determinism_components_3_p_0(GoalDetism_39, &Var_40, &Var_52);
    succeeded = ((MR_Integer) 0 == Var_52);
    if (succeeded)
      STATE_VARIABLE_DisjunctsWithSoln_49_49 = STATE_VARIABLE_DisjunctsWithSoln_0_8;
    else
    {
      MR_Word GoalContext_41;

      GoalContext_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_38);
      mercury__bag__insert_3_p_0((MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), ((MR_Box) (GoalContext_41)), STATE_VARIABLE_DisjunctsWithSoln_0_8, &STATE_VARIABLE_DisjunctsWithSoln_49_49);
    }
    check_hlds__det_report__det_diagnose_disj_10_p_0(Goals_22, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_DetInfo_47_47, STATE_VARIABLE_DetInfo_7, STATE_VARIABLE_DisjunctsWithSoln_49_49, STATE_VARIABLE_DisjunctsWithSoln_9, &TailMsgGroups_42);
    *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), HeadMsgGroups_36, TailMsgGroups_42);
  }
}

void MR_CALL 
check_hlds__det_report__det_diagnose_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_DetInfo_0_5,
  MR_Word * STATE_VARIABLE_DetInfo_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_DetInfo_6 = STATE_VARIABLE_DetInfo_0_5;
  }
  else
  {
    MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word HeadMsgGroups_21;
    MR_Word InstMap1_22;
    MR_Word TailMsgGroups_23;
    MR_Word STATE_VARIABLE_DetInfo_26_26;
    MR_Word GoalExpr_28 = ((MR_Word) ((MR_hl_field(0, Goal_14, (MR_Integer) 0))));
    MR_Word GoalInfo_29 = ((MR_Word) ((MR_hl_field(0, Goal_14, (MR_Integer) 1))));
    MR_Word Actual_30;
    MR_Word CompareResult_31;

    Actual_30 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_29);
    parse_tree__prog_detism__compare_determinisms_3_p_0(HeadVar__3_3, Actual_30, &CompareResult_31);
    switch (CompareResult_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_28, GoalInfo_29, HeadVar__2_2, HeadVar__3_3, Actual_30, HeadVar__4_4, STATE_VARIABLE_DetInfo_0_5, &STATE_VARIABLE_DetInfo_26_26, &HeadMsgGroups_21);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          HeadMsgGroups_21 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_26_26 = STATE_VARIABLE_DetInfo_0_5;
        }
        break;
    }
    hlds__goal_util__update_instmap_3_p_0(Goal_14, HeadVar__2_2, &InstMap1_22);
    check_hlds__det_report__det_diagnose_conj_7_p_0(Goals_15, InstMap1_22, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_DetInfo_26_26, STATE_VARIABLE_DetInfo_6, &TailMsgGroups_23);
    *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_sort__parse_tree__error_sort__type_ctor_info_error_msg_group_0), HeadMsgGroups_21, TailMsgGroups_23);
  }
}

static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
  MR_Word CallUnifyContext_8,
  MR_Word DetInfo_9,
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word * UnifyPieces_12,
  MR_Word * SurroundingUnifyContextPieces_13,
  MR_Word * GoalPieces_14)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_15;
  MR_Word PredInfo_16;
  MR_Word Origin_17;
  MR_Word Var_29;
  MR_Word Var_30;

  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_9, &ModuleInfo_15);
  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_15, PredId_10, &PredInfo_16);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_16, &Origin_17);
  succeeded = ((MR_tag((MR_Word) Origin_17)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_29 = ((MR_Word) ((MR_hl_field(1, Origin_17, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_29)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_30 = ((MR_Unsigned) ((MR_hl_field(0, Var_29, (MR_Integer) 0))) & (MR_Integer) 3);
      succeeded = (Var_30 == (MR_Integer) 0);
    }
  }
  if (succeeded)
  {
    *UnifyPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
    if ((CallUnifyContext_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *SurroundingUnifyContextPieces_13 = (MR_Word) ((MR_Unsigned) 0U);
      *GoalPieces_14 = (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[267]));
    }
    else
    {
      MR_Word LHS_19;
      MR_Word RHS_20;
      MR_Word UC_21;
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, CallUnifyContext_8, (MR_Integer) 0))));

      LHS_19 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 0))));
      RHS_20 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 1))));
      UC_21 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 2))));
      check_hlds__det_report__det_report_unify_context_8_p_0((MR_Integer) 0, (MR_Integer) 0, UC_21, DetInfo_9, LHS_19, RHS_20, SurroundingUnifyContextPieces_13, GoalPieces_14);
    }
  }
  else
  {
    MR_Word ProcTable_24;
    MR_Word ProcInfo_25;
    MR_Word ArgModes_26;
    MR_Word InstVarSet_27;
    MR_Word PredPieces_28;
    MR_Word Var_61;
    MR_Box conv0_ProcInfo_25;

    if ((CallUnifyContext_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *UnifyPieces_12 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word CallContextPieces_22;
      MR_Word MainUnifyPieces_23;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(1, CallUnifyContext_8, (MR_Integer) 0))));
      MR_Word Var_46;
      MR_Word LHS_62 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 0))));
      MR_Word RHS_63 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 1))));
      MR_Word UC_64 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 2))));

      check_hlds__det_report__det_report_unify_context_8_p_0((MR_Integer) 0, (MR_Integer) 1, UC_64, DetInfo_9, LHS_62, RHS_63, &CallContextPieces_22, &MainUnifyPieces_23);
      Var_46 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), MainUnifyPieces_23, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[261])));
      *UnifyPieces_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CallContextPieces_22, Var_46);
    }
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_16, &ProcTable_24);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_24, ((MR_Box) (ProcId_11)), &conv0_ProcInfo_25);
    ProcInfo_25 = ((MR_Word) (conv0_ProcInfo_25));
    hlds__hlds_proc_util__proc_info_declared_argmodes_2_p_0(ProcInfo_25, &ArgModes_26);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_25, &InstVarSet_27);
    PredPieces_28 = hlds__hlds_error_util__describe_one_pred_name_mode_8_f_0(ModuleInfo_15, (MR_Integer) 0, InstVarSet_27, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), PredId_10, ArgModes_26);
    *SurroundingUnifyContextPieces_13 = (MR_Word) ((MR_Unsigned) 0U);
    Var_61 = parse_tree__error_spec__color_as_subject_1_f_0(PredPieces_28);
    *GoalPieces_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[269])), Var_61);
  }
}

static void MR_CALL 
check_hlds__det_report__det_report_unify_context_8_p_0(
  MR_Word STATE_VARIABLE_First_0_27,
  MR_Word Last_10,
  MR_Word UnifyContext_11,
  MR_Word DetInfo_12,
  MR_Word LHSVar_13,
  MR_Word RHS_14,
  MR_Word * SurroundingContextPieces_15,
  MR_Word * MainPieces_16)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_18;
  MR_Word VarTable_19;
  MR_String StartWords_20;
  MR_Word LHSVarEntry_21;
  MR_String LHSVarRawName_22;
  MR_Word STATE_VARIABLE_First_28_28;
  MR_Word _LastContextWord_17;

  hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_6_p_0(STATE_VARIABLE_First_0_27, &STATE_VARIABLE_First_28_28, UnifyContext_11, &_LastContextWord_17, (MR_Word) ((MR_Unsigned) 0U), SurroundingContextPieces_15);
  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_12, &ModuleInfo_18);
  check_hlds__det_util__det_info_get_var_table_2_p_0(DetInfo_12, &VarTable_19);
  switch (Last_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (STATE_VARIABLE_First_28_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          StartWords_20 = (MR_String) "Unification";
          break;
        case (MR_Integer) 1:
          StartWords_20 = (MR_String) "unification";
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (STATE_VARIABLE_First_28_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          StartWords_20 = (MR_String) "In unification";
          break;
        case (MR_Integer) 1:
          StartWords_20 = (MR_String) "in unification";
          break;
      }
      break;
  }
  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_19, LHSVar_13, &LHSVarEntry_21);
  LHSVarRawName_22 = ((MR_String) ((MR_hl_field(0, LHSVarEntry_21, (MR_Integer) 0))));
  succeeded = (strcmp(LHSVarRawName_22, (MR_String) "") == 0);
  if (succeeded)
  {
    MR_String RHSStr_23;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_String Var_40;

    RHSStr_23 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(ModuleInfo_18, VarTable_19, (MR_Integer) 0, RHS_14);
    {
      Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_32, 1) = ((MR_Box) (StartWords_20));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[271])));
    }
    Var_40 = parse_tree__error_spec__add_quotes_1_f_0(RHSStr_23);
    {
      Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_39, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_37 = parse_tree__error_spec__color_as_subject_1_f_0(Var_38);
    *MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_31, Var_37);
  }
  else
  {
    MR_String LHSVarName_24;
    MR_Word RHSVar_25;
    MR_Word RHSVarEntry_26;
    MR_String Var_43;

    LHSVarName_24 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_19, (MR_Integer) 0, LHSVar_13);
    succeeded = ((MR_tag((MR_Word) RHS_14)) == (MR_Integer) 0);
    if (succeeded)
    {
      RHSVar_25 = ((MR_Word) ((MR_hl_field(0, RHS_14, (MR_Integer) 0))));
      parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_19, RHSVar_25, &RHSVarEntry_26);
      Var_43 = ((MR_String) ((MR_hl_field(0, RHSVarEntry_26, (MR_Integer) 0))));
      succeeded = (strcmp(Var_43, (MR_String) "") == 0);
    }
    if (succeeded)
    {
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_String Var_53;

      {
        Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_45, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_45, 1) = ((MR_Box) (StartWords_20));
      }
      {
        Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[271])));
      }
      Var_53 = parse_tree__error_spec__add_quotes_1_f_0(LHSVarName_24);
      {
        Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_50 = parse_tree__error_spec__color_as_subject_1_f_0(Var_51);
      *MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_44, Var_50);
    }
    else
    {
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_65;
      MR_String Var_66;
      MR_Word Var_68;
      MR_Word Var_73;
      MR_Word Var_74;
      MR_Word Var_75;
      MR_String Var_76;
      MR_String RHSStr_78;

      RHSStr_78 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(ModuleInfo_18, VarTable_19, (MR_Integer) 0, RHS_14);
      {
        Var_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_57, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_57, 1) = ((MR_Box) (StartWords_20));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[273])));
      }
      Var_66 = parse_tree__error_spec__add_quotes_1_f_0(LHSVarName_24);
      {
        Var_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_65, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_65, 1) = ((MR_Box) (Var_66));
      }
      {
        Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
        MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_63 = parse_tree__error_spec__color_as_subject_1_f_0(Var_64);
      Var_76 = parse_tree__error_spec__add_quotes_1_f_0(RHSStr_78);
      {
        Var_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_75, 0) = ((MR_Box) ((MR_Unsigned) 6U));
        MR_hl_field(3, Var_75, 1) = ((MR_Box) (Var_76));
      }
      {
        Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
        MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_73 = parse_tree__error_spec__color_as_subject_1_f_0(Var_74);
      Var_68 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[153])), Var_73);
      Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_63, Var_68);
      *MainPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_56, Var_62);
    }
  }
}

static MR_Box MR_CALL 
check_hlds__det_report__find_missing_cons_ids_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_76;

  conv1_LambdaHeadVar__2_76 = check_hlds__det_report__IntroducedFrom__func__find_missing_cons_ids__2312__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_76));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  parse_tree__prog_util__strip_module_qualifier_from_cons_id_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_9_p_0(
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
  MR_Word PossibleConsIdsSet_39;
  MR_Word VarType_22;
  MR_Word VarTypeCtor_23;
  MR_Word TypeTable_24;
  MR_Word Var_159;
  MR_Word BoundFunctors_25;

  check_hlds__det_report__det_diagnose_switch_context_3_p_0(DetInfo_10, SwitchContexts_13, NestingPieces_16);
  check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_10, &ModuleInfo_19);
  check_hlds__det_util__det_info_get_var_table_2_p_0(DetInfo_10, &VarTable_20);
  *VarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_20, (MR_Integer) 0, Var_14);
  hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_12, Var_14, &VarInst_21);
  check_hlds__det_util__det_info_get_var_table_2_p_0(DetInfo_10, &Var_159);
  succeeded = parse_tree__var_table____Unify____var_table_0_0(VarTable_20, Var_159);
  if (succeeded)
  {
    parse_tree__var_table__lookup_var_type_3_p_0(VarTable_20, Var_14, &VarType_22);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_22, &VarTypeCtor_23);
    hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_19, &TypeTable_24);
    succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_19, VarInst_21, &BoundFunctors_25);
    if (succeeded)
    {
      MR_Word BoundConsIds_26;
      MR_Word SortedBoundConsIds_27;
      MR_Word BoundConsIdsSet_28;
      MR_Word TypeConstructors_32;
      MR_Word TypeDefn_29;
      MR_Word TypeBody_30;
      MR_Word TypeBodyDu_31;

      parse_tree__prog_mode__bound_functors_to_cons_ids_3_p_0(VarTypeCtor_23, BoundFunctors_25, &BoundConsIds_26);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), BoundConsIds_26, &SortedBoundConsIds_27);
      mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), SortedBoundConsIds_27, &BoundConsIdsSet_28);
      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_24, VarTypeCtor_23, &TypeDefn_29);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_29, &TypeBody_30);
        succeeded = ((MR_tag((MR_Word) TypeBody_30)) == (MR_Integer) 0);
        if (succeeded)
        {
          TypeBodyDu_31 = (MR_Word) ((MR_Word) (TypeBody_30));
          TypeConstructors_32 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_31, (MR_Integer) 0))));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word SortedTypeConsIds_37;
        MR_Word TypeConsIdsSet_38;
        MR_Word Var_69;

        Var_69 = mercury__one_or_more__one_or_more_to_list_1_f_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0), TypeConstructors_32);
        SortedTypeConsIds_37 = hlds__hlds_data__constructor_cons_ids_2_f_0(VarTypeCtor_23, Var_69);
        mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), SortedTypeConsIds_37, &TypeConsIdsSet_38);
        mercury__set_tree234__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), TypeConsIdsSet_38, BoundConsIdsSet_28, &PossibleConsIdsSet_39);
      }
      else
        PossibleConsIdsSet_39 = BoundConsIdsSet_28;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_151_151;
      MR_Word TypeCtorInfo_152_152;
      MR_Word Var_70;
      MR_Word TypeDefn_142;
      MR_Word TypeBody_143;
      MR_Word TypeBodyDu_144;
      MR_Word TypeConstructors_145;
      MR_Word SortedTypeConsIds_146;

      succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable_24, VarTypeCtor_23, &TypeDefn_142);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_142, &TypeBody_143);
        succeeded = ((MR_tag((MR_Word) TypeBody_143)) == (MR_Integer) 0);
        if (succeeded)
        {
          TypeBodyDu_144 = (MR_Word) ((MR_Word) (TypeBody_143));
          TypeConstructors_145 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_144, (MR_Integer) 0))));
          TypeCtorInfo_151_151 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0);
          Var_70 = mercury__one_or_more__one_or_more_to_list_1_f_1(TypeCtorInfo_151_151, TypeConstructors_145);
          SortedTypeConsIds_146 = hlds__hlds_data__constructor_cons_ids_2_f_0(VarTypeCtor_23, Var_70);
          TypeCtorInfo_152_152 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
          mercury__set_tree234__sorted_list_to_set_2_p_0(TypeCtorInfo_152_152, SortedTypeConsIds_146, &PossibleConsIdsSet_39);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word CoveredConsIdsSet_44;
    MR_Word UncoveredConsIdsSet_45;
    MR_Integer NumPossibleConsIds_46;
    MR_Integer NumUncoveredConsIds_47;
    MR_Word UncoveredConsIds_48;
    MR_Word UnQualConsIds_49;
    MR_Word SortedUnQualConsIds_50;
    MR_Word PrintedConsIds_51;
    MR_Word NonPrintedConsIds_52;
    MR_Word Var_71;

    Var_71 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0));
    check_hlds__det_report__compute_covered_cons_ids_3_p_0(Cases_15, Var_71, &CoveredConsIdsSet_44);
    mercury__set_tree234__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), PossibleConsIdsSet_39, CoveredConsIdsSet_44, &UncoveredConsIdsSet_45);
    NumPossibleConsIds_46 = mercury__set_tree234__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), PossibleConsIdsSet_39);
    NumUncoveredConsIds_47 = mercury__set_tree234__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UncoveredConsIdsSet_45);
    UncoveredConsIds_48 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UncoveredConsIdsSet_45);
    mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__det_report_scalar_common_1[2]), UncoveredConsIds_48, &UnQualConsIds_49);
    mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UnQualConsIds_49, &SortedUnQualConsIds_50);
    if ((MaybeLimit_11 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      PrintedConsIds_51 = SortedUnQualConsIds_50;
      NonPrintedConsIds_52 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Integer Limit_53 = ((MR_Integer) ((MR_hl_field(1, MaybeLimit_11, (MR_Integer) 0))));
      MR_Integer NumConsIds_54;

      mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), SortedUnQualConsIds_50, &NumConsIds_54);
      succeeded = (NumConsIds_54 <= Limit_53);
      if (succeeded)
      {
        PrintedConsIds_51 = SortedUnQualConsIds_50;
        NonPrintedConsIds_52 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Integer Var_73 = (MR_Integer) ((MR_Unsigned) Limit_53 - (MR_Unsigned) 1);

        mercury__list__split_upto_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_73, SortedUnQualConsIds_50, &PrintedConsIds_51, &NonPrintedConsIds_52);
      }
    }
    if ((PrintedConsIds_51 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeMissingInfo_18 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PrintedConsIdPieces_59;
      MR_Word MainPieces_60;
      MR_Word VerbosePieces_61;
      MR_Word MissingInfo_67;

      PrintedConsIdPieces_59 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__det_report_scalar_common_2[1]), (MR_Word) (&check_hlds__det_report_scalar_common_1[3]), PrintedConsIds_51);
      if ((NonPrintedConsIds_52 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word Var_83;
        MR_Word Var_84;

        Var_84 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])), PrintedConsIdPieces_59);
        Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_84, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[254])));
        MainPieces_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[252])), Var_83);
        VerbosePieces_61 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Word NonPrintedConsIdPieces_64;
        MR_Integer NumNonPrintedConsIds_65;
        MR_Word ConsIdPieces_66;
        MR_Word Var_98;
        MR_Word Var_99;
        MR_Word Var_108;
        MR_Word Var_113;
        MR_Word Var_114;
        MR_Word Var_115;
        MR_Word Var_118;
        MR_Word Var_119;
        MR_Word Var_131;
        MR_Word Var_132;

        NonPrintedConsIdPieces_64 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__det_report_scalar_common_2[1]), (MR_Word) (&check_hlds__det_report_scalar_common_1[3]), NonPrintedConsIds_52);
        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), NonPrintedConsIds_52, &NumNonPrintedConsIds_65);
        Var_99 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[256])), PrintedConsIdPieces_59);
        {
          Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Var_119, 1) = ((MR_Box) (NumNonPrintedConsIds_65));
        }
        {
          Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
          MR_hl_field(1, Var_118, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[258])));
        }
        {
          Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_115, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[152])));
          MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_118));
        }
        Var_114 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_115);
        Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_114, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
        Var_108 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[254])), Var_113);
        Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_99, Var_108);
        MainPieces_60 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[252])), Var_98);
        ConsIdPieces_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&check_hlds__det_report_scalar_common_2[1]), PrintedConsIdPieces_59, NonPrintedConsIdPieces_64);
        Var_132 = parse_tree__error_spec__pieces_list_to_color_line_pieces_3_f_0((MR_Integer) 2, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])), ConsIdPieces_66);
        Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_132, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[254])));
        VerbosePieces_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[252])), Var_131);
      }
      {
        MissingInfo_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, MissingInfo_67, 0) = ((MR_Box) (NumPossibleConsIds_46));
        MR_hl_field(0, MissingInfo_67, 1) = ((MR_Box) (NumUncoveredConsIds_47));
        MR_hl_field(0, MissingInfo_67, 2) = ((MR_Box) (MainPieces_60));
        MR_hl_field(0, MissingInfo_67, 3) = ((MR_Box) (VerbosePieces_61));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeMissingInfo_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MissingInfo_67));
      }
    }
  }
  else
    *MaybeMissingInfo_18 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = check_hlds__det_report__switch_match_to_string_2_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0(
  MR_Word DetInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SwitchContext_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word SwitchContexts_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
    Var_10 = ((MR_Word) ((MR_hl_field(0, SwitchContext_6, (MR_Integer) 0))));
    MainMatch_11 = ((MR_Word) ((MR_hl_field(0, SwitchContext_6, (MR_Integer) 1))));
    OtherMatches_12 = ((MR_Word) ((MR_hl_field(0, SwitchContext_6, (MR_Integer) 2))));
    ConsId_47 = ((MR_Word) ((MR_hl_field(0, MainMatch_11, (MR_Integer) 0))));
    MaybeArgVars_48 = ((MR_Word) ((MR_hl_field(0, MainMatch_11, (MR_Integer) 1))));
    MainMatchStr_13 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(VarTable_9, (MR_Integer) 1, ConsId_47, MaybeArgVars_48);
    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_6[0]));
      MR_hl_field(0, Var_19, 1) = ((MR_Box) (check_hlds__det_report__det_diagnose_switch_context_3_p_0_1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 3) = ((MR_Box) (VarTable_9));
    }
    OtherMatchStrs_14 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_19, OtherMatches_12);
    {
      Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_21, 0) = ((MR_Box) (MainMatchStr_13));
      MR_hl_field(1, Var_21, 1) = ((MR_Box) (OtherMatchStrs_14));
    }
    MatchsStr_15 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_21);
    VarStr_16 = parse_tree__parse_tree_out_term__mercury_var_to_string_3_f_0(VarTable_9, (MR_Integer) 0, Var_10);
    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) (MatchsStr_15));
    }
    {
      Var_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_31, 0) = ((MR_Box) (VarStr_16));
    }
    {
      Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(1, Var_30, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[261])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_27, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[260])));
      MR_hl_field(1, Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      InnerPieces_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InnerPieces_17, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[259])));
      MR_hl_field(1, InnerPieces_17, 1) = ((MR_Box) (Var_25));
    }
    check_hlds__det_report__det_diagnose_switch_context_3_p_0(DetInfo_1, SwitchContexts_7, &OuterPieces_18);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[194])), InnerPieces_17);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), OuterPieces_18, Var_38);
  }
}

static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
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
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(0, Case_7, (MR_Integer) 0))));
      MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(0, Case_7, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_CoveredConsIds_15_15;
      MR_Word STATE_VARIABLE_CoveredConsIds_16_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_CoveredConsIds_0_2;

      mercury__set_tree234__insert_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), ((MR_Box) (MainConsId_10)), STATE_VARIABLE_CoveredConsIds_0_2, &STATE_VARIABLE_CoveredConsIds_15_15);
      mercury__set_tree234__insert_list_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), OtherConsIds_11, STATE_VARIABLE_CoveredConsIds_15_15, &STATE_VARIABLE_CoveredConsIds_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_CoveredConsIds_0_2 = STATE_VARIABLE_CoveredConsIds_16_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_CoveredConsIds_0_2 = next_value_of_STATE_VARIABLE_CoveredConsIds_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_report__append_prefix_and_maybe_verbose_6_p_0(
  MR_Word MaybeColor_7,
  MR_Word NeutralPrefixPieces_8,
  MR_Word ColorPrefixPieces0_9,
  MR_Word MainPieces_10,
  MR_Word VerbosePieces_11,
  MR_Word * Component_12)
{
  MR_Word PrefixPieces_13;
  MR_Word Var_16;

  Var_16 = parse_tree__error_spec__maybe_color_pieces_2_f_0(MaybeColor_7, ColorPrefixPieces0_9);
  PrefixPieces_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), NeutralPrefixPieces_8, Var_16);
  if ((VerbosePieces_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_17;

    Var_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_13, MainPieces_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Component_12 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
    }
  }
  else
  {
    MR_Word Var_18;
    MR_Word Var_19;

    Var_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_13, VerbosePieces_11);
    Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), PrefixPieces_13, MainPieces_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Component_12 = base;
      MR_hl_field(3, base, 0) = ((MR_Box) (Var_18));
      MR_hl_field(3, base, 1) = ((MR_Box) (Var_19));
    }
  }
}

static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Match_4;

  check_hlds__det_report__make_switch_match_no_args_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Match_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_Match_4));
}

static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0(
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
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0), (MR_Word) (&check_hlds__det_report_scalar_common_1[1]), OtherConsIds_4, OtherMatches_6);
    }
    else
    {
      MR_Word Conjunct_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Conjuncts_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(0, Conjunct_13, (MR_Integer) 0))));
      MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(0, Conjunct_13, (MR_Integer) 1))));
      MR_Word ArgVars_28;
      MR_Word TypeInfo_54_54;
      MR_Word Unification_25;
      MR_Word Var_27;
      MR_Word Var_57;

      succeeded = ((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unification_25 = ((MR_Word) ((MR_hl_field(1, GoalExpr_20, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unification_25)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_27 = ((MR_Word) ((MR_hl_field(1, Unification_25, (MR_Integer) 0))));
          Var_57 = ((MR_Word) ((MR_hl_field(1, Unification_25, (MR_Integer) 1))));
          ArgVars_28 = ((MR_Word) ((MR_hl_field(1, Unification_25, (MR_Integer) 2))));
          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(MainConsId_3, Var_57);
          if (succeeded)
          {
            TypeInfo_54_54 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
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

        succeeded = ((((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Disjuncts_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_20, (MR_Integer) 1))));
          {
            Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_46, 0) = ((MR_Box) (MainConsId_3));
          }
          succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(Disjuncts_36, STATE_VARIABLE_SwitchVarSynonyms_0_2, Var_46, OtherConsIds_4, &Var_47, &OtherMatches0_38);
          if (succeeded)
          {
            succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              MainMatch0_37 = ((MR_Word) ((MR_hl_field(1, Var_47, (MR_Integer) 0))));
          }
        }
        if (succeeded)
        {
          *MainMatch_5 = MainMatch0_37;
          *OtherMatches_6 = OtherMatches0_38;
        }
        else
        {
          MR_Word STATE_VARIABLE_SwitchVarSynonyms_48_48;
          MR_Word ToVar_43;
          MR_Word TypeInfo_56_56;
          MR_Word FromVar_44;
          MR_Word Unification_49;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_SwitchVarSynonyms_0_2;

          succeeded = ((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            Unification_49 = ((MR_Word) ((MR_hl_field(1, GoalExpr_20, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) Unification_49)) == (MR_Integer) 2);
            if (succeeded)
            {
              ToVar_43 = ((MR_Word) ((MR_hl_field(2, Unification_49, (MR_Integer) 0))));
              FromVar_44 = ((MR_Word) ((MR_hl_field(2, Unification_49, (MR_Integer) 1))));
              TypeInfo_56_56 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
              succeeded = mercury__list__member_2_p_0(TypeInfo_56_56, ((MR_Box) (FromVar_44)), STATE_VARIABLE_SwitchVarSynonyms_0_2);
            }
          }
          if (succeeded)
            {
              STATE_VARIABLE_SwitchVarSynonyms_48_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_SwitchVarSynonyms_48_48, 0) = ((MR_Box) (ToVar_43));
              MR_hl_field(1, STATE_VARIABLE_SwitchVarSynonyms_48_48, 1) = ((MR_Box) (STATE_VARIABLE_SwitchVarSynonyms_0_2));
            }
          else
            STATE_VARIABLE_SwitchVarSynonyms_48_48 = STATE_VARIABLE_SwitchVarSynonyms_0_2;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Conjuncts_14;
          next_value_of_STATE_VARIABLE_SwitchVarSynonyms_0_2 = STATE_VARIABLE_SwitchVarSynonyms_48_48;
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
check_hlds__det_report__find_switch_var_submatches_6_p_0(
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
    MR_Word Disjunct_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Disjuncts_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word GoalExpr_15 = ((MR_Word) ((MR_hl_field(0, Disjunct_8, (MR_Integer) 0))));
    MR_Word GoalInfo_16 = ((MR_Word) ((MR_hl_field(0, Disjunct_8, (MR_Integer) 1))));
    MR_Word Unification_20;
    MR_Word Var_22;
    MR_Word ConsId_23;
    MR_Word ArgVars_24;
    MR_Word MainConsId_28;

    succeeded = ((MR_tag((MR_Word) GoalExpr_15)) == (MR_Integer) 1);
    if (succeeded)
    {
      Unification_20 = ((MR_Word) ((MR_hl_field(1, GoalExpr_15, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) Unification_20)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_22 = ((MR_Word) ((MR_hl_field(1, Unification_20, (MR_Integer) 0))));
        ConsId_23 = ((MR_Word) ((MR_hl_field(1, Unification_20, (MR_Integer) 1))));
        ArgVars_24 = ((MR_Word) ((MR_hl_field(1, Unification_20, (MR_Integer) 2))));
        TypeInfo_40_40 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
        succeeded = mercury__list__member_2_p_0(TypeInfo_40_40, ((MR_Box) (Var_22)), SwitchVarSynonyms_2);
        if (succeeded)
        {
          succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MainConsId_28 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
            succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ConsId_23, MainConsId_28);
          }
          if (succeeded)
          {
            MR_Word TypeInfo_45_45;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_43;

            succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(Disjuncts_9, SwitchVarSynonyms_2, (MR_Word) ((MR_Unsigned) 0U), HeadVar__4_4, &Var_43, HeadVar__6_6);
            if (succeeded)
            {
              TypeInfo_45_45 = (MR_Word) (&check_hlds__det_report_scalar_common_2[214]);
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
              succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(Disjuncts_9, SwitchVarSynonyms_2, HeadVar__3_3, LeftOverConsIds_29, HeadVar__5_5, &LeftOverMatches_30);
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
check_hlds__det_report__det_diagnose_primitive_goal_3_p_0(
  MR_Word Desired_4,
  MR_Word Actual_5,
  MR_Word * Pieces_6)
{
  MR_Word DesiredCanFail_7;
  MR_Word DesiredSolns_8;
  MR_Word ActualCanFail_9;
  MR_Word ActualSolns_10;
  MR_Word CmpCanFail_11;
  MR_Word CmpSolns_13;
  MR_Word SolnsPieces_14;
  MR_Word ProblemPieces_15;

  parse_tree__prog_data__determinism_components_3_p_0(Desired_4, &DesiredCanFail_7, &DesiredSolns_8);
  parse_tree__prog_data__determinism_components_3_p_0(Actual_5, &ActualCanFail_9, &ActualSolns_10);
  parse_tree__prog_detism__compare_canfails_3_p_0(DesiredCanFail_7, ActualCanFail_9, &CmpCanFail_11);
  parse_tree__prog_detism__compare_solncounts_3_p_0(DesiredSolns_8, ActualSolns_10, &CmpSolns_13);
  switch (CmpSolns_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      SolnsPieces_14 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 0:
      SolnsPieces_14 = ((&check_hlds__det_report_vector_common_4[0 + DesiredSolns_8]))->check_hlds__det_report__vector_common_type_4_0__vct_4_f_0;
      break;
  }
  switch (CmpCanFail_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      if ((SolnsPieces_14 == (MR_Word) ((MR_Unsigned) 0U)))
        ProblemPieces_15 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word Var_39;

        Var_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SolnsPieces_14, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
        ProblemPieces_15 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_39);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word CanFailPieces_100 = (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[202]));

        if ((SolnsPieces_14 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_44;

          Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), CanFailPieces_100, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
          ProblemPieces_15 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_44);
        }
        else
        {
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_55;
          MR_Word Var_56;

          Var_49 = parse_tree__error_spec__color_as_incorrect_1_f_0(CanFailPieces_100);
          Var_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), SolnsPieces_14, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
          Var_55 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_56);
          Var_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[153])), Var_55);
          ProblemPieces_15 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_49, Var_50);
        }
      }
      break;
  }
  if ((ProblemPieces_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word DesiredPieces0_26;
    MR_Word ActualPieces0_27;
    MR_Word DesiredPieces_28;
    MR_Word ActualPieces_29;
    MR_Word Var_61;
    MR_String Var_62;
    MR_Word Var_67;
    MR_String Var_68;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_87;
    MR_Word Var_92;

    Var_62 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Desired_4);
    {
      Var_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_61, 0) = ((MR_Box) (Var_62));
    }
    {
      DesiredPieces0_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DesiredPieces0_26, 0) = ((MR_Box) (Var_61));
      MR_hl_field(1, DesiredPieces0_26, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[11])));
    }
    Var_68 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(Actual_5);
    {
      Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_67, 0) = ((MR_Box) (Var_68));
    }
    {
      ActualPieces0_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ActualPieces0_27, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, ActualPieces0_27, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
    }
    DesiredPieces_28 = parse_tree__error_spec__color_as_correct_1_f_0(DesiredPieces0_26);
    ActualPieces_29 = parse_tree__error_spec__color_as_incorrect_1_f_0(ActualPieces0_27);
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ActualPieces_29, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])));
    Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[213])), Var_92);
    Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])), Var_87);
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DesiredPieces_28, Var_83);
    *Pieces_6 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[211])), Var_82);
  }
  else
    *Pieces_6 = ProblemPieces_15;
}

static void MR_CALL 
check_hlds__det_report__report_determinism_problem_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word PredProcId_10,
  MR_String ErrorOrWarn_11,
  MR_String ProblemStr_12,
  MR_Word ReasonPieces_13,
  MR_Word DeclaredDetism_14,
  MR_Word InferredDetism_15,
  MR_Word * Msg_16)
{
  MR_Word ProcInfo_17;
  MR_Word DetismDecl_18;
  MR_Word Context_19;
  MR_Word ProcPieces_20;
  MR_String DeclaredStr_21;
  MR_String InferredStr_22;
  MR_Word DeclaredPieces_23;
  MR_Word InferredPieces_24;
  MR_Word Pieces_25;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_String Var_53;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_67;
  MR_Word Var_71;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_82;
  MR_Word Var_83;

  hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_9, PredProcId_10, &ProcInfo_17);
  hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(ProcInfo_17, &DetismDecl_18);
  hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_17, &Context_19);
  ProcPieces_20 = hlds__hlds_error_util__describe_one_proc_name_mode_6_f_0(ModuleInfo_9, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_3[0])), (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), PredProcId_10);
  DeclaredStr_21 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(DeclaredDetism_14);
  InferredStr_22 = parse_tree__parse_tree_out_misc__determinism_to_string_1_f_0(InferredDetism_15);
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) (DeclaredStr_21));
  }
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[11])));
  }
  DeclaredPieces_23 = parse_tree__error_spec__color_as_correct_1_f_0(Var_31);
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) (InferredStr_22));
  }
  {
    Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_38));
    MR_hl_field(1, Var_37, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
  }
  InferredPieces_24 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_37);
  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) (ErrorOrWarn_11));
  }
  switch (DetismDecl_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Var_53 = (MR_String) "determinism declaration";
      break;
    case (MR_Integer) 1:
      Var_53 = (MR_String) "implicit determinism declaration";
      break;
    case (MR_Integer) 2:
      Var_53 = (MR_String) "nonexistent determinism declaration";
      break;
  }
  {
    Var_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_52, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[178])));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[176])));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (MR_mkword(3, &check_hlds__det_report_scalar_common_2[8])));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_45));
  }
  {
    Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 6U));
    MR_hl_field(3, Var_62, 1) = ((MR_Box) (ProblemStr_12));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[13])));
  }
  Var_60 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_61);
  Var_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])), ReasonPieces_13);
  Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), InferredPieces_24, Var_83);
  Var_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[23])), Var_82);
  Var_76 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), DeclaredPieces_23, Var_77);
  Var_71 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[21])), Var_76);
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__det_report_scalar_common_2[16])), Var_71);
  Var_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_60, Var_67);
  Var_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcPieces_20, Var_59);
  Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_43, Var_58);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Msg_16 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Context_19));
    MR_hl_field(0, base, 1) = ((MR_Box) (Pieces_25));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____cc_unify_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____cc_unify_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____detism_check_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____detism_check_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____failing_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____failing_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____failing_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____failing_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____maybe_inform_incomplete_switches_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____maybe_inform_incomplete_switches_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____maybe_inform_incomplete_switches_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____maybe_inform_incomplete_switches_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____missing_cons_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____missing_cons_id_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____missing_cons_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____missing_cons_id_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____options_to_restore_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____options_to_restore_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____reported_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____reported_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____reported_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____reported_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____seen_call_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____seen_call_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____switch_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____switch_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____switch_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____switch_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____why_report_incomplete_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__det_report____Unify____why_report_incomplete_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__det_report____Compare____why_report_incomplete_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__det_report____Compare____why_report_incomplete_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__det_report__init(void)
{
}

void mercury__check_hlds__det_report__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_cc_unify_context_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_detism_check_kind_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_maybe_inform_incomplete_switches_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_missing_cons_id_info_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_options_to_restore_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_reported_switch_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_seen_call_id_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_context_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0);
	MR_register_type_ctor_info(&check_hlds__det_report__check_hlds__det_report__type_ctor_info_why_report_incomplete_switch_0);
}

void mercury__check_hlds__det_report__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__det_report__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.det_report.
