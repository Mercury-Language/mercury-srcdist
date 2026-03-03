/*
** Automatically generated from `stratify.m'
** by the Mercury compiler,
** version rotd-2026-03-03
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


// :- module check_hlds.stratify.
// :- implementation.

/*
INIT mercury__check_hlds__stratify__init
ENDINIT
*/

#include "check_hlds.stratify.mih"


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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mode_test.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type_test.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1;

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_ordinal_ordered_calls_higher_order_0[2];

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0[2];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0[2];

static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_error_or_warning_0_0;

static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_error_or_warning_0_1[1];

static const MR_DuArgLocn check_hlds__stratify__check_hlds__stratify__field_locns_error_or_warning_0_1[1];

static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_error_or_warning_0_1;

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_error_or_warning_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_error_or_warning_0_1[1];

static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_error_or_warning_0[2];

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_error_or_warning_0[2];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0[2];

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3;

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_ordinal_ordered_ho_in_out_0[4];

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0[4];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0[4];

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0;

static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0[2];

static const MR_DuArgLocn check_hlds__stratify__check_hlds__stratify__field_locns_strat_ho_info_0_0[2];

static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0[1];

static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0[1];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0[1];

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify__gen_conservative_graph_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word STATE_VARIABLE_DepGraph_0_13,
  MR_Word * STATE_VARIABLE_DepGraph_14,
  MR_Word * HOInfo_7);

static void MR_CALL 
check_hlds__stratify__expand_predids_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_ProcCalls_0_3,
  MR_Word * STATE_VARIABLE_ProcCalls_4,
  MR_Word STATE_VARIABLE_HOInfo_0_5,
  MR_Word * STATE_VARIABLE_HOInfo_6,
  MR_Word STATE_VARIABLE_CallsHO_0_7,
  MR_Word * STATE_VARIABLE_CallsHO_8);

static void MR_CALL 
check_hlds__stratify__stratify_process_procs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word PredId_3,
  MR_Word ArgTypes_4,
  MR_Word ProcTable_5,
  MR_Word STATE_VARIABLE_ProcCalls_0_6,
  MR_Word * STATE_VARIABLE_ProcCalls_7,
  MR_Word STATE_VARIABLE_HOInfo_0_8,
  MR_Word * STATE_VARIABLE_HOInfo_9,
  MR_Word STATE_VARIABLE_CallsHO_0_10,
  MR_Word * STATE_VARIABLE_CallsHO_11);

static void MR_CALL 
check_hlds__stratify__stratify_analyze_goal_7_p_0(
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_Calls_0_93,
  MR_Word * STATE_VARIABLE_Calls_94,
  MR_Word STATE_VARIABLE_HasAT_0_95,
  MR_Word * STATE_VARIABLE_HasAT_96,
  MR_Word STATE_VARIABLE_CallsHO_0_97,
  MR_Word * STATE_VARIABLE_CallsHO_98);

static void MR_CALL 
check_hlds__stratify__stratify_analyze_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3,
  MR_Word STATE_VARIABLE_HasAT_0_4,
  MR_Word * STATE_VARIABLE_HasAT_5,
  MR_Word STATE_VARIABLE_CallsHO_0_6,
  MR_Word * STATE_VARIABLE_CallsHO_7);

static void MR_CALL 
check_hlds__stratify__stratify_analyze_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3,
  MR_Word STATE_VARIABLE_HasAT_0_4,
  MR_Word * STATE_VARIABLE_HasAT_5,
  MR_Word STATE_VARIABLE_CallsHO_0_6,
  MR_Word * STATE_VARIABLE_CallsHO_7);

static void MR_CALL 
check_hlds__stratify__stratify_get_called_procs_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_Calls_0_86,
  MR_Word * STATE_VARIABLE_Calls_87);

static void MR_CALL 
check_hlds__stratify__stratify_get_called_procs_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3);

static void MR_CALL 
check_hlds__stratify__stratify_get_called_procs_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3);

static void MR_CALL 
check_hlds__stratify__higherorder_in_out1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_HOIn_0_4,
  MR_Word * STATE_VARIABLE_HOIn_5,
  MR_Word STATE_VARIABLE_HOOut_0_6,
  MR_Word * STATE_VARIABLE_HOOut_7);

static void MR_CALL 
check_hlds__stratify__add_new_arcs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CallsHO_2,
  MR_Word STATE_VARIABLE_DepGraph_0_3,
  MR_Word * STATE_VARIABLE_DepGraph_4);

static void MR_CALL 
check_hlds__stratify__add_new_arcs2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CallerKey_2,
  MR_Word STATE_VARIABLE_DepGraph_0_3,
  MR_Word * STATE_VARIABLE_DepGraph_4);

static void MR_CALL 
check_hlds__stratify__iterate_solution_5_p_0(
  MR_Word PredProcs_6,
  MR_Word ProcCalls_7,
  MR_Word CallsHO_8,
  MR_Word STATE_VARIABLE_HOInfo_0_11,
  MR_Word * STATE_VARIABLE_HOInfo_12);

static void MR_CALL 
check_hlds__stratify__stratify_tc_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcCalls_2,
  MR_Word CallsHO_3,
  MR_Word STATE_VARIABLE_HOInfo_0_4,
  MR_Word * STATE_VARIABLE_HOInfo_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7);

static void MR_CALL 
check_hlds__stratify__merge_calls_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word P_2,
  MR_Word CallsHO_3,
  MR_Word DoingFirstOrder_4,
  MR_Word STATE_VARIABLE_HOInfo_0_5,
  MR_Word * STATE_VARIABLE_HOInfo_6,
  MR_Word STATE_VARIABLE_Changed_0_7,
  MR_Word * STATE_VARIABLE_Changed_8);

static void MR_CALL 
check_hlds__stratify__higher_order_check_sccs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__stratify__higher_order_check_scc_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(
  MR_Word Goal_10,
  MR_Word Negated_11,
  MR_Word ThisPredProcId_13,
  MR_Word HighOrderLoops_14,
  MR_Word ErrorOrWarning_15,
  MR_Word ModuleInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_80,
  MR_Word * STATE_VARIABLE_Specs_81);

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Negated_2,
  MR_Word ThisPredProcId_4,
  MR_Word HighOrderLoops_5,
  MR_Word ErrorOrWarning_6,
  MR_Word ModuleInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Negated_2,
  MR_Word ThisPredProcId_4,
  MR_Word HighOrderLoops_5,
  MR_Word ErrorOrWarning_6,
  MR_Word ModuleInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__stratify__stratify_get_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * PredId_3);

static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MustBeStratifiedPreds_2,
  MR_Word Warn_3,
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__stratify__first_order_check_scc_loop_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ErrorOrWarning_3,
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__stratify__first_order_check_goal_8_p_0(
  MR_Word Goal_9,
  MR_Word Negated_10,
  MR_Word WholeScc_11,
  MR_Word ThisPredProcId_12,
  MR_Word ErrorOrWarning_13,
  MR_Word ModuleInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67);

static void MR_CALL 
check_hlds__stratify__first_order_check_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Negated_2,
  MR_Word WholeScc_3,
  MR_Word ThisPredProcId_4,
  MR_Word ErrorOrWarning_5,
  MR_Word ModuleInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__stratify__first_order_check_goals_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Negated_2,
  MR_Word WholeScc_3,
  MR_Word ThisPredProcId_4,
  MR_Word ErrorOrWarning_5,
  MR_Word ModuleInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8);

static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word Context_9,
  MR_String Message_10,
  MR_Word ErrorOrWarning_11);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__stratify_scalar_common_1[18][2];

static /* final */ const MR_Box check_hlds__stratify_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__stratify_scalar_common_3[2][1];

static /* final */ const MR_Box check_hlds__stratify_scalar_common_4[1][5];




