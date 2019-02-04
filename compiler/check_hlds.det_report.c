/*
** Automatically generated from `det_report.m'
** by the Mercury compiler,
** version rotd-2018-10-08
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
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.det_util.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
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
#include "solutions.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_detism.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s {
  MR_Word check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3;
  MR_Word * check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4;
  MR_Cont check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont;
  void * check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr;
  MR_bool check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded;
  MR_Word check_hlds__det_report__get_valid_dets_2_p_0_env_0__Var_5;
};

struct check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0_s {
  MR_Word check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__ModuleInfo_10;
  MR_bool check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded;
  MR_Word check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__TypeCtorInfo_65_65;
  MR_Word check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__FuncArgModes_16;
  jmp_buf check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__commit_0;
  MR_Word check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__FuncArgMode_18;
  MR_Box check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__conv1_FuncArgMode_18;
};

struct check_hlds__det_report__check_determinism_7_p_0_2_env_0_s {
  MR_Box * check_hlds__det_report__check_determinism_7_p_0_2_env_0__wrapper_arg_1;
  MR_Cont check_hlds__det_report__check_determinism_7_p_0_2_env_0__cont;
  void * check_hlds__det_report__check_determinism_7_p_0_2_env_0__cont_env_ptr;
  MR_Word check_hlds__det_report__check_determinism_7_p_0_2_env_0__conv0_Detism_4;
};


static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0;

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

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_value_ordered_maybe_inform_incomplete_switches_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_name_ordered_maybe_inform_incomplete_switches_0[2];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_maybe_inform_incomplete_switches_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0;

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_missing_cons_id_info_0_0[4];

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_missing_cons_id_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_missing_cons_id_info_0_0[1];

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_missing_cons_id_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_missing_cons_id_info_0[1];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_missing_cons_id_info_0[1];

static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0;

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

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_value_ordered_why_report_incomplete_switch_0[2];

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_name_ordered_why_report_incomplete_switch_0[2];

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_why_report_incomplete_switch_0[2];

static void MR_CALL 
check_hlds__det_report____Compare____why_report_incomplete_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__det_report____Unify____why_report_incomplete_switch_0_0(
  MR_Word HeadVar__2_1,
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
  MR_Word HeadVar__2_1,
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
  MR_Word VarSet_6,
  MR_Word FailingContext_7);

static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
  MR_Word ConsId_3,
  MR_Word * Match_4);

static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0(
  MR_Word EvalMethod_3,
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
check_hlds__det_report__check_for_multisoln_func_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__check_for_multisoln_func_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__check_for_multisoln_func_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__check_for_multisoln_func_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__check_for_multisoln_func_6_p_0(
  MR_Word PredProcId_7,
  MR_Word PredInfo_8,
  MR_Word ProcInfo_9,
  MR_Word ModuleInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
check_hlds__det_report__check_determinism_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
check_hlds__det_report__check_determinism_7_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
check_hlds__det_report__check_determinism_7_p_0(
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47);

static void MR_CALL 
check_hlds__det_report__report_determinism_problem_6_p_0(
  MR_Word PredProcId_7,
  MR_Word ModuleInfo_8,
  MR_Word MessagePieces_9,
  MR_Word DeclaredDetism_10,
  MR_Word InferredDetism_11,
  MR_Word * Msgs_12);

static MR_String MR_CALL 
check_hlds__det_report__detism_decl_name_1_f_0(
  MR_Word DetismDecl_3);

static void MR_CALL 
check_hlds__det_report__make_reqscope_checks_if_needed_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_7_p_0(
  MR_Word Goal_8,
  MR_Word InstMap0_9,
  MR_Word IIS_10,
  MR_Word MaybeReportedSwitch_11,
  MR_Word SwitchContexts_12,
  MR_Word STATE_VARIABLE_DetInfo_0_87,
  MR_Word * STATE_VARIABLE_DetInfo_88);

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
  MR_Word STATE_VARIABLE_DetInfo_0_50,
  MR_Word * STATE_VARIABLE_DetInfo_51);

static void MR_CALL 
check_hlds__det_report__generate_error_not_switch_on_required_var_5_p_0(
  MR_Word RequiredVar_6,
  MR_String ScopeWord_7,
  MR_Word ScopeGoalInfo_8,
  MR_Word STATE_VARIABLE_DetInfo_0_17,
  MR_Word * STATE_VARIABLE_DetInfo_18);

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
  MR_Word STATE_VARIABLE_DetInfo_0_36,
  MR_Word * STATE_VARIABLE_DetInfo_37);

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
  MR_Word tscc_proc_1_input_1_Goal_8,
  MR_Word tscc_proc_1_input_2_InstMap0_9,
  MR_Word tscc_proc_1_input_3_Desired_10,
  MR_Word tscc_proc_1_input_4_SwitchContexts_11,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19,
  MR_Word * tscc_output_ptr_2_Msgs_13);

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_10,
  MR_Word tscc_proc_2_input_2_GoalInfo_11,
  MR_Word tscc_proc_2_input_3_InstMap0_12,
  MR_Word tscc_proc_2_input_4_Desired_13,
  MR_Word tscc_proc_2_input_5_Actual_14,
  MR_Word tscc_proc_2_input_6_SwitchContexts_15,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19,
  MR_Word * tscc_output_ptr_2_Msgs_13);

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
  MR_Integer STATE_VARIABLE_DisjunctsWithSoln_0_8,
  MR_Integer * STATE_VARIABLE_DisjunctsWithSoln_9,
  MR_Word * HeadVar__10_10);

static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
  MR_Word Context_8,
  MR_Word CallUnifyContext_9,
  MR_Word DetInfo_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word * InitMsgs_13,
  MR_Word * StartingPieces_14);

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word STATE_VARIABLE_First_0_27,
  MR_Word Last_10,
  MR_Word UnifyContext_12,
  MR_Word DetInfo_13,
  MR_Word LHS_14,
  MR_Word RHS_15,
  MR_Word * AllPieces_16);

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
check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(
  MR_Word Desired_6,
  MR_Word Actual_7,
  MR_Word Context_8,
  MR_Word StartingPieces_9,
  MR_Word * Msgs_10);

static void MR_CALL 
check_hlds__det_report__generate_incomplete_switch_spec_9_p_0(
  MR_Word Why_10,
  MR_Word MaybeLimit_11,
  MR_Word InstMap0_12,
  MR_Word SwitchContexts_13,
  MR_Word SwitchVar_14,
  MR_Word Cases_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_DetInfo_0_37,
  MR_Word * STATE_VARIABLE_DetInfo_38);

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

static MR_Word MR_CALL 
check_hlds__det_report__cons_id_list_to_pieces_3_f_0(
  MR_Word ConsId1_5,
  MR_Word ConsIds2Plus_6,
  MR_Word EndCommaPieces_7);

static void MR_CALL 
check_hlds__det_report__compute_covered_cons_ids_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_CoveredConsIds_0_2,
  MR_Word * STATE_VARIABLE_CoveredConsIds_3);

static void MR_CALL 
check_hlds__det_report__append_prefix_and_maybe_verbose_4_p_0(
  MR_Word PrefixPieces_5,
  MR_Word MainPieces_6,
  MR_Word VerbosePieces_7,
  MR_Word * Component_8);

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


static /* final */ const MR_Box check_hlds__det_report_scalar_common_1[6][3];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[157][2];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[7][1];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_4[2][6];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_5[5][5];

static /* final */ const MR_Box check_hlds__det_report_scalar_common_8[1][7];


/* sealed */ struct check_hlds__det_report__vector_common_type_6_0_s {
  const MR_Word check_hlds__det_report__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct check_hlds__det_report__vector_common_type_6_0_s check_hlds__det_report_vector_common_6[4];

/* sealed */ struct check_hlds__det_report__vector_common_type_7_0_s {
  const MR_String check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;
};

static /* final */ const struct check_hlds__det_report__vector_common_type_7_0_s check_hlds__det_report_vector_common_7[8];

/* sealed */ struct check_hlds__det_report__vector_common_type_9_0_s {
  const MR_Word check_hlds__det_report__vector_common_type_9_0__vct_9_f_0;
};

static /* final */ const struct check_hlds__det_report__vector_common_type_9_0_s check_hlds__det_report_vector_common_9[8];



static /* final */ const MR_Box check_hlds__det_report_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_5[0])),
    ((MR_Box) (check_hlds__det_report__find_missing_cons_ids_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_5[1])),
    ((MR_Box) (check_hlds__det_report__find_switch_var_matches_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_5[2])),
    ((MR_Box) (check_hlds__det_report__reqscope_check_goal_detism_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_5[4])),
    ((MR_Box) (check_hlds__det_report__check_determinism_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_4[1])),
    ((MR_Box) (check_hlds__det_report__restore_det_warnings_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_2[157][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[6]))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "\'."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not satisfied."))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "could be tighter."))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "cc_multi"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "or"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "det"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must be"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[0])),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    ((MR_Box) (&check_hlds__det_report_scalar_common_2[25]))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[24])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "not a function."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Most likely, this procedure should be a predicate,"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "arguments would break referential transparency.)"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(Allowing functions to have more than one result for the same"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "should be determined only by the values of its arguments."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of its arguments; that is, the value of the function\'s result"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a function is supposed to be a true mathematical function"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In Mercury,"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Disjunction has multiple clauses with solutions."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[49])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Negated goal can succeed."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 57 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is required to be complete, but it is not."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but it does not cover"))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[60]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is required to be complete,"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the arm for"))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[64]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but the actual determinism"))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[66]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[65])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "context,"))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[67])))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_report_scalar_common_3[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "more."))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[71]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "type-specific unify predicate\?)"))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(or explicit call to a"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[79]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[78])))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Some weird unification"))
  },
  /* row 82 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[81]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[80])))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Inside the case"))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of the switch on"))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 87 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[86]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 89 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[88]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_Unsigned) 18U)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 91 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[90]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The switch on"))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "does not cover"))
  },
  /* row 95 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[94]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the switch on"))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "can fail"))
  },
  /* row 98 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[97]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 99 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[92]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "can succeed"))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[100]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "can succeed more than once"))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[102]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "has unknown determinism problem;"))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "desired determinism is"))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "while actual determinism is"))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with"))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[110]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Call to"))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Determinism declaration not satisfied."))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Desired determinism is"))
  },
  /* row 115 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 116 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the required determinism of the goal"))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in this scope is"))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but its actual determinism is"))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the arms of the switch on"))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "are required have"))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "a determinism that is acceptable in a"))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is"))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the goal inside the"))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "scope"))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not a switch on"))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 128 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[127]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Declared"))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "inferred"))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration not allowed for procedure"))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with determinism"))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The pragma requested is only valid"))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for the following"))
  },
  /* row 138 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: invalid determinism for"))
  },
  /* row 139 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[138]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the primary mode of a function cannot be"))
  },
  /* row 141 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[45])))
  },
  /* row 142 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__det_report_scalar_common_2[141]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 143 */
  {
    ((MR_Box) (&check_hlds__det_report_scalar_common_3[5])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 144 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Determinism error in lambda expression."))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "higher-order call"))
  },
  /* row 146 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[145]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "call to"))
  },
  /* row 148 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "can fail."))
  },
  /* row 149 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[148]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 150 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Unification of"))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Fail goal can fail."))
  },
  /* row 152 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[151]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is incomplete."))
  },
  /* row 154 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[153]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Negated goal can fail."))
  },
  /* row 156 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[155]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_3[7][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "main"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "..."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[52])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[54])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[29])))
  },
  /* row 6 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_4[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_5[5][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data_pragma__parse_tree__prog_data_pragma__type_ctor_info_eval_method_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box check_hlds__det_report_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0))
  },
};


static /* final */ const struct check_hlds__det_report__vector_common_type_6_0_s check_hlds__det_report_vector_common_6[4] = {
  /* row 0 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[101])) },
  /* row 1 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[103])) },
  /* row 2 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[101])) },
  /* row 3 */   {     (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[101])) },
};

static /* final */ const struct check_hlds__det_report__vector_common_type_7_0_s check_hlds__det_report_vector_common_7[8] = {
  /* row 0 */   {     (MR_String) "require_switch_arms_det" },
  /* row 1 */   {     (MR_String) "require_switch_arms_semidet" },
  /* row 2 */   {     (MR_String) "require_switch_arms_multi" },
  /* row 3 */   {     (MR_String) "require_switch_arms_nondet" },
  /* row 4 */   {     (MR_String) "require_switch_arms_cc_multi" },
  /* row 5 */   {     (MR_String) "require_switch_arms_cc_nondet" },
  /* row 6 */   {     (MR_String) "require_switch_arms_erroneous" },
  /* row 7 */   {     (MR_String) "require_switch_arms_failure" },
};

static /* final */ const struct check_hlds__det_report__vector_common_type_9_0_s check_hlds__det_report_vector_common_9[8] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 6 },
  /* row 7 */   {     (MR_Integer) 7 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__det_report__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__det_report__pair__pti_pair_2__plain_libs__options__type_ctor_info_option_0__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_PseudoTypeInfo) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0 = {
  (MR_String) "ccuc_unify",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_cc_unify_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1 = {
  (MR_String) "ccuc_switch",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_1
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_cc_unify_context_0_0
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_cc_unify_context_0_1,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____cc_unify_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____cc_unify_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "cc_unify_context",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_cc_unify_context_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_cc_unify_context_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_cc_unify_context_0
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_info_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0 = {
  (MR_String) "require_detism_scope",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_1[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1parse_tree__prog_data__type_ctor_info_cons_id_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1 = {
  (MR_String) "require_detism_switch_arm",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__det_report__check_hlds__det_report__field_types_detism_check_kind_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_0
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_detism_check_kind_0_1
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_detism_check_kind_0_1,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____detism_check_kind_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____detism_check_kind_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "detism_check_kind",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_detism_check_kind_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_detism_check_kind_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_detism_check_kind_0
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_goal_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0 = {
  (MR_String) "failing_context",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_failing_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_context_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_context_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____failing_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____failing_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "failing_context",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_context_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_context_0
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0[1] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0 = {
  (MR_String) "incomplete_switch",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_1 = {
  (MR_String) "fail_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_generic_call_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5 = {
  (MR_String) "generic_call_goal",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE_FULL_WORD,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  check_hlds__det_report__check_hlds__det_report__field_types_failing_goal_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_6 = {
  (MR_String) "negated_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 6,
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

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_0
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_2
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3[3] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_3,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_4,
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_failing_goal_0_5
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0[4] = {
  {
    (MR_Integer) 2,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 3,
    MR_SECTAG_REMOTE_FULL_WORD,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_failing_goal_0_3,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____failing_goal_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____failing_goal_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "failing_goal",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_failing_goal_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_failing_goal_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_failing_goal_0
};

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_maybe_inform_incomplete_switches_0_0 = {
  (MR_String) "do_not_inform_incomplete_switches",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_maybe_inform_incomplete_switches_0_1 = {
  (MR_String) "inform_incomplete_switches",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_value_ordered_maybe_inform_incomplete_switches_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_report____Unify____maybe_inform_incomplete_switches_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____maybe_inform_incomplete_switches_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "maybe_inform_incomplete_switches",
  {     check_hlds__det_report__check_hlds__det_report__enum_name_ordered_maybe_inform_incomplete_switches_0 },
  {     check_hlds__det_report__check_hlds__det_report__enum_value_ordered_maybe_inform_incomplete_switches_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_maybe_inform_incomplete_switches_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_missing_cons_id_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1parse_tree__error_util__type_ctor_info_format_component_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_missing_cons_id_info_0_0 = {
  (MR_String) "missing_cons_id_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_missing_cons_id_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_missing_cons_id_info_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_missing_cons_id_info_0_0
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_missing_cons_id_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_missing_cons_id_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_missing_cons_id_info_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_missing_cons_id_info_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_missing_cons_id_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_missing_cons_id_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____missing_cons_id_info_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____missing_cons_id_info_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "missing_cons_id_info",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_missing_cons_id_info_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_missing_cons_id_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_missing_cons_id_info_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&libs__options__libs__options__type_ctor_info_option_0),
    (MR_TypeInfo) (&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__det_report__pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_options_to_restore_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__det_report____Unify____options_to_restore_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____options_to_restore_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "options_to_restore",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1pair__ti_pair_2libs__options__type_ctor_info_option_0getopt_io__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_reported_switch_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1hlds__hlds_goal__type_ctor_info_case_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_reported_switch_0_0 = {
  (MR_String) "reported_switch",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_reported_switch_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_reported_switch_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_reported_switch_0_0
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_reported_switch_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_reported_switch_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_reported_switch_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_reported_switch_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_reported_switch_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_reported_switch_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____reported_switch_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____reported_switch_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "reported_switch",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_reported_switch_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_reported_switch_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_reported_switch_0
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0 = {
  (MR_String) "seen_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_seen_call_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1 = {
  (MR_String) "higher_order_call",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_1
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_seen_call_id_0_0
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_seen_call_id_0_1,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____seen_call_id_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____seen_call_id_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "seen_call_id",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_seen_call_id_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_seen_call_id_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_seen_call_id_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0[3] = {
  (MR_PseudoTypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__list__ti_list_1check_hlds__det_report__type_ctor_info_switch_match_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0 = {
  (MR_String) "switch_context",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_switch_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_context_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_context_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____switch_context_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____switch_context_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "switch_context",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_context_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_context_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_context_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__det_report__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&check_hlds__det_report__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__det_report__maybe__ti_maybe_1list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0 = {
  (MR_String) "switch_match",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__det_report__check_hlds__det_report__field_types_switch_match_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0
};

static const MR_DuPtagLayout check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__det_report__check_hlds__det_report__du_stag_ordered_switch_match_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0[1] = {
  &check_hlds__det_report__check_hlds__det_report__du_functor_desc_switch_match_0_0
};

static const MR_Integer check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__det_report____Unify____switch_match_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____switch_match_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "switch_match",
  {     check_hlds__det_report__check_hlds__det_report__du_name_ordered_switch_match_0 },
  {     check_hlds__det_report__check_hlds__det_report__du_ptag_ordered_switch_match_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_switch_match_0
};

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_why_report_incomplete_switch_0_0 = {
  (MR_String) "switch_required_to_be_complete",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__det_report__check_hlds__det_report__enum_functor_desc_why_report_incomplete_switch_0_1 = {
  (MR_String) "inform_incomplete_switch_option",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__det_report__check_hlds__det_report__enum_value_ordered_why_report_incomplete_switch_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__det_report____Unify____why_report_incomplete_switch_0_0_10001)),
  ((MR_Box) (check_hlds__det_report____Compare____why_report_incomplete_switch_0_0_10001)),
  (MR_String) "check_hlds.det_report",
  (MR_String) "why_report_incomplete_switch",
  {     check_hlds__det_report__check_hlds__det_report__enum_name_ordered_why_report_incomplete_switch_0 },
  {     check_hlds__det_report__check_hlds__det_report__enum_value_ordered_why_report_incomplete_switch_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__det_report__check_hlds__det_report__functor_number_map_why_report_incomplete_switch_0
};

static void MR_CALL 
check_hlds__det_report____Compare____why_report_incomplete_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____why_report_incomplete_switch_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      parse_tree__prog_data____Compare____cons_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[7]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__det_report_scalar_common_2[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
          MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_7, (MR_Integer) 0))));
          MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_8, (MR_Integer) 0))));
          MR_Word ArgX2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_7, (MR_Integer) 1))));
          MR_Word ArgY2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_8, (MR_Integer) 1))));
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
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
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
          MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 0))));
          MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 0))));
          MR_Word ArgX2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX2_5, (MR_Integer) 1))));
          MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY2_6, (MR_Integer) 1))));

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
}

