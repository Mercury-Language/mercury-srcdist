/*
** Automatically generated from `stratify.m'
** by the Mercury compiler,
** version rotd-2016-02-18
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
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
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

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3);

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__HighOrderLoops_5,
  MR_Word check_hlds__stratify__ErrorOrWarning_6,
  MR_Word check_hlds__stratify__ModuleInfo_7,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_8,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__HighOrderLoops_5,
  MR_Word check_hlds__stratify__ErrorOrWarning_6,
  MR_Word check_hlds__stratify__ModuleInfo_7,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_8,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_9);

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(
  MR_Word check_hlds__stratify__Goal_10,
  MR_Word check_hlds__stratify__Negated_11,
  MR_Word check_hlds__stratify__ThisPredProcId_13,
  MR_Word check_hlds__stratify__HighOrderLoops_14,
  MR_Word check_hlds__stratify__ErrorOrWarning_15,
  MR_Word check_hlds__stratify__ModuleInfo_16,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_81,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_82);

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2);

static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
  MR_Word check_hlds__stratify__ModuleInfo_7,
  MR_Word check_hlds__stratify__PPId_8,
  MR_Word check_hlds__stratify__Context_9,
  MR_String check_hlds__stratify__Message_10,
  MR_Word check_hlds__stratify__ErrorOrWarning_11);

static void MR_CALL 
check_hlds__stratify__get_called_procs_cases_3_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_3);

static void MR_CALL 
check_hlds__stratify__get_called_procs_goals_3_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_3);

static void MR_CALL 
check_hlds__stratify__get_called_procs_3_p_0(
  MR_Word check_hlds__stratify__Goal_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_87,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_88);

static void MR_CALL 
check_hlds__stratify__stratify_analyze_cases_7_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_3,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_0_4,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HasAT_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_6,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_7);

static void MR_CALL 
check_hlds__stratify__stratify_analyze_goals_7_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_3,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_0_4,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HasAT_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_6,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_7);

static void MR_CALL 
check_hlds__stratify__stratify_analyze_goal_7_p_0(
  MR_Word check_hlds__stratify__Goal_8,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_94,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_95,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_0_96,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HasAT_97,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_99);

static void MR_CALL 
check_hlds__stratify__higherorder_in_out1_7_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOIn_0_4,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOIn_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOOut_0_6,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOOut_7);

static void MR_CALL 
check_hlds__stratify__stratify_process_proc_11_p_0(
  MR_Integer check_hlds__stratify__ProcId_12,
  MR_Word check_hlds__stratify__ModuleInfo_13,
  MR_Word check_hlds__stratify__PredId_14,
  MR_Word check_hlds__stratify__ArgTypes_15,
  MR_Word check_hlds__stratify__ProcTable_16,
  MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_28,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_ProcCalls_29,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_30,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_31,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_32,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_33);

static void MR_CALL 
check_hlds__stratify__stratify_process_procs_11_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__ModuleInfo_2,
  MR_Word check_hlds__stratify__PredId_3,
  MR_Word check_hlds__stratify__ArgTypes_4,
  MR_Word check_hlds__stratify__ProcTable_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_6,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_ProcCalls_7,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_8,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_9,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_10,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_11);

static void MR_CALL 
check_hlds__stratify__expand_predids_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__ModuleInfo_2,
  MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_3,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_ProcCalls_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_8);

static void MR_CALL 
check_hlds__stratify__add_new_arcs2_4_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__CallerKey_2,
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepGraph_4);

static void MR_CALL 
check_hlds__stratify__add_new_arcs_4_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__CallsHO_2,
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepGraph_4);

static void MR_CALL 
check_hlds__stratify__merge_calls_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__P_2,
  MR_Word check_hlds__stratify__CallsHO_3,
  MR_Word check_hlds__stratify__DoingFirstOrder_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Changed_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Changed_8);

static void MR_CALL 
check_hlds__stratify__stratify_tc_7_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__ProcCalls_2,
  MR_Word check_hlds__stratify__CallsHO_3,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_4,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Changed_0_6,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Changed_7);

static void MR_CALL 
check_hlds__stratify__iterate_solution_5_p_0(
  MR_Word check_hlds__stratify__PredProcs_6,
  MR_Word check_hlds__stratify__ProcCalls_7,
  MR_Word check_hlds__stratify__CallsHO_8,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_11,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_12);

static void MR_CALL 
check_hlds__stratify__gen_conservative_graph_4_p_0(
  MR_Word check_hlds__stratify__ModuleInfo_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepGraph_0_13,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepGraph_14,
  MR_Word * check_hlds__stratify__HOInfo_7);

static void MR_CALL 
check_hlds__stratify__higher_order_check_scc_6_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3,
  MR_Word check_hlds__stratify__HeadVar__4_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__stratify__higher_order_check_sccs_5_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_5);

static void MR_CALL 
check_hlds__stratify__first_order_check_cases_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__WholeScc_3,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
  MR_Word check_hlds__stratify__ModuleInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__stratify__first_order_check_goals_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__WholeScc_3,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
  MR_Word check_hlds__stratify__ModuleInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8);

static void MR_CALL 
check_hlds__stratify__first_order_check_goal_8_p_0(
  MR_Word check_hlds__stratify__Goal_9,
  MR_Word check_hlds__stratify__Negated_10,
  MR_Word check_hlds__stratify__WholeScc_11,
  MR_Word check_hlds__stratify__ThisPredProcId_12,
  MR_Word check_hlds__stratify__ErrorOrWarning_13,
  MR_Word check_hlds__stratify__ModuleInfo_14,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_66,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_67);

static void MR_CALL 
check_hlds__stratify__first_order_check_scc_2_6_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__ErrorOrWarning_3,
  MR_Word check_hlds__stratify__ModuleInfo_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__MustBeStratifiedPreds_2,
  MR_Word check_hlds__stratify__Warn_3,
  MR_Word check_hlds__stratify__ModuleInfo_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6);

static void MR_CALL 
check_hlds__stratify__get_proc_id_2_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word * check_hlds__stratify__PredId_3);

static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0_1(
  MR_Box check_hlds__stratify__closure_arg,
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box * check_hlds__stratify__wrapper_arg_2);

static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepList_3);


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
    ((MR_Box) (check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0_1)),
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0[1] = {
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0
};

static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____call_map_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____call_map_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____calls_higher_order_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____calls_higher_order_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____error_or_warning_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____error_or_warning_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____ho_in_out_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____ho_in_out_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____ho_map_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____ho_map_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;

    {
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____strat_ho_info_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
  MR_Box * check_hlds__stratify__wrapper_arg_1,
  MR_Box check_hlds__stratify__wrapper_arg_2,
  MR_Box check_hlds__stratify__wrapper_arg_3)
{
  {
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

    {
      check_hlds__stratify____Compare____strat_ho_info_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__HighOrderLoops_5,
  MR_Word check_hlds__stratify__ErrorOrWarning_6,
  MR_Word check_hlds__stratify__ModuleInfo_7,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_8,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_9 = check_hlds__stratify__STATE_VARIABLE_Specs_0_8;
        else
          {
            MR_Word check_hlds__stratify__Case_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__Goal_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_19, (MR_Integer) 2)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_33_33;
            MR_Word check_hlds__stratify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_19, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_19, (MR_Integer) 1)));

            {
              check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(check_hlds__stratify__Goal_30, check_hlds__stratify__Negated_2, check_hlds__stratify__ThisPredProcId_4, check_hlds__stratify__HighOrderLoops_5, check_hlds__stratify__ErrorOrWarning_6, check_hlds__stratify__ModuleInfo_7, check_hlds__stratify__STATE_VARIABLE_Specs_0_8, &check_hlds__stratify__STATE_VARIABLE_Specs_33_33);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_20;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_8 = check_hlds__stratify__STATE_VARIABLE_Specs_33_33;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_8 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_8;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__HighOrderLoops_5,
  MR_Word check_hlds__stratify__ErrorOrWarning_6,
  MR_Word check_hlds__stratify__ModuleInfo_7,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_8,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_9)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_9 = check_hlds__stratify__STATE_VARIABLE_Specs_0_8;
        else
          {
            MR_Word check_hlds__stratify__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Goals_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_30_30;

            {
              check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(check_hlds__stratify__Goal_19, check_hlds__stratify__Negated_2, check_hlds__stratify__ThisPredProcId_4, check_hlds__stratify__HighOrderLoops_5, check_hlds__stratify__ErrorOrWarning_6, check_hlds__stratify__ModuleInfo_7, check_hlds__stratify__STATE_VARIABLE_Specs_0_8, &check_hlds__stratify__STATE_VARIABLE_Specs_30_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_20;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_8 = check_hlds__stratify__STATE_VARIABLE_Specs_30_30;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_8 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_8;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(
  MR_Word check_hlds__stratify__Goal_10,
  MR_Word check_hlds__stratify__Negated_11,
  MR_Word check_hlds__stratify__ThisPredProcId_13,
  MR_Word check_hlds__stratify__HighOrderLoops_14,
  MR_Word check_hlds__stratify__ErrorOrWarning_15,
  MR_Word check_hlds__stratify__ModuleInfo_16,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_81,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_82)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;
        MR_Word check_hlds__stratify__GoalExpr_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_10, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__GoalInfo_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_10, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__stratify__GoalExpr_18)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__stratify__SubGoal_29 = (MR_Word) MR_body(((MR_Word) check_hlds__stratify__GoalExpr_18), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__stratify__Goal__tmp_copy_10 = check_hlds__stratify__SubGoal_29;

                check_hlds__stratify__Negated_11 = (MR_Integer) 1;
                check_hlds__stratify__Goal_10 = check_hlds__stratify__Goal__tmp_copy_10;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            *check_hlds__stratify__STATE_VARIABLE_Specs_82 = check_hlds__stratify__STATE_VARIABLE_Specs_0_81;
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__stratify__Sym_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_18, (MR_Integer) 5)));
              MR_Word check_hlds__stratify___CPred_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_18, (MR_Integer) 0)));
              MR_Integer check_hlds__stratify___CProc_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_18, (MR_Integer) 1)));
              MR_Word check_hlds__stratify___Args_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_18, (MR_Integer) 2)));
              MR_Word check_hlds__stratify___Builtin_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_18, (MR_Integer) 3)));
              MR_Word check_hlds__stratify___UC_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_18, (MR_Integer) 4)));

              check_hlds__stratify__succeeded = (check_hlds__stratify__HighOrderLoops_14 == (MR_Integer) 1);
              if (check_hlds__stratify__succeeded)
                {
                  if (((MR_tag((MR_Word) check_hlds__stratify__Sym_38)) == (MR_mktag((MR_Integer) 1))))
                    {
                      MR_String check_hlds__stratify__Name_39 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__stratify__Sym_38, (MR_Integer) 1)));
                      MR_Word check_hlds__stratify__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__Sym_38, (MR_Integer) 0)));

                      check_hlds__stratify__succeeded = (strcmp(check_hlds__stratify__Name_39, (MR_String) "solutions") == 0);
                    }
                  else
                    {
                      MR_String check_hlds__stratify__Name_117 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Sym_38, (MR_Integer) 0)));

                      check_hlds__stratify__succeeded = (strcmp(check_hlds__stratify__Name_117, (MR_String) "solutions") == 0);
                    }
                }
              if (check_hlds__stratify__succeeded)
                {
                  MR_Word check_hlds__stratify__Context_41;
                  MR_Word check_hlds__stratify__Spec_43;

                  {
                    check_hlds__stratify__Context_41 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__stratify__GoalInfo_19);
                  }
                  {
                    check_hlds__stratify__Spec_43 = check_hlds__stratify__generate_stratify_error_5_f_0(check_hlds__stratify__ModuleInfo_16, check_hlds__stratify__ThisPredProcId_13, check_hlds__stratify__Context_41, (MR_String) "call to solutions/2 introduces a non-stratified loop.", check_hlds__stratify__ErrorOrWarning_15);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__stratify__STATE_VARIABLE_Specs_82 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__Spec_43));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Specs_0_81));
                  }
                }
              else
                *check_hlds__stratify__STATE_VARIABLE_Specs_82 = check_hlds__stratify__STATE_VARIABLE_Specs_0_81;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word check_hlds__stratify__GenericCall_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify___Modes_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify___MaybeArgRegs_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 4)));
                  MR_Word check_hlds__stratify___Det_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 5)));
                  MR_Word check_hlds__stratify___Vars_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 2)));
                  MR_String check_hlds__stratify__Msg_52;

                  check_hlds__stratify__succeeded = (check_hlds__stratify__Negated_11 == (MR_Integer) 1);
                  if (check_hlds__stratify__succeeded)
                    {
                      check_hlds__stratify__succeeded = (check_hlds__stratify__HighOrderLoops_14 == (MR_Integer) 1);
                      if (check_hlds__stratify__succeeded)
                        {
                          if (((MR_tag((MR_Word) check_hlds__stratify__GenericCall_44)) == (MR_mktag((MR_Integer) 1))))
                            {
                              check_hlds__stratify__Msg_52 = (MR_String) "class method";
                              check_hlds__stratify__succeeded = MR_TRUE;
                            }
                          else
                          if (((MR_tag((MR_Word) check_hlds__stratify__GenericCall_44)) == (MR_mktag((MR_Integer) 0))))
                            {
                              check_hlds__stratify__Msg_52 = (MR_String) "higher order";
                              check_hlds__stratify__succeeded = MR_TRUE;
                            }
                          else
                            check_hlds__stratify__succeeded = MR_FALSE;
                        }
                    }
                  if (check_hlds__stratify__succeeded)
                    {
                      MR_Word check_hlds__stratify__Context_103;
                      MR_String check_hlds__stratify__ErrorMsg_104;
                      MR_Word check_hlds__stratify__Spec_105;

                      {
                        check_hlds__stratify__Context_103 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__stratify__GoalInfo_19);
                      }
                      {
                        check_hlds__stratify__ErrorMsg_104 = mercury__string__f_43_43_2_f_0(check_hlds__stratify__Msg_52, (MR_String) " call may introduce a non-stratified loop.");
                      }
                      {
                        check_hlds__stratify__Spec_105 = check_hlds__stratify__generate_stratify_error_5_f_0(check_hlds__stratify__ModuleInfo_16, check_hlds__stratify__ThisPredProcId_13, check_hlds__stratify__Context_103, check_hlds__stratify__ErrorMsg_104, check_hlds__stratify__ErrorOrWarning_15);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__stratify__STATE_VARIABLE_Specs_82 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__Spec_105));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Specs_0_81));
                      }
                    }
                  else
                    *check_hlds__stratify__STATE_VARIABLE_Specs_82 = check_hlds__stratify__STATE_VARIABLE_Specs_0_81;
                }
                break;
              case (MR_Integer) 1:
                *check_hlds__stratify__STATE_VARIABLE_Specs_82 = check_hlds__stratify__STATE_VARIABLE_Specs_0_81;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__stratify__Goals_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify___ConjType_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(check_hlds__stratify__Goals_21, check_hlds__stratify__Negated_11, check_hlds__stratify__ThisPredProcId_13, check_hlds__stratify__HighOrderLoops_14, check_hlds__stratify__ErrorOrWarning_15, check_hlds__stratify__ModuleInfo_16, check_hlds__stratify__STATE_VARIABLE_Specs_0_81, check_hlds__stratify__STATE_VARIABLE_Specs_82);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__stratify__Goals_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(check_hlds__stratify__Goals_116, check_hlds__stratify__Negated_11, check_hlds__stratify__ThisPredProcId_13, check_hlds__stratify__HighOrderLoops_14, check_hlds__stratify__ErrorOrWarning_15, check_hlds__stratify__ModuleInfo_16, check_hlds__stratify__STATE_VARIABLE_Specs_0_81, check_hlds__stratify__STATE_VARIABLE_Specs_82);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__stratify__Cases_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify___Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify___Fail_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 2)));

                  {
                    check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_99_97_115_101_115_95_95_91_51_93_95_48_9_p_0(check_hlds__stratify__Cases_24, check_hlds__stratify__Negated_11, check_hlds__stratify__ThisPredProcId_13, check_hlds__stratify__HighOrderLoops_14, check_hlds__stratify__ErrorOrWarning_15, check_hlds__stratify__ModuleInfo_16, check_hlds__stratify__STATE_VARIABLE_Specs_0_81, check_hlds__stratify__STATE_VARIABLE_Specs_82);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__stratify__Reason_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify__SubGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify__FGT_32;
                  MR_Word check_hlds__stratify__V_31_31;

                  check_hlds__stratify__succeeded = ((((MR_tag((MR_Word) check_hlds__stratify__Reason_30)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_30, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (check_hlds__stratify__succeeded)
                    {
                      check_hlds__stratify__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_30, (MR_Integer) 1)));
                      check_hlds__stratify__FGT_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_30, (MR_Integer) 2)));
                      switch (check_hlds__stratify__FGT_32) {
                        default:
                          check_hlds__stratify__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          check_hlds__stratify__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          check_hlds__stratify__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (check_hlds__stratify__succeeded)
                    *check_hlds__stratify__STATE_VARIABLE_Specs_82 = check_hlds__stratify__STATE_VARIABLE_Specs_0_81;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__stratify__Goal__tmp_copy_10 = check_hlds__stratify__SubGoal_101;

                        check_hlds__stratify__Goal_10 = check_hlds__stratify__Goal__tmp_copy_10;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word check_hlds__stratify__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify__Then_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify__Else_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 4)));
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_96_96;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_97_97;
                  MR_Word check_hlds__stratify___Vars_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(check_hlds__stratify__Cond_26, (MR_Integer) 1, check_hlds__stratify__ThisPredProcId_13, check_hlds__stratify__HighOrderLoops_14, check_hlds__stratify__ErrorOrWarning_15, check_hlds__stratify__ModuleInfo_16, check_hlds__stratify__STATE_VARIABLE_Specs_0_81, &check_hlds__stratify__STATE_VARIABLE_Specs_96_96);
                  }
                  {
                    check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(check_hlds__stratify__Then_27, check_hlds__stratify__Negated_11, check_hlds__stratify__ThisPredProcId_13, check_hlds__stratify__HighOrderLoops_14, check_hlds__stratify__ErrorOrWarning_15, check_hlds__stratify__ModuleInfo_16, check_hlds__stratify__STATE_VARIABLE_Specs_96_96, &check_hlds__stratify__STATE_VARIABLE_Specs_97_97);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__stratify__Goal__tmp_copy_10 = check_hlds__stratify__Else_28;
                    MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_81 = check_hlds__stratify__STATE_VARIABLE_Specs_97_97;

                    check_hlds__stratify__STATE_VARIABLE_Specs_0_81 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_81;
                    check_hlds__stratify__Goal_10 = check_hlds__stratify__Goal__tmp_copy_10;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__stratify__ShortHand_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_18, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__stratify__ShortHand_69)) {
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
                        MR_Word check_hlds__stratify__MainGoal_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_69, (MR_Integer) 4)));
                        MR_Word check_hlds__stratify__OrElseGoals_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_69, (MR_Integer) 5)));
                        MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_87_87;
                        MR_Word check_hlds__stratify__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_69, (MR_Integer) 0)));
                        MR_Word check_hlds__stratify__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_69, (MR_Integer) 1)));
                        MR_Word check_hlds__stratify__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_69, (MR_Integer) 2)));
                        MR_Word check_hlds__stratify__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_69, (MR_Integer) 3)));
                        MR_Word check_hlds__stratify__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_69, (MR_Integer) 6)));

                        {
                          check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(check_hlds__stratify__MainGoal_74, check_hlds__stratify__Negated_11, check_hlds__stratify__ThisPredProcId_13, check_hlds__stratify__HighOrderLoops_14, check_hlds__stratify__ErrorOrWarning_15, check_hlds__stratify__ModuleInfo_16, check_hlds__stratify__STATE_VARIABLE_Specs_0_81, &check_hlds__stratify__STATE_VARIABLE_Specs_87_87);
                        }
                        {
                          check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_115_95_95_91_51_93_95_48_9_p_0(check_hlds__stratify__OrElseGoals_75, check_hlds__stratify__Negated_11, check_hlds__stratify__ThisPredProcId_13, check_hlds__stratify__HighOrderLoops_14, check_hlds__stratify__ErrorOrWarning_15, check_hlds__stratify__ModuleInfo_16, check_hlds__stratify__STATE_VARIABLE_Specs_87_87, check_hlds__stratify__STATE_VARIABLE_Specs_82);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__stratify__SubGoal_113 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_69, (MR_Integer) 2)));
                        MR_Word check_hlds__stratify__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_69, (MR_Integer) 0)));
                        MR_Word check_hlds__stratify__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_69, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__stratify__Goal__tmp_copy_10 = check_hlds__stratify__SubGoal_113;

                          check_hlds__stratify__Goal_10 = check_hlds__stratify__Goal__tmp_copy_10;
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
check_hlds__stratify____Compare____strat_ho_info_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__CastX_9 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
    MR_Integer check_hlds__stratify__CastY_10 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

    check_hlds__stratify__succeeded = (check_hlds__stratify__CastX_9 == check_hlds__stratify__CastY_10);
    if (check_hlds__stratify__succeeded)
      *check_hlds__stratify__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word check_hlds__stratify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word check_hlds__stratify__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word check_hlds__stratify__V_8_8;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], &check_hlds__stratify__V_8_8, ((MR_Box) (check_hlds__stratify__V_4_4)), ((MR_Box) (check_hlds__stratify__V_6_6)));
        }
        check_hlds__stratify__succeeded = (check_hlds__stratify__V_8_8 == (MR_Integer) 0);
        check_hlds__stratify__succeeded = !(check_hlds__stratify__succeeded);
        if (check_hlds__stratify__succeeded)
          *check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__V_8_8;
        else
          {
            MR_Integer check_hlds__stratify__V_13_13 = (MR_Integer) check_hlds__stratify__V_5_5;
            MR_Integer check_hlds__stratify__V_14_14 = (MR_Integer) check_hlds__stratify__V_7_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__V_13_13, check_hlds__stratify__V_14_14);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__CastX_7 = (MR_Integer) check_hlds__stratify__HeadVar__1_1;
    MR_Integer check_hlds__stratify__CastY_8 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;

    check_hlds__stratify__succeeded = (check_hlds__stratify__CastX_7 == check_hlds__stratify__CastY_8);
    if (check_hlds__stratify__succeeded)
      check_hlds__stratify__succeeded = MR_TRUE;
    else
      {
        MR_Word check_hlds__stratify__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word check_hlds__stratify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 1)));

        {
          check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], ((MR_Box) (check_hlds__stratify__V_3_3)), ((MR_Box) (check_hlds__stratify__V_5_5)));
        }
        if (check_hlds__stratify__succeeded)
          check_hlds__stratify__succeeded = (check_hlds__stratify__V_4_4 == check_hlds__stratify__V_6_6);
      }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__Cast_HeadVar1_4 = check_hlds__stratify__HeadVar__2_2;
    MR_Word check_hlds__stratify__Cast_HeadVar2_5 = check_hlds__stratify__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[1], check_hlds__stratify__HeadVar__1_1, ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__Cast_HeadVar1_3 = check_hlds__stratify__HeadVar__1_1;
    MR_Word check_hlds__stratify__Cast_HeadVar2_4 = check_hlds__stratify__HeadVar__2_2;

    {
      check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[1], ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_4)));
    }
    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0(
  MR_Word check_hlds__stratify__HeadVar__2_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

    return check_hlds__stratify__succeeded;
  }
}

static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
  MR_Word * check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__Cast_HeadVar1_4 = check_hlds__stratify__HeadVar__2_2;
    MR_Word check_hlds__stratify__Cast_HeadVar2_5 = check_hlds__stratify__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[0], check_hlds__stratify__HeadVar__1_1, ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__Cast_HeadVar1_3 = check_hlds__stratify__HeadVar__1_1;
    MR_Word check_hlds__stratify__Cast_HeadVar2_4 = check_hlds__stratify__HeadVar__2_2;

    {
      check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[0], ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_4)));
    }
    return check_hlds__stratify__succeeded;
  }
}

static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
  MR_Word check_hlds__stratify__ModuleInfo_7,
  MR_Word check_hlds__stratify__PPId_8,
  MR_Word check_hlds__stratify__Context_9,
  MR_String check_hlds__stratify__Message_10,
  MR_Word check_hlds__stratify__ErrorOrWarning_11)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__Spec_12;
    MR_Word check_hlds__stratify__TypeCtorInfo_63_63;
    MR_Word check_hlds__stratify__PPIdDescription_13;
    MR_Word check_hlds__stratify__Preamble_14;
    MR_Word check_hlds__stratify__ErrOrWarnMsg_15;
    MR_Word check_hlds__stratify__Severity_16;
    MR_Word check_hlds__stratify__MainPieces_17;
    MR_Word check_hlds__stratify__Msg_19;
    MR_Word check_hlds__stratify__V_25_25;
    MR_Word check_hlds__stratify__V_34_34;
    MR_Word check_hlds__stratify__V_35_35;
    MR_Word check_hlds__stratify__V_53_53;
    MR_Word check_hlds__stratify__V_54_54;
    MR_Word check_hlds__stratify__V_55_55;
    MR_Word check_hlds__stratify__V_61_61;

    {
      check_hlds__stratify__PPIdDescription_13 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__stratify__ModuleInfo_7, (MR_Integer) 1, check_hlds__stratify__PPId_8);
    }
    check_hlds__stratify__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
    {
      check_hlds__stratify__V_25_25 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_63_63, check_hlds__stratify__PPIdDescription_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[3]));
    }
    {
      check_hlds__stratify__Preamble_14 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_63_63, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[13]), check_hlds__stratify__V_25_25);
    }
    switch (check_hlds__stratify__ErrorOrWarning_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          check_hlds__stratify__ErrOrWarnMsg_15 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[14]);
          check_hlds__stratify__Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          check_hlds__stratify__ErrOrWarnMsg_15 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[15]);
          check_hlds__stratify__Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        }
        break;
    }
    {
      check_hlds__stratify__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), check_hlds__stratify__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), check_hlds__stratify__V_35_35, 1) = ((MR_Box) (check_hlds__stratify__Message_10));
    }
    {
      check_hlds__stratify__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_34_34, 0) = ((MR_Box) (check_hlds__stratify__V_35_35));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])));
    }
    {
      check_hlds__stratify__MainPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__MainPieces_17, 0) = ((MR_Box) (check_hlds__stratify__ErrOrWarnMsg_15));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__MainPieces_17, 1) = ((MR_Box) (check_hlds__stratify__V_34_34));
    }
    {
      check_hlds__stratify__V_55_55 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_63_63, check_hlds__stratify__Preamble_14, check_hlds__stratify__MainPieces_17);
    }
    {
      check_hlds__stratify__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__stratify__V_54_54, 0) = ((MR_Box) (check_hlds__stratify__V_55_55));
    }
    {
      check_hlds__stratify__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_53_53, 0) = ((MR_Box) (check_hlds__stratify__V_54_54));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[17])));
    }
    {
      check_hlds__stratify__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Msg_19, 0) = ((MR_Box) (check_hlds__stratify__Context_9));
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Msg_19, 1) = ((MR_Box) (check_hlds__stratify__V_53_53));
    }
    {
      check_hlds__stratify__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_61_61, 0) = ((MR_Box) (check_hlds__stratify__Msg_19));
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__stratify__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 0) = ((MR_Box) (check_hlds__stratify__Severity_16));
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 2) = ((MR_Box) (check_hlds__stratify__V_61_61));
    }
    return check_hlds__stratify__Spec_12;
  }
}

static void MR_CALL 
check_hlds__stratify__get_called_procs_cases_3_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Calls_3 = check_hlds__stratify__STATE_VARIABLE_Calls_0_2;
        else
          {
            MR_Word check_hlds__stratify__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__Goal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_7, (MR_Integer) 2)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_15_15;
            MR_Word check_hlds__stratify__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_7, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_7, (MR_Integer) 1)));

            {
              check_hlds__stratify__get_called_procs_3_p_0(check_hlds__stratify__Goal_12, check_hlds__stratify__STATE_VARIABLE_Calls_0_2, &check_hlds__stratify__STATE_VARIABLE_Calls_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Cases_8;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_2 = check_hlds__stratify__STATE_VARIABLE_Calls_15_15;

              check_hlds__stratify__STATE_VARIABLE_Calls_0_2 = check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_2;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__get_called_procs_goals_3_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Calls_3 = check_hlds__stratify__STATE_VARIABLE_Calls_0_2;
        else
          {
            MR_Word check_hlds__stratify__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_12_12;

            {
              check_hlds__stratify__get_called_procs_3_p_0(check_hlds__stratify__Goal_7, check_hlds__stratify__STATE_VARIABLE_Calls_0_2, &check_hlds__stratify__STATE_VARIABLE_Calls_12_12);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_8;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_2 = check_hlds__stratify__STATE_VARIABLE_Calls_12_12;

              check_hlds__stratify__STATE_VARIABLE_Calls_0_2 = check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_2;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__get_called_procs_3_p_0(
  MR_Word check_hlds__stratify__Goal_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_87,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_88)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;
        MR_Word check_hlds__stratify__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_4, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_4, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__stratify__GoalExpr_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__stratify__SubGoal_71 = (MR_Word) MR_body(((MR_Word) check_hlds__stratify__GoalExpr_6), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__stratify__Goal__tmp_copy_4 = check_hlds__stratify__SubGoal_71;

                check_hlds__stratify__Goal_4 = check_hlds__stratify__Goal__tmp_copy_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__stratify__RHS_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__GoalExpr_6, (MR_Integer) 1)));
              MR_Word check_hlds__stratify__Unification_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__GoalExpr_6, (MR_Integer) 3)));
              MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_104_104;
              MR_Word check_hlds__stratify___Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__GoalExpr_6, (MR_Integer) 0)));
              MR_Word check_hlds__stratify___Mode_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__GoalExpr_6, (MR_Integer) 2)));
              MR_Word check_hlds__stratify___Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__GoalExpr_6, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) check_hlds__stratify__RHS_9)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__stratify__STATE_VARIABLE_Calls_104_104 = check_hlds__stratify__STATE_VARIABLE_Calls_0_87;
                  break;
                case (MR_Integer) 1:
                  check_hlds__stratify__STATE_VARIABLE_Calls_104_104 = check_hlds__stratify__STATE_VARIABLE_Calls_0_87;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__stratify__LambdaGoal_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_9, (MR_Integer) 6)));
                    MR_Word check_hlds__stratify___Purity_13 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_9, (MR_Integer) 0)))) & (MR_Integer) 3);
                    MR_Word check_hlds__stratify___Groundness_14 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_9, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__stratify___PredOrFunc_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_9, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__stratify___NonLocals_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_9, (MR_Integer) 2)));
                    MR_Word check_hlds__stratify___Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_9, (MR_Integer) 3)));
                    MR_Word check_hlds__stratify___Modes_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_9, (MR_Integer) 4)));
                    MR_Word check_hlds__stratify___Determinism_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_9, (MR_Integer) 5)));

                    {
                      check_hlds__stratify__get_called_procs_3_p_0(check_hlds__stratify__LambdaGoal_21, check_hlds__stratify__STATE_VARIABLE_Calls_0_87, &check_hlds__stratify__STATE_VARIABLE_Calls_104_104);
                    }
                  }
                  break;
              }
              switch (MR_tag((MR_Word) check_hlds__stratify__Unification_11)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__stratify__ConsId_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_11, (MR_Integer) 1)));
                    MR_Word check_hlds__stratify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_11, (MR_Integer) 0)));
                    MR_Word check_hlds__stratify__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_11, (MR_Integer) 2)));
                    MR_Word check_hlds__stratify__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_11, (MR_Integer) 3)));
                    MR_Word check_hlds__stratify__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_11, (MR_Integer) 4)));
                    MR_Word check_hlds__stratify__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_11, (MR_Integer) 5)));
                    MR_Word check_hlds__stratify__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_11, (MR_Integer) 6)));
                    MR_Word check_hlds__stratify__ShroudedPredProcId_33;

                    check_hlds__stratify__succeeded = ((((MR_tag((MR_Word) check_hlds__stratify__ConsId_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__ConsId_27, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (check_hlds__stratify__succeeded)
                      {
                        check_hlds__stratify__ShroudedPredProcId_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__ConsId_27, (MR_Integer) 1)));
                        {
                          MR_Word check_hlds__stratify__PredProcId_35;

                          {
                            check_hlds__stratify__PredProcId_35 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__stratify__ShroudedPredProcId_33);
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *check_hlds__stratify__STATE_VARIABLE_Calls_88 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__PredProcId_35));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Calls_104_104));
                          }
                        }
                      }
                    else
                      *check_hlds__stratify__STATE_VARIABLE_Calls_88 = check_hlds__stratify__STATE_VARIABLE_Calls_104_104;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__stratify__STATE_VARIABLE_Calls_88 = check_hlds__stratify__STATE_VARIABLE_Calls_104_104;
                  break;
                case (MR_Integer) 2:
                  *check_hlds__stratify__STATE_VARIABLE_Calls_88 = check_hlds__stratify__STATE_VARIABLE_Calls_104_104;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Unification_11, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__stratify__STATE_VARIABLE_Calls_88 = check_hlds__stratify__STATE_VARIABLE_Calls_104_104;
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
              MR_Word check_hlds__stratify__CPred_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_6, (MR_Integer) 0)));
              MR_Integer check_hlds__stratify__CProc_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_6, (MR_Integer) 1)));
              MR_Word check_hlds__stratify__V_103_103;
              MR_Word check_hlds__stratify___Args_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_6, (MR_Integer) 2)));
              MR_Word check_hlds__stratify___Builtin_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_6, (MR_Integer) 3)));
              MR_Word check_hlds__stratify___UC_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_6, (MR_Integer) 4)));
              MR_Word check_hlds__stratify___Sym_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_6, (MR_Integer) 5)));

              {
                check_hlds__stratify__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__stratify__V_103_103, 0) = ((MR_Box) (check_hlds__stratify__CPred_49));
                MR_hl_field(MR_mktag(0), check_hlds__stratify__V_103_103, 1) = ((MR_Box) (check_hlds__stratify__CProc_50));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *check_hlds__stratify__STATE_VARIABLE_Calls_88 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__V_103_103));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Calls_0_87));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__stratify__STATE_VARIABLE_Calls_88 = check_hlds__stratify__STATE_VARIABLE_Calls_0_87;
                break;
              case (MR_Integer) 1:
                *check_hlds__stratify__STATE_VARIABLE_Calls_88 = check_hlds__stratify__STATE_VARIABLE_Calls_0_87;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__stratify__Goals_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify___ConjType_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__get_called_procs_goals_3_p_0(check_hlds__stratify__Goals_65, check_hlds__stratify__STATE_VARIABLE_Calls_0_87, check_hlds__stratify__STATE_VARIABLE_Calls_88);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__stratify__Goals_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__get_called_procs_goals_3_p_0(check_hlds__stratify__Goals_123, check_hlds__stratify__STATE_VARIABLE_Calls_0_87, check_hlds__stratify__STATE_VARIABLE_Calls_88);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__stratify__Cases_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify___Fail_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify___Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__get_called_procs_cases_3_p_0(check_hlds__stratify__Cases_67, check_hlds__stratify__STATE_VARIABLE_Calls_0_87, check_hlds__stratify__STATE_VARIABLE_Calls_88);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__stratify__Reason_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify__SubGoal_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify__FGT_74;
                  MR_Word check_hlds__stratify__V_73_73;

                  check_hlds__stratify__succeeded = ((((MR_tag((MR_Word) check_hlds__stratify__Reason_72)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_72, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (check_hlds__stratify__succeeded)
                    {
                      check_hlds__stratify__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_72, (MR_Integer) 1)));
                      check_hlds__stratify__FGT_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_72, (MR_Integer) 2)));
                      switch (check_hlds__stratify__FGT_74) {
                        default:
                          check_hlds__stratify__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          check_hlds__stratify__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          check_hlds__stratify__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (check_hlds__stratify__succeeded)
                    *check_hlds__stratify__STATE_VARIABLE_Calls_88 = check_hlds__stratify__STATE_VARIABLE_Calls_0_87;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__stratify__Goal__tmp_copy_4 = check_hlds__stratify__SubGoal_119;

                        check_hlds__stratify__Goal_4 = check_hlds__stratify__Goal__tmp_copy_4;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word check_hlds__stratify__Cond_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify__Then_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify__Else_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 4)));
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_97_97;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_98_98;
                  MR_Word check_hlds__stratify___Vars_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__get_called_procs_3_p_0(check_hlds__stratify__Cond_68, check_hlds__stratify__STATE_VARIABLE_Calls_0_87, &check_hlds__stratify__STATE_VARIABLE_Calls_97_97);
                  }
                  {
                    check_hlds__stratify__get_called_procs_3_p_0(check_hlds__stratify__Then_69, check_hlds__stratify__STATE_VARIABLE_Calls_97_97, &check_hlds__stratify__STATE_VARIABLE_Calls_98_98);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__stratify__Goal__tmp_copy_4 = check_hlds__stratify__Else_70;
                    MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_87 = check_hlds__stratify__STATE_VARIABLE_Calls_98_98;

                    check_hlds__stratify__STATE_VARIABLE_Calls_0_87 = check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_87;
                    check_hlds__stratify__Goal_4 = check_hlds__stratify__Goal__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__stratify__ShortHand_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_6, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__stratify__ShortHand_75)) {
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
                        MR_Word check_hlds__stratify__MainGoal_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_75, (MR_Integer) 4)));
                        MR_Word check_hlds__stratify__OrElseGoals_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_75, (MR_Integer) 5)));
                        MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_93_93;
                        MR_Word check_hlds__stratify__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_75, (MR_Integer) 0)));
                        MR_Word check_hlds__stratify__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_75, (MR_Integer) 1)));
                        MR_Word check_hlds__stratify__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_75, (MR_Integer) 2)));
                        MR_Word check_hlds__stratify__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_75, (MR_Integer) 3)));
                        MR_Word check_hlds__stratify__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_75, (MR_Integer) 6)));

                        {
                          check_hlds__stratify__get_called_procs_3_p_0(check_hlds__stratify__MainGoal_80, check_hlds__stratify__STATE_VARIABLE_Calls_0_87, &check_hlds__stratify__STATE_VARIABLE_Calls_93_93);
                        }
                        {
                          check_hlds__stratify__get_called_procs_goals_3_p_0(check_hlds__stratify__OrElseGoals_81, check_hlds__stratify__STATE_VARIABLE_Calls_93_93, check_hlds__stratify__STATE_VARIABLE_Calls_88);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__stratify__SubGoal_120 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_75, (MR_Integer) 2)));
                        MR_Word check_hlds__stratify__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_75, (MR_Integer) 0)));
                        MR_Word check_hlds__stratify__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_75, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__stratify__Goal__tmp_copy_4 = check_hlds__stratify__SubGoal_120;

                          check_hlds__stratify__Goal_4 = check_hlds__stratify__Goal__tmp_copy_4;
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
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_3,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_0_4,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HasAT_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_6,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__stratify__STATE_VARIABLE_CallsHO_7 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0_6;
            *check_hlds__stratify__STATE_VARIABLE_HasAT_5 = check_hlds__stratify__STATE_VARIABLE_HasAT_0_4;
            *check_hlds__stratify__STATE_VARIABLE_Calls_3 = check_hlds__stratify__STATE_VARIABLE_Calls_0_2;
          }
        else
          {
            MR_Word check_hlds__stratify__Case_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 2)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_31_31;
            MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_32_32;
            MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_33_33;
            MR_Word check_hlds__stratify__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 1)));

            {
              check_hlds__stratify__stratify_analyze_goal_7_p_0(check_hlds__stratify__Goal_24, check_hlds__stratify__STATE_VARIABLE_Calls_0_2, &check_hlds__stratify__STATE_VARIABLE_Calls_31_31, check_hlds__stratify__STATE_VARIABLE_HasAT_0_4, &check_hlds__stratify__STATE_VARIABLE_HasAT_32_32, check_hlds__stratify__STATE_VARIABLE_CallsHO_0_6, &check_hlds__stratify__STATE_VARIABLE_CallsHO_33_33);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_18;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_2 = check_hlds__stratify__STATE_VARIABLE_Calls_31_31;
              MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_0__tmp_copy_4 = check_hlds__stratify__STATE_VARIABLE_HasAT_32_32;
              MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0__tmp_copy_6 = check_hlds__stratify__STATE_VARIABLE_CallsHO_33_33;

              check_hlds__stratify__STATE_VARIABLE_CallsHO_0_6 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0__tmp_copy_6;
              check_hlds__stratify__STATE_VARIABLE_HasAT_0_4 = check_hlds__stratify__STATE_VARIABLE_HasAT_0__tmp_copy_4;
              check_hlds__stratify__STATE_VARIABLE_Calls_0_2 = check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_2;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__stratify_analyze_goals_7_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_3,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_0_4,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HasAT_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_6,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__stratify__STATE_VARIABLE_CallsHO_7 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0_6;
            *check_hlds__stratify__STATE_VARIABLE_HasAT_5 = check_hlds__stratify__STATE_VARIABLE_HasAT_0_4;
            *check_hlds__stratify__STATE_VARIABLE_Calls_3 = check_hlds__stratify__STATE_VARIABLE_Calls_0_2;
          }
        else
          {
            MR_Word check_hlds__stratify__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_28_28;
            MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_29_29;
            MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_30_30;

            {
              check_hlds__stratify__stratify_analyze_goal_7_p_0(check_hlds__stratify__Goal_17, check_hlds__stratify__STATE_VARIABLE_Calls_0_2, &check_hlds__stratify__STATE_VARIABLE_Calls_28_28, check_hlds__stratify__STATE_VARIABLE_HasAT_0_4, &check_hlds__stratify__STATE_VARIABLE_HasAT_29_29, check_hlds__stratify__STATE_VARIABLE_CallsHO_0_6, &check_hlds__stratify__STATE_VARIABLE_CallsHO_30_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_18;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_2 = check_hlds__stratify__STATE_VARIABLE_Calls_28_28;
              MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_0__tmp_copy_4 = check_hlds__stratify__STATE_VARIABLE_HasAT_29_29;
              MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0__tmp_copy_6 = check_hlds__stratify__STATE_VARIABLE_CallsHO_30_30;

              check_hlds__stratify__STATE_VARIABLE_CallsHO_0_6 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0__tmp_copy_6;
              check_hlds__stratify__STATE_VARIABLE_HasAT_0_4 = check_hlds__stratify__STATE_VARIABLE_HasAT_0__tmp_copy_4;
              check_hlds__stratify__STATE_VARIABLE_Calls_0_2 = check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_2;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__stratify_analyze_goal_7_p_0(
  MR_Word check_hlds__stratify__Goal_8,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0_94,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Calls_95,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_0_96,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HasAT_97,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_99)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;
        MR_Word check_hlds__stratify__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_8, (MR_Integer) 0)));
        MR_Word check_hlds__stratify___GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_8, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__stratify__GoalExpr_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__stratify__SubGoal_78 = (MR_Word) MR_body(((MR_Word) check_hlds__stratify__GoalExpr_12), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__stratify__Goal__tmp_copy_8 = check_hlds__stratify__SubGoal_78;

                check_hlds__stratify__Goal_8 = check_hlds__stratify__Goal__tmp_copy_8;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word check_hlds__stratify__RHS_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__GoalExpr_12, (MR_Integer) 1)));
              MR_Word check_hlds__stratify__Unification_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__GoalExpr_12, (MR_Integer) 3)));
              MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_137_137;
              MR_Word check_hlds__stratify___Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__GoalExpr_12, (MR_Integer) 0)));
              MR_Word check_hlds__stratify___Mode_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__GoalExpr_12, (MR_Integer) 2)));
              MR_Word check_hlds__stratify___Context_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__GoalExpr_12, (MR_Integer) 4)));

              switch (MR_tag((MR_Word) check_hlds__stratify__RHS_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  check_hlds__stratify__STATE_VARIABLE_HasAT_137_137 = check_hlds__stratify__STATE_VARIABLE_HasAT_0_96;
                  break;
                case (MR_Integer) 1:
                  check_hlds__stratify__STATE_VARIABLE_HasAT_137_137 = check_hlds__stratify__STATE_VARIABLE_HasAT_0_96;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word check_hlds__stratify__LambdaGoal_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_15, (MR_Integer) 6)));
                    MR_Word check_hlds__stratify__CalledProcs_28;
                    MR_Word check_hlds__stratify___Purity_19 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_15, (MR_Integer) 0)))) & (MR_Integer) 3);
                    MR_Word check_hlds__stratify___Groundness_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_15, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word check_hlds__stratify___PredOrFunc_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_15, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word check_hlds__stratify___NonLocals_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_15, (MR_Integer) 2)));
                    MR_Word check_hlds__stratify___Vars_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_15, (MR_Integer) 3)));
                    MR_Word check_hlds__stratify___Modes_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_15, (MR_Integer) 4)));
                    MR_Word check_hlds__stratify___Determinism_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__RHS_15, (MR_Integer) 5)));

                    {
                      check_hlds__stratify__get_called_procs_3_p_0(check_hlds__stratify__LambdaGoal_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__stratify__CalledProcs_28);
                    }
                    {
                      mercury__set__insert_list_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, check_hlds__stratify__CalledProcs_28, check_hlds__stratify__STATE_VARIABLE_HasAT_0_96, &check_hlds__stratify__STATE_VARIABLE_HasAT_137_137);
                    }
                  }
                  break;
              }
              switch (MR_tag((MR_Word) check_hlds__stratify__Unification_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word check_hlds__stratify__ConsId_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_17, (MR_Integer) 1)));
                    MR_Word check_hlds__stratify__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_17, (MR_Integer) 0)));
                    MR_Word check_hlds__stratify__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_17, (MR_Integer) 2)));
                    MR_Word check_hlds__stratify__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_17, (MR_Integer) 3)));
                    MR_Word check_hlds__stratify__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_17, (MR_Integer) 4)));
                    MR_Word check_hlds__stratify__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_17, (MR_Integer) 5)));
                    MR_Word check_hlds__stratify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Unification_17, (MR_Integer) 6)));
                    MR_Word check_hlds__stratify__ShroudedPredProcId_40;

                    check_hlds__stratify__succeeded = ((((MR_tag((MR_Word) check_hlds__stratify__ConsId_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__ConsId_34, (MR_Integer) 0)))) == (MR_Integer) 4)));
                    if (check_hlds__stratify__succeeded)
                      {
                        check_hlds__stratify__ShroudedPredProcId_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__ConsId_34, (MR_Integer) 1)));
                        {
                          MR_Word check_hlds__stratify__PredProcId_42;

                          {
                            check_hlds__stratify__PredProcId_42 = hlds__hlds_pred__unshroud_pred_proc_id_1_f_0(check_hlds__stratify__ShroudedPredProcId_40);
                          }
                          {
                            mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__stratify__PredProcId_42)), check_hlds__stratify__STATE_VARIABLE_HasAT_137_137, check_hlds__stratify__STATE_VARIABLE_HasAT_97);
                          }
                        }
                      }
                    else
                      *check_hlds__stratify__STATE_VARIABLE_HasAT_97 = check_hlds__stratify__STATE_VARIABLE_HasAT_137_137;
                  }
                  break;
                case (MR_Integer) 1:
                  *check_hlds__stratify__STATE_VARIABLE_HasAT_97 = check_hlds__stratify__STATE_VARIABLE_HasAT_137_137;
                  break;
                case (MR_Integer) 2:
                  *check_hlds__stratify__STATE_VARIABLE_HasAT_97 = check_hlds__stratify__STATE_VARIABLE_HasAT_137_137;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Unification_17, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *check_hlds__stratify__STATE_VARIABLE_HasAT_97 = check_hlds__stratify__STATE_VARIABLE_HasAT_137_137;
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
              *check_hlds__stratify__STATE_VARIABLE_Calls_95 = check_hlds__stratify__STATE_VARIABLE_Calls_0_94;
              *check_hlds__stratify__STATE_VARIABLE_CallsHO_99 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__stratify__CPred_56 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_12, (MR_Integer) 0)));
              MR_Integer check_hlds__stratify__CProc_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_12, (MR_Integer) 1)));
              MR_Word check_hlds__stratify__V_134_134;
              MR_Word check_hlds__stratify___Args_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_12, (MR_Integer) 2)));
              MR_Word check_hlds__stratify___Builtin_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_12, (MR_Integer) 3)));
              MR_Word check_hlds__stratify___UC_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_12, (MR_Integer) 4)));
              MR_Word check_hlds__stratify___Sym_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_12, (MR_Integer) 5)));

              {
                check_hlds__stratify__V_134_134 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__stratify__V_134_134, 0) = ((MR_Box) (check_hlds__stratify__CPred_56));
                MR_hl_field(MR_mktag(0), check_hlds__stratify__V_134_134, 1) = ((MR_Box) (check_hlds__stratify__CProc_57));
              }
              {
                mercury__set__insert_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__stratify__V_134_134)), check_hlds__stratify__STATE_VARIABLE_Calls_0_94, check_hlds__stratify__STATE_VARIABLE_Calls_95);
              }
              *check_hlds__stratify__STATE_VARIABLE_HasAT_97 = check_hlds__stratify__STATE_VARIABLE_HasAT_0_96;
              *check_hlds__stratify__STATE_VARIABLE_CallsHO_99 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *check_hlds__stratify__STATE_VARIABLE_CallsHO_99 = (MR_Integer) 1;
                  *check_hlds__stratify__STATE_VARIABLE_Calls_95 = check_hlds__stratify__STATE_VARIABLE_Calls_0_94;
                  *check_hlds__stratify__STATE_VARIABLE_HasAT_97 = check_hlds__stratify__STATE_VARIABLE_HasAT_0_96;
                }
                break;
              case (MR_Integer) 1:
                {
                  *check_hlds__stratify__STATE_VARIABLE_Calls_95 = check_hlds__stratify__STATE_VARIABLE_Calls_0_94;
                  *check_hlds__stratify__STATE_VARIABLE_HasAT_97 = check_hlds__stratify__STATE_VARIABLE_HasAT_0_96;
                  *check_hlds__stratify__STATE_VARIABLE_CallsHO_99 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__stratify__Goals_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify___ConjType_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__stratify_analyze_goals_7_p_0(check_hlds__stratify__Goals_72, check_hlds__stratify__STATE_VARIABLE_Calls_0_94, check_hlds__stratify__STATE_VARIABLE_Calls_95, check_hlds__stratify__STATE_VARIABLE_HasAT_0_96, check_hlds__stratify__STATE_VARIABLE_HasAT_97, check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98, check_hlds__stratify__STATE_VARIABLE_CallsHO_99);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__stratify__Goals_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__stratify_analyze_goals_7_p_0(check_hlds__stratify__Goals_159, check_hlds__stratify__STATE_VARIABLE_Calls_0_94, check_hlds__stratify__STATE_VARIABLE_Calls_95, check_hlds__stratify__STATE_VARIABLE_HasAT_0_96, check_hlds__stratify__STATE_VARIABLE_HasAT_97, check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98, check_hlds__stratify__STATE_VARIABLE_CallsHO_99);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__stratify__Cases_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify___Fail_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify___Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__stratify_analyze_cases_7_p_0(check_hlds__stratify__Cases_74, check_hlds__stratify__STATE_VARIABLE_Calls_0_94, check_hlds__stratify__STATE_VARIABLE_Calls_95, check_hlds__stratify__STATE_VARIABLE_HasAT_0_96, check_hlds__stratify__STATE_VARIABLE_HasAT_97, check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98, check_hlds__stratify__STATE_VARIABLE_CallsHO_99);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__stratify__Reason_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify__SubGoal_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify__FGT_81;
                  MR_Word check_hlds__stratify__V_80_80;

                  check_hlds__stratify__succeeded = ((((MR_tag((MR_Word) check_hlds__stratify__Reason_79)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_79, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (check_hlds__stratify__succeeded)
                    {
                      check_hlds__stratify__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_79, (MR_Integer) 1)));
                      check_hlds__stratify__FGT_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_79, (MR_Integer) 2)));
                      switch (check_hlds__stratify__FGT_81) {
                        default:
                          check_hlds__stratify__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          check_hlds__stratify__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          check_hlds__stratify__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (check_hlds__stratify__succeeded)
                    {
                      *check_hlds__stratify__STATE_VARIABLE_CallsHO_99 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98;
                      *check_hlds__stratify__STATE_VARIABLE_HasAT_97 = check_hlds__stratify__STATE_VARIABLE_HasAT_0_96;
                      *check_hlds__stratify__STATE_VARIABLE_Calls_95 = check_hlds__stratify__STATE_VARIABLE_Calls_0_94;
                    }
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__stratify__Goal__tmp_copy_8 = check_hlds__stratify__SubGoal_152;

                        check_hlds__stratify__Goal_8 = check_hlds__stratify__Goal__tmp_copy_8;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word check_hlds__stratify__Cond_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify__Then_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify__Else_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 4)));
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_118_118;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_119_119;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_120_120;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_121_121;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_122_122;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_123_123;
                  MR_Word check_hlds__stratify___Vars_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__stratify_analyze_goal_7_p_0(check_hlds__stratify__Cond_75, check_hlds__stratify__STATE_VARIABLE_Calls_0_94, &check_hlds__stratify__STATE_VARIABLE_Calls_118_118, check_hlds__stratify__STATE_VARIABLE_HasAT_0_96, &check_hlds__stratify__STATE_VARIABLE_HasAT_119_119, check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98, &check_hlds__stratify__STATE_VARIABLE_CallsHO_120_120);
                  }
                  {
                    check_hlds__stratify__stratify_analyze_goal_7_p_0(check_hlds__stratify__Then_76, check_hlds__stratify__STATE_VARIABLE_Calls_118_118, &check_hlds__stratify__STATE_VARIABLE_Calls_121_121, check_hlds__stratify__STATE_VARIABLE_HasAT_119_119, &check_hlds__stratify__STATE_VARIABLE_HasAT_122_122, check_hlds__stratify__STATE_VARIABLE_CallsHO_120_120, &check_hlds__stratify__STATE_VARIABLE_CallsHO_123_123);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__stratify__Goal__tmp_copy_8 = check_hlds__stratify__Else_77;
                    MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_94 = check_hlds__stratify__STATE_VARIABLE_Calls_121_121;
                    MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_0__tmp_copy_96 = check_hlds__stratify__STATE_VARIABLE_HasAT_122_122;
                    MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0__tmp_copy_98 = check_hlds__stratify__STATE_VARIABLE_CallsHO_123_123;

                    check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0__tmp_copy_98;
                    check_hlds__stratify__STATE_VARIABLE_HasAT_0_96 = check_hlds__stratify__STATE_VARIABLE_HasAT_0__tmp_copy_96;
                    check_hlds__stratify__STATE_VARIABLE_Calls_0_94 = check_hlds__stratify__STATE_VARIABLE_Calls_0__tmp_copy_94;
                    check_hlds__stratify__Goal_8 = check_hlds__stratify__Goal__tmp_copy_8;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__stratify__ShortHand_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_12, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__stratify__ShortHand_82)) {
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
                        MR_Word check_hlds__stratify__MainGoal_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_82, (MR_Integer) 4)));
                        MR_Word check_hlds__stratify__OrElseGoals_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_82, (MR_Integer) 5)));
                        MR_Word check_hlds__stratify__STATE_VARIABLE_Calls_106_106;
                        MR_Word check_hlds__stratify__STATE_VARIABLE_HasAT_107_107;
                        MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_108_108;
                        MR_Word check_hlds__stratify__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_82, (MR_Integer) 0)));
                        MR_Word check_hlds__stratify__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_82, (MR_Integer) 1)));
                        MR_Word check_hlds__stratify__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_82, (MR_Integer) 2)));
                        MR_Word check_hlds__stratify__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_82, (MR_Integer) 3)));
                        MR_Word check_hlds__stratify__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_82, (MR_Integer) 6)));

                        {
                          check_hlds__stratify__stratify_analyze_goal_7_p_0(check_hlds__stratify__MainGoal_87, check_hlds__stratify__STATE_VARIABLE_Calls_0_94, &check_hlds__stratify__STATE_VARIABLE_Calls_106_106, check_hlds__stratify__STATE_VARIABLE_HasAT_0_96, &check_hlds__stratify__STATE_VARIABLE_HasAT_107_107, check_hlds__stratify__STATE_VARIABLE_CallsHO_0_98, &check_hlds__stratify__STATE_VARIABLE_CallsHO_108_108);
                        }
                        {
                          check_hlds__stratify__stratify_analyze_goals_7_p_0(check_hlds__stratify__OrElseGoals_88, check_hlds__stratify__STATE_VARIABLE_Calls_106_106, check_hlds__stratify__STATE_VARIABLE_Calls_95, check_hlds__stratify__STATE_VARIABLE_HasAT_107_107, check_hlds__stratify__STATE_VARIABLE_HasAT_97, check_hlds__stratify__STATE_VARIABLE_CallsHO_108_108, check_hlds__stratify__STATE_VARIABLE_CallsHO_99);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__stratify__SubGoal_153 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_82, (MR_Integer) 2)));
                        MR_Word check_hlds__stratify__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_82, (MR_Integer) 0)));
                        MR_Word check_hlds__stratify__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_82, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__stratify__Goal__tmp_copy_8 = check_hlds__stratify__SubGoal_153;

                          check_hlds__stratify__Goal_8 = check_hlds__stratify__Goal__tmp_copy_8;
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
check_hlds__stratify__higherorder_in_out1_7_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOIn_0_4,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOIn_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOOut_0_6,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOOut_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((check_hlds__stratify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *check_hlds__stratify__STATE_VARIABLE_HOOut_7 = check_hlds__stratify__STATE_VARIABLE_HOOut_0_6;
              *check_hlds__stratify__STATE_VARIABLE_HOIn_5 = check_hlds__stratify__STATE_VARIABLE_HOIn_0_4;
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
            MR_Word check_hlds__stratify__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));

            if ((check_hlds__stratify__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.higherorder_in_out1\'/7", (MR_String) "mismatched lists");
                  return;
                }
              }
            else
              {
                MR_Word check_hlds__stratify__Mode_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 0)));
                MR_Word check_hlds__stratify__Modes_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word check_hlds__stratify__STATE_VARIABLE_HOIn_50_50;
                MR_Word check_hlds__stratify__STATE_VARIABLE_HOOut_51_51;

                {
                  check_hlds__stratify__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(check_hlds__stratify__V_55_55);
                }
                if (check_hlds__stratify__succeeded)
                  {
                    {
                      check_hlds__stratify__succeeded = check_hlds__mode_util__mode_is_input_2_p_0(check_hlds__stratify__HeadVar__3_3, check_hlds__stratify__Mode_41);
                    }
                    if (check_hlds__stratify__succeeded)
                      {
                        check_hlds__stratify__STATE_VARIABLE_HOIn_50_50 = (MR_Integer) 1;
                        check_hlds__stratify__STATE_VARIABLE_HOOut_51_51 = check_hlds__stratify__STATE_VARIABLE_HOOut_0_6;
                      }
                    else
                      {
                        {
                          check_hlds__stratify__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(check_hlds__stratify__HeadVar__3_3, check_hlds__stratify__Mode_41);
                        }
                        if (check_hlds__stratify__succeeded)
                          check_hlds__stratify__STATE_VARIABLE_HOOut_51_51 = (MR_Integer) 1;
                        else
                          check_hlds__stratify__STATE_VARIABLE_HOOut_51_51 = check_hlds__stratify__STATE_VARIABLE_HOOut_0_6;
                        check_hlds__stratify__STATE_VARIABLE_HOIn_50_50 = check_hlds__stratify__STATE_VARIABLE_HOIn_0_4;
                      }
                  }
                else
                  {
                    check_hlds__stratify__STATE_VARIABLE_HOOut_51_51 = check_hlds__stratify__STATE_VARIABLE_HOOut_0_6;
                    check_hlds__stratify__STATE_VARIABLE_HOIn_50_50 = check_hlds__stratify__STATE_VARIABLE_HOIn_0_4;
                  }
                /* direct tailcall eliminated */
                {
                  MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__V_54_54;
                  MR_Word check_hlds__stratify__HeadVar__2__tmp_copy_2 = check_hlds__stratify__Modes_42;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_HOIn_0__tmp_copy_4 = check_hlds__stratify__STATE_VARIABLE_HOIn_50_50;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_HOOut_0__tmp_copy_6 = check_hlds__stratify__STATE_VARIABLE_HOOut_51_51;

                  check_hlds__stratify__STATE_VARIABLE_HOOut_0_6 = check_hlds__stratify__STATE_VARIABLE_HOOut_0__tmp_copy_6;
                  check_hlds__stratify__STATE_VARIABLE_HOIn_0_4 = check_hlds__stratify__STATE_VARIABLE_HOIn_0__tmp_copy_4;
                  check_hlds__stratify__HeadVar__2_2 = check_hlds__stratify__HeadVar__2__tmp_copy_2;
                  check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__stratify_process_proc_11_p_0(
  MR_Integer check_hlds__stratify__ProcId_12,
  MR_Word check_hlds__stratify__ModuleInfo_13,
  MR_Word check_hlds__stratify__PredId_14,
  MR_Word check_hlds__stratify__ArgTypes_15,
  MR_Word check_hlds__stratify__ProcTable_16,
  MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_28,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_ProcCalls_29,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_30,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_31,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_32,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_33)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__TypeCtorInfo_40_40;
    MR_Word check_hlds__stratify__TypeCtorInfo_12_50;
    MR_Word check_hlds__stratify__ProcInfo_20;
    MR_Word check_hlds__stratify__ArgModes_21;
    MR_Word check_hlds__stratify__Goal_22;
    MR_Word check_hlds__stratify__PredProcId_23;
    MR_Word check_hlds__stratify__Calls_24;
    MR_Word check_hlds__stratify__HaveAT_25;
    MR_Word check_hlds__stratify__CallsHigherOrder_26;
    MR_Word check_hlds__stratify__HOInOut_27;
    MR_Word check_hlds__stratify__V_35_35;
    MR_Word check_hlds__stratify__Calls0_47;
    MR_Word check_hlds__stratify__TakenAddrs0_48;
    MR_Word check_hlds__stratify__HOIn_55;
    MR_Word check_hlds__stratify__HOOut_56;
    MR_Box check_hlds__stratify__conv0_ProcInfo_20;

    {
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__stratify__ProcTable_16, check_hlds__stratify__ProcId_12, &check_hlds__stratify__conv0_ProcInfo_20);
    }
    check_hlds__stratify__ProcInfo_20 = ((MR_Word) check_hlds__stratify__conv0_ProcInfo_20);
    {
      hlds__hlds_pred__proc_info_get_argmodes_2_p_0(check_hlds__stratify__ProcInfo_20, &check_hlds__stratify__ArgModes_21);
    }
    {
      hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__stratify__ProcInfo_20, &check_hlds__stratify__Goal_22);
    }
    {
      check_hlds__stratify__PredProcId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_23, 0) = ((MR_Box) (check_hlds__stratify__PredId_14));
      MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_23, 1) = ((MR_Box) (check_hlds__stratify__ProcId_12));
    }
    check_hlds__stratify__TypeCtorInfo_12_50 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      mercury__set__init_1_p_0(check_hlds__stratify__TypeCtorInfo_12_50, &check_hlds__stratify__Calls0_47);
    }
    {
      mercury__set__init_1_p_0(check_hlds__stratify__TypeCtorInfo_12_50, &check_hlds__stratify__TakenAddrs0_48);
    }
    {
      check_hlds__stratify__stratify_analyze_goal_7_p_0(check_hlds__stratify__Goal_22, check_hlds__stratify__Calls0_47, &check_hlds__stratify__Calls_24, check_hlds__stratify__TakenAddrs0_48, &check_hlds__stratify__HaveAT_25, (MR_Integer) 0, &check_hlds__stratify__CallsHigherOrder_26);
    }
    check_hlds__stratify__TypeCtorInfo_40_40 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      mercury__map__det_insert_4_p_0(check_hlds__stratify__TypeCtorInfo_40_40, (MR_Word) &check_hlds__stratify_scalar_common_1[0], ((MR_Box) (check_hlds__stratify__PredProcId_23)), ((MR_Box) (check_hlds__stratify__Calls_24)), check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_28, check_hlds__stratify__STATE_VARIABLE_ProcCalls_29);
    }
    {
      check_hlds__stratify__higherorder_in_out1_7_p_0(check_hlds__stratify__ArgTypes_15, check_hlds__stratify__ArgModes_21, check_hlds__stratify__ModuleInfo_13, (MR_Integer) 0, &check_hlds__stratify__HOIn_55, (MR_Integer) 0, &check_hlds__stratify__HOOut_56);
    }
    switch (check_hlds__stratify__HOIn_55) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (check_hlds__stratify__HOOut_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__stratify__HOInOut_27 = (MR_Integer) 3;
            break;
          case (MR_Integer) 1:
            check_hlds__stratify__HOInOut_27 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (check_hlds__stratify__HOOut_56) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            check_hlds__stratify__HOInOut_27 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            check_hlds__stratify__HOInOut_27 = (MR_Integer) 2;
            break;
        }
        break;
    }
    {
      check_hlds__stratify__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), check_hlds__stratify__V_35_35, 0) = ((MR_Box) (check_hlds__stratify__HaveAT_25));
      MR_hl_field(MR_mktag(0), check_hlds__stratify__V_35_35, 1) = ((MR_Box) (check_hlds__stratify__HOInOut_27));
    }
    {
      mercury__map__det_insert_4_p_0(check_hlds__stratify__TypeCtorInfo_40_40, (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0, ((MR_Box) (check_hlds__stratify__PredProcId_23)), ((MR_Box) (check_hlds__stratify__V_35_35)), check_hlds__stratify__STATE_VARIABLE_HOInfo_0_30, check_hlds__stratify__STATE_VARIABLE_HOInfo_31);
    }
    switch (check_hlds__stratify__CallsHigherOrder_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__set__insert_3_p_0(check_hlds__stratify__TypeCtorInfo_40_40, ((MR_Box) (check_hlds__stratify__PredProcId_23)), check_hlds__stratify__STATE_VARIABLE_CallsHO_0_32, check_hlds__stratify__STATE_VARIABLE_CallsHO_33);
        }
        break;
      case (MR_Integer) 0:
        *check_hlds__stratify__STATE_VARIABLE_CallsHO_33 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0_32;
        break;
    }
  }
}

