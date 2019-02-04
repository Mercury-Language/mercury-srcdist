/*
** Automatically generated from `stratify.m'
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


/* :- module check_hlds.stratify. */
/* :- implementation. */

/*
INIT mercury__check_hlds__stratify__init
ENDINIT
*/

#include "check_hlds.stratify.mih"


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
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_error_util.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1;

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0[2];

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0[2];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0[2];

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1;

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0[2];

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0[2];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0[2];

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2;

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3;

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0[4];

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0[4];

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0[4];

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0;

static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0[2];

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0(
  MR_Word HeadVar__2_1,
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
check_hlds__stratify__stratify_process_proc_11_p_0(
  MR_Integer ProcId_12,
  MR_Word ModuleInfo_13,
  MR_Word PredId_14,
  MR_Word ArgTypes_15,
  MR_Word ProcTable_16,
  MR_Word STATE_VARIABLE_ProcCalls_0_28,
  MR_Word * STATE_VARIABLE_ProcCalls_29,
  MR_Word STATE_VARIABLE_HOInfo_0_30,
  MR_Word * STATE_VARIABLE_HOInfo_31,
  MR_Word STATE_VARIABLE_CallsHO_0_32,
  MR_Word * STATE_VARIABLE_CallsHO_33);

static void MR_CALL 
check_hlds__stratify__stratify_analyze_goal_7_p_0(
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_Calls_0_94,
  MR_Word * STATE_VARIABLE_Calls_95,
  MR_Word STATE_VARIABLE_HasAT_0_96,
  MR_Word * STATE_VARIABLE_HasAT_97,
  MR_Word STATE_VARIABLE_CallsHO_0_98,
  MR_Word * STATE_VARIABLE_CallsHO_99);

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
check_hlds__stratify__get_called_procs_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_Calls_0_87,
  MR_Word * STATE_VARIABLE_Calls_88);

static void MR_CALL 
check_hlds__stratify__get_called_procs_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3);

static void MR_CALL 
check_hlds__stratify__get_called_procs_goals_3_p_0(
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
  MR_Word STATE_VARIABLE_Specs_0_81,
  MR_Word * STATE_VARIABLE_Specs_82);

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
check_hlds__stratify__get_pred_id_2_p_0(
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
  MR_Word PPId_8,
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

static /* final */ const MR_Box check_hlds__stratify_scalar_common_3[1][5];




static /* final */ const MR_Box check_hlds__stratify_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "bottom-up evaluation of the predicate/function."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "itself in a negated context. This can cause problems for"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the given predicate/function that allows it to call"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A non-stratified loop is a loop in the call graph"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[11])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__stratify_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__stratify_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&check_hlds__stratify_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__stratify_scalar_common_3[0])),
    ((MR_Box) (check_hlds__stratify__first_order_check_sccs_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__stratify_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_call_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__stratify____Unify____call_map_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____call_map_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "call_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0 = {
  (MR_String) "does_not_calls_higher_order",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1 = {
  (MR_String) "calls_higher_order",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____calls_higher_order_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____calls_higher_order_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "calls_higher_order",
  {     check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0 },
  {     check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0 = {
  (MR_String) "is_error",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1 = {
  (MR_String) "is_warning",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1
};

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_error_or_warning_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____error_or_warning_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____error_or_warning_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "error_or_warning",
  {     check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0 },
  {     check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0 = {
  (MR_String) "ho_in",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1 = {
  (MR_String) "ho_out",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2 = {
  (MR_String) "ho_in_out",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3 = {
  (MR_String) "ho_none",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0[4] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____ho_in_out_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____ho_in_out_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "ho_in_out",
  {     check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0 },
  {     check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0
};

static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0
  }
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__stratify____Unify____ho_map_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____ho_map_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "ho_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0
};

static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0 = {
  (MR_String) "strat_ho_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0[1] = {
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0
};

static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0
  }
};

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0[1] = {
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0
};

static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__stratify____Unify____strat_ho_info_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____strat_ho_info_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "strat_ho_info",
  {     check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0 },
  {     check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0
};

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        MR_Integer Var_13 = (MR_Integer) ArgX2_6;
        MR_Integer Var_14 = (MR_Integer) ArgY2_7;

        mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_13, Var_14);
      }
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
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
check_hlds__stratify____Unify____ho_in_out_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
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
check_hlds__stratify____Unify____error_or_warning_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
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
check_hlds__stratify____Unify____calls_higher_order_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify__gen_conservative_graph_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word STATE_VARIABLE_DepGraph_0_13,
  MR_Word * STATE_VARIABLE_DepGraph_14,
  MR_Word * HOInfo_7)
{
  {
    MR_Word TypeCtorInfo_16_16;
    MR_Word TypeCtorInfo_19_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word ProcCalls_8;
    MR_Word HOInfo0_9;
    MR_Word CallsHO_10;
    MR_Word Callers_11;
    MR_Word HOInfoL_12;
    MR_Word PredIds_26;
    MR_Word STATE_VARIABLE_ProcCalls_13_27;
    MR_Word STATE_VARIABLE_HOInfo_14_28;
    MR_Word STATE_VARIABLE_CallsHO_15_29;

    mercury__map__init_1_p_0(TypeCtorInfo_19_33, (MR_Word) &check_hlds__stratify_scalar_common_1[0], &STATE_VARIABLE_ProcCalls_13_27);
    mercury__map__init_1_p_0(TypeCtorInfo_19_33, (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0, &STATE_VARIABLE_HOInfo_14_28);
    mercury__set__init_1_p_0(TypeCtorInfo_19_33, &STATE_VARIABLE_CallsHO_15_29);
    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(ModuleInfo_5, &PredIds_26);
    check_hlds__stratify__expand_predids_8_p_0(PredIds_26, ModuleInfo_5, STATE_VARIABLE_ProcCalls_13_27, &ProcCalls_8, STATE_VARIABLE_HOInfo_14_28, &HOInfo0_9, STATE_VARIABLE_CallsHO_15_29, &CallsHO_10);
    TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    mercury__map__keys_2_p_0(TypeCtorInfo_16_16, (MR_Word) &check_hlds__stratify_scalar_common_1[0], ProcCalls_8, &Callers_11);
    check_hlds__stratify__iterate_solution_5_p_0(Callers_11, ProcCalls_8, CallsHO_10, HOInfo0_9, HOInfo_7);
    mercury__map__to_assoc_list_2_p_0(TypeCtorInfo_16_16, (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0, *HOInfo_7, &HOInfoL_12);
    check_hlds__stratify__add_new_arcs_4_p_0(HOInfoL_12, CallsHO_10, STATE_VARIABLE_DepGraph_0_13, STATE_VARIABLE_DepGraph_14);
  }
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_CallsHO_8 = STATE_VARIABLE_CallsHO_0_7;
      *STATE_VARIABLE_HOInfo_6 = STATE_VARIABLE_HOInfo_0_5;
      *STATE_VARIABLE_ProcCalls_4 = STATE_VARIABLE_ProcCalls_0_3;
    }
    else
    {
      MR_Word PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word PredInfo_25;
      MR_Word Procs_26;
      MR_Word ProcTable_27;
      MR_Word ArgTypes_28;
      MR_Word STATE_VARIABLE_ProcCalls_35_35;
      MR_Word STATE_VARIABLE_HOInfo_36_36;
      MR_Word STATE_VARIABLE_CallsHO_37_37;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_2, PredId_19, &PredInfo_25);
      Procs_26 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_25);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_25, &ProcTable_27);
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(PredInfo_25, &ArgTypes_28);
      check_hlds__stratify__stratify_process_procs_11_p_0(Procs_26, ModuleInfo_2, PredId_19, ArgTypes_28, ProcTable_27, STATE_VARIABLE_ProcCalls_0_3, &STATE_VARIABLE_ProcCalls_35_35, STATE_VARIABLE_HOInfo_0_5, &STATE_VARIABLE_HOInfo_36_36, STATE_VARIABLE_CallsHO_0_7, &STATE_VARIABLE_CallsHO_37_37);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = PredIds_20;
        MR_Word next_value_of_STATE_VARIABLE_ProcCalls_0_3 = STATE_VARIABLE_ProcCalls_35_35;
        MR_Word next_value_of_STATE_VARIABLE_HOInfo_0_5 = STATE_VARIABLE_HOInfo_36_36;
        MR_Word next_value_of_STATE_VARIABLE_CallsHO_0_7 = STATE_VARIABLE_CallsHO_37_37;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_ProcCalls_0_3 = next_value_of_STATE_VARIABLE_ProcCalls_0_3;
        STATE_VARIABLE_HOInfo_0_5 = next_value_of_STATE_VARIABLE_HOInfo_0_5;
        STATE_VARIABLE_CallsHO_0_7 = next_value_of_STATE_VARIABLE_CallsHO_0_7;
      }
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_CallsHO_11 = STATE_VARIABLE_CallsHO_0_10;
      *STATE_VARIABLE_HOInfo_9 = STATE_VARIABLE_HOInfo_0_8;
      *STATE_VARIABLE_ProcCalls_7 = STATE_VARIABLE_ProcCalls_0_6;
    }
    else
    {
      MR_Integer ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ProcIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_ProcCalls_40_40;
      MR_Word STATE_VARIABLE_HOInfo_41_41;
      MR_Word STATE_VARIABLE_CallsHO_42_42;

      check_hlds__stratify__stratify_process_proc_11_p_0(ProcId_25, ModuleInfo_2, PredId_3, ArgTypes_4, ProcTable_5, STATE_VARIABLE_ProcCalls_0_6, &STATE_VARIABLE_ProcCalls_40_40, STATE_VARIABLE_HOInfo_0_8, &STATE_VARIABLE_HOInfo_41_41, STATE_VARIABLE_CallsHO_0_10, &STATE_VARIABLE_CallsHO_42_42);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = ProcIds_26;
        MR_Word next_value_of_STATE_VARIABLE_ProcCalls_0_6 = STATE_VARIABLE_ProcCalls_40_40;
        MR_Word next_value_of_STATE_VARIABLE_HOInfo_0_8 = STATE_VARIABLE_HOInfo_41_41;
        MR_Word next_value_of_STATE_VARIABLE_CallsHO_0_10 = STATE_VARIABLE_CallsHO_42_42;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_ProcCalls_0_6 = next_value_of_STATE_VARIABLE_ProcCalls_0_6;
        STATE_VARIABLE_HOInfo_0_8 = next_value_of_STATE_VARIABLE_HOInfo_0_8;
        STATE_VARIABLE_CallsHO_0_10 = next_value_of_STATE_VARIABLE_CallsHO_0_10;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__stratify_process_proc_11_p_0(
  MR_Integer ProcId_12,
  MR_Word ModuleInfo_13,
  MR_Word PredId_14,
  MR_Word ArgTypes_15,
  MR_Word ProcTable_16,
  MR_Word STATE_VARIABLE_ProcCalls_0_28,
  MR_Word * STATE_VARIABLE_ProcCalls_29,
  MR_Word STATE_VARIABLE_HOInfo_0_30,
  MR_Word * STATE_VARIABLE_HOInfo_31,
  MR_Word STATE_VARIABLE_CallsHO_0_32,
  MR_Word * STATE_VARIABLE_CallsHO_33)
{
  {
    MR_Word TypeCtorInfo_40_40;
    MR_Word TypeCtorInfo_12_50;
    MR_Word ProcInfo_20;
    MR_Word ArgModes_21;
    MR_Word Goal_22;
    MR_Word PredProcId_23;
    MR_Word Calls_24;
    MR_Word HaveAT_25;
    MR_Word CallsHigherOrder_26;
    MR_Word HOInOut_27;
    MR_Word Var_35;
    MR_Word Calls0_47;
    MR_Word TakenAddrs0_48;
    MR_Word HOIn_55;
    MR_Word HOOut_56;
    MR_Box conv0_ProcInfo_20;

    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcTable_16, ProcId_12, &conv0_ProcInfo_20);
    ProcInfo_20 = ((MR_Word) conv0_ProcInfo_20);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(ProcInfo_20, &ArgModes_21);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_20, &Goal_22);
    {
      PredProcId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_23, 0) = ((MR_Box) (PredId_14));
      MR_hl_field(MR_mktag(0), PredProcId_23, 1) = ((MR_Box) (ProcId_12));
    }
    TypeCtorInfo_12_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    mercury__set__init_1_p_0(TypeCtorInfo_12_50, &Calls0_47);
    mercury__set__init_1_p_0(TypeCtorInfo_12_50, &TakenAddrs0_48);
    check_hlds__stratify__stratify_analyze_goal_7_p_0(Goal_22, Calls0_47, &Calls_24, TakenAddrs0_48, &HaveAT_25, (MR_Integer) 0, &CallsHigherOrder_26);
    TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    mercury__map__det_insert_4_p_0(TypeCtorInfo_40_40, (MR_Word) &check_hlds__stratify_scalar_common_1[0], ((MR_Box) (PredProcId_23)), ((MR_Box) (Calls_24)), STATE_VARIABLE_ProcCalls_0_28, STATE_VARIABLE_ProcCalls_29);
    check_hlds__stratify__higherorder_in_out1_7_p_0(ArgTypes_15, ArgModes_21, ModuleInfo_13, (MR_Integer) 0, &HOIn_55, (MR_Integer) 0, &HOOut_56);
    switch (HOIn_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (HOOut_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HOInOut_27 = (MR_Integer) 3;
            break;
          case (MR_Integer) 1:
            HOInOut_27 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (HOOut_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HOInOut_27 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HOInOut_27 = (MR_Integer) 2;
            break;
        }
        break;
    }
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (HaveAT_25));
      MR_hl_field(MR_mktag(0), Var_35, 1) = ((MR_Box) (HOInOut_27));
    }
    mercury__map__det_insert_4_p_0(TypeCtorInfo_40_40, (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0, ((MR_Box) (PredProcId_23)), ((MR_Box) (Var_35)), STATE_VARIABLE_HOInfo_0_30, STATE_VARIABLE_HOInfo_31);
    switch (CallsHigherOrder_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        mercury__set__insert_3_p_0(TypeCtorInfo_40_40, ((MR_Box) (PredProcId_23)), STATE_VARIABLE_CallsHO_0_32, STATE_VARIABLE_CallsHO_33);
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_CallsHO_33 = STATE_VARIABLE_CallsHO_0_32;
        break;
    }
  }
}

