/*
** Automatically generated from `mark_tail_calls.m'
** by the Mercury compiler,
** version rotd-2019-01-05
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


// :- module hlds.mark_tail_calls.
// :- implementation.

/*
INIT mercury__hlds__mark_tail_calls__init
ENDINIT
*/

#include "hlds.mark_tail_calls.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
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
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0[1];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1[1];

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_at_tail_0_1[1];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0[2];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_call_is_self_or_mutual_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_call_is_self_or_mutual_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_call_is_self_or_mutual_rec_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_any_rec_calls_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_any_rec_calls_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_any_rec_calls_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_later_rec_call_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_rec_call_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_rec_call_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0[10];

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0[10];

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_mark_tail_rec_calls_info_0_0[10];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_rec_calls_info_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_rec_calls_info_0[1];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_record_tail_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_record_tail_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_record_tail_rec_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_mutual_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_mutual_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_mutual_rec_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_self_rec_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_self_rec_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_self_rec_0[2];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_1;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_2;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_3;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_nontail_rec_call_reason_0[4];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_call_reason_0[4];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_call_reason_0[4];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_nontail_rec_obviousness_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_obviousness_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_obviousness_0[2];

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_goal_feature_0;

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tail_rec_params_0_0[4];

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_tail_rec_params_0_0[4];

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_tail_rec_params_0_0[4];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tail_rec_params_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tail_rec_params_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tail_rec_params_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tail_rec_params_0[1];

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_warn_non_tail_rec_params_0_0[3];

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_warn_non_tail_rec_params_0_0[3];

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0;

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_warn_non_tail_rec_params_0_0[1];

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_warn_non_tail_rec_params_0[1];

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_warn_non_tail_rec_params_0[1];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_params_0[1];

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_0;

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_1;

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_was_proc_changed_0[2];

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_was_proc_changed_0[2];

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_was_proc_changed_0[2];

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____was_proc_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____later_rec_call_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(
  MR_Word AtTail0_8,
  MR_Word Case0_9,
  MR_Word * Case_10,
  MR_Word STATE_VARIABLE_SeenLaterRecCall_0_18,
  MR_Word * STATE_VARIABLE_SeenLaterRecCall_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_nonlast_disjunct_7_p_0(
  MR_Word AtTail0_8,
  MR_Word STATE_VARIABLE_Disjunct_0_13,
  MR_Word * STATE_VARIABLE_Disjunct_14,
  MR_Word STATE_VARIABLE_SeenLaterRecCall_0_15,
  MR_Word * STATE_VARIABLE_SeenLaterRecCall_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ModuleInfo_0_3,
  MR_Word * STATE_VARIABLE_ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7);

static void MR_CALL 
hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(
  MR_Word Params_12,
  MR_Word ModuleInfo_13,
  MR_Word SCC_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word PredInfo_17,
  MR_Word STATE_VARIABLE_ProcInfo_0_50,
  MR_Word * STATE_VARIABLE_ProcInfo_51,
  MR_Word * WasProcChanged_19,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_AtTail_0_3,
  MR_Word * STATE_VARIABLE_AtTail_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word AtTail0_9,
  MR_Word * AtTail_10,
  MR_Word STATE_VARIABLE_Info_0_149,
  MR_Word * STATE_VARIABLE_Info_150);

static void MR_CALL 
hlds__mark_tail_calls__not_at_tail_2_p_0(
  MR_Word Before_3,
  MR_Word * After_4);

static void MR_CALL 
hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(
  MR_Word AtTail_3,
  MR_Word * SeenLaterRecCall_4);

static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
  MR_Word ToVar_5,
  MR_Word FromVar_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
hlds__mark_tail_calls__find_output_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Types_7,
  MR_Word Modes_8,
  MR_Word Vars_9,
  MR_Word * Outputs_10);

static MR_Word MR_CALL 
hlds__mark_tail_calls__no_warnings_non_tail_rec_params_0_f_0(void);

static void MR_CALL 
hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(
  MR_Word Reason_5,
  MR_Word Context_6,
  MR_Word * ReasonPieces_7,
  MR_Word * VerboseMsgs_8);

static MR_bool MR_CALL 
hlds__mark_tail_calls__find_output_args_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____later_rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_obviousness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_obviousness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____was_proc_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[52][2];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[5][1];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[2][10];

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[1][4];