void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Integer Var_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_6;

        hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, Var_18, ArgY1_5);
        succeeded = (SubResult1_6 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_6;
        else
          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_17, ArgY2_8);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
        if (succeeded)
          succeeded = (ArgX2_5 == ArgY2_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____reported_switch_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
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
      MR_Word SubResult1_6;

      mercury__term____Compare____context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
        {
          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____reported_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
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
}

void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____missing_cons_id_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_int_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_int_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[2]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____missing_cons_id_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&check_hlds__det_report_scalar_common_2[2]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_14_14 = (MR_Word) (&check_hlds__det_report_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____maybe_inform_incomplete_switches_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____maybe_inform_incomplete_switches_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__term____Compare____context_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        check_hlds__det_report____Compare____failing_goal_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_119 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_120 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_119 == CastY_120);
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
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
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
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_134 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Var_134)), ((MR_Box) (ArgY1_5)));
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_135 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_136 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_34;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), &SubResult1_34, ((MR_Box) (Var_136)), ((MR_Box) (ArgY1_33)));
                  succeeded = (SubResult1_34 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_34;
                  else
                  {
                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Var_135)), ((MR_Box) (ArgY2_36)));
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ArgY1_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_61;

                          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), &SubResult1_61, ((MR_Box) (Var_132)), ((MR_Box) (ArgY1_60)));
                          succeeded = (SubResult1_61 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_61;
                          else
                            parse_tree__prog_data____Compare____cons_id_0_0(HeadVar__1_1, Var_131, ArgY2_63);
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer Var_129 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_Word Var_130 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer ArgY2_90 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_88;

                          hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_88, Var_130, ArgY1_87);
                          succeeded = (SubResult1_88 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_88;
                          else
                            mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_129, ArgY2_90);
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_133 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          hlds__hlds_goal____Compare____generic_call_0_0(HeadVar__1_1, Var_133, ArgY1_109);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__term____Unify____context_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = check_hlds__det_report____Unify____failing_goal_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_22 == CastX_21);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeInfo_30_30;
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              TypeInfo_30_30 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_31_31;
            MR_Word TypeInfo_32_32;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_31_31 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              if (succeeded)
              {
                TypeInfo_32_32 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_32_32, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_27_27;
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;
                MR_Word ArgX2_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  TypeInfo_27_27 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                  if (succeeded)
                    succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_13, ArgY2_14);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_16;
                MR_Integer ArgX2_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Integer ArgY2_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_15, ArgY1_16);
                  if (succeeded)
                    succeeded = (ArgX2_17 == ArgY2_18);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = hlds__hlds_goal____Unify____generic_call_0_0(ArgX1_19, ArgY1_20);
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        hlds__hlds_goal____Compare____hlds_goal_info_0_0(HeadVar__1_1, Var_28, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_16;

        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), &SubResult1_16, ((MR_Box) (Var_31)), ((MR_Box) (ArgY1_15)));
        succeeded = (SubResult1_16 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_16;
        else
        {
          MR_Word SubResult2_19;

          parse_tree__prog_data____Compare____cons_id_0_0(&SubResult2_19, Var_30, ArgY2_18);
          succeeded = (SubResult2_19 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_19;
          else
          {
            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY3_21)));
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = hlds__hlds_goal____Unify____hlds_goal_info_0_0(ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Word TypeInfo_14_14;
      MR_Word TypeInfo_16_16;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        TypeInfo_14_14 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
        if (succeeded)
        {
          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            TypeInfo_16_16 = (MR_Word) (&check_hlds__det_report_scalar_common_2[1]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        hlds__hlds_goal____Compare____unify_context_0_0(HeadVar__1_1, Var_11, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__det_report____Unify____cc_unify_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = hlds__hlds_goal____Unify____unify_context_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report__restore_option_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Globals_0_7,
  MR_Word * STATE_VARIABLE_Globals_8)
{
  {
    MR_Word Option_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Value_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    libs__globals__set_option_4_p_0(Option_4, Value_5, STATE_VARIABLE_Globals_0_7, STATE_VARIABLE_Globals_8);
  }
}

static MR_Word MR_CALL 
check_hlds__det_report__failing_context_description_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarSet_6,
  MR_Word FailingContext_7)
{
  {
    MR_Word Msg_8;
    MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailingContext_7, (MR_Integer) 0))));
    MR_Word FailingGoal_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FailingContext_7, (MR_Integer) 1))));
    MR_Word Pieces_13;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;

    switch (MR_tag((MR_Word) FailingGoal_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(FailingGoal_10)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[152]));
            break;
          case (MR_Integer) 1:
            Pieces_13 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[156]));
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FailingGoal_10, (MR_Integer) 0))));
          MR_String VarStr_12;
          MR_Word Var_74;
          MR_Word Var_75;

          VarStr_12 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Var_11);
          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_75, 0) = ((MR_Box) (VarStr_12));
          }
          {
            Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Var_75));
            MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[154])));
          }
          {
            Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[93])));
            MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_74));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FailingGoal_10, (MR_Integer) 0))));
          MR_Word Var2_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), FailingGoal_10, (MR_Integer) 1))));
          MR_String Var1Str_16;
          MR_String Var2Str_17;
          MR_Word Var_58;
          MR_Word Var_59;
          MR_Word Var_60;
          MR_Word Var_63;
          MR_Word Var_64;

          Var1Str_16 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Var1_14);
          Var2Str_17 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Var2_15);
          {
            Var_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_59, 0) = ((MR_Box) (Var1Str_16));
          }
          {
            Var_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_64, 0) = ((MR_Box) (Var2Str_17));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[149])));
          }
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[92])));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_63));
          }
          {
            Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
            MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_60));
          }
          {
            Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[150])));
            MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_58));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), FailingGoal_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ConsId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FailingGoal_10, (MR_Integer) 2))));
              MR_Word Var_45;
              MR_Word Var_46;
              MR_Word Var_47;
              MR_Word Var_50;
              MR_Word Var_51;
              MR_Word Var_87 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FailingGoal_10, (MR_Integer) 1))));
              MR_String VarStr_88;

              VarStr_88 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_6, Var_87);
              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_46, 0) = ((MR_Box) (VarStr_88));
              }
              {
                Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 11U));
                MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (ConsId_18));
              }
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
                MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[149])));
              }
              {
                Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[108])));
                MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
              }
              {
                Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
                MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
              }
              {
                Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[150])));
                MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_45));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FailingGoal_10, (MR_Integer) 1))));
              MR_Word PredInfo_21;
              MR_String Name_22;
              MR_Word Var_37;
              MR_Word Var_38;

              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_5, PredId_19, &PredInfo_21);
              Name_22 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_21);
              {
                Var_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_38, 0) = ((MR_Box) (Name_22));
              }
              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (Var_38));
                MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[149])));
              }
              {
                Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[112])));
                MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_37));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word GenericCall_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FailingGoal_10, (MR_Integer) 1))));
              MR_Word GenericCallId_24;
              MR_Word Var_28;
              MR_String Var_29;
              MR_String Var_30;

              hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_23, &GenericCallId_24);
              Var_30 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(GenericCallId_24);
              Var_29 = parse_tree__error_util__capitalize_1_f_0(Var_30);
              {
                Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_28, 1) = ((MR_Box) (Var_29));
              }
              {
                Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (Var_28));
                MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[149])));
              }
            }
            break;
        }
        break;
    }
    Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces_13, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])));
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (Var_82));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_8, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Msg_8, 1) = ((MR_Box) (Var_80));
    }
    return Msg_8;
  }
}

static MR_String MR_CALL 
check_hlds__det_report__switch_match_to_string_2_f_0(
  MR_Word VarSet_4,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;
    MR_Word ConsId_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word MaybeArgVars_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

    HeadVar__3_3 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(VarSet_4, (MR_Integer) 1, ConsId_5, MaybeArgVars_6);
    return HeadVar__3_3;
  }
}

static void MR_CALL 
check_hlds__det_report__make_switch_match_no_args_2_p_0(
  MR_Word ConsId_3,
  MR_Word * Match_4)
{
  {
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Match_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ConsId_3));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s * env_ptr = (struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__Var_5 = hlds__hlds_pred__valid_determinism_for_eval_method_2_f_0((env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3, *((env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4));
    (env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded = ((env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__Var_5 == (MR_Integer) 1);
    if ((env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__succeeded)
      ((env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont)((env_ptr)->check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__det_report__get_valid_dets_2_p_0(
  MR_Word EvalMethod_3,
  MR_Word * Detism_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__det_report__get_valid_dets_2_p_0_env_0_s env;

    (env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__EvalMethod_3 = EvalMethod_3;
    (env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4 = Detism_4;
    (env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont = cont;
    (env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Integer slot_0 = (MR_Integer) 0;

      do
      {
        *((env).check_hlds__det_report__get_valid_dets_2_p_0_env_0__Detism_4) = ((&check_hlds__det_report_vector_common_9[0 + slot_0]))->check_hlds__det_report__vector_common_type_9_0__vct_9_f_0;
        check_hlds__det_report__get_valid_dets_2_p_0_1(&env);
        slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) (MR_Integer) 1);
      }
      while ((slot_0 < (MR_Integer) 8));
    }
  }
}

static void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Globals_8;

    check_hlds__det_report__restore_option_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Globals_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Globals_8));
  }
}

void MR_CALL 
check_hlds__det_report__restore_det_warnings_3_p_0(
  MR_Word OptionsToRestore_4,
  MR_Word STATE_VARIABLE_Globals_0_6,
  MR_Word * STATE_VARIABLE_Globals_7)
{
  {
    MR_Box conv1_STATE_VARIABLE_Globals_7;

    mercury__list__foldl_4_p_0((MR_Word) (&check_hlds__det_report_scalar_common_1[0]), (MR_Word) (&libs__globals__libs__globals__type_ctor_info_globals_0), (MR_Word) (&check_hlds__det_report_scalar_common_1[5]), OptionsToRestore_4, ((MR_Box) (STATE_VARIABLE_Globals_0_6)), &conv1_STATE_VARIABLE_Globals_7);
    *STATE_VARIABLE_Globals_7 = ((MR_Word) (conv1_STATE_VARIABLE_Globals_7));
  }
}

void MR_CALL 
check_hlds__det_report__disable_det_warnings_3_p_0(
  MR_Word * OptionsToRestore_4,
  MR_Word STATE_VARIABLE_Globals_0_8,
  MR_Word * STATE_VARIABLE_Globals_9)
{
  {
    MR_Word WarnSimple_6;
    MR_Word WarnDeclsTooLax_7;
    MR_Word Var_13;
    MR_Word STATE_VARIABLE_Globals_14_14;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_23;

    libs__globals__lookup_option_3_p_0(STATE_VARIABLE_Globals_0_8, (MR_Integer) 24, &WarnSimple_6);
    libs__globals__lookup_option_3_p_0(STATE_VARIABLE_Globals_0_8, (MR_Integer) 8, &WarnDeclsTooLax_7);
    Var_13 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_3[6]));
    libs__globals__set_option_4_p_0((MR_Integer) 24, Var_13, STATE_VARIABLE_Globals_0_8, &STATE_VARIABLE_Globals_14_14);
    libs__globals__set_option_4_p_0((MR_Integer) 8, Var_13, STATE_VARIABLE_Globals_14_14, STATE_VARIABLE_Globals_9);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) ((MR_Integer) 24));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (WarnSimple_6));
    }
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (WarnDeclsTooLax_7));
    }
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *OptionsToRestore_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_22));
    }
  }
}

MR_Word MR_CALL 
check_hlds__det_report__det_report_seen_call_id_2_f_0(
  MR_Word ModuleInfo_4,
  MR_Word SeenCall_5)
{
  {
    MR_Word Pieces_6;

    if ((SeenCall_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Pieces_6 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[146]));
    else
    {
      MR_Word PredId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SeenCall_5, (MR_Integer) 0))));
      MR_Word PredPieces_9;

      PredPieces_9 = hlds__hlds_error_util__describe_one_pred_name_3_f_0(ModuleInfo_4, (MR_Integer) 0, PredId_7);
      {
        Pieces_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[147])));
        MR_hl_field(MR_mktag(1), Pieces_6, 1) = ((MR_Box) (PredPieces_9));
      }
    }
    return Pieces_6;
  }
}

static MR_Box MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Msg_8;

    conv0_Msg_8 = check_hlds__det_report__failing_context_description_3_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Msg_8));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
check_hlds__det_report__failing_contexts_description_3_f_0(
  MR_Word ModuleInfo_5,
  MR_Word VarSet_6,
  MR_Word FailingContexts_7)
{
  {
    MR_Word HeadVar__4_4;
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (check_hlds__det_report__failing_contexts_description_3_f_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (ModuleInfo_5));
      MR_hl_field(MR_mktag(0), Var_8, 4) = ((MR_Box) (VarSet_6));
    }
    HeadVar__4_4 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_failing_context_0), (MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_8, FailingContexts_7);
    return HeadVar__4_4;
  }
}

MR_String MR_CALL 
check_hlds__det_report__promise_solutions_kind_str_1_f_0(
  MR_Word HeadVar__1_1)
{
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
}

void MR_CALL 
check_hlds__det_report__det_check_lambda_7_p_0(
  MR_Word DeclaredDetism_8,
  MR_Word InferredDetism_9,
  MR_Word Goal_10,
  MR_Word GoalInfo_11,
  MR_Word InstMap0_12,
  MR_Word STATE_VARIABLE_DetInfo_0_23,
  MR_Word * STATE_VARIABLE_DetInfo_24)
{
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
          MR_Word PredPieces_18;
          MR_Word Pieces_19;
          MR_Word GoalMsgs_20;
          MR_Word SortedGoalMsgs_21;
          MR_Word Spec_22;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_34;
          MR_Word Var_36;
          MR_Word Var_39;
          MR_Word Var_41;
          MR_Word Var_44;
          MR_Word Var_45;
          MR_String Var_46;
          MR_Word Var_47;
          MR_Word Var_50;
          MR_Word Var_53;
          MR_Word Var_54;
          MR_String Var_55;
          MR_Word STATE_VARIABLE_DetInfo_63_63;
          MR_Word Var_66;
          MR_Word Var_67;
          MR_Word Var_68;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word GoalExpr_84;
          MR_Word GoalInfo_85;
          MR_Word Actual_86;
          MR_Word CompareResult_87;

          check_hlds__det_util__det_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_DetInfo_0_23, &PredProcId_15);
          Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
          check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_23, &ModuleInfo_17);
          PredPieces_18 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(ModuleInfo_17, (MR_Integer) 1, PredProcId_15);
          Var_46 = parse_tree__prog_out__determinism_to_string_1_f_0(DeclaredDetism_8);
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
          }
          Var_55 = parse_tree__prog_out__determinism_to_string_1_f_0(InferredDetism_9);
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (Var_55));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[10])));
          }
          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[130])));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Var_53));
          }
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[106])));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_50));
          }
          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
            MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[129])));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
          }
          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[144])));
            MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
          }
          {
            Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[110])));
            MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
          }
          Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredPieces_18, Var_31);
          Pieces_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[128])), Var_30);
          GoalExpr_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0))));
          GoalInfo_85 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1))));
          Actual_86 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_85);
          parse_tree__prog_detism__compare_determinisms_3_p_0(DeclaredDetism_8, Actual_86, &CompareResult_87);
          switch (CompareResult_87) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 3:
            case (MR_Integer) 0:
              check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_84, GoalInfo_85, InstMap0_12, DeclaredDetism_8, Actual_86, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_DetInfo_0_23, &STATE_VARIABLE_DetInfo_63_63, &GoalMsgs_20);
              break;
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                GoalMsgs_20 = (MR_Word) ((MR_Unsigned) 0U);
                STATE_VARIABLE_DetInfo_63_63 = STATE_VARIABLE_DetInfo_0_23;
              }
              break;
          }
          parse_tree__error_util__sort_error_msgs_2_p_0(GoalMsgs_20, &SortedGoalMsgs_21);
          {
            Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (Pieces_19));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_68, 0) = ((MR_Box) (Context_16));
            MR_hl_field(MR_mktag(0), Var_68, 1) = ((MR_Box) (Var_69));
          }
          {
            Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
            MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_66 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_67, SortedGoalMsgs_21);
          {
            Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_66));
          }
          check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_22, STATE_VARIABLE_DetInfo_63_63, STATE_VARIABLE_DetInfo_24);
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_DetInfo_24 = STATE_VARIABLE_DetInfo_0_23;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_DetInfo_24 = STATE_VARIABLE_DetInfo_0_23;
        break;
    }
  }
}

void MR_CALL 
check_hlds__det_report__global_checking_pass_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_ModuleInfo_0_2,
  MR_Word * STATE_VARIABLE_ModuleInfo_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
      *STATE_VARIABLE_ModuleInfo_3 = STATE_VARIABLE_ModuleInfo_0_2;
    }
    else
    {
      MR_Word PredProcId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word PredProcIds_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word PredInfo_16;
      MR_Word ProcInfo_17;
      MR_Word STATE_VARIABLE_ModuleInfo_22_22;
      MR_Word STATE_VARIABLE_Specs_23_23;
      MR_Word STATE_VARIABLE_Specs_24_24;
      MR_Word STATE_VARIABLE_Specs_25_25;
      MR_Word MaybeDetism_33;
      MR_Word DeclaredDetism_34;
      MR_String Var_38;
      MR_Integer Var_39;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_2, PredProcId_12, &PredInfo_16, &ProcInfo_17);
      check_hlds__det_report__check_determinism_7_p_0(PredProcId_12, PredInfo_16, ProcInfo_17, STATE_VARIABLE_ModuleInfo_0_2, &STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_23_23);
      hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_17, &MaybeDetism_33);
      Var_38 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_16);
      succeeded = (strcmp(Var_38, (MR_String) "main") == 0);
      if (succeeded)
      {
        Var_39 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_16);
        succeeded = (Var_39 == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred__pred_info_is_exported_1_p_0(PredInfo_16);
          if (succeeded)
          {
            succeeded = (MaybeDetism_33 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              DeclaredDetism_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_33, (MR_Integer) 0))));
              switch (DeclaredDetism_34) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 4:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
              }
              succeeded = !(succeeded);
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word ProcContext_35;
        MR_Word Spec_37;
        MR_Word Var_68;
        MR_Word Var_69;

        hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_17, &ProcContext_35);
        {
          Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (ProcContext_35));
          MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[143])));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (Var_69));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(0), Spec_37, 2) = ((MR_Box) (Var_68));
        }
        {
          STATE_VARIABLE_Specs_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_24_24, 0) = ((MR_Box) (Spec_37));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_24_24, 1) = ((MR_Box) (STATE_VARIABLE_Specs_23_23));
        }
      }
      else
        STATE_VARIABLE_Specs_24_24 = STATE_VARIABLE_Specs_23_23;
      check_hlds__det_report__check_for_multisoln_func_6_p_0(PredProcId_12, PredInfo_16, ProcInfo_17, STATE_VARIABLE_ModuleInfo_22_22, STATE_VARIABLE_Specs_24_24, &STATE_VARIABLE_Specs_25_25);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredProcIds_13;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_2 = STATE_VARIABLE_ModuleInfo_22_22;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ModuleInfo_0_2 = next_value_of_STATE_VARIABLE_ModuleInfo_0_2;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__det_report__check_for_multisoln_func_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0_s * env_ptr = (struct check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
check_hlds__det_report__check_for_multisoln_func_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0_s * env_ptr = (struct check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__FuncArgMode_18 = ((MR_Word) ((env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__conv1_FuncArgMode_18));
    check_hlds__det_report__check_for_multisoln_func_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
check_hlds__det_report__check_for_multisoln_func_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0_s * env_ptr = (struct check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0((env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__ModuleInfo_10, (env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__FuncArgMode_18);
    (env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded = !((env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded);
    if ((env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded)
      check_hlds__det_report__check_for_multisoln_func_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
check_hlds__det_report__check_for_multisoln_func_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0_s * env_ptr = (struct check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__TypeCtorInfo_65_65, &(env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__conv1_FuncArgMode_18, (env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__FuncArgModes_16, check_hlds__det_report__check_for_multisoln_func_6_p_0_3, env_ptr);
        (env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
check_hlds__det_report__check_for_multisoln_func_6_p_0(
  MR_Word PredProcId_7,
  MR_Word PredInfo_8,
  MR_Word ProcInfo_9,
  MR_Word ModuleInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  {
    struct check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0_s env;

    (env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__ModuleInfo_10 = ModuleInfo_10;
    {
      MR_Word InferredDetism_12;
      MR_Word PredArgModes_15;
      MR_Word NumSolns_14;
      MR_Word Var_29;
      MR_Word _CanFail_13;
      MR_Word _FuncResultMode_17;
      MR_Box conv0__FuncResultMode_17;

      hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_9, &InferredDetism_12);
      Var_29 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(PredInfo_8);
      (env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded = (Var_29 == (MR_Integer) 1);
      if ((env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded)
      {
        parse_tree__prog_data__determinism_components_3_p_0(InferredDetism_12, &_CanFail_13, &NumSolns_14);
        (env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded = (NumSolns_14 != (MR_Integer) 0);
        if ((env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded)
        {
          (env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded = (NumSolns_14 != (MR_Integer) 1);
          if ((env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded)
          {
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_9, &PredArgModes_15);
            (env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__TypeCtorInfo_65_65 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0);
            parse_tree__prog_util__pred_args_to_func_args_3_p_0((env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__TypeCtorInfo_65_65, PredArgModes_15, &(env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__FuncArgModes_16, &conv0__FuncResultMode_17);
            _FuncResultMode_17 = ((MR_Word) (conv0__FuncResultMode_17));
            check_hlds__det_report__check_for_multisoln_func_6_p_0_4(&env);
            (env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded = !((env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded);
          }
        }
      }
      if ((env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__succeeded)
      {
        MR_Word FuncContext_19;
        MR_Word InstVarSet_20;
        MR_Word PredId_21;
        MR_Word PredModePieces_23;
        MR_Word MainPieces_24;
        MR_Word Spec_26;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_String Var_46;
        MR_Word Var_55;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_58;
        MR_Integer _ProcId_22;

        hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_9, &FuncContext_19);
        hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_9, &InstVarSet_20);
        PredId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_7, (MR_Integer) 0))));
        _ProcId_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_7, (MR_Integer) 1))));
        PredModePieces_23 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0((env).check_hlds__det_report__check_for_multisoln_func_6_p_0_env_0__ModuleInfo_10, (MR_Integer) 1, PredId_21, InstVarSet_20, PredArgModes_15);
        Var_46 = parse_tree__mercury_to_mercury__mercury_det_to_string_1_f_0(InferredDetism_12);
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_45, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_45, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (Var_45));
          MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[140])));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[110])));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
        }
        Var_35 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PredModePieces_23, Var_36);
        MainPieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[139])), Var_35);
        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (MainPieces_24));
        }
        {
          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
          MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[142])));
        }
        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (FuncContext_19));
          MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_57));
        }
        {
          Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
          MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_26, 1) = ((MR_Box) ((MR_Unsigned) 40U));
          MR_hl_field(MR_mktag(0), Spec_26, 2) = ((MR_Box) (Var_55));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_28 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_27));
        }
      }
      else
        *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
    }
  }
}