static void MR_CALL 
check_hlds__stratify__stratify_process_procs_11_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__ModuleInfo_2,
  MR_Word check_hlds__stratify__PredId_3,
  MR_Word check_hlds__stratify__ArgTypes_4,
  MR_Word check_hlds__stratify__ProcTable_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_6,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_ProcCalls_7,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_8,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_9,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_10,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__stratify__STATE_VARIABLE_CallsHO_11 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0_10;
            *check_hlds__stratify__STATE_VARIABLE_HOInfo_9 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0_8;
            *check_hlds__stratify__STATE_VARIABLE_ProcCalls_7 = check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_6;
          }
        else
          {
            MR_Integer check_hlds__stratify__ProcId_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__ProcIds_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_40_40;
            MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_41_41;
            MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_42_42;

            {
              check_hlds__stratify__stratify_process_proc_11_p_0(check_hlds__stratify__ProcId_25, check_hlds__stratify__ModuleInfo_2, check_hlds__stratify__PredId_3, check_hlds__stratify__ArgTypes_4, check_hlds__stratify__ProcTable_5, check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_6, &check_hlds__stratify__STATE_VARIABLE_ProcCalls_40_40, check_hlds__stratify__STATE_VARIABLE_HOInfo_0_8, &check_hlds__stratify__STATE_VARIABLE_HOInfo_41_41, check_hlds__stratify__STATE_VARIABLE_CallsHO_0_10, &check_hlds__stratify__STATE_VARIABLE_CallsHO_42_42);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__ProcIds_26;
              MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_0__tmp_copy_6 = check_hlds__stratify__STATE_VARIABLE_ProcCalls_40_40;
              MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0__tmp_copy_8 = check_hlds__stratify__STATE_VARIABLE_HOInfo_41_41;
              MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0__tmp_copy_10 = check_hlds__stratify__STATE_VARIABLE_CallsHO_42_42;

              check_hlds__stratify__STATE_VARIABLE_CallsHO_0_10 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0__tmp_copy_10;
              check_hlds__stratify__STATE_VARIABLE_HOInfo_0_8 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0__tmp_copy_8;
              check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_6 = check_hlds__stratify__STATE_VARIABLE_ProcCalls_0__tmp_copy_6;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__expand_predids_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__ModuleInfo_2,
  MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_3,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_ProcCalls_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_CallsHO_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__stratify__STATE_VARIABLE_CallsHO_8 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0_7;
            *check_hlds__stratify__STATE_VARIABLE_HOInfo_6 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5;
            *check_hlds__stratify__STATE_VARIABLE_ProcCalls_4 = check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_3;
          }
        else
          {
            MR_Word check_hlds__stratify__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__PredIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__PredInfo_25;
            MR_Word check_hlds__stratify__Procs_26;
            MR_Word check_hlds__stratify__ProcTable_27;
            MR_Word check_hlds__stratify__ArgTypes_28;
            MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_35_35;
            MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_36_36;
            MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_37_37;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__stratify__ModuleInfo_2, check_hlds__stratify__PredId_19, &check_hlds__stratify__PredInfo_25);
            }
            {
              check_hlds__stratify__Procs_26 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(check_hlds__stratify__PredInfo_25);
            }
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__stratify__PredInfo_25, &check_hlds__stratify__ProcTable_27);
            }
            {
              hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__stratify__PredInfo_25, &check_hlds__stratify__ArgTypes_28);
            }
            {
              check_hlds__stratify__stratify_process_procs_11_p_0(check_hlds__stratify__Procs_26, check_hlds__stratify__ModuleInfo_2, check_hlds__stratify__PredId_19, check_hlds__stratify__ArgTypes_28, check_hlds__stratify__ProcTable_27, check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_3, &check_hlds__stratify__STATE_VARIABLE_ProcCalls_35_35, check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5, &check_hlds__stratify__STATE_VARIABLE_HOInfo_36_36, check_hlds__stratify__STATE_VARIABLE_CallsHO_0_7, &check_hlds__stratify__STATE_VARIABLE_CallsHO_37_37);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__PredIds_20;
              MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_0__tmp_copy_3 = check_hlds__stratify__STATE_VARIABLE_ProcCalls_35_35;
              MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_HOInfo_36_36;
              MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_0__tmp_copy_7 = check_hlds__stratify__STATE_VARIABLE_CallsHO_37_37;

              check_hlds__stratify__STATE_VARIABLE_CallsHO_0_7 = check_hlds__stratify__STATE_VARIABLE_CallsHO_0__tmp_copy_7;
              check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0__tmp_copy_5;
              check_hlds__stratify__STATE_VARIABLE_ProcCalls_0_3 = check_hlds__stratify__STATE_VARIABLE_ProcCalls_0__tmp_copy_3;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__add_new_arcs2_4_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__CallerKey_2,
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepGraph_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_DepGraph_4 = check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3;
        else
          {
            MR_Word check_hlds__stratify__TypeCtorInfo_18_18 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            MR_Word check_hlds__stratify__Callee_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Cs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__CalleeKey_13;
            MR_Word check_hlds__stratify__STATE_VARIABLE_DepGraph_16_16;

            {
              mercury__digraph__lookup_key_3_p_0(check_hlds__stratify__TypeCtorInfo_18_18, check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3, ((MR_Box) (check_hlds__stratify__Callee_9)), &check_hlds__stratify__CalleeKey_13);
            }
            {
              mercury__digraph__add_edge_4_p_0(check_hlds__stratify__TypeCtorInfo_18_18, check_hlds__stratify__CallerKey_2, check_hlds__stratify__CalleeKey_13, check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3, &check_hlds__stratify__STATE_VARIABLE_DepGraph_16_16);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Cs_10;
              MR_Word check_hlds__stratify__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = check_hlds__stratify__STATE_VARIABLE_DepGraph_16_16;

              check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3 = check_hlds__stratify__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__add_new_arcs_4_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__CallsHO_2,
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepGraph_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_DepGraph_4 = check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3;
        else
          {
            MR_Word check_hlds__stratify__Caller_9;
            MR_Word check_hlds__stratify__CallerInfo_10;
            MR_Word check_hlds__stratify__Cs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_DepGraph_21_21;

            check_hlds__stratify__Caller_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__V_20_20, (MR_Integer) 0)));
            check_hlds__stratify__CallerInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__V_20_20, (MR_Integer) 1)));
            {
              check_hlds__stratify__succeeded = mercury__set__member_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, ((MR_Box) (check_hlds__stratify__Caller_9)), check_hlds__stratify__CallsHO_2);
            }
            if (check_hlds__stratify__succeeded)
              {
                MR_Word check_hlds__stratify__TypeCtorInfo_24_24 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                MR_Word check_hlds__stratify__PossibleCallees0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__CallerInfo_10, (MR_Integer) 0)));
                MR_Word check_hlds__stratify__PossibleCallees_16;
                MR_Word check_hlds__stratify__CallerKey_17;
                MR_Word check_hlds__stratify__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__CallerInfo_10, (MR_Integer) 1)));

                {
                  mercury__set__to_sorted_list_2_p_0(check_hlds__stratify__TypeCtorInfo_24_24, check_hlds__stratify__PossibleCallees0_14, &check_hlds__stratify__PossibleCallees_16);
                }
                {
                  mercury__digraph__lookup_key_3_p_0(check_hlds__stratify__TypeCtorInfo_24_24, check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3, ((MR_Box) (check_hlds__stratify__Caller_9)), &check_hlds__stratify__CallerKey_17);
                }
                {
                  check_hlds__stratify__add_new_arcs2_4_p_0(check_hlds__stratify__PossibleCallees_16, check_hlds__stratify__CallerKey_17, check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3, &check_hlds__stratify__STATE_VARIABLE_DepGraph_21_21);
                }
              }
            else
              check_hlds__stratify__STATE_VARIABLE_DepGraph_21_21 = check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Cs_11;
              MR_Word check_hlds__stratify__STATE_VARIABLE_DepGraph_0__tmp_copy_3 = check_hlds__stratify__STATE_VARIABLE_DepGraph_21_21;

              check_hlds__stratify__STATE_VARIABLE_DepGraph_0_3 = check_hlds__stratify__STATE_VARIABLE_DepGraph_0__tmp_copy_3;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__merge_calls_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__P_2,
  MR_Word check_hlds__stratify__CallsHO_3,
  MR_Word check_hlds__stratify__DoingFirstOrder_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Changed_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Changed_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__stratify__STATE_VARIABLE_Changed_8 = check_hlds__stratify__STATE_VARIABLE_Changed_0_7;
            *check_hlds__stratify__STATE_VARIABLE_HOInfo_6 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5;
          }
        else
          {
            MR_Word check_hlds__stratify__C_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Cs_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_53_53;
            MR_Word check_hlds__stratify__STATE_VARIABLE_Changed_54_54;
            MR_Word check_hlds__stratify__CInfo_25;
            MR_Box check_hlds__stratify__conv0_CInfo_25;

            {
              check_hlds__stratify__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0, check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5, ((MR_Box) (check_hlds__stratify__C_18)), &check_hlds__stratify__conv0_CInfo_25);
            }
            if (check_hlds__stratify__succeeded)
              {
                check_hlds__stratify__CInfo_25 = ((MR_Word) check_hlds__stratify__conv0_CInfo_25);
                check_hlds__stratify__succeeded = MR_TRUE;
              }
            if (check_hlds__stratify__succeeded)
              {
                MR_Word check_hlds__stratify__TypeCtorInfo_59_59 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                MR_Word check_hlds__stratify__TypeCtorInfo_60_60 = (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0;
                MR_Word check_hlds__stratify__PInfo_26;
                MR_Word check_hlds__stratify__CHaveAT0_27;
                MR_Word check_hlds__stratify__CHOInOut_28;
                MR_Word check_hlds__stratify__PHaveAT0_29;
                MR_Word check_hlds__stratify__PHOInOut_30;
                MR_Word check_hlds__stratify__STATE_VARIABLE_Changed_49_49;
                MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_51_51;
                MR_Box check_hlds__stratify__conv1_PInfo_26;

                {
                  mercury__map__lookup_3_p_0(check_hlds__stratify__TypeCtorInfo_59_59, check_hlds__stratify__TypeCtorInfo_60_60, check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5, ((MR_Box) (check_hlds__stratify__P_2)), &check_hlds__stratify__conv1_PInfo_26);
                }
                check_hlds__stratify__PInfo_26 = ((MR_Word) check_hlds__stratify__conv1_PInfo_26);
                check_hlds__stratify__CHaveAT0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__CInfo_25, (MR_Integer) 0)));
                check_hlds__stratify__CHOInOut_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__CInfo_25, (MR_Integer) 1)));
                check_hlds__stratify__PHaveAT0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PInfo_26, (MR_Integer) 0)));
                check_hlds__stratify__PHOInOut_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PInfo_26, (MR_Integer) 1)));
                check_hlds__stratify__succeeded = (check_hlds__stratify__CHOInOut_28 == (MR_Integer) 3);
                if (check_hlds__stratify__succeeded)
                  {
                    check_hlds__stratify__STATE_VARIABLE_Changed_49_49 = check_hlds__stratify__STATE_VARIABLE_Changed_0_7;
                    check_hlds__stratify__STATE_VARIABLE_HOInfo_51_51 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5;
                  }
                else
                  {
                    MR_Word check_hlds__stratify__CHaveAT_31;
                    MR_Word check_hlds__stratify__PHaveAT_32;
                    MR_Word check_hlds__stratify__NewCInfo_34;
                    MR_Word check_hlds__stratify__NewPInfo_35;
                    MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_50_50;

                    switch (check_hlds__stratify__CHOInOut_28) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            check_hlds__stratify__succeeded = mercury__set__subset_2_p_0(check_hlds__stratify__TypeCtorInfo_59_59, check_hlds__stratify__PHaveAT0_29, check_hlds__stratify__CHaveAT0_27);
                          }
                          if (check_hlds__stratify__succeeded)
                            {
                              check_hlds__stratify__CHaveAT_31 = check_hlds__stratify__CHaveAT0_27;
                              check_hlds__stratify__STATE_VARIABLE_Changed_49_49 = check_hlds__stratify__STATE_VARIABLE_Changed_0_7;
                            }
                          else
                            {
                              {
                                mercury__set__union_3_p_0(check_hlds__stratify__TypeCtorInfo_59_59, check_hlds__stratify__PHaveAT0_29, check_hlds__stratify__CHaveAT0_27, &check_hlds__stratify__CHaveAT_31);
                              }
                              check_hlds__stratify__STATE_VARIABLE_Changed_49_49 = (MR_Integer) 1;
                            }
                          check_hlds__stratify__PHaveAT_32 = check_hlds__stratify__PHaveAT0_29;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          {
                            check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], ((MR_Box) (check_hlds__stratify__CHaveAT0_27)), ((MR_Box) (check_hlds__stratify__PHaveAT0_29)));
                          }
                          if (check_hlds__stratify__succeeded)
                            {
                              check_hlds__stratify__CHaveAT_31 = check_hlds__stratify__CHaveAT0_27;
                              check_hlds__stratify__PHaveAT_32 = check_hlds__stratify__PHaveAT0_29;
                              check_hlds__stratify__STATE_VARIABLE_Changed_49_49 = check_hlds__stratify__STATE_VARIABLE_Changed_0_7;
                            }
                          else
                            {
                              {
                                mercury__set__union_3_p_0(check_hlds__stratify__TypeCtorInfo_59_59, check_hlds__stratify__CHaveAT0_27, check_hlds__stratify__PHaveAT0_29, &check_hlds__stratify__CHaveAT_31);
                              }
                              check_hlds__stratify__PHaveAT_32 = check_hlds__stratify__CHaveAT_31;
                              check_hlds__stratify__STATE_VARIABLE_Changed_49_49 = (MR_Integer) 1;
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
                          {
                            check_hlds__stratify__succeeded = mercury__set__subset_2_p_0(check_hlds__stratify__TypeCtorInfo_59_59, check_hlds__stratify__CHaveAT0_27, check_hlds__stratify__PHaveAT0_29);
                          }
                          if (check_hlds__stratify__succeeded)
                            {
                              check_hlds__stratify__PHaveAT_32 = check_hlds__stratify__PHaveAT0_29;
                              check_hlds__stratify__STATE_VARIABLE_Changed_49_49 = check_hlds__stratify__STATE_VARIABLE_Changed_0_7;
                            }
                          else
                            {
                              {
                                mercury__set__union_3_p_0(check_hlds__stratify__TypeCtorInfo_59_59, check_hlds__stratify__CHaveAT0_27, check_hlds__stratify__PHaveAT0_29, &check_hlds__stratify__PHaveAT_32);
                              }
                              check_hlds__stratify__STATE_VARIABLE_Changed_49_49 = (MR_Integer) 1;
                            }
                          check_hlds__stratify__CHaveAT_31 = check_hlds__stratify__CHaveAT0_27;
                        }
                        break;
                    }
                    {
                      check_hlds__stratify__NewCInfo_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__stratify__NewCInfo_34, 0) = ((MR_Box) (check_hlds__stratify__CHaveAT_31));
                      MR_hl_field(MR_mktag(0), check_hlds__stratify__NewCInfo_34, 1) = ((MR_Box) (check_hlds__stratify__CHOInOut_28));
                    }
                    {
                      check_hlds__stratify__NewPInfo_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), check_hlds__stratify__NewPInfo_35, 0) = ((MR_Box) (check_hlds__stratify__PHaveAT_32));
                      MR_hl_field(MR_mktag(0), check_hlds__stratify__NewPInfo_35, 1) = ((MR_Box) (check_hlds__stratify__PHOInOut_30));
                    }
                    {
                      mercury__map__det_update_4_p_0(check_hlds__stratify__TypeCtorInfo_59_59, check_hlds__stratify__TypeCtorInfo_60_60, ((MR_Box) (check_hlds__stratify__C_18)), ((MR_Box) (check_hlds__stratify__NewCInfo_34)), check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5, &check_hlds__stratify__STATE_VARIABLE_HOInfo_50_50);
                    }
                    {
                      mercury__map__det_update_4_p_0(check_hlds__stratify__TypeCtorInfo_59_59, check_hlds__stratify__TypeCtorInfo_60_60, ((MR_Box) (check_hlds__stratify__P_2)), ((MR_Box) (check_hlds__stratify__NewPInfo_35)), check_hlds__stratify__STATE_VARIABLE_HOInfo_50_50, &check_hlds__stratify__STATE_VARIABLE_HOInfo_51_51);
                    }
                  }
                check_hlds__stratify__succeeded = (check_hlds__stratify__DoingFirstOrder_4 == (MR_Integer) 1);
                if (check_hlds__stratify__succeeded)
                  {
                    check_hlds__stratify__succeeded = mercury__set__member_2_p_0(check_hlds__stratify__TypeCtorInfo_59_59, ((MR_Box) (check_hlds__stratify__P_2)), check_hlds__stratify__CallsHO_3);
                  }
                if (check_hlds__stratify__succeeded)
                  {
                    MR_Word check_hlds__stratify__PHOInfo_36;
                    MR_Word check_hlds__stratify__PossibleCalls_37;
                    MR_Word check_hlds__stratify__PossibleCallsL_39;
                    MR_Box check_hlds__stratify__conv2_PHOInfo_36;
                    MR_Word check_hlds__stratify__V_38_38;

                    {
                      mercury__map__lookup_3_p_0(check_hlds__stratify__TypeCtorInfo_59_59, check_hlds__stratify__TypeCtorInfo_60_60, check_hlds__stratify__STATE_VARIABLE_HOInfo_51_51, ((MR_Box) (check_hlds__stratify__P_2)), &check_hlds__stratify__conv2_PHOInfo_36);
                    }
                    check_hlds__stratify__PHOInfo_36 = ((MR_Word) check_hlds__stratify__conv2_PHOInfo_36);
                    check_hlds__stratify__PossibleCalls_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PHOInfo_36, (MR_Integer) 0)));
                    check_hlds__stratify__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PHOInfo_36, (MR_Integer) 1)));
                    {
                      mercury__set__to_sorted_list_2_p_0(check_hlds__stratify__TypeCtorInfo_59_59, check_hlds__stratify__PossibleCalls_37, &check_hlds__stratify__PossibleCallsL_39);
                    }
                    {
                      check_hlds__stratify__merge_calls_8_p_0(check_hlds__stratify__PossibleCallsL_39, check_hlds__stratify__P_2, check_hlds__stratify__CallsHO_3, (MR_Integer) 0, check_hlds__stratify__STATE_VARIABLE_HOInfo_51_51, &check_hlds__stratify__STATE_VARIABLE_HOInfo_53_53, check_hlds__stratify__STATE_VARIABLE_Changed_49_49, &check_hlds__stratify__STATE_VARIABLE_Changed_54_54);
                    }
                  }
                else
                  {
                    check_hlds__stratify__STATE_VARIABLE_Changed_54_54 = check_hlds__stratify__STATE_VARIABLE_Changed_49_49;
                    check_hlds__stratify__STATE_VARIABLE_HOInfo_53_53 = check_hlds__stratify__STATE_VARIABLE_HOInfo_51_51;
                  }
              }
            else
              {
                check_hlds__stratify__STATE_VARIABLE_Changed_54_54 = check_hlds__stratify__STATE_VARIABLE_Changed_0_7;
                check_hlds__stratify__STATE_VARIABLE_HOInfo_53_53 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5;
              }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Cs_19;
              MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_HOInfo_53_53;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Changed_0__tmp_copy_7 = check_hlds__stratify__STATE_VARIABLE_Changed_54_54;

              check_hlds__stratify__STATE_VARIABLE_Changed_0_7 = check_hlds__stratify__STATE_VARIABLE_Changed_0__tmp_copy_7;
              check_hlds__stratify__STATE_VARIABLE_HOInfo_0_5 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0__tmp_copy_5;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__stratify_tc_7_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__ProcCalls_2,
  MR_Word check_hlds__stratify__CallsHO_3,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_4,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Changed_0_6,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Changed_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *check_hlds__stratify__STATE_VARIABLE_Changed_7 = check_hlds__stratify__STATE_VARIABLE_Changed_0_6;
            *check_hlds__stratify__STATE_VARIABLE_HOInfo_5 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0_4;
          }
        else
          {
            MR_Word check_hlds__stratify__TypeCtorInfo_33_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            MR_Word check_hlds__stratify__PredProcId_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__PredProcIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__PCalls_22;
            MR_Word check_hlds__stratify__PCallsL_23;
            MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_29_29;
            MR_Word check_hlds__stratify__STATE_VARIABLE_Changed_30_30;
            MR_Box check_hlds__stratify__conv0_PCalls_22;

            {
              mercury__map__lookup_3_p_0(check_hlds__stratify__TypeCtorInfo_33_33, (MR_Word) &check_hlds__stratify_scalar_common_1[0], check_hlds__stratify__ProcCalls_2, ((MR_Box) (check_hlds__stratify__PredProcId_16)), &check_hlds__stratify__conv0_PCalls_22);
            }
            check_hlds__stratify__PCalls_22 = ((MR_Word) check_hlds__stratify__conv0_PCalls_22);
            {
              mercury__set__to_sorted_list_2_p_0(check_hlds__stratify__TypeCtorInfo_33_33, check_hlds__stratify__PCalls_22, &check_hlds__stratify__PCallsL_23);
            }
            {
              check_hlds__stratify__merge_calls_8_p_0(check_hlds__stratify__PCallsL_23, check_hlds__stratify__PredProcId_16, check_hlds__stratify__CallsHO_3, (MR_Integer) 1, check_hlds__stratify__STATE_VARIABLE_HOInfo_0_4, &check_hlds__stratify__STATE_VARIABLE_HOInfo_29_29, check_hlds__stratify__STATE_VARIABLE_Changed_0_6, &check_hlds__stratify__STATE_VARIABLE_Changed_30_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__PredProcIds_17;
              MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0__tmp_copy_4 = check_hlds__stratify__STATE_VARIABLE_HOInfo_29_29;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Changed_0__tmp_copy_6 = check_hlds__stratify__STATE_VARIABLE_Changed_30_30;

              check_hlds__stratify__STATE_VARIABLE_Changed_0_6 = check_hlds__stratify__STATE_VARIABLE_Changed_0__tmp_copy_6;
              check_hlds__stratify__STATE_VARIABLE_HOInfo_0_4 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0__tmp_copy_4;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__iterate_solution_5_p_0(
  MR_Word check_hlds__stratify__PredProcs_6,
  MR_Word check_hlds__stratify__ProcCalls_7,
  MR_Word check_hlds__stratify__CallsHO_8,
  MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0_11,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_HOInfo_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;
        MR_Word check_hlds__stratify__Changed_10;
        MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_13_13;

        {
          check_hlds__stratify__stratify_tc_7_p_0(check_hlds__stratify__PredProcs_6, check_hlds__stratify__ProcCalls_7, check_hlds__stratify__CallsHO_8, check_hlds__stratify__STATE_VARIABLE_HOInfo_0_11, &check_hlds__stratify__STATE_VARIABLE_HOInfo_13_13, (MR_Integer) 0, &check_hlds__stratify__Changed_10);
        }
        switch (check_hlds__stratify__Changed_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *check_hlds__stratify__STATE_VARIABLE_HOInfo_12 = check_hlds__stratify__STATE_VARIABLE_HOInfo_13_13;
            break;
          case (MR_Integer) 1:
            {
              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_0__tmp_copy_11 = check_hlds__stratify__STATE_VARIABLE_HOInfo_13_13;

                check_hlds__stratify__STATE_VARIABLE_HOInfo_0_11 = check_hlds__stratify__STATE_VARIABLE_HOInfo_0__tmp_copy_11;
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
check_hlds__stratify__gen_conservative_graph_4_p_0(
  MR_Word check_hlds__stratify__ModuleInfo_5,
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepGraph_0_13,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepGraph_14,
  MR_Word * check_hlds__stratify__HOInfo_7)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__TypeCtorInfo_16_16;
    MR_Word check_hlds__stratify__TypeCtorInfo_19_33 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    MR_Word check_hlds__stratify__ProcCalls_8;
    MR_Word check_hlds__stratify__HOInfo0_9;
    MR_Word check_hlds__stratify__CallsHO_10;
    MR_Word check_hlds__stratify__Callers_11;
    MR_Word check_hlds__stratify__HOInfoL_12;
    MR_Word check_hlds__stratify__PredIds_26;
    MR_Word check_hlds__stratify__STATE_VARIABLE_ProcCalls_13_27;
    MR_Word check_hlds__stratify__STATE_VARIABLE_HOInfo_14_28;
    MR_Word check_hlds__stratify__STATE_VARIABLE_CallsHO_15_29;

    {
      mercury__map__init_1_p_0(check_hlds__stratify__TypeCtorInfo_19_33, (MR_Word) &check_hlds__stratify_scalar_common_1[0], &check_hlds__stratify__STATE_VARIABLE_ProcCalls_13_27);
    }
    {
      mercury__map__init_1_p_0(check_hlds__stratify__TypeCtorInfo_19_33, (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0, &check_hlds__stratify__STATE_VARIABLE_HOInfo_14_28);
    }
    {
      mercury__set__init_1_p_0(check_hlds__stratify__TypeCtorInfo_19_33, &check_hlds__stratify__STATE_VARIABLE_CallsHO_15_29);
    }
    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(check_hlds__stratify__ModuleInfo_5, &check_hlds__stratify__PredIds_26);
    }
    {
      check_hlds__stratify__expand_predids_8_p_0(check_hlds__stratify__PredIds_26, check_hlds__stratify__ModuleInfo_5, check_hlds__stratify__STATE_VARIABLE_ProcCalls_13_27, &check_hlds__stratify__ProcCalls_8, check_hlds__stratify__STATE_VARIABLE_HOInfo_14_28, &check_hlds__stratify__HOInfo0_9, check_hlds__stratify__STATE_VARIABLE_CallsHO_15_29, &check_hlds__stratify__CallsHO_10);
    }
    check_hlds__stratify__TypeCtorInfo_16_16 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      mercury__map__keys_2_p_0(check_hlds__stratify__TypeCtorInfo_16_16, (MR_Word) &check_hlds__stratify_scalar_common_1[0], check_hlds__stratify__ProcCalls_8, &check_hlds__stratify__Callers_11);
    }
    {
      check_hlds__stratify__iterate_solution_5_p_0(check_hlds__stratify__Callers_11, check_hlds__stratify__ProcCalls_8, check_hlds__stratify__CallsHO_10, check_hlds__stratify__HOInfo0_9, check_hlds__stratify__HOInfo_7);
    }
    {
      mercury__map__to_assoc_list_2_p_0(check_hlds__stratify__TypeCtorInfo_16_16, (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0, *check_hlds__stratify__HOInfo_7, &check_hlds__stratify__HOInfoL_12);
    }
    {
      check_hlds__stratify__add_new_arcs_4_p_0(check_hlds__stratify__HOInfoL_12, check_hlds__stratify__CallsHO_10, check_hlds__stratify__STATE_VARIABLE_DepGraph_0_13, check_hlds__stratify__STATE_VARIABLE_DepGraph_14);
    }
  }
}

static void MR_CALL 
check_hlds__stratify__higher_order_check_scc_6_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3,
  MR_Word check_hlds__stratify__HeadVar__4_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_6 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
        else
          {
            MR_Word check_hlds__stratify__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Remaining_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_13, (MR_Integer) 0)));
            MR_Integer check_hlds__stratify__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_13, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__PredInfo_21;
            MR_Word check_hlds__stratify__Globals_22;
            MR_Word check_hlds__stratify__Warn_23;
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_37_37;
            MR_Word check_hlds__stratify__HigherOrderInfo_25;
            MR_Word check_hlds__stratify__TypeCtorInfo_39_39;
            MR_Word check_hlds__stratify__TypeCtorInfo_40_40;
            MR_Box check_hlds__stratify__conv0_HigherOrderInfo_25;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__stratify__HeadVar__4_4, check_hlds__stratify__PredId_19, &check_hlds__stratify__PredInfo_21);
            }
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__stratify__HeadVar__4_4, &check_hlds__stratify__Globals_22);
            }
            {
              libs__globals__lookup_bool_option_3_p_0(check_hlds__stratify__Globals_22, (MR_Integer) 18, &check_hlds__stratify__Warn_23);
            }
            check_hlds__stratify__succeeded = (check_hlds__stratify__Warn_23 == (MR_Integer) 1);
            if (check_hlds__stratify__succeeded)
              {
                check_hlds__stratify__TypeCtorInfo_39_39 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                check_hlds__stratify__TypeCtorInfo_40_40 = (MR_Word) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0;
                {
                  check_hlds__stratify__succeeded = mercury__map__search_3_p_0(check_hlds__stratify__TypeCtorInfo_39_39, check_hlds__stratify__TypeCtorInfo_40_40, check_hlds__stratify__HeadVar__3_3, ((MR_Box) (check_hlds__stratify__PredProcId_13)), &check_hlds__stratify__conv0_HigherOrderInfo_25);
                }
                if (check_hlds__stratify__succeeded)
                  {
                    check_hlds__stratify__HigherOrderInfo_25 = ((MR_Word) check_hlds__stratify__conv0_HigherOrderInfo_25);
                    check_hlds__stratify__succeeded = MR_TRUE;
                  }
              }
            if (check_hlds__stratify__succeeded)
              {
                MR_Word check_hlds__stratify__TypeCtorInfo_41_41 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                MR_Word check_hlds__stratify__HOCalls_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HigherOrderInfo_25, (MR_Integer) 0)));
                MR_Word check_hlds__stratify__HOLoops_28;
                MR_Word check_hlds__stratify__HighOrderLoops_29;
                MR_Word check_hlds__stratify__ProcTable_30;
                MR_Word check_hlds__stratify__Proc_31;
                MR_Word check_hlds__stratify__Goal_32;
                MR_Word check_hlds__stratify__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HigherOrderInfo_25, (MR_Integer) 1)));
                MR_Box check_hlds__stratify__conv1_Proc_31;

                {
                  mercury__set__intersect_3_p_0(check_hlds__stratify__TypeCtorInfo_41_41, check_hlds__stratify__HOCalls_26, check_hlds__stratify__HeadVar__2_2, &check_hlds__stratify__HOLoops_28);
                }
                {
                  check_hlds__stratify__succeeded = mercury__set__is_empty_1_p_0(check_hlds__stratify__TypeCtorInfo_41_41, check_hlds__stratify__HOLoops_28);
                }
                if (check_hlds__stratify__succeeded)
                  check_hlds__stratify__HighOrderLoops_29 = (MR_Integer) 0;
                else
                  check_hlds__stratify__HighOrderLoops_29 = (MR_Integer) 1;
                {
                  hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__stratify__PredInfo_21, &check_hlds__stratify__ProcTable_30);
                }
                {
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__stratify__ProcTable_30, check_hlds__stratify__ProcId_20, &check_hlds__stratify__conv1_Proc_31);
                }
                check_hlds__stratify__Proc_31 = ((MR_Word) check_hlds__stratify__conv1_Proc_31);
                {
                  hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__stratify__Proc_31, &check_hlds__stratify__Goal_32);
                }
                {
                  check_hlds__stratify__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_105_103_104_101_114_95_111_114_100_101_114_95_99_104_101_99_107_95_103_111_97_108_95_95_91_51_93_95_48_9_p_0(check_hlds__stratify__Goal_32, (MR_Integer) 0, check_hlds__stratify__PredProcId_13, check_hlds__stratify__HighOrderLoops_29, (MR_Integer) 1, check_hlds__stratify__HeadVar__4_4, check_hlds__stratify__STATE_VARIABLE_Specs_0_5, &check_hlds__stratify__STATE_VARIABLE_Specs_37_37);
                }
              }
            else
              check_hlds__stratify__STATE_VARIABLE_Specs_37_37 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Remaining_14;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_Specs_37_37;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_5 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__higher_order_check_sccs_5_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__HeadVar__3_3,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_4,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_5 = check_hlds__stratify__STATE_VARIABLE_Specs_0_4;
        else
          {
            MR_Word check_hlds__stratify__HeadSCC_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__TailSCCs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__HeadSCCProcs_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadSCC_11, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__HeadSCCPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadSCC_11, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_20_20;

            {
              check_hlds__stratify__higher_order_check_scc_6_p_0(check_hlds__stratify__HeadSCCProcs_16, check_hlds__stratify__HeadSCCPreds_17, check_hlds__stratify__HeadVar__2_2, check_hlds__stratify__HeadVar__3_3, check_hlds__stratify__STATE_VARIABLE_Specs_0_4, &check_hlds__stratify__STATE_VARIABLE_Specs_20_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__TailSCCs_12;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_4 = check_hlds__stratify__STATE_VARIABLE_Specs_20_20;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_4 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_4;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_cases_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__WholeScc_3,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
  MR_Word check_hlds__stratify__ModuleInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_8 = check_hlds__stratify__STATE_VARIABLE_Specs_0_7;
        else
          {
            MR_Word check_hlds__stratify__Case_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 2)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_30_30;
            MR_Word check_hlds__stratify__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 1)));

            {
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_27, check_hlds__stratify__Negated_2, check_hlds__stratify__WholeScc_3, check_hlds__stratify__ThisPredProcId_4, check_hlds__stratify__ErrorOrWarning_5, check_hlds__stratify__ModuleInfo_6, check_hlds__stratify__STATE_VARIABLE_Specs_0_7, &check_hlds__stratify__STATE_VARIABLE_Specs_30_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_18;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__stratify__STATE_VARIABLE_Specs_30_30;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_7 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_goals_8_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__Negated_2,
  MR_Word check_hlds__stratify__WholeScc_3,
  MR_Word check_hlds__stratify__ThisPredProcId_4,
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
  MR_Word check_hlds__stratify__ModuleInfo_6,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_8 = check_hlds__stratify__STATE_VARIABLE_Specs_0_7;
        else
          {
            MR_Word check_hlds__stratify__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_27_27;

            {
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_17, check_hlds__stratify__Negated_2, check_hlds__stratify__WholeScc_3, check_hlds__stratify__ThisPredProcId_4, check_hlds__stratify__ErrorOrWarning_5, check_hlds__stratify__ModuleInfo_6, check_hlds__stratify__STATE_VARIABLE_Specs_0_7, &check_hlds__stratify__STATE_VARIABLE_Specs_27_27);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_18;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__stratify__STATE_VARIABLE_Specs_27_27;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_7 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_goal_8_p_0(
  MR_Word check_hlds__stratify__Goal_9,
  MR_Word check_hlds__stratify__Negated_10,
  MR_Word check_hlds__stratify__WholeScc_11,
  MR_Word check_hlds__stratify__ThisPredProcId_12,
  MR_Word check_hlds__stratify__ErrorOrWarning_13,
  MR_Word check_hlds__stratify__ModuleInfo_14,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_66,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_67)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;
        MR_Word check_hlds__stratify__GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_9, (MR_Integer) 0)));
        MR_Word check_hlds__stratify__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_9, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word check_hlds__stratify__SubGoal_27 = (MR_Word) MR_body(((MR_Word) check_hlds__stratify__GoalExpr_16), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_27;

                check_hlds__stratify__Negated_10 = (MR_Integer) 1;
                check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
            *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
            break;
          case (MR_Integer) 2:
            {
              MR_Word check_hlds__stratify__CPred_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)));
              MR_Integer check_hlds__stratify__CProc_103 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
              MR_Word check_hlds__stratify__Callee_104;
              MR_Word check_hlds__stratify___Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
              MR_Word check_hlds__stratify___BuiltinState_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
              MR_Word check_hlds__stratify___UC_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
              MR_Word check_hlds__stratify___Sym_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 5)));
              MR_Word check_hlds__stratify__TypeCtorInfo_92_94;

              {
                check_hlds__stratify__Callee_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_104, 0) = ((MR_Box) (check_hlds__stratify__CPred_102));
                MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_104, 1) = ((MR_Box) (check_hlds__stratify__CProc_103));
              }
              check_hlds__stratify__succeeded = (check_hlds__stratify__Negated_10 == (MR_Integer) 1);
              if (check_hlds__stratify__succeeded)
                {
                  check_hlds__stratify__TypeCtorInfo_92_94 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                  {
                    check_hlds__stratify__succeeded = mercury__list__member_2_p_0(check_hlds__stratify__TypeCtorInfo_92_94, ((MR_Box) (check_hlds__stratify__Callee_104)), check_hlds__stratify__WholeScc_11);
                  }
                }
              if (check_hlds__stratify__succeeded)
                {
                  MR_Word check_hlds__stratify__Context_95;
                  MR_Word check_hlds__stratify__Spec_97;

                  {
                    check_hlds__stratify__Context_95 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__stratify__GoalInfo_17);
                  }
                  {
                    check_hlds__stratify__Spec_97 = check_hlds__stratify__generate_stratify_error_5_f_0(check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__Context_95, (MR_String) "call introduces a non-stratified loop.", check_hlds__stratify__ErrorOrWarning_13);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__Spec_97));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Specs_0_66));
                  }
                }
              else
                *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word check_hlds__stratify__CPred_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
                  MR_Integer check_hlds__stratify__CProc_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify__Callee_42;
                  MR_Word check_hlds__stratify___Attributes_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
                  MR_Word check_hlds__stratify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 5)));
                  MR_Word check_hlds__stratify__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 6)));
                  MR_Word check_hlds__stratify__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 7)));
                  MR_Word check_hlds__stratify__TypeCtorInfo_92_92;

                  {
                    check_hlds__stratify__Callee_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_42, 0) = ((MR_Box) (check_hlds__stratify__CPred_31));
                    MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_42, 1) = ((MR_Box) (check_hlds__stratify__CProc_32));
                  }
                  check_hlds__stratify__succeeded = (check_hlds__stratify__Negated_10 == (MR_Integer) 1);
                  if (check_hlds__stratify__succeeded)
                    {
                      check_hlds__stratify__TypeCtorInfo_92_92 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
                      {
                        check_hlds__stratify__succeeded = mercury__list__member_2_p_0(check_hlds__stratify__TypeCtorInfo_92_92, ((MR_Box) (check_hlds__stratify__Callee_42)), check_hlds__stratify__WholeScc_11);
                      }
                    }
                  if (check_hlds__stratify__succeeded)
                    {
                      MR_Word check_hlds__stratify__Context_43;
                      MR_Word check_hlds__stratify__Spec_45;

                      {
                        check_hlds__stratify__Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__stratify__GoalInfo_17);
                      }
                      {
                        check_hlds__stratify__Spec_45 = check_hlds__stratify__generate_stratify_error_5_f_0(check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__Context_43, (MR_String) "call introduces a non-stratified loop.", check_hlds__stratify__ErrorOrWarning_13);
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *check_hlds__stratify__STATE_VARIABLE_Specs_67 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__Spec_45));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Specs_0_66));
                      }
                    }
                  else
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word check_hlds__stratify__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify___ConjType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__Goals_19, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word check_hlds__stratify__Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__Goals_93, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word check_hlds__stratify__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify___Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify___Fail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));

                  {
                    check_hlds__stratify__first_order_check_cases_8_p_0(check_hlds__stratify__Cases_22, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word check_hlds__stratify__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
                  MR_Word check_hlds__stratify__SubGoal_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify__FGT_30;
                  MR_Word check_hlds__stratify__V_29_29;

                  check_hlds__stratify__succeeded = ((((MR_tag((MR_Word) check_hlds__stratify__Reason_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 0)))) == (MR_Integer) 5)));
                  if (check_hlds__stratify__succeeded)
                    {
                      check_hlds__stratify__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 1)));
                      check_hlds__stratify__FGT_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 2)));
                      switch (check_hlds__stratify__FGT_30) {
                        default:
                          check_hlds__stratify__succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 1:
                          check_hlds__stratify__succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          check_hlds__stratify__succeeded = MR_TRUE;
                          break;
                      }
                    }
                  if (check_hlds__stratify__succeeded)
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
                  else
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_84;

                        check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
                      }
                      continue;
                    }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word check_hlds__stratify__Cond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
                  MR_Word check_hlds__stratify__Then_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
                  MR_Word check_hlds__stratify__Else_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_79_79;
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_80_80;
                  MR_Word check_hlds__stratify___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

                  {
                    check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Cond_24, (MR_Integer) 1, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, &check_hlds__stratify__STATE_VARIABLE_Specs_79_79);
                  }
                  {
                    check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Then_25, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_79_79, &check_hlds__stratify__STATE_VARIABLE_Specs_80_80);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__Else_26;
                    MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_66 = check_hlds__stratify__STATE_VARIABLE_Specs_80_80;

                    check_hlds__stratify__STATE_VARIABLE_Specs_0_66 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_66;
                    check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 7:
                {
                  MR_Word check_hlds__stratify__ShortHand_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) check_hlds__stratify__ShortHand_54)) {
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
                        MR_Word check_hlds__stratify__MainGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 4)));
                        MR_Word check_hlds__stratify__OrElseGoals_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 5)));
                        MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_72_72;
                        MR_Word check_hlds__stratify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 0)));
                        MR_Word check_hlds__stratify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 1)));
                        MR_Word check_hlds__stratify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 2)));
                        MR_Word check_hlds__stratify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 3)));
                        MR_Word check_hlds__stratify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 6)));

                        {
                          check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__MainGoal_59, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, &check_hlds__stratify__STATE_VARIABLE_Specs_72_72);
                        }
                        {
                          check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__OrElseGoals_60, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_72_72, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word check_hlds__stratify__SubGoal_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 2)));
                        MR_Word check_hlds__stratify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 0)));
                        MR_Word check_hlds__stratify__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 1)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_89;

                          check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
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
check_hlds__stratify__first_order_check_scc_2_6_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__HeadVar__2_2,
  MR_Word check_hlds__stratify__ErrorOrWarning_3,
  MR_Word check_hlds__stratify__ModuleInfo_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_6 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
        else
          {
            MR_Word check_hlds__stratify__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__Remaining_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_13, (MR_Integer) 0)));
            MR_Integer check_hlds__stratify__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_13, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__PredInfo_21;
            MR_Word check_hlds__stratify__ProcTable_22;
            MR_Word check_hlds__stratify__Proc_23;
            MR_Word check_hlds__stratify__Goal_24;
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_28_28;
            MR_Box check_hlds__stratify__conv0_Proc_23;

            {
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__PredId_19, &check_hlds__stratify__PredInfo_21);
            }
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__stratify__PredInfo_21, &check_hlds__stratify__ProcTable_22);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__stratify__ProcTable_22, check_hlds__stratify__ProcId_20, &check_hlds__stratify__conv0_Proc_23);
            }
            check_hlds__stratify__Proc_23 = ((MR_Word) check_hlds__stratify__conv0_Proc_23);
            {
              hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__stratify__Proc_23, &check_hlds__stratify__Goal_24);
            }
            {
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_24, (MR_Integer) 0, check_hlds__stratify__HeadVar__2_2, check_hlds__stratify__PredProcId_13, check_hlds__stratify__ErrorOrWarning_3, check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__STATE_VARIABLE_Specs_0_5, &check_hlds__stratify__STATE_VARIABLE_Specs_28_28);
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Remaining_14;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_Specs_28_28;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_5 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__MustBeStratifiedPreds_2,
  MR_Word check_hlds__stratify__Warn_3,
  MR_Word check_hlds__stratify__ModuleInfo_4,
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_Specs_6 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
        else
          {
            MR_Word check_hlds__stratify__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            MR_Word check_hlds__stratify__HeadSCC_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__TailSCCs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__HeadSCCProcs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadSCC_13, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__HeadSCCPreds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadSCC_13, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__MustBeStratifiedPredsInScc_21;
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_25_25;

            {
              mercury__set__intersect_3_p_0(check_hlds__stratify__TypeCtorInfo_27_27, check_hlds__stratify__HeadSCCPreds_20, check_hlds__stratify__MustBeStratifiedPreds_2, &check_hlds__stratify__MustBeStratifiedPredsInScc_21);
            }
            check_hlds__stratify__succeeded = (check_hlds__stratify__Warn_3 == (MR_Integer) 1);
            if (!(check_hlds__stratify__succeeded))
              {
                check_hlds__stratify__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__stratify__TypeCtorInfo_27_27, check_hlds__stratify__MustBeStratifiedPredsInScc_21);
              }
            if (check_hlds__stratify__succeeded)
              {
                {
                  check_hlds__stratify__first_order_check_scc_2_6_p_0(check_hlds__stratify__HeadSCCProcs_19, check_hlds__stratify__HeadSCCProcs_19, (MR_Integer) 1, check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__STATE_VARIABLE_Specs_0_5, &check_hlds__stratify__STATE_VARIABLE_Specs_25_25);
                }
              }
            else
              check_hlds__stratify__STATE_VARIABLE_Specs_25_25 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__TailSCCs_14;
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_Specs_25_25;

              check_hlds__stratify__STATE_VARIABLE_Specs_0_5 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