static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_1[52][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "via tail calls only."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because the *callee* cannot reach the caller"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but tail recursion optimization cannot be applied to it,"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is tail recursive,"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "if it goes only one way between two procedures."))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "it cannot optimize tail recursion"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "can optimize only *mutual* tail recursion;"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The MLDS backend"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "in the generated target language code."))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because that would leave dangling stack references"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "because it occurs after a choice point."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not tail recursive."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "tail-recursive or otherwise."))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[5])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains no recursive calls at all,"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_Unsigned) 19U)),
    ((MR_Box) ((MR_String) "require_tail_recursion"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning: the code defining this"))
  },
  /* row 43 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[21])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__mark_tail_calls_scalar_common_1[43]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "In mode number"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "self-recursive call"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[49]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "mutually recursive call to"))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_2[5][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 11))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 10))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_3[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0)),
    ((MR_Box) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0))
  },
};

static /* final */ const MR_Box hlds__mark_tail_calls_scalar_common_4[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_2[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_2[3]))),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (&hlds__mark_tail_calls_scalar_common_2[0]))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0 = {
  (MR_String) "at_tail",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0)
};

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_at_tail_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1 = {
  (MR_String) "not_at_tail",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_at_tail_0_1,
  NULL,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_at_tail_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_at_tail_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_at_tail_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____at_tail_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____at_tail_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "at_tail",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_at_tail_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_at_tail_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_at_tail_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_0 = {
  (MR_String) "call_is_self_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_1 = {
  (MR_String) "call_is_mutual_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_call_is_self_or_mutual_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_call_is_self_or_mutual_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_call_is_self_or_mutual_rec_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_call_is_self_or_mutual_rec_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_call_is_self_or_mutual_rec_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "call_is_self_or_mutual_rec",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_call_is_self_or_mutual_rec_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_call_is_self_or_mutual_rec_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_call_is_self_or_mutual_rec_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_0 = {
  (MR_String) "not_found_any_rec_calls",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_1 = {
  (MR_String) "found_any_rec_calls",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_any_rec_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_any_rec_calls_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_found_any_rec_calls_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_any_rec_calls_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "found_any_rec_calls",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_found_any_rec_calls_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_found_any_rec_calls_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_found_any_rec_calls_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_0 = {
  (MR_String) "have_seen_later_rec_call",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_1 = {
  (MR_String) "have_not_seen_later_rec_call",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_later_rec_call_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_rec_call_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_later_rec_call_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_rec_call_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____later_rec_call_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____later_rec_call_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "later_rec_call",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_later_rec_call_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_later_rec_call_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_later_rec_call_0
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__mark_tail_calls__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0[10] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tail_rec_params_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_self_tail_rec_call_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_has_mutual_tail_rec_call_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0)
};

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0[10] = {
  (MR_String) "mtc_module",
  (MR_String) "mtc_pred_info",
  (MR_String) "mtc_cur_proc",
  (MR_String) "mtc_cur_scc",
  (MR_String) "mtc_vartypes",
  (MR_String) "mtc_params",
  (MR_String) "mtc_self_tail_rec_calls",
  (MR_String) "mtc_mutual_tail_rec_calls",
  (MR_String) "mtc_any_rec_calls",
  (MR_String) "mtc_error_specs"
};

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_mark_tail_rec_calls_info_0_0[10] = {
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
    (MR_Integer) 0
  },
  {
    (MR_Integer) 5,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 6,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0 = {
  (MR_String) "mark_tail_rec_calls_info",
  INT16_C(10),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_mark_tail_rec_calls_info_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_mark_tail_rec_calls_info_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_mark_tail_rec_calls_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_mark_tail_rec_calls_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_rec_calls_info_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_mark_tail_rec_calls_info_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_rec_calls_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "mark_tail_rec_calls_info",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_mark_tail_rec_calls_info_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_mark_tail_rec_calls_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_mark_tail_rec_calls_info_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_0 = {
  (MR_String) "do_not_record_tail_recursion",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_1 = {
  (MR_String) "record_tail_recursion",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_record_tail_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_record_tail_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_record_tail_rec_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_record_tail_rec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_record_tail_rec_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_record_tail_rec",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_record_tail_rec_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_record_tail_rec_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_record_tail_rec_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_0 = {
  (MR_String) "do_not_warn_non_tail_mutual_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_1 = {
  (MR_String) "warn_non_tail_mutual_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_mutual_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_mutual_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_mutual_rec_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_mutual_rec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_mutual_rec_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_warn_non_tail_mutual_rec",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_mutual_rec_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_mutual_rec_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_mutual_rec_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_0 = {
  (MR_String) "do_not_warn_non_tail_self_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_1 = {
  (MR_String) "warn_non_tail_self_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_self_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_self_rec_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_maybe_warn_non_tail_self_rec_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_self_rec_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_self_rec_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "maybe_warn_non_tail_self_rec",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_maybe_warn_non_tail_self_rec_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_maybe_warn_non_tail_self_rec_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_maybe_warn_non_tail_self_rec_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_0 = {
  (MR_String) "ntrcr_program",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_1 = {
  (MR_String) "ntrcr_mlds_in_scc_not_in_tscc",
  INT32_C(1)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_2 = {
  (MR_String) "ntrcr_mlds_in_tscc_stack_ref",
  INT32_C(2)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_3 = {
  (MR_String) "ntrcr_mlds_model_non_in_cont_func",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_nontail_rec_call_reason_0[4] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_2,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_3
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_call_reason_0[4] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_2,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_3,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_call_reason_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_call_reason_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_nontail_rec_call_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "nontail_rec_call_reason",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_call_reason_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_nontail_rec_call_reason_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_call_reason_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_0 = {
  (MR_String) "non_obvious_nontail_rec",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_1 = {
  (MR_String) "obvious_nontail_rec",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_nontail_rec_obviousness_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_obviousness_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_nontail_rec_obviousness_0_1
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_obviousness_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_nontail_rec_obviousness_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____nontail_rec_obviousness_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____nontail_rec_obviousness_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "nontail_rec_obviousness",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_nontail_rec_obviousness_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_nontail_rec_obviousness_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_nontail_rec_obviousness_0
};

static const MR_FA_TypeInfo_Struct1 hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_goal_feature_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0)
  }
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tail_rec_params_0_0[4] = {
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_goal_feature_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__maybe__ti_maybe_1hlds__hlds_goal__type_ctor_info_goal_feature_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_record_tail_rec_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0)
};

static const MR_ConstString hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_tail_rec_params_0_0[4] = {
  (MR_String) "self_rec_goal_feature",
  (MR_String) "mutual_rec_goal_feature",
  (MR_String) "should_record_tail_rec",
  (MR_String) "warn_params"
};

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_tail_rec_params_0_0[4] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0 = {
  (MR_String) "tail_rec_params",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_tail_rec_params_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_names_tail_rec_params_0_0,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_tail_rec_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tail_rec_params_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tail_rec_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_tail_rec_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tail_rec_params_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_tail_rec_params_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tail_rec_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tail_rec_params_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____tail_rec_params_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____tail_rec_params_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "tail_rec_params",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_tail_rec_params_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_tail_rec_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_tail_rec_params_0
};

static const MR_PseudoTypeInfo hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_warn_non_tail_rec_params_0_0[3] = {
  (MR_PseudoTypeInfo) (&libs__compiler_util__libs__compiler_util__type_ctor_info_warning_or_error_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_self_rec_0),
  (MR_PseudoTypeInfo) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_mutual_rec_0)
};

static const MR_DuArgLocn hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_warn_non_tail_rec_params_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
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

static const MR_DuFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0 = {
  (MR_String) "warn_non_tail_rec_params",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_types_warn_non_tail_rec_params_0_0,
  NULL,
  hlds__mark_tail_calls__hlds__mark_tail_calls__field_locns_warn_non_tail_rec_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_warn_non_tail_rec_params_0_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0
};

static const MR_DuPtagLayout hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_warn_non_tail_rec_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    hlds__mark_tail_calls__hlds__mark_tail_calls__du_stag_ordered_warn_non_tail_rec_params_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_warn_non_tail_rec_params_0[1] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__du_functor_desc_warn_non_tail_rec_params_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_params_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "warn_non_tail_rec_params",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_name_ordered_warn_non_tail_rec_params_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__du_ptag_ordered_warn_non_tail_rec_params_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_warn_non_tail_rec_params_0
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_0 = {
  (MR_String) "proc_was_not_changed",
  INT32_C(0)
};

static const MR_EnumFunctorDesc hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_1 = {
  (MR_String) "proc_may_have_been_changed",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_was_proc_changed_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_0,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_1
};

static const MR_EnumFunctorDescPtr hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_was_proc_changed_0[2] = {
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_1,
  &hlds__mark_tail_calls__hlds__mark_tail_calls__enum_functor_desc_was_proc_changed_0_0
};

static const MR_Integer hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_was_proc_changed_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_was_proc_changed_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__mark_tail_calls____Unify____was_proc_changed_0_0_10001)),
  ((MR_Box) (hlds__mark_tail_calls____Compare____was_proc_changed_0_0_10001)),
  (MR_String) "hlds.mark_tail_calls",
  (MR_String) "was_proc_changed",
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_name_ordered_was_proc_changed_0 },
  {     hlds__mark_tail_calls__hlds__mark_tail_calls__enum_value_ordered_was_proc_changed_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  hlds__mark_tail_calls__hlds__mark_tail_calls__functor_number_map_was_proc_changed_0
};

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0(
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
hlds__mark_tail_calls____Unify____was_proc_changed_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_obviousness_0_0(
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

MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_obviousness_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0(
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

MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0(
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

MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0(
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

MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0(
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
hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_33 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_34 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_33 == CastY_34);
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
      MR_Word ArgX7_22 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY7_23 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX8_25 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY8_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word SubResult1_6;

      hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        hlds__hlds_pred____Compare____pred_info_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[0]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
            succeeded = (SubResult4_15 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_15;
            else
            {
              MR_Word SubResult5_18;

              mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
              succeeded = (SubResult5_18 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult5_18;
              else
              {
                MR_Word SubResult6_21;

                hlds__mark_tail_calls____Compare____tail_rec_params_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;
                  MR_Integer Var_45 = (MR_Integer) (ArgX7_22);
                  MR_Integer Var_46 = (MR_Integer) (ArgY7_23);

                  succeeded = (Var_45 < Var_46);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (Var_45 > Var_46);
                    if (succeeded)
                    {
                      SubResult7_24 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = MR_TRUE;
                      succeeded = !(succeeded);
                      if (succeeded)
                      {
                        SubResult7_24 = (MR_Integer) 0;
                        succeeded = MR_TRUE;
                      }
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                  {
                    MR_Word SubResult8_27;
                    MR_Integer Var_47 = (MR_Integer) (ArgX8_25);
                    MR_Integer Var_48 = (MR_Integer) (ArgY8_26);

                    succeeded = (Var_47 < Var_48);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (Var_47 > Var_48);
                      if (succeeded)
                      {
                        SubResult8_27 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = MR_TRUE;
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          SubResult8_27 = (MR_Integer) 0;
                          succeeded = MR_TRUE;
                        }
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult8_27;
                    else
                    {
                      MR_Word SubResult9_30;
                      MR_Integer Var_49 = (MR_Integer) (ArgX9_28);
                      MR_Integer Var_50 = (MR_Integer) (ArgY9_29);

                      succeeded = (Var_49 < Var_50);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (Var_49 > Var_50);
                        if (succeeded)
                        {
                          SubResult9_30 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = MR_TRUE;
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            SubResult9_30 = (MR_Integer) 0;
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult9_30;
                      else
                        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX10_31)), ((MR_Box) (ArgY10_32)));
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0(
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[4]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_21 > Var_22);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(
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
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word SubResult1_6;
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
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
        MR_Integer Var_19 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_20 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_19 > Var_20);
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
          MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_21 > Var_22);
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

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(
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
    {
      MR_Word TypeInfo_28_28;
      MR_Word TypeCtorInfo_29_29;
      MR_Word TypeInfo_30_30;
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
      MR_Word ArgX7_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY7_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX8_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY8_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))) & (MR_Integer) 1);
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

      succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_info_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            TypeInfo_28_28 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeCtorInfo_29_29 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_29_29, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = hlds__mark_tail_calls____Unify____tail_rec_params_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  succeeded = (ArgX7_15 == ArgY7_16);
                  if (succeeded)
                  {
                    succeeded = (ArgX8_17 == ArgY8_18);
                    if (succeeded)
                    {
                      succeeded = (ArgX9_19 == ArgY9_20);
                      if (succeeded)
                      {
                        TypeInfo_30_30 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[3]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX10_21)), ((MR_Box) (ArgY10_22)));
                      }
                    }
                  }
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

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0(
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
      MR_Word TypeInfo_14_14;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[4]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_14_14 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[4]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(
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
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0(
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
hlds__mark_tail_calls____Unify____later_rec_call_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0(
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

MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0(
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
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Var_18 = (MR_Integer) (Var_17);
        MR_Integer Var_19 = (MR_Integer) (ArgY1_11);

        succeeded = (Var_18 < Var_19);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_18 > Var_19);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (ArgX1_5 == ArgY1_6);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(
  MR_Word AtTail0_8,
  MR_Word Case0_9,
  MR_Word * Case_10,
  MR_Word STATE_VARIABLE_SeenLaterRecCall_0_18,
  MR_Word * STATE_VARIABLE_SeenLaterRecCall_19,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_9, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word AtTail_17;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Goal0_15, &Goal_16, AtTail0_8, &AtTail_17, STATE_VARIABLE_Info_0_20, STATE_VARIABLE_Info_21);
    if (((MR_tag((MR_Word) AtTail_17)) == (MR_Integer) 0))
      *STATE_VARIABLE_SeenLaterRecCall_19 = STATE_VARIABLE_SeenLaterRecCall_0_18;
    else
    {
      MR_Word AtTailSeenLaterRecCall_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), AtTail_17, (MR_Integer) 0))) & (MR_Integer) 1);

      switch (AtTailSeenLaterRecCall_29) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_SeenLaterRecCall_19 = STATE_VARIABLE_SeenLaterRecCall_0_18;
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_SeenLaterRecCall_19 = (MR_Integer) 0;
          break;
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Case_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Goal_16));
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_nonlast_disjunct_7_p_0(
  MR_Word AtTail0_8,
  MR_Word STATE_VARIABLE_Disjunct_0_13,
  MR_Word * STATE_VARIABLE_Disjunct_14,
  MR_Word STATE_VARIABLE_SeenLaterRecCall_0_15,
  MR_Word * STATE_VARIABLE_SeenLaterRecCall_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  {
    MR_Word AtTail_12;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(STATE_VARIABLE_Disjunct_0_13, STATE_VARIABLE_Disjunct_14, AtTail0_8, &AtTail_12, STATE_VARIABLE_Info_0_17, STATE_VARIABLE_Info_18);
    if (((MR_tag((MR_Word) AtTail_12)) == (MR_Integer) 0))
      *STATE_VARIABLE_SeenLaterRecCall_16 = STATE_VARIABLE_SeenLaterRecCall_0_15;
    else
    {
      MR_Word AtTailSeenLaterRecCall_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), AtTail_12, (MR_Integer) 0))) & (MR_Integer) 1);

      switch (AtTailSeenLaterRecCall_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_SeenLaterRecCall_16 = STATE_VARIABLE_SeenLaterRecCall_0_15;
          break;
        case (MR_Integer) 0:
          *STATE_VARIABLE_SeenLaterRecCall_16 = (MR_Integer) 0;
          break;
      }
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_proc_for_llds_code_gen_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word PredInfo_13,
  MR_Word SCCMap_14,
  MR_Word STATE_VARIABLE_ProcInfo_0_22,
  MR_Word * STATE_VARIABLE_ProcInfo_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_Word Globals_17;
    MR_Word Params_18;
    MR_Word ProcParams_19;
    MR_Word SCC_20;
    MR_Word Var_26;
    MR_Word WarnNonTailRecParams_33;
    MR_Word ExecTraceTailRec_34;
    MR_Word WarnParams_46;
    MR_Word ProcWarnParams_47;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Box conv0_SCC_20;
    MR_Word _WasProcChanged_21;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_17);
    hlds__mark_tail_calls__get_default_warn_parms_2_p_0(Globals_17, &WarnNonTailRecParams_33);
    libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 147, &ExecTraceTailRec_34);
    switch (ExecTraceTailRec_34) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Params_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Params_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Params_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Params_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), Params_18, 3) = ((MR_Box) (WarnNonTailRecParams_33));
        }
        break;
      case (MR_Integer) 1:
        {
          Params_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Params_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_2[4])));
          MR_hl_field(MR_mktag(0), Params_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Params_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Params_18, 3) = ((MR_Box) (WarnNonTailRecParams_33));
        }
        break;
    }
    WarnParams_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_18, (MR_Integer) 3))));
    hlds__mark_tail_calls__maybe_override_warn_params_for_proc_3_p_0(STATE_VARIABLE_ProcInfo_0_22, WarnParams_46, &ProcWarnParams_47);
    Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_18, (MR_Integer) 0))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_18, (MR_Integer) 1))));
    Var_53 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_18, (MR_Integer) 2))) & (MR_Integer) 1);
    {
      ProcParams_19 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ProcParams_19, 0) = ((MR_Box) (Var_51));
      MR_hl_field(MR_mktag(0), ProcParams_19, 1) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(0), ProcParams_19, 2) = (MR_Box) ((MR_Unsigned) (Var_53));
      MR_hl_field(MR_mktag(0), ProcParams_19, 3) = ((MR_Box) (ProcWarnParams_47));
    }
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_26, 0) = ((MR_Box) (PredId_11));
      MR_hl_field(MR_mktag(0), Var_26, 1) = ((MR_Box) (ProcId_12));
    }
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[0]), SCCMap_14, ((MR_Box) (Var_26)), &conv0_SCC_20);
    SCC_20 = ((MR_Word) (conv0_SCC_20));
    hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(ProcParams_19, ModuleInfo_10, SCC_20, PredId_11, ProcId_12, PredInfo_13, STATE_VARIABLE_ProcInfo_0_22, STATE_VARIABLE_ProcInfo_23, &_WasProcChanged_21, STATE_VARIABLE_Specs_0_24, STATE_VARIABLE_Specs_25);
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_pred_for_llds_code_gen_8_p_0(
  MR_Word SCCMap_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_17,
  MR_Word * STATE_VARIABLE_ModuleInfo_18,
  MR_Word STATE_VARIABLE_PredInfo_0_19,
  MR_Word * STATE_VARIABLE_PredInfo_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  {
    MR_Word Globals_14;
    MR_Word Params_15;
    MR_Word ProcIds_16;
    MR_Word WarnNonTailRecParams_27;
    MR_Word ExecTraceTailRec_28;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_17, &Globals_14);
    hlds__mark_tail_calls__get_default_warn_parms_2_p_0(Globals_14, &WarnNonTailRecParams_27);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 147, &ExecTraceTailRec_28);
    switch (ExecTraceTailRec_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          Params_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Params_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Params_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Params_15, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), Params_15, 3) = ((MR_Box) (WarnNonTailRecParams_27));
        }
        break;
      case (MR_Integer) 1:
        {
          Params_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Params_15, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_2[4])));
          MR_hl_field(MR_mktag(0), Params_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Params_15, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Params_15, 3) = ((MR_Box) (WarnNonTailRecParams_27));
        }
        break;
    }
    ProcIds_16 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(STATE_VARIABLE_PredInfo_0_19);
    hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_9_p_0(Params_15, STATE_VARIABLE_ModuleInfo_0_17, SCCMap_9, PredId_10, ProcIds_16, STATE_VARIABLE_PredInfo_0_19, STATE_VARIABLE_PredInfo_20, STATE_VARIABLE_Specs_0_21, STATE_VARIABLE_Specs_22);
    *STATE_VARIABLE_ModuleInfo_18 = STATE_VARIABLE_ModuleInfo_0_17;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_procs_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_PredInfo_0_6,
  MR_Word * STATE_VARIABLE_PredInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
      *STATE_VARIABLE_PredInfo_7 = STATE_VARIABLE_PredInfo_0_6;
    }
    else
    {
      MR_Integer ProcId_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word ProcIds_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word ProcInfo0_28;
      MR_Word ProcParams_29;
      MR_Word SCC_30;
      MR_Word ProcInfo_31;
      MR_Word WasProcChanged_32;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_Specs_38_38;
      MR_Word STATE_VARIABLE_PredInfo_39_39;
      MR_Word WarnParams_47;
      MR_Word ProcWarnParams_48;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Box conv0_SCC_30;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_PredInfo_0_6;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      hlds__hlds_pred__pred_info_proc_info_3_p_0(STATE_VARIABLE_PredInfo_0_6, ProcId_24, &ProcInfo0_28);
      WarnParams_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      hlds__mark_tail_calls__maybe_override_warn_params_for_proc_3_p_0(ProcInfo0_28, WarnParams_47, &ProcWarnParams_48);
      Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      Var_54 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      {
        ProcParams_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcParams_29, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), ProcParams_29, 1) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), ProcParams_29, 2) = (MR_Box) ((MR_Unsigned) (Var_54));
        MR_hl_field(MR_mktag(0), ProcParams_29, 3) = ((MR_Box) (ProcWarnParams_48));
      }
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (HeadVar__4_4));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (ProcId_24));
      }
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[0]), HeadVar__3_3, ((MR_Box) (Var_37)), &conv0_SCC_30);
      SCC_30 = ((MR_Word) (conv0_SCC_30));
      hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(ProcParams_29, HeadVar__2_2, SCC_30, HeadVar__4_4, ProcId_24, STATE_VARIABLE_PredInfo_0_6, ProcInfo0_28, &ProcInfo_31, &WasProcChanged_32, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_38_38);
      switch (WasProcChanged_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_24, ProcInfo_31, STATE_VARIABLE_PredInfo_0_6, &STATE_VARIABLE_PredInfo_39_39);
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_PredInfo_39_39 = STATE_VARIABLE_PredInfo_0_6;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__5_5 = ProcIds_25;
      next_value_of_STATE_VARIABLE_PredInfo_0_6 = STATE_VARIABLE_PredInfo_39_39;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_38_38;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_PredInfo_0_6 = next_value_of_STATE_VARIABLE_PredInfo_0_6;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      continue;
    }
    break;
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_self_and_mutual_tail_rec_calls_in_module_for_mlds_code_gen_5_p_0(
  MR_Word DepInfo_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_15,
  MR_Word * STATE_VARIABLE_ModuleInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_17,
  MR_Word * STATE_VARIABLE_Specs_18)
{
  {
    MR_Word MaybeMutualRec_10 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_2[3]));
    MR_Word Globals_11;
    MR_Word WarnNonTailRecParams_12;
    MR_Word Params_13;
    MR_Word BottomUpSCCsEntryPoints_14;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_15, &Globals_11);
    hlds__mark_tail_calls__get_default_warn_parms_2_p_0(Globals_11, &WarnNonTailRecParams_12);
    {
      Params_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_13, 0) = ((MR_Box) (MaybeMutualRec_10));
      MR_hl_field(MR_mktag(0), Params_13, 1) = ((MR_Box) (MaybeMutualRec_10));
      MR_hl_field(MR_mktag(0), Params_13, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Params_13, 3) = ((MR_Box) (WarnNonTailRecParams_12));
    }
    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(STATE_VARIABLE_ModuleInfo_0_15, DepInfo_6, &BottomUpSCCsEntryPoints_14);
    hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_6_p_0(Params_13, BottomUpSCCsEntryPoints_14, STATE_VARIABLE_ModuleInfo_0_15, STATE_VARIABLE_ModuleInfo_16, STATE_VARIABLE_Specs_0_17, STATE_VARIABLE_Specs_18);
  }
}