static MR_Box MR_CALL 
check_hlds__det_report__check_determinism_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = parse_tree__prog_out__determinism_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__det_report__check_determinism_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct check_hlds__det_report__check_determinism_7_p_0_2_env_0_s * env_ptr = (struct check_hlds__det_report__check_determinism_7_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->check_hlds__det_report__check_determinism_7_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->check_hlds__det_report__check_determinism_7_p_0_2_env_0__conv0_Detism_4));
    ((env_ptr)->check_hlds__det_report__check_determinism_7_p_0_2_env_0__cont)((env_ptr)->check_hlds__det_report__check_determinism_7_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
check_hlds__det_report__check_determinism_7_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct check_hlds__det_report__check_determinism_7_p_0_2_env_0_s env;

    (env).check_hlds__det_report__check_determinism_7_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).check_hlds__det_report__check_determinism_7_p_0_2_env_0__cont = cont;
    (env).check_hlds__det_report__check_determinism_7_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      check_hlds__det_report__get_valid_dets_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), &(env).check_hlds__det_report__check_determinism_7_p_0_2_env_0__conv0_Detism_4, check_hlds__det_report__check_determinism_7_p_0_1, &env);
    }
  }
}

static void MR_CALL 
check_hlds__det_report__check_determinism_7_p_0(
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_44,
  MR_Word * STATE_VARIABLE_ModuleInfo_45,
  MR_Word STATE_VARIABLE_Specs_0_46,
  MR_Word * STATE_VARIABLE_Specs_47)
{
  {
    MR_bool succeeded;
    MR_Word MaybeDetism_13;
    MR_Word InferredDetism_14;
    MR_Word EvalMethod_34;
    MR_Word Valid_35;
    MR_Word STATE_VARIABLE_Specs_86_86;
    MR_Word STATE_VARIABLE_Specs_87_87;

    hlds__hlds_pred__proc_info_get_declared_determinism_2_p_0(ProcInfo_10, &MaybeDetism_13);
    hlds__hlds_pred__proc_info_get_inferred_determinism_2_p_0(ProcInfo_10, &InferredDetism_14);
    if ((MaybeDetism_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
      STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_0_46;
    }
    else
    {
      MR_Word DeclaredDetism_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDetism_13, (MR_Integer) 0))));
      MR_Word Cmp_16;

      parse_tree__prog_detism__compare_determinisms_3_p_0(DeclaredDetism_15, InferredDetism_14, &Cmp_16);
      switch (Cmp_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 0:
          {
            MR_Word Goal_26;
            MR_Word VarSet_27;
            MR_Word VarTypes_28;
            MR_Word InstMap0_29;
            MR_Word DetInfo0_30;
            MR_Word DetInfo_31;
            MR_Word GoalMsgs_32;
            MR_Word SortedGoalMsgs_33;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_String Var_52;
            MR_Word Var_65;
            MR_Word DetismDecl_142;
            MR_Word MessagePieces_143;
            MR_Word ReportMsgs_144;
            MR_Word ReportSpec_145;

            hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(ProcInfo_10, &DetismDecl_142);
            Var_52 = check_hlds__det_report__detism_decl_name_1_f_0(DetismDecl_142);
            {
              Var_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), Var_51, 1) = ((MR_Box) (Var_52));
            }
            {
              Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
              MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[12])));
            }
            {
              MessagePieces_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MessagePieces_143, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[131])));
              MR_hl_field(MR_mktag(1), MessagePieces_143, 1) = ((MR_Box) (Var_50));
            }
            check_hlds__det_report__report_determinism_problem_6_p_0(PredProcId_8, STATE_VARIABLE_ModuleInfo_0_44, MessagePieces_143, DeclaredDetism_15, InferredDetism_14, &ReportMsgs_144);
            hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_10, &Goal_26);
            hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_27);
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &VarTypes_28);
            hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo_10, STATE_VARIABLE_ModuleInfo_0_44, &InstMap0_29);
            check_hlds__det_util__det_info_init_7_p_0(STATE_VARIABLE_ModuleInfo_0_44, PredProcId_8, VarSet_27, VarTypes_28, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_30);
            check_hlds__det_report__det_diagnose_goal_7_p_0(Goal_26, InstMap0_29, DeclaredDetism_15, (MR_Word) ((MR_Unsigned) 0U), DetInfo0_30, &DetInfo_31, &GoalMsgs_32);
            check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_31, STATE_VARIABLE_ModuleInfo_45);
            parse_tree__error_util__sort_error_msgs_2_p_0(GoalMsgs_32, &SortedGoalMsgs_33);
            Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), ReportMsgs_144, SortedGoalMsgs_33);
            {
              ReportSpec_145 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ReportSpec_145, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(0), ReportSpec_145, 1) = ((MR_Box) ((MR_Unsigned) 40U));
              MR_hl_field(MR_mktag(0), ReportSpec_145, 2) = ((MR_Box) (Var_65));
            }
            {
              STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (ReportSpec_145));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
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
            MR_Word Var_72;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;

            hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_44, &Globals_17);
            libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 8, &ShouldIssueWarning_18);
            libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 9, &WarnAboutInferredErroneous_19);
            hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_9, &Markers_20);
            succeeded = (ShouldIssueWarning_18 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_69 = (MR_Integer) 12;
              succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, Var_69);
              succeeded = !(succeeded);
              if (succeeded)
              {
                Var_70 = (MR_Integer) 0;
                succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, Var_70);
                succeeded = !(succeeded);
                if (succeeded)
                {
                  Var_71 = (MR_Integer) 6;
                  succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_20, Var_71);
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
                          {
                            succeeded = (InferredDetism_14 != (MR_Integer) 6);
                          }
                          break;
                        case (MR_Integer) 1:
                          succeeded = MR_TRUE;
                          break;
                      }
                      if (succeeded)
                      {
                        hlds__hlds_pred__pred_info_get_status_2_p_0(PredInfo_9, &Status_21);
                        Var_72 = hlds__status__pred_status_defined_in_this_module_1_f_0(Status_21);
                        succeeded = (Var_72 == (MR_Integer) 1);
                      }
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              MR_Word DetismDecl_22;
              MR_Word MessagePieces_23;
              MR_Word ReportMsgs_24;
              MR_Word ReportSpec_25;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_String Var_77;

              hlds__hlds_pred__proc_info_get_detism_decl_2_p_0(ProcInfo_10, &DetismDecl_22);
              Var_77 = check_hlds__det_report__detism_decl_name_1_f_0(DetismDecl_22);
              {
                Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_77));
              }
              {
                Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
                MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[14])));
              }
              {
                MessagePieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MessagePieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[132])));
                MR_hl_field(MR_mktag(1), MessagePieces_23, 1) = ((MR_Box) (Var_75));
              }
              check_hlds__det_report__report_determinism_problem_6_p_0(PredProcId_8, STATE_VARIABLE_ModuleInfo_0_44, MessagePieces_23, DeclaredDetism_15, InferredDetism_14, &ReportMsgs_24);
              {
                ReportSpec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ReportSpec_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(0), ReportSpec_25, 1) = ((MR_Box) ((MR_Unsigned) 40U));
                MR_hl_field(MR_mktag(0), ReportSpec_25, 2) = ((MR_Box) (ReportMsgs_24));
              }
              {
                STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (ReportSpec_25));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_46));
              }
            }
            else
              STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_0_46;
            *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
          }
          break;
        case (MR_Integer) 1:
          {
            *STATE_VARIABLE_ModuleInfo_45 = STATE_VARIABLE_ModuleInfo_0_44;
            STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_0_46;
          }
          break;
      }
    }
    check_hlds__det_report__make_reqscope_checks_if_needed_6_p_0(*STATE_VARIABLE_ModuleInfo_45, PredProcId_8, PredInfo_9, ProcInfo_10, STATE_VARIABLE_Specs_86_86, &STATE_VARIABLE_Specs_87_87);
    hlds__hlds_pred__proc_info_get_eval_method_2_p_0(ProcInfo_10, &EvalMethod_34);
    Valid_35 = hlds__hlds_pred__valid_determinism_for_eval_method_2_f_0(EvalMethod_34, InferredDetism_14);
    switch (Valid_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Context_36;
          MR_Word MainPieces_37;
          MR_Word Detisms_38;
          MR_Word DetismStrs_39;
          MR_Word SortedDetismStrs_40;
          MR_Word DetismPieces_41;
          MR_Word VerbosePieces_42;
          MR_Word ValidSpec_43;
          MR_Word Var_90;
          MR_Word Var_91;
          MR_String Var_92;
          MR_Word Var_93;
          MR_Word Var_96;
          MR_Word Var_99;
          MR_Word Var_100;
          MR_String Var_101;
          MR_Word Var_108;
          MR_Word Var_110;
          MR_Word Var_113;
          MR_Word Var_116;
          MR_Word Var_117;
          MR_String Var_118;
          MR_Word Var_121;
          MR_Word Var_132;
          MR_Word Var_133;
          MR_Word Var_134;
          MR_Word Var_135;
          MR_Word Var_136;
          MR_Word Var_137;
          MR_Box conv2_Var_118;

          hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_10, &Context_36);
          Var_92 = parse_tree__prog_out__eval_method_to_pragma_name_1_f_0(EvalMethod_34);
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_91, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Var_91, 1) = ((MR_Box) (Var_92));
          }
          Var_101 = parse_tree__prog_out__determinism_to_string_1_f_0(InferredDetism_14);
          {
            Var_100 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_100, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_100, 1) = ((MR_Box) (Var_101));
          }
          {
            Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
          }
          {
            Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[135])));
            MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_99));
          }
          {
            Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[134])));
            MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_96));
          }
          {
            Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (Var_91));
            MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_93));
          }
          {
            MainPieces_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MainPieces_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[133])));
            MR_hl_field(MR_mktag(1), MainPieces_37, 1) = ((MR_Box) (Var_90));
          }
          {
            Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_5[3]));
            MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (check_hlds__det_report__check_determinism_7_p_0_2));
            MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (EvalMethod_34));
          }
          mercury__solutions__solutions_2_p_1((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), Var_108, &Detisms_38);
          DetismStrs_39 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__det_report_scalar_common_1[4]), Detisms_38);
          mercury__list__sort_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DetismStrs_39, &SortedDetismStrs_40);
          DetismPieces_41 = parse_tree__error_util__list_to_pieces_1_f_0(SortedDetismStrs_40);
          conv2_Var_118 = parse_tree__error_util__choose_number_3_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Detisms_38, ((MR_Box) ((MR_String) "determinism")), ((MR_Box) ((MR_String) "determinisms")));
          Var_118 = ((MR_String) (conv2_Var_118));
          {
            Var_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_117, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_117, 1) = ((MR_Box) (Var_118));
          }
          {
            Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[110])));
            MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (DetismPieces_41));
          }
          {
            Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (Var_117));
            MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_121));
          }
          {
            Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[137])));
            MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_116));
          }
          {
            Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[136])));
            MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
          }
          VerbosePieces_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_110, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
          {
            Var_135 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_135, 0) = ((MR_Box) (MainPieces_37));
          }
          {
            Var_137 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_137, 0) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(2), Var_137, 1) = ((MR_Box) (VerbosePieces_42));
          }
          {
            Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (Var_137));
            MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Var_135));
            MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_136));
          }
          {
            Var_133 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (Context_36));
            MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (Var_134));
          }
          {
            Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (Var_133));
            MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ValidSpec_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ValidSpec_43, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), ValidSpec_43, 1) = ((MR_Box) ((MR_Unsigned) 40U));
            MR_hl_field(MR_mktag(0), ValidSpec_43, 2) = ((MR_Box) (Var_132));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_47 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ValidSpec_43));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_87_87));
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_47 = STATE_VARIABLE_Specs_87_87;
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_report__report_determinism_problem_6_p_0(
  MR_Word PredProcId_7,
  MR_Word ModuleInfo_8,
  MR_Word MessagePieces_9,
  MR_Word DeclaredDetism_10,
  MR_Word InferredDetism_11,
  MR_Word * Msgs_12)
{
  {
    MR_Word ProcInfo_13;
    MR_Word Context_14;
    MR_Word ProcPieces_15;
    MR_Word Pieces_16;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_35;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_String Var_40;
    MR_Word Var_41;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_String Var_49;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;

    hlds__hlds_module__module_info_proc_info_3_p_0(ModuleInfo_8, PredProcId_7, &ProcInfo_13);
    hlds__hlds_pred__proc_info_get_context_2_p_0(ProcInfo_13, &Context_14);
    ProcPieces_15 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(ModuleInfo_8, (MR_Integer) 1, PredProcId_7);
    Var_40 = parse_tree__prog_out__determinism_to_string_1_f_0(DeclaredDetism_10);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (Var_40));
    }
    Var_49 = parse_tree__prog_out__determinism_to_string_1_f_0(InferredDetism_11);
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (Var_49));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[130])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[106])));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[129])));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
    }
    Var_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[8])), Var_35);
    Var_30 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), MessagePieces_9, Var_31);
    Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[47])), Var_30);
    Var_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ProcPieces_15, Var_23);
    Pieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[128])), Var_22);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Pieces_16));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_57));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Msgs_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_String MR_CALL 
check_hlds__det_report__detism_decl_name_1_f_0(
  MR_Word DetismDecl_3)
{
  {
    MR_String Name_4;

    switch (DetismDecl_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Name_4 = (MR_String) "determinism declaration";
        break;
      case (MR_Integer) 1:
        Name_4 = (MR_String) "implicit determinism declaration";
        break;
      case (MR_Integer) 2:
        Name_4 = (MR_String) "nonexistent determinism declaration";
        break;
    }
    return Name_4;
  }
}