check_hlds__stratify__get_proc_id_2_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word * check_hlds__stratify__PredId_3)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Integer check_hlds__stratify__V_4_4;

    *check_hlds__stratify__PredId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
    check_hlds__stratify__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
  }
}

static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0_1(
  MR_Box check_hlds__stratify__closure_arg,
  MR_Box check_hlds__stratify__wrapper_arg_1,
  MR_Box * check_hlds__stratify__wrapper_arg_2)
{
  {
    MR_Box check_hlds__stratify__closure = check_hlds__stratify__closure_arg;
    MR_Word check_hlds__stratify__conv0_PredId_3;

    {
      check_hlds__stratify__get_proc_id_2_p_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), &check_hlds__stratify__conv0_PredId_3);
    }
    *check_hlds__stratify__wrapper_arg_2 = ((MR_Box) (check_hlds__stratify__conv0_PredId_3));
  }
}

static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0(
  MR_Word check_hlds__stratify__HeadVar__1_1,
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_0_2,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepList_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool check_hlds__stratify__succeeded;

        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *check_hlds__stratify__STATE_VARIABLE_DepList_3 = check_hlds__stratify__STATE_VARIABLE_DepList_0_2;
        else
          {
            MR_Word check_hlds__stratify__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
            MR_Word check_hlds__stratify__TypeCtorInfo_22_22;
            MR_Word check_hlds__stratify__PredProcSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word check_hlds__stratify__PredProcSets_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word check_hlds__stratify__PredProcList_10;
            MR_Word check_hlds__stratify__ProcList_11;
            MR_Word check_hlds__stratify__ProcSet_12;
            MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_16_16;
            MR_Word check_hlds__stratify__V_17_17;

            {
              mercury__set__to_sorted_list_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__PredProcSet_7, &check_hlds__stratify__PredProcList_10);
            }
            check_hlds__stratify__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
            {
              mercury__list__map_3_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__TypeCtorInfo_22_22, (MR_Word) &check_hlds__stratify_scalar_common_2[2], check_hlds__stratify__PredProcList_10, &check_hlds__stratify__ProcList_11);
            }
            {
              mercury__set__list_to_set_2_p_0(check_hlds__stratify__TypeCtorInfo_22_22, check_hlds__stratify__ProcList_11, &check_hlds__stratify__ProcSet_12);
            }
            {
              check_hlds__stratify__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), check_hlds__stratify__V_17_17, 0) = ((MR_Box) (check_hlds__stratify__PredProcList_10));
              MR_hl_field(MR_mktag(0), check_hlds__stratify__V_17_17, 1) = ((MR_Box) (check_hlds__stratify__ProcSet_12));
            }
            {
              check_hlds__stratify__STATE_VARIABLE_DepList_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), check_hlds__stratify__STATE_VARIABLE_DepList_16_16, 0) = ((MR_Box) (check_hlds__stratify__V_17_17));
              MR_hl_field(MR_mktag(1), check_hlds__stratify__STATE_VARIABLE_DepList_16_16, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_DepList_0_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__PredProcSets_8;
              MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_0__tmp_copy_2 = check_hlds__stratify__STATE_VARIABLE_DepList_16_16;

              check_hlds__stratify__STATE_VARIABLE_DepList_0_2 = check_hlds__stratify__STATE_VARIABLE_DepList_0__tmp_copy_2;
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
check_hlds__stratify__check_module_for_stratification_3_p_0(
  MR_Word check_hlds__stratify__STATE_VARIABLE_ModuleInfo_0_13,
  MR_Word * check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14,
  MR_Word * check_hlds__stratify__Specs_5)
{
  {
    MR_bool check_hlds__stratify__succeeded;
    MR_Word check_hlds__stratify__TypeCtorInfo_19_19;
    MR_Word check_hlds__stratify__DepInfo_6;
    MR_Word check_hlds__stratify__DepGraph0_7;
    MR_Word check_hlds__stratify__FOSCCs1_8;
    MR_Word check_hlds__stratify__FOSCCs_9;
    MR_Word check_hlds__stratify__Globals_10;
    MR_Word check_hlds__stratify__Warn_11;
    MR_Word check_hlds__stratify__MustBeStratifiedPreds_12;

    {
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(check_hlds__stratify__STATE_VARIABLE_ModuleInfo_0_13, check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14);
    }
    {
      hlds__hlds_module__module_info_dependency_info_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__DepInfo_6);
    }
    check_hlds__stratify__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
    {
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__DepInfo_6, &check_hlds__stratify__DepGraph0_7);
    }
    {
      mercury__digraph__atsort_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__DepGraph0_7, &check_hlds__stratify__FOSCCs1_8);
    }
    {
      check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0(check_hlds__stratify__FOSCCs1_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__stratify__FOSCCs_9);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(check_hlds__stratify__Globals_10, (MR_Integer) 18, &check_hlds__stratify__Warn_11);
    }
    {
      hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__MustBeStratifiedPreds_12);
    }
    {
      check_hlds__stratify__first_order_check_sccs_6_p_0(check_hlds__stratify__FOSCCs_9, check_hlds__stratify__MustBeStratifiedPreds_12, check_hlds__stratify__Warn_11, *check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__stratify__Specs_5);
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.stratify. */