void MR_CALL 
hlds__mark_tail_calls__get_default_warn_parms_2_p_0(
  MR_Word Globals_3,
  MR_Word * WarnNonTailRecParams_4)
{
  {
    MR_Word WarnNonTailSelfRecBool_5;
    MR_Word WarnNonTailSelfRecOpt_6;
    MR_Word WarnNonTailMutualRecBool_7;
    MR_Word WarnNonTailMutualRecOpt_8;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 33, &WarnNonTailSelfRecBool_5);
    switch (WarnNonTailSelfRecBool_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        WarnNonTailSelfRecOpt_6 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        WarnNonTailSelfRecOpt_6 = (MR_Integer) 1;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 34, &WarnNonTailMutualRecBool_7);
    switch (WarnNonTailMutualRecBool_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        WarnNonTailMutualRecOpt_8 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        WarnNonTailMutualRecOpt_8 = (MR_Integer) 1;
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *WarnNonTailRecParams_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 2)) | (((((MR_Unsigned) (WarnNonTailSelfRecOpt_6) << 1)) | (MR_Unsigned) (WarnNonTailMutualRecOpt_8)))));
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls__mark_self_and_mutual_tail_rec_calls_in_module_3_p_0(
  MR_Word DepInfo_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12)
{
  {
    MR_Word BottomUpSCCsEntryPoints_9;
    MR_Word _Specs_10;

    hlds__hlds_dependency_graph__get_bottom_up_sccs_with_entry_points_3_p_0(STATE_VARIABLE_ModuleInfo_0_11, DepInfo_4, &BottomUpSCCsEntryPoints_9);
    hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_6_p_0((MR_Word) (&hlds__mark_tail_calls_scalar_common_4[0]), BottomUpSCCsEntryPoints_9, STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12, (MR_Word) ((MR_Unsigned) 0U), &_Specs_10);
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_sccs_6_p_0(
  MR_Word HeadVar__1_1,
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
      MR_Word SCCEntry_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word SCCEntries_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SCC_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SCCEntry_15, (MR_Integer) 0))));
      MR_Word Var_26;
      MR_Word STATE_VARIABLE_ModuleInfo_27_27;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      Var_26 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), SCC_19);
      hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_7_p_0(HeadVar__1_1, SCC_19, Var_26, STATE_VARIABLE_ModuleInfo_0_3, &STATE_VARIABLE_ModuleInfo_27_27, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_28_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = SCCEntries_16;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_3 = STATE_VARIABLE_ModuleInfo_27_27;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_28_28;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_ModuleInfo_0_3 = next_value_of_STATE_VARIABLE_ModuleInfo_0_3;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_scc_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ModuleInfo_0_4,
  MR_Word * STATE_VARIABLE_ModuleInfo_5,
  MR_Word STATE_VARIABLE_Specs_0_6,
  MR_Word * STATE_VARIABLE_Specs_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_7 = STATE_VARIABLE_Specs_0_6;
      *STATE_VARIABLE_ModuleInfo_5 = STATE_VARIABLE_ModuleInfo_0_4;
    }
    else
    {
      MR_Word PredProcId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word PredProcIds_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word PredId_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_18, (MR_Integer) 0))));
      MR_Integer ProcId_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_18, (MR_Integer) 1))));
      MR_Word PredTable0_24;
      MR_Word PredInfo0_25;
      MR_Word ProcTable0_26;
      MR_Word ProcInfo0_27;
      MR_Word ProcParams_28;
      MR_Word ProcInfo_29;
      MR_Word WasProcChanged_30;
      MR_Word ProcSpecs_31;
      MR_Word STATE_VARIABLE_Specs_40_40;
      MR_Word STATE_VARIABLE_ModuleInfo_41_41;
      MR_Word WarnParams_52;
      MR_Word ProcWarnParams_53;
      MR_Box conv0_PredInfo0_25;
      MR_Box conv1_ProcInfo0_27;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_6;

      hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_ModuleInfo_0_4, &PredTable0_24);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable0_24, ((MR_Box) (PredId_22)), &conv0_PredInfo0_25);
      PredInfo0_25 = ((MR_Word) (conv0_PredInfo0_25));
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo0_25, &ProcTable0_26);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable0_26, ((MR_Box) (ProcId_23)), &conv1_ProcInfo0_27);
      ProcInfo0_27 = ((MR_Word) (conv1_ProcInfo0_27));
      WarnParams_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      hlds__mark_tail_calls__maybe_override_warn_params_for_proc_3_p_0(ProcInfo0_27, WarnParams_52, &ProcWarnParams_53);
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      Var_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      {
        ProcParams_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ProcParams_28, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), ProcParams_28, 1) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), ProcParams_28, 2) = (MR_Box) ((MR_Unsigned) (Var_59));
        MR_hl_field(MR_mktag(0), ProcParams_28, 3) = ((MR_Box) (ProcWarnParams_53));
      }
      hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(ProcParams_28, STATE_VARIABLE_ModuleInfo_0_4, HeadVar__2_2, PredId_22, ProcId_23, PredInfo0_25, ProcInfo0_27, &ProcInfo_29, &WasProcChanged_30, (MR_Word) ((MR_Unsigned) 0U), &ProcSpecs_31);
      STATE_VARIABLE_Specs_40_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), ProcSpecs_31, STATE_VARIABLE_Specs_0_6);
      switch (WasProcChanged_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word ProcTable_32;
            MR_Word PredInfo_33;
            MR_Word PredTable_34;

            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_23)), ((MR_Box) (ProcInfo_29)), ProcTable0_26, &ProcTable_32);
            hlds__hlds_pred__pred_info_set_proc_table_3_p_0(ProcTable_32, PredInfo0_25, &PredInfo_33);
            mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), ((MR_Box) (PredId_22)), ((MR_Box) (PredInfo_33)), PredTable0_24, &PredTable_34);
            hlds__hlds_module__module_info_set_preds_3_p_0(PredTable_34, STATE_VARIABLE_ModuleInfo_0_4, &STATE_VARIABLE_ModuleInfo_41_41);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_ModuleInfo_41_41 = STATE_VARIABLE_ModuleInfo_0_4;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = PredProcIds_19;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_4 = STATE_VARIABLE_ModuleInfo_41_41;
      next_value_of_STATE_VARIABLE_Specs_0_6 = STATE_VARIABLE_Specs_40_40;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_ModuleInfo_0_4 = next_value_of_STATE_VARIABLE_ModuleInfo_0_4;
      STATE_VARIABLE_Specs_0_6 = next_value_of_STATE_VARIABLE_Specs_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__do_mark_tail_rec_calls_in_proc_11_p_0(
  MR_Word Params_12,
  MR_Word ModuleInfo_13,
  MR_Word SCC_14,
  MR_Word PredId_15,
  MR_Integer ProcId_16,
  MR_Word PredInfo_17,
  MR_Word STATE_VARIABLE_ProcInfo_0_50,
  MR_Word * STATE_VARIABLE_ProcInfo_51,
  MR_Word * WasProcChanged_19,
  MR_Word STATE_VARIABLE_Specs_0_52,
  MR_Word * STATE_VARIABLE_Specs_53)
{
  {
    MR_bool succeeded;
    MR_Word Detism_21;
    MR_Word SolnCount_23;
    MR_Word _CanFail_22;

    hlds__hlds_pred__proc_info_interface_determinism_2_p_0(STATE_VARIABLE_ProcInfo_0_50, &Detism_21);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_21, &_CanFail_22, &SolnCount_23);
    switch (SolnCount_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word MaybeSelfFeature_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 0))));
          MR_Word MaybeMutualFeature_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 1))));
          MR_Word MaybeRecordTailCalls_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 2))) & (MR_Integer) 1);
          MR_Word WarnNonTailRecParams_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Params_12, (MR_Integer) 3))));
          MR_Word Var_54;
          MR_Word Var_55;

          succeeded = (MaybeSelfFeature_24 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            succeeded = (MaybeMutualFeature_25 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (MaybeRecordTailCalls_26 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_54 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), WarnNonTailRecParams_27, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
                Var_55 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), WarnNonTailRecParams_27, (MR_Integer) 0))) & (MR_Integer) 1);
                succeeded = (Var_54 == (MR_Integer) 0);
                if (succeeded)
                  succeeded = (Var_55 == (MR_Integer) 0);
              }
            }
          }
          if (succeeded)
          {
            *WasProcChanged_19 = (MR_Integer) 0;
            *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_0_52;
            *STATE_VARIABLE_ProcInfo_51 = STATE_VARIABLE_ProcInfo_0_50;
          }
          else
          {
            MR_Word Types_29;
            MR_Word Goal0_30;
            MR_Word Modes_31;
            MR_Word HeadVars_32;
            MR_Word VarTypes_33;
            MR_Word Outputs_34;
            MR_Word Info0_35;
            MR_Word Goal_36;
            MR_Word Info_38;
            MR_Word HasSelfTailRecCall_45;
            MR_Word HasMutualTailRecCall_46;
            MR_Word FoundAnyRecCalls_47;
            MR_Word GoalSpecs_48;
            MR_Word Var_56;
            MR_Word Var_61;
            MR_Word STATE_VARIABLE_ProcInfo_62_62;
            MR_Word STATE_VARIABLE_Specs_63_63;
            MR_Word OutputsPrime_72;
            MR_Word Var_37;

            hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_17, &Types_29);
            hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_0_50, &Goal0_30);
            hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_ProcInfo_0_50, &Modes_31);
            hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_ProcInfo_0_50, &HeadVars_32);
            hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_0_50, &VarTypes_33);
            succeeded = hlds__mark_tail_calls__find_output_args_2_5_p_0(ModuleInfo_13, Types_29, Modes_31, HeadVars_32, &OutputsPrime_72);
            if (succeeded)
              Outputs_34 = OutputsPrime_72;
            else
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.mark_tail_calls.find_output_args\'/5", (MR_String) "list length mismatch");
                return;
              }
            {
              Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) (PredId_15));
              MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (ProcId_16));
            }
            {
              Info0_35 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Info0_35, 0) = ((MR_Box) (ModuleInfo_13));
              MR_hl_field(MR_mktag(0), Info0_35, 1) = ((MR_Box) (PredInfo_17));
              MR_hl_field(MR_mktag(0), Info0_35, 2) = ((MR_Box) (Var_56));
              MR_hl_field(MR_mktag(0), Info0_35, 3) = ((MR_Box) (SCC_14));
              MR_hl_field(MR_mktag(0), Info0_35, 4) = ((MR_Box) (VarTypes_33));
              MR_hl_field(MR_mktag(0), Info0_35, 5) = ((MR_Box) (Params_12));
              MR_hl_field(MR_mktag(0), Info0_35, 6) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 0)))));
              MR_hl_field(MR_mktag(0), Info0_35, 7) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_61 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (Outputs_34));
            }
            hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Goal0_30, &Goal_36, Var_61, &Var_37, Info0_35, &Info_38);
            HasSelfTailRecCall_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_38, (MR_Integer) 6))) >> 2)) & (MR_Integer) 1);
            HasMutualTailRecCall_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_38, (MR_Integer) 6))) >> 1)) & (MR_Integer) 1);
            FoundAnyRecCalls_47 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_38, (MR_Integer) 6))) & (MR_Integer) 1);
            GoalSpecs_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_38, (MR_Integer) 7))));
            hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_36, STATE_VARIABLE_ProcInfo_0_50, &STATE_VARIABLE_ProcInfo_62_62);
            hlds__mark_tail_calls__maybe_report_no_tail_or_nontail_recursive_calls_5_p_0(PredInfo_17, STATE_VARIABLE_ProcInfo_62_62, FoundAnyRecCalls_47, STATE_VARIABLE_Specs_0_52, &STATE_VARIABLE_Specs_63_63);
            switch (MaybeRecordTailCalls_26) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_ProcInfo_51 = STATE_VARIABLE_ProcInfo_62_62;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word HasTailRecCall_49;

                  {
                    HasTailRecCall_49 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), HasTailRecCall_49, 0) = (MR_Box) (((((MR_Unsigned) (HasSelfTailRecCall_45) << 1)) | (MR_Unsigned) (HasMutualTailRecCall_46)));
                  }
                  hlds__hlds_pred__proc_info_set_has_tail_rec_call_3_p_0(HasTailRecCall_49, STATE_VARIABLE_ProcInfo_62_62, STATE_VARIABLE_ProcInfo_51);
                }
                break;
            }
            *STATE_VARIABLE_Specs_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), GoalSpecs_48, STATE_VARIABLE_Specs_63_63);
            *WasProcChanged_19 = (MR_Integer) 1;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          *WasProcChanged_19 = (MR_Integer) 0;
          *STATE_VARIABLE_ProcInfo_51 = STATE_VARIABLE_ProcInfo_0_50;
          *STATE_VARIABLE_Specs_53 = STATE_VARIABLE_Specs_0_52;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_AtTail_0_3,
  MR_Word * STATE_VARIABLE_AtTail_4,
  MR_Word STATE_VARIABLE_Info_0_5,
  MR_Word * STATE_VARIABLE_Info_6)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_6 = STATE_VARIABLE_Info_0_5;
    *STATE_VARIABLE_AtTail_4 = STATE_VARIABLE_AtTail_0_3;
  }
  else
  {
    MR_Word RevGoal0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word RevGoals0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word RevGoal_15;
    MR_Word RevGoals_16;
    MR_Word STATE_VARIABLE_AtTail_23_23;
    MR_Word STATE_VARIABLE_Info_24_24;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(RevGoal0_13, &RevGoal_15, STATE_VARIABLE_AtTail_0_3, &STATE_VARIABLE_AtTail_23_23, STATE_VARIABLE_Info_0_5, &STATE_VARIABLE_Info_24_24);
    hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(RevGoals0_14, &RevGoals_16, STATE_VARIABLE_AtTail_23_23, STATE_VARIABLE_AtTail_4, STATE_VARIABLE_Info_24_24, STATE_VARIABLE_Info_6);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RevGoal_15));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RevGoals_16));
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_Case_10;
    MR_Word conv7_STATE_VARIABLE_SeenLaterRecCall_19;
    MR_Word conv6_STATE_VARIABLE_Info_21;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_case_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv8_Case_10, ((MR_Word) (wrapper_arg_3)), &conv7_STATE_VARIABLE_SeenLaterRecCall_19, ((MR_Word) (wrapper_arg_5)), &conv6_STATE_VARIABLE_Info_21);
    *wrapper_arg_2 = ((MR_Box) (conv8_Case_10));
    *wrapper_arg_4 = ((MR_Box) (conv7_STATE_VARIABLE_SeenLaterRecCall_19));
    *wrapper_arg_6 = ((MR_Box) (conv6_STATE_VARIABLE_Info_21));
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_Disjunct_14;
    MR_Word conv2_STATE_VARIABLE_SeenLaterRecCall_16;
    MR_Word conv1_STATE_VARIABLE_Info_18;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_nonlast_disjunct_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv3_STATE_VARIABLE_Disjunct_14, ((MR_Word) (wrapper_arg_3)), &conv2_STATE_VARIABLE_SeenLaterRecCall_16, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_Info_18);
    *wrapper_arg_2 = ((MR_Box) (conv3_STATE_VARIABLE_Disjunct_14));
    *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_SeenLaterRecCall_16));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_Info_18));
  }
}