static void MR_CALL 
check_hlds__det_report__make_reqscope_checks_if_needed_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word PredInfo_9,
  MR_Word ProcInfo_10,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  {
    MR_bool succeeded;
    MR_Word Markers_12;
    MR_Word InformIncompleteSwitches_14;
    MR_Word Globals_13;
    MR_Word Var_25;
    MR_Word Var_26;

    hlds__hlds_pred__pred_info_get_markers_2_p_0(PredInfo_9, &Markers_12);
    succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, (MR_Integer) 26);
    if (succeeded)
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_13);
      Var_25 = (MR_Integer) 50;
      Var_26 = (MR_Integer) 1;
      succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_13, Var_25, Var_26);
    }
    if (succeeded)
    {
      InformIncompleteSwitches_14 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = hlds__hlds_pred__check_marker_2_p_0(Markers_12, (MR_Integer) 25);
      if (succeeded)
      {
        InformIncompleteSwitches_14 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      MR_Word Goal_15;
      MR_Word VarSet_16;
      MR_Word VarTypes_17;
      MR_Word InstMap0_18;
      MR_Word DetInfo0_19;
      MR_Word DetInfo_20;
      MR_Word RCSSpecs_21;

      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_10, &Goal_15);
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_16);
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_10, &VarTypes_17);
      hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(ProcInfo_10, ModuleInfo_7, &InstMap0_18);
      check_hlds__det_util__det_info_init_7_p_0(ModuleInfo_7, PredProcId_8, VarSet_16, VarTypes_17, (MR_Integer) 1, (MR_Word) ((MR_Unsigned) 0U), &DetInfo0_19);
      check_hlds__det_report__reqscope_check_goal_7_p_0(Goal_15, InstMap0_18, InformIncompleteSwitches_14, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), DetInfo0_19, &DetInfo_20);
      check_hlds__det_util__det_info_get_error_specs_2_p_0(DetInfo_20, &RCSSpecs_21);
      *STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RCSSpecs_21, STATE_VARIABLE_Specs_0_22);
    }
    else
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_7_p_0(
  MR_Word Goal_8,
  MR_Word InstMap0_9,
  MR_Word IIS_10,
  MR_Word MaybeReportedSwitch_11,
  MR_Word SwitchContexts_12,
  MR_Word STATE_VARIABLE_DetInfo_0_87,
  MR_Word * STATE_VARIABLE_DetInfo_88)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
    MR_Word GoalInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_33 = (MR_Word) (MR_body((MR_Word) (GoalExpr_14), (MR_Integer) 0));
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
          MR_Word RHS_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_14, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) RHS_49)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_DetInfo_88 = STATE_VARIABLE_DetInfo_0_87;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_DetInfo_88 = STATE_VARIABLE_DetInfo_0_87;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Vars_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_49, (MR_Integer) 3))));
                MR_Word Modes_63 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_49, (MR_Integer) 4))));
                MR_Word LambdaGoal_65 = ((MR_Word) ((MR_hl_field(MR_mktag(2), RHS_49, (MR_Integer) 6))));
                MR_Word VarsModes_66;
                MR_Word ModuleInfo_67;
                MR_Word LambdaInstMap0_68;
                MR_Word next_value_of_Goal_8;
                MR_Word next_value_of_InstMap0_9;

                mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&check_hlds__det_report_scalar_common_2[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0), Vars_62, Modes_63, &VarsModes_66);
                check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_87, &ModuleInfo_67);
                check_hlds__det_report__lambda_update_instmap_4_p_0(VarsModes_66, ModuleInfo_67, InstMap0_9, &LambdaInstMap0_68);
                // direct tailcall eliminated
                ;
                next_value_of_Goal_8 = LambdaGoal_65;
                next_value_of_InstMap0_9 = LambdaInstMap0_68;
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
        *STATE_VARIABLE_DetInfo_88 = STATE_VARIABLE_DetInfo_0_87;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_DetInfo_88 = STATE_VARIABLE_DetInfo_0_87;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_DetInfo_88 = STATE_VARIABLE_DetInfo_0_87;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 2))));

              check_hlds__det_report__reqscope_check_conj_7_p_0(Goals_17, InstMap0_9, IIS_10, MaybeReportedSwitch_11, SwitchContexts_12, STATE_VARIABLE_DetInfo_0_87, STATE_VARIABLE_DetInfo_88);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1))));

              check_hlds__det_report__reqscope_check_disj_6_p_0(Goals_116, InstMap0_9, IIS_10, SwitchContexts_12, STATE_VARIABLE_DetInfo_0_87, STATE_VARIABLE_DetInfo_88);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1))));
              MR_Word CanFail_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 3))));
              MR_Word VarTypes_26;
              MR_Word VarType_27;
              MR_Word STATE_VARIABLE_DetInfo_111_111;

              switch (CanFail_19) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Context_21;

                    Context_21 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_15);
                    succeeded = (IIS_10 == (MR_Integer) 0);
                    if (!(succeeded))
                    {
                      MR_Word TypeInfo_124_124;
                      MR_Word TypeInfo_125_125;
                      MR_Word ReportedSwitch_22;
                      MR_Word ReportedContext_23;
                      MR_Word ReportedVar_24;
                      MR_Word ReportedCases_25;

                      succeeded = (MaybeReportedSwitch_11 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        ReportedSwitch_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeReportedSwitch_11, (MR_Integer) 0))));
                        ReportedContext_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReportedSwitch_22, (MR_Integer) 0))));
                        ReportedVar_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReportedSwitch_22, (MR_Integer) 1))));
                        ReportedCases_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ReportedSwitch_22, (MR_Integer) 2))));
                        succeeded = mercury__term____Unify____context_0_0(ReportedContext_23, Context_21);
                        if (succeeded)
                        {
                          TypeInfo_124_124 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_124_124, ((MR_Box) (ReportedVar_24)), ((MR_Box) (Var_18)));
                          if (succeeded)
                          {
                            TypeInfo_125_125 = (MR_Word) (&check_hlds__det_report_scalar_common_2[4]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_125_125, ((MR_Box) (ReportedCases_25)), ((MR_Box) (Cases_20)));
                          }
                        }
                      }
                    }
                    if (succeeded)
                      STATE_VARIABLE_DetInfo_111_111 = STATE_VARIABLE_DetInfo_0_87;
                    else
                    {
                      check_hlds__det_report__generate_incomplete_switch_spec_9_p_0((MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_3[4])), InstMap0_9, SwitchContexts_12, Var_18, Cases_20, Context_21, STATE_VARIABLE_DetInfo_0_87, &STATE_VARIABLE_DetInfo_111_111);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  STATE_VARIABLE_DetInfo_111_111 = STATE_VARIABLE_DetInfo_0_87;
                  break;
              }
              check_hlds__det_util__det_info_get_vartypes_2_p_0(STATE_VARIABLE_DetInfo_111_111, &VarTypes_26);
              hlds__vartypes__lookup_var_type_3_p_0(VarTypes_26, Var_18, &VarType_27);
              check_hlds__det_report__reqscope_check_cases_8_p_0(Var_18, VarType_27, Cases_20, InstMap0_9, IIS_10, SwitchContexts_12, STATE_VARIABLE_DetInfo_111_111, STATE_VARIABLE_DetInfo_88);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1))));
              MR_Word ScopeMaybeReportedSwitch_35;
              MR_Word STATE_VARIABLE_DetInfo_99_99;
              MR_Word SubGoal_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 2))));
              MR_Word next_value_of_Goal_8;
              MR_Word next_value_of_MaybeReportedSwitch_11;
              MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_87;

              check_hlds__det_report__reqscope_check_scope_8_p_0(SwitchContexts_12, Reason_34, SubGoal_117, GoalInfo_15, InstMap0_9, &ScopeMaybeReportedSwitch_35, STATE_VARIABLE_DetInfo_0_87, &STATE_VARIABLE_DetInfo_99_99);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_8 = SubGoal_117;
              next_value_of_MaybeReportedSwitch_11 = ScopeMaybeReportedSwitch_35;
              next_value_of_STATE_VARIABLE_DetInfo_0_87 = STATE_VARIABLE_DetInfo_99_99;
              Goal_8 = next_value_of_Goal_8;
              MaybeReportedSwitch_11 = next_value_of_MaybeReportedSwitch_11;
              STATE_VARIABLE_DetInfo_0_87 = next_value_of_STATE_VARIABLE_DetInfo_0_87;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 2))));
              MR_Word Then_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 3))));
              MR_Word Else_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 4))));
              MR_Word InstMap1_32;
              MR_Word STATE_VARIABLE_DetInfo_104_104;
              MR_Word STATE_VARIABLE_DetInfo_106_106;
              MR_Word next_value_of_Goal_8;
              MR_Word next_value_of_STATE_VARIABLE_DetInfo_0_87;

              check_hlds__det_report__reqscope_check_goal_7_p_0(Cond_29, InstMap0_9, IIS_10, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts_12, STATE_VARIABLE_DetInfo_0_87, &STATE_VARIABLE_DetInfo_104_104);
              hlds__goal_util__update_instmap_3_p_0(Cond_29, InstMap0_9, &InstMap1_32);
              check_hlds__det_report__reqscope_check_goal_7_p_0(Then_30, InstMap1_32, IIS_10, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts_12, STATE_VARIABLE_DetInfo_104_104, &STATE_VARIABLE_DetInfo_106_106);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_8 = Else_31;
              next_value_of_STATE_VARIABLE_DetInfo_0_87 = STATE_VARIABLE_DetInfo_106_106;
              Goal_8 = next_value_of_Goal_8;
              MaybeReportedSwitch_11 = (MR_Word) ((MR_Unsigned) 0U);
              STATE_VARIABLE_DetInfo_0_87 = next_value_of_STATE_VARIABLE_DetInfo_0_87;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_14, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) ShortHand_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_report.reqscope_check_goal\'/7", (MR_String) "bi_implication");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_36, (MR_Integer) 4))));
                    MR_Word OrElseGoals_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_36, (MR_Integer) 5))));
                    MR_Word STATE_VARIABLE_DetInfo_97_97;

                    check_hlds__det_report__reqscope_check_goal_7_p_0(MainGoal_41, InstMap0_9, IIS_10, (MR_Word) ((MR_Unsigned) 0U), SwitchContexts_12, STATE_VARIABLE_DetInfo_0_87, &STATE_VARIABLE_DetInfo_97_97);
                    check_hlds__det_report__reqscope_check_disj_6_p_0(OrElseGoals_42, InstMap0_9, IIS_10, SwitchContexts_12, STATE_VARIABLE_DetInfo_97_97, STATE_VARIABLE_DetInfo_88);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_118 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_36, (MR_Integer) 2))));
                    MR_Word next_value_of_Goal_8 = SubGoal_118;

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
      MR_Word Case_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Cases_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word MainConsId_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_19, (MR_Integer) 0))));
      MR_Word OtherConsIds_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_19, (MR_Integer) 1))));
      MR_Word Goal_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_19, (MR_Integer) 2))));
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
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      check_hlds__det_report__find_switch_var_matches_6_p_0(GoalSeq_28, Var_38, MainConsId_25, OtherConsIds_26, &MainMatch_29, &OtherMatches_30);
      {
        NewSwitchContext_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), NewSwitchContext_31, 0) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), NewSwitchContext_31, 1) = ((MR_Box) (MainMatch_29));
        MR_hl_field(MR_mktag(0), NewSwitchContext_31, 2) = ((MR_Box) (OtherMatches_30));
      }
      {
        SwitchContexts1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), SwitchContexts1_32, 0) = ((MR_Box) (NewSwitchContext_31));
        MR_hl_field(MR_mktag(1), SwitchContexts1_32, 1) = ((MR_Box) (HeadVar__6_6));
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
      MR_Word Goal_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
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
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_InstMap_4 = STATE_VARIABLE_InstMap_0_3;
    else
    {
      MR_Word Var_9;
      MR_Word Mode_10;
      MR_Word VarsModes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word InitInst_14;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_InstMap_19_19;
      MR_Word _FinalInst_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_InstMap_0_3;

      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      Mode_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      check_hlds__mode_util__mode_get_insts_4_p_0(HeadVar__2_2, Mode_10, &InitInst_14, &_FinalInst_15);
      hlds__instmap__instmap_set_var_4_p_0(Var_9, InitInst_14, STATE_VARIABLE_InstMap_0_3, &STATE_VARIABLE_InstMap_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = VarsModes_11;
      next_value_of_STATE_VARIABLE_InstMap_0_3 = STATE_VARIABLE_InstMap_19_19;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
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
  MR_Word STATE_VARIABLE_DetInfo_0_50,
  MR_Word * STATE_VARIABLE_DetInfo_51)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Reason_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_DetInfo_51 = STATE_VARIABLE_DetInfo_0_50;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_10, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            {
              *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DetInfo_51 = STATE_VARIABLE_DetInfo_0_50;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word RequiredDetism_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_10, (MR_Integer) 1))) & (MR_Integer) 7);
              MR_Word Var_61;

              {
                Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (ScopeGoalInfo_12));
              }
              check_hlds__det_report__reqscope_check_goal_detism_6_p_0(RequiredDetism_16, SubGoal_11, Var_61, InstMap0_13, STATE_VARIABLE_DetInfo_0_50, STATE_VARIABLE_DetInfo_51);
              *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word RequiredVar_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_10, (MR_Integer) 1))));
              MR_Word SwitchGoalContext_18;
              MR_Word SwitchVar_19;
              MR_Word CanFail_20;
              MR_Word Cases_21;
              MR_Word TypeInfo_69_69;

              succeeded = check_hlds__det_report__is_scope_subgoal_a_sortof_switch_5_p_0(SubGoal_11, &SwitchGoalContext_18, &SwitchVar_19, &CanFail_20, &Cases_21);
              if (succeeded)
              {
                TypeInfo_69_69 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_69_69, ((MR_Box) (SwitchVar_19)), ((MR_Box) (RequiredVar_17)));
              }
              if (succeeded)
                switch (CanFail_20) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ScopeContext_22;
                      MR_Word ReportedSwitch_23;

                      ScopeContext_22 = hlds__hlds_goal__goal_info_get_context_1_f_0(ScopeGoalInfo_12);
                      check_hlds__det_report__generate_incomplete_switch_spec_9_p_0((MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), InstMap0_13, SwitchContexts_9, RequiredVar_17, Cases_21, ScopeContext_22, STATE_VARIABLE_DetInfo_0_50, STATE_VARIABLE_DetInfo_51);
                      {
                        ReportedSwitch_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ReportedSwitch_23, 0) = ((MR_Box) (SwitchGoalContext_18));
                        MR_hl_field(MR_mktag(0), ReportedSwitch_23, 1) = ((MR_Box) (SwitchVar_19));
                        MR_hl_field(MR_mktag(0), ReportedSwitch_23, 2) = ((MR_Box) (Cases_21));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        *MaybeReportedSwitch_14 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ReportedSwitch_23));
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
                      *STATE_VARIABLE_DetInfo_51 = STATE_VARIABLE_DetInfo_0_50;
                    }
                    break;
                }
              else
              {
                check_hlds__det_report__generate_error_not_switch_on_required_var_5_p_0(RequiredVar_17, (MR_String) "require_complete_switch", ScopeGoalInfo_12, STATE_VARIABLE_DetInfo_0_50, STATE_VARIABLE_DetInfo_51);
                *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word RequiredDetism_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_10, (MR_Integer) 2))) & (MR_Integer) 7);
              MR_Word RequiredVar_66 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_10, (MR_Integer) 1))));
              MR_Word SwitchVar_63;
              MR_Word Cases_64;
              MR_Word _SwitchContext_24;
              MR_Word _CanFail_25;

              succeeded = check_hlds__det_report__is_scope_subgoal_a_sortof_switch_5_p_0(SubGoal_11, &_SwitchContext_24, &SwitchVar_63, &_CanFail_25, &Cases_64);
              if (succeeded)
              {
                MR_Word VarTypes_26;
                MR_Word SwitchVarType_27;

                check_hlds__det_util__det_info_get_vartypes_2_p_0(STATE_VARIABLE_DetInfo_0_50, &VarTypes_26);
                hlds__vartypes__lookup_var_type_3_p_0(VarTypes_26, SwitchVar_63, &SwitchVarType_27);
                check_hlds__det_report__reqscope_check_goal_detism_for_cases_7_p_0(RequiredDetism_65, SwitchVar_63, SwitchVarType_27, Cases_64, InstMap0_13, STATE_VARIABLE_DetInfo_0_50, STATE_VARIABLE_DetInfo_51);
              }
              else
              {
                MR_String ScopeWord_28 = ((&check_hlds__det_report_vector_common_7[0 + RequiredDetism_65]))->check_hlds__det_report__vector_common_type_7_0__vct_7_f_0;

                check_hlds__det_report__generate_error_not_switch_on_required_var_5_p_0(RequiredVar_66, ScopeWord_28, ScopeGoalInfo_12, STATE_VARIABLE_DetInfo_0_50, STATE_VARIABLE_DetInfo_51);
              }
              *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubGoalInfo_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_11, (MR_Integer) 1))));
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
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_report.reqscope_check_scope\'/8", (MR_String) "Loop control scope with strange determinism");
                      return;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                  }
                  break;
              }
              *MaybeReportedSwitch_14 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_DetInfo_51 = STATE_VARIABLE_DetInfo_0_50;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