static /* final */ const MR_Box check_hlds__stratify_scalar_common_1[18][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__stratify_scalar_common_1[1]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__stratify_scalar_common_1[3]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 12U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "bottom-up evaluation of the predicate/function."))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__stratify_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__stratify_scalar_common_1[5])))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "itself in a negated context. This can cause problems for"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__stratify_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__stratify_scalar_common_1[9])))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "of the given predicate/function that allows it to call"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__stratify_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__stratify_scalar_common_1[11])))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    ((MR_Box) ((MR_String) "A non-stratified loop is a loop in the call graph"))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &check_hlds__stratify_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(1, &check_hlds__stratify_scalar_common_1[13])))
  },
  /* row  16 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(1, &check_hlds__stratify_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_mkword(2, &check_hlds__stratify_scalar_common_1[16]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box check_hlds__stratify_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&check_hlds__stratify_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&check_hlds__stratify_scalar_common_4[0])),
    ((MR_Box) (check_hlds__stratify__first_order_check_sccs_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__stratify_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 178U) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box check_hlds__stratify_scalar_common_4[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_TypeInfo_Struct1 check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_call_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__stratify____Unify____call_map_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____call_map_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "call_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0 = {
  (MR_String) "does_not_calls_higher_order",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1 = {
  (MR_String) "calls_higher_order",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_ordinal_ordered_calls_higher_order_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0
};

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_calls_higher_order_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____calls_higher_order_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____calls_higher_order_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "calls_higher_order",
  { check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0 },
  { check_hlds__stratify__check_hlds__stratify__enum_ordinal_ordered_calls_higher_order_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0,

};

static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_error_or_warning_0_0 = {
  (MR_String) "is_error",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_error_or_warning_0_1[1] = { (MR_PseudoTypeInfo) (&libs__options__libs__options__type_ctor_info_option_0) };

static const MR_DuArgLocn check_hlds__stratify__check_hlds__stratify__field_locns_error_or_warning_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 10
  }
};

static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_error_or_warning_0_1 = {
  (MR_String) "is_warning",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__stratify__check_hlds__stratify__field_types_error_or_warning_0_1,
  NULL,
  check_hlds__stratify__check_hlds__stratify__field_locns_error_or_warning_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_error_or_warning_0_0[1] = { &check_hlds__stratify__check_hlds__stratify__du_functor_desc_error_or_warning_0_0 };

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_error_or_warning_0_1[1] = { &check_hlds__stratify__check_hlds__stratify__du_functor_desc_error_or_warning_0_1 };

static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_error_or_warning_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__stratify__check_hlds__stratify__du_stag_ordered_error_or_warning_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__stratify__check_hlds__stratify__du_stag_ordered_error_or_warning_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_error_or_warning_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_error_or_warning_0_0,
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_error_or_warning_0_1
};

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_error_or_warning_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__stratify____Unify____error_or_warning_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____error_or_warning_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "error_or_warning",
  { check_hlds__stratify__check_hlds__stratify__du_name_ordered_error_or_warning_0 },
  { check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_error_or_warning_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0,

};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0 = {
  (MR_String) "ho_in",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1 = {
  (MR_String) "ho_out",
  INT32_C(1)
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2 = {
  (MR_String) "ho_in_out",
  INT32_C(2)
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3 = {
  (MR_String) "ho_none",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_ordinal_ordered_ho_in_out_0[4] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0[4] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1
};

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____ho_in_out_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____ho_in_out_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "ho_in_out",
  { check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0 },
  { check_hlds__stratify__check_hlds__stratify__enum_ordinal_ordered_ho_in_out_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0,

};

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__stratify____Unify____ho_map_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____ho_map_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "ho_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0)
};

static const MR_DuArgLocn check_hlds__stratify__check_hlds__stratify__field_locns_strat_ho_info_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 2
  }
};

static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0 = {
  (MR_String) "strat_ho_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0,
  NULL,
  check_hlds__stratify__check_hlds__stratify__field_locns_strat_ho_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0[1] = { &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0 };

static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0[1] = { &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0 };

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__stratify____Unify____strat_ho_info_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____strat_ho_info_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "strat_ho_info",
  { check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0 },
  { check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0,

};

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0(
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
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 3);
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__stratify_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 > Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 3);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__stratify_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__stratify_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__stratify_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
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
check_hlds__stratify____Unify____ho_in_out_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
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
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1023);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1023);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 > Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1023);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1023);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
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
check_hlds__stratify____Unify____calls_higher_order_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__stratify_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__stratify_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
check_hlds__stratify__gen_conservative_graph_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word STATE_VARIABLE_DepGraph_0_13,
  MR_Word * STATE_VARIABLE_DepGraph_14,
  MR_Word * HOInfo_7)
{
  MR_Word ProcCalls_8;
  MR_Word HOInfo0_9;
  MR_Word CallsHO_10;
  MR_Word Callers_11;
  MR_Word HOInfoL_12;
  MR_Word PredIds_18;
  MR_Word STATE_VARIABLE_ProcCalls_1_19;
  MR_Word STATE_VARIABLE_HOInfo_1_20;
  MR_Word STATE_VARIABLE_CallsHO_1_21;

  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify_scalar_common_1[0]), &STATE_VARIABLE_ProcCalls_1_19);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0), &STATE_VARIABLE_HOInfo_1_20);
  mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &STATE_VARIABLE_CallsHO_1_21);
  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_5, &PredIds_18);
  check_hlds__stratify__expand_predids_8_p_0(PredIds_18, ModuleInfo_5, STATE_VARIABLE_ProcCalls_1_19, &ProcCalls_8, STATE_VARIABLE_HOInfo_1_20, &HOInfo0_9, STATE_VARIABLE_CallsHO_1_21, &CallsHO_10);
  mercury__map__keys_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify_scalar_common_1[0]), ProcCalls_8, &Callers_11);
  check_hlds__stratify__iterate_solution_5_p_0(Callers_11, ProcCalls_8, CallsHO_10, HOInfo0_9, HOInfo_7);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0), *HOInfo_7, &HOInfoL_12);
  check_hlds__stratify__add_new_arcs_4_p_0(HOInfoL_12, CallsHO_10, STATE_VARIABLE_DepGraph_0_13, STATE_VARIABLE_DepGraph_14);
}

static void MR_CALL 
check_hlds__stratify__expand_predids_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word STATE_VARIABLE_ProcCalls_0_3,
  MR_Word * STATE_VARIABLE_ProcCalls_4,
  MR_Word STATE_VARIABLE_HOInfo_0_5,
  MR_Word * STATE_VARIABLE_HOInfo_6,
  MR_Word STATE_VARIABLE_CallsHO_0_7,
  MR_Word * STATE_VARIABLE_CallsHO_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CallsHO_8 = STATE_VARIABLE_CallsHO_0_7;
      *STATE_VARIABLE_HOInfo_6 = STATE_VARIABLE_HOInfo_0_5;
      *STATE_VARIABLE_ProcCalls_4 = STATE_VARIABLE_ProcCalls_0_3;
    }
    else
    {
      MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PredIds_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word PredInfo_25;
      MR_Word Procs_26;
      MR_Word ProcTable_27;
      MR_Word ArgTypes_28;
      MR_Word STATE_VARIABLE_ProcCalls_1_35;
      MR_Word STATE_VARIABLE_HOInfo_1_36;
      MR_Word STATE_VARIABLE_CallsHO_1_37;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcCalls_0_3;
      MR_Word next_value_of_STATE_VARIABLE_HOInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_CallsHO_0_7;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_2, PredId_19, &PredInfo_25);
      Procs_26 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_25);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_25, &ProcTable_27);
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_25, &ArgTypes_28);
      check_hlds__stratify__stratify_process_procs_11_p_0(Procs_26, ModuleInfo_2, PredId_19, ArgTypes_28, ProcTable_27, STATE_VARIABLE_ProcCalls_0_3, &STATE_VARIABLE_ProcCalls_1_35, STATE_VARIABLE_HOInfo_0_5, &STATE_VARIABLE_HOInfo_1_36, STATE_VARIABLE_CallsHO_0_7, &STATE_VARIABLE_CallsHO_1_37);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredIds_20;
      next_value_of_STATE_VARIABLE_ProcCalls_0_3 = STATE_VARIABLE_ProcCalls_1_35;
      next_value_of_STATE_VARIABLE_HOInfo_0_5 = STATE_VARIABLE_HOInfo_1_36;
      next_value_of_STATE_VARIABLE_CallsHO_0_7 = STATE_VARIABLE_CallsHO_1_37;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcCalls_0_3 = next_value_of_STATE_VARIABLE_ProcCalls_0_3;
      STATE_VARIABLE_HOInfo_0_5 = next_value_of_STATE_VARIABLE_HOInfo_0_5;
      STATE_VARIABLE_CallsHO_0_7 = next_value_of_STATE_VARIABLE_CallsHO_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__stratify_process_procs_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ModuleInfo_2,
  MR_Word PredId_3,
  MR_Word ArgTypes_4,
  MR_Word ProcTable_5,
  MR_Word STATE_VARIABLE_ProcCalls_0_6,
  MR_Word * STATE_VARIABLE_ProcCalls_7,
  MR_Word STATE_VARIABLE_HOInfo_0_8,
  MR_Word * STATE_VARIABLE_HOInfo_9,
  MR_Word STATE_VARIABLE_CallsHO_0_10,
  MR_Word * STATE_VARIABLE_CallsHO_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CallsHO_11 = STATE_VARIABLE_CallsHO_0_10;
      *STATE_VARIABLE_HOInfo_9 = STATE_VARIABLE_HOInfo_0_8;
      *STATE_VARIABLE_ProcCalls_7 = STATE_VARIABLE_ProcCalls_0_6;
    }
    else
    {
      MR_Integer ProcId_25 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ProcIds_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_ProcCalls_1_40;
      MR_Word STATE_VARIABLE_HOInfo_1_41;
      MR_Word STATE_VARIABLE_CallsHO_1_42;
      MR_Word ProcInfo_43;
      MR_Word ArgModes_44;
      MR_Word Goal_45;
      MR_Word PredProcId_46;
      MR_Word Calls_47;
      MR_Word HaveAT_48;
      MR_Word CallsHigherOrder_49;
      MR_Word HOInOut_50;
      MR_Word Var_51;
      MR_Word Calls0_57;
      MR_Word TakenAddrs0_58;
      MR_Word HOIn_61;
      MR_Word HOOut_62;
      MR_Box conv0_ProcInfo_43;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ProcCalls_0_6;
      MR_Word next_value_of_STATE_VARIABLE_HOInfo_0_8;
      MR_Word next_value_of_STATE_VARIABLE_CallsHO_0_10;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_5, ((MR_Box) (ProcId_25)), &conv0_ProcInfo_43);
      ProcInfo_43 = ((MR_Word) (conv0_ProcInfo_43));
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_43, &ArgModes_44);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_43, &Goal_45);
      {
        PredProcId_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PredProcId_46, 0) = ((MR_Box) (PredId_3));
        MR_hl_field(0, PredProcId_46, 1) = ((MR_Box) (ProcId_25));
      }
      mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &Calls0_57);
      mercury__set__init_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &TakenAddrs0_58);
      check_hlds__stratify__stratify_analyze_goal_7_p_0(Goal_45, Calls0_57, &Calls_47, TakenAddrs0_58, &HaveAT_48, (MR_Integer) 0, &CallsHigherOrder_49);
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify_scalar_common_1[0]), ((MR_Box) (PredProcId_46)), ((MR_Box) (Calls_47)), STATE_VARIABLE_ProcCalls_0_6, &STATE_VARIABLE_ProcCalls_1_40);
      check_hlds__stratify__higherorder_in_out1_7_p_0(ArgTypes_4, ArgModes_44, ModuleInfo_2, (MR_Integer) 0, &HOIn_61, (MR_Integer) 0, &HOOut_62);
      switch (HOIn_61) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (HOOut_62) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HOInOut_50 = (MR_Integer) 3;
              break;
            case (MR_Integer) 1:
              HOInOut_50 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (HOOut_62) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              HOInOut_50 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              HOInOut_50 = (MR_Integer) 2;
              break;
          }
          break;
      }
      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (HaveAT_48));
        MR_hl_field(0, Var_51, 1) = (MR_Box) ((MR_Unsigned) (HOInOut_50));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0), ((MR_Box) (PredProcId_46)), ((MR_Box) (Var_51)), STATE_VARIABLE_HOInfo_0_8, &STATE_VARIABLE_HOInfo_1_41);
      switch (CallsHigherOrder_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_46)), STATE_VARIABLE_CallsHO_0_10, &STATE_VARIABLE_CallsHO_1_42);
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_CallsHO_1_42 = STATE_VARIABLE_CallsHO_0_10;
          break;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ProcIds_26;
      next_value_of_STATE_VARIABLE_ProcCalls_0_6 = STATE_VARIABLE_ProcCalls_1_40;
      next_value_of_STATE_VARIABLE_HOInfo_0_8 = STATE_VARIABLE_HOInfo_1_41;
      next_value_of_STATE_VARIABLE_CallsHO_0_10 = STATE_VARIABLE_CallsHO_1_42;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ProcCalls_0_6 = next_value_of_STATE_VARIABLE_ProcCalls_0_6;
      STATE_VARIABLE_HOInfo_0_8 = next_value_of_STATE_VARIABLE_HOInfo_0_8;
      STATE_VARIABLE_CallsHO_0_10 = next_value_of_STATE_VARIABLE_CallsHO_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__stratify_analyze_goal_7_p_0(
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_Calls_0_93,
  MR_Word * STATE_VARIABLE_Calls_94,
  MR_Word STATE_VARIABLE_HasAT_0_95,
  MR_Word * STATE_VARIABLE_HasAT_96,
  MR_Word STATE_VARIABLE_CallsHO_0_97,
  MR_Word * STATE_VARIABLE_CallsHO_98)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_12 = ((MR_Word) ((MR_hl_field(0, Goal_8, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_77 = (MR_Word) ((MR_Word) (GoalExpr_12));
          MR_Word next_value_of_Goal_8 = SubGoal_77;

          // direct tailcall eliminated
          ;
          Goal_8 = next_value_of_Goal_8;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_15 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, 1))));
          MR_Word Unification_17 = ((MR_Word) ((MR_hl_field(1, GoalExpr_12, 3))));
          MR_Word STATE_VARIABLE_HasAT_1_100;

          switch (MR_tag((MR_Word) RHS_15)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_HasAT_1_100 = STATE_VARIABLE_HasAT_0_95;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_HasAT_1_100 = STATE_VARIABLE_HasAT_0_95;
              break;
            case (MR_Integer) 2:
              {
                MR_Word LambdaGoal_25 = ((MR_Word) ((MR_hl_field(2, RHS_15, 4))));
                MR_Word CalledProcs_26;

                check_hlds__stratify__stratify_get_called_procs_3_p_0(LambdaGoal_25, (MR_Word) ((MR_Unsigned) 0U), &CalledProcs_26);
                mercury__set__insert_list_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CalledProcs_26, STATE_VARIABLE_HasAT_0_95, &STATE_VARIABLE_HasAT_1_100);
              }
              break;
          }
          switch (MR_tag((MR_Word) Unification_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ConsId_32 = ((MR_Word) ((MR_hl_field(0, Unification_17, 1))));
                MR_Word ShroudedPredProcId_38;

                succeeded = ((MR_tag((MR_Word) ConsId_32)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ShroudedPredProcId_38 = (MR_Word) (MR_body((MR_Word) (ConsId_32), (MR_Integer) 2));
                  {
                    MR_Word PredProcId_39;

                    PredProcId_39 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_38);
                    mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (PredProcId_39)), STATE_VARIABLE_HasAT_1_100, STATE_VARIABLE_HasAT_96);
                  }
                }
                else
                  *STATE_VARIABLE_HasAT_96 = STATE_VARIABLE_HasAT_1_100;
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_HasAT_96 = STATE_VARIABLE_HasAT_1_100;
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_HasAT_96 = STATE_VARIABLE_HasAT_1_100;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_17, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_HasAT_96 = STATE_VARIABLE_HasAT_1_100;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.stratify.stratify_analyze_goal\'/7", (MR_String) "complicated_unify");
                    return;
                  }
                  break;
              }
              break;
          }
          *STATE_VARIABLE_Calls_94 = STATE_VARIABLE_Calls_0_93;
          *STATE_VARIABLE_CallsHO_98 = STATE_VARIABLE_CallsHO_0_97;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CPred_53 = ((MR_Word) ((MR_hl_field(2, GoalExpr_12, 0))));
          MR_Integer CProc_54 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_12, 1))));
          MR_Word Var_104;

          {
            Var_104 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_104, 0) = ((MR_Box) (CPred_53));
            MR_hl_field(0, Var_104, 1) = ((MR_Box) (CProc_54));
          }
          mercury__set__insert_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Var_104)), STATE_VARIABLE_Calls_0_93, STATE_VARIABLE_Calls_94);
          *STATE_VARIABLE_HasAT_96 = STATE_VARIABLE_HasAT_0_95;
          *STATE_VARIABLE_CallsHO_98 = STATE_VARIABLE_CallsHO_0_97;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_12, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_CallsHO_98 = (MR_Integer) 1;
              *STATE_VARIABLE_Calls_94 = STATE_VARIABLE_Calls_0_93;
              *STATE_VARIABLE_HasAT_96 = STATE_VARIABLE_HasAT_0_95;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_Calls_94 = STATE_VARIABLE_Calls_0_93;
              *STATE_VARIABLE_HasAT_96 = STATE_VARIABLE_HasAT_0_95;
              *STATE_VARIABLE_CallsHO_98 = STATE_VARIABLE_CallsHO_0_97;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 2))));

              check_hlds__stratify__stratify_analyze_goals_7_p_0(Goals_71, STATE_VARIABLE_Calls_0_93, STATE_VARIABLE_Calls_94, STATE_VARIABLE_HasAT_0_95, STATE_VARIABLE_HasAT_96, STATE_VARIABLE_CallsHO_0_97, STATE_VARIABLE_CallsHO_98);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_150 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 1))));

              check_hlds__stratify__stratify_analyze_goals_7_p_0(Goals_150, STATE_VARIABLE_Calls_0_93, STATE_VARIABLE_Calls_94, STATE_VARIABLE_HasAT_0_95, STATE_VARIABLE_HasAT_96, STATE_VARIABLE_CallsHO_0_97, STATE_VARIABLE_CallsHO_98);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_73 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 3))));

              check_hlds__stratify__stratify_analyze_cases_7_p_0(Cases_73, STATE_VARIABLE_Calls_0_93, STATE_VARIABLE_Calls_94, STATE_VARIABLE_HasAT_0_95, STATE_VARIABLE_HasAT_96, STATE_VARIABLE_CallsHO_0_97, STATE_VARIABLE_CallsHO_98);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 1))));
              MR_Word SubGoal_145 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 2))));
              MR_Word FGT_80;

              succeeded = ((((MR_tag((MR_Word) Reason_78)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_78, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_80 = ((MR_Unsigned) ((MR_hl_field(3, Reason_78, 2))) & (MR_Integer) 3);
                switch (FGT_80) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
              {
                *STATE_VARIABLE_CallsHO_98 = STATE_VARIABLE_CallsHO_0_97;
                *STATE_VARIABLE_HasAT_96 = STATE_VARIABLE_HasAT_0_95;
                *STATE_VARIABLE_Calls_94 = STATE_VARIABLE_Calls_0_93;
              }
              else
              {
                MR_Word next_value_of_Goal_8 = SubGoal_145;

                // direct tailcall eliminated
                ;
                Goal_8 = next_value_of_Goal_8;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 2))));
              MR_Word Then_75 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 3))));
              MR_Word Else_76 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 4))));
              MR_Word STATE_VARIABLE_Calls_4_113;
              MR_Word STATE_VARIABLE_HasAT_5_114;
              MR_Word STATE_VARIABLE_CallsHO_4_115;
              MR_Word STATE_VARIABLE_Calls_5_116;
              MR_Word STATE_VARIABLE_HasAT_6_117;
              MR_Word STATE_VARIABLE_CallsHO_5_118;
              MR_Word next_value_of_Goal_8;
              MR_Word next_value_of_STATE_VARIABLE_Calls_0_93;
              MR_Word next_value_of_STATE_VARIABLE_HasAT_0_95;
              MR_Word next_value_of_STATE_VARIABLE_CallsHO_0_97;

              check_hlds__stratify__stratify_analyze_goal_7_p_0(Cond_74, STATE_VARIABLE_Calls_0_93, &STATE_VARIABLE_Calls_4_113, STATE_VARIABLE_HasAT_0_95, &STATE_VARIABLE_HasAT_5_114, STATE_VARIABLE_CallsHO_0_97, &STATE_VARIABLE_CallsHO_4_115);
              check_hlds__stratify__stratify_analyze_goal_7_p_0(Then_75, STATE_VARIABLE_Calls_4_113, &STATE_VARIABLE_Calls_5_116, STATE_VARIABLE_HasAT_5_114, &STATE_VARIABLE_HasAT_6_117, STATE_VARIABLE_CallsHO_4_115, &STATE_VARIABLE_CallsHO_5_118);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_8 = Else_76;
              next_value_of_STATE_VARIABLE_Calls_0_93 = STATE_VARIABLE_Calls_5_116;
              next_value_of_STATE_VARIABLE_HasAT_0_95 = STATE_VARIABLE_HasAT_6_117;
              next_value_of_STATE_VARIABLE_CallsHO_0_97 = STATE_VARIABLE_CallsHO_5_118;
              Goal_8 = next_value_of_Goal_8;
              STATE_VARIABLE_Calls_0_93 = next_value_of_STATE_VARIABLE_Calls_0_93;
              STATE_VARIABLE_HasAT_0_95 = next_value_of_STATE_VARIABLE_HasAT_0_95;
              STATE_VARIABLE_CallsHO_0_97 = next_value_of_STATE_VARIABLE_CallsHO_0_97;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_81 = ((MR_Word) ((MR_hl_field(3, GoalExpr_12, 1))));

              switch (MR_tag((MR_Word) ShortHand_81)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.stratify.stratify_analyze_goal\'/7", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_86 = ((MR_Word) ((MR_hl_field(1, ShortHand_81, 4))));
                    MR_Word OrElseGoals_87 = ((MR_Word) ((MR_hl_field(1, ShortHand_81, 5))));
                    MR_Word STATE_VARIABLE_Calls_9_128;
                    MR_Word STATE_VARIABLE_HasAT_10_129;
                    MR_Word STATE_VARIABLE_CallsHO_9_130;

                    check_hlds__stratify__stratify_analyze_goal_7_p_0(MainGoal_86, STATE_VARIABLE_Calls_0_93, &STATE_VARIABLE_Calls_9_128, STATE_VARIABLE_HasAT_0_95, &STATE_VARIABLE_HasAT_10_129, STATE_VARIABLE_CallsHO_0_97, &STATE_VARIABLE_CallsHO_9_130);
                    check_hlds__stratify__stratify_analyze_goals_7_p_0(OrElseGoals_87, STATE_VARIABLE_Calls_9_128, STATE_VARIABLE_Calls_94, STATE_VARIABLE_HasAT_10_129, STATE_VARIABLE_HasAT_96, STATE_VARIABLE_CallsHO_9_130, STATE_VARIABLE_CallsHO_98);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_146 = ((MR_Word) ((MR_hl_field(2, ShortHand_81, 2))));
                    MR_Word next_value_of_Goal_8 = SubGoal_146;

                    // direct tailcall eliminated
                    ;
                    Goal_8 = next_value_of_Goal_8;
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
check_hlds__stratify__stratify_analyze_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3,
  MR_Word STATE_VARIABLE_HasAT_0_4,
  MR_Word * STATE_VARIABLE_HasAT_5,
  MR_Word STATE_VARIABLE_CallsHO_0_6,
  MR_Word * STATE_VARIABLE_CallsHO_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CallsHO_7 = STATE_VARIABLE_CallsHO_0_6;
      *STATE_VARIABLE_HasAT_5 = STATE_VARIABLE_HasAT_0_4;
      *STATE_VARIABLE_Calls_3 = STATE_VARIABLE_Calls_0_2;
    }
    else
    {
      MR_Word Case_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Goal_24 = ((MR_Word) ((MR_hl_field(0, Case_17, 2))));
      MR_Word STATE_VARIABLE_Calls_1_31;
      MR_Word STATE_VARIABLE_HasAT_1_32;
      MR_Word STATE_VARIABLE_CallsHO_1_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Calls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_HasAT_0_4;
      MR_Word next_value_of_STATE_VARIABLE_CallsHO_0_6;

      check_hlds__stratify__stratify_analyze_goal_7_p_0(Goal_24, STATE_VARIABLE_Calls_0_2, &STATE_VARIABLE_Calls_1_31, STATE_VARIABLE_HasAT_0_4, &STATE_VARIABLE_HasAT_1_32, STATE_VARIABLE_CallsHO_0_6, &STATE_VARIABLE_CallsHO_1_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_18;
      next_value_of_STATE_VARIABLE_Calls_0_2 = STATE_VARIABLE_Calls_1_31;
      next_value_of_STATE_VARIABLE_HasAT_0_4 = STATE_VARIABLE_HasAT_1_32;
      next_value_of_STATE_VARIABLE_CallsHO_0_6 = STATE_VARIABLE_CallsHO_1_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Calls_0_2 = next_value_of_STATE_VARIABLE_Calls_0_2;
      STATE_VARIABLE_HasAT_0_4 = next_value_of_STATE_VARIABLE_HasAT_0_4;
      STATE_VARIABLE_CallsHO_0_6 = next_value_of_STATE_VARIABLE_CallsHO_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__stratify_analyze_goals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3,
  MR_Word STATE_VARIABLE_HasAT_0_4,
  MR_Word * STATE_VARIABLE_HasAT_5,
  MR_Word STATE_VARIABLE_CallsHO_0_6,
  MR_Word * STATE_VARIABLE_CallsHO_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_CallsHO_7 = STATE_VARIABLE_CallsHO_0_6;
      *STATE_VARIABLE_HasAT_5 = STATE_VARIABLE_HasAT_0_4;
      *STATE_VARIABLE_Calls_3 = STATE_VARIABLE_Calls_0_2;
    }
    else
    {
      MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Calls_1_28;
      MR_Word STATE_VARIABLE_HasAT_1_29;
      MR_Word STATE_VARIABLE_CallsHO_1_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Calls_0_2;
      MR_Word next_value_of_STATE_VARIABLE_HasAT_0_4;
      MR_Word next_value_of_STATE_VARIABLE_CallsHO_0_6;

      check_hlds__stratify__stratify_analyze_goal_7_p_0(Goal_17, STATE_VARIABLE_Calls_0_2, &STATE_VARIABLE_Calls_1_28, STATE_VARIABLE_HasAT_0_4, &STATE_VARIABLE_HasAT_1_29, STATE_VARIABLE_CallsHO_0_6, &STATE_VARIABLE_CallsHO_1_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_18;
      next_value_of_STATE_VARIABLE_Calls_0_2 = STATE_VARIABLE_Calls_1_28;
      next_value_of_STATE_VARIABLE_HasAT_0_4 = STATE_VARIABLE_HasAT_1_29;
      next_value_of_STATE_VARIABLE_CallsHO_0_6 = STATE_VARIABLE_CallsHO_1_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Calls_0_2 = next_value_of_STATE_VARIABLE_Calls_0_2;
      STATE_VARIABLE_HasAT_0_4 = next_value_of_STATE_VARIABLE_HasAT_0_4;
      STATE_VARIABLE_CallsHO_0_6 = next_value_of_STATE_VARIABLE_CallsHO_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__stratify_get_called_procs_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_Calls_0_86,
  MR_Word * STATE_VARIABLE_Calls_87)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_6 = ((MR_Word) ((MR_hl_field(0, Goal_4, 0))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_70 = (MR_Word) ((MR_Word) (GoalExpr_6));
          MR_Word next_value_of_Goal_4 = SubGoal_70;

          // direct tailcall eliminated
          ;
          Goal_4 = next_value_of_Goal_4;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RHS_9 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 1))));
          MR_Word Unification_11 = ((MR_Word) ((MR_hl_field(1, GoalExpr_6, 3))));
          MR_Word STATE_VARIABLE_Calls_1_88;

          switch (MR_tag((MR_Word) RHS_9)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              STATE_VARIABLE_Calls_1_88 = STATE_VARIABLE_Calls_0_86;
              break;
            case (MR_Integer) 1:
              STATE_VARIABLE_Calls_1_88 = STATE_VARIABLE_Calls_0_86;
              break;
            case (MR_Integer) 2:
              {
                MR_Word LambdaGoal_19 = ((MR_Word) ((MR_hl_field(2, RHS_9, 4))));

                check_hlds__stratify__stratify_get_called_procs_3_p_0(LambdaGoal_19, STATE_VARIABLE_Calls_0_86, &STATE_VARIABLE_Calls_1_88);
              }
              break;
          }
          switch (MR_tag((MR_Word) Unification_11)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ConsId_25 = ((MR_Word) ((MR_hl_field(0, Unification_11, 1))));
                MR_Word ShroudedPredProcId_31;

                succeeded = ((MR_tag((MR_Word) ConsId_25)) == (MR_Integer) 2);
                if (succeeded)
                {
                  ShroudedPredProcId_31 = (MR_Word) (MR_body((MR_Word) (ConsId_25), (MR_Integer) 2));
                  {
                    MR_Word PredProcId_32;

                    PredProcId_32 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_31);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Calls_87 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (PredProcId_32));
                      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Calls_1_88));
                    }
                  }
                }
                else
                  *STATE_VARIABLE_Calls_87 = STATE_VARIABLE_Calls_1_88;
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Calls_87 = STATE_VARIABLE_Calls_1_88;
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Calls_87 = STATE_VARIABLE_Calls_1_88;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, Unification_11, 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Calls_87 = STATE_VARIABLE_Calls_1_88;
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.stratify.stratify_get_called_procs\'/3", (MR_String) "complicated_unify");
                    return;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word CPred_46 = ((MR_Word) ((MR_hl_field(2, GoalExpr_6, 0))));
          MR_Integer CProc_47 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_6, 1))));
          MR_Word Var_93;

          {
            Var_93 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_93, 0) = ((MR_Box) (CPred_46));
            MR_hl_field(0, Var_93, 1) = ((MR_Box) (CProc_47));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_Calls_87 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Var_93));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Calls_0_86));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_6, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Calls_87 = STATE_VARIABLE_Calls_0_86;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Calls_87 = STATE_VARIABLE_Calls_0_86;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_64 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));

              check_hlds__stratify__stratify_get_called_procs_goals_3_p_0(Goals_64, STATE_VARIABLE_Calls_0_86, STATE_VARIABLE_Calls_87);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_114 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              check_hlds__stratify__stratify_get_called_procs_goals_3_p_0(Goals_114, STATE_VARIABLE_Calls_0_86, STATE_VARIABLE_Calls_87);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_66 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));

              check_hlds__stratify__stratify_get_called_procs_cases_3_p_0(Cases_66, STATE_VARIABLE_Calls_0_86, STATE_VARIABLE_Calls_87);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));
              MR_Word SubGoal_112 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word FGT_73;

              succeeded = ((((MR_tag((MR_Word) Reason_71)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_71, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_73 = ((MR_Unsigned) ((MR_hl_field(3, Reason_71, 2))) & (MR_Integer) 3);
                switch (FGT_73) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                *STATE_VARIABLE_Calls_87 = STATE_VARIABLE_Calls_0_86;
              else
              {
                MR_Word next_value_of_Goal_4 = SubGoal_112;

                // direct tailcall eliminated
                ;
                Goal_4 = next_value_of_Goal_4;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_67 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 2))));
              MR_Word Then_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 3))));
              MR_Word Else_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 4))));
              MR_Word STATE_VARIABLE_Calls_6_96;
              MR_Word STATE_VARIABLE_Calls_7_97;
              MR_Word next_value_of_Goal_4;
              MR_Word next_value_of_STATE_VARIABLE_Calls_0_86;

              check_hlds__stratify__stratify_get_called_procs_3_p_0(Cond_67, STATE_VARIABLE_Calls_0_86, &STATE_VARIABLE_Calls_6_96);
              check_hlds__stratify__stratify_get_called_procs_3_p_0(Then_68, STATE_VARIABLE_Calls_6_96, &STATE_VARIABLE_Calls_7_97);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_4 = Else_69;
              next_value_of_STATE_VARIABLE_Calls_0_86 = STATE_VARIABLE_Calls_7_97;
              Goal_4 = next_value_of_Goal_4;
              STATE_VARIABLE_Calls_0_86 = next_value_of_STATE_VARIABLE_Calls_0_86;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_74 = ((MR_Word) ((MR_hl_field(3, GoalExpr_6, 1))));

              switch (MR_tag((MR_Word) ShortHand_74)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.stratify.stratify_get_called_procs\'/3", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_79 = ((MR_Word) ((MR_hl_field(1, ShortHand_74, 4))));
                    MR_Word OrElseGoals_80 = ((MR_Word) ((MR_hl_field(1, ShortHand_74, 5))));
                    MR_Word STATE_VARIABLE_Calls_11_101;

                    check_hlds__stratify__stratify_get_called_procs_3_p_0(MainGoal_79, STATE_VARIABLE_Calls_0_86, &STATE_VARIABLE_Calls_11_101);
                    check_hlds__stratify__stratify_get_called_procs_goals_3_p_0(OrElseGoals_80, STATE_VARIABLE_Calls_11_101, STATE_VARIABLE_Calls_87);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_113 = ((MR_Word) ((MR_hl_field(2, ShortHand_74, 2))));
                    MR_Word next_value_of_Goal_4 = SubGoal_113;

                    // direct tailcall eliminated
                    ;
                    Goal_4 = next_value_of_Goal_4;
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
check_hlds__stratify__stratify_get_called_procs_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Calls_3 = STATE_VARIABLE_Calls_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cases_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Goal_12 = ((MR_Word) ((MR_hl_field(0, Case_7, 2))));
      MR_Word STATE_VARIABLE_Calls_1_15;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Calls_0_2;

      check_hlds__stratify__stratify_get_called_procs_3_p_0(Goal_12, STATE_VARIABLE_Calls_0_2, &STATE_VARIABLE_Calls_1_15);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cases_8;
      next_value_of_STATE_VARIABLE_Calls_0_2 = STATE_VARIABLE_Calls_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Calls_0_2 = next_value_of_STATE_VARIABLE_Calls_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__stratify_get_called_procs_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Calls_3 = STATE_VARIABLE_Calls_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Calls_1_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Calls_0_2;

      check_hlds__stratify__stratify_get_called_procs_3_p_0(Goal_7, STATE_VARIABLE_Calls_0_2, &STATE_VARIABLE_Calls_1_12);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_8;
      next_value_of_STATE_VARIABLE_Calls_0_2 = STATE_VARIABLE_Calls_1_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Calls_0_2 = next_value_of_STATE_VARIABLE_Calls_0_2;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__higherorder_in_out1_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_HOIn_0_4,
  MR_Word * STATE_VARIABLE_HOIn_5,
  MR_Word STATE_VARIABLE_HOOut_0_6,
  MR_Word * STATE_VARIABLE_HOOut_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_HOOut_7 = STATE_VARIABLE_HOOut_0_6;
        *STATE_VARIABLE_HOIn_5 = STATE_VARIABLE_HOIn_0_4;
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.stratify.higherorder_in_out1\'/7", (MR_String) "mismatched lists");
          return;
        }
    else
    {
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_51 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.stratify.higherorder_in_out1\'/7", (MR_String) "mismatched lists");
          return;
        }
      else
      {
        MR_Word Mode_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word Modes_40 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word STATE_VARIABLE_HOIn_1_48;
        MR_Word STATE_VARIABLE_HOOut_1_49;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_HOIn_0_4;
        MR_Word next_value_of_STATE_VARIABLE_HOOut_0_6;

        succeeded = parse_tree__prog_type_test__type_is_higher_order_1_p_0(Var_51);
        if (succeeded)
        {
          succeeded = hlds__mode_test__mode_is_input_2_p_0(HeadVar__3_3, Mode_39);
          if (succeeded)
          {
            STATE_VARIABLE_HOIn_1_48 = (MR_Integer) 1;
            STATE_VARIABLE_HOOut_1_49 = STATE_VARIABLE_HOOut_0_6;
          }
          else
          {
            succeeded = hlds__mode_test__mode_is_output_2_p_0(HeadVar__3_3, Mode_39);
            if (succeeded)
              STATE_VARIABLE_HOOut_1_49 = (MR_Integer) 1;
            else
              STATE_VARIABLE_HOOut_1_49 = STATE_VARIABLE_HOOut_0_6;
            STATE_VARIABLE_HOIn_1_48 = STATE_VARIABLE_HOIn_0_4;
          }
        }
        else
        {
          STATE_VARIABLE_HOOut_1_49 = STATE_VARIABLE_HOOut_0_6;
          STATE_VARIABLE_HOIn_1_48 = STATE_VARIABLE_HOIn_0_4;
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_50;
        next_value_of_HeadVar__2_2 = Modes_40;
        next_value_of_STATE_VARIABLE_HOIn_0_4 = STATE_VARIABLE_HOIn_1_48;
        next_value_of_STATE_VARIABLE_HOOut_0_6 = STATE_VARIABLE_HOOut_1_49;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_HOIn_0_4 = next_value_of_STATE_VARIABLE_HOIn_0_4;
        STATE_VARIABLE_HOOut_0_6 = next_value_of_STATE_VARIABLE_HOOut_0_6;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__add_new_arcs_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CallsHO_2,
  MR_Word STATE_VARIABLE_DepGraph_0_3,
  MR_Word * STATE_VARIABLE_DepGraph_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DepGraph_4 = STATE_VARIABLE_DepGraph_0_3;
    else
    {
      MR_Word Caller_9;
      MR_Word CallerInfo_10;
      MR_Word Cs_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word STATE_VARIABLE_DepGraph_1_21;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DepGraph_0_3;

      Caller_9 = ((MR_Word) ((MR_hl_field(0, Var_20, 0))));
      CallerInfo_10 = ((MR_Word) ((MR_hl_field(0, Var_20, 1))));
      succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (Caller_9)), CallsHO_2);
      if (succeeded)
      {
        MR_Word PossibleCallees0_14 = ((MR_Word) ((MR_hl_field(0, CallerInfo_10, 0))));
        MR_Word PossibleCallees_16;
        MR_Word CallerKey_17;

        mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PossibleCallees0_14, &PossibleCallees_16);
        mercury__digraph__lookup_key_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), STATE_VARIABLE_DepGraph_0_3, ((MR_Box) (Caller_9)), &CallerKey_17);
        check_hlds__stratify__add_new_arcs2_4_p_0(PossibleCallees_16, CallerKey_17, STATE_VARIABLE_DepGraph_0_3, &STATE_VARIABLE_DepGraph_1_21);
      }
      else
        STATE_VARIABLE_DepGraph_1_21 = STATE_VARIABLE_DepGraph_0_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cs_11;
      next_value_of_STATE_VARIABLE_DepGraph_0_3 = STATE_VARIABLE_DepGraph_1_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_DepGraph_0_3 = next_value_of_STATE_VARIABLE_DepGraph_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__add_new_arcs2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word CallerKey_2,
  MR_Word STATE_VARIABLE_DepGraph_0_3,
  MR_Word * STATE_VARIABLE_DepGraph_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_DepGraph_4 = STATE_VARIABLE_DepGraph_0_3;
    else
    {
      MR_Word Callee_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word CalleeKey_13;
      MR_Word STATE_VARIABLE_DepGraph_1_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_DepGraph_0_3;

      mercury__digraph__lookup_key_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), STATE_VARIABLE_DepGraph_0_3, ((MR_Box) (Callee_9)), &CalleeKey_13);
      mercury__digraph__add_edge_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CallerKey_2, CalleeKey_13, STATE_VARIABLE_DepGraph_0_3, &STATE_VARIABLE_DepGraph_1_16);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cs_10;
      next_value_of_STATE_VARIABLE_DepGraph_0_3 = STATE_VARIABLE_DepGraph_1_16;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_DepGraph_0_3 = next_value_of_STATE_VARIABLE_DepGraph_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__iterate_solution_5_p_0(
  MR_Word PredProcs_6,
  MR_Word ProcCalls_7,
  MR_Word CallsHO_8,
  MR_Word STATE_VARIABLE_HOInfo_0_11,
  MR_Word * STATE_VARIABLE_HOInfo_12)
{
  while (MR_TRUE)
  {
    MR_Word Changed_10;
    MR_Word STATE_VARIABLE_HOInfo_1_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    check_hlds__stratify__stratify_tc_7_p_0(PredProcs_6, ProcCalls_7, CallsHO_8, STATE_VARIABLE_HOInfo_0_11, &STATE_VARIABLE_HOInfo_1_13, (MR_Integer) 0, &Changed_10);
    switch (Changed_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HOInfo_12 = STATE_VARIABLE_HOInfo_1_13;
        break;
      case (MR_Integer) 1:
        {
          MR_Word next_value_of_STATE_VARIABLE_HOInfo_0_11 = STATE_VARIABLE_HOInfo_1_13;

          // direct tailcall eliminated
          ;
          STATE_VARIABLE_HOInfo_0_11 = next_value_of_STATE_VARIABLE_HOInfo_0_11;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__stratify_tc_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word ProcCalls_2,
  MR_Word CallsHO_3,
  MR_Word STATE_VARIABLE_HOInfo_0_4,
  MR_Word * STATE_VARIABLE_HOInfo_5,
  MR_Word STATE_VARIABLE_Changed_0_6,
  MR_Word * STATE_VARIABLE_Changed_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Changed_7 = STATE_VARIABLE_Changed_0_6;
      *STATE_VARIABLE_HOInfo_5 = STATE_VARIABLE_HOInfo_0_4;
    }
    else
    {
      MR_Word PredProcId_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PredProcIds_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word PCalls_22;
      MR_Word PCallsL_23;
      MR_Word STATE_VARIABLE_HOInfo_1_29;
      MR_Word STATE_VARIABLE_Changed_1_30;
      MR_Box conv0_PCalls_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HOInfo_0_4;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_6;

      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify_scalar_common_1[0]), ProcCalls_2, ((MR_Box) (PredProcId_16)), &conv0_PCalls_22);
      PCalls_22 = ((MR_Word) (conv0_PCalls_22));
      mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PCalls_22, &PCallsL_23);
      check_hlds__stratify__merge_calls_8_p_0(PCallsL_23, PredProcId_16, CallsHO_3, (MR_Integer) 1, STATE_VARIABLE_HOInfo_0_4, &STATE_VARIABLE_HOInfo_1_29, STATE_VARIABLE_Changed_0_6, &STATE_VARIABLE_Changed_1_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredProcIds_17;
      next_value_of_STATE_VARIABLE_HOInfo_0_4 = STATE_VARIABLE_HOInfo_1_29;
      next_value_of_STATE_VARIABLE_Changed_0_6 = STATE_VARIABLE_Changed_1_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HOInfo_0_4 = next_value_of_STATE_VARIABLE_HOInfo_0_4;
      STATE_VARIABLE_Changed_0_6 = next_value_of_STATE_VARIABLE_Changed_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__merge_calls_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word P_2,
  MR_Word CallsHO_3,
  MR_Word DoingFirstOrder_4,
  MR_Word STATE_VARIABLE_HOInfo_0_5,
  MR_Word * STATE_VARIABLE_HOInfo_6,
  MR_Word STATE_VARIABLE_Changed_0_7,
  MR_Word * STATE_VARIABLE_Changed_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Changed_8 = STATE_VARIABLE_Changed_0_7;
      *STATE_VARIABLE_HOInfo_6 = STATE_VARIABLE_HOInfo_0_5;
    }
    else
    {
      MR_Word C_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Cs_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_HOInfo_3_52;
      MR_Word STATE_VARIABLE_Changed_4_53;
      MR_Word CInfo_25;
      MR_Box conv0_CInfo_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_HOInfo_0_5;
      MR_Word next_value_of_STATE_VARIABLE_Changed_0_7;

      succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0), STATE_VARIABLE_HOInfo_0_5, ((MR_Box) (C_18)), &conv0_CInfo_25);
      if (succeeded)
      {
        CInfo_25 = ((MR_Word) (conv0_CInfo_25));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        MR_Word PInfo_26;
        MR_Word CHaveAT0_27;
        MR_Word CHOInOut_28;
        MR_Word PHaveAT0_29;
        MR_Word PHOInOut_30;
        MR_Word STATE_VARIABLE_Changed_1_44;
        MR_Word STATE_VARIABLE_HOInfo_2_50;
        MR_Box conv1_PInfo_26;

        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0), STATE_VARIABLE_HOInfo_0_5, ((MR_Box) (P_2)), &conv1_PInfo_26);
        PInfo_26 = ((MR_Word) (conv1_PInfo_26));
        CHaveAT0_27 = ((MR_Word) ((MR_hl_field(0, CInfo_25, 0))));
        CHOInOut_28 = ((MR_Unsigned) ((MR_hl_field(0, CInfo_25, 1))) & (MR_Integer) 3);
        PHaveAT0_29 = ((MR_Word) ((MR_hl_field(0, PInfo_26, 0))));
        PHOInOut_30 = ((MR_Unsigned) ((MR_hl_field(0, PInfo_26, 1))) & (MR_Integer) 3);
        succeeded = (CHOInOut_28 == (MR_Integer) 3);
        if (succeeded)
        {
          STATE_VARIABLE_Changed_1_44 = STATE_VARIABLE_Changed_0_7;
          STATE_VARIABLE_HOInfo_2_50 = STATE_VARIABLE_HOInfo_0_5;
        }
        else
        {
          MR_Word CHaveAT_31;
          MR_Word PHaveAT_32;
          MR_Word NewCInfo_34;
          MR_Word NewPInfo_35;
          MR_Word STATE_VARIABLE_HOInfo_1_49;

          switch (CHOInOut_28) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = mercury__set__subset_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PHaveAT0_29, CHaveAT0_27);
                if (succeeded)
                {
                  CHaveAT_31 = CHaveAT0_27;
                  STATE_VARIABLE_Changed_1_44 = STATE_VARIABLE_Changed_0_7;
                }
                else
                {
                  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PHaveAT0_29, CHaveAT0_27, &CHaveAT_31);
                  STATE_VARIABLE_Changed_1_44 = (MR_Integer) 1;
                }
                PHaveAT_32 = PHaveAT0_29;
              }
              break;
            case (MR_Integer) 2:
              {
                succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__stratify_scalar_common_1[0]), ((MR_Box) (CHaveAT0_27)), ((MR_Box) (PHaveAT0_29)));
                if (succeeded)
                {
                  CHaveAT_31 = CHaveAT0_27;
                  PHaveAT_32 = PHaveAT0_29;
                  STATE_VARIABLE_Changed_1_44 = STATE_VARIABLE_Changed_0_7;
                }
                else
                {
                  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CHaveAT0_27, PHaveAT0_29, &CHaveAT_31);
                  PHaveAT_32 = CHaveAT_31;
                  STATE_VARIABLE_Changed_1_44 = (MR_Integer) 1;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.stratify.merge_calls\'/8", (MR_String) "ho_none");
                return;
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = mercury__set__subset_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CHaveAT0_27, PHaveAT0_29);
                if (succeeded)
                {
                  PHaveAT_32 = PHaveAT0_29;
                  STATE_VARIABLE_Changed_1_44 = STATE_VARIABLE_Changed_0_7;
                }
                else
                {
                  mercury__set__union_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CHaveAT0_27, PHaveAT0_29, &PHaveAT_32);
                  STATE_VARIABLE_Changed_1_44 = (MR_Integer) 1;
                }
                CHaveAT_31 = CHaveAT0_27;
              }
              break;
          }
          {
            NewCInfo_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NewCInfo_34, 0) = ((MR_Box) (CHaveAT_31));
            MR_hl_field(0, NewCInfo_34, 1) = (MR_Box) ((MR_Unsigned) (CHOInOut_28));
          }
          {
            NewPInfo_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, NewPInfo_35, 0) = ((MR_Box) (PHaveAT_32));
            MR_hl_field(0, NewPInfo_35, 1) = (MR_Box) ((MR_Unsigned) (PHOInOut_30));
          }
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0), ((MR_Box) (C_18)), ((MR_Box) (NewCInfo_34)), STATE_VARIABLE_HOInfo_0_5, &STATE_VARIABLE_HOInfo_1_49);
          mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0), ((MR_Box) (P_2)), ((MR_Box) (NewPInfo_35)), STATE_VARIABLE_HOInfo_1_49, &STATE_VARIABLE_HOInfo_2_50);
        }
        succeeded = (DoingFirstOrder_4 == (MR_Integer) 1);
        if (succeeded)
          succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (P_2)), CallsHO_3);
        if (succeeded)
        {
          MR_Word PHOInfo_36;
          MR_Word PossibleCalls_37;
          MR_Word PossibleCallsL_39;
          MR_Box conv2_PHOInfo_36;

          mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0), STATE_VARIABLE_HOInfo_2_50, ((MR_Box) (P_2)), &conv2_PHOInfo_36);
          PHOInfo_36 = ((MR_Word) (conv2_PHOInfo_36));
          PossibleCalls_37 = ((MR_Word) ((MR_hl_field(0, PHOInfo_36, 0))));
          mercury__set__to_sorted_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), PossibleCalls_37, &PossibleCallsL_39);
          check_hlds__stratify__merge_calls_8_p_0(PossibleCallsL_39, P_2, CallsHO_3, (MR_Integer) 0, STATE_VARIABLE_HOInfo_2_50, &STATE_VARIABLE_HOInfo_3_52, STATE_VARIABLE_Changed_1_44, &STATE_VARIABLE_Changed_4_53);
        }
        else
        {
          STATE_VARIABLE_Changed_4_53 = STATE_VARIABLE_Changed_1_44;
          STATE_VARIABLE_HOInfo_3_52 = STATE_VARIABLE_HOInfo_2_50;
        }
      }
      else
      {
        STATE_VARIABLE_Changed_4_53 = STATE_VARIABLE_Changed_0_7;
        STATE_VARIABLE_HOInfo_3_52 = STATE_VARIABLE_HOInfo_0_5;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Cs_19;
      next_value_of_STATE_VARIABLE_HOInfo_0_5 = STATE_VARIABLE_HOInfo_3_52;
      next_value_of_STATE_VARIABLE_Changed_0_7 = STATE_VARIABLE_Changed_4_53;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_HOInfo_0_5 = next_value_of_STATE_VARIABLE_HOInfo_0_5;
      STATE_VARIABLE_Changed_0_7 = next_value_of_STATE_VARIABLE_Changed_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__higher_order_check_sccs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Specs_0_4,
  MR_Word * STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word HeadSCC_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word TailSCCs_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word HeadSCCProcs_16 = ((MR_Word) ((MR_hl_field(0, HeadSCC_11, 0))));
      MR_Word HeadSCCPreds_17 = ((MR_Word) ((MR_hl_field(0, HeadSCC_11, 1))));
      MR_Word STATE_VARIABLE_Specs_1_20;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_4;

      check_hlds__stratify__higher_order_check_scc_6_p_0(HeadSCCProcs_16, HeadSCCPreds_17, HeadVar__2_2, HeadVar__3_3, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_1_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TailSCCs_12;
      next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_1_20;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__higher_order_check_scc_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word PredProcId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Remaining_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(0, PredProcId_13, 0))));
      MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(0, PredProcId_13, 1))));
      MR_Word PredInfo_21;
      MR_Word Globals_22;
      MR_Word Warn_23;
      MR_Word STATE_VARIABLE_Specs_1_38;
      MR_Word HigherOrderInfo_24;
      MR_Word TypeCtorInfo_39_39;
      MR_Word TypeCtorInfo_40_40;
      MR_Box conv0_HigherOrderInfo_24;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      hlds__hlds_module__module_info_pred_info_3_p_0(HeadVar__4_4, PredId_19, &PredInfo_21);
      hlds__hlds_module__module_info_get_globals_2_p_0(HeadVar__4_4, &Globals_22);
      libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 178, &Warn_23);
      succeeded = (Warn_23 == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_39_39 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
        TypeCtorInfo_40_40 = (MR_Word) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0);
        succeeded = mercury__map__search_3_p_0(TypeCtorInfo_39_39, TypeCtorInfo_40_40, HeadVar__3_3, ((MR_Box) (PredProcId_13)), &conv0_HigherOrderInfo_24);
        if (succeeded)
        {
          HigherOrderInfo_24 = ((MR_Word) (conv0_HigherOrderInfo_24));
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word HOCalls_25 = ((MR_Word) ((MR_hl_field(0, HigherOrderInfo_24, 0))));
        MR_Word HOLoops_27;
        MR_Word HighOrderLoops_28;
        MR_Word ProcTable_29;
        MR_Word Proc_30;
        MR_Word Goal_31;
        MR_Box conv1_Proc_30;

        mercury__set__intersect_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), HOCalls_25, HeadVar__2_2, &HOLoops_27);
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), HOLoops_27);
        if (succeeded)
          HighOrderLoops_28 = (MR_Integer) 0;
        else
          HighOrderLoops_28 = (MR_Integer) 1;
        hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &ProcTable_29);
        mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_29, ((MR_Box) (ProcId_20)), &conv1_Proc_30);
        Proc_30 = ((MR_Word) (conv1_Proc_30));
        hlds__hlds_pred__proc_info_get_goal_2_p_0(Proc_30, &Goal_31);
        check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(Goal_31, (MR_Integer) 0, PredProcId_13, HighOrderLoops_28, (MR_Word) (MR_mkword(1, &check_hlds__stratify_scalar_common_3[0])), HeadVar__4_4, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_1_38);
      }
      else
        STATE_VARIABLE_Specs_1_38 = STATE_VARIABLE_Specs_0_5;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Remaining_14;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_1_38;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(
  MR_Word Goal_10,
  MR_Word Negated_11,
  MR_Word ThisPredProcId_13,
  MR_Word HighOrderLoops_14,
  MR_Word ErrorOrWarning_15,
  MR_Word ModuleInfo_16,
  MR_Word STATE_VARIABLE_Specs_0_80,
  MR_Word * STATE_VARIABLE_Specs_81)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_18 = ((MR_Word) ((MR_hl_field(0, Goal_10, 0))));
    MR_Word GoalInfo_19 = ((MR_Word) ((MR_hl_field(0, Goal_10, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_29 = (MR_Word) ((MR_Word) (GoalExpr_18));
          MR_Word next_value_of_Goal_10 = SubGoal_29;

          // direct tailcall eliminated
          ;
          Goal_10 = next_value_of_Goal_10;
          Negated_11 = (MR_Integer) 1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_81 = STATE_VARIABLE_Specs_0_80;
        break;
      case (MR_Integer) 2:
        {
          MR_Word SymName_38 = ((MR_Word) ((MR_hl_field(2, GoalExpr_18, 5))));
          MR_String Var_91;

          succeeded = (HighOrderLoops_14 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_91 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_38);
            succeeded = (strcmp(Var_91, (MR_String) "solutions") == 0);
          }
          if (succeeded)
          {
            MR_Word Context_39;
            MR_Word Spec_41;

            Context_39 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
            Spec_41 = check_hlds__stratify__generate_stratify_error_5_f_0(ModuleInfo_16, ThisPredProcId_13, Context_39, (MR_String) "call to solutions/2 introduces a non-stratified loop.", ErrorOrWarning_15);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_81 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_41));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_80));
            }
          }
          else
            *STATE_VARIABLE_Specs_81 = STATE_VARIABLE_Specs_0_80;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_18, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word GenericCall_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_18, 1))));
              MR_String Msg_51;

              succeeded = (Negated_11 == (MR_Integer) 1);
              if (succeeded)
              {
                succeeded = (HighOrderLoops_14 == (MR_Integer) 1);
                if (succeeded)
                {
                  if (((MR_tag((MR_Word) GenericCall_42)) == (MR_Integer) 1))
                  {
                    Msg_51 = (MR_String) "class method";
                    succeeded = MR_TRUE;
                  }
                  else
                  if (((MR_tag((MR_Word) GenericCall_42)) == (MR_Integer) 0))
                  {
                    Msg_51 = (MR_String) "higher order";
                    succeeded = MR_TRUE;
                  }
                  else
                    succeeded = MR_FALSE;
                }
              }
              if (succeeded)
              {
                MR_Word Context_102;
                MR_String ErrorMsg_103;
                MR_Word Spec_104;

                Context_102 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
                ErrorMsg_103 = mercury__string__f_43_43_2_f_0(Msg_51, (MR_String) " call may introduce a non-stratified loop.");
                Spec_104 = check_hlds__stratify__generate_stratify_error_5_f_0(ModuleInfo_16, ThisPredProcId_13, Context_102, ErrorMsg_103, ErrorOrWarning_15);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_81 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Spec_104));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_80));
                }
              }
              else
                *STATE_VARIABLE_Specs_81 = STATE_VARIABLE_Specs_0_80;
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Specs_81 = STATE_VARIABLE_Specs_0_80;
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr_18, 2))));

              check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(Goals_21, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_0_80, STATE_VARIABLE_Specs_81);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_113 = ((MR_Word) ((MR_hl_field(3, GoalExpr_18, 1))));

              check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(Goals_113, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_0_80, STATE_VARIABLE_Specs_81);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_18, 3))));

              check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(Cases_24, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_0_80, STATE_VARIABLE_Specs_81);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr_18, 1))));
              MR_Word SubGoal_100 = ((MR_Word) ((MR_hl_field(3, GoalExpr_18, 2))));
              MR_Word FGT_32;

              succeeded = ((((MR_tag((MR_Word) Reason_30)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_30, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_32 = ((MR_Unsigned) ((MR_hl_field(3, Reason_30, 2))) & (MR_Integer) 3);
                switch (FGT_32) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                *STATE_VARIABLE_Specs_81 = STATE_VARIABLE_Specs_0_80;
              else
              {
                MR_Word next_value_of_Goal_10 = SubGoal_100;

                // direct tailcall eliminated
                ;
                Goal_10 = next_value_of_Goal_10;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_18, 2))));
              MR_Word Then_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr_18, 3))));
              MR_Word Else_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_18, 4))));
              MR_Word STATE_VARIABLE_Specs_3_85;
              MR_Word STATE_VARIABLE_Specs_4_86;
              MR_Word next_value_of_Goal_10;
              MR_Word next_value_of_STATE_VARIABLE_Specs_0_80;

              check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(Cond_26, (MR_Integer) 1, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_0_80, &STATE_VARIABLE_Specs_3_85);
              check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(Then_27, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_3_85, &STATE_VARIABLE_Specs_4_86);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_10 = Else_28;
              next_value_of_STATE_VARIABLE_Specs_0_80 = STATE_VARIABLE_Specs_4_86;
              Goal_10 = next_value_of_Goal_10;
              STATE_VARIABLE_Specs_0_80 = next_value_of_STATE_VARIABLE_Specs_0_80;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_68 = ((MR_Word) ((MR_hl_field(3, GoalExpr_18, 1))));

              switch (MR_tag((MR_Word) ShortHand_68)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.stratify.higher_order_check_goal\'/9", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_73 = ((MR_Word) ((MR_hl_field(1, ShortHand_68, 4))));
                    MR_Word OrElseGoals_74 = ((MR_Word) ((MR_hl_field(1, ShortHand_68, 5))));
                    MR_Word STATE_VARIABLE_Specs_10_95;

                    check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(MainGoal_73, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_0_80, &STATE_VARIABLE_Specs_10_95);
                    check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(OrElseGoals_74, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_10_95, STATE_VARIABLE_Specs_81);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_112 = ((MR_Word) ((MR_hl_field(2, ShortHand_68, 2))));
                    MR_Word next_value_of_Goal_10 = SubGoal_112;

                    // direct tailcall eliminated
                    ;
                    Goal_10 = next_value_of_Goal_10;
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
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Negated_2,
  MR_Word ThisPredProcId_4,
  MR_Word HighOrderLoops_5,
  MR_Word ErrorOrWarning_6,
  MR_Word ModuleInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    else
    {
      MR_Word Case_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Goal_30 = ((MR_Word) ((MR_hl_field(0, Case_19, 2))));
      MR_Word STATE_VARIABLE_Specs_1_33;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(Goal_30, Negated_2, ThisPredProcId_4, HighOrderLoops_5, ErrorOrWarning_6, ModuleInfo_7, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_1_33);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_20;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_1_33;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Negated_2,
  MR_Word ThisPredProcId_4,
  MR_Word HighOrderLoops_5,
  MR_Word ErrorOrWarning_6,
  MR_Word ModuleInfo_7,
  MR_Word STATE_VARIABLE_Specs_0_8,
  MR_Word * STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    else
    {
      MR_Word Goal_19 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Specs_1_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_8;

      check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(Goal_19, Negated_2, ThisPredProcId_4, HighOrderLoops_5, ErrorOrWarning_6, ModuleInfo_7, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_1_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_20;
      next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_1_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__stratify_get_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * PredId_3)
{
  *PredId_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
}

void MR_CALL 
check_hlds__stratify__check_module_for_stratification_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word * Specs_5)
{
  MR_Word DepInfo_6;
  MR_Word FOSCCs_7;
  MR_Word Globals_8;
  MR_Word Warn_9;
  MR_Word MustBeStratifiedPreds_10;

  hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12, &DepInfo_6);
  FOSCCs_7 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_6);
  hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_12, &Globals_8);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 178, &Warn_9);
  hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(*STATE_VARIABLE_ModuleInfo_12, &MustBeStratifiedPreds_10);
  check_hlds__stratify__first_order_check_sccs_6_p_0(FOSCCs_7, MustBeStratifiedPreds_10, Warn_9, *STATE_VARIABLE_ModuleInfo_12, (MR_Word) ((MR_Unsigned) 0U), Specs_5);
}

static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_PredId_3;

  check_hlds__stratify__stratify_get_pred_id_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_PredId_3);
  *wrapper_arg_2 = ((MR_Box) (conv0_PredId_3));
}

static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word MustBeStratifiedPreds_2,
  MR_Word Warn_3,
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word HeadSCC_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word TailSCCs_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word HeadSCCPreds_19;
      MR_Word MustBeStratifiedPredsInScc_20;
      MR_Word STATE_VARIABLE_Specs_1_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      mercury__set__map_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&check_hlds__stratify_scalar_common_2[2]), HeadSCC_13, &HeadSCCPreds_19);
      mercury__set__intersect_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), HeadSCCPreds_19, MustBeStratifiedPreds_2, &MustBeStratifiedPredsInScc_20);
      succeeded = (Warn_3 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), MustBeStratifiedPredsInScc_20);
      if (succeeded)
      {
        MR_Word Var_31;

        Var_31 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), HeadSCC_13);
        check_hlds__stratify__first_order_check_scc_loop_6_p_0(Var_31, HeadSCC_13, (MR_Word) (MR_mkword(1, &check_hlds__stratify_scalar_common_3[0])), ModuleInfo_4, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_1_25);
      }
      else
        STATE_VARIABLE_Specs_1_25 = STATE_VARIABLE_Specs_0_5;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TailSCCs_14;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_1_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_scc_loop_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word ErrorOrWarning_3,
  MR_Word ModuleInfo_4,
  MR_Word STATE_VARIABLE_Specs_0_5,
  MR_Word * STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word PredProcId_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word PredProcIds_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(0, PredProcId_13, 0))));
      MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(0, PredProcId_13, 1))));
      MR_Word PredInfo_21;
      MR_Word ProcTable_22;
      MR_Word Proc_23;
      MR_Word Goal_24;
      MR_Word STATE_VARIABLE_Specs_1_28;
      MR_Box conv0_Proc_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_5;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_19, &PredInfo_21);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &ProcTable_22);
      mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_22, ((MR_Box) (ProcId_20)), &conv0_Proc_23);
      Proc_23 = ((MR_Word) (conv0_Proc_23));
      hlds__hlds_pred__proc_info_get_goal_2_p_0(Proc_23, &Goal_24);
      check_hlds__stratify__first_order_check_goal_8_p_0(Goal_24, (MR_Integer) 0, HeadVar__2_2, PredProcId_13, ErrorOrWarning_3, ModuleInfo_4, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_1_28);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = PredProcIds_14;
      next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_1_28;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_goal_8_p_0(
  MR_Word Goal_9,
  MR_Word Negated_10,
  MR_Word WholeScc_11,
  MR_Word ThisPredProcId_12,
  MR_Word ErrorOrWarning_13,
  MR_Word ModuleInfo_14,
  MR_Word STATE_VARIABLE_Specs_0_66,
  MR_Word * STATE_VARIABLE_Specs_67)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_16 = ((MR_Word) ((MR_hl_field(0, Goal_9, 0))));
    MR_Word GoalInfo_17 = ((MR_Word) ((MR_hl_field(0, Goal_9, 1))));

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) GoalExpr_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_27 = (MR_Word) ((MR_Word) (GoalExpr_16));
          MR_Word next_value_of_Goal_9 = SubGoal_27;

          // direct tailcall eliminated
          ;
          Goal_9 = next_value_of_Goal_9;
          Negated_10 = (MR_Integer) 1;
          continue;
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
        break;
      case (MR_Integer) 2:
        {
          MR_Word CPred_98 = ((MR_Word) ((MR_hl_field(2, GoalExpr_16, 0))));
          MR_Integer CProc_99 = ((MR_Integer) ((MR_hl_field(2, GoalExpr_16, 1))));
          MR_Word Callee_100;
          MR_Word TypeCtorInfo_89_90;

          {
            Callee_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Callee_100, 0) = ((MR_Box) (CPred_98));
            MR_hl_field(0, Callee_100, 1) = ((MR_Box) (CProc_99));
          }
          succeeded = (Negated_10 == (MR_Integer) 1);
          if (succeeded)
          {
            TypeCtorInfo_89_90 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
            succeeded = mercury__set__member_2_p_0(TypeCtorInfo_89_90, ((MR_Box) (Callee_100)), WholeScc_11);
          }
          if (succeeded)
          {
            MR_Word Context_91;
            MR_Word Spec_93;

            Context_91 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_17);
            Spec_93 = check_hlds__stratify__generate_stratify_error_5_f_0(ModuleInfo_14, ThisPredProcId_12, Context_91, (MR_String) "call introduces a non-stratified loop.", ErrorOrWarning_13);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Specs_67 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Spec_93));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_66));
            }
          }
          else
            *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_16, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
            break;
          case (MR_Integer) 1:
            {
              MR_Word CPred_31 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 2))));
              MR_Integer CProc_32 = ((MR_Integer) ((MR_hl_field(3, GoalExpr_16, 3))));
              MR_Word Callee_42;
              MR_Word TypeCtorInfo_89_89;

              {
                Callee_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Callee_42, 0) = ((MR_Box) (CPred_31));
                MR_hl_field(0, Callee_42, 1) = ((MR_Box) (CProc_32));
              }
              succeeded = (Negated_10 == (MR_Integer) 1);
              if (succeeded)
              {
                TypeCtorInfo_89_89 = (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0);
                succeeded = mercury__set__member_2_p_0(TypeCtorInfo_89_89, ((MR_Box) (Callee_42)), WholeScc_11);
              }
              if (succeeded)
              {
                MR_Word Context_43;
                MR_Word Spec_45;

                Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_17);
                Spec_45 = check_hlds__stratify__generate_stratify_error_5_f_0(ModuleInfo_14, ThisPredProcId_12, Context_43, (MR_String) "call introduces a non-stratified loop.", ErrorOrWarning_13);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_Specs_67 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (Spec_45));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_66));
                }
              }
              else
                *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Goals_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 2))));

              check_hlds__stratify__first_order_check_goals_8_p_0(Goals_19, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals_105 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 1))));

              check_hlds__stratify__first_order_check_goals_8_p_0(Goals_105, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 3))));

              check_hlds__stratify__first_order_check_cases_8_p_0(Cases_22, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 1))));
              MR_Word SubGoal_83 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 2))));
              MR_Word FGT_30;

              succeeded = ((((MR_tag((MR_Word) Reason_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_28, 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_30 = ((MR_Unsigned) ((MR_hl_field(3, Reason_28, 2))) & (MR_Integer) 3);
                switch (FGT_30) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 1:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                }
              }
              if (succeeded)
                *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
              else
              {
                MR_Word next_value_of_Goal_9 = SubGoal_83;

                // direct tailcall eliminated
                ;
                Goal_9 = next_value_of_Goal_9;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 2))));
              MR_Word Then_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 3))));
              MR_Word Else_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 4))));
              MR_Word STATE_VARIABLE_Specs_3_71;
              MR_Word STATE_VARIABLE_Specs_4_72;
              MR_Word next_value_of_Goal_9;
              MR_Word next_value_of_STATE_VARIABLE_Specs_0_66;

              check_hlds__stratify__first_order_check_goal_8_p_0(Cond_24, (MR_Integer) 1, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_3_71);
              check_hlds__stratify__first_order_check_goal_8_p_0(Then_25, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_3_71, &STATE_VARIABLE_Specs_4_72);
              // direct tailcall eliminated
              ;
              next_value_of_Goal_9 = Else_26;
              next_value_of_STATE_VARIABLE_Specs_0_66 = STATE_VARIABLE_Specs_4_72;
              Goal_9 = next_value_of_Goal_9;
              STATE_VARIABLE_Specs_0_66 = next_value_of_STATE_VARIABLE_Specs_0_66;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ShortHand_54 = ((MR_Word) ((MR_hl_field(3, GoalExpr_16, 1))));

              switch (MR_tag((MR_Word) ShortHand_54)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.stratify.first_order_check_goal\'/8", (MR_String) "bi_implication");
                    return;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word MainGoal_59 = ((MR_Word) ((MR_hl_field(1, ShortHand_54, 4))));
                    MR_Word OrElseGoals_60 = ((MR_Word) ((MR_hl_field(1, ShortHand_54, 5))));
                    MR_Word STATE_VARIABLE_Specs_9_78;

                    check_hlds__stratify__first_order_check_goal_8_p_0(MainGoal_59, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_9_78);
                    check_hlds__stratify__first_order_check_goals_8_p_0(OrElseGoals_60, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_9_78, STATE_VARIABLE_Specs_67);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word SubGoal_88 = ((MR_Word) ((MR_hl_field(2, ShortHand_54, 2))));
                    MR_Word next_value_of_Goal_9 = SubGoal_88;

                    // direct tailcall eliminated
                    ;
                    Goal_9 = next_value_of_Goal_9;
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
check_hlds__stratify__first_order_check_cases_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Negated_2,
  MR_Word WholeScc_3,
  MR_Word ThisPredProcId_4,
  MR_Word ErrorOrWarning_5,
  MR_Word ModuleInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    else
    {
      MR_Word Case_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Goal_27 = ((MR_Word) ((MR_hl_field(0, Case_17, 2))));
      MR_Word STATE_VARIABLE_Specs_1_30;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      check_hlds__stratify__first_order_check_goal_8_p_0(Goal_27, Negated_2, WholeScc_3, ThisPredProcId_4, ErrorOrWarning_5, ModuleInfo_6, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_30);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_18;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_30;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_goals_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Negated_2,
  MR_Word WholeScc_3,
  MR_Word ThisPredProcId_4,
  MR_Word ErrorOrWarning_5,
  MR_Word ModuleInfo_6,
  MR_Word STATE_VARIABLE_Specs_0_7,
  MR_Word * STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    else
    {
      MR_Word Goal_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Goals_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_Specs_1_27;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_7;

      check_hlds__stratify__first_order_check_goal_8_p_0(Goal_17, Negated_2, WholeScc_3, ThisPredProcId_4, ErrorOrWarning_5, ModuleInfo_6, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_1_27);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Goals_18;
      next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_1_27;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word Context_9,
  MR_String Message_10,
  MR_Word ErrorOrWarning_11)
{
  MR_Word Spec_12;
  MR_Word ProcColonPieces_13;
  MR_Word Preamble_14;
  MR_Word ErrOrWarnMsg_16;
  MR_Word Severity_17;
  MR_Word MainPieces_18;
  MR_Word Msg_20;
  MR_Word Var_33;
  MR_Word Var_39;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_72;

  ProcColonPieces_13 = hlds__hlds_error_util__describe_one_proc_name_maybe_argmodes_6_f_0(ModuleInfo_7, (MR_Integer) 0, (MR_Word) (MR_mkword(1, &check_hlds__stratify_scalar_common_3[1])), (MR_Integer) 1, (MR_Word) (MR_mkword(1, &check_hlds__stratify_scalar_common_1[2])), PredProcId_8);
  Var_33 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), ProcColonPieces_13, (MR_Word) (MR_mkword(1, &check_hlds__stratify_scalar_common_1[5])));
  Preamble_14 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), (MR_Word) (MR_mkword(1, &check_hlds__stratify_scalar_common_1[4])), Var_33);
  if ((ErrorOrWarning_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    ErrOrWarnMsg_16 = (MR_Word) (MR_mkword(3, &check_hlds__stratify_scalar_common_1[6]));
    Severity_17 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word WarnOption_15 = ((MR_Unsigned) ((MR_hl_field(1, ErrorOrWarning_11, 0))) & (MR_Integer) 1023);

    ErrOrWarnMsg_16 = (MR_Word) (MR_mkword(3, &check_hlds__stratify_scalar_common_1[7]));
    {
      Severity_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Severity_17, 0) = (MR_Box) ((MR_Unsigned) (WarnOption_15));
    }
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (ErrOrWarnMsg_16));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) (Message_10));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_42 = parse_tree__error_spec__color_as_incorrect_1_f_0(Var_43);
  Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_42, (MR_Word) (MR_mkword(1, &check_hlds__stratify_scalar_common_1[5])));
  MainPieces_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Var_39, Var_41);
  Var_65 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_format_piece_0), Preamble_14, MainPieces_18);
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (MR_mkword(1, &check_hlds__stratify_scalar_common_1[17])));
  }
  {
    Msg_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Msg_20, 0) = ((MR_Box) (Context_9));
    MR_hl_field(2, Msg_20, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Msg_20));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Spec_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Spec_12, 0) = ((MR_Box) ((MR_String) "function \140check_hlds.stratify.generate_stratify_error\'/5"));
    MR_hl_field(2, Spec_12, 1) = ((MR_Box) (Severity_17));
    MR_hl_field(2, Spec_12, 2) = ((MR_Box) ((MR_Unsigned) 108U));
    MR_hl_field(2, Spec_12, 3) = ((MR_Box) (Var_72));
  }
  return Spec_12;
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__stratify____Unify____call_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__stratify____Compare____call_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__stratify____Unify____calls_higher_order_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__stratify____Compare____calls_higher_order_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__stratify____Unify____error_or_warning_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__stratify____Compare____error_or_warning_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__stratify____Unify____ho_in_out_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__stratify____Compare____ho_in_out_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__stratify____Unify____ho_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__stratify____Compare____ho_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__stratify____Unify____strat_ho_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__stratify____Compare____strat_ho_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__stratify__init(void)
{
}

void mercury__check_hlds__stratify__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_call_map_0);
  MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_calls_higher_order_0);
  MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_error_or_warning_0);
  MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0);
  MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_map_0);
  MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0);
}

void mercury__check_hlds__stratify__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__stratify__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module check_hlds.stratify.