static void MR_CALL 
hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word AtTail0_9,
  MR_Word * AtTail_10,
  MR_Word STATE_VARIABLE_Info_0_149,
  MR_Word * STATE_VARIABLE_Info_150)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Goal_8 = Goal0_7;
          hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, AtTail_10);
          *STATE_VARIABLE_Info_150 = STATE_VARIABLE_Info_0_149;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LHS_57 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 0))));
          MR_Word Unify0_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), GoalExpr0_12, (MR_Integer) 3))));
          MR_Word ModuleInfo_62;
          MR_Word VarTypes_63;

          *Goal_8 = Goal0_7;
          ModuleInfo_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 0))));
          VarTypes_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 4))));
          succeeded = hlds__hlds_pred__var_is_of_dummy_type_3_p_0(ModuleInfo_62, VarTypes_63, LHS_57);
          if (succeeded)
            *AtTail_10 = AtTail0_9;
          else
            switch (MR_tag((MR_Word) Unify0_60)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
                hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, AtTail_10);
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ToVar_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unify0_60, (MR_Integer) 0))));
                  MR_Word FromVar_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Unify0_60, (MR_Integer) 1))));
                  MR_Word Outputs_85;
                  MR_Word Outputs0_84;

                  succeeded = ((MR_tag((MR_Word) AtTail0_9)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Outputs0_84 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtTail0_9, (MR_Integer) 0))));
                    succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(ToVar_82, FromVar_83, Outputs0_84, &Outputs_85);
                  }
                  if (succeeded)
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      *AtTail_10 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Outputs_85));
                    }
                  else
                    *AtTail_10 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_2[1]));
                }
                break;
              case (MR_Integer) 3:
                hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, AtTail_10);
                break;
            }
          *STATE_VARIABLE_Info_150 = STATE_VARIABLE_Info_0_149;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CalleePredId_86 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 0))));
          MR_Integer CalleeProcId_87 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 1))));
          MR_Word ArgVars_88 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 2))));
          MR_Word Builtin_89 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 3))) & (MR_Integer) 1);
          MR_Word CalleePredProcId_92;
          MR_Word CurPredProcId_93;
          MR_Word CurSCCPredProcIds_94;
          MR_Word SelfOrMutual_95;

          {
            CalleePredProcId_92 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), CalleePredProcId_92, 0) = ((MR_Box) (CalleePredId_86));
            MR_hl_field(MR_mktag(0), CalleePredProcId_92, 1) = ((MR_Box) (CalleeProcId_87));
          }
          CurPredProcId_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 2))));
          CurSCCPredProcIds_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 3))));
          succeeded = (Builtin_89 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CalleePredProcId_92, CurPredProcId_93);
            if (succeeded)
            {
              SelfOrMutual_95 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (CalleePredProcId_92)), CurSCCPredProcIds_94);
              if (succeeded)
              {
                SelfOrMutual_95 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
                succeeded = mercury__builtin__false_0_p_0();
            }
          }
          if (succeeded)
          {
            MR_Word STATE_VARIABLE_Info_165_165;
            MR_Word Var_282 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 0))));
            MR_Word Var_283 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 1))));
            MR_Word Var_284 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 2))));
            MR_Word Var_285 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 3))));
            MR_Word Var_286 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 4))));
            MR_Word Var_287 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 5))));
            MR_Word Var_291 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 7))));
            MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 6)));
            MR_Word TypeInfo_403_403;
            MR_Word OutputVars_96;
            MR_Word CalleePredInfo_97;
            MR_Word CalleeArgTypes_98;
            MR_Word CalleeProcInfo_99;
            MR_Word CalleeArgModes_100;
            MR_Word CalleeOutputVars_101;
            MR_Word ModuleInfo_190;

            {
              STATE_VARIABLE_Info_165_165 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, 0) = ((MR_Box) (Var_282));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, 1) = ((MR_Box) (Var_283));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, 2) = ((MR_Box) (Var_284));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, 3) = ((MR_Box) (Var_285));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, 4) = ((MR_Box) (Var_286));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, 5) = ((MR_Box) (Var_287));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, 6) = (MR_Box) ((((packed_word_3 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) ((MR_Integer) 1)));
              MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, 7) = ((MR_Box) (Var_291));
            }
            succeeded = ((MR_tag((MR_Word) AtTail0_9)) == (MR_Integer) 0);
            if (succeeded)
            {
              OutputVars_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AtTail0_9, (MR_Integer) 0))));
              ModuleInfo_190 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 0))));
              hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_190, CalleePredId_86, &CalleePredInfo_97);
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(CalleePredInfo_97, &CalleeArgTypes_98);
              hlds__hlds_pred__pred_info_proc_info_3_p_0(CalleePredInfo_97, CalleeProcId_87, &CalleeProcInfo_99);
              hlds__hlds_pred__proc_info_get_argmodes_2_p_0(CalleeProcInfo_99, &CalleeArgModes_100);
              hlds__mark_tail_calls__find_output_args_5_p_0(ModuleInfo_190, CalleeArgTypes_98, CalleeArgModes_100, ArgVars_88, &CalleeOutputVars_101);
              TypeInfo_403_403 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_403_403, ((MR_Box) (OutputVars_96)), ((MR_Box) (CalleeOutputVars_101)));
            }
            if (succeeded)
            {
              MR_Word MaybeSelfFeature_102;
              MR_Word MaybeMutualFeature_103;
              MR_Word MaybeRecord_104;
              MR_Word Var_167 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 5))));
              MR_Word Var_301 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 0))));
              MR_Word Var_302 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 1))));
              MR_Word Var_303 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 2))));
              MR_Word Var_304 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 3))));
              MR_Word Var_305 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 4))));
              MR_Word Var_309 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 7))));
              MR_Unsigned packed_word_5 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 6)));

              MaybeSelfFeature_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_167, (MR_Integer) 0))));
              MaybeMutualFeature_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_167, (MR_Integer) 1))));
              MaybeRecord_104 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_167, (MR_Integer) 2))) & (MR_Integer) 1);
              switch (SelfOrMutual_95) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    if ((MaybeMutualFeature_103 == (MR_Word) ((MR_Unsigned) 0U)))
                      *Goal_8 = Goal0_7;
                    else
                    {
                      MR_Word MutualFeature_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeMutualFeature_103, (MR_Integer) 0))));
                      MR_Word GoalInfo_193;

                      hlds__hlds_goal__goal_info_add_feature_3_p_0(MutualFeature_108, GoalInfo0_13, &GoalInfo_193);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_12));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_193));
                      }
                    }
                    switch (MaybeRecord_104) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *STATE_VARIABLE_Info_150 = STATE_VARIABLE_Info_165_165;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                          *STATE_VARIABLE_Info_150 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_301));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_302));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_303));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_304));
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_305));
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_167));
                          MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 1))));
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_309));
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    if ((MaybeSelfFeature_102 == (MR_Word) ((MR_Unsigned) 0U)))
                      *Goal_8 = Goal0_7;
                    else
                    {
                      MR_Word SelfFeature_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSelfFeature_102, (MR_Integer) 0))));
                      MR_Word GoalInfo_107;

                      hlds__hlds_goal__goal_info_add_feature_3_p_0(SelfFeature_106, GoalInfo0_13, &GoalInfo_107);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_12));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_107));
                      }
                    }
                    switch (MaybeRecord_104) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *STATE_VARIABLE_Info_150 = STATE_VARIABLE_Info_165_165;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                          *STATE_VARIABLE_Info_150 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_301));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_302));
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_303));
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_304));
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_305));
                          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_167));
                          MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) ((((packed_word_5 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) ((MR_Integer) 0) << 2))));
                          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_309));
                        }
                        break;
                    }
                  }
                  break;
              }
            }
            else
            {
              MR_Word Obviousness_110;
              MR_Word CallerPredProcId_111;
              MR_Word Context_112;
              MR_Word WarnParams_113;
              MR_Word Specs0_114;
              MR_Word Specs_115;
              MR_Word Var_175;
              MR_Word ModuleInfo_198;
              MR_Word Var_369;
              MR_Word Var_370;
              MR_Word Var_371;
              MR_Word Var_372;
              MR_Word Var_373;
              MR_Word Var_374;
              MR_Unsigned packed_word_11;

              if (((MR_tag((MR_Word) AtTail0_9)) == (MR_Integer) 0))
              {
                Obviousness_110 = (MR_Integer) 0;
                *Goal_8 = Goal0_7;
              }
              else
              {
                MR_Word Var_401 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), AtTail0_9, (MR_Integer) 0))) & (MR_Integer) 1);

                switch (Var_401) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      Obviousness_110 = (MR_Integer) 0;
                      *Goal_8 = Goal0_7;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      MR_Word GoalInfo_196;

                      Obviousness_110 = (MR_Integer) 1;
                      hlds__hlds_goal__goal_info_add_feature_3_p_0((MR_Integer) 12, GoalInfo0_13, &GoalInfo_196);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_8 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr0_12));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_196));
                      }
                    }
                    break;
                }
              }
              ModuleInfo_198 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 0))));
              CallerPredProcId_111 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 2))));
              Context_112 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo0_13);
              Var_175 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 5))));
              Specs0_114 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 7))));
              WarnParams_113 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_175, (MR_Integer) 3))));
              hlds__mark_tail_calls__maybe_report_nontail_recursive_call_9_p_0(ModuleInfo_198, CallerPredProcId_111, CalleePredProcId_92, Context_112, (MR_Integer) 0, Obviousness_110, WarnParams_113, Specs0_114, &Specs_115);
              Var_369 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 0))));
              Var_370 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 1))));
              Var_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 2))));
              Var_372 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 3))));
              Var_373 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 4))));
              Var_374 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 5))));
              packed_word_11 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_165_165, (MR_Integer) 6)));
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                *STATE_VARIABLE_Info_150 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_369));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_370));
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_371));
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_372));
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_373));
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_374));
                MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) (packed_word_11);
                MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Specs_115));
              }
            }
            *AtTail_10 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_2[2]));
          }
          else
          {
            *Goal_8 = Goal0_7;
            hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, AtTail_10);
            *STATE_VARIABLE_Info_150 = STATE_VARIABLE_Info_0_149;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_8 = Goal0_7;
              hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, AtTail_10);
              *STATE_VARIABLE_Info_150 = STATE_VARIABLE_Info_0_149;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_116 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word RevGoals0_118;
              MR_Word RevGoals_119;
              MR_Word Goals_120;
              MR_Word GoalExpr_121;
              MR_Word AtTail1_204;

              switch (ConjType_116) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, &AtTail1_204);
                  break;
                case (MR_Integer) 0:
                  AtTail1_204 = AtTail0_9;
                  break;
              }
              mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Goals0_117, &RevGoals0_118);
              hlds__mark_tail_calls__mark_tail_rec_calls_in_conj_6_p_0(RevGoals0_118, &RevGoals_119, AtTail1_204, AtTail_10, STATE_VARIABLE_Info_0_149, STATE_VARIABLE_Info_150);
              mercury__list__reverse_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), RevGoals_119, &Goals_120);
              {
                GoalExpr_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_121, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), GoalExpr_121, 1) = (MR_Box) ((MR_Unsigned) (ConjType_116));
                MR_hl_field(MR_mktag(3), GoalExpr_121, 2) = ((MR_Box) (Goals_120));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_121));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word NonLastDisjuncts0_123;
              MR_Word LastDisjunct0_124;
              MR_Box conv0_LastDisjunct0_124;

              succeeded = mercury__list__split_last_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Disjuncts0_122, &NonLastDisjuncts0_123, &conv0_LastDisjunct0_124);
              if (succeeded)
              {
                LastDisjunct0_124 = ((MR_Word) (conv0_LastDisjunct0_124));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word LastDisjunct_125;
                MR_Word LastAtTail_126;
                MR_Word SeenLaterRecCall0_127;
                MR_Word NonLastAtTail0_128;
                MR_Word NonLastDisjuncts_129;
                MR_Word SeenLaterRecCall_130;
                MR_Word STATE_VARIABLE_Info_158_158;
                MR_Word Var_159;
                MR_Word Var_161;
                MR_Word Var_162;
                MR_Word GoalExpr_205;
                MR_Box conv5_SeenLaterRecCall_130;
                MR_Box conv4_STATE_VARIABLE_Info_150;

                hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(LastDisjunct0_124, &LastDisjunct_125, AtTail0_9, &LastAtTail_126, STATE_VARIABLE_Info_0_149, &STATE_VARIABLE_Info_158_158);
                hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(LastAtTail_126, &SeenLaterRecCall0_127);
                {
                  NonLastAtTail0_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NonLastAtTail0_128, 0) = (MR_Box) ((MR_Unsigned) (SeenLaterRecCall0_127));
                }
                {
                  Var_159 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_159, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_159, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_159, 2) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(0), Var_159, 3) = ((MR_Box) (NonLastAtTail0_128));
                }
                mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0), (MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0), Var_159, NonLastDisjuncts0_123, &NonLastDisjuncts_129, ((MR_Box) (SeenLaterRecCall0_127)), &conv5_SeenLaterRecCall_130, ((MR_Box) (STATE_VARIABLE_Info_158_158)), &conv4_STATE_VARIABLE_Info_150);
                SeenLaterRecCall_130 = ((MR_Word) (conv5_SeenLaterRecCall_130));
                *STATE_VARIABLE_Info_150 = ((MR_Word) (conv4_STATE_VARIABLE_Info_150));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *AtTail_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (SeenLaterRecCall_130));
                }
                {
                  Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (LastDisjunct_125));
                  MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), NonLastDisjuncts_129, Var_162);
                {
                  GoalExpr_205 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_205, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), GoalExpr_205, 1) = ((MR_Box) (Var_161));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_205));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
                }
              }
              else
              {
                MR_Word SeenLaterRecCall_206;

                hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(AtTail0_9, &SeenLaterRecCall_206);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *AtTail_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (SeenLaterRecCall_206));
                }
                *Goal_8 = Goal0_7;
                *STATE_VARIABLE_Info_150 = STATE_VARIABLE_Info_0_149;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_131 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word CanFail_132 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_133 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Cases_134;
              MR_Word Var_156;
              MR_Word GoalExpr_209;
              MR_Word SeenLaterRecCall0_210;
              MR_Word SeenLaterRecCall_211;
              MR_Box conv10_SeenLaterRecCall_211;
              MR_Box conv9_STATE_VARIABLE_Info_150;

              hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(AtTail0_9, &SeenLaterRecCall0_210);
              {
                Var_156 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_156, 0) = ((MR_Box) (&hlds__mark_tail_calls_scalar_common_3[1]));
                MR_hl_field(MR_mktag(0), Var_156, 1) = ((MR_Box) (hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0_2));
                MR_hl_field(MR_mktag(0), Var_156, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_156, 3) = ((MR_Box) (AtTail0_9));
              }
              mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0), (MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0), (MR_Word) (&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0), Var_156, Cases0_133, &Cases_134, ((MR_Box) (SeenLaterRecCall0_210)), &conv10_SeenLaterRecCall_211, ((MR_Box) (STATE_VARIABLE_Info_0_149)), &conv9_STATE_VARIABLE_Info_150);
              SeenLaterRecCall_211 = ((MR_Word) (conv10_SeenLaterRecCall_211));
              *STATE_VARIABLE_Info_150 = ((MR_Word) (conv9_STATE_VARIABLE_Info_150));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *AtTail_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (SeenLaterRecCall_211));
              }
              {
                GoalExpr_209 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_209, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_209, 1) = ((MR_Box) (Var_131));
                MR_hl_field(MR_mktag(3), GoalExpr_209, 2) = (MR_Box) ((MR_Unsigned) (CanFail_132));
                MR_hl_field(MR_mktag(3), GoalExpr_209, 3) = ((MR_Box) (Cases_134));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_209));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word SubGoal0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word SubGoal_34;
              MR_Word Var_189;

              switch (MR_tag((MR_Word) Reason_27)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 2:
                  {
                    MR_Word AtTail1_40;

                    hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, &AtTail1_40);
                    hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_28, &SubGoal_34, AtTail1_40, AtTail_10, STATE_VARIABLE_Info_0_149, STATE_VARIABLE_Info_150);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word HeadWarning_29 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Reason_27, (MR_Integer) 0))) & (MR_Integer) 3);
                    MR_Word TailWarnings_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Reason_27, (MR_Integer) 1))));

                    succeeded = (HeadWarning_29 == (MR_Integer) 2);
                    if (!(succeeded))
                      succeeded = mercury__list__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_goal_warning_0), ((MR_Box) ((MR_Integer) 2)), TailWarnings_30);
                    if (succeeded)
                    {
                      MR_Word OldParams_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 5))));
                      MR_Word InnerParams_32;
                      MR_Word InnerInfo0_33;
                      MR_Word InnerInfo_35;
                      MR_Word Var_186;
                      MR_Word Var_222;
                      MR_Word Var_223;
                      MR_Word Var_224;
                      MR_Word Var_226;
                      MR_Word Var_227;
                      MR_Word Var_228;
                      MR_Word Var_229;
                      MR_Word Var_230;
                      MR_Word Var_235;
                      MR_Unsigned packed_word_15;
                      MR_Word Var_236;
                      MR_Word Var_237;
                      MR_Word Var_238;
                      MR_Word Var_239;
                      MR_Word Var_240;
                      MR_Word Var_245;
                      MR_Unsigned packed_word_16;

                      Var_186 = hlds__mark_tail_calls__no_warnings_non_tail_rec_params_0_f_0();
                      Var_222 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldParams_31, (MR_Integer) 0))));
                      Var_223 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldParams_31, (MR_Integer) 1))));
                      Var_224 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OldParams_31, (MR_Integer) 2))) & (MR_Integer) 1);
                      {
                        InnerParams_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), InnerParams_32, 0) = ((MR_Box) (Var_222));
                        MR_hl_field(MR_mktag(0), InnerParams_32, 1) = ((MR_Box) (Var_223));
                        MR_hl_field(MR_mktag(0), InnerParams_32, 2) = (MR_Box) ((MR_Unsigned) (Var_224));
                        MR_hl_field(MR_mktag(0), InnerParams_32, 3) = ((MR_Box) (Var_186));
                      }
                      Var_226 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 0))));
                      Var_227 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 1))));
                      Var_228 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 2))));
                      Var_229 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 3))));
                      Var_230 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 4))));
                      packed_word_15 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 6)));
                      Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_149, (MR_Integer) 7))));
                      {
                        InnerInfo0_33 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), InnerInfo0_33, 0) = ((MR_Box) (Var_226));
                        MR_hl_field(MR_mktag(0), InnerInfo0_33, 1) = ((MR_Box) (Var_227));
                        MR_hl_field(MR_mktag(0), InnerInfo0_33, 2) = ((MR_Box) (Var_228));
                        MR_hl_field(MR_mktag(0), InnerInfo0_33, 3) = ((MR_Box) (Var_229));
                        MR_hl_field(MR_mktag(0), InnerInfo0_33, 4) = ((MR_Box) (Var_230));
                        MR_hl_field(MR_mktag(0), InnerInfo0_33, 5) = ((MR_Box) (InnerParams_32));
                        MR_hl_field(MR_mktag(0), InnerInfo0_33, 6) = (MR_Box) (packed_word_15);
                        MR_hl_field(MR_mktag(0), InnerInfo0_33, 7) = ((MR_Box) (Var_235));
                      }
                      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_28, &SubGoal_34, AtTail0_9, AtTail_10, InnerInfo0_33, &InnerInfo_35);
                      Var_236 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerInfo_35, (MR_Integer) 0))));
                      Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerInfo_35, (MR_Integer) 1))));
                      Var_238 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerInfo_35, (MR_Integer) 2))));
                      Var_239 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerInfo_35, (MR_Integer) 3))));
                      Var_240 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerInfo_35, (MR_Integer) 4))));
                      packed_word_16 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), InnerInfo_35, (MR_Integer) 6)));
                      Var_245 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InnerInfo_35, (MR_Integer) 7))));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
                        *STATE_VARIABLE_Info_150 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_236));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_237));
                        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_238));
                        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_239));
                        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_240));
                        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (OldParams_31));
                        MR_hl_field(MR_mktag(0), base, 6) = (MR_Box) (packed_word_16);
                        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_245));
                      }
                    }
                    else
                      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_28, &SubGoal_34, AtTail0_9, AtTail_10, STATE_VARIABLE_Info_0_149, STATE_VARIABLE_Info_150);
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_27, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_28, &SubGoal_34, AtTail0_9, AtTail_10, STATE_VARIABLE_Info_0_149, STATE_VARIABLE_Info_150);
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "mark_tail_calls.m", (MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_rec_calls_in_goal\'/6", (MR_String) "unexpected scope kind");
                        return;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word AtTail1_40;

                        hlds__mark_tail_calls__not_at_tail_2_p_0(AtTail0_9, &AtTail1_40);
                        hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(SubGoal0_28, &SubGoal_34, AtTail1_40, AtTail_10, STATE_VARIABLE_Info_0_149, STATE_VARIABLE_Info_150);
                      }
                      break;
                  }
                  break;
              }
              {
                Var_189 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_189, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), Var_189, 1) = ((MR_Box) (Reason_27));
                MR_hl_field(MR_mktag(3), Var_189, 2) = ((MR_Box) (SubGoal_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_189));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Vars_135 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Cond0_136 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Then0_137 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Else0_138 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
              MR_Word Then_139;
              MR_Word AtTailBeforeThen_140;
              MR_Word Else_141;
              MR_Word AtTailBeforeElse_142;
              MR_Word SeenRecCallInThen_143;
              MR_Word SeenRecCallInElse_144;
              MR_Word SeenRecCallAfterCond_145;
              MR_Word AtTailAfterCond_146;
              MR_Word Cond_147;
              MR_Word STATE_VARIABLE_Info_153_153;
              MR_Word STATE_VARIABLE_Info_154_154;
              MR_Word GoalExpr_212;

              hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Then0_137, &Then_139, AtTail0_9, &AtTailBeforeThen_140, STATE_VARIABLE_Info_0_149, &STATE_VARIABLE_Info_153_153);
              hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Else0_138, &Else_141, AtTail0_9, &AtTailBeforeElse_142, STATE_VARIABLE_Info_153_153, &STATE_VARIABLE_Info_154_154);
              hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(AtTailBeforeThen_140, &SeenRecCallInThen_143);
              hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(AtTailBeforeElse_142, &SeenRecCallInElse_144);
              succeeded = (SeenRecCallInThen_143 == (MR_Integer) 0);
              if (!(succeeded))
                succeeded = (SeenRecCallInElse_144 == (MR_Integer) 0);
              if (succeeded)
                SeenRecCallAfterCond_145 = (MR_Integer) 0;
              else
                SeenRecCallAfterCond_145 = (MR_Integer) 1;
              {
                AtTailAfterCond_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), AtTailAfterCond_146, 0) = (MR_Box) ((MR_Unsigned) (SeenRecCallAfterCond_145));
              }
              hlds__mark_tail_calls__mark_tail_rec_calls_in_goal_6_p_0(Cond0_136, &Cond_147, AtTailAfterCond_146, AtTail_10, STATE_VARIABLE_Info_154_154, STATE_VARIABLE_Info_150);
              {
                GoalExpr_212 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_212, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_212, 1) = ((MR_Box) (Vars_135));
                MR_hl_field(MR_mktag(3), GoalExpr_212, 2) = ((MR_Box) (Cond_147));
                MR_hl_field(MR_mktag(3), GoalExpr_212, 3) = ((MR_Box) (Then_139));
                MR_hl_field(MR_mktag(3), GoalExpr_212, 4) = ((MR_Box) (Else_141));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_212));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.mark_tail_calls.mark_tail_rec_calls_in_goal\'/6", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__not_at_tail_2_p_0(
  MR_Word Before_3,
  MR_Word * After_4)
{
  if (((MR_tag((MR_Word) Before_3)) == (MR_Integer) 0))
    *After_4 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_2[1]));
  else
    *After_4 = Before_3;
}