check_hlds__det_report__generate_error_not_switch_on_required_var_5_p_0(
  MR_Word RequiredVar_6,
  MR_String ScopeWord_7,
  MR_Word ScopeGoalInfo_8,
  MR_Word STATE_VARIABLE_DetInfo_0_17,
  MR_Word * STATE_VARIABLE_DetInfo_18)
{
  {
    MR_Word ProcInfo_10;
    MR_Word VarSet_11;
    MR_String RequiredVarStr_12;
    MR_Word Pieces_13;
    MR_Word Context_14;
    MR_Word Msg_15;
    MR_Word Spec_16;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_String Var_25;
    MR_String Var_27;
    MR_Word Var_29;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_48;

    check_hlds__det_util__det_get_proc_info_2_p_0(STATE_VARIABLE_DetInfo_0_17, &ProcInfo_10);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_10, &VarSet_11);
    RequiredVarStr_12 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_11, RequiredVar_6);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (ScopeWord_7));
    }
    Var_27 = mercury__string__f_43_43_2_f_0(RequiredVarStr_12, (MR_String) "]");
    Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_27);
    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (Var_25));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (RequiredVarStr_12));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
    }
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[126])));
      MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[125])));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (Var_29));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_23));
    }
    {
      Pieces_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Pieces_13, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[124])));
      MR_hl_field(MR_mktag(1), Pieces_13, 1) = ((MR_Box) (Var_21));
    }
    Context_14 = hlds__hlds_goal__goal_info_get_context_1_f_0(ScopeGoalInfo_8);
    {
      Var_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (Pieces_13));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Msg_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_15, 0) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), Msg_15, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Msg_15));
      MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Spec_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_16, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Spec_16, 1) = ((MR_Box) ((MR_Unsigned) 40U));
      MR_hl_field(MR_mktag(0), Spec_16, 2) = ((MR_Box) (Var_48));
    }
    check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_16, STATE_VARIABLE_DetInfo_0_17, STATE_VARIABLE_DetInfo_18);
  }
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
      MR_Word Case_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Cases_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_18, (MR_Integer) 0))));
      MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_18, (MR_Integer) 1))));
      MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_18, (MR_Integer) 2))));
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
        CheckKind_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), CheckKind_28, 0) = ((MR_Box) (HeadVar__2_2));
        MR_hl_field(MR_mktag(1), CheckKind_28, 1) = ((MR_Box) (MainConsId_22));
        MR_hl_field(MR_mktag(1), CheckKind_28, 2) = ((MR_Box) (OtherConsIds_23));
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
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
check_hlds__det_report__reqscope_check_goal_detism_6_p_0(
  MR_Word RequiredDetism_7,
  MR_Word Goal_8,
  MR_Word CheckKind_9,
  MR_Word InstMap0_10,
  MR_Word STATE_VARIABLE_DetInfo_0_36,
  MR_Word * STATE_VARIABLE_DetInfo_37)
{
  {
    MR_bool succeeded;
    MR_Word GoalInfo_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
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
      *STATE_VARIABLE_DetInfo_37 = STATE_VARIABLE_DetInfo_0_36;
    else
    {
      MR_String RequiredDetismStr_20;
      MR_String ActualDetismStr_21;
      MR_Word Context_23;
      MR_Word Pieces_24;
      MR_Word Msg_33;
      MR_Word SubMsgs_34;
      MR_Word Spec_35;
      MR_Word Var_96;
      MR_Word Var_97;
      MR_Word STATE_VARIABLE_DetInfo_100_100;
      MR_Word Var_103;

      RequiredDetismStr_20 = parse_tree__prog_out__determinism_to_string_1_f_0(RequiredDetism_7);
      ActualDetismStr_21 = parse_tree__prog_out__determinism_to_string_1_f_0(ActualDetism_14);
      if (((MR_tag((MR_Word) CheckKind_9)) == (MR_Integer) 0))
      {
        MR_Word ScopeGoalInfo_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CheckKind_9, (MR_Integer) 0))));
        MR_Word Var_77;
        MR_Word Var_80;
        MR_Word Var_81;
        MR_Word Var_82;
        MR_Word Var_85;
        MR_Word Var_88;
        MR_Word Var_89;

        Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(ScopeGoalInfo_22);
        {
          Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_81, 1) = ((MR_Box) (RequiredDetismStr_20));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (ActualDetismStr_21));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (Var_89));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
        }
        {
          Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[119])));
          MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_88));
        }
        {
          Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[106])));
          MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (Var_85));
        }
        {
          Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (Var_81));
          MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
        }
        {
          Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[118])));
          MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_80));
        }
        {
          Pieces_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_24, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[117])));
          MR_hl_field(MR_mktag(1), Pieces_24, 1) = ((MR_Box) (Var_77));
        }
      }
      else
      {
        MR_Word SwitchVar_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckKind_9, (MR_Integer) 0))));
        MR_Word MainConsId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckKind_9, (MR_Integer) 1))));
        MR_Word OtherConsIds_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CheckKind_9, (MR_Integer) 2))));
        MR_Word VarSet_28;
        MR_String SwitchVarName_29;
        MR_String MainConsIdStr_30;
        MR_Word OtherConsIdStrs_31;
        MR_Word ConsIdsPieces_32;
        MR_Word Var_39;
        MR_Word Var_40;
        MR_Word Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_48;
        MR_Word Var_51;
        MR_Word Var_52;
        MR_Word Var_63;
        MR_Word Var_64;
        MR_Word Var_67;
        MR_Word Var_68;

        Context_23 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_13);
        check_hlds__det_util__det_info_get_varset_2_p_0(STATE_VARIABLE_DetInfo_0_36, &VarSet_28);
        mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_28, SwitchVar_25, &SwitchVarName_29);
        MainConsIdStr_30 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(MainConsId_26);
        OtherConsIdStrs_31 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&check_hlds__det_report_scalar_common_1[3]), OtherConsIds_27);
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MainConsIdStr_30));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (OtherConsIdStrs_31));
        }
        ConsIdsPieces_32 = parse_tree__error_util__list_to_pieces_1_f_0(Var_39);
        {
          Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (SwitchVarName_29));
        }
        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (RequiredDetismStr_20));
        }
        {
          Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
          MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[69])));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[122])));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[121])));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
          MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[120])));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) (ActualDetismStr_21));
        }
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
          MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
        }
        {
          Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[123])));
          MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_67));
        }
        Var_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConsIdsPieces_32, Var_64);
        Pieces_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_40, Var_63);
      }
      {
        Var_97 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (Pieces_24));
      }
      {
        Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (Var_97));
        MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_33, 0) = ((MR_Box) (Context_23));
        MR_hl_field(MR_mktag(0), Msg_33, 1) = ((MR_Box) (Var_96));
      }
      check_hlds__det_report__det_diagnose_goal_7_p_0(Goal_8, InstMap0_10, RequiredDetism_7, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_DetInfo_0_36, &STATE_VARIABLE_DetInfo_100_100, &SubMsgs_34);
      {
        Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Msg_33));
        MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) (SubMsgs_34));
      }
      {
        Spec_35 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_35, 1) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_35, 2) = ((MR_Box) (Var_103));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_35, STATE_VARIABLE_DetInfo_100_100, STATE_VARIABLE_DetInfo_37);
    }
  }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_7_p_0(
  MR_Word tscc_proc_1_input_1_Goal_8,
  MR_Word tscc_proc_1_input_2_InstMap0_9,
  MR_Word tscc_proc_1_input_3_Desired_10,
  MR_Word tscc_proc_1_input_4_SwitchContexts_11,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19,
  MR_Word * tscc_output_ptr_2_Msgs_13)
{
  {
    MR_Word tscc_proc_2_input_1_GoalExpr_10;
    MR_Word tscc_proc_2_input_2_GoalInfo_11;
    MR_Word tscc_proc_2_input_3_InstMap0_12;
    MR_Word tscc_proc_2_input_4_Desired_13;
    MR_Word tscc_proc_2_input_5_Actual_14;
    MR_Word tscc_proc_2_input_6_SwitchContexts_15;
    MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115;
    MR_Word tscc_output_1_STATE_VARIABLE_DetInfo_19;
    MR_Word tscc_output_2_Msgs_13;

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
      MR_Word Msgs_13;
      MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
      MR_Word GoalInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
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
            MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115 = STATE_VARIABLE_DetInfo_0_18;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
            tscc_proc_2_input_2_GoalInfo_11 = next_value_of_tscc_proc_2_input_2_GoalInfo_11;
            tscc_proc_2_input_3_InstMap0_12 = next_value_of_tscc_proc_2_input_3_InstMap0_12;
            tscc_proc_2_input_4_Desired_13 = next_value_of_tscc_proc_2_input_4_Desired_13;
            tscc_proc_2_input_5_Actual_14 = next_value_of_tscc_proc_2_input_5_Actual_14;
            tscc_proc_2_input_6_SwitchContexts_15 = next_value_of_tscc_proc_2_input_6_SwitchContexts_15;
            tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            Msgs_13 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_0_18;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_19;
      tscc_output_2_Msgs_13 = Msgs_13;
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
      MR_Word STATE_VARIABLE_DetInfo_0_115 = tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115;
      MR_Word STATE_VARIABLE_DetInfo_116;
      MR_Word Msgs_17;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DesiredCanFail_90;
            MR_Word ActualCanFail_91;
            MR_Word ActualSolns_92;
            MR_Word DesiredSolns_246;

            parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &DesiredCanFail_90, &DesiredSolns_246);
            parse_tree__prog_data__determinism_components_3_p_0(Actual_14, &ActualCanFail_91, &ActualSolns_92);
            succeeded = (DesiredCanFail_90 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (ActualCanFail_91 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word Var_129;
              MR_Word Context_236;

              Context_236 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              {
                Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (Context_236));
                MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[115])));
              }
              {
                Msgs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msgs_17, 0) = ((MR_Box) (Var_129));
                MR_hl_field(MR_mktag(1), Msgs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
            {
              succeeded = (DesiredSolns_246 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (ActualSolns_92 != (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Word Var_139;
                MR_Word Context_238;

                Context_238 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                {
                  Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (Context_238));
                  MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[116])));
                }
                {
                  Msgs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msgs_17, 0) = ((MR_Box) (Var_139));
                  MR_hl_field(MR_mktag(1), Msgs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
                Msgs_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
            STATE_VARIABLE_DetInfo_116 = STATE_VARIABLE_DetInfo_0_115;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LHS_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0))));
            MR_Word RHS_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1))));
            MR_Word UnifyContext_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 4))));
            MR_Word Context_233;
            MR_Word StartingPieces_234;

            Context_233 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, UnifyContext_63, STATE_VARIABLE_DetInfo_0_115, LHS_59, RHS_60, &StartingPieces_234);
            check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(Desired_13, Actual_14, Context_233, StartingPieces_234, &Msgs_17);
            STATE_VARIABLE_DetInfo_116 = STATE_VARIABLE_DetInfo_0_115;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0))));
            MR_Integer ProcId_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1))));
            MR_Word CallContext_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4))));
            MR_Word InitMsgs_50;
            MR_Word StartingPieces_51;
            MR_Word AtomicMsgs_52;
            MR_Word Context_230;

            Context_230 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            check_hlds__det_report__det_report_call_context_7_p_0(Context_230, CallContext_48, STATE_VARIABLE_DetInfo_0_115, PredId_44, ProcId_45, &InitMsgs_50, &StartingPieces_51);
            check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(Desired_13, Actual_14, Context_230, StartingPieces_51, &AtomicMsgs_52);
            Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), InitMsgs_50, AtomicMsgs_52);
            STATE_VARIABLE_DetInfo_116 = STATE_VARIABLE_DetInfo_0_115;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                MR_Word GenericCallId_58;
                MR_Word Var_169;
                MR_String Var_170;
                MR_Word Context_231;
                MR_Word StartingPieces_232;

                Context_231 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_53, &GenericCallId_58);
                Var_170 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(GenericCallId_58);
                {
                  Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (Var_170));
                }
                {
                  StartingPieces_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), StartingPieces_232, 0) = ((MR_Box) (Var_169));
                  MR_hl_field(MR_mktag(1), StartingPieces_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(Desired_13, Actual_14, Context_231, StartingPieces_232, &Msgs_17);
                STATE_VARIABLE_DetInfo_116 = STATE_VARIABLE_DetInfo_0_115;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String DesiredStr_71;
                MR_Word Pieces_72;
                MR_Word Var_151;
                MR_Word Var_154;
                MR_Word Var_155;
                MR_Word Var_162;
                MR_Word Var_163;
                MR_Word Var_164;
                MR_Word Context_235;

                Context_235 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                DesiredStr_71 = parse_tree__prog_out__determinism_to_string_1_f_0(Desired_13);
                {
                  Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (DesiredStr_71));
                }
                {
                  Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
                  MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
                }
                {
                  Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[114])));
                  MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_154));
                }
                {
                  Pieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[113])));
                  MR_hl_field(MR_mktag(1), Pieces_72, 1) = ((MR_Box) (Var_151));
                }
                {
                  Var_164 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_164, 0) = ((MR_Box) (Pieces_72));
                }
                {
                  Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Var_164));
                  MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_162 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (Context_235));
                  MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (Var_163));
                }
                {
                  Msgs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msgs_17, 0) = ((MR_Box) (Var_162));
                  MR_hl_field(MR_mktag(1), Msgs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                STATE_VARIABLE_DetInfo_116 = STATE_VARIABLE_DetInfo_0_115;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                check_hlds__det_report__det_diagnose_conj_7_p_0(Goals_19, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_115, &STATE_VARIABLE_DetInfo_116, &Msgs_17);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer DisjunctsWithSoln_20;
                MR_Word Msgs1_21;
                MR_Word DesSolns_23;
                MR_Word Goals_221 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                MR_Word Var_22;
                MR_Integer Var_206;

                check_hlds__det_report__det_diagnose_disj_10_p_0(Goals_221, InstMap0_12, Desired_13, Actual_14, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_115, &STATE_VARIABLE_DetInfo_116, (MR_Integer) 0, &DisjunctsWithSoln_20, &Msgs1_21);
                parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_22, &DesSolns_23);
                succeeded = (DesSolns_23 != (MR_Integer) 3);
                if (succeeded)
                {
                  succeeded = (DesSolns_23 != (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_206 = (MR_Integer) 1;
                    succeeded = (DisjunctsWithSoln_20 > Var_206);
                  }
                }
                if (succeeded)
                {
                  MR_Word Context_24;
                  MR_Word NestingPieces_25;
                  MR_Word Msg_27;
                  MR_Word Var_214;
                  MR_Word Var_215;
                  MR_Word Var_216;
                  MR_Word Var_218;

                  Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                  check_hlds__det_report__det_diagnose_switch_context_3_p_0(STATE_VARIABLE_DetInfo_116, SwitchContexts_15, &NestingPieces_25);
                  Var_216 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NestingPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[50])));
                  {
                    Var_215 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_215, 0) = ((MR_Box) (Var_216));
                  }
                  {
                    Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Var_215));
                    MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Msg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Msg_27, 0) = ((MR_Box) (Context_24));
                    MR_hl_field(MR_mktag(0), Msg_27, 1) = ((MR_Box) (Var_214));
                  }
                  {
                    Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (Msg_27));
                    MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_218, Msgs1_21);
                }
                else
                  Msgs_17 = Msgs1_21;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                MR_Word SwitchCanFail_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word Cases_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                MR_Word VarTypes_41;
                MR_Word VarType_42;
                MR_Word Msgs2_43;
                MR_Word Msgs1_227;
                MR_Word Var_172;
                MR_Word Var_258;
                MR_Word Var_31;

                succeeded = (SwitchCanFail_29 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_172 = (MR_Integer) 1;
                  parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_258, &Var_31);
                  succeeded = (Var_172 == Var_258);
                }
                if (succeeded)
                {
                  MR_String VarStr_32;
                  MR_Word MaybeMissingInfo_33;
                  MR_Word Component_40;
                  MR_Word Var_199;
                  MR_Word Var_200;
                  MR_Word Context_223;
                  MR_Word NestingPieces_224;

                  Context_223 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                  check_hlds__det_report__find_missing_cons_ids_9_p_0(STATE_VARIABLE_DetInfo_0_115, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_3[4])), InstMap0_12, SwitchContexts_15, Var_28, Cases_30, &NestingPieces_224, &VarStr_32, &MaybeMissingInfo_33);
                  if ((MaybeMissingInfo_33 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_176;
                    MR_Word Var_179;
                    MR_Word Var_180;
                    MR_Word Var_187;
                    MR_Word NoCoverPieces_222;

                    {
                      Var_180 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_180, 0) = ((MR_Box) (VarStr_32));
                    }
                    {
                      Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
                      MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[56])));
                    }
                    {
                      Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[93])));
                      MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (Var_179));
                    }
                    {
                      NoCoverPieces_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NoCoverPieces_222, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), NoCoverPieces_222, 1) = ((MR_Box) (Var_176));
                    }
                    Var_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NestingPieces_224, NoCoverPieces_222);
                    {
                      Component_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Component_40, 0) = ((MR_Box) (Var_187));
                    }
                  }
                  else
                  {
                    MR_Word MissingInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMissingInfo_33, (MR_Integer) 0))));
                    MR_Word MainPieces_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MissingInfo_34, (MR_Integer) 2))));
                    MR_Word VerbosePieces_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MissingInfo_34, (MR_Integer) 3))));
                    MR_Word NoCoverPieces_39;
                    MR_Word Var_189;
                    MR_Word Var_192;
                    MR_Word Var_193;
                    MR_Word Var_198;

                    {
                      Var_193 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_193, 0) = ((MR_Box) (VarStr_32));
                    }
                    {
                      Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (Var_193));
                      MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[95])));
                    }
                    {
                      Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[93])));
                      MR_hl_field(MR_mktag(1), Var_189, 1) = ((MR_Box) (Var_192));
                    }
                    {
                      NoCoverPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NoCoverPieces_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), NoCoverPieces_39, 1) = ((MR_Box) (Var_189));
                    }
                    Var_198 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NestingPieces_224, NoCoverPieces_39);
                    check_hlds__det_report__append_prefix_and_maybe_verbose_4_p_0(Var_198, MainPieces_37, VerbosePieces_38, &Component_40);
                  }
                  {
                    Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (Component_40));
                    MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_199 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_199, 0) = ((MR_Box) (Context_223));
                    MR_hl_field(MR_mktag(0), Var_199, 1) = ((MR_Box) (Var_200));
                  }
                  {
                    Msgs1_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Msgs1_227, 0) = ((MR_Box) (Var_199));
                    MR_hl_field(MR_mktag(1), Msgs1_227, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                  Msgs1_227 = (MR_Word) ((MR_Unsigned) 0U);
                check_hlds__det_util__det_info_get_vartypes_2_p_0(STATE_VARIABLE_DetInfo_0_115, &VarTypes_41);
                hlds__vartypes__lookup_var_type_3_p_0(VarTypes_41, Var_28, &VarType_42);
                check_hlds__det_report__det_diagnose_switch_arms_9_p_0(Var_28, VarType_42, Cases_30, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_115, &STATE_VARIABLE_DetInfo_116, &Msgs2_43);
                Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Msgs1_227, Msgs2_43);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word SubGoalInfo_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_94, (MR_Integer) 1))));
                MR_Word Internal_97;
                MR_Word InternalDesired_98;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_8;
                MR_Word next_value_of_tscc_proc_1_input_2_InstMap0_9;
                MR_Word next_value_of_tscc_proc_1_input_3_Desired_10;
                MR_Word next_value_of_tscc_proc_1_input_4_SwitchContexts_11;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;

                Internal_97 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_96);
                succeeded = (Actual_14 == Internal_97);
                if (succeeded)
                  InternalDesired_98 = Desired_13;
                else
                {
                  MR_Word CanFail_99;
                  MR_Word Var_100;

                  parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &CanFail_99, &Var_100);
                  parse_tree__prog_data__determinism_components_3_p_1(&InternalDesired_98, CanFail_99, (MR_Integer) 3);
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_8 = SubGoal_94;
                next_value_of_tscc_proc_1_input_2_InstMap0_9 = InstMap0_12;
                next_value_of_tscc_proc_1_input_3_Desired_10 = InternalDesired_98;
                next_value_of_tscc_proc_1_input_4_SwitchContexts_11 = SwitchContexts_15;
                next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = STATE_VARIABLE_DetInfo_0_115;
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
                MR_Word Cond_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word Then_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                MR_Word Else_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                MR_Word DesiredSolns_78;
                MR_Word CondInfo_80;
                MR_Word CondDetism_81;
                MR_Word CondSolns_83;
                MR_Word MsgsCond_85;
                MR_Word InstMap1_86;
                MR_Word MsgsThen_87;
                MR_Word MsgsElse_88;
                MR_Word STATE_VARIABLE_DetInfo_145_145;
                MR_Word STATE_VARIABLE_DetInfo_146_146;
                MR_Word Var_148;
                MR_Word _DesiredCanFail_77;
                MR_Word _CondCanFail_82;

                parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &_DesiredCanFail_77, &DesiredSolns_78);
                CondInfo_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_74, (MR_Integer) 1))));
                CondDetism_81 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondInfo_80);
                parse_tree__prog_data__determinism_components_3_p_0(CondDetism_81, &_CondCanFail_82, &CondSolns_83);
                succeeded = (CondSolns_83 == (MR_Integer) 3);
                if (succeeded)
                {
                  succeeded = (DesiredSolns_78 != (MR_Integer) 3);
                }
                if (succeeded)
                {
                  MR_Word DesiredCond_84;

                  parse_tree__prog_data__determinism_components_3_p_1(&DesiredCond_84, (MR_Integer) 0, DesiredSolns_78);
                  check_hlds__det_report__det_diagnose_goal_7_p_0(Cond_74, InstMap0_12, DesiredCond_84, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_115, &STATE_VARIABLE_DetInfo_145_145, &MsgsCond_85);
                }
                else
                {
                  MsgsCond_85 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_DetInfo_145_145 = STATE_VARIABLE_DetInfo_0_115;
                }
                hlds__goal_util__update_instmap_3_p_0(Cond_74, InstMap0_12, &InstMap1_86);
                check_hlds__det_report__det_diagnose_goal_7_p_0(Then_75, InstMap1_86, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_145_145, &STATE_VARIABLE_DetInfo_146_146, &MsgsThen_87);
                check_hlds__det_report__det_diagnose_goal_7_p_0(Else_76, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_146_146, &STATE_VARIABLE_DetInfo_116, &MsgsElse_88);
                Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), MsgsThen_87, MsgsElse_88);
                Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), MsgsCond_85, Var_148);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_101)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_report.det_diagnose_goal_expr\'/9", (MR_String) "bi_implication");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_101, (MR_Integer) 4))));
                      MR_Word OrElseGoals_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_101, (MR_Integer) 5))));
                      MR_Word MainMsgs_109;
                      MR_Word OrElseMsgs_110;
                      MR_Word STATE_VARIABLE_DetInfo_120_120;

                      check_hlds__det_report__det_diagnose_goal_7_p_0(MainGoal_106, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_115, &STATE_VARIABLE_DetInfo_120_120, &MainMsgs_109);
                      check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(OrElseGoals_107, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_120_120, &STATE_VARIABLE_DetInfo_116, &OrElseMsgs_110);
                      Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), MainMsgs_109, OrElseMsgs_110);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_247 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_101, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_8 = SubGoal_247;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstMap0_9 = InstMap0_12;
                      MR_Word next_value_of_tscc_proc_1_input_3_Desired_10 = Desired_13;
                      MR_Word next_value_of_tscc_proc_1_input_4_SwitchContexts_11 = SwitchContexts_15;
                      MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = STATE_VARIABLE_DetInfo_0_115;

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
      tscc_output_1_STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_116;
      tscc_output_2_Msgs_13 = Msgs_17;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19 = tscc_output_1_STATE_VARIABLE_DetInfo_19;
    *tscc_output_ptr_2_Msgs_13 = tscc_output_2_Msgs_13;
    return;
  }
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_goal_expr_9_p_0(
  MR_Word tscc_proc_2_input_1_GoalExpr_10,
  MR_Word tscc_proc_2_input_2_GoalInfo_11,
  MR_Word tscc_proc_2_input_3_InstMap0_12,
  MR_Word tscc_proc_2_input_4_Desired_13,
  MR_Word tscc_proc_2_input_5_Actual_14,
  MR_Word tscc_proc_2_input_6_SwitchContexts_15,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115,
  MR_Word * tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19,
  MR_Word * tscc_output_ptr_2_Msgs_13)
{
  {
    MR_Word tscc_proc_1_input_1_Goal_8;
    MR_Word tscc_proc_1_input_2_InstMap0_9;
    MR_Word tscc_proc_1_input_3_Desired_10;
    MR_Word tscc_proc_1_input_4_SwitchContexts_11;
    MR_Word tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;
    MR_Word tscc_output_1_STATE_VARIABLE_DetInfo_19;
    MR_Word tscc_output_2_Msgs_13;

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
      MR_Word Msgs_13;
      MR_Word GoalExpr_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0))));
      MR_Word GoalInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1))));
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
            MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115 = STATE_VARIABLE_DetInfo_0_18;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_GoalExpr_10 = next_value_of_tscc_proc_2_input_1_GoalExpr_10;
            tscc_proc_2_input_2_GoalInfo_11 = next_value_of_tscc_proc_2_input_2_GoalInfo_11;
            tscc_proc_2_input_3_InstMap0_12 = next_value_of_tscc_proc_2_input_3_InstMap0_12;
            tscc_proc_2_input_4_Desired_13 = next_value_of_tscc_proc_2_input_4_Desired_13;
            tscc_proc_2_input_5_Actual_14 = next_value_of_tscc_proc_2_input_5_Actual_14;
            tscc_proc_2_input_6_SwitchContexts_15 = next_value_of_tscc_proc_2_input_6_SwitchContexts_15;
            tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            Msgs_13 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_0_18;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_19;
      tscc_output_2_Msgs_13 = Msgs_13;
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
      MR_Word STATE_VARIABLE_DetInfo_0_115 = tscc_proc_2_input_7_STATE_VARIABLE_DetInfo_0_115;
      MR_Word STATE_VARIABLE_DetInfo_116;
      MR_Word Msgs_17;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) GoalExpr_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word DesiredCanFail_90;
            MR_Word ActualCanFail_91;
            MR_Word ActualSolns_92;
            MR_Word DesiredSolns_246;

            parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &DesiredCanFail_90, &DesiredSolns_246);
            parse_tree__prog_data__determinism_components_3_p_0(Actual_14, &ActualCanFail_91, &ActualSolns_92);
            succeeded = (DesiredCanFail_90 == (MR_Integer) 1);
            if (succeeded)
              succeeded = (ActualCanFail_91 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word Var_129;
              MR_Word Context_236;

              Context_236 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
              {
                Var_129 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_129, 0) = ((MR_Box) (Context_236));
                MR_hl_field(MR_mktag(0), Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[115])));
              }
              {
                Msgs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Msgs_17, 0) = ((MR_Box) (Var_129));
                MR_hl_field(MR_mktag(1), Msgs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            else
            {
              succeeded = (DesiredSolns_246 == (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (ActualSolns_92 != (MR_Integer) 0);
              }
              if (succeeded)
              {
                MR_Word Var_139;
                MR_Word Context_238;

                Context_238 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                {
                  Var_139 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_139, 0) = ((MR_Box) (Context_238));
                  MR_hl_field(MR_mktag(0), Var_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[116])));
                }
                {
                  Msgs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msgs_17, 0) = ((MR_Box) (Var_139));
                  MR_hl_field(MR_mktag(1), Msgs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              else
                Msgs_17 = (MR_Word) ((MR_Unsigned) 0U);
            }
            STATE_VARIABLE_DetInfo_116 = STATE_VARIABLE_DetInfo_0_115;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LHS_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 0))));
            MR_Word RHS_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 1))));
            MR_Word UnifyContext_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_10, (MR_Integer) 4))));
            MR_Word Context_233;
            MR_Word StartingPieces_234;

            Context_233 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, UnifyContext_63, STATE_VARIABLE_DetInfo_0_115, LHS_59, RHS_60, &StartingPieces_234);
            check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(Desired_13, Actual_14, Context_233, StartingPieces_234, &Msgs_17);
            STATE_VARIABLE_DetInfo_116 = STATE_VARIABLE_DetInfo_0_115;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 0))));
            MR_Integer ProcId_45 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 1))));
            MR_Word CallContext_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_10, (MR_Integer) 4))));
            MR_Word InitMsgs_50;
            MR_Word StartingPieces_51;
            MR_Word AtomicMsgs_52;
            MR_Word Context_230;

            Context_230 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
            check_hlds__det_report__det_report_call_context_7_p_0(Context_230, CallContext_48, STATE_VARIABLE_DetInfo_0_115, PredId_44, ProcId_45, &InitMsgs_50, &StartingPieces_51);
            check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(Desired_13, Actual_14, Context_230, StartingPieces_51, &AtomicMsgs_52);
            Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), InitMsgs_50, AtomicMsgs_52);
            STATE_VARIABLE_DetInfo_116 = STATE_VARIABLE_DetInfo_0_115;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                MR_Word GenericCallId_58;
                MR_Word Var_169;
                MR_String Var_170;
                MR_Word Context_231;
                MR_Word StartingPieces_232;

                Context_231 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                hlds__hlds_goal__generic_call_to_id_2_p_0(GenericCall_53, &GenericCallId_58);
                Var_170 = hlds__hlds_out__hlds_out_util__generic_call_id_to_string_1_f_0(GenericCallId_58);
                {
                  Var_169 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_169, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_169, 1) = ((MR_Box) (Var_170));
                }
                {
                  StartingPieces_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), StartingPieces_232, 0) = ((MR_Box) (Var_169));
                  MR_hl_field(MR_mktag(1), StartingPieces_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(Desired_13, Actual_14, Context_231, StartingPieces_232, &Msgs_17);
                STATE_VARIABLE_DetInfo_116 = STATE_VARIABLE_DetInfo_0_115;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String DesiredStr_71;
                MR_Word Pieces_72;
                MR_Word Var_151;
                MR_Word Var_154;
                MR_Word Var_155;
                MR_Word Var_162;
                MR_Word Var_163;
                MR_Word Var_164;
                MR_Word Context_235;

                Context_235 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                DesiredStr_71 = parse_tree__prog_out__determinism_to_string_1_f_0(Desired_13);
                {
                  Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) (DesiredStr_71));
                }
                {
                  Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
                  MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
                }
                {
                  Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[114])));
                  MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_154));
                }
                {
                  Pieces_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Pieces_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[113])));
                  MR_hl_field(MR_mktag(1), Pieces_72, 1) = ((MR_Box) (Var_151));
                }
                {
                  Var_164 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_164, 0) = ((MR_Box) (Pieces_72));
                }
                {
                  Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Var_164));
                  MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  Var_162 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_162, 0) = ((MR_Box) (Context_235));
                  MR_hl_field(MR_mktag(0), Var_162, 1) = ((MR_Box) (Var_163));
                }
                {
                  Msgs_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Msgs_17, 0) = ((MR_Box) (Var_162));
                  MR_hl_field(MR_mktag(1), Msgs_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                STATE_VARIABLE_DetInfo_116 = STATE_VARIABLE_DetInfo_0_115;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));

                check_hlds__det_report__det_diagnose_conj_7_p_0(Goals_19, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_115, &STATE_VARIABLE_DetInfo_116, &Msgs_17);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer DisjunctsWithSoln_20;
                MR_Word Msgs1_21;
                MR_Word DesSolns_23;
                MR_Word Goals_221 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                MR_Word Var_22;
                MR_Integer Var_206;

                check_hlds__det_report__det_diagnose_disj_10_p_0(Goals_221, InstMap0_12, Desired_13, Actual_14, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_115, &STATE_VARIABLE_DetInfo_116, (MR_Integer) 0, &DisjunctsWithSoln_20, &Msgs1_21);
                parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_22, &DesSolns_23);
                succeeded = (DesSolns_23 != (MR_Integer) 3);
                if (succeeded)
                {
                  succeeded = (DesSolns_23 != (MR_Integer) 2);
                  if (succeeded)
                  {
                    Var_206 = (MR_Integer) 1;
                    succeeded = (DisjunctsWithSoln_20 > Var_206);
                  }
                }
                if (succeeded)
                {
                  MR_Word Context_24;
                  MR_Word NestingPieces_25;
                  MR_Word Msg_27;
                  MR_Word Var_214;
                  MR_Word Var_215;
                  MR_Word Var_216;
                  MR_Word Var_218;

                  Context_24 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                  check_hlds__det_report__det_diagnose_switch_context_3_p_0(STATE_VARIABLE_DetInfo_116, SwitchContexts_15, &NestingPieces_25);
                  Var_216 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NestingPieces_25, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[50])));
                  {
                    Var_215 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_215, 0) = ((MR_Box) (Var_216));
                  }
                  {
                    Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Var_215));
                    MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Msg_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Msg_27, 0) = ((MR_Box) (Context_24));
                    MR_hl_field(MR_mktag(0), Msg_27, 1) = ((MR_Box) (Var_214));
                  }
                  {
                    Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (Msg_27));
                    MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Var_218, Msgs1_21);
                }
                else
                  Msgs_17 = Msgs1_21;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));
                MR_Word SwitchCanFail_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word Cases_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                MR_Word VarTypes_41;
                MR_Word VarType_42;
                MR_Word Msgs2_43;
                MR_Word Msgs1_227;
                MR_Word Var_172;
                MR_Word Var_258;
                MR_Word Var_31;

                succeeded = (SwitchCanFail_29 == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_172 = (MR_Integer) 1;
                  parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &Var_258, &Var_31);
                  succeeded = (Var_172 == Var_258);
                }
                if (succeeded)
                {
                  MR_String VarStr_32;
                  MR_Word MaybeMissingInfo_33;
                  MR_Word Component_40;
                  MR_Word Var_199;
                  MR_Word Var_200;
                  MR_Word Context_223;
                  MR_Word NestingPieces_224;

                  Context_223 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_11);
                  check_hlds__det_report__find_missing_cons_ids_9_p_0(STATE_VARIABLE_DetInfo_0_115, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_3[4])), InstMap0_12, SwitchContexts_15, Var_28, Cases_30, &NestingPieces_224, &VarStr_32, &MaybeMissingInfo_33);
                  if ((MaybeMissingInfo_33 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word Var_176;
                    MR_Word Var_179;
                    MR_Word Var_180;
                    MR_Word Var_187;
                    MR_Word NoCoverPieces_222;

                    {
                      Var_180 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_180, 0) = ((MR_Box) (VarStr_32));
                    }
                    {
                      Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (Var_180));
                      MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[56])));
                    }
                    {
                      Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_176, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[93])));
                      MR_hl_field(MR_mktag(1), Var_176, 1) = ((MR_Box) (Var_179));
                    }
                    {
                      NoCoverPieces_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NoCoverPieces_222, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), NoCoverPieces_222, 1) = ((MR_Box) (Var_176));
                    }
                    Var_187 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NestingPieces_224, NoCoverPieces_222);
                    {
                      Component_40 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Component_40, 0) = ((MR_Box) (Var_187));
                    }
                  }
                  else
                  {
                    MR_Word MissingInfo_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMissingInfo_33, (MR_Integer) 0))));
                    MR_Word MainPieces_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MissingInfo_34, (MR_Integer) 2))));
                    MR_Word VerbosePieces_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MissingInfo_34, (MR_Integer) 3))));
                    MR_Word NoCoverPieces_39;
                    MR_Word Var_189;
                    MR_Word Var_192;
                    MR_Word Var_193;
                    MR_Word Var_198;

                    {
                      Var_193 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(2), Var_193, 0) = ((MR_Box) (VarStr_32));
                    }
                    {
                      Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (Var_193));
                      MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[95])));
                    }
                    {
                      Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_189, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[93])));
                      MR_hl_field(MR_mktag(1), Var_189, 1) = ((MR_Box) (Var_192));
                    }
                    {
                      NoCoverPieces_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), NoCoverPieces_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), NoCoverPieces_39, 1) = ((MR_Box) (Var_189));
                    }
                    Var_198 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NestingPieces_224, NoCoverPieces_39);
                    check_hlds__det_report__append_prefix_and_maybe_verbose_4_p_0(Var_198, MainPieces_37, VerbosePieces_38, &Component_40);
                  }
                  {
                    Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) (Component_40));
                    MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_199 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_199, 0) = ((MR_Box) (Context_223));
                    MR_hl_field(MR_mktag(0), Var_199, 1) = ((MR_Box) (Var_200));
                  }
                  {
                    Msgs1_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Msgs1_227, 0) = ((MR_Box) (Var_199));
                    MR_hl_field(MR_mktag(1), Msgs1_227, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                }
                else
                  Msgs1_227 = (MR_Word) ((MR_Unsigned) 0U);
                check_hlds__det_util__det_info_get_vartypes_2_p_0(STATE_VARIABLE_DetInfo_0_115, &VarTypes_41);
                hlds__vartypes__lookup_var_type_3_p_0(VarTypes_41, Var_28, &VarType_42);
                check_hlds__det_report__det_diagnose_switch_arms_9_p_0(Var_28, VarType_42, Cases_30, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_115, &STATE_VARIABLE_DetInfo_116, &Msgs2_43);
                Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Msgs1_227, Msgs2_43);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word SubGoalInfo_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_94, (MR_Integer) 1))));
                MR_Word Internal_97;
                MR_Word InternalDesired_98;
                MR_Word next_value_of_tscc_proc_1_input_1_Goal_8;
                MR_Word next_value_of_tscc_proc_1_input_2_InstMap0_9;
                MR_Word next_value_of_tscc_proc_1_input_3_Desired_10;
                MR_Word next_value_of_tscc_proc_1_input_4_SwitchContexts_11;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18;

                Internal_97 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo_96);
                succeeded = (Actual_14 == Internal_97);
                if (succeeded)
                  InternalDesired_98 = Desired_13;
                else
                {
                  MR_Word CanFail_99;
                  MR_Word Var_100;

                  parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &CanFail_99, &Var_100);
                  parse_tree__prog_data__determinism_components_3_p_1(&InternalDesired_98, CanFail_99, (MR_Integer) 3);
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_Goal_8 = SubGoal_94;
                next_value_of_tscc_proc_1_input_2_InstMap0_9 = InstMap0_12;
                next_value_of_tscc_proc_1_input_3_Desired_10 = InternalDesired_98;
                next_value_of_tscc_proc_1_input_4_SwitchContexts_11 = SwitchContexts_15;
                next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = STATE_VARIABLE_DetInfo_0_115;
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
                MR_Word Cond_74 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 2))));
                MR_Word Then_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 3))));
                MR_Word Else_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 4))));
                MR_Word DesiredSolns_78;
                MR_Word CondInfo_80;
                MR_Word CondDetism_81;
                MR_Word CondSolns_83;
                MR_Word MsgsCond_85;
                MR_Word InstMap1_86;
                MR_Word MsgsThen_87;
                MR_Word MsgsElse_88;
                MR_Word STATE_VARIABLE_DetInfo_145_145;
                MR_Word STATE_VARIABLE_DetInfo_146_146;
                MR_Word Var_148;
                MR_Word _DesiredCanFail_77;
                MR_Word _CondCanFail_82;

                parse_tree__prog_data__determinism_components_3_p_0(Desired_13, &_DesiredCanFail_77, &DesiredSolns_78);
                CondInfo_80 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond_74, (MR_Integer) 1))));
                CondDetism_81 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(CondInfo_80);
                parse_tree__prog_data__determinism_components_3_p_0(CondDetism_81, &_CondCanFail_82, &CondSolns_83);
                succeeded = (CondSolns_83 == (MR_Integer) 3);
                if (succeeded)
                {
                  succeeded = (DesiredSolns_78 != (MR_Integer) 3);
                }
                if (succeeded)
                {
                  MR_Word DesiredCond_84;

                  parse_tree__prog_data__determinism_components_3_p_1(&DesiredCond_84, (MR_Integer) 0, DesiredSolns_78);
                  check_hlds__det_report__det_diagnose_goal_7_p_0(Cond_74, InstMap0_12, DesiredCond_84, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_115, &STATE_VARIABLE_DetInfo_145_145, &MsgsCond_85);
                }
                else
                {
                  MsgsCond_85 = (MR_Word) ((MR_Unsigned) 0U);
                  STATE_VARIABLE_DetInfo_145_145 = STATE_VARIABLE_DetInfo_0_115;
                }
                hlds__goal_util__update_instmap_3_p_0(Cond_74, InstMap0_12, &InstMap1_86);
                check_hlds__det_report__det_diagnose_goal_7_p_0(Then_75, InstMap1_86, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_145_145, &STATE_VARIABLE_DetInfo_146_146, &MsgsThen_87);
                check_hlds__det_report__det_diagnose_goal_7_p_0(Else_76, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_146_146, &STATE_VARIABLE_DetInfo_116, &MsgsElse_88);
                Var_148 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), MsgsThen_87, MsgsElse_88);
                Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), MsgsCond_85, Var_148);
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_101 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_10, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) ShortHand_101)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.det_report.det_diagnose_goal_expr\'/9", (MR_String) "bi_implication");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_101, (MR_Integer) 4))));
                      MR_Word OrElseGoals_107 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortHand_101, (MR_Integer) 5))));
                      MR_Word MainMsgs_109;
                      MR_Word OrElseMsgs_110;
                      MR_Word STATE_VARIABLE_DetInfo_120_120;

                      check_hlds__det_report__det_diagnose_goal_7_p_0(MainGoal_106, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_0_115, &STATE_VARIABLE_DetInfo_120_120, &MainMsgs_109);
                      check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(OrElseGoals_107, InstMap0_12, Desired_13, SwitchContexts_15, STATE_VARIABLE_DetInfo_120_120, &STATE_VARIABLE_DetInfo_116, &OrElseMsgs_110);
                      Msgs_17 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), MainMsgs_109, OrElseMsgs_110);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_247 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ShortHand_101, (MR_Integer) 2))));
                      MR_Word next_value_of_tscc_proc_1_input_1_Goal_8 = SubGoal_247;
                      MR_Word next_value_of_tscc_proc_1_input_2_InstMap0_9 = InstMap0_12;
                      MR_Word next_value_of_tscc_proc_1_input_3_Desired_10 = Desired_13;
                      MR_Word next_value_of_tscc_proc_1_input_4_SwitchContexts_11 = SwitchContexts_15;
                      MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_DetInfo_0_18 = STATE_VARIABLE_DetInfo_0_115;

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
      tscc_output_1_STATE_VARIABLE_DetInfo_19 = STATE_VARIABLE_DetInfo_116;
      tscc_output_2_Msgs_13 = Msgs_17;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_DetInfo_19 = tscc_output_1_STATE_VARIABLE_DetInfo_19;
    *tscc_output_ptr_2_Msgs_13 = tscc_output_2_Msgs_13;
    return;
  }
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
    MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Msgs1_21;
    MR_Word Msgs2_22;
    MR_Word STATE_VARIABLE_DetInfo_25_25;
    MR_Word GoalExpr_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));
    MR_Word GoalInfo_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 1))));
    MR_Word Actual_38;
    MR_Word CompareResult_39;

    Actual_38 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_37);
    parse_tree__prog_detism__compare_determinisms_3_p_0(HeadVar__3_3, Actual_38, &CompareResult_39);
    switch (CompareResult_39) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_36, GoalInfo_37, InstMap0_2, HeadVar__3_3, Actual_38, HeadVar__4_4, STATE_VARIABLE_DetInfo_0_5, &STATE_VARIABLE_DetInfo_25_25, &Msgs1_21);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          Msgs1_21 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_25_25 = STATE_VARIABLE_DetInfo_0_5;
        }
        break;
    }
    check_hlds__det_report__det_diagnose_orelse_goals_7_p_0(Goals_15, InstMap0_2, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_DetInfo_25_25, STATE_VARIABLE_DetInfo_6, &Msgs2_22);
    *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Msgs1_21, Msgs2_22);
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
    MR_Word Case_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Cases_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_Word MainConsId_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_20, (MR_Integer) 0))));
    MR_Word OtherConsIds_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_20, (MR_Integer) 1))));
    MR_Word Goal_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_20, (MR_Integer) 2))));
    MR_Word GoalSeq_30;
    MR_Word MainMatch_31;
    MR_Word OtherMatches_32;
    MR_Word NewSwitchContext_33;
    MR_Word SwitchContexts1_34;
    MR_Word ModuleInfo0_35;
    MR_Word InstMap1_36;
    MR_Word ModuleInfo_37;
    MR_Word Msgs1_38;
    MR_Word Msgs2_39;
    MR_Word Var_42;
    MR_Word STATE_VARIABLE_DetInfo_44_44;
    MR_Word STATE_VARIABLE_DetInfo_45_45;
    MR_Word GoalExpr_56;
    MR_Word GoalInfo_57;
    MR_Word Actual_58;
    MR_Word CompareResult_59;

    hlds__hlds_goal__goal_to_conj_list_2_p_0(Goal_29, &GoalSeq_30);
    {
      Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    check_hlds__det_report__find_switch_var_matches_6_p_0(GoalSeq_30, Var_42, MainConsId_27, OtherConsIds_28, &MainMatch_31, &OtherMatches_32);
    {
      NewSwitchContext_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), NewSwitchContext_33, 0) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(MR_mktag(0), NewSwitchContext_33, 1) = ((MR_Box) (MainMatch_31));
      MR_hl_field(MR_mktag(0), NewSwitchContext_33, 2) = ((MR_Box) (OtherMatches_32));
    }
    {
      SwitchContexts1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SwitchContexts1_34, 0) = ((MR_Box) (NewSwitchContext_33));
      MR_hl_field(MR_mktag(1), SwitchContexts1_34, 1) = ((MR_Box) (HeadVar__6_6));
    }
    check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_7, &ModuleInfo0_35);
    hlds__instmap__bind_var_to_functors_8_p_0(HeadVar__1_1, HeadVar__2_2, MainConsId_27, OtherConsIds_28, InstMap0_4, &InstMap1_36, ModuleInfo0_35, &ModuleInfo_37);
    check_hlds__det_util__det_info_set_module_info_3_p_0(ModuleInfo_37, STATE_VARIABLE_DetInfo_0_7, &STATE_VARIABLE_DetInfo_44_44);
    GoalExpr_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_29, (MR_Integer) 0))));
    GoalInfo_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_29, (MR_Integer) 1))));
    Actual_58 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_57);
    parse_tree__prog_detism__compare_determinisms_3_p_0(HeadVar__5_5, Actual_58, &CompareResult_59);
    switch (CompareResult_59) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_56, GoalInfo_57, InstMap1_36, HeadVar__5_5, Actual_58, SwitchContexts1_34, STATE_VARIABLE_DetInfo_44_44, &STATE_VARIABLE_DetInfo_45_45, &Msgs1_38);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          Msgs1_38 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_45_45 = STATE_VARIABLE_DetInfo_44_44;
        }
        break;
    }
    check_hlds__det_report__det_diagnose_switch_arms_9_p_0(HeadVar__1_1, HeadVar__2_2, Cases_21, InstMap0_4, HeadVar__5_5, HeadVar__6_6, STATE_VARIABLE_DetInfo_45_45, STATE_VARIABLE_DetInfo_8, &Msgs2_39);
    *HeadVar__9_9 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Msgs1_38, Msgs2_39);
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
  MR_Integer STATE_VARIABLE_DisjunctsWithSoln_0_8,
  MR_Integer * STATE_VARIABLE_DisjunctsWithSoln_9,
  MR_Word * HeadVar__10_10)
{
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
      MR_Word Goal_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ActualCanFail_30;
      MR_Word DesiredCanFail_32;
      MR_Word DesiredSolns_33;
      MR_Word ClauseCanFail_34;
      MR_Word ClauseDesired_35;
      MR_Word Msgs1_36;
      MR_Word Msgs2_41;
      MR_Word STATE_VARIABLE_DetInfo_46_46;
      MR_Integer STATE_VARIABLE_DisjunctsWithSoln_48_48;
      MR_Word GoalExpr_62;
      MR_Word GoalInfo_63;
      MR_Word Actual_64;
      MR_Word CompareResult_65;
      MR_Word Var_31;
      MR_Word GoalInfo_38;
      MR_Word GoalDetism_39;
      MR_Word Var_53;
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
      GoalExpr_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_21, (MR_Integer) 0))));
      GoalInfo_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_21, (MR_Integer) 1))));
      Actual_64 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_63);
      parse_tree__prog_detism__compare_determinisms_3_p_0(ClauseDesired_35, Actual_64, &CompareResult_65);
      switch (CompareResult_65) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 3:
        case (MR_Integer) 0:
          check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_62, GoalInfo_63, HeadVar__2_2, ClauseDesired_35, Actual_64, HeadVar__5_5, STATE_VARIABLE_DetInfo_0_6, &STATE_VARIABLE_DetInfo_46_46, &Msgs1_36);
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 1:
          {
            Msgs1_36 = (MR_Word) ((MR_Unsigned) 0U);
            STATE_VARIABLE_DetInfo_46_46 = STATE_VARIABLE_DetInfo_0_6;
          }
          break;
      }
      GoalInfo_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_21, (MR_Integer) 1))));
      GoalDetism_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_38);
      parse_tree__prog_data__determinism_components_3_p_0(GoalDetism_39, &Var_40, &Var_53);
      succeeded = ((MR_Integer) 0 == Var_53);
      if (succeeded)
        STATE_VARIABLE_DisjunctsWithSoln_48_48 = STATE_VARIABLE_DisjunctsWithSoln_0_8;
      else
      {
        STATE_VARIABLE_DisjunctsWithSoln_48_48 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_DisjunctsWithSoln_0_8 + (MR_Unsigned) (MR_Integer) 1);
      }
      check_hlds__det_report__det_diagnose_disj_10_p_0(Goals_22, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, HeadVar__5_5, STATE_VARIABLE_DetInfo_46_46, STATE_VARIABLE_DetInfo_7, STATE_VARIABLE_DisjunctsWithSoln_48_48, STATE_VARIABLE_DisjunctsWithSoln_9, &Msgs2_41);
      *HeadVar__10_10 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Msgs1_36, Msgs2_41);
    }
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
    MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Msgs1_21;
    MR_Word InstMap1_22;
    MR_Word Msgs2_23;
    MR_Word STATE_VARIABLE_DetInfo_26_26;
    MR_Word GoalExpr_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));
    MR_Word GoalInfo_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 1))));
    MR_Word Actual_39;
    MR_Word CompareResult_40;

    Actual_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_38);
    parse_tree__prog_detism__compare_determinisms_3_p_0(HeadVar__3_3, Actual_39, &CompareResult_40);
    switch (CompareResult_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 0:
        check_hlds__det_report__det_diagnose_goal_expr_9_p_0(GoalExpr_37, GoalInfo_38, HeadVar__2_2, HeadVar__3_3, Actual_39, HeadVar__4_4, STATE_VARIABLE_DetInfo_0_5, &STATE_VARIABLE_DetInfo_26_26, &Msgs1_21);
        break;
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          Msgs1_21 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_DetInfo_26_26 = STATE_VARIABLE_DetInfo_0_5;
        }
        break;
    }
    hlds__goal_util__update_instmap_3_p_0(Goal_14, HeadVar__2_2, &InstMap1_22);
    check_hlds__det_report__det_diagnose_conj_7_p_0(Goals_15, InstMap1_22, HeadVar__3_3, HeadVar__4_4, STATE_VARIABLE_DetInfo_26_26, STATE_VARIABLE_DetInfo_6, &Msgs2_23);
    *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_msg_0), Msgs1_21, Msgs2_23);
  }
}