static void MR_CALL 
check_hlds__stratify__stratify_analyze_goal_7_p_0(
  MR_Word Goal_8,
  MR_Word STATE_VARIABLE_Calls_0_94,
  MR_Word * STATE_VARIABLE_Calls_95,
  MR_Word STATE_VARIABLE_HasAT_0_96,
  MR_Word * STATE_VARIABLE_HasAT_97,
  MR_Word STATE_VARIABLE_CallsHO_0_98,
  MR_Word * STATE_VARIABLE_CallsHO_99)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;
      MR_Word GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 0)));
      MR_Word _GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_8, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_78 = (MR_Word) MR_body(((MR_Word) GoalExpr_12), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word next_value_of_Goal_8 = SubGoal_78;

              Goal_8 = next_value_of_Goal_8;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 1)));
            MR_Word Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 3)));
            MR_Word STATE_VARIABLE_HasAT_137_137;
            MR_Word _Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 0)));
            MR_Word _Mode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 2)));
            MR_Word _Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_12, (MR_Integer) 4)));

            switch (MR_tag((MR_Word) RHS_15)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_HasAT_137_137 = STATE_VARIABLE_HasAT_0_96;
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_HasAT_137_137 = STATE_VARIABLE_HasAT_0_96;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word LambdaGoal_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_15, (MR_Integer) 6)));
                  MR_Word CalledProcs_28;
                  MR_Word _Purity_19 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_15, (MR_Integer) 0)))) & (MR_Integer) 3);
                  MR_Word _Groundness_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word _PredOrFunc_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word _NonLocals_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_15, (MR_Integer) 2)));
                  MR_Word _Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_15, (MR_Integer) 3)));
                  MR_Word _Modes_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_15, (MR_Integer) 4)));
                  MR_Word _Determinism_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_15, (MR_Integer) 5)));

                  check_hlds__stratify__get_called_procs_3_p_0(LambdaGoal_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &CalledProcs_28);
                  mercury__set__insert_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, CalledProcs_28, STATE_VARIABLE_HasAT_0_96, &STATE_VARIABLE_HasAT_137_137);
                }
                break;
            }
            switch (MR_tag((MR_Word) Unification_17)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 1)));
                  MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 0)));
                  MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 2)));
                  MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 3)));
                  MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 4)));
                  MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 5)));
                  MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_17, (MR_Integer) 6)));
                  MR_Word ShroudedPredProcId_40;

                  succeeded = ((((MR_tag((MR_Word) ConsId_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_34, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ShroudedPredProcId_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_34, (MR_Integer) 1)));
                    {
                      MR_Word PredProcId_42;

                      PredProcId_42 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_40);
                      mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (PredProcId_42)), STATE_VARIABLE_HasAT_137_137, STATE_VARIABLE_HasAT_97);
                    }
                  }
                  else
                    *STATE_VARIABLE_HasAT_97 = STATE_VARIABLE_HasAT_137_137;
                }
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_HasAT_97 = STATE_VARIABLE_HasAT_137_137;
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_HasAT_97 = STATE_VARIABLE_HasAT_137_137;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_17, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_HasAT_97 = STATE_VARIABLE_HasAT_137_137;
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.stratify_analyze_goal\'/7", (MR_String) "complicated_unify");
                        return;
                      }
                    }
                    break;
                }
                break;
            }
            *STATE_VARIABLE_Calls_95 = STATE_VARIABLE_Calls_0_94;
            *STATE_VARIABLE_CallsHO_99 = STATE_VARIABLE_CallsHO_0_98;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CPred_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 0)));
            MR_Integer CProc_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 1)));
            MR_Word Var_134;
            MR_Word _Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 2)));
            MR_Word _Builtin_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 3)));
            MR_Word _UC_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 4)));
            MR_Word _Sym_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_12, (MR_Integer) 5)));

            {
              Var_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_134, 0) = ((MR_Box) (CPred_56));
              MR_hl_field(MR_mktag(0), Var_134, 1) = ((MR_Box) (CProc_57));
            }
            mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (Var_134)), STATE_VARIABLE_Calls_0_94, STATE_VARIABLE_Calls_95);
            *STATE_VARIABLE_HasAT_97 = STATE_VARIABLE_HasAT_0_96;
            *STATE_VARIABLE_CallsHO_99 = STATE_VARIABLE_CallsHO_0_98;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *STATE_VARIABLE_CallsHO_99 = (MR_Integer) 1;
                *STATE_VARIABLE_Calls_95 = STATE_VARIABLE_Calls_0_94;
                *STATE_VARIABLE_HasAT_97 = STATE_VARIABLE_HasAT_0_96;
              }
              break;
            case (MR_Integer) 1:
              {
                *STATE_VARIABLE_Calls_95 = STATE_VARIABLE_Calls_0_94;
                *STATE_VARIABLE_HasAT_97 = STATE_VARIABLE_HasAT_0_96;
                *STATE_VARIABLE_CallsHO_99 = STATE_VARIABLE_CallsHO_0_98;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word _ConjType_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));

                check_hlds__stratify__stratify_analyze_goals_7_p_0(Goals_72, STATE_VARIABLE_Calls_0_94, STATE_VARIABLE_Calls_95, STATE_VARIABLE_HasAT_0_96, STATE_VARIABLE_HasAT_97, STATE_VARIABLE_CallsHO_0_98, STATE_VARIABLE_CallsHO_99);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));

                check_hlds__stratify__stratify_analyze_goals_7_p_0(Goals_159, STATE_VARIABLE_Calls_0_94, STATE_VARIABLE_Calls_95, STATE_VARIABLE_HasAT_0_96, STATE_VARIABLE_HasAT_97, STATE_VARIABLE_CallsHO_0_98, STATE_VARIABLE_CallsHO_99);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3)));
                MR_Word _Fail_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word _Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));

                check_hlds__stratify__stratify_analyze_cases_7_p_0(Cases_74, STATE_VARIABLE_Calls_0_94, STATE_VARIABLE_Calls_95, STATE_VARIABLE_HasAT_0_96, STATE_VARIABLE_HasAT_97, STATE_VARIABLE_CallsHO_0_98, STATE_VARIABLE_CallsHO_99);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word SubGoal_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word FGT_81;
                MR_Word Var_80;

                succeeded = ((((MR_tag((MR_Word) Reason_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_79, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_79, (MR_Integer) 1)));
                  FGT_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_79, (MR_Integer) 2)));
                  switch (FGT_81) {
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
                  *STATE_VARIABLE_CallsHO_99 = STATE_VARIABLE_CallsHO_0_98;
                  *STATE_VARIABLE_HasAT_97 = STATE_VARIABLE_HasAT_0_96;
                  *STATE_VARIABLE_Calls_95 = STATE_VARIABLE_Calls_0_94;
                }
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word next_value_of_Goal_8 = SubGoal_152;

                    Goal_8 = next_value_of_Goal_8;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word Then_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3)));
                MR_Word Else_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 4)));
                MR_Word STATE_VARIABLE_Calls_118_118;
                MR_Word STATE_VARIABLE_HasAT_119_119;
                MR_Word STATE_VARIABLE_CallsHO_120_120;
                MR_Word STATE_VARIABLE_Calls_121_121;
                MR_Word STATE_VARIABLE_HasAT_122_122;
                MR_Word STATE_VARIABLE_CallsHO_123_123;
                MR_Word _Vars_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));

                check_hlds__stratify__stratify_analyze_goal_7_p_0(Cond_75, STATE_VARIABLE_Calls_0_94, &STATE_VARIABLE_Calls_118_118, STATE_VARIABLE_HasAT_0_96, &STATE_VARIABLE_HasAT_119_119, STATE_VARIABLE_CallsHO_0_98, &STATE_VARIABLE_CallsHO_120_120);
                check_hlds__stratify__stratify_analyze_goal_7_p_0(Then_76, STATE_VARIABLE_Calls_118_118, &STATE_VARIABLE_Calls_121_121, STATE_VARIABLE_HasAT_119_119, &STATE_VARIABLE_HasAT_122_122, STATE_VARIABLE_CallsHO_120_120, &STATE_VARIABLE_CallsHO_123_123);
                /* direct tailcall eliminated */
                {
                  MR_Word next_value_of_Goal_8 = Else_77;
                  MR_Word next_value_of_STATE_VARIABLE_Calls_0_94 = STATE_VARIABLE_Calls_121_121;
                  MR_Word next_value_of_STATE_VARIABLE_HasAT_0_96 = STATE_VARIABLE_HasAT_122_122;
                  MR_Word next_value_of_STATE_VARIABLE_CallsHO_0_98 = STATE_VARIABLE_CallsHO_123_123;

                  Goal_8 = next_value_of_Goal_8;
                  STATE_VARIABLE_Calls_0_94 = next_value_of_STATE_VARIABLE_Calls_0_94;
                  STATE_VARIABLE_HasAT_0_96 = next_value_of_STATE_VARIABLE_HasAT_0_96;
                  STATE_VARIABLE_CallsHO_0_98 = next_value_of_STATE_VARIABLE_CallsHO_0_98;
                }
                continue;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ShortHand_82)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.stratify_analyze_goal\'/7", (MR_String) "bi_implication");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_82, (MR_Integer) 4)));
                      MR_Word OrElseGoals_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_82, (MR_Integer) 5)));
                      MR_Word STATE_VARIABLE_Calls_106_106;
                      MR_Word STATE_VARIABLE_HasAT_107_107;
                      MR_Word STATE_VARIABLE_CallsHO_108_108;
                      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_82, (MR_Integer) 0)));
                      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_82, (MR_Integer) 1)));
                      MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_82, (MR_Integer) 2)));
                      MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_82, (MR_Integer) 3)));
                      MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_82, (MR_Integer) 6)));

                      check_hlds__stratify__stratify_analyze_goal_7_p_0(MainGoal_87, STATE_VARIABLE_Calls_0_94, &STATE_VARIABLE_Calls_106_106, STATE_VARIABLE_HasAT_0_96, &STATE_VARIABLE_HasAT_107_107, STATE_VARIABLE_CallsHO_0_98, &STATE_VARIABLE_CallsHO_108_108);
                      check_hlds__stratify__stratify_analyze_goals_7_p_0(OrElseGoals_88, STATE_VARIABLE_Calls_106_106, STATE_VARIABLE_Calls_95, STATE_VARIABLE_HasAT_107_107, STATE_VARIABLE_HasAT_97, STATE_VARIABLE_CallsHO_108_108, STATE_VARIABLE_CallsHO_99);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_153 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_82, (MR_Integer) 2)));
                      MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_82, (MR_Integer) 0)));
                      MR_Word Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_82, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word next_value_of_Goal_8 = SubGoal_153;

                        Goal_8 = next_value_of_Goal_8;
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_CallsHO_7 = STATE_VARIABLE_CallsHO_0_6;
      *STATE_VARIABLE_HasAT_5 = STATE_VARIABLE_HasAT_0_4;
      *STATE_VARIABLE_Calls_3 = STATE_VARIABLE_Calls_0_2;
    }
    else
    {
      MR_Word Case_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_17, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_Calls_31_31;
      MR_Word STATE_VARIABLE_HasAT_32_32;
      MR_Word STATE_VARIABLE_CallsHO_33_33;
      MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_17, (MR_Integer) 0)));
      MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_17, (MR_Integer) 1)));

      check_hlds__stratify__stratify_analyze_goal_7_p_0(Goal_24, STATE_VARIABLE_Calls_0_2, &STATE_VARIABLE_Calls_31_31, STATE_VARIABLE_HasAT_0_4, &STATE_VARIABLE_HasAT_32_32, STATE_VARIABLE_CallsHO_0_6, &STATE_VARIABLE_CallsHO_33_33);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_18;
        MR_Word next_value_of_STATE_VARIABLE_Calls_0_2 = STATE_VARIABLE_Calls_31_31;
        MR_Word next_value_of_STATE_VARIABLE_HasAT_0_4 = STATE_VARIABLE_HasAT_32_32;
        MR_Word next_value_of_STATE_VARIABLE_CallsHO_0_6 = STATE_VARIABLE_CallsHO_33_33;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Calls_0_2 = next_value_of_STATE_VARIABLE_Calls_0_2;
        STATE_VARIABLE_HasAT_0_4 = next_value_of_STATE_VARIABLE_HasAT_0_4;
        STATE_VARIABLE_CallsHO_0_6 = next_value_of_STATE_VARIABLE_CallsHO_0_6;
      }
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_CallsHO_7 = STATE_VARIABLE_CallsHO_0_6;
      *STATE_VARIABLE_HasAT_5 = STATE_VARIABLE_HasAT_0_4;
      *STATE_VARIABLE_Calls_3 = STATE_VARIABLE_Calls_0_2;
    }
    else
    {
      MR_Word Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Calls_28_28;
      MR_Word STATE_VARIABLE_HasAT_29_29;
      MR_Word STATE_VARIABLE_CallsHO_30_30;

      check_hlds__stratify__stratify_analyze_goal_7_p_0(Goal_17, STATE_VARIABLE_Calls_0_2, &STATE_VARIABLE_Calls_28_28, STATE_VARIABLE_HasAT_0_4, &STATE_VARIABLE_HasAT_29_29, STATE_VARIABLE_CallsHO_0_6, &STATE_VARIABLE_CallsHO_30_30);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_18;
        MR_Word next_value_of_STATE_VARIABLE_Calls_0_2 = STATE_VARIABLE_Calls_28_28;
        MR_Word next_value_of_STATE_VARIABLE_HasAT_0_4 = STATE_VARIABLE_HasAT_29_29;
        MR_Word next_value_of_STATE_VARIABLE_CallsHO_0_6 = STATE_VARIABLE_CallsHO_30_30;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Calls_0_2 = next_value_of_STATE_VARIABLE_Calls_0_2;
        STATE_VARIABLE_HasAT_0_4 = next_value_of_STATE_VARIABLE_HasAT_0_4;
        STATE_VARIABLE_CallsHO_0_6 = next_value_of_STATE_VARIABLE_CallsHO_0_6;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__get_called_procs_3_p_0(
  MR_Word Goal_4,
  MR_Word STATE_VARIABLE_Calls_0_87,
  MR_Word * STATE_VARIABLE_Calls_88)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;
      MR_Word GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 0)));
      MR_Word Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_4, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_71 = (MR_Word) MR_body(((MR_Word) GoalExpr_6), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word next_value_of_Goal_4 = SubGoal_71;

              Goal_4 = next_value_of_Goal_4;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 1)));
            MR_Word Unification_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 3)));
            MR_Word STATE_VARIABLE_Calls_104_104;
            MR_Word _Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 0)));
            MR_Word _Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 2)));
            MR_Word _Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), GoalExpr_6, (MR_Integer) 4)));

            switch (MR_tag((MR_Word) RHS_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                STATE_VARIABLE_Calls_104_104 = STATE_VARIABLE_Calls_0_87;
                break;
              case (MR_Integer) 1:
                STATE_VARIABLE_Calls_104_104 = STATE_VARIABLE_Calls_0_87;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word LambdaGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 6)));
                  MR_Word _Purity_13 = ((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 0)))) & (MR_Integer) 3);
                  MR_Word _Groundness_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word _PredOrFunc_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word _NonLocals_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 2)));
                  MR_Word _Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 3)));
                  MR_Word _Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 4)));
                  MR_Word _Determinism_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), RHS_9, (MR_Integer) 5)));

                  check_hlds__stratify__get_called_procs_3_p_0(LambdaGoal_21, STATE_VARIABLE_Calls_0_87, &STATE_VARIABLE_Calls_104_104);
                }
                break;
            }
            switch (MR_tag((MR_Word) Unification_11)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 1)));
                  MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 0)));
                  MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 2)));
                  MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 3)));
                  MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 4)));
                  MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 5)));
                  MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Unification_11, (MR_Integer) 6)));
                  MR_Word ShroudedPredProcId_33;

                  succeeded = ((((MR_tag((MR_Word) ConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    ShroudedPredProcId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ConsId_27, (MR_Integer) 1)));
                    {
                      MR_Word PredProcId_35;

                      PredProcId_35 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(ShroudedPredProcId_33);
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *STATE_VARIABLE_Calls_88 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_35));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Calls_104_104));
                      }
                    }
                  }
                  else
                    *STATE_VARIABLE_Calls_88 = STATE_VARIABLE_Calls_104_104;
                }
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_Calls_88 = STATE_VARIABLE_Calls_104_104;
                break;
              case (MR_Integer) 2:
                *STATE_VARIABLE_Calls_88 = STATE_VARIABLE_Calls_104_104;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Unification_11, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Calls_88 = STATE_VARIABLE_Calls_104_104;
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.get_called_procs\'/3", (MR_String) "complicated_unify");
                        return;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word CPred_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 0)));
            MR_Integer CProc_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 1)));
            MR_Word Var_103;
            MR_Word _Args_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 2)));
            MR_Word _Builtin_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 3)));
            MR_Word _UC_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 4)));
            MR_Word _Sym_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_6, (MR_Integer) 5)));

            {
              Var_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_103, 0) = ((MR_Box) (CPred_49));
              MR_hl_field(MR_mktag(0), Var_103, 1) = ((MR_Box) (CProc_50));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_Calls_88 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_103));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Calls_0_87));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Calls_88 = STATE_VARIABLE_Calls_0_87;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Calls_88 = STATE_VARIABLE_Calls_0_87;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2)));
                MR_Word _ConjType_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));

                check_hlds__stratify__get_called_procs_goals_3_p_0(Goals_65, STATE_VARIABLE_Calls_0_87, STATE_VARIABLE_Calls_88);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));

                check_hlds__stratify__get_called_procs_goals_3_p_0(Goals_123, STATE_VARIABLE_Calls_0_87, STATE_VARIABLE_Calls_88);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3)));
                MR_Word _Fail_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2)));
                MR_Word _Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));

                check_hlds__stratify__get_called_procs_cases_3_p_0(Cases_67, STATE_VARIABLE_Calls_0_87, STATE_VARIABLE_Calls_88);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));
                MR_Word SubGoal_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2)));
                MR_Word FGT_74;
                MR_Word Var_73;

                succeeded = ((((MR_tag((MR_Word) Reason_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_72, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_72, (MR_Integer) 1)));
                  FGT_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_72, (MR_Integer) 2)));
                  switch (FGT_74) {
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
                  *STATE_VARIABLE_Calls_88 = STATE_VARIABLE_Calls_0_87;
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word next_value_of_Goal_4 = SubGoal_119;

                    Goal_4 = next_value_of_Goal_4;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 2)));
                MR_Word Then_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 3)));
                MR_Word Else_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 4)));
                MR_Word STATE_VARIABLE_Calls_97_97;
                MR_Word STATE_VARIABLE_Calls_98_98;
                MR_Word _Vars_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));

                check_hlds__stratify__get_called_procs_3_p_0(Cond_68, STATE_VARIABLE_Calls_0_87, &STATE_VARIABLE_Calls_97_97);
                check_hlds__stratify__get_called_procs_3_p_0(Then_69, STATE_VARIABLE_Calls_97_97, &STATE_VARIABLE_Calls_98_98);
                /* direct tailcall eliminated */
                {
                  MR_Word next_value_of_Goal_4 = Else_70;
                  MR_Word next_value_of_STATE_VARIABLE_Calls_0_87 = STATE_VARIABLE_Calls_98_98;

                  Goal_4 = next_value_of_Goal_4;
                  STATE_VARIABLE_Calls_0_87 = next_value_of_STATE_VARIABLE_Calls_0_87;
                }
                continue;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_6, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ShortHand_75)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.get_called_procs\'/3", (MR_String) "bi_implication");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_75, (MR_Integer) 4)));
                      MR_Word OrElseGoals_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_75, (MR_Integer) 5)));
                      MR_Word STATE_VARIABLE_Calls_93_93;
                      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_75, (MR_Integer) 0)));
                      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_75, (MR_Integer) 1)));
                      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_75, (MR_Integer) 2)));
                      MR_Word Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_75, (MR_Integer) 3)));
                      MR_Word Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_75, (MR_Integer) 6)));

                      check_hlds__stratify__get_called_procs_3_p_0(MainGoal_80, STATE_VARIABLE_Calls_0_87, &STATE_VARIABLE_Calls_93_93);
                      check_hlds__stratify__get_called_procs_goals_3_p_0(OrElseGoals_81, STATE_VARIABLE_Calls_93_93, STATE_VARIABLE_Calls_88);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_120 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_75, (MR_Integer) 2)));
                      MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_75, (MR_Integer) 0)));
                      MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_75, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word next_value_of_Goal_4 = SubGoal_120;

                        Goal_4 = next_value_of_Goal_4;
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