static void MR_CALL 
hlds__mark_tail_calls__project_seen_later_rec_call_2_p_0(
  MR_Word AtTail_3,
  MR_Word * SeenLaterRecCall_4)
{
  if (((MR_tag((MR_Word) AtTail_3)) == (MR_Integer) 0))
    *SeenLaterRecCall_4 = (MR_Integer) 1;
  else
    *SeenLaterRecCall_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), AtTail_3, (MR_Integer) 0))) & (MR_Integer) 1);
}

static MR_bool MR_CALL 
hlds__mark_tail_calls__is_output_arg_rename_4_p_0(
  MR_Word ToVar_5,
  MR_Word FromVar_6,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Var0_7;
    MR_Word Vars0_8;
    MR_Word Var_9;
    MR_Word Vars_10;
    MR_Word TypeInfo_11_11;

    if (succeeded)
    {
      Var0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      Vars0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_1[1]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ToVar_5)), ((MR_Box) (Var0_7)));
      if (succeeded)
      {
        Var_9 = FromVar_6;
        Vars_10 = Vars0_8;
        succeeded = MR_TRUE;
      }
      else
      {
        Var_9 = Var0_7;
        succeeded = hlds__mark_tail_calls__is_output_arg_rename_4_p_0(ToVar_5, FromVar_6, Vars0_8, &Vars_10);
      }
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_10));
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls__find_output_args_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Types_7,
  MR_Word Modes_8,
  MR_Word Vars_9,
  MR_Word * Outputs_10)
{
  {
    MR_bool succeeded;
    MR_Word OutputsPrime_11;

    succeeded = hlds__mark_tail_calls__find_output_args_2_5_p_0(ModuleInfo_6, Types_7, Modes_8, Vars_9, &OutputsPrime_11);
    if (succeeded)
      *Outputs_10 = OutputsPrime_11;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.mark_tail_calls.find_output_args\'/5", (MR_String) "list length mismatch");
        return;
      }
  }
}