static void MR_CALL 
check_hlds__det_report__det_report_call_context_7_p_0(
  MR_Word Context_8,
  MR_Word CallUnifyContext_9,
  MR_Word DetInfo_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word * InitMsgs_13,
  MR_Word * StartingPieces_14)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo_15;
    MR_Word PredInfo_16;
    MR_Word Origin_17;
    MR_Word Var_30;

    check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_10, &ModuleInfo_15);
    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_15, PredId_11, &PredInfo_16);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_16, &Origin_17);
    succeeded = ((MR_tag((MR_Word) Origin_17)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Origin_17, (MR_Integer) 0))) & (MR_Integer) 3);
      succeeded = (Var_30 == (MR_Integer) 0);
    }
    if (succeeded)
    {
      *InitMsgs_13 = (MR_Word) ((MR_Unsigned) 0U);
      if ((CallUnifyContext_9 == (MR_Word) ((MR_Unsigned) 0U)))
        *StartingPieces_14 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[82]));
      else
      {
        MR_Word LHS_19;
        MR_Word RHS_20;
        MR_Word UC_21;
        MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallUnifyContext_9, (MR_Integer) 0))));

        LHS_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 0))));
        RHS_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 1))));
        UC_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_40, (MR_Integer) 2))));
        check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 0, UC_21, DetInfo_10, LHS_19, RHS_20, StartingPieces_14);
      }
    }
    else
    {
      MR_Word ProcTable_25;
      MR_Word ProcInfo_26;
      MR_Word ArgModes_27;
      MR_Word InstVarSet_28;
      MR_Word PredPieces_29;
      MR_Box conv0_ProcInfo_26;

      if ((CallUnifyContext_9 == (MR_Word) ((MR_Unsigned) 0U)))
        *InitMsgs_13 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word UnifyPieces0_22;
        MR_Word UnifyPieces_23;
        MR_Word UnifyMsg_24;
        MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallUnifyContext_9, (MR_Integer) 0))));
        MR_Word Var_50;
        MR_Word Var_51;
        MR_Word LHS_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 0))));
        MR_Word RHS_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 1))));
        MR_Word UC_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_43, (MR_Integer) 2))));

        check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0((MR_Integer) 0, (MR_Integer) 1, UC_59, DetInfo_10, LHS_57, RHS_58, &UnifyPieces0_22);
        UnifyPieces_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), UnifyPieces0_22, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[111])));
        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (UnifyPieces_23));
        }
        {
          Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (Var_51));
          MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          UnifyMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), UnifyMsg_24, 0) = ((MR_Box) (Context_8));
          MR_hl_field(MR_mktag(0), UnifyMsg_24, 1) = ((MR_Box) (Var_50));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *InitMsgs_13 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (UnifyMsg_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_16, &ProcTable_25);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_25, ((MR_Box) (ProcId_12)), &conv0_ProcInfo_26);
      ProcInfo_26 = ((MR_Word) (conv0_ProcInfo_26));
      hlds__hlds_pred__proc_info_declared_argmodes_2_p_0(ProcInfo_26, &ArgModes_27);
      hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_26, &InstVarSet_28);
      PredPieces_29 = hlds__hlds_error_util__describe_one_pred_name_mode_5_f_0(ModuleInfo_15, (MR_Integer) 0, PredId_11, InstVarSet_28, ArgModes_27);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *StartingPieces_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[112])));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PredPieces_29));
      }
    }
  }
}