static void MR_CALL 
check_hlds__stratify__get_called_procs_cases_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Calls_3 = STATE_VARIABLE_Calls_0_2;
    else
    {
      MR_Word Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_Calls_15_15;
      MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 0)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_7, (MR_Integer) 1)));

      check_hlds__stratify__get_called_procs_3_p_0(Goal_12, STATE_VARIABLE_Calls_0_2, &STATE_VARIABLE_Calls_15_15);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_8;
        MR_Word next_value_of_STATE_VARIABLE_Calls_0_2 = STATE_VARIABLE_Calls_15_15;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Calls_0_2 = next_value_of_STATE_VARIABLE_Calls_0_2;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__get_called_procs_goals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Calls_0_2,
  MR_Word * STATE_VARIABLE_Calls_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Calls_3 = STATE_VARIABLE_Calls_0_2;
    else
    {
      MR_Word Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Calls_12_12;

      check_hlds__stratify__get_called_procs_3_p_0(Goal_7, STATE_VARIABLE_Calls_0_2, &STATE_VARIABLE_Calls_12_12);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_8;
        MR_Word next_value_of_STATE_VARIABLE_Calls_0_2 = STATE_VARIABLE_Calls_12_12;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Calls_0_2 = next_value_of_STATE_VARIABLE_Calls_0_2;
      }
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
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          *STATE_VARIABLE_HOOut_7 = STATE_VARIABLE_HOOut_0_6;
          *STATE_VARIABLE_HOIn_5 = STATE_VARIABLE_HOIn_0_4;
        }
        else
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.higherorder_in_out1\'/7", (MR_String) "mismatched lists");
            return;
          }
        }
      else
      {
        MR_Word Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

        if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.higherorder_in_out1\'/7", (MR_String) "mismatched lists");
            return;
          }
        }
        else
        {
          MR_Word Mode_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
          MR_Word Modes_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
          MR_Word STATE_VARIABLE_HOIn_50_50;
          MR_Word STATE_VARIABLE_HOOut_51_51;

          succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(Var_55);
          if (succeeded)
          {
            succeeded = check_hlds__mode_util__mode_is_input_2_p_0(HeadVar__3_3, Mode_41);
            if (succeeded)
            {
              STATE_VARIABLE_HOIn_50_50 = (MR_Integer) 1;
              STATE_VARIABLE_HOOut_51_51 = STATE_VARIABLE_HOOut_0_6;
            }
            else
            {
              succeeded = check_hlds__mode_util__mode_is_output_2_p_0(HeadVar__3_3, Mode_41);
              if (succeeded)
                STATE_VARIABLE_HOOut_51_51 = (MR_Integer) 1;
              else
                STATE_VARIABLE_HOOut_51_51 = STATE_VARIABLE_HOOut_0_6;
              STATE_VARIABLE_HOIn_50_50 = STATE_VARIABLE_HOIn_0_4;
            }
          }
          else
          {
            STATE_VARIABLE_HOOut_51_51 = STATE_VARIABLE_HOOut_0_6;
            STATE_VARIABLE_HOIn_50_50 = STATE_VARIABLE_HOIn_0_4;
          }
          /* direct tailcall eliminated */
          {
            MR_Word next_value_of_HeadVar__1_1 = Var_54;
            MR_Word next_value_of_HeadVar__2_2 = Modes_42;
            MR_Word next_value_of_STATE_VARIABLE_HOIn_0_4 = STATE_VARIABLE_HOIn_50_50;
            MR_Word next_value_of_STATE_VARIABLE_HOOut_0_6 = STATE_VARIABLE_HOOut_51_51;

            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_HOIn_0_4 = next_value_of_STATE_VARIABLE_HOIn_0_4;
            STATE_VARIABLE_HOOut_0_6 = next_value_of_STATE_VARIABLE_HOOut_0_6;
          }
          continue;
        }
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
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_DepGraph_4 = STATE_VARIABLE_DepGraph_0_3;
      else
      {
        MR_Word Caller_9;
        MR_Word CallerInfo_10;
        MR_Word Cs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word STATE_VARIABLE_DepGraph_21_21;

        Caller_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0)));
        CallerInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1)));
        succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (Caller_9)), CallsHO_2);
        if (succeeded)
        {
          MR_Word TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
          MR_Word PossibleCallees0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallerInfo_10, (MR_Integer) 0)));
          MR_Word PossibleCallees_16;
          MR_Word CallerKey_17;
          MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallerInfo_10, (MR_Integer) 1)));

          mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_24_24, PossibleCallees0_14, &PossibleCallees_16);
          mercury__digraph__lookup_key_3_p_0(TypeCtorInfo_24_24, STATE_VARIABLE_DepGraph_0_3, ((MR_Box) (Caller_9)), &CallerKey_17);
          check_hlds__stratify__add_new_arcs2_4_p_0(PossibleCallees_16, CallerKey_17, STATE_VARIABLE_DepGraph_0_3, &STATE_VARIABLE_DepGraph_21_21);
        }
        else
          STATE_VARIABLE_DepGraph_21_21 = STATE_VARIABLE_DepGraph_0_3;
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__1_1 = Cs_11;
          MR_Word next_value_of_STATE_VARIABLE_DepGraph_0_3 = STATE_VARIABLE_DepGraph_21_21;

          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_DepGraph_0_3 = next_value_of_STATE_VARIABLE_DepGraph_0_3;
        }
        continue;
      }
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_DepGraph_4 = STATE_VARIABLE_DepGraph_0_3;
    else
    {
      MR_Word TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
      MR_Word Callee_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Cs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word CalleeKey_13;
      MR_Word STATE_VARIABLE_DepGraph_16_16;

      mercury__digraph__lookup_key_3_p_0(TypeCtorInfo_18_18, STATE_VARIABLE_DepGraph_0_3, ((MR_Box) (Callee_9)), &CalleeKey_13);
      mercury__digraph__add_edge_4_p_0(TypeCtorInfo_18_18, CallerKey_2, CalleeKey_13, STATE_VARIABLE_DepGraph_0_3, &STATE_VARIABLE_DepGraph_16_16);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = Cs_10;
        MR_Word next_value_of_STATE_VARIABLE_DepGraph_0_3 = STATE_VARIABLE_DepGraph_16_16;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_DepGraph_0_3 = next_value_of_STATE_VARIABLE_DepGraph_0_3;
      }
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
    /* tailcall optimized into a loop */
    {
      MR_Word Changed_10;
      MR_Word STATE_VARIABLE_HOInfo_13_13;

      check_hlds__stratify__stratify_tc_7_p_0(PredProcs_6, ProcCalls_7, CallsHO_8, STATE_VARIABLE_HOInfo_0_11, &STATE_VARIABLE_HOInfo_13_13, (MR_Integer) 0, &Changed_10);
      switch (Changed_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *STATE_VARIABLE_HOInfo_12 = STATE_VARIABLE_HOInfo_13_13;
          break;
        case (MR_Integer) 1:
          {
            /* direct tailcall eliminated */
            {
              MR_Word next_value_of_STATE_VARIABLE_HOInfo_0_11 = STATE_VARIABLE_HOInfo_13_13;

              STATE_VARIABLE_HOInfo_0_11 = next_value_of_STATE_VARIABLE_HOInfo_0_11;
            }
            continue;
          }
          break;
      }
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Changed_7 = STATE_VARIABLE_Changed_0_6;
      *STATE_VARIABLE_HOInfo_5 = STATE_VARIABLE_HOInfo_0_4;
    }
    else
    {
      MR_Word TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
      MR_Word PredProcId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word PCalls_22;
      MR_Word PCallsL_23;
      MR_Word STATE_VARIABLE_HOInfo_29_29;
      MR_Word STATE_VARIABLE_Changed_30_30;
      MR_Box conv0_PCalls_22;

      mercury__map__lookup_3_p_0(TypeCtorInfo_33_33, (MR_Word) &check_hlds__stratify_scalar_common_1[0], ProcCalls_2, ((MR_Box) (PredProcId_16)), &conv0_PCalls_22);
      PCalls_22 = ((MR_Word) conv0_PCalls_22);
      mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_33_33, PCalls_22, &PCallsL_23);
      check_hlds__stratify__merge_calls_8_p_0(PCallsL_23, PredProcId_16, CallsHO_3, (MR_Integer) 1, STATE_VARIABLE_HOInfo_0_4, &STATE_VARIABLE_HOInfo_29_29, STATE_VARIABLE_Changed_0_6, &STATE_VARIABLE_Changed_30_30);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = PredProcIds_17;
        MR_Word next_value_of_STATE_VARIABLE_HOInfo_0_4 = STATE_VARIABLE_HOInfo_29_29;
        MR_Word next_value_of_STATE_VARIABLE_Changed_0_6 = STATE_VARIABLE_Changed_30_30;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_HOInfo_0_4 = next_value_of_STATE_VARIABLE_HOInfo_0_4;
        STATE_VARIABLE_Changed_0_6 = next_value_of_STATE_VARIABLE_Changed_0_6;
      }
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
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *STATE_VARIABLE_Changed_8 = STATE_VARIABLE_Changed_0_7;
        *STATE_VARIABLE_HOInfo_6 = STATE_VARIABLE_HOInfo_0_5;
      }
      else
      {
        MR_Word C_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Cs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word STATE_VARIABLE_HOInfo_53_53;
        MR_Word STATE_VARIABLE_Changed_54_54;
        MR_Word CInfo_25;
        MR_Box conv0_CInfo_25;

        succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0, STATE_VARIABLE_HOInfo_0_5, ((MR_Box) (C_18)), &conv0_CInfo_25);
        if (succeeded)
        {
          CInfo_25 = ((MR_Word) conv0_CInfo_25);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
          MR_Word TypeCtorInfo_60_60 = (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0;
          MR_Word PInfo_26;
          MR_Word CHaveAT0_27;
          MR_Word CHOInOut_28;
          MR_Word PHaveAT0_29;
          MR_Word PHOInOut_30;
          MR_Word STATE_VARIABLE_Changed_49_49;
          MR_Word STATE_VARIABLE_HOInfo_51_51;
          MR_Box conv1_PInfo_26;

          mercury__map__lookup_3_p_0(TypeCtorInfo_59_59, TypeCtorInfo_60_60, STATE_VARIABLE_HOInfo_0_5, ((MR_Box) (P_2)), &conv1_PInfo_26);
          PInfo_26 = ((MR_Word) conv1_PInfo_26);
          CHaveAT0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), CInfo_25, (MR_Integer) 0)));
          CHOInOut_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), CInfo_25, (MR_Integer) 1)));
          PHaveAT0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), PInfo_26, (MR_Integer) 0)));
          PHOInOut_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), PInfo_26, (MR_Integer) 1)));
          succeeded = (CHOInOut_28 == (MR_Integer) 3);
          if (succeeded)
          {
            STATE_VARIABLE_Changed_49_49 = STATE_VARIABLE_Changed_0_7;
            STATE_VARIABLE_HOInfo_51_51 = STATE_VARIABLE_HOInfo_0_5;
          }
          else
          {
            MR_Word CHaveAT_31;
            MR_Word PHaveAT_32;
            MR_Word NewCInfo_34;
            MR_Word NewPInfo_35;
            MR_Word STATE_VARIABLE_HOInfo_50_50;

            switch (CHOInOut_28) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  succeeded = mercury__set__subset_2_p_0(TypeCtorInfo_59_59, PHaveAT0_29, CHaveAT0_27);
                  if (succeeded)
                  {
                    CHaveAT_31 = CHaveAT0_27;
                    STATE_VARIABLE_Changed_49_49 = STATE_VARIABLE_Changed_0_7;
                  }
                  else
                  {
                    mercury__set__union_3_p_0(TypeCtorInfo_59_59, PHaveAT0_29, CHaveAT0_27, &CHaveAT_31);
                    STATE_VARIABLE_Changed_49_49 = (MR_Integer) 1;
                  }
                  PHaveAT_32 = PHaveAT0_29;
                }
                break;
              case (MR_Integer) 2:
                {
                  succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], ((MR_Box) (CHaveAT0_27)), ((MR_Box) (PHaveAT0_29)));
                  if (succeeded)
                  {
                    CHaveAT_31 = CHaveAT0_27;
                    PHaveAT_32 = PHaveAT0_29;
                    STATE_VARIABLE_Changed_49_49 = STATE_VARIABLE_Changed_0_7;
                  }
                  else
                  {
                    mercury__set__union_3_p_0(TypeCtorInfo_59_59, CHaveAT0_27, PHaveAT0_29, &CHaveAT_31);
                    PHaveAT_32 = CHaveAT_31;
                    STATE_VARIABLE_Changed_49_49 = (MR_Integer) 1;
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.merge_calls\'/8", (MR_String) "ho_none");
                    return;
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  succeeded = mercury__set__subset_2_p_0(TypeCtorInfo_59_59, CHaveAT0_27, PHaveAT0_29);
                  if (succeeded)
                  {
                    PHaveAT_32 = PHaveAT0_29;
                    STATE_VARIABLE_Changed_49_49 = STATE_VARIABLE_Changed_0_7;
                  }
                  else
                  {
                    mercury__set__union_3_p_0(TypeCtorInfo_59_59, CHaveAT0_27, PHaveAT0_29, &PHaveAT_32);
                    STATE_VARIABLE_Changed_49_49 = (MR_Integer) 1;
                  }
                  CHaveAT_31 = CHaveAT0_27;
                }
                break;
            }
            {
              NewCInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NewCInfo_34, 0) = ((MR_Box) (CHaveAT_31));
              MR_hl_field(MR_mktag(0), NewCInfo_34, 1) = ((MR_Box) (CHOInOut_28));
            }
            {
              NewPInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), NewPInfo_35, 0) = ((MR_Box) (PHaveAT_32));
              MR_hl_field(MR_mktag(0), NewPInfo_35, 1) = ((MR_Box) (PHOInOut_30));
            }
            mercury__map__det_update_4_p_0(TypeCtorInfo_59_59, TypeCtorInfo_60_60, ((MR_Box) (C_18)), ((MR_Box) (NewCInfo_34)), STATE_VARIABLE_HOInfo_0_5, &STATE_VARIABLE_HOInfo_50_50);
            mercury__map__det_update_4_p_0(TypeCtorInfo_59_59, TypeCtorInfo_60_60, ((MR_Box) (P_2)), ((MR_Box) (NewPInfo_35)), STATE_VARIABLE_HOInfo_50_50, &STATE_VARIABLE_HOInfo_51_51);
          }
          succeeded = (DoingFirstOrder_4 == (MR_Integer) 1);
          if (succeeded)
            succeeded = mercury__set__member_2_p_0(TypeCtorInfo_59_59, ((MR_Box) (P_2)), CallsHO_3);
          if (succeeded)
          {
            MR_Word PHOInfo_36;
            MR_Word PossibleCalls_37;
            MR_Word PossibleCallsL_39;
            MR_Box conv2_PHOInfo_36;
            MR_Word Var_38;

            mercury__map__lookup_3_p_0(TypeCtorInfo_59_59, TypeCtorInfo_60_60, STATE_VARIABLE_HOInfo_51_51, ((MR_Box) (P_2)), &conv2_PHOInfo_36);
            PHOInfo_36 = ((MR_Word) conv2_PHOInfo_36);
            PossibleCalls_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), PHOInfo_36, (MR_Integer) 0)));
            Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), PHOInfo_36, (MR_Integer) 1)));
            mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_59_59, PossibleCalls_37, &PossibleCallsL_39);
            check_hlds__stratify__merge_calls_8_p_0(PossibleCallsL_39, P_2, CallsHO_3, (MR_Integer) 0, STATE_VARIABLE_HOInfo_51_51, &STATE_VARIABLE_HOInfo_53_53, STATE_VARIABLE_Changed_49_49, &STATE_VARIABLE_Changed_54_54);
          }
          else
          {
            STATE_VARIABLE_Changed_54_54 = STATE_VARIABLE_Changed_49_49;
            STATE_VARIABLE_HOInfo_53_53 = STATE_VARIABLE_HOInfo_51_51;
          }
        }
        else
        {
          STATE_VARIABLE_Changed_54_54 = STATE_VARIABLE_Changed_0_7;
          STATE_VARIABLE_HOInfo_53_53 = STATE_VARIABLE_HOInfo_0_5;
        }
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__1_1 = Cs_19;
          MR_Word next_value_of_STATE_VARIABLE_HOInfo_0_5 = STATE_VARIABLE_HOInfo_53_53;
          MR_Word next_value_of_STATE_VARIABLE_Changed_0_7 = STATE_VARIABLE_Changed_54_54;

          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_HOInfo_0_5 = next_value_of_STATE_VARIABLE_HOInfo_0_5;
          STATE_VARIABLE_Changed_0_7 = next_value_of_STATE_VARIABLE_Changed_0_7;
        }
        continue;
      }
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_5 = STATE_VARIABLE_Specs_0_4;
    else
    {
      MR_Word HeadSCC_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word TailSCCs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word HeadSCCProcs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadSCC_11, (MR_Integer) 0)));
      MR_Word HeadSCCPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadSCC_11, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Specs_20_20;

      check_hlds__stratify__higher_order_check_scc_6_p_0(HeadSCCProcs_16, HeadSCCPreds_17, HeadVar__2_2, HeadVar__3_3, STATE_VARIABLE_Specs_0_4, &STATE_VARIABLE_Specs_20_20);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = TailSCCs_12;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_4 = STATE_VARIABLE_Specs_20_20;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Specs_0_4 = next_value_of_STATE_VARIABLE_Specs_0_4;
      }
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
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      else
      {
        MR_Word PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Remaining_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 0)));
        MR_Integer ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 1)));
        MR_Word PredInfo_21;
        MR_Word Globals_22;
        MR_Word Warn_23;
        MR_Word STATE_VARIABLE_Specs_37_37;
        MR_Word HigherOrderInfo_25;
        MR_Word TypeCtorInfo_39_39;
        MR_Word TypeCtorInfo_40_40;
        MR_Box conv0_HigherOrderInfo_25;

        hlds__hlds_module__module_info_pred_info_3_p_0(HeadVar__4_4, PredId_19, &PredInfo_21);
        hlds__hlds_module__module_info_get_globals_2_p_0(HeadVar__4_4, &Globals_22);
        libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 22, &Warn_23);
        succeeded = (Warn_23 == (MR_Integer) 1);
        if (succeeded)
        {
          TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
          TypeCtorInfo_40_40 = (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0;
          succeeded = mercury__map__search_3_p_0(TypeCtorInfo_39_39, TypeCtorInfo_40_40, HeadVar__3_3, ((MR_Box) (PredProcId_13)), &conv0_HigherOrderInfo_25);
          if (succeeded)
          {
            HigherOrderInfo_25 = ((MR_Word) conv0_HigherOrderInfo_25);
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          MR_Word TypeCtorInfo_41_41 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
          MR_Word HOCalls_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), HigherOrderInfo_25, (MR_Integer) 0)));
          MR_Word HOLoops_28;
          MR_Word HighOrderLoops_29;
          MR_Word ProcTable_30;
          MR_Word Proc_31;
          MR_Word Goal_32;
          MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), HigherOrderInfo_25, (MR_Integer) 1)));
          MR_Box conv1_Proc_31;

          mercury__set__intersect_3_p_0(TypeCtorInfo_41_41, HOCalls_26, HeadVar__2_2, &HOLoops_28);
          succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_41_41, HOLoops_28);
          if (succeeded)
            HighOrderLoops_29 = (MR_Integer) 0;
          else
            HighOrderLoops_29 = (MR_Integer) 1;
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &ProcTable_30);
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcTable_30, ProcId_20, &conv1_Proc_31);
          Proc_31 = ((MR_Word) conv1_Proc_31);
          hlds__hlds_pred__proc_info_get_goal_2_p_0(Proc_31, &Goal_32);
          check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(Goal_32, (MR_Integer) 0, PredProcId_13, HighOrderLoops_29, (MR_Integer) 1, HeadVar__4_4, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_37_37);
        }
        else
          STATE_VARIABLE_Specs_37_37 = STATE_VARIABLE_Specs_0_5;
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__1_1 = Remaining_14;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_37_37;

          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
        }
        continue;
      }
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
  MR_Word STATE_VARIABLE_Specs_0_81,
  MR_Word * STATE_VARIABLE_Specs_82)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;
      MR_Word GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 0)));
      MR_Word GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_10, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_29 = (MR_Word) MR_body(((MR_Word) GoalExpr_18), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word next_value_of_Goal_10 = SubGoal_29;

              Goal_10 = next_value_of_Goal_10;
              Negated_11 = (MR_Integer) 1;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Specs_82 = STATE_VARIABLE_Specs_0_81;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Sym_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 5)));
            MR_Word _CPred_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 0)));
            MR_Integer _CProc_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 1)));
            MR_Word _Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 2)));
            MR_Word _Builtin_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 3)));
            MR_Word _UC_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_18, (MR_Integer) 4)));

            succeeded = (HighOrderLoops_14 == (MR_Integer) 1);
            if (succeeded)
            {
              if (((MR_tag((MR_Word) Sym_38)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String Name_39 = ((MR_String) (MR_hl_field(MR_mktag(1), Sym_38, (MR_Integer) 1)));
                MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sym_38, (MR_Integer) 0)));

                succeeded = (strcmp(Name_39, (MR_String) "solutions") == 0);
              }
              else
              {
                MR_String Name_117 = ((MR_String) (MR_hl_field(MR_mktag(0), Sym_38, (MR_Integer) 0)));

                succeeded = (strcmp(Name_117, (MR_String) "solutions") == 0);
              }
            }
            if (succeeded)
            {
              MR_Word Context_41;
              MR_Word Spec_43;

              Context_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
              Spec_43 = check_hlds__stratify__generate_stratify_error_5_f_0(ModuleInfo_16, ThisPredProcId_13, Context_41, (MR_String) "call to solutions/2 introduces a non-stratified loop.", ErrorOrWarning_15);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_82 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_43));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_81));
              }
            }
            else
              *STATE_VARIABLE_Specs_82 = STATE_VARIABLE_Specs_0_81;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word GenericCall_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1)));
                MR_Word _Modes_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 3)));
                MR_Word _MaybeArgRegs_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 4)));
                MR_Word _Det_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 5)));
                MR_Word _Vars_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2)));
                MR_String Msg_52;

                succeeded = (Negated_11 == (MR_Integer) 1);
                if (succeeded)
                {
                  succeeded = (HighOrderLoops_14 == (MR_Integer) 1);
                  if (succeeded)
                  {
                    if (((MR_tag((MR_Word) GenericCall_44)) == (MR_mktag((MR_Integer) 1))))
                    {
                      Msg_52 = (MR_String) "class method";
                      succeeded = MR_TRUE;
                    }
                    else
                    if (((MR_tag((MR_Word) GenericCall_44)) == (MR_mktag((MR_Integer) 0))))
                    {
                      Msg_52 = (MR_String) "higher order";
                      succeeded = MR_TRUE;
                    }
                    else
                      succeeded = MR_FALSE;
                  }
                }
                if (succeeded)
                {
                  MR_Word Context_103;
                  MR_String ErrorMsg_104;
                  MR_Word Spec_105;

                  Context_103 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_19);
                  ErrorMsg_104 = mercury__string__f_43_43_2_f_0(Msg_52, (MR_String) " call may introduce a non-stratified loop.");
                  Spec_105 = check_hlds__stratify__generate_stratify_error_5_f_0(ModuleInfo_16, ThisPredProcId_13, Context_103, ErrorMsg_104, ErrorOrWarning_15);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_82 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_105));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_81));
                  }
                }
                else
                  *STATE_VARIABLE_Specs_82 = STATE_VARIABLE_Specs_0_81;
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_Specs_82 = STATE_VARIABLE_Specs_0_81;
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2)));
                MR_Word _ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1)));

                check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(Goals_21, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_0_81, STATE_VARIABLE_Specs_82);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1)));

                check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(Goals_116, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_0_81, STATE_VARIABLE_Specs_82);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 3)));
                MR_Word _Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1)));
                MR_Word _Fail_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2)));

                check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(Cases_24, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_0_81, STATE_VARIABLE_Specs_82);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1)));
                MR_Word SubGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2)));
                MR_Word FGT_32;
                MR_Word Var_31;

                succeeded = ((((MR_tag((MR_Word) Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_30, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_30, (MR_Integer) 1)));
                  FGT_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_30, (MR_Integer) 2)));
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
                  *STATE_VARIABLE_Specs_82 = STATE_VARIABLE_Specs_0_81;
                else
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word next_value_of_Goal_10 = SubGoal_101;

                    Goal_10 = next_value_of_Goal_10;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 2)));
                MR_Word Then_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 3)));
                MR_Word Else_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 4)));
                MR_Word STATE_VARIABLE_Specs_96_96;
                MR_Word STATE_VARIABLE_Specs_97_97;
                MR_Word _Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1)));

                check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(Cond_26, (MR_Integer) 1, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_0_81, &STATE_VARIABLE_Specs_96_96);
                check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(Then_27, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_96_96, &STATE_VARIABLE_Specs_97_97);
                /* direct tailcall eliminated */
                {
                  MR_Word next_value_of_Goal_10 = Else_28;
                  MR_Word next_value_of_STATE_VARIABLE_Specs_0_81 = STATE_VARIABLE_Specs_97_97;

                  Goal_10 = next_value_of_Goal_10;
                  STATE_VARIABLE_Specs_0_81 = next_value_of_STATE_VARIABLE_Specs_0_81;
                }
                continue;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_18, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ShortHand_69)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.higher_order_check_goal\'/9", (MR_String) "bi_implication");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_69, (MR_Integer) 4)));
                      MR_Word OrElseGoals_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_69, (MR_Integer) 5)));
                      MR_Word STATE_VARIABLE_Specs_87_87;
                      MR_Word Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_69, (MR_Integer) 0)));
                      MR_Word Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_69, (MR_Integer) 1)));
                      MR_Word Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_69, (MR_Integer) 2)));
                      MR_Word Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_69, (MR_Integer) 3)));
                      MR_Word Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_69, (MR_Integer) 6)));

                      check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(MainGoal_74, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_0_81, &STATE_VARIABLE_Specs_87_87);
                      check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(OrElseGoals_75, Negated_11, ThisPredProcId_13, HighOrderLoops_14, ErrorOrWarning_15, ModuleInfo_16, STATE_VARIABLE_Specs_87_87, STATE_VARIABLE_Specs_82);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_113 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_69, (MR_Integer) 2)));
                      MR_Word Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_69, (MR_Integer) 0)));
                      MR_Word Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_69, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word next_value_of_Goal_10 = SubGoal_113;

                        Goal_10 = next_value_of_Goal_10;
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    else
    {
      MR_Word Case_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Goal_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_19, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_Specs_33_33;
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_19, (MR_Integer) 0)));
      MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_19, (MR_Integer) 1)));

      check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(Goal_30, Negated_2, ThisPredProcId_4, HighOrderLoops_5, ErrorOrWarning_6, ModuleInfo_7, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_33_33);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_20;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_33_33;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      }
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_9 = STATE_VARIABLE_Specs_0_8;
    else
    {
      MR_Word Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Specs_30_30;

      check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(Goal_19, Negated_2, ThisPredProcId_4, HighOrderLoops_5, ErrorOrWarning_6, ModuleInfo_7, STATE_VARIABLE_Specs_0_8, &STATE_VARIABLE_Specs_30_30);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_20;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_8 = STATE_VARIABLE_Specs_30_30;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Specs_0_8 = next_value_of_STATE_VARIABLE_Specs_0_8;
      }
      continue;
    }
    break;
  }
}