static MR_Word MR_CALL 
hlds__mark_tail_calls__no_warnings_non_tail_rec_params_0_f_0(void)
{
  return (MR_Word) (&hlds__mark_tail_calls_scalar_common_2[0]);
}

void MR_CALL 
hlds__mark_tail_calls__maybe_report_nontail_recursive_call_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word CallerPredProcId_11,
  MR_Word CalleePredProcId_12,
  MR_Word Context_13,
  MR_Word Reason_14,
  MR_Word Obviousness_15,
  MR_Word WarnParams_16,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  {
    MR_bool succeeded;
    MR_Word WarnOrError_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), WarnParams_16, (MR_Integer) 0))) >> 2)) & (MR_Integer) 1);
    MR_Word WarnNonTailSelfRec_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), WarnParams_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word WarnNonTailMutualRec_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), WarnParams_16, (MR_Integer) 0))) & (MR_Integer) 1);

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CallerPredProcId_11, CalleePredProcId_12);
    if (succeeded)
      succeeded = (WarnNonTailSelfRec_19 == (MR_Integer) 1);
    else
      succeeded = (WarnNonTailMutualRec_20 == (MR_Integer) 1);
    if (succeeded)
      switch (Obviousness_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Globals_21;

            hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_10, &Globals_21);
            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_21, (MR_Integer) 36, (MR_Integer) 1);
          }
          break;
      }
    if (succeeded)
    {
      MR_Word CallerPredId_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallerPredProcId_11, (MR_Integer) 0))));
      MR_Integer CallerProcId_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), CallerPredProcId_11, (MR_Integer) 1))));
      MR_Word CallerPredInfo_39;
      MR_Word CallerPredOrFunc_40;
      MR_String CallerName_41;
      MR_Integer CallerArity_42;
      MR_Word CallerId_43;
      MR_Word Var_51;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, CallerPredId_37, &CallerPredInfo_39);
      CallerPredOrFunc_40 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CallerPredInfo_39);
      CallerName_41 = hlds__hlds_pred__pred_info_name_1_f_0(CallerPredInfo_39);
      CallerArity_42 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(CallerPredInfo_39);
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (CallerName_41));
      }
      {
        CallerId_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), CallerId_43, 0) = (MR_Box) ((MR_Unsigned) (CallerPredOrFunc_40));
        MR_hl_field(MR_mktag(0), CallerId_43, 1) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), CallerId_43, 2) = ((MR_Box) (CallerArity_42));
      }
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(CallerPredProcId_11, CalleePredProcId_12);
      if (succeeded)
        hlds__mark_tail_calls__add_message_for_nontail_self_recursive_call_7_p_0(CallerId_43, CallerProcId_38, Context_13, Reason_14, WarnOrError_18, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
      else
      {
        MR_Word CalleePredId_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CalleePredProcId_12, (MR_Integer) 0))));
        MR_Word CalleePredInfo_46;
        MR_Word CalleePredOrFunc_47;
        MR_Word CalleeName_48;
        MR_Integer CalleeArity_49;
        MR_Word CalleeId_50;
        MR_Word Var_53;
        MR_String Var_54;

        hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_10, CalleePredId_44, &CalleePredInfo_46);
        CalleePredOrFunc_47 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(CalleePredInfo_46);
        Var_53 = hlds__hlds_pred__pred_info_module_1_f_0(CalleePredInfo_46);
        Var_54 = hlds__hlds_pred__pred_info_name_1_f_0(CalleePredInfo_46);
        {
          CalleeName_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CalleeName_48, 0) = ((MR_Box) (Var_53));
          MR_hl_field(MR_mktag(1), CalleeName_48, 1) = ((MR_Box) (Var_54));
        }
        CalleeArity_49 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(CalleePredInfo_46);
        {
          CalleeId_50 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CalleeId_50, 0) = (MR_Box) ((MR_Unsigned) (CalleePredOrFunc_47));
          MR_hl_field(MR_mktag(0), CalleeId_50, 1) = ((MR_Box) (CalleeName_48));
          MR_hl_field(MR_mktag(0), CalleeId_50, 2) = ((MR_Box) (CalleeArity_49));
        }
        hlds__mark_tail_calls__add_message_for_nontail_mutual_recursive_call_8_p_0(CallerId_43, CallerProcId_38, CalleeId_50, Context_13, Reason_14, WarnOrError_18, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
      }
    }
    else
      *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  }
}