static void MR_CALL 
check_hlds__det_report__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_114_101_112_111_114_116_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_51_93_95_48_8_p_0(
  MR_Word STATE_VARIABLE_First_0_27,
  MR_Word Last_10,
  MR_Word UnifyContext_12,
  MR_Word DetInfo_13,
  MR_Word LHS_14,
  MR_Word RHS_15,
  MR_Word * AllPieces_16)
{
  {
    MR_bool succeeded;
    MR_Word UnifyContextPieces_17;
    MR_Word ProcInfo_18;
    MR_Word VarSet_19;
    MR_Word ModuleInfo_20;
    MR_String StartWords_21;
    MR_Word Pieces_26;
    MR_Word STATE_VARIABLE_First_28_28;
    MR_String Var_22;

    hlds__hlds_out__hlds_out_util__unify_context_first_to_pieces_5_p_0(STATE_VARIABLE_First_0_27, &STATE_VARIABLE_First_28_28, UnifyContext_12, (MR_Word) ((MR_Unsigned) 0U), &UnifyContextPieces_17);
    check_hlds__det_util__det_get_proc_info_2_p_0(DetInfo_13, &ProcInfo_18);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_18, &VarSet_19);
    check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_13, &ModuleInfo_20);
    switch (Last_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (STATE_VARIABLE_First_28_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            StartWords_21 = (MR_String) "Unification";
            break;
          case (MR_Integer) 1:
            StartWords_21 = (MR_String) "unification";
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (STATE_VARIABLE_First_28_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            StartWords_21 = (MR_String) "In unification";
            break;
          case (MR_Integer) 1:
            StartWords_21 = (MR_String) "in unification";
            break;
        }
        break;
    }
    succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, LHS_14, &Var_22);
    if (succeeded)
    {
      MR_String LHSVarName_23;
      MR_Word RV_24;
      MR_String Var_25;

      LHSVarName_23 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, LHS_14);
      succeeded = ((MR_tag((MR_Word) RHS_15)) == (MR_Integer) 0);
      if (succeeded)
      {
        RV_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RHS_15, (MR_Integer) 0))));
        succeeded = mercury__varset__search_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_19, RV_24, &Var_25);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_Word Var_30;
        MR_Word Var_31;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_String Var_36;

        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (StartWords_21));
        }
        Var_36 = parse_tree__error_util__add_quotes_1_f_0(LHSVarName_23);
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[108])));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
        }
        {
          Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (Var_30));
          MR_hl_field(MR_mktag(1), Pieces_26, 1) = ((MR_Box) (Var_31));
        }
      }
      else
      {
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_String Var_44;
        MR_Word Var_45;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_String Var_50;
        MR_String Var_51;

        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (StartWords_21));
        }
        Var_44 = parse_tree__error_util__add_quotes_1_f_0(LHSVarName_23);
        {
          Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_43, 1) = ((MR_Box) (Var_44));
        }
        Var_51 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(ModuleInfo_20, VarSet_19, (MR_Integer) 0, RHS_15);
        Var_50 = parse_tree__error_util__add_quotes_1_f_0(Var_51);
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 5U));
          MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Var_50));
        }
        {
          Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Var_49));
          MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[92])));
          MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_48));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Var_43));
          MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (Var_45));
        }
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[109])));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_42));
        }
        {
          Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(1), Pieces_26, 1) = ((MR_Box) (Var_39));
        }
      }
    }
    else
    {
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_String Var_60;
      MR_String Var_61;

      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (StartWords_21));
      }
      Var_61 = hlds__hlds_out__hlds_out_goal__unify_rhs_to_string_4_f_0(ModuleInfo_20, VarSet_19, (MR_Integer) 0, RHS_15);
      Var_60 = parse_tree__error_util__add_quotes_1_f_0(Var_61);
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[108])));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
      }
      {
        Pieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_26, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Pieces_26, 1) = ((MR_Box) (Var_55));
      }
    }
    *AllPieces_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), UnifyContextPieces_17, Pieces_26);
  }
}

static void MR_CALL 
check_hlds__det_report__find_switch_var_matches_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Match_4;

    check_hlds__det_report__make_switch_match_no_args_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_Match_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_Match_4));
  }
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
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_3));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0), (MR_Word) (&check_hlds__det_report_scalar_common_1[2]), OtherConsIds_4, OtherMatches_6);
    }
    else
    {
      MR_Word Conjunct_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Conjuncts_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conjunct_13, (MR_Integer) 0))));
      MR_Word GoalInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Conjunct_13, (MR_Integer) 1))));
      MR_Word ArgVars_28;
      MR_Word TypeInfo_57_57;
      MR_Word Unification_25;
      MR_Word Var_27;
      MR_Word Var_60;

      succeeded = ((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unification_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_20, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unification_25)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_25, (MR_Integer) 0))));
          Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_25, (MR_Integer) 1))));
          ArgVars_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_25, (MR_Integer) 2))));
          succeeded = parse_tree__prog_data____Unify____cons_id_0_0(MainConsId_3, Var_60);
          if (succeeded)
          {
            TypeInfo_57_57 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
            succeeded = mercury__list__member_2_p_0(TypeInfo_57_57, ((MR_Box) (Var_27)), STATE_VARIABLE_SwitchVarSynonyms_0_2);
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
            MaybeArgVars_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeArgVars_35, 0) = ((MR_Box) (ArgVars_28));
          }
        else
          MaybeArgVars_35 = (MR_Word) ((MR_Unsigned) 0U);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *MainMatch_5 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_3));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeArgVars_35));
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

        succeeded = ((((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Disjuncts_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_20, (MR_Integer) 1))));
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (MainConsId_3));
          }
          succeeded = check_hlds__det_report__find_switch_var_submatches_6_p_0(Disjuncts_36, STATE_VARIABLE_SwitchVarSynonyms_0_2, Var_46, OtherConsIds_4, &Var_47, &OtherMatches0_38);
          if (succeeded)
          {
            succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              MainMatch0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
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
          MR_Word TypeInfo_59_59;
          MR_Word FromVar_44;
          MR_Word Unification_49;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_STATE_VARIABLE_SwitchVarSynonyms_0_2;

          succeeded = ((MR_tag((MR_Word) GoalExpr_20)) == (MR_Integer) 1);
          if (succeeded)
          {
            Unification_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_20, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) Unification_49)) == (MR_Integer) 2);
            if (succeeded)
            {
              ToVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_49, (MR_Integer) 0))));
              FromVar_44 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unification_49, (MR_Integer) 1))));
              TypeInfo_59_59 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
              succeeded = mercury__list__member_2_p_0(TypeInfo_59_59, ((MR_Box) (FromVar_44)), STATE_VARIABLE_SwitchVarSynonyms_0_2);
            }
          }
          if (succeeded)
            {
              STATE_VARIABLE_SwitchVarSynonyms_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_SwitchVarSynonyms_48_48, 0) = ((MR_Box) (ToVar_43));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_SwitchVarSynonyms_48_48, 1) = ((MR_Box) (STATE_VARIABLE_SwitchVarSynonyms_0_2));
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
      MR_Word Disjunct_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Disjuncts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_8, (MR_Integer) 0))));
      MR_Word GoalInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Disjunct_8, (MR_Integer) 1))));
      MR_Word Unification_20;
      MR_Word Var_22;
      MR_Word ConsId_23;
      MR_Word ArgVars_24;
      MR_Word MainConsId_28;

      succeeded = ((MR_tag((MR_Word) GoalExpr_15)) == (MR_Integer) 1);
      if (succeeded)
      {
        Unification_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr_15, (MR_Integer) 3))));
        succeeded = ((MR_tag((MR_Word) Unification_20)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_20, (MR_Integer) 0))));
          ConsId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_20, (MR_Integer) 1))));
          ArgVars_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Unification_20, (MR_Integer) 2))));
          TypeInfo_40_40 = (MR_Word) (&check_hlds__det_report_scalar_common_2[0]);
          succeeded = mercury__list__member_2_p_0(TypeInfo_40_40, ((MR_Box) (Var_22)), SwitchVarSynonyms_2);
          if (succeeded)
          {
            succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MainConsId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
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
                TypeInfo_45_45 = (MR_Word) (&check_hlds__det_report_scalar_common_2[57]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_45_45, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_43)));
                if (succeeded)
                {
                  {
                    Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (ArgVars_24));
                  }
                  {
                    Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (ConsId_23));
                    MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Var_38));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_37));
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
                      MaybeArgVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), MaybeArgVars_34, 0) = ((MR_Box) (ArgVars_24));
                    }
                  else
                    MaybeArgVars_34 = (MR_Word) ((MR_Unsigned) 0U);
                  {
                    Var_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_39, 0) = ((MR_Box) (ConsId_23));
                    MR_hl_field(MR_mktag(0), Var_39, 1) = ((MR_Box) (MaybeArgVars_34));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__6_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_39));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LeftOverMatches_30));
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
}

static void MR_CALL 
check_hlds__det_report__det_diagnose_primitive_goal_5_p_0(
  MR_Word Desired_6,
  MR_Word Actual_7,
  MR_Word Context_8,
  MR_Word StartingPieces_9,
  MR_Word * Msgs_10)
{
  {
    MR_Word DesiredCanFail_11;
    MR_Word DesiredSolns_12;
    MR_Word ActualCanFail_13;
    MR_Word ActualSolns_14;
    MR_Word CmpCanFail_15;
    MR_Word CanFailPieces_16;
    MR_Word CmpSolns_17;
    MR_Word ConnectPieces_20;
    MR_Word SolnsPieces_21;
    MR_Word RawPieces_22;
    MR_Word Pieces_25;
    MR_Word Var_38;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;

    parse_tree__prog_data__determinism_components_3_p_0(Desired_6, &DesiredCanFail_11, &DesiredSolns_12);
    parse_tree__prog_data__determinism_components_3_p_0(Actual_7, &ActualCanFail_13, &ActualSolns_14);
    parse_tree__prog_detism__compare_canfails_3_p_0(DesiredCanFail_11, ActualCanFail_13, &CmpCanFail_15);
    switch (CmpCanFail_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        CanFailPieces_16 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 0:
        CanFailPieces_16 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[98]));
        break;
    }
    parse_tree__prog_detism__compare_solncounts_3_p_0(DesiredSolns_12, ActualSolns_14, &CmpSolns_17);
    switch (CmpSolns_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          ConnectPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
          SolnsPieces_21 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        {
          if ((CanFailPieces_16 == (MR_Word) ((MR_Unsigned) 0U)))
            ConnectPieces_20 = (MR_Word) ((MR_Unsigned) 0U);
          else
            ConnectPieces_20 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[99]));
          SolnsPieces_21 = ((&check_hlds__det_report_vector_common_6[0 + DesiredSolns_12]))->check_hlds__det_report__vector_common_type_6_0__vct_6_f_0;
        }
        break;
    }
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), ConnectPieces_20, SolnsPieces_21);
    RawPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), CanFailPieces_16, Var_38);
    if ((RawPieces_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_41;
      MR_Word Var_43;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_String Var_48;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_String Var_59;

      Var_48 = parse_tree__prog_out__determinism_to_string_1_f_0(Desired_6);
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_47, 0) = ((MR_Box) (Var_48));
      }
      Var_59 = parse_tree__prog_out__determinism_to_string_1_f_0(Actual_7);
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_58, 0) = ((MR_Box) (Var_59));
      }
      {
        Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[107])));
        MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_57));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_54));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[106])));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_49));
      }
      {
        Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[105])));
        MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
      }
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
      }
      {
        Pieces_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[104])));
        MR_hl_field(MR_mktag(1), Pieces_25, 1) = ((MR_Box) (Var_41));
      }
    }
    else
    {
      Pieces_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), RawPieces_22, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[16])));
    }
    Var_75 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), StartingPieces_9, Pieces_25);
    {
      Var_74 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_74, 0) = ((MR_Box) (Var_75));
    }
    {
      Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (Var_73));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Msgs_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
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
  MR_Word STATE_VARIABLE_DetInfo_0_37,
  MR_Word * STATE_VARIABLE_DetInfo_38)
{
  {
    MR_bool succeeded;
    MR_Word NestingPieces_18;
    MR_String SwitchVarStr_19;
    MR_Word MaybeMissingInfo_20;
    MR_Word MaybeSeverityComponents_28;

    check_hlds__det_report__find_missing_cons_ids_9_p_0(STATE_VARIABLE_DetInfo_0_37, MaybeLimit_11, InstMap0_12, SwitchContexts_13, SwitchVar_14, Cases_15, &NestingPieces_18, &SwitchVarStr_19, &MaybeMissingInfo_20);
    switch (Why_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        if ((MaybeMissingInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeSeverityComponents_28 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word MissingInfo_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMissingInfo_20, (MR_Integer) 0))));
          MR_Integer NumPossibleConsIds_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MissingInfo_21, (MR_Integer) 0))));
          MR_Integer NumUncoveredConsIds_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), MissingInfo_21, (MR_Integer) 1))));
          MR_Word MainPieces_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MissingInfo_21, (MR_Integer) 2))));
          MR_Word VerbosePieces_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MissingInfo_21, (MR_Integer) 3))));
          MR_Word ModuleInfo_29;
          MR_Word Globals_30;
          MR_Integer Threshold_31;
          MR_Integer NumCoveredConsIds_32;
          MR_Integer Var_57;
          MR_Integer Var_58;

          check_hlds__det_util__det_info_get_module_info_2_p_0(STATE_VARIABLE_DetInfo_0_37, &ModuleInfo_29);
          hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_29, &Globals_30);
          libs__globals__lookup_int_option_3_p_0(Globals_30, (MR_Integer) 51, &Threshold_31);
          NumCoveredConsIds_32 = (MR_Integer) ((MR_Unsigned) NumPossibleConsIds_22 - (MR_Unsigned) NumUncoveredConsIds_23);
          Var_57 = (MR_Integer) ((MR_Unsigned) NumCoveredConsIds_32 * (MR_Unsigned) (MR_Integer) 100);
          Var_58 = (MR_Integer) ((MR_Unsigned) NumPossibleConsIds_22 * (MR_Unsigned) Threshold_31);
          succeeded = (Var_57 >= Var_58);
          if (succeeded)
          {
            MR_Word Var_61;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_70;
            MR_Tuple Var_71;
            MR_Word Var_73;
            MR_Word NoCoverPieces_98;
            MR_Word Component_99;

            {
              Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), Var_65, 1) = ((MR_Box) (SwitchVarStr_19));
            }
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[95])));
            }
            {
              Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[93])));
              MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_64));
            }
            {
              NoCoverPieces_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), NoCoverPieces_98, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(1), NoCoverPieces_98, 1) = ((MR_Box) (Var_61));
            }
            Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NestingPieces_18, NoCoverPieces_98);
            check_hlds__det_report__append_prefix_and_maybe_verbose_4_p_0(Var_70, MainPieces_24, VerbosePieces_25, &Component_99);
            {
              Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Component_99));
              MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_71 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (Var_73));
            }
            {
              MaybeSeverityComponents_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeSeverityComponents_28, 0) = ((MR_Box) (Var_71));
            }
          }
          else
            MaybeSeverityComponents_28 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 0:
        if ((MaybeMissingInfo_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_40;
          MR_Word Var_43;
          MR_Word Var_44;
          MR_Word Var_51;
          MR_Tuple Var_52;
          MR_Word Var_54;
          MR_Word NoCoverPieces_104;
          MR_Word Component_105;

          {
            Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (SwitchVarStr_19));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (Var_44));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[59])));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[96])));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_43));
          }
          {
            NoCoverPieces_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NoCoverPieces_104, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), NoCoverPieces_104, 1) = ((MR_Box) (Var_40));
          }
          Var_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NestingPieces_18, NoCoverPieces_104);
          {
            Component_105 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Component_105, 0) = ((MR_Box) (Var_51));
          }
          {
            Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (Component_105));
            MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_52 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Var_54));
          }
          {
            MaybeSeverityComponents_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSeverityComponents_28, 0) = ((MR_Box) (Var_52));
          }
        }
        else
        {
          MR_Word NoCoverPieces_26;
          MR_Word Component_27;
          MR_Word Var_76;
          MR_Word Var_79;
          MR_Word Var_80;
          MR_Word Var_88;
          MR_Tuple Var_89;
          MR_Word Var_91;
          MR_Word MissingInfo_115 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMissingInfo_20, (MR_Integer) 0))));
          MR_Word MainPieces_118 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MissingInfo_115, (MR_Integer) 2))));
          MR_Word VerbosePieces_119 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MissingInfo_115, (MR_Integer) 3))));

          {
            Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (SwitchVarStr_19));
          }
          {
            Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
            MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[63])));
          }
          {
            Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[96])));
            MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_79));
          }
          {
            NoCoverPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), NoCoverPieces_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), NoCoverPieces_26, 1) = ((MR_Box) (Var_76));
          }
          Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), NestingPieces_18, NoCoverPieces_26);
          check_hlds__det_report__append_prefix_and_maybe_verbose_4_p_0(Var_88, MainPieces_118, VerbosePieces_119, &Component_27);
          {
            Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Component_27));
            MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_89 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Var_89, 1) = ((MR_Box) (Var_91));
          }
          {
            MaybeSeverityComponents_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSeverityComponents_28, 0) = ((MR_Box) (Var_89));
          }
        }
        break;
    }
    if ((MaybeSeverityComponents_28 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DetInfo_38 = STATE_VARIABLE_DetInfo_0_37;
    else
    {
      MR_Word Severity_33;
      MR_Word SpecComponents_34;
      MR_Word Msg_35;
      MR_Word Spec_36;
      MR_Tuple Var_93 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), MaybeSeverityComponents_28, (MR_Integer) 0))));
      MR_Word Var_95;

      Severity_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_93, (MR_Integer) 0))));
      SpecComponents_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_93, (MR_Integer) 1))));
      {
        Msg_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_35, 0) = ((MR_Box) (Context_16));
        MR_hl_field(MR_mktag(0), Msg_35, 1) = ((MR_Box) (SpecComponents_34));
      }
      {
        Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Msg_35));
        MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) (Severity_33));
        MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 40U));
        MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_95));
      }
      check_hlds__det_util__det_info_add_error_spec_3_p_0(Spec_36, STATE_VARIABLE_DetInfo_0_37, STATE_VARIABLE_DetInfo_38);
    }
  }
}