static void MR_CALL 
check_hlds__stratify__get_pred_id_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * PredId_3)
{
  {
    MR_Integer Var_4;

    *PredId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
  }
}

void MR_CALL 
check_hlds__stratify__check_module_for_stratification_3_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_11,
  MR_Word * STATE_VARIABLE_ModuleInfo_12,
  MR_Word * Specs_5)
{
  {
    MR_Word DepInfo_6;
    MR_Word FOSCCs_7;
    MR_Word Globals_8;
    MR_Word Warn_9;
    MR_Word MustBeStratifiedPreds_10;

    hlds__hlds_dependency_graph__module_info_ensure_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_11, STATE_VARIABLE_ModuleInfo_12, &DepInfo_6);
    FOSCCs_7 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, DepInfo_6);
    hlds__hlds_module__module_info_get_globals_2_p_0(*STATE_VARIABLE_ModuleInfo_12, &Globals_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 22, &Warn_9);
    hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(*STATE_VARIABLE_ModuleInfo_12, &MustBeStratifiedPreds_10);
    check_hlds__stratify__first_order_check_sccs_6_p_0(FOSCCs_7, MustBeStratifiedPreds_10, Warn_9, *STATE_VARIABLE_ModuleInfo_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Specs_5);
  }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_PredId_3;

    check_hlds__stratify__get_pred_id_2_p_0(((MR_Word) wrapper_arg_1), &conv0_PredId_3);
    *wrapper_arg_2 = ((MR_Box) (conv0_PredId_3));
  }
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
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
      else
      {
        MR_Word TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
        MR_Word HeadSCC_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word TailSCCs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
        MR_Word HeadSCCPreds_19;
        MR_Word MustBeStratifiedPredsInScc_20;
        MR_Word STATE_VARIABLE_Specs_25_25;

        mercury__set__map_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, TypeCtorInfo_30_30, (MR_Word) &check_hlds__stratify_scalar_common_2[2], HeadSCC_13, &HeadSCCPreds_19);
        mercury__set__intersect_3_p_0(TypeCtorInfo_30_30, HeadSCCPreds_19, MustBeStratifiedPreds_2, &MustBeStratifiedPredsInScc_20);
        succeeded = (Warn_3 == (MR_Integer) 1);
        if (!(succeeded))
          succeeded = mercury__set__is_non_empty_1_p_0(TypeCtorInfo_30_30, MustBeStratifiedPredsInScc_20);
        if (succeeded)
        {
          MR_Word Var_37;

          Var_37 = mercury__set__to_sorted_list_1_f_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, HeadSCC_13);
          check_hlds__stratify__first_order_check_scc_loop_6_p_0(Var_37, HeadSCC_13, (MR_Integer) 1, ModuleInfo_4, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_25_25);
        }
        else
          STATE_VARIABLE_Specs_25_25 = STATE_VARIABLE_Specs_0_5;
        /* direct tailcall eliminated */
        {
          MR_Word next_value_of_HeadVar__1_1 = TailSCCs_14;
          MR_Word next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_25_25;

          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
        }
        continue;
      }
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_6 = STATE_VARIABLE_Specs_0_5;
    else
    {
      MR_Word PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word PredProcIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 0)));
      MR_Integer ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_13, (MR_Integer) 1)));
      MR_Word PredInfo_21;
      MR_Word ProcTable_22;
      MR_Word Proc_23;
      MR_Word Goal_24;
      MR_Word STATE_VARIABLE_Specs_28_28;
      MR_Box conv0_Proc_23;

      hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_4, PredId_19, &PredInfo_21);
      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_21, &ProcTable_22);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, ProcTable_22, ProcId_20, &conv0_Proc_23);
      Proc_23 = ((MR_Word) conv0_Proc_23);
      hlds__hlds_pred__proc_info_get_goal_2_p_0(Proc_23, &Goal_24);
      check_hlds__stratify__first_order_check_goal_8_p_0(Goal_24, (MR_Integer) 0, HeadVar__2_2, PredProcId_13, ErrorOrWarning_3, ModuleInfo_4, STATE_VARIABLE_Specs_0_5, &STATE_VARIABLE_Specs_28_28);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = PredProcIds_14;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_5 = STATE_VARIABLE_Specs_28_28;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Specs_0_5 = next_value_of_STATE_VARIABLE_Specs_0_5;
      }
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
    /* tailcall optimized into a loop */
    {
      MR_bool succeeded;
      MR_Word GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 0)));
      MR_Word GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_9, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_27 = (MR_Word) MR_body(((MR_Word) GoalExpr_16), (MR_Integer) 0);

            /* direct tailcall eliminated */
            {
              MR_Word next_value_of_Goal_9 = SubGoal_27;

              Goal_9 = next_value_of_Goal_9;
              Negated_10 = (MR_Integer) 1;
            }
            continue;
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
          break;
        case (MR_Integer) 2:
          {
            MR_Word CPred_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_16, (MR_Integer) 0)));
            MR_Integer CProc_103 = ((MR_Integer) (MR_hl_field(MR_mktag(2), GoalExpr_16, (MR_Integer) 1)));
            MR_Word Callee_104;
            MR_Word _Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_16, (MR_Integer) 2)));
            MR_Word _BuiltinState_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_16, (MR_Integer) 3)));
            MR_Word _UC_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_16, (MR_Integer) 4)));
            MR_Word _Sym_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), GoalExpr_16, (MR_Integer) 5)));
            MR_Word TypeCtorInfo_92_94;

            {
              Callee_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Callee_104, 0) = ((MR_Box) (CPred_102));
              MR_hl_field(MR_mktag(0), Callee_104, 1) = ((MR_Box) (CProc_103));
            }
            succeeded = (Negated_10 == (MR_Integer) 1);
            if (succeeded)
            {
              TypeCtorInfo_92_94 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
              succeeded = mercury__set__member_2_p_0(TypeCtorInfo_92_94, ((MR_Box) (Callee_104)), WholeScc_11);
            }
            if (succeeded)
            {
              MR_Word Context_95;
              MR_Word Spec_97;

              Context_95 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_17);
              Spec_97 = check_hlds__stratify__generate_stratify_error_5_f_0(ModuleInfo_14, ThisPredProcId_12, Context_95, (MR_String) "call introduces a non-stratified loop.", ErrorOrWarning_13);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_Specs_67 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_97));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_66));
              }
            }
            else
              *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
              break;
            case (MR_Integer) 1:
              {
                MR_Word CPred_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 2)));
                MR_Integer CProc_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 3)));
                MR_Word Callee_42;
                MR_Word _Attributes_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 1)));
                MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 4)));
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 5)));
                MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 6)));
                MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 7)));
                MR_Word TypeCtorInfo_92_92;

                {
                  Callee_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Callee_42, 0) = ((MR_Box) (CPred_31));
                  MR_hl_field(MR_mktag(0), Callee_42, 1) = ((MR_Box) (CProc_32));
                }
                succeeded = (Negated_10 == (MR_Integer) 1);
                if (succeeded)
                {
                  TypeCtorInfo_92_92 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                  succeeded = mercury__set__member_2_p_0(TypeCtorInfo_92_92, ((MR_Box) (Callee_42)), WholeScc_11);
                }
                if (succeeded)
                {
                  MR_Word Context_43;
                  MR_Word Spec_45;

                  Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(GoalInfo_17);
                  Spec_45 = check_hlds__stratify__generate_stratify_error_5_f_0(ModuleInfo_14, ThisPredProcId_12, Context_43, (MR_String) "call introduces a non-stratified loop.", ErrorOrWarning_13);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *STATE_VARIABLE_Specs_67 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_45));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_66));
                  }
                }
                else
                  *STATE_VARIABLE_Specs_67 = STATE_VARIABLE_Specs_0_66;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 2)));
                MR_Word _ConjType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 1)));

                check_hlds__stratify__first_order_check_goals_8_p_0(Goals_19, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 1)));

                check_hlds__stratify__first_order_check_goals_8_p_0(Goals_93, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 3)));
                MR_Word _Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 1)));
                MR_Word _Fail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 2)));

                check_hlds__stratify__first_order_check_cases_8_p_0(Cases_22, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_0_66, STATE_VARIABLE_Specs_67);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 1)));
                MR_Word SubGoal_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 2)));
                MR_Word FGT_30;
                MR_Word Var_29;

                succeeded = ((((MR_tag((MR_Word) Reason_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_28, (MR_Integer) 1)));
                  FGT_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_28, (MR_Integer) 2)));
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
                  /* direct tailcall eliminated */
                  {
                    MR_Word next_value_of_Goal_9 = SubGoal_84;

                    Goal_9 = next_value_of_Goal_9;
                  }
                  continue;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Cond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 2)));
                MR_Word Then_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 3)));
                MR_Word Else_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 4)));
                MR_Word STATE_VARIABLE_Specs_79_79;
                MR_Word STATE_VARIABLE_Specs_80_80;
                MR_Word _Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 1)));

                check_hlds__stratify__first_order_check_goal_8_p_0(Cond_24, (MR_Integer) 1, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_79_79);
                check_hlds__stratify__first_order_check_goal_8_p_0(Then_25, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_79_79, &STATE_VARIABLE_Specs_80_80);
                /* direct tailcall eliminated */
                {
                  MR_Word next_value_of_Goal_9 = Else_26;
                  MR_Word next_value_of_STATE_VARIABLE_Specs_0_66 = STATE_VARIABLE_Specs_80_80;

                  Goal_9 = next_value_of_Goal_9;
                  STATE_VARIABLE_Specs_0_66 = next_value_of_STATE_VARIABLE_Specs_0_66;
                }
                continue;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word ShortHand_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_16, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) ShortHand_54)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.first_order_check_goal\'/8", (MR_String) "bi_implication");
                        return;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word MainGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 4)));
                      MR_Word OrElseGoals_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 5)));
                      MR_Word STATE_VARIABLE_Specs_72_72;
                      MR_Word Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 0)));
                      MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 1)));
                      MR_Word Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 2)));
                      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 3)));
                      MR_Word Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortHand_54, (MR_Integer) 6)));

                      check_hlds__stratify__first_order_check_goal_8_p_0(MainGoal_59, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_0_66, &STATE_VARIABLE_Specs_72_72);
                      check_hlds__stratify__first_order_check_goals_8_p_0(OrElseGoals_60, Negated_10, WholeScc_11, ThisPredProcId_12, ErrorOrWarning_13, ModuleInfo_14, STATE_VARIABLE_Specs_72_72, STATE_VARIABLE_Specs_67);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word SubGoal_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_54, (MR_Integer) 2)));
                      MR_Word Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_54, (MR_Integer) 0)));
                      MR_Word Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), ShortHand_54, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word next_value_of_Goal_9 = SubGoal_89;

                        Goal_9 = next_value_of_Goal_9;
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    else
    {
      MR_Word Case_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_17, (MR_Integer) 2)));
      MR_Word STATE_VARIABLE_Specs_30_30;
      MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_17, (MR_Integer) 0)));
      MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), Case_17, (MR_Integer) 1)));

      check_hlds__stratify__first_order_check_goal_8_p_0(Goal_27, Negated_2, WholeScc_3, ThisPredProcId_4, ErrorOrWarning_5, ModuleInfo_6, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_30_30);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_18;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_30_30;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      }
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
    /* tailcall optimized into a loop */
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Specs_8 = STATE_VARIABLE_Specs_0_7;
    else
    {
      MR_Word Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Specs_27_27;

      check_hlds__stratify__first_order_check_goal_8_p_0(Goal_17, Negated_2, WholeScc_3, ThisPredProcId_4, ErrorOrWarning_5, ModuleInfo_6, STATE_VARIABLE_Specs_0_7, &STATE_VARIABLE_Specs_27_27);
      /* direct tailcall eliminated */
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_18;
        MR_Word next_value_of_STATE_VARIABLE_Specs_0_7 = STATE_VARIABLE_Specs_27_27;

        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Specs_0_7 = next_value_of_STATE_VARIABLE_Specs_0_7;
      }
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
  MR_Word ModuleInfo_7,
  MR_Word PPId_8,
  MR_Word Context_9,
  MR_String Message_10,
  MR_Word ErrorOrWarning_11)
{
  {
    MR_Word Spec_12;
    MR_Word TypeCtorInfo_63_63;
    MR_Word PPIdDescription_13;
    MR_Word Preamble_14;
    MR_Word ErrOrWarnMsg_15;
    MR_Word Severity_16;
    MR_Word MainPieces_17;
    MR_Word Msg_19;
    MR_Word Var_25;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_61;

    PPIdDescription_13 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(ModuleInfo_7, (MR_Integer) 1, PPId_8);
    TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    Var_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_63_63, PPIdDescription_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[3]));
    Preamble_14 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_63_63, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[13]), Var_25);
    switch (ErrorOrWarning_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ErrOrWarnMsg_15 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[14]);
          Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          ErrOrWarnMsg_15 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[15]);
          Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        }
        break;
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) (Message_10));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])));
    }
    {
      MainPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MainPieces_17, 0) = ((MR_Box) (ErrOrWarnMsg_15));
      MR_hl_field(MR_mktag(1), MainPieces_17, 1) = ((MR_Box) (Var_34));
    }
    Var_55 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_63_63, Preamble_14, MainPieces_17);
    {
      Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[17])));
    }
    {
      Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Msg_19, 0) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), Msg_19, 1) = ((MR_Box) (Var_53));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Msg_19));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Spec_12, 0) = ((MR_Box) (Severity_16));
      MR_hl_field(MR_mktag(0), Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18))));
      MR_hl_field(MR_mktag(0), Spec_12, 2) = ((MR_Box) (Var_61));
    }
    return Spec_12;
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__stratify____Unify____call_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__stratify____Compare____call_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__stratify____Unify____calls_higher_order_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__stratify____Compare____calls_higher_order_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__stratify____Unify____error_or_warning_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__stratify____Compare____error_or_warning_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__stratify____Unify____ho_in_out_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__stratify____Compare____ho_in_out_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__stratify____Unify____ho_map_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__stratify____Compare____ho_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__stratify____Unify____strat_ho_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__stratify____Compare____strat_ho_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

/* :- end_module check_hlds.stratify. */