void MR_CALL 
hlds__mark_tail_calls__add_message_for_nontail_mutual_recursive_call_8_p_0(
  MR_Word CallerId_9,
  MR_Integer CallerProcId_10,
  MR_Word CalleeId_11,
  MR_Word Context_12,
  MR_Word Reason_13,
  MR_Word WarnOrError_14,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_Word ReasonPieces_16;
    MR_Word VerboseMsgs_17;
    MR_Word Severity_18;
    MR_Word WarnOrErrorWord_19;
    MR_Integer ProcNumber0_20;
    MR_Integer ProcNumber_21;
    MR_Word MainPieces_22;
    MR_Word MainMsg_23;
    MR_Word Spec_24;
    MR_Word Var_28;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_51;

    hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(Reason_13, Context_12, &ReasonPieces_16, &VerboseMsgs_17);
    switch (WarnOrError_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Severity_18 = (MR_Word) ((MR_Unsigned) 0U);
          WarnOrErrorWord_19 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[45]));
        }
        break;
      case (MR_Integer) 0:
        {
          Severity_18 = (MR_Word) ((MR_Unsigned) 4U);
          WarnOrErrorWord_19 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[46]));
        }
        break;
    }
    hlds__hlds_pred__proc_id_to_int_2_p_0(CallerProcId_10, &ProcNumber0_20);
    ProcNumber_21 = (MR_Integer) ((MR_Unsigned) ProcNumber0_20 + (MR_Unsigned) 1);
    {
      Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (ProcNumber_21));
    }
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_37, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_37, 1) = ((MR_Box) (CallerId_9));
    }
    {
      Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (CalleeId_11));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[51])));
      MR_hl_field(MR_mktag(1), Var_44, 1) = ((MR_Box) (Var_47));
    }
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (WarnOrErrorWord_19));
      MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_44));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[47])));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_31));
    }
    MainPieces_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_28, ReasonPieces_16);
    {
      MainMsg_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainMsg_23, 0) = ((MR_Box) (Context_12));
      MR_hl_field(MR_mktag(0), MainMsg_23, 1) = ((MR_Box) (MainPieces_22));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (MainMsg_23));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (VerboseMsgs_17));
    }
    {
      Spec_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_24, 0) = ((MR_Box) (Severity_18));
      MR_hl_field(MR_mktag(0), Spec_24, 1) = ((MR_Box) ((MR_Unsigned) 72U));
      MR_hl_field(MR_mktag(0), Spec_24, 2) = ((MR_Box) (Var_51));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_26 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_25));
    }
  }
}