static void MR_CALL 
check_hlds__det_report__find_missing_cons_ids_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    parse_tree__prog_util__strip_module_qualifier_from_cons_id_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
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
  {
    MR_bool succeeded;
    MR_Word ProcInfo_19;
    MR_Word VarSet_20;
    MR_Word ModuleInfo_21;
    MR_Word VarInst_22;
    MR_Word PossibleConsIdsSet_38;
    MR_Word VarTypes_23;
    MR_Word VarType_24;
    MR_Word VarTypeCtor_25;
    MR_Word BoundInsts_26;

    check_hlds__det_report__det_diagnose_switch_context_3_p_0(DetInfo_10, SwitchContexts_13, NestingPieces_16);
    check_hlds__det_util__det_get_proc_info_2_p_0(DetInfo_10, &ProcInfo_19);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_19, &VarSet_20);
    *VarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_20, Var_14);
    check_hlds__det_util__det_info_get_module_info_2_p_0(DetInfo_10, &ModuleInfo_21);
    hlds__instmap__instmap_lookup_var_3_p_0(InstMap0_12, Var_14, &VarInst_22);
    check_hlds__det_util__det_info_get_vartypes_2_p_0(DetInfo_10, &VarTypes_23);
    hlds__vartypes__lookup_var_type_3_p_0(VarTypes_23, Var_14, &VarType_24);
    parse_tree__prog_type__type_to_ctor_det_2_p_0(VarType_24, &VarTypeCtor_25);
    succeeded = check_hlds__inst_test__inst_is_bound_to_functors_3_p_0(ModuleInfo_21, VarInst_22, &BoundInsts_26);
    if (succeeded)
    {
      MR_Word BoundConsIds_27;
      MR_Word SortedBoundConsIds_28;
      MR_Word BoundConsIdsSet_29;
      MR_Word TypeConstructors_32;
      MR_Word TypeDefn_30;
      MR_Word TypeBody_31;

      parse_tree__prog_mode__bound_insts_to_cons_ids_3_p_0(VarTypeCtor_25, BoundInsts_26, &BoundConsIds_27);
      mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), BoundConsIds_27, &SortedBoundConsIds_28);
      mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), SortedBoundConsIds_28, &BoundConsIdsSet_29);
      succeeded = check_hlds__det_util__det_lookup_var_type_4_p_0(ModuleInfo_21, ProcInfo_19, Var_14, &TypeDefn_30);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_30, &TypeBody_31);
        succeeded = ((MR_tag((MR_Word) TypeBody_31)) == (MR_Integer) 1);
        if (succeeded)
          TypeConstructors_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_31, (MR_Integer) 0))));
      }
      if (succeeded)
      {
        MR_Word SortedTypeConsIds_36;
        MR_Word TypeConsIdsSet_37;

        SortedTypeConsIds_36 = hlds__hlds_data__constructor_cons_ids_2_f_0(VarTypeCtor_25, TypeConstructors_32);
        mercury__set_tree234__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), SortedTypeConsIds_36, &TypeConsIdsSet_37);
        mercury__set_tree234__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), TypeConsIdsSet_37, BoundConsIdsSet_29, &PossibleConsIdsSet_38);
      }
      else
        PossibleConsIdsSet_38 = BoundConsIdsSet_29;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word TypeCtorInfo_128_128;
      MR_Word TypeDefn_121;
      MR_Word TypeBody_122;
      MR_Word TypeConstructors_123;
      MR_Word SortedTypeConsIds_124;

      succeeded = check_hlds__det_util__det_lookup_var_type_4_p_0(ModuleInfo_21, ProcInfo_19, Var_14, &TypeDefn_121);
      if (succeeded)
      {
        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_121, &TypeBody_122);
        succeeded = ((MR_tag((MR_Word) TypeBody_122)) == (MR_Integer) 1);
        if (succeeded)
        {
          TypeConstructors_123 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeBody_122, (MR_Integer) 0))));
          SortedTypeConsIds_124 = hlds__hlds_data__constructor_cons_ids_2_f_0(VarTypeCtor_25, TypeConstructors_123);
          TypeCtorInfo_128_128 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0);
          mercury__set_tree234__sorted_list_to_set_2_p_0(TypeCtorInfo_128_128, SortedTypeConsIds_124, &PossibleConsIdsSet_38);
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      MR_Word CoveredConsIdsSet_42;
      MR_Word UncoveredConsIdsSet_43;
      MR_Integer NumPossibleConsIds_44;
      MR_Integer NumUncoveredConsIds_45;
      MR_Word UncoveredConsIds_46;
      MR_Word UnQualConsIds_47;
      MR_Word SortedUnQualConsIds_48;
      MR_Word PrintedConsIds_49;
      MR_Word NonPrintedConsIds_50;
      MR_Word Var_61;

      Var_61 = mercury__set_tree234__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0));
      check_hlds__det_report__compute_covered_cons_ids_3_p_0(Cases_15, Var_61, &CoveredConsIdsSet_42);
      mercury__set_tree234__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), PossibleConsIdsSet_38, CoveredConsIdsSet_42, &UncoveredConsIdsSet_43);
      NumPossibleConsIds_44 = mercury__set_tree234__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), PossibleConsIdsSet_38);
      NumUncoveredConsIds_45 = mercury__set_tree234__count_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UncoveredConsIdsSet_43);
      UncoveredConsIds_46 = mercury__set_tree234__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UncoveredConsIdsSet_43);
      mercury__list__map_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), (MR_Word) (&check_hlds__det_report_scalar_common_1[1]), UncoveredConsIds_46, &UnQualConsIds_47);
      mercury__list__sort_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), UnQualConsIds_47, &SortedUnQualConsIds_48);
      if ((MaybeLimit_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        PrintedConsIds_49 = SortedUnQualConsIds_48;
        NonPrintedConsIds_50 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
      {
        MR_Integer Limit_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeLimit_11, (MR_Integer) 0))));
        MR_Integer NumConsIds_52;

        mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), SortedUnQualConsIds_48, &NumConsIds_52);
        succeeded = (NumConsIds_52 <= Limit_51);
        if (succeeded)
        {
          PrintedConsIds_49 = SortedUnQualConsIds_48;
          NonPrintedConsIds_50 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Integer Var_63 = (MR_Integer) ((MR_Unsigned) Limit_51 - (MR_Unsigned) (MR_Integer) 1);

          mercury__list__split_upto_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), Var_63, SortedUnQualConsIds_48, &PrintedConsIds_49, &NonPrintedConsIds_50);
        }
      }
      if ((PrintedConsIds_49 == (MR_Word) ((MR_Unsigned) 0U)))
        *MaybeMissingInfo_18 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word HeadPrintedConsId_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PrintedConsIds_49, (MR_Integer) 0))));
        MR_Word TailPrintedConsIds_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PrintedConsIds_49, (MR_Integer) 1))));
        MR_Word MainPieces_55;
        MR_Word VerbosePieces_56;
        MR_Word MissingInfo_60;

        if ((NonPrintedConsIds_50 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word Var_111;
          MR_Word Var_112;

          Var_112 = check_hlds__det_report__cons_id_list_to_pieces_3_f_0(HeadPrintedConsId_53, TailPrintedConsIds_54, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[89])));
          Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_112, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[91])));
          MainPieces_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[87])), Var_111);
          VerbosePieces_56 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Integer NumNonPrintedConsIds_59;
          MR_Word Var_65;
          MR_Word Var_69;
          MR_Word Var_70;
          MR_Word Var_78;
          MR_Word Var_81;
          MR_Word Var_84;
          MR_Word Var_85;
          MR_Word Var_96;
          MR_Word Var_97;
          MR_Word Var_98;

          mercury__list__length_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), NonPrintedConsIds_50, &NumNonPrintedConsIds_59);
          Var_65 = (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[87]));
          Var_70 = check_hlds__det_report__cons_id_list_to_pieces_3_f_0(HeadPrintedConsId_53, TailPrintedConsIds_54, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[72])));
          {
            Var_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Var_85, 1) = ((MR_Box) (NumNonPrintedConsIds_59));
          }
          {
            Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
            MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[74])));
          }
          {
            Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[92])));
            MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (Var_84));
          }
          {
            Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[90])));
            MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_81));
          }
          Var_69 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_70, Var_78);
          MainPieces_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, Var_69);
          Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0), TailPrintedConsIds_54, NonPrintedConsIds_50);
          Var_97 = check_hlds__det_report__cons_id_list_to_pieces_3_f_0(HeadPrintedConsId_53, Var_98, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[89])));
          Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_97, (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[91])));
          VerbosePieces_56 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_65, Var_96);
        }
        {
          MissingInfo_60 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), MissingInfo_60, 0) = ((MR_Box) (NumPossibleConsIds_44));
          MR_hl_field(MR_mktag(0), MissingInfo_60, 1) = ((MR_Box) (NumUncoveredConsIds_45));
          MR_hl_field(MR_mktag(0), MissingInfo_60, 2) = ((MR_Box) (MainPieces_55));
          MR_hl_field(MR_mktag(0), MissingInfo_60, 3) = ((MR_Box) (VerbosePieces_56));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeMissingInfo_18 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MissingInfo_60));
        }
      }
    }
    else
      *MaybeMissingInfo_18 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_Box MR_CALL 
check_hlds__det_report__det_diagnose_switch_context_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = check_hlds__det_report__switch_match_to_string_2_f_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
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
    MR_Word SwitchContext_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word SwitchContexts_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ProcInfo_9;
    MR_Word VarSet_10;
    MR_Word Var_11;
    MR_Word MainMatch_12;
    MR_Word OtherMatches_13;
    MR_String MainMatchStr_14;
    MR_Word OtherMatchStrs_15;
    MR_String MatchsStr_16;
    MR_String VarStr_17;
    MR_Word InnerPieces_18;
    MR_Word OuterPieces_19;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_38;
    MR_Word ConsId_49;
    MR_Word MaybeArgVars_50;

    check_hlds__det_util__det_get_proc_info_2_p_0(DetInfo_1, &ProcInfo_9);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_9, &VarSet_10);
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SwitchContext_6, (MR_Integer) 0))));
    MainMatch_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SwitchContext_6, (MR_Integer) 1))));
    OtherMatches_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SwitchContext_6, (MR_Integer) 2))));
    ConsId_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainMatch_12, (MR_Integer) 0))));
    MaybeArgVars_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MainMatch_12, (MR_Integer) 1))));
    MainMatchStr_14 = hlds__hlds_out__hlds_out_util__cons_id_and_vars_or_arity_to_string_4_f_0(VarSet_10, (MR_Integer) 1, ConsId_49, MaybeArgVars_50);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&check_hlds__det_report_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (check_hlds__det_report__det_diagnose_switch_context_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (VarSet_10));
    }
    OtherMatchStrs_15 = mercury__list__map_2_f_0((MR_Word) (&check_hlds__det_report__check_hlds__det_report__type_ctor_info_switch_match_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_20, OtherMatches_13);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (MainMatchStr_14));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (OtherMatchStrs_15));
    }
    MatchsStr_16 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_22);
    VarStr_17 = parse_tree__parse_tree_out_term__mercury_var_to_name_only_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), VarSet_10, Var_11);
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (MatchsStr_16));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_31, 0) = ((MR_Box) (VarStr_17));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[47])));
    }
    {
      Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_27, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[84])));
      MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (Var_30));
    }
    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_27));
    }
    {
      InnerPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), InnerPieces_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__det_report_scalar_common_2[83])));
      MR_hl_field(MR_mktag(1), InnerPieces_18, 1) = ((MR_Box) (Var_25));
    }
    check_hlds__det_report__det_diagnose_switch_context_3_p_0(DetInfo_1, SwitchContexts_7, &OuterPieces_19);
    Var_38 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), (MR_Word) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[85])), InnerPieces_18);
    *HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), OuterPieces_19, Var_38);
  }
}

static MR_Word MR_CALL 
check_hlds__det_report__cons_id_list_to_pieces_3_f_0(
  MR_Word ConsId1_5,
  MR_Word ConsIds2Plus_6,
  MR_Word EndCommaPieces_7)
{
  {
    MR_Word Pieces_8;
    MR_Word ConsIdPiece1_9;

    {
      ConsIdPiece1_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsIdPiece1_9, 0) = ((MR_Box) ((MR_Unsigned) 12U));
      MR_hl_field(MR_mktag(3), ConsIdPiece1_9, 1) = ((MR_Box) (ConsId1_5));
    }
    if ((ConsIds2Plus_6 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Pieces_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_8, 0) = ((MR_Box) (ConsIdPiece1_9));
        MR_hl_field(MR_mktag(1), Pieces_8, 1) = ((MR_Box) (EndCommaPieces_7));
      }
    else
    {
      MR_Word ConsId2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsIds2Plus_6, (MR_Integer) 0))));
      MR_Word ConsIds3Plus_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConsIds2Plus_6, (MR_Integer) 1))));
      MR_Word Pieces1_14;
      MR_Word Pieces2Plus_15;

      if ((ConsIds3Plus_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          Pieces1_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces1_14, 0) = ((MR_Box) (ConsIdPiece1_9));
          MR_hl_field(MR_mktag(1), Pieces1_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[75])));
        }
      }
      else
      {
        {
          Pieces1_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces1_14, 0) = ((MR_Box) (ConsIdPiece1_9));
          MR_hl_field(MR_mktag(1), Pieces1_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__det_report_scalar_common_2[76])));
        }
      }
      Pieces2Plus_15 = check_hlds__det_report__cons_id_list_to_pieces_3_f_0(ConsId2_10, ConsIds3Plus_11, EndCommaPieces_7);
      Pieces_8 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Pieces1_14, Pieces2Plus_15);
    }
    return Pieces_8;
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
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word MainConsId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 0))));
      MR_Word OtherConsIds_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 1))));
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
check_hlds__det_report__append_prefix_and_maybe_verbose_4_p_0(
  MR_Word PrefixPieces_5,
  MR_Word MainPieces_6,
  MR_Word VerbosePieces_7,
  MR_Word * Component_8)
{
  if ((VerbosePieces_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_13;

    Var_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_5, MainPieces_6);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Component_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
    }
  }
  else
  {
    MR_Word Var_11;
    MR_Word Var_12;

    Var_11 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_5, VerbosePieces_7);
    Var_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), PrefixPieces_5, MainPieces_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *Component_8 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Var_12));
    }
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
  {
    MR_bool succeeded;
    MR_Word GoalExpr_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));
    MR_Word GoalInfo_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr_11)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Conjuncts0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
              MR_Word Conjuncts_19;
              MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))) & (MR_Integer) 1);

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
              *SwitchVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
              *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))) & (MR_Integer) 1);
              *Cases_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 3))));
              *SwitchContext_7 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_12);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 1))));
              MR_Word SubGoal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_11, (MR_Integer) 2))));
              MR_Word SubGoalExpr_16;
              MR_Word SubGoalInfo_17;

              succeeded = ((((MR_tag((MR_Word) Reason_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                SubGoalExpr_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_14, (MR_Integer) 0))));
                SubGoalInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_14, (MR_Integer) 1))));
                succeeded = ((((MR_tag((MR_Word) SubGoalExpr_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubGoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  *SwitchVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr_16, (MR_Integer) 1))));
                  *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubGoalExpr_16, (MR_Integer) 2))) & (MR_Integer) 1);
                  *Cases_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr_16, (MR_Integer) 3))));
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
      Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_6, (MR_Integer) 0))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Conjuncts_6, (MR_Integer) 1))));
      if ((Var_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word GoalExpr_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0))));
        MR_Word GoalInfo_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));

        switch (MR_tag((MR_Word) GoalExpr_26)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Conjuncts0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 2))));
                  MR_Word Conjuncts_34;
                  MR_Word Var_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 1))) & (MR_Integer) 1);
                  MR_Word next_value_of_Conjuncts_6;

                  succeeded = (Var_65 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    hlds__goal_util__flatten_conj_2_p_0(Conjuncts0_33, &Conjuncts_34);
                    // direct tailcall eliminated
                    ;
                    next_value_of_Conjuncts_6 = Conjuncts_34;
                    Conjuncts_6 = next_value_of_Conjuncts_6;
                    continue;
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  *SwitchVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 1))));
                  *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 2))) & (MR_Integer) 1);
                  *Cases_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 3))));
                  *SwitchContext_7 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_27);
                  succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word Reason_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 1))));
                  MR_Word SubGoal_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_26, (MR_Integer) 2))));
                  MR_Word SubGoalExpr_31;
                  MR_Word SubGoalInfo_32;

                  succeeded = ((((MR_tag((MR_Word) Reason_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_28, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    SubGoalExpr_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_29, (MR_Integer) 0))));
                    SubGoalInfo_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal_29, (MR_Integer) 1))));
                    succeeded = ((((MR_tag((MR_Word) SubGoalExpr_31)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubGoalExpr_31, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (succeeded)
                    {
                      *SwitchVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr_31, (MR_Integer) 1))));
                      *CanFail_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), SubGoalExpr_31, (MR_Integer) 2))) & (MR_Integer) 1);
                      *Cases_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubGoalExpr_31, (MR_Integer) 3))));
                      *SwitchContext_7 = hlds__hlds_goal__goal_info_get_context_1_f_0(SubGoalInfo_32);
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
check_hlds__det_report____Unify____cc_unify_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____cc_unify_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____cc_unify_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____cc_unify_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____detism_check_kind_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____detism_check_kind_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____detism_check_kind_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____detism_check_kind_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____failing_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____failing_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____failing_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____failing_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____failing_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____failing_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____failing_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____maybe_inform_incomplete_switches_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____maybe_inform_incomplete_switches_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____maybe_inform_incomplete_switches_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____maybe_inform_incomplete_switches_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____missing_cons_id_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____missing_cons_id_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____missing_cons_id_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____missing_cons_id_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____options_to_restore_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____options_to_restore_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____options_to_restore_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____options_to_restore_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____reported_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____reported_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____reported_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____reported_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____seen_call_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____seen_call_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____seen_call_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____seen_call_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____switch_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____switch_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____switch_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____switch_match_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____switch_match_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____switch_match_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____switch_match_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__det_report____Unify____why_report_incomplete_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__det_report____Unify____why_report_incomplete_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__det_report____Compare____why_report_incomplete_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__det_report____Compare____why_report_incomplete_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