void MR_CALL 
hlds__mark_tail_calls__add_message_for_nontail_self_recursive_call_7_p_0(
  MR_Word SimpleCallId_8,
  MR_Integer ProcId_9,
  MR_Word Context_10,
  MR_Word Reason_11,
  MR_Word WarnOrError_12,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_Word ReasonPieces_14;
    MR_Word VerboseMsgs_15;
    MR_Word Severity_16;
    MR_Word WarnOrErrorWord_17;
    MR_Integer ProcNumber0_18;
    MR_Integer ProcNumber_19;
    MR_Word MainPieces_20;
    MR_Word MainMsg_21;
    MR_Word Spec_22;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_47;

    hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(Reason_11, Context_10, &ReasonPieces_14, &VerboseMsgs_15);
    switch (WarnOrError_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          Severity_16 = (MR_Word) ((MR_Unsigned) 0U);
          WarnOrErrorWord_17 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[45]));
        }
        break;
      case (MR_Integer) 0:
        {
          Severity_16 = (MR_Word) ((MR_Unsigned) 4U);
          WarnOrErrorWord_17 = (MR_Word) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[46]));
        }
        break;
    }
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_9, &ProcNumber0_18);
    ProcNumber_19 = (MR_Integer) ((MR_Unsigned) ProcNumber0_18 + (MR_Unsigned) 1);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_30, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_30, 1) = ((MR_Box) (ProcNumber_19));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 17U));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (SimpleCallId_8));
    }
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (WarnOrErrorWord_17));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[50])));
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[41])));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_39));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
    }
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[48])));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) (Var_31));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[47])));
      MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (Var_29));
    }
    MainPieces_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0), Var_26, ReasonPieces_14);
    {
      MainMsg_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MainMsg_21, 0) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), MainMsg_21, 1) = ((MR_Box) (MainPieces_20));
    }
    {
      Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MainMsg_21));
      MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (VerboseMsgs_15));
    }
    {
      Spec_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_22, 0) = ((MR_Box) (Severity_16));
      MR_hl_field(MR_mktag(0), Spec_22, 1) = ((MR_Box) ((MR_Unsigned) 72U));
      MR_hl_field(MR_mktag(0), Spec_22, 2) = ((MR_Box) (Var_47));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Specs_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_22));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_23));
    }
  }
}

static void MR_CALL 
hlds__mark_tail_calls__nontail_rec_call_reason_to_pieces_4_p_0(
  MR_Word Reason_5,
  MR_Word Context_6,
  MR_Word * ReasonPieces_7,
  MR_Word * VerboseMsgs_8)
{
  switch (Reason_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word Var_63;

        *ReasonPieces_7 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[13]));
        {
          Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Context_6));
          MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[44])));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *VerboseMsgs_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_63));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *ReasonPieces_7 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[27]));
        *VerboseMsgs_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 3:
      {
        *ReasonPieces_7 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[31]));
        *VerboseMsgs_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 0:
      {
        *ReasonPieces_7 = (MR_Word) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[33]));
        *VerboseMsgs_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls__find_output_args_2_5_p_0(
  MR_Word ModuleInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      succeeded = (HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = (HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
      }
    }
    else
    {
      MR_Word Type_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Types_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Mode_10;
      MR_Word Modes_11;
      MR_Word Var_12;
      MR_Word Vars_13;
      MR_Word TailOutputVars_15;
      MR_Word TopFunctorMode_19;

      succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Mode_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Modes_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        succeeded = (HeadVar__4_4 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
          Vars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
          succeeded = hlds__mark_tail_calls__find_output_args_2_5_p_0(ModuleInfo_1, Types_9, Modes_11, Vars_13, &TailOutputVars_15);
          if (succeeded)
          {
            check_hlds__mode_util__mode_to_top_functor_mode_4_p_0(ModuleInfo_1, Mode_10, Type_8, &TopFunctorMode_19);
            switch (TopFunctorMode_19) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 2:
                succeeded = mercury__builtin__false_0_p_0();
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IsDummy_20;

                  IsDummy_20 = check_hlds__type_util__is_type_a_dummy_2_f_0(ModuleInfo_1, Type_8);
                  switch (IsDummy_20) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      succeeded = mercury__builtin__false_0_p_0();
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                  }
                }
                break;
            }
            if (succeeded)
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailOutputVars_15));
              }
            else
              *HeadVar__5_5 = TailOutputVars_15;
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
hlds__mark_tail_calls__maybe_report_no_tail_or_nontail_recursive_calls_5_p_0(
  MR_Word PredInfo_6,
  MR_Word ProcInfo_7,
  MR_Word FoundAnyRecCalls_8,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  switch (FoundAnyRecCalls_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
      break;
    case (MR_Integer) 0:
      {
        MR_Word MaybeRequireTailRec_10;

        hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(ProcInfo_7, &MaybeRequireTailRec_10);
        if ((MaybeRequireTailRec_10 == (MR_Word) ((MR_Unsigned) 0U)))
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        else
        {
          MR_Word RequireTailRecInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRequireTailRec_10, (MR_Integer) 0))));
          MR_Word Context_14;
          MR_String PredName_16;
          MR_Integer PredArity_17;
          MR_Word SimpleCallId_18;
          MR_Word Var_21;
          MR_Word PredOrFunc_28;
          MR_Word Pieces_31;
          MR_Word Spec_32;
          MR_Word Var_35;
          MR_Word Var_38;
          MR_Word Var_41;
          MR_Word Var_42;
          MR_Word Var_43;
          MR_Word Var_46;
          MR_Word Var_48;
          MR_Word Var_51;
          MR_Word Var_52;

          if (((MR_tag((MR_Word) RequireTailRecInfo_11)) == (MR_Integer) 1))
            Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RequireTailRecInfo_11, (MR_Integer) 1))));
          else
            Context_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), RequireTailRecInfo_11, (MR_Integer) 0))));
          hlds__hlds_pred__pred_info_get_is_pred_or_func_2_p_0(PredInfo_6, &PredOrFunc_28);
          hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfo_6, &PredName_16);
          hlds__hlds_pred__pred_info_get_orig_arity_2_p_0(PredInfo_6, &PredArity_17);
          {
            Var_21 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (PredName_16));
          }
          {
            SimpleCallId_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), SimpleCallId_18, 0) = (MR_Box) ((MR_Unsigned) (PredOrFunc_28));
            MR_hl_field(MR_mktag(0), SimpleCallId_18, 1) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(0), SimpleCallId_18, 2) = ((MR_Box) (PredArity_17));
          }
          {
            Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 17U));
            MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (SimpleCallId_18));
          }
          {
            Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 16U));
            MR_hl_field(MR_mktag(3), Var_52, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_28));
          }
          {
            Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
            MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__mark_tail_calls_scalar_common_1[37])));
          }
          {
            Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[42])));
            MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (Var_51));
          }
          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[41])));
            MR_hl_field(MR_mktag(1), Var_43, 1) = ((MR_Box) (Var_46));
          }
          {
            Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
            MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (Var_43));
          }
          {
            Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[40])));
            MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[39])));
            MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
          }
          {
            Pieces_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Pieces_31, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__mark_tail_calls_scalar_common_1[38])));
            MR_hl_field(MR_mktag(1), Pieces_31, 1) = ((MR_Box) (Var_35));
          }
          {
            Spec_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Spec_32, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(MR_mktag(1), Spec_32, 1) = ((MR_Box) ((MR_Unsigned) 72U));
            MR_hl_field(MR_mktag(1), Spec_32, 2) = ((MR_Box) (Context_14));
            MR_hl_field(MR_mktag(1), Spec_32, 3) = ((MR_Box) (Pieces_31));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Specs_20 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_32));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_19));
          }
        }
      }
      break;
  }
}

void MR_CALL 
hlds__mark_tail_calls__maybe_override_warn_params_for_proc_3_p_0(
  MR_Word ProcInfo_4,
  MR_Word WarnParams_5,
  MR_Word * ProcWarnParams_6)
{
  {
    MR_Word MaybeRequireTailRec_7;

    hlds__hlds_pred__proc_info_get_maybe_require_tailrec_info_2_p_0(ProcInfo_4, &MaybeRequireTailRec_7);
    if ((MaybeRequireTailRec_7 == (MR_Word) ((MR_Unsigned) 0U)))
      *ProcWarnParams_6 = WarnParams_5;
    else
    {
      MR_Word Pragma_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeRequireTailRec_7, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) Pragma_8)) == (MR_Integer) 1))
      {
        MR_Word WarnOrError_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Pragma_8, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
        MR_Word RecType_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Pragma_8, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word SelfRec_13;
        MR_Word MutualRec_14;

        switch (RecType_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              SelfRec_13 = (MR_Integer) 1;
              MutualRec_14 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 0:
            {
              SelfRec_13 = (MR_Integer) 1;
              MutualRec_14 = (MR_Integer) 0;
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *ProcWarnParams_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) (WarnOrError_10) << 2)) | (((((MR_Unsigned) (SelfRec_13) << 1)) | (MR_Unsigned) (MutualRec_14)))));
        }
      }
      else
        *ProcWarnParams_6 = (MR_Word) (&hlds__mark_tail_calls_scalar_common_2[0]);
    }
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____at_tail_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____at_tail_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____at_tail_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____at_tail_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____call_is_self_or_mutual_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____call_is_self_or_mutual_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____found_any_rec_calls_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____found_any_rec_calls_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____later_rec_call_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____later_rec_call_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____later_rec_call_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____later_rec_call_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____mark_tail_rec_calls_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____mark_tail_rec_calls_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____maybe_record_tail_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____maybe_record_tail_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____maybe_warn_non_tail_mutual_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____maybe_warn_non_tail_mutual_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____maybe_warn_non_tail_self_rec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____maybe_warn_non_tail_self_rec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____nontail_rec_call_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____nontail_rec_call_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____nontail_rec_obviousness_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____nontail_rec_obviousness_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____nontail_rec_obviousness_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____nontail_rec_obviousness_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____tail_rec_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____tail_rec_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____tail_rec_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____tail_rec_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____warn_non_tail_rec_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____warn_non_tail_rec_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
hlds__mark_tail_calls____Unify____was_proc_changed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__mark_tail_calls____Unify____was_proc_changed_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__mark_tail_calls____Compare____was_proc_changed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__mark_tail_calls____Compare____was_proc_changed_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__mark_tail_calls__init(void)
{
}

void mercury__hlds__mark_tail_calls__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_at_tail_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_call_is_self_or_mutual_rec_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_found_any_rec_calls_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_later_rec_call_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_mark_tail_rec_calls_info_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_record_tail_rec_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_mutual_rec_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_maybe_warn_non_tail_self_rec_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_nontail_rec_call_reason_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_nontail_rec_obviousness_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_tail_rec_params_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_warn_non_tail_rec_params_0);
	MR_register_type_ctor_info(&hlds__mark_tail_calls__hlds__mark_tail_calls__type_ctor_info_was_proc_changed_0);
}

void mercury__hlds__mark_tail_calls__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__mark_tail_calls__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.mark_tail_calls.
