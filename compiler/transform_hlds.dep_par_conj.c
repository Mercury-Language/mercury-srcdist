/*
** Automatically generated from `dep_par_conj.m'
** by the Mercury compiler,
** version rotd-2019-11-21
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


// :- module transform_hlds.dep_par_conj.
// :- implementation.

/*
INIT mercury__transform_hlds__dep_par_conj__init
ENDINIT
*/

#include "transform_hlds.dep_par_conj.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.goal_util.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
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
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "std_util.mih"
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
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
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
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s {
  MR_Word transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__ModuleInfo_4;
  MR_Word transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__InstMapDeltas_5;
  MR_Word transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__UnboundVar_6;
  MR_bool transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__succeeded;
  jmp_buf transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__commit_0;
  MR_Word transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__InstMapDelta_7;
  MR_Word transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__Inst_8;
  MR_Box transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__conv0_InstMapDelta_7;
};

struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s {
  MR_Word transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__FwdGoals_5;
  MR_bool transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded;
  MR_Word transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Var_7;
  jmp_buf transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__commit_0;
  MR_Word transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__TypeCtorInfo_12_12;
  MR_Word transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Goal_8;
  MR_Word transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__GoalNonLocals_9;
  MR_Box transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__conv0_Goal_8;
};

struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s {
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26;
  MR_bool transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__PendingParProcsList_15;
  jmp_buf transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__DoneOrPendingParProc_17;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_117;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_16;
  MR_Box transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv1_Var_16;
  MR_Box transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv0_DoneOrPendingParProc_17;
  MR_Box transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv2_DoneOrPendingParProc_17;
};

struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s {
  MR_Word transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__SCC_1;
  MR_bool transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__succeeded;
  MR_Word transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17;
  jmp_buf transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__commit_0;
  MR_Word transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__CallPredProcId_24;
  MR_Box transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__conv0_CallPredProcId_24;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__instmap__type_ctor_info_instmap_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj____vpti_pred_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct0 transform_hlds__dep_par_conj____vpti_pred_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0__plain_transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_0;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_1;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_2;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_3;

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_cost_after_signal_0[4];

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_cost_after_signal_0[4];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_cost_after_signal_0[4];

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_0;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_1;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_2;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_3;

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_cost_before_wait_0[4];

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_cost_before_wait_0[4];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_cost_before_wait_0[4];

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_future_var_pair_0_0[2];

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_future_var_pair_0_0[2];

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_future_var_pair_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_future_var_pair_0_0[1];

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_future_var_pair_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_future_var_pair_0[1];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_future_var_pair_0[1];

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_maybe_spec_proc_0_0;

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_maybe_spec_proc_0_1[2];

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_maybe_spec_proc_0_1[2];

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_maybe_spec_proc_0_1;

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_maybe_spec_proc_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_maybe_spec_proc_0_1[1];

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_maybe_spec_proc_0[2];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_maybe_spec_proc_0[2];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_maybe_spec_proc_0[2];

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_maybe_worth_pushing_0_0;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_maybe_worth_pushing_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_maybe_worth_pushing_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_maybe_worth_pushing_0[2];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_maybe_worth_pushing_0[2];

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_new_par_proc_0_0[2];

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_new_par_proc_0_0[2];

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_new_par_proc_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_new_par_proc_0_0[1];

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_new_par_proc_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_new_par_proc_0[1];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_new_par_proc_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__list__ti_list_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_par_proc_call_pattern_0_0[2];

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_par_proc_call_pattern_0_0[2];

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_par_proc_call_pattern_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_par_proc_call_pattern_0_0[1];

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_par_proc_call_pattern_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_par_proc_call_pattern_0[1];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_par_proc_call_pattern_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__list__ti_list_1pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_push_op_0_0;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_push_op_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_push_op_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_push_op_0[2];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_push_op_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_spec_info_0_0[8];

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_spec_info_0_0[8];

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_spec_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_spec_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_spec_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_spec_info_0[1];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_spec_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_sync_info_0_0[7];

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_sync_info_0_0[7];

static const MR_DuArgLocn transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_locns_sync_info_0_0[7];

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_sync_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_sync_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_sync_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_sync_info_0[1];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_sync_info_0[1];

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_ts_string_table_0_0[3];

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_ts_string_table_0_0[3];

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_ts_string_table_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_ts_string_table_0_0[1];

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_ts_string_table_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_ts_string_table_0[1];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_ts_string_table_0[1];

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_wait_or_get_pred_0_0;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_wait_or_get_pred_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_wait_or_get_pred_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_wait_or_get_pred_0[2];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_wait_or_get_pred_0[2];

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_waited_in_conjunct_0_0[1];

static const MR_DuArgLocn transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_locns_waited_in_conjunct_0_0[1];

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_waited_in_conjunct_0_0;

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_waited_in_conjunct_0_1;

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_waited_in_conjunct_0_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_waited_in_conjunct_0_1[1];

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_waited_in_conjunct_0[2];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_waited_in_conjunct_0[2];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_waited_in_conjunct_0[2];

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_waited_on_all_success_paths_0_0;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_waited_on_all_success_paths_0_1;

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_waited_on_all_success_paths_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_waited_on_all_success_paths_0[2];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_waited_on_all_success_paths_0[2];

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__3438__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__4_4,
  MR_Word LambdaHeadVar__1_30);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__should_we_push_signal__2817__1_2_p_0(
  MR_Word STATE_VARIABLE_Signal_0_53,
  MR_Word HeadVar__2_77);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_par_conj__1288__1_2_p_0(
  MR_Word HeadVar__3_3,
  MR_Word ChangedVars_31);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_plain_conj__1258__1_2_p_0(
  MR_Word HeadVar__3_3,
  MR_Word ChangedVars_30);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__480__2_2_p_0(
  MR_Word HeadVar__1_30,
  MR_Word HeadVar__2_37);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__480__1_2_p_0(
  MR_Word IgnoreVars_13,
  MR_Word HeadVar__2_39);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_in_conjunct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____waited_in_conjunct_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____wait_or_get_pred_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____wait_or_get_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____sync_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____ts_string_table_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____sync_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____ts_string_table_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____spec_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____spec_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____rev_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____rev_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pushable_args_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pushable_args_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____push_op_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____push_op_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____proc_pushable_args_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____proc_pushable_args_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pending_par_procs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pending_par_procs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____par_proc_call_pattern_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____par_proc_call_pattern_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____new_par_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____new_par_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_worth_pushing_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____maybe_worth_pushing_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_spec_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____maybe_spec_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_var_pair_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_var_pair_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____done_par_procs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____done_par_procs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_before_wait_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____cost_before_wait_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____arg_pos_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____arg_pos_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__var_not_in_nonlocals_2_p_0(
  MR_Word Var_3,
  MR_Word Goal_4);

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMapDeltas_5,
  MR_Word UnboundVar_6);

static void MR_CALL 
transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Nonlocals_6,
  MR_Word * InstMapDelta_7);

static void MR_CALL 
transform_hlds__dep_par_conj__make_get_goal_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word HeadVar__3_3,
  MR_Word * WaitGoal_9);

static void MR_CALL 
transform_hlds__dep_par_conj__allocate_future_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word SharedVar_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40,
  MR_Word STATE_VARIABLE_VarTypes_0_41,
  MR_Word * STATE_VARIABLE_VarTypes_42,
  MR_Word STATE_VARIABLE_FutureMap_0_43,
  MR_Word * STATE_VARIABLE_FutureMap_44,
  MR_Word STATE_VARIABLE_TSStringTable_0_45,
  MR_Word * STATE_VARIABLE_TSStringTable_46);

static MR_Word MR_CALL 
transform_hlds__dep_par_conj__par_builtin_foreign_proc_attributes_2_f_0(
  MR_Word Purity_4,
  MR_Word MaybeExtraAttr_5);

static void MR_CALL 
transform_hlds__dep_par_conj__make_future_name_var_and_goal_9_p_0(
  MR_String Name_10,
  MR_Word * FutureNameVar_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word STATE_VARIABLE_VarTypes_0_28,
  MR_Word * STATE_VARIABLE_VarTypes_29,
  MR_Word STATE_VARIABLE_TSStringTable_0_30,
  MR_Word * STATE_VARIABLE_TSStringTable_31);

static void MR_CALL 
transform_hlds__dep_par_conj__make_future_var_8_p_0(
  MR_String SharedVarName_9,
  MR_Word SharedVarType_10,
  MR_Word * FutureVar_11,
  MR_Word * FutureVarType_12,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_VarTypes_0_17,
  MR_Word * STATE_VARIABLE_VarTypes_18);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__seen_more_signal_2_p_0(
  MR_Word SignalA_3,
  MR_Word SignalB_4);

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0(
  MR_Word NonLocals_4,
  MR_Word FwdGoals_5,
  MR_Word HeadVar__3_3);

static void MR_CALL 
transform_hlds__dep_par_conj__replace_args_with_futures_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Var_3);

static MR_Word MR_CALL 
transform_hlds__dep_par_conj__fvp_var_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
transform_hlds__dep_par_conj__map_arg_to_new_future_8_p_0(
  MR_Word HeadVars_9,
  MR_Integer FutureArg_10,
  MR_Word STATE_VARIABLE_FutureMap_0_19,
  MR_Word * STATE_VARIABLE_FutureMap_20,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_disj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_par_conj_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_par_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_plain_conj_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_plain_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FutureMap_11,
  MR_Word ProducedVar_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_73,
  MR_Word * STATE_VARIABLE_VarSet_74,
  MR_Word STATE_VARIABLE_VarTypes_0_75,
  MR_Word * STATE_VARIABLE_VarTypes_76);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_after_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FutureMap_11,
  MR_Word ProducedVar_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19,
  MR_Word STATE_VARIABLE_VarTypes_0_20,
  MR_Word * STATE_VARIABLE_VarTypes_21);

static void MR_CALL 
transform_hlds__dep_par_conj__make_signal_goal_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word FutureMap_7,
  MR_Word ProducedVar_8,
  MR_Word VarTypes_9,
  MR_Word * SignalGoal_10);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_goal_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word AllowSomePathsOnly_12,
  MR_Word FutureMap_13,
  MR_Word ConsumedVar_14,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_cases_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5,
  MR_Word * STATE_VARIABLE_WaitedOnAllSuccessPaths_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_disj_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5,
  MR_Word * STATE_VARIABLE_WaitedOnAllSuccessPaths_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_par_conj_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedInConjunct_0_5,
  MR_Word * STATE_VARIABLE_WaitedInConjunct_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_plain_conj_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9,
  MR_Word STATE_VARIABLE_VarTypes_0_10,
  MR_Word * STATE_VARIABLE_VarTypes_11);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word AllowSomePathsOnly_13,
  MR_Word FutureMap_14,
  MR_Word ConsumedVar_15,
  MR_Word * WaitedOnAllSuccessPaths_16,
  MR_Word Goal0_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_VarSet_0_93,
  MR_Word * STATE_VARIABLE_VarSet_94,
  MR_Word STATE_VARIABLE_VarTypes_0_95,
  MR_Word * STATE_VARIABLE_VarTypes_96);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__var_in_nonlocals_2_p_0(
  MR_Word Var_3,
  MR_Word Goal_4);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_after_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FutureMap_11,
  MR_Word ConsumedVar_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_before_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FutureMap_11,
  MR_Word ConsumedVar_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22);

static void MR_CALL 
transform_hlds__dep_par_conj__make_wait_or_get_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTypes_8,
  MR_Word FutureVar_9,
  MR_Word ConsumedVar_10,
  MR_Word WaitOrGetPred_11,
  MR_Word * WaitGoal_12);

static void MR_CALL 
transform_hlds__dep_par_conj__join_branches_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word AllowSomePathsOnly_14,
  MR_Word SharedVars_15,
  MR_Word FutureMap_16,
  MR_Word STATE_VARIABLE_Goal_0_29,
  MR_Word * STATE_VARIABLE_Goal_30,
  MR_Word STATE_VARIABLE_InstMap_0_31,
  MR_Word * STATE_VARIABLE_InstMap_32,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34,
  MR_Word STATE_VARIABLE_VarTypes_0_35,
  MR_Word * STATE_VARIABLE_VarTypes_36);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_proc_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_ProcsToScan_0_18,
  MR_Word * STATE_VARIABLE_ProcsToScan_19,
  MR_Word STATE_VARIABLE_TSStringTable_0_20,
  MR_Word * STATE_VARIABLE_TSStringTable_21);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_ProcsToScan_0_16,
  MR_Word * STATE_VARIABLE_ProcsToScan_17,
  MR_Word STATE_VARIABLE_TSStringTable_0_18,
  MR_Word * STATE_VARIABLE_TSStringTable_19);

static void MR_CALL 
transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9);

static void MR_CALL 
transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__dep_par_conj__make_ts_string_table_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Map_0_3,
  MR_Word * STATE_VARIABLE_Map_4);

static void MR_CALL 
transform_hlds__dep_par_conj__add_requested_specialized_par_procs_10_p_0(
  MR_Word STATE_VARIABLE_PendingParProcs_0_20,
  MR_Word STATE_VARIABLE_Pushability_0_21,
  MR_Word STATE_VARIABLE_DoneParProcs_0_22,
  MR_Word InitialModuleInfo_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_RevProcMap_0_25,
  MR_Word * STATE_VARIABLE_RevProcMap_26,
  MR_Word STATE_VARIABLE_TSStringTable_0_27,
  MR_Word * STATE_VARIABLE_TSStringTable_28);

static void MR_CALL 
transform_hlds__dep_par_conj__add_requested_specialized_par_proc_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__dep_par_conj__add_requested_specialized_par_proc_14_p_0(
  MR_Word CallPattern_15,
  MR_Word NewProc_16,
  MR_Word STATE_VARIABLE_PendingParProcs_0_52,
  MR_Word * STATE_VARIABLE_PendingParProcs_53,
  MR_Word STATE_VARIABLE_Pushability_0_54,
  MR_Word * STATE_VARIABLE_Pushability_55,
  MR_Word DoneParProcs_19,
  MR_Word InitialModuleInfo_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word * STATE_VARIABLE_ModuleInfo_57,
  MR_Word STATE_VARIABLE_RevProcMap_0_58,
  MR_Word * STATE_VARIABLE_RevProcMap_59,
  MR_Word STATE_VARIABLE_TSStringTable_0_60,
  MR_Word * STATE_VARIABLE_TSStringTable_61);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__any_output_arguments_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj__replace_head_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
transform_hlds__dep_par_conj__find_specialization_requests_in_proc_11_p_0(
  MR_Word DoneProcs_12,
  MR_Word InitialModuleInfo_13,
  MR_Word PredProcId_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_PendingParProcs_0_40,
  MR_Word * STATE_VARIABLE_PendingParProcs_41,
  MR_Word STATE_VARIABLE_Pushability_0_42,
  MR_Word * STATE_VARIABLE_Pushability_43,
  MR_Word STATE_VARIABLE_RevProcMap_0_44,
  MR_Word * STATE_VARIABLE_RevProcMap_45);

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_sequences_in_conj_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word NonLocals_4,
  MR_Word STATE_VARIABLE_SpecInfo_0_5,
  MR_Word * STATE_VARIABLE_SpecInfo_6);

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_sequences_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SpecInfo_0_3,
  MR_Word * STATE_VARIABLE_SpecInfo_4);

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_sequences_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SpecInfo_0_3,
  MR_Word * STATE_VARIABLE_SpecInfo_4);

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_SpecInfo_0_54,
  MR_Word * STATE_VARIABLE_SpecInfo_55);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0(
  MR_Word RevGoals0_9,
  MR_Word Goal0_10,
  MR_Word FwdGoals0_11,
  MR_Word * RevGoals_12,
  MR_Word * FwdGoals_13,
  MR_Word NonLocals_14,
  MR_Word STATE_VARIABLE_SpecInfo_0_41,
  MR_Word * STATE_VARIABLE_SpecInfo_42);

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0(
  MR_Word WaitPairs_7,
  MR_Word SignalPairs_8,
  MR_Word Goal0_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_SpecInfo_0_32,
  MR_Word * STATE_VARIABLE_SpecInfo_33);

static void MR_CALL 
transform_hlds__dep_par_conj__number_future_args_5_p_0(
  MR_Integer ArgNo_1,
  MR_Word HeadVar__2_2,
  MR_Word WaitSignalVars_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0(
  MR_Word FutureArgs_7,
  MR_Word CallPattern_8,
  MR_Word OrigPPId_9,
  MR_Word * MaybeSpecProc_10,
  MR_Word STATE_VARIABLE_SpecInfo_0_26,
  MR_Word * STATE_VARIABLE_SpecInfo_27);

static void MR_CALL 
transform_hlds__dep_par_conj__create_new_spec_parallel_pred_6_p_0(
  MR_Word FutureArgs_7,
  MR_Word OrigPPId_8,
  MR_Word * NewPPId_9,
  MR_String * NewPredName_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25);

static void MR_CALL 
transform_hlds__dep_par_conj__futurise_argtypes_4_p_0(
  MR_Integer ArgNo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__dep_par_conj__queue_par_proc_4_p_0(
  MR_Word CallPattern_5,
  MR_Word NewProc_6,
  MR_Word STATE_VARIABLE_PendingParProcs_0_8,
  MR_Word * STATE_VARIABLE_PendingParProcs_9);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__find_spec_par_proc_for_call_pattern_4_p_0(
  MR_Word DoneParProcs_5,
  MR_Word PendingProcs_6,
  MR_Word CallPattern_7,
  MR_Word * SpecProc_8);

static void MR_CALL 
transform_hlds__dep_par_conj__find_relevant_pushable_signal_goals_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_2,
  MR_Word CallVars_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_SpecInfo_0_7,
  MR_Word * STATE_VARIABLE_SpecInfo_8);

static void MR_CALL 
transform_hlds__dep_par_conj__find_relevant_pushable_wait_goals_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_2,
  MR_Word CallVars_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_SpecInfo_0_7,
  MR_Word * STATE_VARIABLE_SpecInfo_8);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_6_p_0(
  MR_Word PredProcId_7,
  MR_Integer ArgPos_8,
  MR_Word PushOp_9,
  MR_Word * IsWorthPushing_10,
  MR_Word STATE_VARIABLE_SpecInfo_0_20,
  MR_Word * STATE_VARIABLE_SpecInfo_21);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_test_5_p_0(
  MR_Word PredProcId_6,
  MR_Integer ArgPos_7,
  MR_Word PushOp_8,
  MR_Word * IsWorthPushing_9,
  MR_Word SpecInfo_10);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_4_p_0_2(
  MR_Box closure_arg);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(
  MR_Word Var_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Signal_0_53,
  MR_Word * STATE_VARIABLE_Signal_54);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_plain_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Signal_0_3,
  MR_Word * STATE_VARIABLE_Signal_4);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_par_conj_5_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_par_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_FinalSignal_0_4,
  MR_Word * STATE_VARIABLE_FinalSignal_5);

static void MR_CALL 
transform_hlds__dep_par_conj__seen_nontrivial_cost_2_p_0(
  MR_Word STATE_VARIABLE_Signal_0_4,
  MR_Word * STATE_VARIABLE_Signal_5);

static void MR_CALL 
transform_hlds__dep_par_conj__seen_produced_var_2_p_0(
  MR_Word STATE_VARIABLE_Signal_0_4,
  MR_Word * STATE_VARIABLE_Signal_5);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_wait_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(
  MR_Word Var_4,
  MR_Word Goal_5,
  MR_Word * Wait_6);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_wait_in_cases_4_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word SeenWait_3,
  MR_Word * CostBeforeWait_4);

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_wait_in_conj_3_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word AllowSomePathsOnly_13,
  MR_Word SharedVars_14,
  MR_Word FutureMap_15,
  MR_Word InstMap_16,
  MR_Word STATE_VARIABLE_Goal_0_27,
  MR_Word * STATE_VARIABLE_Goal_28,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_VarTypes_0_31,
  MR_Word * STATE_VARIABLE_VarTypes_32);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjs_in_proc_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word IgnoreVars_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_ProcsToScan_0_41,
  MR_Word * STATE_VARIABLE_ProcsToScan_42,
  MR_Word STATE_VARIABLE_TSStringTable_0_43,
  MR_Word * STATE_VARIABLE_TSStringTable_44);

static void MR_CALL 
transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_13,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjs_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_SyncInfo_0_4,
  MR_Word * STATE_VARIABLE_SyncInfo_5);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjs_in_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_SyncInfo_0_4,
  MR_Word * STATE_VARIABLE_SyncInfo_5);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjs_in_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMap_0_3,
  MR_Word STATE_VARIABLE_SyncInfo_0_4,
  MR_Word * STATE_VARIABLE_SyncInfo_5);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word InstMap0_9,
  MR_Word * InstMap_10,
  MR_Word STATE_VARIABLE_SyncInfo_0_64,
  MR_Word * STATE_VARIABLE_SyncInfo_65);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0(
  MR_Word Conjuncts_7,
  MR_Word GoalInfo_8,
  MR_Word * NewGoal_9,
  MR_Word InstMap_10,
  MR_Word STATE_VARIABLE_SyncInfo_0_27,
  MR_Word * STATE_VARIABLE_SyncInfo_28);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_SharedVars_0_6,
  MR_Word * STATE_VARIABLE_SharedVars_7);

static void MR_CALL 
transform_hlds__dep_par_conj__find_procs_scc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * PredProcsSCC_3);

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0(
  MR_Word SCC_1,
  MR_Word VarTypes_2,
  MR_Word InstMapBefore_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7);

static void MR_CALL 
transform_hlds__dep_par_conj__push_goal_into_conj_8_p_0(
  MR_Word VarTypes_1,
  MR_Word InstMapBeforeGoal_2,
  MR_Word Goal_3,
  MR_Word InstMapBeforePivotGoal_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conj_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conj_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conj_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word AllowSomePathsOnly_15,
  MR_Word SharedVars_16,
  MR_Word Goals_17,
  MR_Word GoalInfo_18,
  MR_Word * NewGoal_19,
  MR_Word InstMap_20,
  MR_Word STATE_VARIABLE_VarSet_0_35,
  MR_Word * STATE_VARIABLE_VarSet_36,
  MR_Word STATE_VARIABLE_VarTypes_0_37,
  MR_Word * STATE_VARIABLE_VarTypes_38,
  MR_Word STATE_VARIABLE_TSStringTable_0_39,
  MR_Word * STATE_VARIABLE_TSStringTable_40);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____arg_pos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____arg_pos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____cost_before_wait_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_before_wait_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____done_par_procs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____done_par_procs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_var_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_var_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____maybe_spec_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_spec_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____maybe_worth_pushing_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_worth_pushing_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____new_par_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____new_par_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____par_proc_call_pattern_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____par_proc_call_pattern_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pending_par_procs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pending_par_procs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____proc_pushable_args_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____proc_pushable_args_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____push_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____push_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pushable_args_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pushable_args_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____rev_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____rev_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____spec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____spec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____sync_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____sync_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____ts_string_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____ts_string_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____wait_or_get_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____wait_or_get_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____waited_in_conjunct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_in_conjunct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_1[10][2];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_2[13][3];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_3[3][14];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_4[1][15];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_5[6][6];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_6[6][5];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_7[2][7];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_8[1][13];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_9[1][12];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_11[2][4];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_13[2][11];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_14[1][10];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_15[6][1];


/* sealed */ struct transform_hlds__dep_par_conj__vector_common_type_10_0_s {
  const MR_Word transform_hlds__dep_par_conj__vector_common_type_10_0__vct_10_f_0;
  const MR_Word transform_hlds__dep_par_conj__vector_common_type_10_0__vct_10_f_1;
};

static /* final */ const struct transform_hlds__dep_par_conj__vector_common_type_10_0_s transform_hlds__dep_par_conj_vector_common_10[8];

/* sealed */ struct transform_hlds__dep_par_conj__vector_common_type_12_0_s {
  const MR_Word transform_hlds__dep_par_conj__vector_common_type_12_0__vct_12_f_0;
};

static /* final */ const struct transform_hlds__dep_par_conj__vector_common_type_12_0_s transform_hlds__dep_par_conj_vector_common_12[8];



static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_1[10][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_2[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dep_par_conj_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dep_par_conj_scalar_common_2[10])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dep_par_conj_scalar_common_15[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_2[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_2[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_5[2])),
    ((MR_Box) (transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[3])),
    ((MR_Box) (transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 11 */
  {
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_14[0])),
    ((MR_Box) (transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_3[3][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0__plain_transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_waited_on_all_success_paths_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_4[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 12)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_5[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_before_wait_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_6[6][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj____vpti_pred_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_after_signal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_after_signal_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_8[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_9[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_11[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__dep_par_conj____vpti_pred_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dep_par_conj_scalar_common_15[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dep_par_conj_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dep_par_conj_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dep_par_conj_scalar_common_2[12])))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_13[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_14[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_15[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 4U))
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &transform_hlds__dep_par_conj_scalar_common_15[2])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__dep_par_conj_scalar_common_15[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "dep_par_conj transformation"))
  },
};


static /* final */ const struct transform_hlds__dep_par_conj__vector_common_type_10_0_s transform_hlds__dep_par_conj_vector_common_10[8] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  /* row 2 */
  {
    (MR_Integer) 1,
    (MR_Integer) 0
  },
  /* row 3 */
  {
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  /* row 4 */
  {
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  /* row 5 */
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  /* row 6 */
  {
    (MR_Integer) 1,
    (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_Integer) 1,
    (MR_Integer) 1
  },
};

static /* final */ const struct transform_hlds__dep_par_conj__vector_common_type_12_0_s transform_hlds__dep_par_conj_vector_common_12[8] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 0 },
  /* row 4 */   {     (MR_Integer) 0 },
  /* row 5 */   {     (MR_Integer) 0 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__instmap__type_ctor_info_instmap_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj____vpti_pred_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct0 transform_hlds__dep_par_conj____vpti_pred_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 0,
  { 0 }

};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0__plain_transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0),
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0),
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0)
  }
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_arg_pos_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____arg_pos_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____arg_pos_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "arg_pos",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_0 = {
  (MR_String) "not_seen_signal",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_1 = {
  (MR_String) "code_has_no_solutions",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_2 = {
  (MR_String) "seen_signal_negligible_cost_after",
  INT32_C(2)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_3 = {
  (MR_String) "seen_signal_non_negligible_cost_after",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_cost_after_signal_0[4] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_0,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_1,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_2,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_3
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_cost_after_signal_0[4] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_1,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_0,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_2,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_after_signal_0_3
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_cost_after_signal_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_after_signal_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "cost_after_signal",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_cost_after_signal_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_cost_after_signal_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_cost_after_signal_0
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_0 = {
  (MR_String) "not_seen_wait_negligible_cost_so_far",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_1 = {
  (MR_String) "not_seen_wait_non_negligible_cost_so_far",
  INT32_C(1)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_2 = {
  (MR_String) "seen_wait_negligible_cost_before",
  INT32_C(2)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_3 = {
  (MR_String) "seen_wait_non_negligible_cost_before",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_cost_before_wait_0[4] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_0,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_1,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_2,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_3
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_cost_before_wait_0[4] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_0,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_1,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_2,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_3
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_cost_before_wait_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_before_wait_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____cost_before_wait_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____cost_before_wait_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "cost_before_wait",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_cost_before_wait_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_cost_before_wait_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_cost_before_wait_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0),
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_done_par_procs_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____done_par_procs_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____done_par_procs_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "done_par_procs",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____future_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____future_map_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "future_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_future_var_pair_0_0[2] = {
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_future_var_pair_0_0[2] = {
  (MR_String) "fvp_future",
  (MR_String) "fvp_var"
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_future_var_pair_0_0 = {
  (MR_String) "future_var_pair",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_future_var_pair_0_0,
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_future_var_pair_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_future_var_pair_0_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_future_var_pair_0_0
};

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_future_var_pair_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_future_var_pair_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_future_var_pair_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_future_var_pair_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_future_var_pair_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____future_var_pair_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____future_var_pair_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "future_var_pair",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_future_var_pair_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_future_var_pair_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_future_var_pair_0
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_maybe_spec_proc_0_0 = {
  (MR_String) "will_not_specialise",
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

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_maybe_spec_proc_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_maybe_spec_proc_0_1[2] = {
  (MR_String) "sp_ppid",
  (MR_String) "sp_name"
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_maybe_spec_proc_0_1 = {
  (MR_String) "spec_proc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_maybe_spec_proc_0_1,
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_maybe_spec_proc_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_maybe_spec_proc_0_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_maybe_spec_proc_0_0
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_maybe_spec_proc_0_1[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_maybe_spec_proc_0_1
};

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_maybe_spec_proc_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_maybe_spec_proc_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_maybe_spec_proc_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_maybe_spec_proc_0[2] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_maybe_spec_proc_0_1,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_maybe_spec_proc_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_maybe_spec_proc_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_spec_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____maybe_spec_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____maybe_spec_proc_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "maybe_spec_proc",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_maybe_spec_proc_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_maybe_spec_proc_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_maybe_spec_proc_0
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_maybe_worth_pushing_0_0 = {
  (MR_String) "worth_pushing",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_maybe_worth_pushing_0_1 = {
  (MR_String) "not_worth_pushing",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_maybe_worth_pushing_0[2] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_maybe_worth_pushing_0_0,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_maybe_worth_pushing_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_maybe_worth_pushing_0[2] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_maybe_worth_pushing_0_1,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_maybe_worth_pushing_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_maybe_worth_pushing_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____maybe_worth_pushing_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____maybe_worth_pushing_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "maybe_worth_pushing",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_maybe_worth_pushing_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_maybe_worth_pushing_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_maybe_worth_pushing_0
};

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_new_par_proc_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_new_par_proc_0_0[2] = {
  (MR_String) "new_ppid",
  (MR_String) "new_name"
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_new_par_proc_0_0 = {
  (MR_String) "new_par_proc",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_new_par_proc_0_0,
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_new_par_proc_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_new_par_proc_0_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_new_par_proc_0_0
};

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_new_par_proc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_new_par_proc_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_new_par_proc_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_new_par_proc_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_new_par_proc_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____new_par_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____new_par_proc_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "new_par_proc",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_new_par_proc_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_new_par_proc_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_new_par_proc_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_par_proc_call_pattern_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__list__ti_list_1builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_par_proc_call_pattern_0_0[2] = {
  (MR_String) "old_ppid",
  (MR_String) "future_args"
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_par_proc_call_pattern_0_0 = {
  (MR_String) "par_proc_call_pattern",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_par_proc_call_pattern_0_0,
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_par_proc_call_pattern_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_par_proc_call_pattern_0_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_par_proc_call_pattern_0_0
};

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_par_proc_call_pattern_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_par_proc_call_pattern_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_par_proc_call_pattern_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_par_proc_call_pattern_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_par_proc_call_pattern_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____par_proc_call_pattern_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____par_proc_call_pattern_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "par_proc_call_pattern",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_par_proc_call_pattern_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_par_proc_call_pattern_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_par_proc_call_pattern_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__list__ti_list_1pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_pending_par_procs_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____pending_par_procs_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____pending_par_procs_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "pending_par_procs",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__list__ti_list_1pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_proc_pushable_args_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____proc_pushable_args_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____proc_pushable_args_map_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "proc_pushable_args_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_push_op_0_0 = {
  (MR_String) "push_wait",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_push_op_0_1 = {
  (MR_String) "push_signal",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_push_op_0[2] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_push_op_0_0,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_push_op_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_push_op_0[2] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_push_op_0_1,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_push_op_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_push_op_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_push_op_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____push_op_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____push_op_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "push_op",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_push_op_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_push_op_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_push_op_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_pushable_args_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____pushable_args_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____pushable_args_map_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "pushable_args_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_rev_proc_map_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____rev_proc_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____rev_proc_map_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "rev_proc_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_spec_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__list__ti_list_1pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0)
};

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_spec_info_0_0[8] = {
  (MR_String) "spec_done_procs",
  (MR_String) "spec_rev_proc_map",
  (MR_String) "spec_initial_module",
  (MR_String) "spec_ppid",
  (MR_String) "spec_vartypes",
  (MR_String) "spec_module_info",
  (MR_String) "spec_pending_procs",
  (MR_String) "spec_pushability"
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_spec_info_0_0 = {
  (MR_String) "spec_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_spec_info_0_0,
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_spec_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_spec_info_0_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_spec_info_0_0
};

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_spec_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_spec_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_spec_info_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_spec_info_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_spec_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_spec_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____spec_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____spec_info_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "spec_info",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_spec_info_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_spec_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_spec_info_0
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_sync_info_0_0[7] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0)
};

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_sync_info_0_0[7] = {
  (MR_String) "sync_module_info",
  (MR_String) "sync_ignore_vars",
  (MR_String) "sync_allow_some_paths_only",
  (MR_String) "sync_varset",
  (MR_String) "sync_vartypes",
  (MR_String) "sync_this_proc",
  (MR_String) "sync_ts_string_table"
};

static const MR_DuArgLocn transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_locns_sync_info_0_0[7] = {
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
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_sync_info_0_0 = {
  (MR_String) "sync_info",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_sync_info_0_0,
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_sync_info_0_0,
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_locns_sync_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_sync_info_0_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_sync_info_0_0
};

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_sync_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_sync_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_sync_info_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_sync_info_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_sync_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_sync_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____sync_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____sync_info_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "sync_info",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_sync_info_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_sync_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_sync_info_0
};

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_ts_string_table_0_0[3] = {
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2builtin__type_ctor_info_string_0builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__list__ti_list_1builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_ts_string_table_0_0[3] = {
  (MR_String) "st_lookup_map",
  (MR_String) "st_rev_table",
  (MR_String) "st_size"
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_ts_string_table_0_0 = {
  (MR_String) "ts_string_table",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_ts_string_table_0_0,
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_ts_string_table_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_ts_string_table_0_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_ts_string_table_0_0
};

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_ts_string_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_ts_string_table_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_ts_string_table_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_ts_string_table_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_ts_string_table_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____ts_string_table_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____ts_string_table_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "ts_string_table",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_ts_string_table_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_ts_string_table_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_ts_string_table_0
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_wait_or_get_pred_0_0 = {
  (MR_String) "wait_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_wait_or_get_pred_0_1 = {
  (MR_String) "get_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_wait_or_get_pred_0[2] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_wait_or_get_pred_0_0,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_wait_or_get_pred_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_wait_or_get_pred_0[2] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_wait_or_get_pred_0_1,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_wait_or_get_pred_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_wait_or_get_pred_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_wait_or_get_pred_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____wait_or_get_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____wait_or_get_pred_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "wait_or_get_pred",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_wait_or_get_pred_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_wait_or_get_pred_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_wait_or_get_pred_0
};

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_waited_in_conjunct_0_0[1] = {
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_waited_on_all_success_paths_0)
};

static const MR_DuArgLocn transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_locns_waited_in_conjunct_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_waited_in_conjunct_0_0 = {
  (MR_String) "waited_in_conjunct",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_waited_in_conjunct_0_0,
  NULL,
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_locns_waited_in_conjunct_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_waited_in_conjunct_0_1 = {
  (MR_String) "have_not_waited_in_conjunct",
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

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_waited_in_conjunct_0_0[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_waited_in_conjunct_0_1
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_waited_in_conjunct_0_1[1] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_waited_in_conjunct_0_0
};

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_waited_in_conjunct_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_waited_in_conjunct_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_waited_in_conjunct_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_waited_in_conjunct_0[2] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_waited_in_conjunct_0_1,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_waited_in_conjunct_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_waited_in_conjunct_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_waited_in_conjunct_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____waited_in_conjunct_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____waited_in_conjunct_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "waited_in_conjunct",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_waited_in_conjunct_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_waited_in_conjunct_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_waited_in_conjunct_0
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_waited_on_all_success_paths_0_0 = {
  (MR_String) "waited_on_all_success_paths",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_waited_on_all_success_paths_0_1 = {
  (MR_String) "not_waited_on_all_success_paths",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_waited_on_all_success_paths_0[2] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_waited_on_all_success_paths_0_0,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_waited_on_all_success_paths_0_1
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_waited_on_all_success_paths_0[2] = {
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_waited_on_all_success_paths_0_1,
  &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_waited_on_all_success_paths_0_0
};

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_waited_on_all_success_paths_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_waited_on_all_success_paths_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "waited_on_all_success_paths",
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_waited_on_all_success_paths_0 },
  {     transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_value_ordered_waited_on_all_success_paths_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_waited_on_all_success_paths_0
};

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__3438__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__4_4,
  MR_Word LambdaHeadVar__1_30)
{
  {
    MR_bool succeeded;
    MR_Word VarInst_25;

    hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__4_4, LambdaHeadVar__1_30, &VarInst_25);
    succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(HeadVar__1_1, VarInst_25);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__should_we_push_signal__2817__1_2_p_0(
  MR_Word STATE_VARIABLE_Signal_0_53,
  MR_Word HeadVar__2_77)
{
  {
    MR_bool succeeded = (STATE_VARIABLE_Signal_0_53 == HeadVar__2_77);

    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_par_conj__1288__1_2_p_0(
  MR_Word HeadVar__3_3,
  MR_Word ChangedVars_31)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_31, HeadVar__3_3);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_plain_conj__1258__1_2_p_0(
  MR_Word HeadVar__3_3,
  MR_Word ChangedVars_30)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_30, HeadVar__3_3);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__480__2_2_p_0(
  MR_Word HeadVar__1_30,
  MR_Word HeadVar__2_37)
{
  {
    MR_bool succeeded;

    succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), HeadVar__1_30, ((MR_Box) (HeadVar__2_37)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__480__1_2_p_0(
  MR_Word IgnoreVars_13,
  MR_Word HeadVar__2_39)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IgnoreVars_13, HeadVar__2_39);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0(
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
transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_in_conjunct_0_0(
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
      MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Var_12 = (MR_Integer) (Var_11);
        MR_Integer Var_13 = (MR_Integer) (ArgY1_5);

        succeeded = (Var_12 < Var_13);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_12 > Var_13);
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
transform_hlds__dep_par_conj____Unify____waited_in_conjunct_0_0(
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
      MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY1_4;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
        succeeded = (ArgX1_3 == ArgY1_4);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____wait_or_get_pred_0_0(
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
transform_hlds__dep_par_conj____Unify____wait_or_get_pred_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____sync_info_0_0(
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
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
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

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[5]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_33 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_34 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_33 < Var_34);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_33 > Var_34);
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
          {
            MR_Word SubResult4_15;

            mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
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

                hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                  transform_hlds__dep_par_conj____Compare____ts_string_table_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____ts_string_table_0_0(
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
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[7]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
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
transform_hlds__dep_par_conj____Unify____sync_info_0_0(
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
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_21_21;
      MR_Word TypeCtorInfo_22_22;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
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
        TypeInfo_20_20 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[5]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
          {
            TypeInfo_21_21 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeCtorInfo_22_22 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_22_22, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                  succeeded = transform_hlds__dep_par_conj____Unify____ts_string_table_0_0(ArgX7_15, ArgY7_16);
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
transform_hlds__dep_par_conj____Unify____ts_string_table_0_0(
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
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[7]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____spec_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_27 == CastY_28);
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
      MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[5]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[3]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          hlds__hlds_module____Compare____module_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Word SubResult4_15;

            hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
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

                hlds__hlds_module____Compare____module_info_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
                succeeded = (SubResult6_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult6_21;
                else
                {
                  MR_Word SubResult7_24;

                  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[1]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                  succeeded = (SubResult7_24 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult7_24;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____spec_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_22_22;
      MR_Word TypeCtorInfo_25_25;
      MR_Word TypeInfo_27_27;
      MR_Word TypeInfo_28_28;
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
      MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 7))));
      MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[5]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_22_22 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX4_9, ArgY4_10);
            if (succeeded)
            {
              TypeCtorInfo_25_25 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
              succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_25_25, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_27_27 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_28_28 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[2]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
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

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____rev_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____rev_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pushable_args_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pushable_args_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____push_op_0_0(
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
transform_hlds__dep_par_conj____Unify____push_op_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____proc_pushable_args_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____proc_pushable_args_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pending_par_procs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pending_par_procs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____par_proc_call_pattern_0_0(
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

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[6]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____par_proc_call_pattern_0_0(
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

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[6]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____new_par_proc_0_0(
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

      hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____new_par_proc_0_0(
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

      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_worth_pushing_0_0(
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
transform_hlds__dep_par_conj____Unify____maybe_worth_pushing_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_spec_proc_0_0(
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
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word SubResult1_10;

        hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_10, Var_18, ArgY1_9);
        succeeded = (SubResult1_10 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_10;
        else
          mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, Var_17, ArgY2_12);
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____maybe_spec_proc_0_0(
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
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_5, ArgY1_6);
        if (succeeded)
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_7, ArgY2_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_var_pair_0_0(
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

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_var_pair_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____done_par_procs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____done_par_procs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_before_wait_0_0(
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
transform_hlds__dep_par_conj____Unify____cost_before_wait_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0(
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
transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____arg_pos_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
transform_hlds__dep_par_conj____Unify____arg_pos_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__var_not_in_nonlocals_2_p_0(
  MR_Word Var_3,
  MR_Word Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;

    Var_7 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal_4);
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_7, Var_3);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__InstMapDelta_7 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__conv0_InstMapDelta_7));
    transform_hlds__dep_par_conj__changed_var_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__succeeded = hlds__instmap__instmap_delta_search_var_3_p_0((env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__InstMapDelta_7, (env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__UnboundVar_6, &(env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__Inst_8);
    if ((env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__succeeded)
    {
      (env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0((env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__ModuleInfo_4, (env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__Inst_8);
      if ((env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__succeeded)
        transform_hlds__dep_par_conj__changed_var_3_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), &(env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__conv0_InstMapDelta_7, (env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__InstMapDeltas_5, transform_hlds__dep_par_conj__changed_var_3_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMapDeltas_5,
  MR_Word UnboundVar_6)
{
  {
    struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s env;

    (env).transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__ModuleInfo_4 = ModuleInfo_4;
    (env).transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__InstMapDeltas_5 = InstMapDeltas_5;
    (env).transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__UnboundVar_6 = UnboundVar_6;
    transform_hlds__dep_par_conj__changed_var_3_p_0_4(&env);
    return (env).transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Nonlocals_6,
  MR_Word * InstMapDelta_7)
{
  {
    MR_Word GoalInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    *Nonlocals_6 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_5);
    *InstMapDelta_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_5);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__make_get_goal_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTypes_6,
  MR_Word HeadVar__3_3,
  MR_Word * WaitGoal_9)
{
  {
    MR_Word FutureVar_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word WaitVar_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));

    transform_hlds__dep_par_conj__make_wait_or_get_6_p_0(ModuleInfo_5, VarTypes_6, FutureVar_7, WaitVar_8, (MR_Integer) 1, WaitGoal_9);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__allocate_future_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word SharedVar_13,
  MR_Word * Goals_14,
  MR_Word STATE_VARIABLE_VarSet_0_39,
  MR_Word * STATE_VARIABLE_VarSet_40,
  MR_Word STATE_VARIABLE_VarTypes_0_41,
  MR_Word * STATE_VARIABLE_VarTypes_42,
  MR_Word STATE_VARIABLE_FutureMap_0_43,
  MR_Word * STATE_VARIABLE_FutureMap_44,
  MR_Word STATE_VARIABLE_TSStringTable_0_45,
  MR_Word * STATE_VARIABLE_TSStringTable_46)
{
  {
    MR_Word SharedVarType_19;
    MR_String SharedVarName_20;
    MR_Word FutureVar_21;
    MR_Word FutureVarType_22;
    MR_Word FutureNameVar_23;
    MR_Word SetNameGoal_24;
    MR_Word ModuleName_25;
    MR_Word InstMapDelta_28;
    MR_Word Context_29;
    MR_Word ShouldInline_30;
    MR_Word AllocGoal_32;
    MR_Word STATE_VARIABLE_VarSet_47_47;
    MR_Word STATE_VARIABLE_VarTypes_48_48;
    MR_Word Var_81;
    MR_Word Globals_87;

    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_41, SharedVar_13, &SharedVarType_19);
    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_39, SharedVar_13, &SharedVarName_20);
    transform_hlds__dep_par_conj__make_future_var_8_p_0(SharedVarName_20, SharedVarType_19, &FutureVar_21, &FutureVarType_22, STATE_VARIABLE_VarSet_0_39, &STATE_VARIABLE_VarSet_47_47, STATE_VARIABLE_VarTypes_0_41, &STATE_VARIABLE_VarTypes_48_48);
    transform_hlds__dep_par_conj__make_future_name_var_and_goal_9_p_0(SharedVarName_20, &FutureNameVar_23, &SetNameGoal_24, STATE_VARIABLE_VarSet_47_47, STATE_VARIABLE_VarSet_40, STATE_VARIABLE_VarTypes_48_48, STATE_VARIABLE_VarTypes_42, STATE_VARIABLE_TSStringTable_0_45, STATE_VARIABLE_TSStringTable_46);
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (SharedVar_13)), ((MR_Box) (FutureVar_21)), STATE_VARIABLE_FutureMap_0_43, STATE_VARIABLE_FutureMap_44);
    ModuleName_25 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
    InstMapDelta_28 = hlds__instmap__instmap_delta_bind_var_1_f_0(FutureVar_21);
    Context_29 = mercury__term__context_init_0_f_0();
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_87);
    libs__globals__lookup_bool_option_3_p_0(Globals_87, (MR_Integer) 431, &ShouldInline_30);
    switch (ShouldInline_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgVars_31;
          MR_Word Var_75;

          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (FutureVar_21));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ArgVars_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_31, 0) = ((MR_Box) (FutureNameVar_23));
            MR_hl_field(MR_mktag(1), ArgVars_31, 1) = ((MR_Box) (Var_75));
          }
          hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_12, ModuleName_25, (MR_String) "new_future", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, ArgVars_31, (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_28, Context_29, &AllocGoal_32);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ForeignAttrs_33;
          MR_Word ArgName_34;
          MR_Word ArgFuture_35;
          MR_Word Args_36;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word Var_58;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_66;
          MR_Word Var_68;

          ForeignAttrs_33 = transform_hlds__dep_par_conj__par_builtin_foreign_proc_attributes_2_f_0((MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U));
          Var_58 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_56, 0) = ((MR_Box) ((MR_String) "Name"));
            MR_hl_field(MR_mktag(0), Var_56, 1) = ((MR_Box) (Var_58));
          }
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
          }
          {
            ArgName_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgName_34, 0) = ((MR_Box) (FutureNameVar_23));
            MR_hl_field(MR_mktag(0), ArgName_34, 1) = ((MR_Box) (Var_55));
            MR_hl_field(MR_mktag(0), ArgName_34, 2) = ((MR_Box) (MR_mkword(MR_mktag(2), &transform_hlds__dep_par_conj_scalar_common_15[3])));
            MR_hl_field(MR_mktag(0), ArgName_34, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          Var_66 = parse_tree__prog_mode__out_mode_0_f_0();
          {
            Var_64 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) ((MR_String) "Future"));
            MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (Var_66));
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
          }
          {
            ArgFuture_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ArgFuture_35, 0) = ((MR_Box) (FutureVar_21));
            MR_hl_field(MR_mktag(0), ArgFuture_35, 1) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(0), ArgFuture_35, 2) = ((MR_Box) (FutureVarType_22));
            MR_hl_field(MR_mktag(0), ArgFuture_35, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (ArgFuture_35));
            MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_36, 0) = ((MR_Box) (ArgName_34));
            MR_hl_field(MR_mktag(1), Args_36, 1) = ((MR_Box) (Var_68));
          }
          hlds__goal_util__generate_foreign_proc_16_p_0(ModuleInfo_12, ModuleName_25, (MR_String) "new_future", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, ForeignAttrs_33, Args_36, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_String) "\n    #ifdef MR_THREADSCOPE\n        MR_par_builtin_new_future(Name, Future);\n    #else\n        MR_par_builtin_new_future(Future);\n    #endif\n", (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_28, Context_29, &AllocGoal_32);
        }
        break;
    }
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (AllocGoal_32));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Goals_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SetNameGoal_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_81));
    }
  }
}

static MR_Word MR_CALL 
transform_hlds__dep_par_conj__par_builtin_foreign_proc_attributes_2_f_0(
  MR_Word Purity_4,
  MR_Word MaybeExtraAttr_5)
{
  {
    MR_Word Attrs_6;
    MR_Word STATE_VARIABLE_Attrs_8_8;
    MR_Word STATE_VARIABLE_Attrs_11_11;
    MR_Word STATE_VARIABLE_Attrs_13_13;
    MR_Word STATE_VARIABLE_Attrs_14_14;
    MR_Word STATE_VARIABLE_Attrs_16_16;
    MR_Word STATE_VARIABLE_Attrs_18_18;
    MR_Word STATE_VARIABLE_Attrs_20_20;
    MR_Word STATE_VARIABLE_Attrs_22_22;
    MR_Word STATE_VARIABLE_Attrs_24_24;
    MR_Word STATE_VARIABLE_Attrs_26_26;
    MR_Word STATE_VARIABLE_Attrs_28_28;

    STATE_VARIABLE_Attrs_8_8 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
    parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_8_8, &STATE_VARIABLE_Attrs_11_11);
    parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_11_11, &STATE_VARIABLE_Attrs_13_13);
    parse_tree__prog_data_foreign__set_purity_3_p_0(Purity_4, STATE_VARIABLE_Attrs_13_13, &STATE_VARIABLE_Attrs_14_14);
    parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_14_14, &STATE_VARIABLE_Attrs_16_16);
    parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_16_16, &STATE_VARIABLE_Attrs_18_18);
    parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_18_18, &STATE_VARIABLE_Attrs_20_20);
    parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_20_20, &STATE_VARIABLE_Attrs_22_22);
    parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_22_22, &STATE_VARIABLE_Attrs_24_24);
    parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_24_24, &STATE_VARIABLE_Attrs_26_26);
    parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dep_par_conj_scalar_common_15[0])), STATE_VARIABLE_Attrs_26_26, &STATE_VARIABLE_Attrs_28_28);
    if ((MaybeExtraAttr_5 == (MR_Word) ((MR_Unsigned) 0U)))
      Attrs_6 = STATE_VARIABLE_Attrs_28_28;
    else
    {
      MR_Word ExtraAttr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeExtraAttr_5, (MR_Integer) 0))));

      parse_tree__prog_data_foreign__add_extra_attribute_3_p_0(ExtraAttr_7, STATE_VARIABLE_Attrs_28_28, &Attrs_6);
    }
    return Attrs_6;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__make_future_name_var_and_goal_9_p_0(
  MR_String Name_10,
  MR_Word * FutureNameVar_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarSet_0_26,
  MR_Word * STATE_VARIABLE_VarSet_27,
  MR_Word STATE_VARIABLE_VarTypes_0_28,
  MR_Word * STATE_VARIABLE_VarTypes_29,
  MR_Word STATE_VARIABLE_TSStringTable_0_30,
  MR_Word * STATE_VARIABLE_TSStringTable_31)
{
  {
    MR_bool succeeded;
    MR_Integer NameId_17;
    MR_Word RHS_18;
    MR_Word Unification_21;
    MR_Word GoalExpr_23;
    MR_Word InstmapDelta_24;
    MR_Word GoalInfo_25;
    MR_String Var_32;
    MR_Word Var_39;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_59;
    MR_Word Map0_68;
    MR_Word RevTable0_69;
    MR_Integer Size0_70;
    MR_Integer ExistingId_71;
    MR_Box conv0_ExistingId_71;

    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "FutureName", Name_10);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_32, FutureNameVar_11, STATE_VARIABLE_VarSet_0_26, STATE_VARIABLE_VarSet_27);
    hlds__vartypes__add_var_type_4_p_0(*FutureNameVar_11, (MR_Word) (MR_mkword(MR_mktag(2), &transform_hlds__dep_par_conj_scalar_common_15[3])), STATE_VARIABLE_VarTypes_0_28, STATE_VARIABLE_VarTypes_29);
    Map0_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TSStringTable_0_30, (MR_Integer) 0))));
    RevTable0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TSStringTable_0_30, (MR_Integer) 1))));
    Size0_70 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_TSStringTable_0_30, (MR_Integer) 2))));
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map0_68, ((MR_Box) (Name_10)), &conv0_ExistingId_71);
    if (succeeded)
    {
      ExistingId_71 = ((MR_Integer) (conv0_ExistingId_71));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      NameId_17 = ExistingId_71;
      *STATE_VARIABLE_TSStringTable_31 = STATE_VARIABLE_TSStringTable_0_30;
    }
    else
    {
      MR_Integer Size_72;
      MR_Word RevTable_73;
      MR_Word Map_74;

      NameId_17 = Size0_70;
      Size_72 = (MR_Integer) ((MR_Unsigned) Size0_70 + (MR_Unsigned) 1);
      {
        RevTable_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RevTable_73, 0) = ((MR_Box) (Name_10));
        MR_hl_field(MR_mktag(1), RevTable_73, 1) = ((MR_Box) (RevTable0_69));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Name_10)), ((MR_Box) (NameId_17)), Map0_68, &Map_74);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_TSStringTable_31 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Map_74));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RevTable_73));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Size_72));
      }
    }
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_39, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), Var_39, 1) = ((MR_Box) (NameId_17));
    }
    {
      RHS_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RHS_18, 0) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(1), RHS_18, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(1), RHS_18, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Unification_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Unification_21, 0) = ((MR_Box) (*FutureNameVar_11));
      MR_hl_field(MR_mktag(0), Unification_21, 1) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), Unification_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_21, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_21, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), Unification_21, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Unification_21, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      GoalExpr_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), GoalExpr_23, 0) = ((MR_Box) (*FutureNameVar_11));
      MR_hl_field(MR_mktag(1), GoalExpr_23, 1) = ((MR_Box) (RHS_18));
      MR_hl_field(MR_mktag(1), GoalExpr_23, 2) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_11[1]));
      MR_hl_field(MR_mktag(1), GoalExpr_23, 3) = ((MR_Box) (Unification_21));
      MR_hl_field(MR_mktag(1), GoalExpr_23, 4) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_1[9]));
    }
    {
      Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (*FutureNameVar_11));
      MR_hl_field(MR_mktag(0), Var_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &transform_hlds__dep_par_conj_scalar_common_2[12])));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    InstmapDelta_24 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_56);
    Var_59 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FutureNameVar_11);
    hlds__hlds_goal__goal_info_init_5_p_0(Var_59, InstmapDelta_24, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_25));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__make_future_var_8_p_0(
  MR_String SharedVarName_9,
  MR_Word SharedVarType_10,
  MR_Word * FutureVar_11,
  MR_Word * FutureVarType_12,
  MR_Word STATE_VARIABLE_VarSet_0_15,
  MR_Word * STATE_VARIABLE_VarSet_16,
  MR_Word STATE_VARIABLE_VarTypes_0_17,
  MR_Word * STATE_VARIABLE_VarTypes_18)
{
  {
    MR_String Var_19;

    *FutureVarType_12 = parse_tree__builtin_lib_types__future_type_1_f_0(SharedVarType_10);
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "Future", SharedVarName_9);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_19, FutureVar_11, STATE_VARIABLE_VarSet_0_15, STATE_VARIABLE_VarSet_16);
    hlds__vartypes__add_var_type_4_p_0(*FutureVar_11, *FutureVarType_12, STATE_VARIABLE_VarTypes_0_17, STATE_VARIABLE_VarTypes_18);
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__seen_more_signal_2_p_0(
  MR_Word SignalA_3,
  MR_Word SignalB_4)
{
  {
    MR_bool succeeded;

    switch (SignalA_3) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        succeeded = (SignalB_4 == (MR_Integer) 1);
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        switch (SignalB_4) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 3:
        switch (SignalB_4) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Goal_8 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__conv0_Goal_8));
    transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__GoalNonLocals_9 = hlds__hlds_goal__goal_get_nonlocals_1_f_0((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Goal_8);
    (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__TypeCtorInfo_12_12 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__TypeCtorInfo_12_12, (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__GoalNonLocals_9, (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Var_7);
    if ((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded)
      transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), &(env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__conv0_Goal_8, (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__FwdGoals_5, transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0(
  MR_Word NonLocals_4,
  MR_Word FwdGoals_5,
  MR_Word HeadVar__3_3)
{
  {
    struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s env;

    (env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__FwdGoals_5 = FwdGoals_5;
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

      (env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      (env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_4, (env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Var_7);
      if (!((env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded))
        transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_4(&env);
      return (env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded;
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__replace_args_with_futures_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Var_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *Var_3 = HeadVar__2_2;
    else
    {
      MR_Word H_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Future_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), H_5, (MR_Integer) 0))));
      MR_Word X_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), H_5, (MR_Integer) 1))));

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (X_10)), ((MR_Box) (HeadVar__2_2)));
      if (succeeded)
        *Var_3 = Future_9;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = T_6;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
transform_hlds__dep_par_conj__fvp_var_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

    return HeadVar__2_2;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__map_arg_to_new_future_8_p_0(
  MR_Word HeadVars_9,
  MR_Integer FutureArg_10,
  MR_Word STATE_VARIABLE_FutureMap_0_19,
  MR_Word * STATE_VARIABLE_FutureMap_20,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24)
{
  {
    MR_Word HeadVar_14;
    MR_Word VarType_15;
    MR_String HeadVarName_16;
    MR_Word FutureVar_17;
    MR_Word _FutureVarType_18;
    MR_String Var_40;
    MR_Box conv0_HeadVar_14;

    conv0_HeadVar_14 = mercury__list__det_index1_2_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), HeadVars_9, FutureArg_10);
    HeadVar_14 = ((MR_Word) (conv0_HeadVar_14));
    hlds__vartypes__lookup_var_type_3_p_0(STATE_VARIABLE_VarTypes_0_23, HeadVar_14, &VarType_15);
    mercury__varset__lookup_name_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), STATE_VARIABLE_VarSet_0_21, HeadVar_14, &HeadVarName_16);
    _FutureVarType_18 = parse_tree__builtin_lib_types__future_type_1_f_0(VarType_15);
    Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "Future", HeadVarName_16);
    mercury__varset__new_named_var_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_40, &FutureVar_17, STATE_VARIABLE_VarSet_0_21, STATE_VARIABLE_VarSet_22);
    hlds__vartypes__add_var_type_4_p_0(FutureVar_17, _FutureVarType_18, STATE_VARIABLE_VarTypes_0_23, STATE_VARIABLE_VarTypes_24);
    mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (HeadVar_14)), ((MR_Box) (FutureVar_17)), STATE_VARIABLE_FutureMap_0_19, STATE_VARIABLE_FutureMap_20);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_cases_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTypes_9 = STATE_VARIABLE_VarTypes_0_8;
    *STATE_VARIABLE_VarSet_7 = STATE_VARIABLE_VarSet_0_6;
  }
  else
  {
    MR_Word Case0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Cases0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Case_24;
    MR_Word Cases_25;
    MR_Word MainConsId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_22, (MR_Integer) 0))));
    MR_Word OtherConsIds_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_22, (MR_Integer) 1))));
    MR_Word Goal0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_22, (MR_Integer) 2))));
    MR_Word Goal_31;
    MR_Word STATE_VARIABLE_VarSet_36_36;
    MR_Word STATE_VARIABLE_VarTypes_37_37;

    transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goal0_30, &Goal_31, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_VarTypes_0_8, &STATE_VARIABLE_VarTypes_37_37);
    {
      Case_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_24, 0) = ((MR_Box) (MainConsId_28));
      MR_hl_field(MR_mktag(0), Case_24, 1) = ((MR_Box) (OtherConsIds_29));
      MR_hl_field(MR_mktag(0), Case_24, 2) = ((MR_Box) (Goal_31));
    }
    transform_hlds__dep_par_conj__insert_signal_in_cases_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Cases0_23, &Cases_25, STATE_VARIABLE_VarSet_36_36, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_VarTypes_37_37, STATE_VARIABLE_VarTypes_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_25));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_disj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTypes_9 = STATE_VARIABLE_VarTypes_0_8;
    *STATE_VARIABLE_VarSet_7 = STATE_VARIABLE_VarSet_0_6;
  }
  else
  {
    MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_24;
    MR_Word Goals_25;
    MR_Word STATE_VARIABLE_VarSet_32_32;
    MR_Word STATE_VARIABLE_VarTypes_33_33;

    transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goal0_22, &Goal_24, STATE_VARIABLE_VarSet_0_6, &STATE_VARIABLE_VarSet_32_32, STATE_VARIABLE_VarTypes_0_8, &STATE_VARIABLE_VarTypes_33_33);
    transform_hlds__dep_par_conj__insert_signal_in_disj_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goals0_23, &Goals_25, STATE_VARIABLE_VarSet_32_32, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_VarTypes_33_33, STATE_VARIABLE_VarTypes_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_25));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_par_conj_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_par_conj__1288__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_par_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTypes_9 = STATE_VARIABLE_VarTypes_0_8;
      *STATE_VARIABLE_VarSet_7 = STATE_VARIABLE_VarSet_0_6;
    }
    else
    {
      MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Goal_24;
      MR_Word Goals_25;
      MR_Word Var_46;

      Var_46 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_22);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_46, HeadVar__3_3);
      if (succeeded)
      {
        MR_Word GoalInfo0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_22, (MR_Integer) 1))));
        MR_Word InstMapDelta_30;
        MR_Word ChangedVars_31;
        MR_Word Var_36;

        InstMapDelta_30 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_29);
        hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_30, &ChangedVars_31);
        {
          Var_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[5]));
          MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (transform_hlds__dep_par_conj__insert_signal_in_par_conj_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (HeadVar__3_3));
          MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (ChangedVars_31));
        }
        mercury__require__expect_3_p_0(Var_36, (MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_par_conj\'/9", (MR_String) "ProducedVar not in ChangedVars");
        transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goal0_22, &Goal_24, STATE_VARIABLE_VarSet_0_6, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_VarTypes_0_8, STATE_VARIABLE_VarTypes_9);
        Goals_25 = Goals0_23;
      }
      else
      {
        Goal_24 = Goal0_22;
        transform_hlds__dep_par_conj__insert_signal_in_par_conj_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goals0_23, &Goals_25, STATE_VARIABLE_VarSet_0_6, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_VarTypes_0_8, STATE_VARIABLE_VarTypes_9);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_25));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_plain_conj_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_plain_conj__1258__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_plain_conj_9_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarSet_0_6,
  MR_Word * STATE_VARIABLE_VarSet_7,
  MR_Word STATE_VARIABLE_VarTypes_0_8,
  MR_Word * STATE_VARIABLE_VarTypes_9)
{
  {
    MR_bool succeeded;

    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTypes_9 = STATE_VARIABLE_VarTypes_0_8;
      *STATE_VARIABLE_VarSet_7 = STATE_VARIABLE_VarSet_0_6;
    }
    else
    {
      MR_Word Goal0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Var_52;

      Var_52 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_22);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_52, HeadVar__3_3);
      if (succeeded)
      {
        MR_Word GoalInfo0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_22, (MR_Integer) 1))));
        MR_Word InstMapDelta_29;
        MR_Word ChangedVars_30;
        MR_Word Goal1_31;
        MR_Word Var_38;
        MR_Word GoalConjs1_32;
        MR_Word Var_43;
        MR_Word Var_44;

        InstMapDelta_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_28);
        hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_29, &ChangedVars_30);
        {
          Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[5]));
          MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (transform_hlds__dep_par_conj__insert_signal_in_plain_conj_9_p_0_1));
          MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (HeadVar__3_3));
          MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) (ChangedVars_30));
        }
        mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_plain_conj\'/9", (MR_String) "ProducedVar not in ChangedVars");
        transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goal0_22, &Goal1_31, STATE_VARIABLE_VarSet_0_6, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_VarTypes_0_8, STATE_VARIABLE_VarTypes_9);
        Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal1_31, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 1))) & (MR_Integer) 1);
          GoalConjs1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_43, (MR_Integer) 2))));
          succeeded = (Var_44 == (MR_Integer) 0);
        }
        if (succeeded)
          *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalConjs1_32, Goals0_23);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal1_31));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals0_23));
          }
      }
      else
      {
        MR_Word Goals1_33;

        transform_hlds__dep_par_conj__insert_signal_in_plain_conj_9_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goals0_23, &Goals1_33, STATE_VARIABLE_VarSet_0_6, STATE_VARIABLE_VarSet_7, STATE_VARIABLE_VarTypes_0_8, STATE_VARIABLE_VarTypes_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal0_22));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_33));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dep_par_conj__var_not_in_nonlocals_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FutureMap_11,
  MR_Word ProducedVar_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_73,
  MR_Word * STATE_VARIABLE_VarSet_74,
  MR_Word STATE_VARIABLE_VarTypes_0_75,
  MR_Word * STATE_VARIABLE_VarTypes_76)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
    MR_Word GoalInfo0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1))));
    MR_Word Detism_19;
    MR_Word NumSolutions_21;
    MR_Word _CanFail_20;

    Detism_19 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_18);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_19, &_CanFail_20, &NumSolutions_21);
    switch (NumSolutions_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          succeeded = transform_hlds__dep_par_conj__var_in_nonlocals_2_p_0(ProducedVar_12, Goal0_13);
          if (succeeded)
            switch (MR_tag((MR_Word) GoalExpr0_17)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_goal\'/9", (MR_String) "negation binds shared variable");
                  return;
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                transform_hlds__dep_par_conj__insert_signal_after_goal_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, Goal0_13, Goal_14, STATE_VARIABLE_VarSet_0_73, STATE_VARIABLE_VarSet_74, STATE_VARIABLE_VarTypes_0_75, STATE_VARIABLE_VarTypes_76);
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    transform_hlds__dep_par_conj__insert_signal_after_goal_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, Goal0_13, Goal_14, STATE_VARIABLE_VarSet_0_73, STATE_VARIABLE_VarSet_74, STATE_VARIABLE_VarTypes_0_75, STATE_VARIABLE_VarTypes_76);
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ConjType_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))) & (MR_Integer) 1);
                      MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 2))));
                      MR_Word Goals_24;
                      MR_Word GoalExpr_25;

                      switch (ConjType_22) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 1:
                          transform_hlds__dep_par_conj__insert_signal_in_par_conj_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, Goals0_23, &Goals_24, STATE_VARIABLE_VarSet_0_73, STATE_VARIABLE_VarSet_74, STATE_VARIABLE_VarTypes_0_75, STATE_VARIABLE_VarTypes_76);
                          break;
                        case (MR_Integer) 0:
                          transform_hlds__dep_par_conj__insert_signal_in_plain_conj_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, Goals0_23, &Goals_24, STATE_VARIABLE_VarSet_0_73, STATE_VARIABLE_VarSet_74, STATE_VARIABLE_VarTypes_0_75, STATE_VARIABLE_VarTypes_76);
                          break;
                      }
                      {
                        GoalExpr_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), GoalExpr_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                        MR_hl_field(MR_mktag(3), GoalExpr_25, 1) = (MR_Box) ((MR_Unsigned) (ConjType_22));
                        MR_hl_field(MR_mktag(3), GoalExpr_25, 2) = ((MR_Box) (Goals_24));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_14 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_25));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_18));
                      }
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word Goals0_109 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))));
                      MR_Word Goals_110;
                      MR_Word GoalExpr_111;

                      transform_hlds__dep_par_conj__insert_signal_in_disj_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, Goals0_109, &Goals_110, STATE_VARIABLE_VarSet_0_73, STATE_VARIABLE_VarSet_74, STATE_VARIABLE_VarTypes_0_75, STATE_VARIABLE_VarTypes_76);
                      {
                        GoalExpr_111 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), GoalExpr_111, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(MR_mktag(3), GoalExpr_111, 1) = ((MR_Box) (Goals_110));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_14 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_111));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_18));
                      }
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word SwitchVar_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))));
                      MR_Word CanFail_27 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 2))) & (MR_Integer) 1);
                      MR_Word Cases0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 3))));

                      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (ProducedVar_12)), ((MR_Box) (SwitchVar_26)));
                      if (succeeded)
                        {
                          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_goal\'/9", (MR_String) "switch on unbound shared variable");
                          return;
                        }
                      else
                      {
                        MR_Word Cases_29;
                        MR_Word GoalExpr_112;

                        transform_hlds__dep_par_conj__insert_signal_in_cases_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, Cases0_28, &Cases_29, STATE_VARIABLE_VarSet_0_73, STATE_VARIABLE_VarSet_74, STATE_VARIABLE_VarTypes_0_75, STATE_VARIABLE_VarTypes_76);
                        {
                          GoalExpr_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), GoalExpr_112, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), GoalExpr_112, 1) = ((MR_Box) (SwitchVar_26));
                          MR_hl_field(MR_mktag(3), GoalExpr_112, 2) = (MR_Box) ((MR_Unsigned) (CanFail_27));
                          MR_hl_field(MR_mktag(3), GoalExpr_112, 3) = ((MR_Box) (Cases_29));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_14 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_112));
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_18));
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word Reason_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))));
                      MR_Word SubGoal0_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 2))));
                      MR_Word Var_81;

                      succeeded = ((((MR_tag((MR_Word) Reason_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_37, (MR_Integer) 0)))) == (MR_Integer) 6)));
                      if (succeeded)
                      {
                        Var_81 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_37, (MR_Integer) 2))) & (MR_Integer) 3);
                        succeeded = (Var_81 == (MR_Integer) 1);
                      }
                      if (succeeded)
                        transform_hlds__dep_par_conj__insert_signal_after_goal_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, Goal0_13, Goal_14, STATE_VARIABLE_VarSet_0_73, STATE_VARIABLE_VarSet_74, STATE_VARIABLE_VarTypes_0_75, STATE_VARIABLE_VarTypes_76);
                      else
                      {
                        MR_Word SubGoalInfo0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SubGoal0_38, (MR_Integer) 1))));
                        MR_Word Detism0_42;
                        MR_Word SubDetism0_43;
                        MR_Word MaxSolns0_45;
                        MR_Word SubMaxSolns0_47;
                        MR_Word Var_44;
                        MR_Word Var_46;

                        Detism0_42 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_18);
                        SubDetism0_43 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo0_41);
                        parse_tree__prog_data__determinism_components_3_p_0(Detism0_42, &Var_44, &MaxSolns0_45);
                        parse_tree__prog_data__determinism_components_3_p_0(SubDetism0_43, &Var_46, &SubMaxSolns0_47);
                        succeeded = (SubMaxSolns0_47 == (MR_Integer) 3);
                        if (succeeded)
                          succeeded = (MaxSolns0_45 != (MR_Integer) 3);
                        if (succeeded)
                          transform_hlds__dep_par_conj__insert_signal_after_goal_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, Goal0_13, Goal_14, STATE_VARIABLE_VarSet_0_73, STATE_VARIABLE_VarSet_74, STATE_VARIABLE_VarTypes_0_75, STATE_VARIABLE_VarTypes_76);
                        else
                        {
                          MR_Word SubGoal_48;
                          MR_Word GoalExpr_116;

                          transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, SubGoal0_38, &SubGoal_48, STATE_VARIABLE_VarSet_0_73, STATE_VARIABLE_VarSet_74, STATE_VARIABLE_VarTypes_0_75, STATE_VARIABLE_VarTypes_76);
                          {
                            GoalExpr_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), GoalExpr_116, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(MR_mktag(3), GoalExpr_116, 1) = ((MR_Box) (Reason_37));
                            MR_hl_field(MR_mktag(3), GoalExpr_116, 2) = ((MR_Box) (SubGoal_48));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                            *Goal_14 = base;
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_116));
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_18));
                          }
                        }
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word QuantVars_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 1))));
                      MR_Word Cond_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 2))));
                      MR_Word Then0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 3))));
                      MR_Word Else0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_17, (MR_Integer) 4))));
                      MR_Word Then_34;
                      MR_Word Else_35;
                      MR_Word Var_90;
                      MR_Word STATE_VARIABLE_VarSet_93_93;
                      MR_Word STATE_VARIABLE_VarTypes_94_94;
                      MR_Word GoalExpr_115;

                      {
                        Var_90 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[4]));
                        MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (ProducedVar_12));
                        MR_hl_field(MR_mktag(0), Var_90, 4) = ((MR_Box) (Cond_31));
                      }
                      mercury__require__expect_3_p_0(Var_90, (MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_goal\'/9", (MR_String) "condition binds shared variable");
                      transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, Then0_32, &Then_34, STATE_VARIABLE_VarSet_0_73, &STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_VarTypes_0_75, &STATE_VARIABLE_VarTypes_94_94);
                      transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, Else0_33, &Else_35, STATE_VARIABLE_VarSet_93_93, STATE_VARIABLE_VarSet_74, STATE_VARIABLE_VarTypes_94_94, STATE_VARIABLE_VarTypes_76);
                      {
                        GoalExpr_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), GoalExpr_115, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                        MR_hl_field(MR_mktag(3), GoalExpr_115, 1) = ((MR_Box) (QuantVars_30));
                        MR_hl_field(MR_mktag(3), GoalExpr_115, 2) = ((MR_Box) (Cond_31));
                        MR_hl_field(MR_mktag(3), GoalExpr_115, 3) = ((MR_Box) (Then_34));
                        MR_hl_field(MR_mktag(3), GoalExpr_115, 4) = ((MR_Box) (Else_35));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_14 = base;
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_115));
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_18));
                      }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_goal\'/9", (MR_String) "shorthand");
                      return;
                    }
                    break;
                }
                break;
            }
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_goal\'/9", (MR_String) "ProducedVar is not in nonlocals");
              return;
            }
        }
        break;
      case (MR_Integer) 0:
        {
          *Goal_14 = Goal0_13;
          *STATE_VARIABLE_VarSet_74 = STATE_VARIABLE_VarSet_0_73;
          *STATE_VARIABLE_VarTypes_76 = STATE_VARIABLE_VarTypes_0_75;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_after_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FutureMap_11,
  MR_Word ProducedVar_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_18,
  MR_Word * STATE_VARIABLE_VarSet_19,
  MR_Word STATE_VARIABLE_VarTypes_0_20,
  MR_Word * STATE_VARIABLE_VarTypes_21)
{
  {
    MR_bool succeeded;
    MR_Word SignalGoal_17;
    MR_Word Var_22;
    MR_Word GoalListB_31;
    MR_Word GoalExprA_40;
    MR_Word GoalList_43;
    MR_Word GoalExpr_44;
    MR_Word Detism_45;
    MR_Word InstMapDelta_46;
    MR_Word NonLocals_47;
    MR_Word STATE_VARIABLE_GoalInfo_20_50;
    MR_Word STATE_VARIABLE_GoalInfo_21_51;
    MR_Word STATE_VARIABLE_GoalInfo_22_52;
    MR_Word GoalsB_29;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word GoalListA_42;
    MR_Word Var_48;

    transform_hlds__dep_par_conj__make_signal_goal_5_p_0(ModuleInfo_10, FutureMap_11, ProducedVar_12, STATE_VARIABLE_VarTypes_0_20, &SignalGoal_17);
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SignalGoal_17, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_32)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 1))) & (MR_Integer) 1);
      GoalsB_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_32, (MR_Integer) 2))));
      succeeded = (Var_33 == (MR_Integer) 0);
    }
    if (succeeded)
      GoalListB_31 = GoalsB_29;
    else
      {
        GoalListB_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalListB_31, 0) = ((MR_Box) (SignalGoal_17));
        MR_hl_field(MR_mktag(1), GoalListB_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    GoalExprA_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) GoalExprA_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExprA_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_48 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExprA_40, (MR_Integer) 1))) & (MR_Integer) 1);
      GoalListA_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprA_40, (MR_Integer) 2))));
      succeeded = (Var_48 == (MR_Integer) 0);
    }
    if (succeeded)
      GoalList_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalListA_42, GoalListB_31);
    else
      {
        GoalList_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_43, 0) = ((MR_Box) (Goal0_13));
        MR_hl_field(MR_mktag(1), GoalList_43, 1) = ((MR_Box) (GoalListB_31));
      }
    {
      GoalExpr_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_44, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_44, 2) = ((MR_Box) (GoalList_43));
    }
    hlds__hlds_goal__goal_list_determinism_2_p_0(GoalList_43, &Detism_45);
    hlds__hlds_goal__goal_list_instmap_delta_2_p_0(GoalList_43, &InstMapDelta_46);
    hlds__hlds_goal__goal_list_nonlocals_2_p_0(GoalList_43, &NonLocals_47);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_47, Var_22, &STATE_VARIABLE_GoalInfo_20_50);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_45, STATE_VARIABLE_GoalInfo_20_50, &STATE_VARIABLE_GoalInfo_21_51);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_46, STATE_VARIABLE_GoalInfo_21_51, &STATE_VARIABLE_GoalInfo_22_52);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_44));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_22_52));
    }
    *STATE_VARIABLE_VarTypes_21 = STATE_VARIABLE_VarTypes_0_20;
    *STATE_VARIABLE_VarSet_19 = STATE_VARIABLE_VarSet_0_18;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__make_signal_goal_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word FutureMap_7,
  MR_Word ProducedVar_8,
  MR_Word VarTypes_9,
  MR_Word * SignalGoal_10)
{
  {
    MR_Word FutureVar_11;
    MR_Word ModuleName_12;
    MR_Word InstMapDelta_15;
    MR_Word Context_16;
    MR_Word ShouldInline_17;
    MR_Word Globals_56;
    MR_Box conv0_FutureVar_11;

    conv0_FutureVar_11 = mercury__map__lookup_2_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), FutureMap_7, ((MR_Box) (ProducedVar_8)));
    FutureVar_11 = ((MR_Word) (conv0_FutureVar_11));
    ModuleName_12 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
    InstMapDelta_15 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
    Context_16 = mercury__term__context_init_0_f_0();
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_56);
    libs__globals__lookup_bool_option_3_p_0(Globals_56, (MR_Integer) 431, &ShouldInline_17);
    switch (ShouldInline_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgVars_18;
          MR_Word Var_47;

          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (ProducedVar_8));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ArgVars_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_18, 0) = ((MR_Box) (FutureVar_11));
            MR_hl_field(MR_mktag(1), ArgVars_18, 1) = ((MR_Box) (Var_47));
          }
          hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_6, ModuleName_12, (MR_String) "signal_future", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, ArgVars_18, (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_15, Context_16, SignalGoal_10);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ForeignAttrs_19;
          MR_Word FutureVarType_20;
          MR_Word ProducedVarType_21;
          MR_Word Arg1_22;
          MR_Word Arg2_23;
          MR_Word Args_24;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_33;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_38;
          MR_Word Var_40;
          MR_Word ExtraAttr_61;
          MR_Word STATE_VARIABLE_Attrs_8_62;
          MR_Word STATE_VARIABLE_Attrs_11_65;
          MR_Word STATE_VARIABLE_Attrs_13_67;
          MR_Word STATE_VARIABLE_Attrs_14_68;
          MR_Word STATE_VARIABLE_Attrs_16_70;
          MR_Word STATE_VARIABLE_Attrs_18_72;
          MR_Word STATE_VARIABLE_Attrs_20_74;
          MR_Word STATE_VARIABLE_Attrs_22_76;
          MR_Word STATE_VARIABLE_Attrs_24_78;
          MR_Word STATE_VARIABLE_Attrs_26_80;
          MR_Word STATE_VARIABLE_Attrs_28_82;

          STATE_VARIABLE_Attrs_8_62 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_8_62, &STATE_VARIABLE_Attrs_11_65);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_11_65, &STATE_VARIABLE_Attrs_13_67);
          parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_Attrs_13_67, &STATE_VARIABLE_Attrs_14_68);
          parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_14_68, &STATE_VARIABLE_Attrs_16_70);
          parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_16_70, &STATE_VARIABLE_Attrs_18_72);
          parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_18_72, &STATE_VARIABLE_Attrs_20_74);
          parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_20_74, &STATE_VARIABLE_Attrs_22_76);
          parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_22_76, &STATE_VARIABLE_Attrs_24_78);
          parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_24_78, &STATE_VARIABLE_Attrs_26_80);
          parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dep_par_conj_scalar_common_15[0])), STATE_VARIABLE_Attrs_26_80, &STATE_VARIABLE_Attrs_28_82);
          ExtraAttr_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), (MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dep_par_conj_scalar_common_15[1])), (MR_Integer) 0))));
          parse_tree__prog_data_foreign__add_extra_attribute_3_p_0(ExtraAttr_61, STATE_VARIABLE_Attrs_28_82, &ForeignAttrs_19);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_9, FutureVar_11, &FutureVarType_20);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_9, ProducedVar_8, &ProducedVarType_21);
          Var_33 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) ((MR_String) "Future"));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          }
          {
            Arg1_22 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg1_22, 0) = ((MR_Box) (FutureVar_11));
            MR_hl_field(MR_mktag(0), Arg1_22, 1) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(0), Arg1_22, 2) = ((MR_Box) (FutureVarType_20));
            MR_hl_field(MR_mktag(0), Arg1_22, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          Var_38 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) ((MR_String) "Value"));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Var_38));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
          }
          {
            Arg2_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg2_23, 0) = ((MR_Box) (ProducedVar_8));
            MR_hl_field(MR_mktag(0), Arg2_23, 1) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(0), Arg2_23, 2) = ((MR_Box) (ProducedVarType_21));
            MR_hl_field(MR_mktag(0), Arg2_23, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Arg2_23));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_24, 0) = ((MR_Box) (Arg1_22));
            MR_hl_field(MR_mktag(1), Args_24, 1) = ((MR_Box) (Var_40));
          }
          hlds__goal_util__generate_foreign_proc_16_p_0(ModuleInfo_6, ModuleName_12, (MR_String) "signal_future", (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, ForeignAttrs_19, Args_24, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_String) "MR_par_builtin_signal_future(Future, Value);", (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_15, Context_16, SignalGoal_10);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_goal_for_proc_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word AllowSomePathsOnly_12,
  MR_Word FutureMap_13,
  MR_Word ConsumedVar_14,
  MR_Word STATE_VARIABLE_Goal_0_19,
  MR_Word * STATE_VARIABLE_Goal_20,
  MR_Word STATE_VARIABLE_VarSet_0_21,
  MR_Word * STATE_VARIABLE_VarSet_22,
  MR_Word STATE_VARIABLE_VarTypes_0_23,
  MR_Word * STATE_VARIABLE_VarTypes_24)
{
  {
    MR_Word WaitedOnAllSuccessPaths_18;
    MR_Word STATE_VARIABLE_Goal_25_25;
    MR_Word STATE_VARIABLE_VarSet_26_26;
    MR_Word STATE_VARIABLE_VarTypes_27_27;

    transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(ModuleInfo_11, AllowSomePathsOnly_12, FutureMap_13, ConsumedVar_14, &WaitedOnAllSuccessPaths_18, STATE_VARIABLE_Goal_0_19, &STATE_VARIABLE_Goal_25_25, STATE_VARIABLE_VarSet_0_21, &STATE_VARIABLE_VarSet_26_26, STATE_VARIABLE_VarTypes_0_23, &STATE_VARIABLE_VarTypes_27_27);
    switch (WaitedOnAllSuccessPaths_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        transform_hlds__dep_par_conj__insert_wait_after_goal_9_p_0(ModuleInfo_11, FutureMap_13, ConsumedVar_14, STATE_VARIABLE_Goal_25_25, STATE_VARIABLE_Goal_20, STATE_VARIABLE_VarSet_26_26, STATE_VARIABLE_VarSet_22, STATE_VARIABLE_VarTypes_27_27, STATE_VARIABLE_VarTypes_24);
        break;
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Goal_20 = STATE_VARIABLE_Goal_25_25;
          *STATE_VARIABLE_VarSet_22 = STATE_VARIABLE_VarSet_26_26;
          *STATE_VARIABLE_VarTypes_24 = STATE_VARIABLE_VarTypes_27_27;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_cases_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5,
  MR_Word * STATE_VARIABLE_WaitedOnAllSuccessPaths_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12)
{
  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTypes_12 = STATE_VARIABLE_VarTypes_0_11;
    *STATE_VARIABLE_VarSet_10 = STATE_VARIABLE_VarSet_0_9;
    *STATE_VARIABLE_WaitedOnAllSuccessPaths_6 = STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5;
  }
  else
  {
    MR_Word Case0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
    MR_Word Cases0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
    MR_Word Case_33;
    MR_Word Cases_34;
    MR_Word MainConsId_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_31, (MR_Integer) 0))));
    MR_Word OtherConsIds_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_31, (MR_Integer) 1))));
    MR_Word Goal0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_31, (MR_Integer) 2))));
    MR_Word FirstWaitedOnAllSuccessPaths_40;
    MR_Word Goal_41;
    MR_Word STATE_VARIABLE_VarSet_48_48;
    MR_Word STATE_VARIABLE_VarTypes_49_49;
    MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_50_50;

    transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, &FirstWaitedOnAllSuccessPaths_40, Goal0_39, &Goal_41, STATE_VARIABLE_VarSet_0_9, &STATE_VARIABLE_VarSet_48_48, STATE_VARIABLE_VarTypes_0_11, &STATE_VARIABLE_VarTypes_49_49);
    {
      Case_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_33, 0) = ((MR_Box) (MainConsId_37));
      MR_hl_field(MR_mktag(0), Case_33, 1) = ((MR_Box) (OtherConsIds_38));
      MR_hl_field(MR_mktag(0), Case_33, 2) = ((MR_Box) (Goal_41));
    }
    switch (FirstWaitedOnAllSuccessPaths_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_WaitedOnAllSuccessPaths_50_50 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_WaitedOnAllSuccessPaths_50_50 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_WaitedOnAllSuccessPaths_50_50 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_WaitedOnAllSuccessPaths_50_50 = (MR_Integer) 0;
            break;
        }
        break;
    }
    transform_hlds__dep_par_conj__insert_wait_in_cases_12_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, STATE_VARIABLE_WaitedOnAllSuccessPaths_50_50, STATE_VARIABLE_WaitedOnAllSuccessPaths_6, Cases0_32, &Cases_34, STATE_VARIABLE_VarSet_48_48, STATE_VARIABLE_VarSet_10, STATE_VARIABLE_VarTypes_49_49, STATE_VARIABLE_VarTypes_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_33));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_34));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_disj_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5,
  MR_Word * STATE_VARIABLE_WaitedOnAllSuccessPaths_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12)
{
  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTypes_12 = STATE_VARIABLE_VarTypes_0_11;
    *STATE_VARIABLE_VarSet_10 = STATE_VARIABLE_VarSet_0_9;
    *STATE_VARIABLE_WaitedOnAllSuccessPaths_6 = STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5;
  }
  else
  {
    MR_Word Goal0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
    MR_Word Goals0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
    MR_Word Goal_33;
    MR_Word Goals_34;
    MR_Word FirstWaitedOnAllSuccessPaths_37;
    MR_Word STATE_VARIABLE_VarSet_44_44;
    MR_Word STATE_VARIABLE_VarTypes_45_45;
    MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_46_46;

    transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, &FirstWaitedOnAllSuccessPaths_37, Goal0_31, &Goal_33, STATE_VARIABLE_VarSet_0_9, &STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_VarTypes_0_11, &STATE_VARIABLE_VarTypes_45_45);
    switch (FirstWaitedOnAllSuccessPaths_37) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        switch (STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_WaitedOnAllSuccessPaths_46_46 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_WaitedOnAllSuccessPaths_46_46 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 0:
        switch (STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            STATE_VARIABLE_WaitedOnAllSuccessPaths_46_46 = (MR_Integer) 1;
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_WaitedOnAllSuccessPaths_46_46 = (MR_Integer) 0;
            break;
        }
        break;
    }
    transform_hlds__dep_par_conj__insert_wait_in_disj_12_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, STATE_VARIABLE_WaitedOnAllSuccessPaths_46_46, STATE_VARIABLE_WaitedOnAllSuccessPaths_6, Goals0_32, &Goals_34, STATE_VARIABLE_VarSet_44_44, STATE_VARIABLE_VarSet_10, STATE_VARIABLE_VarTypes_45_45, STATE_VARIABLE_VarTypes_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_33));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_34));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_par_conj_12_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedInConjunct_0_5,
  MR_Word * STATE_VARIABLE_WaitedInConjunct_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarSet_0_9,
  MR_Word * STATE_VARIABLE_VarSet_10,
  MR_Word STATE_VARIABLE_VarTypes_0_11,
  MR_Word * STATE_VARIABLE_VarTypes_12)
{
  {
    MR_bool succeeded;

    if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTypes_12 = STATE_VARIABLE_VarTypes_0_11;
      *STATE_VARIABLE_VarSet_10 = STATE_VARIABLE_VarSet_0_9;
      *STATE_VARIABLE_WaitedInConjunct_6 = STATE_VARIABLE_WaitedInConjunct_0_5;
    }
    else
    {
      MR_Word Goal0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
      MR_Word Goals0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
      MR_Word Goal_33;
      MR_Word Goals_34;
      MR_Word STATE_VARIABLE_VarSet_51_51;
      MR_Word STATE_VARIABLE_VarTypes_53_53;
      MR_Word STATE_VARIABLE_WaitedInConjunct_55_55;
      MR_Word Var_62;

      Var_62 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_31);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_62, ConsumedVar_4);
      if (succeeded)
      {
        MR_Word WaitedOnAllSuccessPaths_37;
        MR_Word Goal1_38;
        MR_Word STATE_VARIABLE_VarSet_48_48;
        MR_Word STATE_VARIABLE_VarTypes_49_49;

        transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, &WaitedOnAllSuccessPaths_37, Goal0_31, &Goal1_38, STATE_VARIABLE_VarSet_0_9, &STATE_VARIABLE_VarSet_48_48, STATE_VARIABLE_VarTypes_0_11, &STATE_VARIABLE_VarTypes_49_49);
        if ((STATE_VARIABLE_WaitedInConjunct_0_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            STATE_VARIABLE_WaitedInConjunct_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_WaitedInConjunct_55_55, 0) = (MR_Box) ((MR_Unsigned) (WaitedOnAllSuccessPaths_37));
          }
          Goal_33 = Goal1_38;
          STATE_VARIABLE_VarSet_51_51 = STATE_VARIABLE_VarSet_48_48;
          STATE_VARIABLE_VarTypes_53_53 = STATE_VARIABLE_VarTypes_49_49;
        }
        else
        {
          MR_Word Renaming_40;
          MR_Word Var_54;
          MR_Word _CloneVar_41;

          Var_54 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]));
          hlds__goal_util__clone_variable_10_p_0(ConsumedVar_4, STATE_VARIABLE_VarSet_48_48, STATE_VARIABLE_VarTypes_49_49, STATE_VARIABLE_VarSet_48_48, &STATE_VARIABLE_VarSet_51_51, STATE_VARIABLE_VarTypes_49_49, &STATE_VARIABLE_VarTypes_53_53, Var_54, &Renaming_40, &_CloneVar_41);
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_40, Goal1_38, &Goal_33);
          STATE_VARIABLE_WaitedInConjunct_55_55 = STATE_VARIABLE_WaitedInConjunct_0_5;
        }
      }
      else
      {
        Goal_33 = Goal0_31;
        STATE_VARIABLE_VarTypes_53_53 = STATE_VARIABLE_VarTypes_0_11;
        STATE_VARIABLE_VarSet_51_51 = STATE_VARIABLE_VarSet_0_9;
        STATE_VARIABLE_WaitedInConjunct_55_55 = STATE_VARIABLE_WaitedInConjunct_0_5;
      }
      transform_hlds__dep_par_conj__insert_wait_in_par_conj_12_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, STATE_VARIABLE_WaitedInConjunct_55_55, STATE_VARIABLE_WaitedInConjunct_6, Goals0_32, &Goals_34, STATE_VARIABLE_VarSet_51_51, STATE_VARIABLE_VarSet_10, STATE_VARIABLE_VarTypes_53_53, STATE_VARIABLE_VarTypes_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_33));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_34));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_plain_conj_11_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VarSet_0_8,
  MR_Word * STATE_VARIABLE_VarSet_9,
  MR_Word STATE_VARIABLE_VarTypes_0_10,
  MR_Word * STATE_VARIABLE_VarTypes_11)
{
  {
    MR_bool succeeded;

    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Integer) 1;
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_VarTypes_11 = STATE_VARIABLE_VarTypes_0_10;
      *STATE_VARIABLE_VarSet_9 = STATE_VARIABLE_VarSet_0_8;
    }
    else
    {
      MR_Word FirstGoal0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 0))));
      MR_Word LaterGoals0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__6_6, (MR_Integer) 1))));
      MR_Word Var_53;

      Var_53 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(FirstGoal0_27);
      succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_53, ConsumedVar_4);
      if (succeeded)
      {
        MR_Word GoalWaitedOnAllSuccessPaths_32;
        MR_Word FirstGoal_33;
        MR_Word LaterGoals_34;
        MR_Word STATE_VARIABLE_VarSet_41_41;
        MR_Word STATE_VARIABLE_VarTypes_42_42;
        MR_Word FirstGoalConj_35;
        MR_Word Var_45;
        MR_Word Var_46;

        transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, &GoalWaitedOnAllSuccessPaths_32, FirstGoal0_27, &FirstGoal_33, STATE_VARIABLE_VarSet_0_8, &STATE_VARIABLE_VarSet_41_41, STATE_VARIABLE_VarTypes_0_10, &STATE_VARIABLE_VarTypes_42_42);
        switch (GoalWaitedOnAllSuccessPaths_32) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            transform_hlds__dep_par_conj__insert_wait_in_plain_conj_11_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, HeadVar__5_5, LaterGoals0_28, &LaterGoals_34, STATE_VARIABLE_VarSet_41_41, STATE_VARIABLE_VarSet_9, STATE_VARIABLE_VarTypes_42_42, STATE_VARIABLE_VarTypes_11);
            break;
          case (MR_Integer) 0:
            {
              *HeadVar__5_5 = (MR_Integer) 0;
              LaterGoals_34 = LaterGoals0_28;
              *STATE_VARIABLE_VarSet_9 = STATE_VARIABLE_VarSet_41_41;
              *STATE_VARIABLE_VarTypes_11 = STATE_VARIABLE_VarTypes_42_42;
            }
            break;
        }
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstGoal_33, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) Var_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_45, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_46 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_45, (MR_Integer) 1))) & (MR_Integer) 1);
          FirstGoalConj_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_45, (MR_Integer) 2))));
          succeeded = (Var_46 == (MR_Integer) 0);
        }
        if (succeeded)
          *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FirstGoalConj_35, LaterGoals_34);
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstGoal_33));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterGoals_34));
          }
      }
      else
      {
        MR_Word LaterGoals1_36;

        transform_hlds__dep_par_conj__insert_wait_in_plain_conj_11_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, HeadVar__5_5, LaterGoals0_28, &LaterGoals1_36, STATE_VARIABLE_VarSet_0_8, STATE_VARIABLE_VarSet_9, STATE_VARIABLE_VarTypes_0_10, STATE_VARIABLE_VarTypes_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FirstGoal0_27));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LaterGoals1_36));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word AllowSomePathsOnly_13,
  MR_Word FutureMap_14,
  MR_Word ConsumedVar_15,
  MR_Word * WaitedOnAllSuccessPaths_16,
  MR_Word Goal0_17,
  MR_Word * Goal_18,
  MR_Word STATE_VARIABLE_VarSet_0_93,
  MR_Word * STATE_VARIABLE_VarSet_94,
  MR_Word STATE_VARIABLE_VarTypes_0_95,
  MR_Word * STATE_VARIABLE_VarTypes_96)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 0))));
    MR_Word GoalInfo0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_17, (MR_Integer) 1))));
    MR_Word InvariantEstablished_25;
    MR_Word WaitedOnAllSuccessPaths0_26;
    MR_Word Goal2_87;
    MR_Word Detism_90;
    MR_Word MaxSolns_92;
    MR_Word STATE_VARIABLE_VarSet_132_132;
    MR_Word STATE_VARIABLE_VarTypes_134_134;
    MR_Word Var_91;

    succeeded = transform_hlds__dep_par_conj__var_in_nonlocals_2_p_0(ConsumedVar_15, Goal0_17);
    if (succeeded)
    {
      MR_Word Goal1_30;
      MR_Word STATE_VARIABLE_VarSet_129_129;
      MR_Word STATE_VARIABLE_VarTypes_130_130;

      switch (MR_tag((MR_Word) GoalExpr0_21)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            InvariantEstablished_25 = (MR_Integer) 1;
            WaitedOnAllSuccessPaths0_26 = (MR_Integer) 0;
            transform_hlds__dep_par_conj__insert_wait_before_goal_9_p_0(ModuleInfo_12, FutureMap_14, ConsumedVar_15, Goal0_17, &Goal1_30, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_130_130);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            InvariantEstablished_25 = (MR_Integer) 0;
            WaitedOnAllSuccessPaths0_26 = (MR_Integer) 0;
            transform_hlds__dep_par_conj__insert_wait_before_goal_9_p_0(ModuleInfo_12, FutureMap_14, ConsumedVar_15, Goal0_17, &Goal1_30, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_130_130);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              {
                InvariantEstablished_25 = (MR_Integer) 0;
                WaitedOnAllSuccessPaths0_26 = (MR_Integer) 0;
                transform_hlds__dep_par_conj__insert_wait_before_goal_9_p_0(ModuleInfo_12, FutureMap_14, ConsumedVar_15, Goal0_17, &Goal1_30, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_130_130);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ConjType_23 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word Goals0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 2))));
                MR_Word Goals_27;
                MR_Word GoalExpr_29;

                InvariantEstablished_25 = (MR_Integer) 1;
                switch (ConjType_23) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      MR_Word WaitedInConjunct_28;

                      transform_hlds__dep_par_conj__insert_wait_in_par_conj_12_p_0(ModuleInfo_12, AllowSomePathsOnly_13, FutureMap_14, ConsumedVar_15, (MR_Word) ((MR_Unsigned) 0U), &WaitedInConjunct_28, Goals0_24, &Goals_27, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_130_130);
                      if ((WaitedInConjunct_28 == (MR_Word) ((MR_Unsigned) 0U)))
                        WaitedOnAllSuccessPaths0_26 = (MR_Integer) 1;
                      else
                        WaitedOnAllSuccessPaths0_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), WaitedInConjunct_28, (MR_Integer) 0))) & (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 0:
                    transform_hlds__dep_par_conj__insert_wait_in_plain_conj_11_p_0(ModuleInfo_12, AllowSomePathsOnly_13, FutureMap_14, ConsumedVar_15, &WaitedOnAllSuccessPaths0_26, Goals0_24, &Goals_27, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_130_130);
                    break;
                }
                {
                  GoalExpr_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), GoalExpr_29, 1) = (MR_Box) ((MR_Unsigned) (ConjType_23));
                  MR_hl_field(MR_mktag(3), GoalExpr_29, 2) = ((MR_Box) (Goals_27));
                }
                {
                  Goal1_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Goal1_30, 0) = ((MR_Box) (GoalExpr_29));
                  MR_hl_field(MR_mktag(0), Goal1_30, 1) = ((MR_Box) (GoalInfo0_22));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Disjuncts0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 1))));

                InvariantEstablished_25 = (MR_Integer) 1;
                if ((Disjuncts0_31 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  WaitedOnAllSuccessPaths0_26 = (MR_Integer) 0;
                  Goal1_30 = Goal0_17;
                  STATE_VARIABLE_VarSet_129_129 = STATE_VARIABLE_VarSet_0_93;
                  STATE_VARIABLE_VarTypes_130_130 = STATE_VARIABLE_VarTypes_0_95;
                }
                else
                {
                  MR_Word FirstDisjunct0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts0_31, (MR_Integer) 0))));
                  MR_Word LaterDisjuncts0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts0_31, (MR_Integer) 1))));
                  MR_Word FirstWaitedOnAllSuccessPaths_34;
                  MR_Word FirstDisjunct_35;
                  MR_Word LaterDisjuncts_36;
                  MR_Word Disjuncts_37;
                  MR_Word STATE_VARIABLE_VarSet_122_122;
                  MR_Word STATE_VARIABLE_VarTypes_123_123;
                  MR_Word GoalExpr_140;

                  transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(ModuleInfo_12, AllowSomePathsOnly_13, FutureMap_14, ConsumedVar_15, &FirstWaitedOnAllSuccessPaths_34, FirstDisjunct0_32, &FirstDisjunct_35, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_122_122, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_123_123);
                  transform_hlds__dep_par_conj__insert_wait_in_disj_12_p_0(ModuleInfo_12, AllowSomePathsOnly_13, FutureMap_14, ConsumedVar_15, FirstWaitedOnAllSuccessPaths_34, &WaitedOnAllSuccessPaths0_26, LaterDisjuncts0_33, &LaterDisjuncts_36, STATE_VARIABLE_VarSet_122_122, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_123_123, &STATE_VARIABLE_VarTypes_130_130);
                  {
                    Disjuncts_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Disjuncts_37, 0) = ((MR_Box) (FirstDisjunct_35));
                    MR_hl_field(MR_mktag(1), Disjuncts_37, 1) = ((MR_Box) (LaterDisjuncts_36));
                  }
                  {
                    GoalExpr_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_140, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                    MR_hl_field(MR_mktag(3), GoalExpr_140, 1) = ((MR_Box) (Disjuncts_37));
                  }
                  {
                    Goal1_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal1_30, 0) = ((MR_Box) (GoalExpr_140));
                    MR_hl_field(MR_mktag(0), Goal1_30, 1) = ((MR_Box) (GoalInfo0_22));
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word SwitchVar_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 1))));
                MR_Word CanFail_39 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 2))) & (MR_Integer) 1);
                MR_Word Cases0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 3))));

                InvariantEstablished_25 = (MR_Integer) 1;
                succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (ConsumedVar_15)), ((MR_Box) (SwitchVar_38)));
                if (succeeded)
                {
                  transform_hlds__dep_par_conj__insert_wait_before_goal_9_p_0(ModuleInfo_12, FutureMap_14, ConsumedVar_15, Goal0_17, &Goal1_30, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_130_130);
                  WaitedOnAllSuccessPaths0_26 = (MR_Integer) 0;
                }
                else
                if ((Cases0_40 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_wait_in_goal\'/11", (MR_String) "no cases");
                    return;
                  }
                else
                {
                  MR_Word FirstCase0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases0_40, (MR_Integer) 0))));
                  MR_Word LaterCases0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cases0_40, (MR_Integer) 1))));
                  MR_Word MainConsId_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstCase0_41, (MR_Integer) 0))));
                  MR_Word OtherConsIds_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstCase0_41, (MR_Integer) 1))));
                  MR_Word FirstGoal0_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstCase0_41, (MR_Integer) 2))));
                  MR_Word FirstGoal_46;
                  MR_Word FirstCase_47;
                  MR_Word LaterCases_48;
                  MR_Word Cases_49;
                  MR_Word STATE_VARIABLE_VarSet_116_116;
                  MR_Word STATE_VARIABLE_VarTypes_117_117;
                  MR_Word GoalExpr_143;
                  MR_Word FirstWaitedOnAllSuccessPaths_144;

                  transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(ModuleInfo_12, AllowSomePathsOnly_13, FutureMap_14, ConsumedVar_15, &FirstWaitedOnAllSuccessPaths_144, FirstGoal0_45, &FirstGoal_46, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_116_116, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_117_117);
                  {
                    FirstCase_47 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), FirstCase_47, 0) = ((MR_Box) (MainConsId_43));
                    MR_hl_field(MR_mktag(0), FirstCase_47, 1) = ((MR_Box) (OtherConsIds_44));
                    MR_hl_field(MR_mktag(0), FirstCase_47, 2) = ((MR_Box) (FirstGoal_46));
                  }
                  transform_hlds__dep_par_conj__insert_wait_in_cases_12_p_0(ModuleInfo_12, AllowSomePathsOnly_13, FutureMap_14, ConsumedVar_15, FirstWaitedOnAllSuccessPaths_144, &WaitedOnAllSuccessPaths0_26, LaterCases0_42, &LaterCases_48, STATE_VARIABLE_VarSet_116_116, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_117_117, &STATE_VARIABLE_VarTypes_130_130);
                  {
                    Cases_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Cases_49, 0) = ((MR_Box) (FirstCase_47));
                    MR_hl_field(MR_mktag(1), Cases_49, 1) = ((MR_Box) (LaterCases_48));
                  }
                  {
                    GoalExpr_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_143, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                    MR_hl_field(MR_mktag(3), GoalExpr_143, 1) = ((MR_Box) (SwitchVar_38));
                    MR_hl_field(MR_mktag(3), GoalExpr_143, 2) = (MR_Box) ((MR_Unsigned) (CanFail_39));
                    MR_hl_field(MR_mktag(3), GoalExpr_143, 3) = ((MR_Box) (Cases_49));
                  }
                  {
                    Goal1_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal1_30, 0) = ((MR_Box) (GoalExpr_143));
                    MR_hl_field(MR_mktag(0), Goal1_30, 1) = ((MR_Box) (GoalInfo0_22));
                  }
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Reason_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 1))));
                MR_Word SubGoal0_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 2))));
                MR_Word Var_103;

                InvariantEstablished_25 = (MR_Integer) 1;
                succeeded = ((((MR_tag((MR_Word) Reason_58)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 0)))) == (MR_Integer) 6)));
                if (succeeded)
                {
                  Var_103 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_58, (MR_Integer) 2))) & (MR_Integer) 3);
                  succeeded = (Var_103 == (MR_Integer) 1);
                }
                if (succeeded)
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_wait_in_goal\'/11", (MR_String) "from_ground_term_construct");
                    return;
                  }
                else
                {
                  MR_Word SubGoal_61;
                  MR_Word GoalExpr_154;

                  transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(ModuleInfo_12, AllowSomePathsOnly_13, FutureMap_14, ConsumedVar_15, &WaitedOnAllSuccessPaths0_26, SubGoal0_59, &SubGoal_61, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_130_130);
                  {
                    GoalExpr_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_154, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                    MR_hl_field(MR_mktag(3), GoalExpr_154, 1) = ((MR_Box) (Reason_58));
                    MR_hl_field(MR_mktag(3), GoalExpr_154, 2) = ((MR_Box) (SubGoal_61));
                  }
                  {
                    Goal1_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal1_30, 0) = ((MR_Box) (GoalExpr_154));
                    MR_hl_field(MR_mktag(0), Goal1_30, 1) = ((MR_Box) (GoalInfo0_22));
                  }
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Quant_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 1))));
                MR_Word Cond_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 2))));
                MR_Word Then0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 3))));
                MR_Word Else0_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_21, (MR_Integer) 4))));

                InvariantEstablished_25 = (MR_Integer) 1;
                succeeded = transform_hlds__dep_par_conj__var_in_nonlocals_2_p_0(ConsumedVar_15, Cond_51);
                if (succeeded)
                {
                  WaitedOnAllSuccessPaths0_26 = (MR_Integer) 0;
                  transform_hlds__dep_par_conj__insert_wait_before_goal_9_p_0(ModuleInfo_12, FutureMap_14, ConsumedVar_15, Goal0_17, &Goal1_30, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_130_130);
                }
                else
                {
                  MR_Word ThenWaitedOnAllSuccessPaths_54;
                  MR_Word Then_55;
                  MR_Word ElseWaitedOnAllSuccessPaths_56;
                  MR_Word Else_57;
                  MR_Word STATE_VARIABLE_VarSet_110_110;
                  MR_Word STATE_VARIABLE_VarTypes_111_111;
                  MR_Word GoalExpr_151;

                  transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(ModuleInfo_12, AllowSomePathsOnly_13, FutureMap_14, ConsumedVar_15, &ThenWaitedOnAllSuccessPaths_54, Then0_52, &Then_55, STATE_VARIABLE_VarSet_0_93, &STATE_VARIABLE_VarSet_110_110, STATE_VARIABLE_VarTypes_0_95, &STATE_VARIABLE_VarTypes_111_111);
                  transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(ModuleInfo_12, AllowSomePathsOnly_13, FutureMap_14, ConsumedVar_15, &ElseWaitedOnAllSuccessPaths_56, Else0_53, &Else_57, STATE_VARIABLE_VarSet_110_110, &STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_111_111, &STATE_VARIABLE_VarTypes_130_130);
                  transform_hlds__dep_par_conj__join_branches_3_p_0(ThenWaitedOnAllSuccessPaths_54, ElseWaitedOnAllSuccessPaths_56, &WaitedOnAllSuccessPaths0_26);
                  {
                    GoalExpr_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), GoalExpr_151, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                    MR_hl_field(MR_mktag(3), GoalExpr_151, 1) = ((MR_Box) (Quant_50));
                    MR_hl_field(MR_mktag(3), GoalExpr_151, 2) = ((MR_Box) (Cond_51));
                    MR_hl_field(MR_mktag(3), GoalExpr_151, 3) = ((MR_Box) (Then_55));
                    MR_hl_field(MR_mktag(3), GoalExpr_151, 4) = ((MR_Box) (Else_57));
                  }
                  {
                    Goal1_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Goal1_30, 0) = ((MR_Box) (GoalExpr_151));
                    MR_hl_field(MR_mktag(0), Goal1_30, 1) = ((MR_Box) (GoalInfo0_22));
                  }
                }
              }
              break;
            case (MR_Integer) 7:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_wait_in_goal\'/11", (MR_String) "shorthand");
                return;
              }
              break;
          }
          break;
      }
      switch (WaitedOnAllSuccessPaths0_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Renaming_88;
            MR_Word Var_135;
            MR_Word _CloneVar_89;

            Var_135 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]));
            hlds__goal_util__clone_variable_10_p_0(ConsumedVar_15, STATE_VARIABLE_VarSet_129_129, STATE_VARIABLE_VarTypes_130_130, STATE_VARIABLE_VarSet_129_129, &STATE_VARIABLE_VarSet_132_132, STATE_VARIABLE_VarTypes_130_130, &STATE_VARIABLE_VarTypes_134_134, Var_135, &Renaming_88, &_CloneVar_89);
            hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_88, Goal1_30, &Goal2_87);
          }
          break;
        case (MR_Integer) 0:
          {
            Goal2_87 = Goal1_30;
            STATE_VARIABLE_VarSet_132_132 = STATE_VARIABLE_VarSet_129_129;
            STATE_VARIABLE_VarTypes_134_134 = STATE_VARIABLE_VarTypes_130_130;
          }
          break;
      }
    }
    else
    {
      InvariantEstablished_25 = (MR_Integer) 0;
      WaitedOnAllSuccessPaths0_26 = (MR_Integer) 1;
      Goal2_87 = Goal0_17;
      STATE_VARIABLE_VarTypes_134_134 = STATE_VARIABLE_VarTypes_0_95;
      STATE_VARIABLE_VarSet_132_132 = STATE_VARIABLE_VarSet_0_93;
    }
    Detism_90 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_22);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_90, &Var_91, &MaxSolns_92);
    switch (MaxSolns_92) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        switch (WaitedOnAllSuccessPaths0_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            switch (AllowSomePathsOnly_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (InvariantEstablished_25) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      *WaitedOnAllSuccessPaths_16 = (MR_Integer) 0;
                      transform_hlds__dep_par_conj__insert_wait_after_goal_9_p_0(ModuleInfo_12, FutureMap_14, ConsumedVar_15, Goal2_87, Goal_18, STATE_VARIABLE_VarSet_132_132, STATE_VARIABLE_VarSet_94, STATE_VARIABLE_VarTypes_134_134, STATE_VARIABLE_VarTypes_96);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_wait_in_goal\'/11", (MR_String) "not_waited_on_all_success_paths invariant violation");
                      return;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  *WaitedOnAllSuccessPaths_16 = WaitedOnAllSuccessPaths0_26;
                  *Goal_18 = Goal2_87;
                  *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_132_132;
                  *STATE_VARIABLE_VarTypes_96 = STATE_VARIABLE_VarTypes_134_134;
                }
                break;
            }
            break;
          case (MR_Integer) 0:
            {
              *WaitedOnAllSuccessPaths_16 = WaitedOnAllSuccessPaths0_26;
              *Goal_18 = Goal2_87;
              *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_132_132;
              *STATE_VARIABLE_VarTypes_96 = STATE_VARIABLE_VarTypes_134_134;
            }
            break;
        }
        break;
      case (MR_Integer) 0:
        {
          *WaitedOnAllSuccessPaths_16 = (MR_Integer) 0;
          *Goal_18 = Goal2_87;
          *STATE_VARIABLE_VarSet_94 = STATE_VARIABLE_VarSet_132_132;
          *STATE_VARIABLE_VarTypes_96 = STATE_VARIABLE_VarTypes_134_134;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__var_in_nonlocals_2_p_0(
  MR_Word Var_3,
  MR_Word Goal_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;

    Var_5 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal_4);
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, Var_3);
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_after_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FutureMap_11,
  MR_Word ConsumedVar_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22)
{
  {
    MR_bool succeeded;
    MR_Word FutureVar_17;
    MR_Word WaitGoal_18;
    MR_Word Var_23;
    MR_Word GoalListB_39;
    MR_Word GoalExprA_48;
    MR_Word GoalList_51;
    MR_Word GoalExpr_52;
    MR_Word Detism_53;
    MR_Word InstMapDelta_54;
    MR_Word NonLocals_55;
    MR_Word STATE_VARIABLE_GoalInfo_20_58;
    MR_Word STATE_VARIABLE_GoalInfo_21_59;
    MR_Word STATE_VARIABLE_GoalInfo_22_60;
    MR_Box conv0_FutureVar_17;
    MR_Word GoalsB_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word GoalListA_50;
    MR_Word Var_56;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), FutureMap_11, ((MR_Box) (ConsumedVar_12)), &conv0_FutureVar_17);
    FutureVar_17 = ((MR_Word) (conv0_FutureVar_17));
    transform_hlds__dep_par_conj__make_wait_or_get_6_p_0(ModuleInfo_10, STATE_VARIABLE_VarTypes_0_21, FutureVar_17, ConsumedVar_12, (MR_Integer) 0, &WaitGoal_18);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WaitGoal_18, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 1))) & (MR_Integer) 1);
      GoalsB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 2))));
      succeeded = (Var_41 == (MR_Integer) 0);
    }
    if (succeeded)
      GoalListB_39 = GoalsB_37;
    else
      {
        GoalListB_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalListB_39, 0) = ((MR_Box) (WaitGoal_18));
        MR_hl_field(MR_mktag(1), GoalListB_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    GoalExprA_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) GoalExprA_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExprA_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExprA_48, (MR_Integer) 1))) & (MR_Integer) 1);
      GoalListA_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprA_48, (MR_Integer) 2))));
      succeeded = (Var_56 == (MR_Integer) 0);
    }
    if (succeeded)
      GoalList_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalListA_50, GoalListB_39);
    else
      {
        GoalList_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_51, 0) = ((MR_Box) (Goal0_13));
        MR_hl_field(MR_mktag(1), GoalList_51, 1) = ((MR_Box) (GoalListB_39));
      }
    {
      GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 2) = ((MR_Box) (GoalList_51));
    }
    hlds__hlds_goal__goal_list_determinism_2_p_0(GoalList_51, &Detism_53);
    hlds__hlds_goal__goal_list_instmap_delta_2_p_0(GoalList_51, &InstMapDelta_54);
    hlds__hlds_goal__goal_list_nonlocals_2_p_0(GoalList_51, &NonLocals_55);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_55, Var_23, &STATE_VARIABLE_GoalInfo_20_58);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_53, STATE_VARIABLE_GoalInfo_20_58, &STATE_VARIABLE_GoalInfo_21_59);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_54, STATE_VARIABLE_GoalInfo_21_59, &STATE_VARIABLE_GoalInfo_22_60);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_22_60));
    }
    *STATE_VARIABLE_VarTypes_22 = STATE_VARIABLE_VarTypes_0_21;
    *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_before_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word FutureMap_11,
  MR_Word ConsumedVar_12,
  MR_Word Goal0_13,
  MR_Word * Goal_14,
  MR_Word STATE_VARIABLE_VarSet_0_19,
  MR_Word * STATE_VARIABLE_VarSet_20,
  MR_Word STATE_VARIABLE_VarTypes_0_21,
  MR_Word * STATE_VARIABLE_VarTypes_22)
{
  {
    MR_bool succeeded;
    MR_Word FutureVar_17;
    MR_Word WaitGoal_18;
    MR_Word Var_23;
    MR_Word GoalListB_39;
    MR_Word GoalExprA_48;
    MR_Word GoalList_51;
    MR_Word GoalExpr_52;
    MR_Word Detism_53;
    MR_Word InstMapDelta_54;
    MR_Word NonLocals_55;
    MR_Word STATE_VARIABLE_GoalInfo_20_58;
    MR_Word STATE_VARIABLE_GoalInfo_21_59;
    MR_Word STATE_VARIABLE_GoalInfo_22_60;
    MR_Box conv0_FutureVar_17;
    MR_Word GoalsB_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word GoalListA_50;
    MR_Word Var_56;

    mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), FutureMap_11, ((MR_Box) (ConsumedVar_12)), &conv0_FutureVar_17);
    FutureVar_17 = ((MR_Word) (conv0_FutureVar_17));
    transform_hlds__dep_par_conj__make_wait_or_get_6_p_0(ModuleInfo_10, STATE_VARIABLE_VarTypes_0_21, FutureVar_17, ConsumedVar_12, (MR_Integer) 0, &WaitGoal_18);
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 1))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) Var_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 1))) & (MR_Integer) 1);
      GoalsB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_40, (MR_Integer) 2))));
      succeeded = (Var_41 == (MR_Integer) 0);
    }
    if (succeeded)
      GoalListB_39 = GoalsB_37;
    else
      {
        GoalListB_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalListB_39, 0) = ((MR_Box) (Goal0_13));
        MR_hl_field(MR_mktag(1), GoalListB_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    GoalExprA_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), WaitGoal_18, (MR_Integer) 0))));
    succeeded = ((((MR_tag((MR_Word) GoalExprA_48)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExprA_48, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Var_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExprA_48, (MR_Integer) 1))) & (MR_Integer) 1);
      GoalListA_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExprA_48, (MR_Integer) 2))));
      succeeded = (Var_56 == (MR_Integer) 0);
    }
    if (succeeded)
      GoalList_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalListA_50, GoalListB_39);
    else
      {
        GoalList_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), GoalList_51, 0) = ((MR_Box) (WaitGoal_18));
        MR_hl_field(MR_mktag(1), GoalList_51, 1) = ((MR_Box) (GoalListB_39));
      }
    {
      GoalExpr_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), GoalExpr_52, 2) = ((MR_Box) (GoalList_51));
    }
    hlds__hlds_goal__goal_list_determinism_2_p_0(GoalList_51, &Detism_53);
    hlds__hlds_goal__goal_list_instmap_delta_2_p_0(GoalList_51, &InstMapDelta_54);
    hlds__hlds_goal__goal_list_nonlocals_2_p_0(GoalList_51, &NonLocals_55);
    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_55, Var_23, &STATE_VARIABLE_GoalInfo_20_58);
    hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_53, STATE_VARIABLE_GoalInfo_20_58, &STATE_VARIABLE_GoalInfo_21_59);
    hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_54, STATE_VARIABLE_GoalInfo_21_59, &STATE_VARIABLE_GoalInfo_22_60);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *Goal_14 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_52));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_22_60));
    }
    *STATE_VARIABLE_VarTypes_22 = STATE_VARIABLE_VarTypes_0_21;
    *STATE_VARIABLE_VarSet_20 = STATE_VARIABLE_VarSet_0_19;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__make_wait_or_get_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTypes_8,
  MR_Word FutureVar_9,
  MR_Word ConsumedVar_10,
  MR_Word WaitOrGetPred_11,
  MR_Word * WaitGoal_12)
{
  {
    MR_Word ModuleName_13;
    MR_String PredName_14;
    MR_Word Purity_15;
    MR_String Code_16;
    MR_Word InstMapDelta_18;
    MR_Word Context_19;
    MR_Word ShouldInline_20;
    MR_Word Globals_53;

    ModuleName_13 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
    switch (WaitOrGetPred_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          PredName_14 = (MR_String) "get_future";
          Purity_15 = (MR_Integer) 0;
          Code_16 = (MR_String) "MR_par_builtin_get_future(Future, Value);";
        }
        break;
      case (MR_Integer) 0:
        {
          PredName_14 = (MR_String) "wait_future";
          Purity_15 = (MR_Integer) 2;
          Code_16 = (MR_String) "MR_par_builtin_wait_future(Future, Value);";
        }
        break;
    }
    InstMapDelta_18 = hlds__instmap__instmap_delta_bind_var_1_f_0(ConsumedVar_10);
    Context_19 = mercury__term__context_init_0_f_0();
    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_7, &Globals_53);
    libs__globals__lookup_bool_option_3_p_0(Globals_53, (MR_Integer) 431, &ShouldInline_20);
    switch (ShouldInline_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ArgVars_21;
          MR_Word Var_46;

          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ConsumedVar_10));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ArgVars_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ArgVars_21, 0) = ((MR_Box) (FutureVar_9));
            MR_hl_field(MR_mktag(1), ArgVars_21, 1) = ((MR_Box) (Var_46));
          }
          hlds__goal_util__generate_simple_call_12_p_0(ModuleInfo_7, ModuleName_13, PredName_14, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Purity_15, ArgVars_21, (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_18, Context_19, WaitGoal_12);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ForeignAttrs_22;
          MR_Word FutureVarType_23;
          MR_Word ConsumedVarType_24;
          MR_Word Arg1_25;
          MR_Word Arg2_26;
          MR_Word Args_27;
          MR_Word Var_30;
          MR_Word Var_31;
          MR_Word Var_33;
          MR_Word Var_35;
          MR_Word Var_36;
          MR_Word Var_38;
          MR_Word Var_40;
          MR_Word STATE_VARIABLE_Attrs_8_59;
          MR_Word STATE_VARIABLE_Attrs_11_62;
          MR_Word STATE_VARIABLE_Attrs_13_64;
          MR_Word STATE_VARIABLE_Attrs_14_65;
          MR_Word STATE_VARIABLE_Attrs_16_67;
          MR_Word STATE_VARIABLE_Attrs_18_69;
          MR_Word STATE_VARIABLE_Attrs_20_71;
          MR_Word STATE_VARIABLE_Attrs_22_73;
          MR_Word STATE_VARIABLE_Attrs_24_75;
          MR_Word STATE_VARIABLE_Attrs_26_77;

          STATE_VARIABLE_Attrs_8_59 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
          parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_8_59, &STATE_VARIABLE_Attrs_11_62);
          parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_11_62, &STATE_VARIABLE_Attrs_13_64);
          parse_tree__prog_data_foreign__set_purity_3_p_0(Purity_15, STATE_VARIABLE_Attrs_13_64, &STATE_VARIABLE_Attrs_14_65);
          parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_14_65, &STATE_VARIABLE_Attrs_16_67);
          parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_16_67, &STATE_VARIABLE_Attrs_18_69);
          parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_18_69, &STATE_VARIABLE_Attrs_20_71);
          parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_20_71, &STATE_VARIABLE_Attrs_22_73);
          parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_22_73, &STATE_VARIABLE_Attrs_24_75);
          parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_24_75, &STATE_VARIABLE_Attrs_26_77);
          parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &transform_hlds__dep_par_conj_scalar_common_15[0])), STATE_VARIABLE_Attrs_26_77, &ForeignAttrs_22);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_8, FutureVar_9, &FutureVarType_23);
          hlds__vartypes__lookup_var_type_3_p_0(VarTypes_8, ConsumedVar_10, &ConsumedVarType_24);
          Var_33 = parse_tree__prog_mode__in_mode_0_f_0();
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) ((MR_String) "Future"));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (Var_33));
          }
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
          }
          {
            Arg1_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg1_25, 0) = ((MR_Box) (FutureVar_9));
            MR_hl_field(MR_mktag(0), Arg1_25, 1) = ((MR_Box) (Var_30));
            MR_hl_field(MR_mktag(0), Arg1_25, 2) = ((MR_Box) (FutureVarType_23));
            MR_hl_field(MR_mktag(0), Arg1_25, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          Var_38 = parse_tree__prog_mode__out_mode_0_f_0();
          {
            Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) ((MR_String) "Value"));
            MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Var_38));
          }
          {
            Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
          }
          {
            Arg2_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Arg2_26, 0) = ((MR_Box) (ConsumedVar_10));
            MR_hl_field(MR_mktag(0), Arg2_26, 1) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(0), Arg2_26, 2) = ((MR_Box) (ConsumedVarType_24));
            MR_hl_field(MR_mktag(0), Arg2_26, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          }
          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Arg2_26));
            MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Args_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Args_27, 0) = ((MR_Box) (Arg1_25));
            MR_hl_field(MR_mktag(1), Args_27, 1) = ((MR_Box) (Var_40));
          }
          hlds__goal_util__generate_foreign_proc_16_p_0(ModuleInfo_7, ModuleName_13, PredName_14, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Purity_15, ForeignAttrs_22, Args_27, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Code_16, (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_18, Context_19, WaitGoal_12);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__join_branches_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_Goal_14;
    MR_Word conv8_STATE_VARIABLE_VarSet_74;
    MR_Word conv7_STATE_VARIABLE_VarTypes_76;

    transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_Goal_14, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_VarSet_74, ((MR_Word) (wrapper_arg_6)), &conv7_STATE_VARIABLE_VarTypes_76);
    *wrapper_arg_3 = ((MR_Box) (conv9_Goal_14));
    *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_VarSet_74));
    *wrapper_arg_7 = ((MR_Box) (conv7_STATE_VARIABLE_VarTypes_76));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_WaitedOnAllSuccessPaths_16;
    MR_Word conv2_Goal_18;
    MR_Word conv1_STATE_VARIABLE_VarSet_94;
    MR_Word conv0_STATE_VARIABLE_VarTypes_96;

    transform_hlds__dep_par_conj__insert_wait_in_goal_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv3_WaitedOnAllSuccessPaths_16, ((MR_Word) (wrapper_arg_3)), &conv2_Goal_18, ((MR_Word) (wrapper_arg_5)), &conv1_STATE_VARIABLE_VarSet_94, ((MR_Word) (wrapper_arg_7)), &conv0_STATE_VARIABLE_VarTypes_96);
    *wrapper_arg_2 = ((MR_Box) (conv3_WaitedOnAllSuccessPaths_16));
    *wrapper_arg_4 = ((MR_Box) (conv2_Goal_18));
    *wrapper_arg_6 = ((MR_Box) (conv1_STATE_VARIABLE_VarSet_94));
    *wrapper_arg_8 = ((MR_Box) (conv0_STATE_VARIABLE_VarTypes_96));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0(
  MR_Word ModuleInfo_13,
  MR_Word AllowSomePathsOnly_14,
  MR_Word SharedVars_15,
  MR_Word FutureMap_16,
  MR_Word STATE_VARIABLE_Goal_0_29,
  MR_Word * STATE_VARIABLE_Goal_30,
  MR_Word STATE_VARIABLE_InstMap_0_31,
  MR_Word * STATE_VARIABLE_InstMap_32,
  MR_Word STATE_VARIABLE_VarSet_0_33,
  MR_Word * STATE_VARIABLE_VarSet_34,
  MR_Word STATE_VARIABLE_VarTypes_0_35,
  MR_Word * STATE_VARIABLE_VarTypes_36)
{
  {
    MR_bool succeeded;
    MR_Word Nonlocals_21;
    MR_Word NonlocalSharedVars_22;

    Nonlocals_21 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(STATE_VARIABLE_Goal_0_29);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Nonlocals_21, SharedVars_15, &NonlocalSharedVars_22);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonlocalSharedVars_22);
    if (succeeded)
    {
      *STATE_VARIABLE_VarTypes_36 = STATE_VARIABLE_VarTypes_0_35;
      *STATE_VARIABLE_VarSet_34 = STATE_VARIABLE_VarSet_0_33;
      *STATE_VARIABLE_Goal_30 = STATE_VARIABLE_Goal_0_29;
    }
    else
    {
      MR_Word GoalInfo0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_29, (MR_Integer) 1))));
      MR_Word InstMapDelta0_24;
      MR_Word ConsumedVarsList_25;
      MR_Word ProducedVarsList_26;
      MR_Word Renaming_28;
      MR_Word Var_37;
      MR_Word STATE_VARIABLE_Goal_38_38;
      MR_Word STATE_VARIABLE_VarSet_39_39;
      MR_Word STATE_VARIABLE_VarTypes_40_40;
      MR_Word Var_41;
      MR_Word STATE_VARIABLE_Goal_42_42;
      MR_Word STATE_VARIABLE_VarSet_43_43;
      MR_Word STATE_VARIABLE_VarTypes_44_44;
      MR_Word Var_49;
      MR_Word IsProducedVar_80;
      MR_Word ProducedVars_81;
      MR_Word ConsumedVars_82;
      MR_Word _WaitedOnAllSuccessPaths_27;
      MR_Box conv6_STATE_VARIABLE_Goal_38_38;
      MR_Box conv5_STATE_VARIABLE_VarSet_39_39;
      MR_Box conv4_STATE_VARIABLE_VarTypes_40_40;
      MR_Box conv12_STATE_VARIABLE_Goal_42_42;
      MR_Box conv11_STATE_VARIABLE_VarSet_43_43;
      MR_Box conv10_STATE_VARIABLE_VarTypes_44_44;

      InstMapDelta0_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_23);
      {
        IsProducedVar_80 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IsProducedVar_80, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), IsProducedVar_80, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0_1));
        MR_hl_field(MR_mktag(0), IsProducedVar_80, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), IsProducedVar_80, 3) = ((MR_Box) (ModuleInfo_13));
        MR_hl_field(MR_mktag(0), IsProducedVar_80, 4) = ((MR_Box) (STATE_VARIABLE_InstMap_0_31));
        MR_hl_field(MR_mktag(0), IsProducedVar_80, 5) = ((MR_Box) (InstMapDelta0_24));
      }
      parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IsProducedVar_80, NonlocalSharedVars_22, &ProducedVars_81, &ConsumedVars_82);
      ConsumedVarsList_25 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumedVars_82);
      ProducedVarsList_26 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducedVars_81);
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0_2));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ModuleInfo_13));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (AllowSomePathsOnly_14));
        MR_hl_field(MR_mktag(0), Var_37, 5) = ((MR_Box) (FutureMap_16));
      }
      mercury__list__map_foldl3_9_p_1((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_waited_on_all_success_paths_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_37, ConsumedVarsList_25, &_WaitedOnAllSuccessPaths_27, ((MR_Box) (STATE_VARIABLE_Goal_0_29)), &conv6_STATE_VARIABLE_Goal_38_38, ((MR_Box) (STATE_VARIABLE_VarSet_0_33)), &conv5_STATE_VARIABLE_VarSet_39_39, ((MR_Box) (STATE_VARIABLE_VarTypes_0_35)), &conv4_STATE_VARIABLE_VarTypes_40_40);
      STATE_VARIABLE_Goal_38_38 = ((MR_Word) (conv6_STATE_VARIABLE_Goal_38_38));
      STATE_VARIABLE_VarSet_39_39 = ((MR_Word) (conv5_STATE_VARIABLE_VarSet_39_39));
      STATE_VARIABLE_VarTypes_40_40 = ((MR_Word) (conv4_STATE_VARIABLE_VarTypes_40_40));
      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0_3));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModuleInfo_13));
        MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (FutureMap_16));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_41, ProducedVarsList_26, ((MR_Box) (STATE_VARIABLE_Goal_38_38)), &conv12_STATE_VARIABLE_Goal_42_42, ((MR_Box) (STATE_VARIABLE_VarSet_39_39)), &conv11_STATE_VARIABLE_VarSet_43_43, ((MR_Box) (STATE_VARIABLE_VarTypes_40_40)), &conv10_STATE_VARIABLE_VarTypes_44_44);
      STATE_VARIABLE_Goal_42_42 = ((MR_Word) (conv12_STATE_VARIABLE_Goal_42_42));
      STATE_VARIABLE_VarSet_43_43 = ((MR_Word) (conv11_STATE_VARIABLE_VarSet_43_43));
      STATE_VARIABLE_VarTypes_44_44 = ((MR_Word) (conv10_STATE_VARIABLE_VarTypes_44_44));
      Var_49 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]));
      hlds__goal_util__clone_variables_9_p_0(ConsumedVarsList_25, STATE_VARIABLE_VarSet_43_43, STATE_VARIABLE_VarTypes_44_44, STATE_VARIABLE_VarSet_43_43, STATE_VARIABLE_VarSet_34, STATE_VARIABLE_VarTypes_44_44, STATE_VARIABLE_VarTypes_36, Var_49, &Renaming_28);
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_28, STATE_VARIABLE_Goal_42_42, STATE_VARIABLE_Goal_30);
    }
    hlds__goal_util__update_instmap_3_p_0(*STATE_VARIABLE_Goal_30, STATE_VARIABLE_InstMap_0_31, STATE_VARIABLE_InstMap_32);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_proc_8_p_0(
  MR_Word PredId_9,
  MR_Integer ProcId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_ProcsToScan_0_18,
  MR_Word * STATE_VARIABLE_ProcsToScan_19,
  MR_Word STATE_VARIABLE_TSStringTable_0_20,
  MR_Word * STATE_VARIABLE_TSStringTable_21)
{
  {
    MR_Word ProcInfo_14;
    MR_Word HasParallelConj_15;

    hlds__hlds_module__module_info_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredId_9, ProcId_10, &ProcInfo_14);
    hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_14, &HasParallelConj_15);
    switch (HasParallelConj_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_ModuleInfo_17 = STATE_VARIABLE_ModuleInfo_0_16;
          *STATE_VARIABLE_ProcsToScan_19 = STATE_VARIABLE_ProcsToScan_0_18;
          *STATE_VARIABLE_TSStringTable_21 = STATE_VARIABLE_TSStringTable_0_20;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Var_22;

          Var_22 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
          transform_hlds__dep_par_conj__sync_dep_par_conjs_in_proc_9_p_0(PredId_9, ProcId_10, Var_22, STATE_VARIABLE_ModuleInfo_0_16, STATE_VARIABLE_ModuleInfo_17, STATE_VARIABLE_ProcsToScan_0_18, STATE_VARIABLE_ProcsToScan_19, STATE_VARIABLE_TSStringTable_0_20, STATE_VARIABLE_TSStringTable_21);
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_17;
    MR_Word conv1_STATE_VARIABLE_ProcsToScan_19;
    MR_Word conv0_STATE_VARIABLE_TSStringTable_21;

    transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_proc_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ProcsToScan_19, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_TSStringTable_21);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_17));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ProcsToScan_19));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_TSStringTable_21));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_7_p_0(
  MR_Word PredId_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15,
  MR_Word STATE_VARIABLE_ProcsToScan_0_16,
  MR_Word * STATE_VARIABLE_ProcsToScan_17,
  MR_Word STATE_VARIABLE_TSStringTable_0_18,
  MR_Word * STATE_VARIABLE_TSStringTable_19)
{
  {
    MR_Word PredInfo_12;
    MR_Word ProcIds_13;
    MR_Word Var_20;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_15;
    MR_Box conv4_STATE_VARIABLE_ProcsToScan_17;
    MR_Box conv3_STATE_VARIABLE_TSStringTable_19;

    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_14, PredId_8, &PredInfo_12);
    ProcIds_13 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_12);
    {
      Var_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_20, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_13[1]));
      MR_hl_field(MR_mktag(0), Var_20, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_20, 3) = ((MR_Box) (PredId_8));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[0]), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0), Var_20, ProcIds_13, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_14)), &conv5_STATE_VARIABLE_ModuleInfo_15, ((MR_Box) (STATE_VARIABLE_ProcsToScan_0_16)), &conv4_STATE_VARIABLE_ProcsToScan_17, ((MR_Box) (STATE_VARIABLE_TSStringTable_0_18)), &conv3_STATE_VARIABLE_TSStringTable_19);
    *STATE_VARIABLE_ModuleInfo_15 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_15));
    *STATE_VARIABLE_ProcsToScan_17 = ((MR_Word) (conv4_STATE_VARIABLE_ProcsToScan_17));
    *STATE_VARIABLE_TSStringTable_19 = ((MR_Word) (conv3_STATE_VARIABLE_TSStringTable_19));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7,
  MR_Box wrapper_arg_8,
  MR_Box * wrapper_arg_9)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv9_STATE_VARIABLE_ModuleInfo_39;
    MR_Word conv8_STATE_VARIABLE_PendingParProcs_41;
    MR_Word conv7_STATE_VARIABLE_Pushability_43;
    MR_Word conv6_STATE_VARIABLE_RevProcMap_45;

    transform_hlds__dep_par_conj__find_specialization_requests_in_proc_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_ModuleInfo_39, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_PendingParProcs_41, ((MR_Word) (wrapper_arg_6)), &conv7_STATE_VARIABLE_Pushability_43, ((MR_Word) (wrapper_arg_8)), &conv6_STATE_VARIABLE_RevProcMap_45);
    *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_ModuleInfo_39));
    *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_PendingParProcs_41));
    *wrapper_arg_7 = ((MR_Box) (conv7_STATE_VARIABLE_Pushability_43));
    *wrapper_arg_9 = ((MR_Box) (conv6_STATE_VARIABLE_RevProcMap_45));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_ModuleInfo_15;
    MR_Word conv1_STATE_VARIABLE_ProcsToScan_17;
    MR_Word conv0_STATE_VARIABLE_TSStringTable_19;

    transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_7_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_15, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ProcsToScan_17, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_TSStringTable_19);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_15));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ProcsToScan_17));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_TSStringTable_19));
  }
}

void MR_CALL 
transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0(
  MR_Word STATE_VARIABLE_ModuleInfo_0_20,
  MR_Word * STATE_VARIABLE_ModuleInfo_21)
{
  {
    MR_Word PredIds_5;
    MR_Word RevTable0_7;
    MR_Word TSStringTable0_8;
    MR_Word ProcsToScan_9;
    MR_Word TSStringTable1_10;
    MR_Word DoneParProcs0_11;
    MR_Word Pushability0_13;
    MR_Word RevProcMap0_14;
    MR_Word PendingParProcs_15;
    MR_Word Pushability_16;
    MR_Word RevProcMap_17;
    MR_Word TSStringTable_19;
    MR_Word STATE_VARIABLE_ModuleInfo_23_23;
    MR_Word Var_25;
    MR_Word STATE_VARIABLE_ModuleInfo_26_26;
    MR_Word STATE_VARIABLE_ModuleInfo_27_27;
    MR_Integer Var_28;
    MR_Word Var_32;
    MR_Word Map_63;
    MR_Integer Size_64;
    MR_Word Var_65;
    MR_Integer Var_6;
    MR_Box conv5_STATE_VARIABLE_ModuleInfo_23_23;
    MR_Box conv4_ProcsToScan_9;
    MR_Box conv3_TSStringTable1_10;
    MR_Box conv13_STATE_VARIABLE_ModuleInfo_26_26;
    MR_Box conv12_PendingParProcs_15;
    MR_Box conv11_Pushability_16;
    MR_Box conv10_RevProcMap_17;
    MR_Word Var_18;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_20, &PredIds_5);
    hlds__hlds_module__module_info_get_ts_rev_string_table_3_p_0(STATE_VARIABLE_ModuleInfo_0_20, &Var_6, &RevTable0_7);
    Var_65 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
    transform_hlds__dep_par_conj__make_ts_string_table_2_4_p_0(RevTable0_7, &Size_64, Var_65, &Map_63);
    {
      TSStringTable0_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TSStringTable0_8, 0) = ((MR_Box) (Map_63));
      MR_hl_field(MR_mktag(0), TSStringTable0_8, 1) = ((MR_Box) (RevTable0_7));
      MR_hl_field(MR_mktag(0), TSStringTable0_8, 2) = ((MR_Box) (Size_64));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[0]), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[11]), PredIds_5, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_20)), &conv5_STATE_VARIABLE_ModuleInfo_23_23, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ProcsToScan_9, ((MR_Box) (TSStringTable0_8)), &conv3_TSStringTable1_10);
    STATE_VARIABLE_ModuleInfo_23_23 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_23_23));
    ProcsToScan_9 = ((MR_Word) (conv4_ProcsToScan_9));
    TSStringTable1_10 = ((MR_Word) (conv3_TSStringTable1_10));
    DoneParProcs0_11 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0));
    Pushability0_13 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]));
    RevProcMap0_14 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_25, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), Var_25, 1) = ((MR_Box) (transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_25, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_25, 3) = ((MR_Box) (DoneParProcs0_11));
      MR_hl_field(MR_mktag(0), Var_25, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_20));
    }
    mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[1]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[3]), Var_25, ProcsToScan_9, ((MR_Box) (STATE_VARIABLE_ModuleInfo_23_23)), &conv13_STATE_VARIABLE_ModuleInfo_26_26, ((MR_Box) ((MR_Unsigned) 0U)), &conv12_PendingParProcs_15, ((MR_Box) (Pushability0_13)), &conv11_Pushability_16, ((MR_Box) (RevProcMap0_14)), &conv10_RevProcMap_17);
    STATE_VARIABLE_ModuleInfo_26_26 = ((MR_Word) (conv13_STATE_VARIABLE_ModuleInfo_26_26));
    PendingParProcs_15 = ((MR_Word) (conv12_PendingParProcs_15));
    Pushability_16 = ((MR_Word) (conv11_Pushability_16));
    RevProcMap_17 = ((MR_Word) (conv10_RevProcMap_17));
    transform_hlds__dep_par_conj__add_requested_specialized_par_procs_10_p_0(PendingParProcs_15, Pushability_16, DoneParProcs0_11, STATE_VARIABLE_ModuleInfo_0_20, STATE_VARIABLE_ModuleInfo_26_26, &STATE_VARIABLE_ModuleInfo_27_27, RevProcMap_17, &Var_18, TSStringTable1_10, &TSStringTable_19);
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TSStringTable_19, (MR_Integer) 1))));
    Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TSStringTable_19, (MR_Integer) 2))));
    hlds__hlds_module__module_info_set_ts_rev_string_table_4_p_0(Var_28, Var_32, STATE_VARIABLE_ModuleInfo_27_27, STATE_VARIABLE_ModuleInfo_21);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__make_ts_string_table_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Map_0_3,
  MR_Word * STATE_VARIABLE_Map_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Integer) 0;
    *STATE_VARIABLE_Map_4 = STATE_VARIABLE_Map_0_3;
  }
  else
  {
    MR_String Str_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Strs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Size0_12;
    MR_Word STATE_VARIABLE_Map_15_15;

    transform_hlds__dep_par_conj__make_ts_string_table_2_4_p_0(Strs_9, &Size0_12, STATE_VARIABLE_Map_0_3, &STATE_VARIABLE_Map_15_15);
    *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Size0_12 + (MR_Unsigned) 1);
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Str_8)), ((MR_Box) (Size0_12)), STATE_VARIABLE_Map_15_15, STATE_VARIABLE_Map_4);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__add_requested_specialized_par_procs_10_p_0(
  MR_Word STATE_VARIABLE_PendingParProcs_0_20,
  MR_Word STATE_VARIABLE_Pushability_0_21,
  MR_Word STATE_VARIABLE_DoneParProcs_0_22,
  MR_Word InitialModuleInfo_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_23,
  MR_Word * STATE_VARIABLE_ModuleInfo_24,
  MR_Word STATE_VARIABLE_RevProcMap_0_25,
  MR_Word * STATE_VARIABLE_RevProcMap_26,
  MR_Word STATE_VARIABLE_TSStringTable_0_27,
  MR_Word * STATE_VARIABLE_TSStringTable_28)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((STATE_VARIABLE_PendingParProcs_0_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_24 = STATE_VARIABLE_ModuleInfo_0_23;
      *STATE_VARIABLE_RevProcMap_26 = STATE_VARIABLE_RevProcMap_0_25;
      *STATE_VARIABLE_TSStringTable_28 = STATE_VARIABLE_TSStringTable_0_27;
    }
    else
    {
      MR_Word CallPattern_18;
      MR_Word NewProc_19;
      MR_Word STATE_VARIABLE_PendingParProcs_29_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PendingParProcs_0_20, (MR_Integer) 1))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_PendingParProcs_0_20, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_DoneParProcs_31_31;
      MR_Word STATE_VARIABLE_PendingParProcs_32_32;
      MR_Word STATE_VARIABLE_Pushability_33_33;
      MR_Word STATE_VARIABLE_ModuleInfo_34_34;
      MR_Word STATE_VARIABLE_RevProcMap_35_35;
      MR_Word STATE_VARIABLE_TSStringTable_36_36;
      MR_Word next_value_of_STATE_VARIABLE_PendingParProcs_0_20;
      MR_Word next_value_of_STATE_VARIABLE_Pushability_0_21;
      MR_Word next_value_of_STATE_VARIABLE_DoneParProcs_0_22;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_23;
      MR_Word next_value_of_STATE_VARIABLE_RevProcMap_0_25;
      MR_Word next_value_of_STATE_VARIABLE_TSStringTable_0_27;

      CallPattern_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 0))));
      NewProc_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_30, (MR_Integer) 1))));
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0), ((MR_Box) (CallPattern_18)), ((MR_Box) (NewProc_19)), STATE_VARIABLE_DoneParProcs_0_22, &STATE_VARIABLE_DoneParProcs_31_31);
      transform_hlds__dep_par_conj__add_requested_specialized_par_proc_14_p_0(CallPattern_18, NewProc_19, STATE_VARIABLE_PendingParProcs_29_29, &STATE_VARIABLE_PendingParProcs_32_32, STATE_VARIABLE_Pushability_0_21, &STATE_VARIABLE_Pushability_33_33, STATE_VARIABLE_DoneParProcs_31_31, InitialModuleInfo_14, STATE_VARIABLE_ModuleInfo_0_23, &STATE_VARIABLE_ModuleInfo_34_34, STATE_VARIABLE_RevProcMap_0_25, &STATE_VARIABLE_RevProcMap_35_35, STATE_VARIABLE_TSStringTable_0_27, &STATE_VARIABLE_TSStringTable_36_36);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_PendingParProcs_0_20 = STATE_VARIABLE_PendingParProcs_32_32;
      next_value_of_STATE_VARIABLE_Pushability_0_21 = STATE_VARIABLE_Pushability_33_33;
      next_value_of_STATE_VARIABLE_DoneParProcs_0_22 = STATE_VARIABLE_DoneParProcs_31_31;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_23 = STATE_VARIABLE_ModuleInfo_34_34;
      next_value_of_STATE_VARIABLE_RevProcMap_0_25 = STATE_VARIABLE_RevProcMap_35_35;
      next_value_of_STATE_VARIABLE_TSStringTable_0_27 = STATE_VARIABLE_TSStringTable_36_36;
      STATE_VARIABLE_PendingParProcs_0_20 = next_value_of_STATE_VARIABLE_PendingParProcs_0_20;
      STATE_VARIABLE_Pushability_0_21 = next_value_of_STATE_VARIABLE_Pushability_0_21;
      STATE_VARIABLE_DoneParProcs_0_22 = next_value_of_STATE_VARIABLE_DoneParProcs_0_22;
      STATE_VARIABLE_ModuleInfo_0_23 = next_value_of_STATE_VARIABLE_ModuleInfo_0_23;
      STATE_VARIABLE_RevProcMap_0_25 = next_value_of_STATE_VARIABLE_RevProcMap_0_25;
      STATE_VARIABLE_TSStringTable_0_27 = next_value_of_STATE_VARIABLE_TSStringTable_0_27;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__add_requested_specialized_par_proc_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_FutureMap_20;
    MR_Word conv1_STATE_VARIABLE_VarSet_22;
    MR_Word conv0_STATE_VARIABLE_VarTypes_24;

    transform_hlds__dep_par_conj__map_arg_to_new_future_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FutureMap_20, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_VarSet_22, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_VarTypes_24);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FutureMap_20));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_VarSet_22));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_VarTypes_24));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__add_requested_specialized_par_proc_14_p_0(
  MR_Word CallPattern_15,
  MR_Word NewProc_16,
  MR_Word STATE_VARIABLE_PendingParProcs_0_52,
  MR_Word * STATE_VARIABLE_PendingParProcs_53,
  MR_Word STATE_VARIABLE_Pushability_0_54,
  MR_Word * STATE_VARIABLE_Pushability_55,
  MR_Word DoneParProcs_19,
  MR_Word InitialModuleInfo_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_56,
  MR_Word * STATE_VARIABLE_ModuleInfo_57,
  MR_Word STATE_VARIABLE_RevProcMap_0_58,
  MR_Word * STATE_VARIABLE_RevProcMap_59,
  MR_Word STATE_VARIABLE_TSStringTable_0_60,
  MR_Word * STATE_VARIABLE_TSStringTable_61)
{
  {
    MR_bool succeeded;
    MR_Word OldPredProcId_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallPattern_15, (MR_Integer) 0))));
    MR_Word FutureArgs_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CallPattern_15, (MR_Integer) 1))));
    MR_Word NewPredProcId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewProc_16, (MR_Integer) 0))));
    MR_Word OldPredId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OldPredProcId_24, (MR_Integer) 0))));
    MR_Integer OldProcId_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldPredProcId_24, (MR_Integer) 1))));
    MR_Word NewPredId_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), NewPredProcId_26, (MR_Integer) 0))));
    MR_Integer NewProcId_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NewPredProcId_26, (MR_Integer) 1))));
    MR_Word HeadVars0_35;
    MR_Word ArgModes0_36;
    MR_Word Goal0_37;
    MR_Word InstMap0_38;
    MR_Word FutureMap_39;
    MR_Word HeadVars_40;
    MR_Word ArgModes_41;
    MR_Word Globals_42;
    MR_Word AllowSomePathsOnly_43;
    MR_Word SharedVars_44;
    MR_Word Goal_45;
    MR_Word NewPredInfo0_46;
    MR_Word NewPredInfo_47;
    MR_Word IgnoreVars_50;
    MR_Word STATE_VARIABLE_NewProcInfo_62_62;
    MR_Word STATE_VARIABLE_VarSet_63_63;
    MR_Word STATE_VARIABLE_VarTypes_64_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word STATE_VARIABLE_VarSet_67_67;
    MR_Word STATE_VARIABLE_VarTypes_68_68;
    MR_Word Var_70;
    MR_Word STATE_VARIABLE_VarSet_71_71;
    MR_Word STATE_VARIABLE_VarTypes_72_72;
    MR_Word STATE_VARIABLE_NewProcInfo_73_73;
    MR_Word STATE_VARIABLE_NewProcInfo_74_74;
    MR_Word STATE_VARIABLE_NewProcInfo_75_75;
    MR_Word STATE_VARIABLE_NewProcInfo_76_76;
    MR_Word STATE_VARIABLE_NewProcInfo_77_77;
    MR_Word STATE_VARIABLE_ModuleInfo_79_79;
    MR_Word Var_80;
    MR_Word STATE_VARIABLE_ModuleInfo_81_81;
    MR_Box conv5_FutureMap_39;
    MR_Box conv4_STATE_VARIABLE_VarSet_67_67;
    MR_Box conv3_STATE_VARIABLE_VarTypes_68_68;
    MR_Word _ProcsToScan_51;

    hlds__hlds_module__module_info_proc_info_4_p_0(InitialModuleInfo_20, OldPredId_28, OldProcId_29, &STATE_VARIABLE_NewProcInfo_62_62);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_NewProcInfo_62_62, &STATE_VARIABLE_VarSet_63_63);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_NewProcInfo_62_62, &STATE_VARIABLE_VarTypes_64_64);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_NewProcInfo_62_62, &HeadVars0_35);
    hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_NewProcInfo_62_62, &ArgModes0_36);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_NewProcInfo_62_62, &Goal0_37);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_NewProcInfo_62_62, InitialModuleInfo_20, &InstMap0_38);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_65, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_13[0]));
      MR_hl_field(MR_mktag(0), Var_65, 1) = ((MR_Box) (transform_hlds__dep_par_conj__add_requested_specialized_par_proc_14_p_0_1));
      MR_hl_field(MR_mktag(0), Var_65, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_65, 3) = ((MR_Box) (HeadVars0_35));
    }
    Var_66 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]));
    mercury__list__foldl3_8_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[4]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_65, FutureArgs_25, ((MR_Box) (Var_66)), &conv5_FutureMap_39, ((MR_Box) (STATE_VARIABLE_VarSet_63_63)), &conv4_STATE_VARIABLE_VarSet_67_67, ((MR_Box) (STATE_VARIABLE_VarTypes_64_64)), &conv3_STATE_VARIABLE_VarTypes_68_68);
    FutureMap_39 = ((MR_Word) (conv5_FutureMap_39));
    STATE_VARIABLE_VarSet_67_67 = ((MR_Word) (conv4_STATE_VARIABLE_VarSet_67_67));
    STATE_VARIABLE_VarTypes_68_68 = ((MR_Word) (conv3_STATE_VARIABLE_VarTypes_68_68));
    transform_hlds__dep_par_conj__replace_head_vars_6_p_0(STATE_VARIABLE_ModuleInfo_0_56, FutureMap_39, HeadVars0_35, &HeadVars_40, ArgModes0_36, &ArgModes_41);
    hlds__hlds_module__module_info_get_globals_2_p_0(InitialModuleInfo_20, &Globals_42);
    libs__globals__lookup_bool_option_3_p_0(Globals_42, (MR_Integer) 433, &AllowSomePathsOnly_43);
    Var_70 = mercury__map__keys_1_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), FutureMap_39);
    SharedVars_44 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_70);
    transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0(STATE_VARIABLE_ModuleInfo_0_56, AllowSomePathsOnly_43, SharedVars_44, FutureMap_39, InstMap0_38, Goal0_37, &Goal_45, STATE_VARIABLE_VarSet_67_67, &STATE_VARIABLE_VarSet_71_71, STATE_VARIABLE_VarTypes_68_68, &STATE_VARIABLE_VarTypes_72_72);
    hlds__hlds_pred__proc_info_set_varset_3_p_0(STATE_VARIABLE_VarSet_71_71, STATE_VARIABLE_NewProcInfo_62_62, &STATE_VARIABLE_NewProcInfo_73_73);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(STATE_VARIABLE_VarTypes_72_72, STATE_VARIABLE_NewProcInfo_73_73, &STATE_VARIABLE_NewProcInfo_74_74);
    hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_40, STATE_VARIABLE_NewProcInfo_74_74, &STATE_VARIABLE_NewProcInfo_75_75);
    hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_41, STATE_VARIABLE_NewProcInfo_75_75, &STATE_VARIABLE_NewProcInfo_76_76);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_45, STATE_VARIABLE_NewProcInfo_76_76, &STATE_VARIABLE_NewProcInfo_77_77);
    hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_56, NewPredId_30, &NewPredInfo0_46);
    succeeded = transform_hlds__dep_par_conj__any_output_arguments_2_p_0(STATE_VARIABLE_ModuleInfo_0_56, ArgModes_41);
    if (succeeded)
      NewPredInfo_47 = NewPredInfo0_46;
    else
    {
      MR_Word Markers0_48;
      MR_Word Markers_49;

      hlds__hlds_pred__pred_info_get_markers_2_p_0(NewPredInfo0_46, &Markers0_48);
      hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 13, Markers0_48, &Markers_49);
      hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_49, NewPredInfo0_46, &NewPredInfo_47);
    }
    transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_p_0(NewPredId_30, NewProcId_31, NewPredInfo_47, STATE_VARIABLE_NewProcInfo_77_77, STATE_VARIABLE_ModuleInfo_0_56, &STATE_VARIABLE_ModuleInfo_79_79);
    Var_80 = mercury__map__keys_1_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), FutureMap_39);
    IgnoreVars_50 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_80);
    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_proc_9_p_0(NewPredId_30, NewProcId_31, IgnoreVars_50, STATE_VARIABLE_ModuleInfo_79_79, &STATE_VARIABLE_ModuleInfo_81_81, (MR_Word) ((MR_Unsigned) 0U), &_ProcsToScan_51, STATE_VARIABLE_TSStringTable_0_60, STATE_VARIABLE_TSStringTable_61);
    transform_hlds__dep_par_conj__find_specialization_requests_in_proc_11_p_0(DoneParProcs_19, InitialModuleInfo_20, NewPredProcId_26, STATE_VARIABLE_ModuleInfo_81_81, STATE_VARIABLE_ModuleInfo_57, STATE_VARIABLE_PendingParProcs_0_52, STATE_VARIABLE_PendingParProcs_53, STATE_VARIABLE_Pushability_0_54, STATE_VARIABLE_Pushability_55, STATE_VARIABLE_RevProcMap_0_58, STATE_VARIABLE_RevProcMap_59);
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__any_output_arguments_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Mode_4;
    MR_Word Modes_5;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Mode_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      Modes_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      succeeded = check_hlds__mode_util__mode_is_output_2_p_0(ModuleInfo_3, Mode_4);
      if (!(succeeded))
      {
        MR_Word next_value_of_HeadVar__2_2 = Modes_5;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__replace_head_vars_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.replace_head_vars\'/6", (MR_String) "length mismatch");
          return;
        }
    else
    {
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.replace_head_vars\'/6", (MR_String) "length mismatch");
          return;
        }
      else
      {
        MR_Word Var_29;
        MR_Word Vars_30;
        MR_Word Mode0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
        MR_Word Modes0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
        MR_Word Mode_33;
        MR_Word Modes_34;
        MR_Word FutureVar_35;
        MR_Box conv0_FutureVar_35;

        succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), HeadVar__2_2, ((MR_Box) (Var_46)), &conv0_FutureVar_35);
        if (succeeded)
        {
          FutureVar_35 = ((MR_Word) (conv0_FutureVar_35));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_29 = FutureVar_35;
          succeeded = check_hlds__mode_util__mode_is_input_2_p_0(HeadVar__1_1, Mode0_31);
          if (succeeded)
            Mode_33 = Mode0_31;
          else
          {
            succeeded = check_hlds__mode_util__mode_is_output_2_p_0(HeadVar__1_1, Mode0_31);
            if (succeeded)
              Mode_33 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[8]);
            else
              {
                mercury__require__sorry_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.replace_head_vars\'/6", (MR_String) "the dependent parallel conjunction transformation only understands input and output modes");
                return;
              }
          }
        }
        else
        {
          Var_29 = Var_46;
          Mode_33 = Mode0_31;
        }
        transform_hlds__dep_par_conj__replace_head_vars_6_p_0(HeadVar__1_1, HeadVar__2_2, Var_45, &Vars_30, Modes0_32, &Modes_34);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_29));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Vars_30));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__6_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Mode_33));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modes_34));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__find_specialization_requests_in_proc_11_p_0(
  MR_Word DoneProcs_12,
  MR_Word InitialModuleInfo_13,
  MR_Word PredProcId_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_38,
  MR_Word * STATE_VARIABLE_ModuleInfo_39,
  MR_Word STATE_VARIABLE_PendingParProcs_0_40,
  MR_Word * STATE_VARIABLE_PendingParProcs_41,
  MR_Word STATE_VARIABLE_Pushability_0_42,
  MR_Word * STATE_VARIABLE_Pushability_43,
  MR_Word STATE_VARIABLE_RevProcMap_0_44,
  MR_Word * STATE_VARIABLE_RevProcMap_45)
{
  {
    MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PredProcId_14, (MR_Integer) 0))));
    MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), PredProcId_14, (MR_Integer) 1))));
    MR_Word VarTypes_25;
    MR_Word STATE_VARIABLE_PredInfo_46_46;
    MR_Word STATE_VARIABLE_ProcInfo_47_47;
    MR_Word STATE_VARIABLE_Goal_48_48;
    MR_Word STATE_VARIABLE_SpecInfo_49_49;
    MR_Word STATE_VARIABLE_Goal_66_66;
    MR_Word STATE_VARIABLE_SpecInfo_67_67;
    MR_Word STATE_VARIABLE_ModuleInfo_69_69;
    MR_Word STATE_VARIABLE_ProcInfo_72_72;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_38, PredId_19, ProcId_20, &STATE_VARIABLE_PredInfo_46_46, &STATE_VARIABLE_ProcInfo_47_47);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &VarTypes_25);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_47_47, &STATE_VARIABLE_Goal_48_48);
    {
      STATE_VARIABLE_SpecInfo_49_49 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_49_49, 0) = ((MR_Box) (DoneProcs_12));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_49_49, 1) = ((MR_Box) (STATE_VARIABLE_RevProcMap_0_44));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_49_49, 2) = ((MR_Box) (InitialModuleInfo_13));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_49_49, 3) = ((MR_Box) (PredProcId_14));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_49_49, 4) = ((MR_Box) (VarTypes_25));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_49_49, 5) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_38));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_49_49, 6) = ((MR_Box) (STATE_VARIABLE_PendingParProcs_0_40));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_49_49, 7) = ((MR_Box) (STATE_VARIABLE_Pushability_0_42));
    }
    transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(STATE_VARIABLE_Goal_48_48, &STATE_VARIABLE_Goal_66_66, STATE_VARIABLE_SpecInfo_49_49, &STATE_VARIABLE_SpecInfo_67_67);
    *STATE_VARIABLE_RevProcMap_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_67_67, (MR_Integer) 1))));
    STATE_VARIABLE_ModuleInfo_69_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_67_67, (MR_Integer) 5))));
    *STATE_VARIABLE_PendingParProcs_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_67_67, (MR_Integer) 6))));
    *STATE_VARIABLE_Pushability_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_67_67, (MR_Integer) 7))));
    hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_66_66, STATE_VARIABLE_ProcInfo_47_47, &STATE_VARIABLE_ProcInfo_72_72);
    transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_p_0(PredId_19, ProcId_20, STATE_VARIABLE_PredInfo_46_46, STATE_VARIABLE_ProcInfo_72_72, STATE_VARIABLE_ModuleInfo_69_69, STATE_VARIABLE_ModuleInfo_39);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_sequences_in_conj_2_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word NonLocals_4,
  MR_Word STATE_VARIABLE_SpecInfo_0_5,
  MR_Word * STATE_VARIABLE_SpecInfo_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = mercury__list__reverse_1_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), HeadVar__1_1);
      *STATE_VARIABLE_SpecInfo_6 = STATE_VARIABLE_SpecInfo_0_5;
    }
    else
    {
      MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
      MR_Word SymName_43;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_String Var_47;
      MR_Word Var_48;
      MR_String Var_64;
      MR_Word SymName_56;
      MR_Word Var_58;
      MR_Word Var_59;
      MR_String Var_60;
      MR_Word Var_61;
      MR_String Var_65;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_18)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_45)) == (MR_Integer) 2);
        if (succeeded)
        {
          SymName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_45, (MR_Integer) 5))));
          succeeded = ((MR_tag((MR_Word) SymName_43)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_43, (MR_Integer) 0))));
            Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_43, (MR_Integer) 1))));
            Var_48 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_46, Var_48);
            if (succeeded)
            {
              Var_64 = (MR_String) "wait_future";
              succeeded = (strcmp(Var_47, Var_64) == 0);
            }
          }
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_13, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_58)) == (MR_Integer) 2);
          if (succeeded)
          {
            SymName_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_58, (MR_Integer) 5))));
            succeeded = ((MR_tag((MR_Word) SymName_56)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_56, (MR_Integer) 0))));
              Var_60 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_56, (MR_Integer) 1))));
              Var_61 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_59, Var_61);
              if (succeeded)
              {
                Var_65 = (MR_String) "signal_future";
                succeeded = (strcmp(Var_60, Var_65) == 0);
              }
            }
          }
          succeeded = !(succeeded);
        }
      }
      if (succeeded)
      {
        MR_Word RevGoals1_27;
        MR_Word Goals1_28;
        MR_Word STATE_VARIABLE_SpecInfo_32_32;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_SpecInfo_0_5;

        transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0(HeadVar__1_1, Goal0_13, Goals0_14, &RevGoals1_27, &Goals1_28, NonLocals_4, STATE_VARIABLE_SpecInfo_0_5, &STATE_VARIABLE_SpecInfo_32_32);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = RevGoals1_27;
        next_value_of_HeadVar__2_2 = Goals1_28;
        next_value_of_STATE_VARIABLE_SpecInfo_0_5 = STATE_VARIABLE_SpecInfo_32_32;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_SpecInfo_0_5 = next_value_of_STATE_VARIABLE_SpecInfo_0_5;
        continue;
      }
      else
      {
        MR_Word Goal_29;
        MR_Word STATE_VARIABLE_SpecInfo_34_34;
        MR_Word Var_35;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_SpecInfo_0_5;

        transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Goal0_13, &Goal_29, STATE_VARIABLE_SpecInfo_0_5, &STATE_VARIABLE_SpecInfo_34_34);
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Goal_29));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (HeadVar__1_1));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_35;
        next_value_of_HeadVar__2_2 = Goals0_14;
        next_value_of_STATE_VARIABLE_SpecInfo_0_5 = STATE_VARIABLE_SpecInfo_34_34;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_SpecInfo_0_5 = next_value_of_STATE_VARIABLE_SpecInfo_0_5;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_sequences_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SpecInfo_0_3,
  MR_Word * STATE_VARIABLE_SpecInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SpecInfo_4 = STATE_VARIABLE_SpecInfo_0_3;
  }
  else
  {
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_8, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_SpecInfo_19_19;

    transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Goal0_15, &Goal_16, STATE_VARIABLE_SpecInfo_0_3, &STATE_VARIABLE_SpecInfo_19_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(MR_mktag(0), Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(MR_mktag(0), Case_10, 2) = ((MR_Box) (Goal_16));
    }
    transform_hlds__dep_par_conj__specialize_sequences_in_cases_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_SpecInfo_19_19, STATE_VARIABLE_SpecInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_11));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_sequences_in_goals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_SpecInfo_0_3,
  MR_Word * STATE_VARIABLE_SpecInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SpecInfo_4 = STATE_VARIABLE_SpecInfo_0_3;
  }
  else
  {
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word STATE_VARIABLE_SpecInfo_15_15;

    transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_SpecInfo_0_3, &STATE_VARIABLE_SpecInfo_15_15);
    transform_hlds__dep_par_conj__specialize_sequences_in_goals_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_SpecInfo_15_15, STATE_VARIABLE_SpecInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_11));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(
  MR_Word Goal0_5,
  MR_Word * Goal_6,
  MR_Word STATE_VARIABLE_SpecInfo_0_54,
  MR_Word * STATE_VARIABLE_SpecInfo_55)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 0))));
    MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_5, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_26 = (MR_Word) ((MR_Word) (GoalExpr0_8));
          MR_Word SubGoal_27;
          MR_Word GoalExpr_74;

          transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(SubGoal0_26, &SubGoal_27, STATE_VARIABLE_SpecInfo_0_54, STATE_VARIABLE_SpecInfo_55);
          GoalExpr_74 = (MR_Word) ((MR_Word) (SubGoal_27));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_74));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Goal_6 = Goal0_5;
          *STATE_VARIABLE_SpecInfo_55 = STATE_VARIABLE_SpecInfo_0_54;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_6 = Goal0_5;
              *STATE_VARIABLE_SpecInfo_55 = STATE_VARIABLE_SpecInfo_0_54;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));

              switch (ConjType_10) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word GoalExpr_14;
                    MR_Word Goals_68;

                    transform_hlds__dep_par_conj__specialize_sequences_in_goals_4_p_0(Goals0_11, &Goals_68, STATE_VARIABLE_SpecInfo_0_54, STATE_VARIABLE_SpecInfo_55);
                    {
                      GoalExpr_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), GoalExpr_14, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), GoalExpr_14, 1) = (MR_Box) ((MR_Unsigned) (ConjType_10));
                      MR_hl_field(MR_mktag(3), GoalExpr_14, 2) = ((MR_Box) (Goals_68));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_14));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word NonLocals_12;
                    MR_Word Goals_13;

                    NonLocals_12 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_5);
                    transform_hlds__dep_par_conj__specialize_sequences_in_conj_2_6_p_0((MR_Word) ((MR_Unsigned) 0U), Goals0_11, &Goals_13, NonLocals_12, STATE_VARIABLE_SpecInfo_0_54, STATE_VARIABLE_SpecInfo_55);
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_13, GoalInfo0_9, Goal_6);
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Goals0_69 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Goals_70;
              MR_Word GoalExpr_71;

              transform_hlds__dep_par_conj__specialize_sequences_in_goals_4_p_0(Goals0_69, &Goals_70, STATE_VARIABLE_SpecInfo_0_54, STATE_VARIABLE_SpecInfo_55);
              {
                GoalExpr_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_71, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_71, 1) = ((MR_Box) (Goals_70));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_71));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word CanFail_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Cases_18;
              MR_Word GoalExpr_72;

              transform_hlds__dep_par_conj__specialize_sequences_in_cases_4_p_0(Cases0_17, &Cases_18, STATE_VARIABLE_SpecInfo_0_54, STATE_VARIABLE_SpecInfo_55);
              {
                GoalExpr_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 1) = ((MR_Box) (SwitchVar_15));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 2) = (MR_Box) ((MR_Unsigned) (CanFail_16));
                MR_hl_field(MR_mktag(3), GoalExpr_72, 3) = ((MR_Box) (Cases_18));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_72));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word SubGoal0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Var_58;

              succeeded = ((((MR_tag((MR_Word) Reason_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_28, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_58 == (MR_Integer) 1);
              }
              if (succeeded)
              {
                *Goal_6 = Goal0_5;
                *STATE_VARIABLE_SpecInfo_55 = STATE_VARIABLE_SpecInfo_0_54;
              }
              else
              {
                MR_Word GoalExpr_75;
                MR_Word SubGoal_76;

                transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(SubGoal0_80, &SubGoal_76, STATE_VARIABLE_SpecInfo_0_54, STATE_VARIABLE_SpecInfo_55);
                {
                  GoalExpr_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_75, 1) = ((MR_Box) (Reason_28));
                  MR_hl_field(MR_mktag(3), GoalExpr_75, 2) = ((MR_Box) (SubGoal_76));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_6 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_75));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Quant_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 1))));
              MR_Word Cond0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 2))));
              MR_Word Then0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 3))));
              MR_Word Else0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_8, (MR_Integer) 4))));
              MR_Word Cond_23;
              MR_Word Then_24;
              MR_Word Else_25;
              MR_Word STATE_VARIABLE_SpecInfo_61_61;
              MR_Word STATE_VARIABLE_SpecInfo_62_62;
              MR_Word GoalExpr_73;

              transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Cond0_20, &Cond_23, STATE_VARIABLE_SpecInfo_0_54, &STATE_VARIABLE_SpecInfo_61_61);
              transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Then0_21, &Then_24, STATE_VARIABLE_SpecInfo_61_61, &STATE_VARIABLE_SpecInfo_62_62);
              transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Else0_22, &Else_25, STATE_VARIABLE_SpecInfo_62_62, STATE_VARIABLE_SpecInfo_55);
              {
                GoalExpr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_73, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_73, 1) = ((MR_Box) (Quant_19));
                MR_hl_field(MR_mktag(3), GoalExpr_73, 2) = ((MR_Box) (Cond_23));
                MR_hl_field(MR_mktag(3), GoalExpr_73, 3) = ((MR_Box) (Then_24));
                MR_hl_field(MR_mktag(3), GoalExpr_73, 4) = ((MR_Box) (Else_25));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_73));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.specialize_sequences_in_goal\'/4", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_WaitGoal_9;

    transform_hlds__dep_par_conj__make_get_goal_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_WaitGoal_9);
    *wrapper_arg_2 = ((MR_Box) (conv1_WaitGoal_9));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dep_par_conj__should_add_get_goal_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0(
  MR_Word RevGoals0_9,
  MR_Word Goal0_10,
  MR_Word FwdGoals0_11,
  MR_Word * RevGoals_12,
  MR_Word * FwdGoals_13,
  MR_Word NonLocals_14,
  MR_Word STATE_VARIABLE_SpecInfo_0_41,
  MR_Word * STATE_VARIABLE_SpecInfo_42)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_10, (MR_Integer) 0))));
    MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 0))));
    MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 1))));
    MR_Word CallVars_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_16, (MR_Integer) 2))));
    MR_Word ModuleInfo_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_41, (MR_Integer) 5))));
    MR_Word PredInfo_25;
    MR_Word ProcInfo_26;
    MR_Word PredProcId_27;
    MR_Word CallerPredProcId_28;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_98;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_24, PredId_18, &PredInfo_25);
    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_24, PredId_18, ProcId_19, &ProcInfo_26);
    {
      PredProcId_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_27, 0) = ((MR_Box) (PredId_18));
      MR_hl_field(MR_mktag(0), PredProcId_27, 1) = ((MR_Box) (ProcId_19));
    }
    CallerPredProcId_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_41, (MR_Integer) 3))));
    Var_43 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_25);
    succeeded = mercury__list__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), ((MR_Box) (ProcId_19)), Var_43);
    if (succeeded)
    {
      Var_44 = (MR_Integer) 0;
      hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_26, &Var_98);
      succeeded = (Var_44 == Var_98);
      if (succeeded)
      {
        succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_27, CallerPredProcId_28);
        if (!(succeeded))
        {
          MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_41, (MR_Integer) 1))));
          MR_Word Var_99;
          MR_Box conv0_Var_99;

          succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), Var_45, ((MR_Box) (CallerPredProcId_28)), &conv0_Var_99);
          if (succeeded)
          {
            Var_99 = ((MR_Word) (conv0_Var_99));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(PredProcId_27, Var_99);
        }
        succeeded = !(succeeded);
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word PushedWaitPairs_29;
      MR_Word UnPushedWaitGoals_30;
      MR_Word RevGoals1_31;
      MR_Word PushedSignalPairs_32;
      MR_Word UnPushedSignalGoals_33;
      MR_Word FwdGoals1_34;
      MR_Word STATE_VARIABLE_SpecInfo_46_46;
      MR_Word STATE_VARIABLE_SpecInfo_47_47;

      transform_hlds__dep_par_conj__find_relevant_pushable_wait_goals_8_p_0(RevGoals0_9, PredProcId_27, CallVars_20, &PushedWaitPairs_29, &UnPushedWaitGoals_30, &RevGoals1_31, STATE_VARIABLE_SpecInfo_0_41, &STATE_VARIABLE_SpecInfo_46_46);
      transform_hlds__dep_par_conj__find_relevant_pushable_signal_goals_8_p_0(FwdGoals0_11, PredProcId_27, CallVars_20, &PushedSignalPairs_32, &UnPushedSignalGoals_33, &FwdGoals1_34, STATE_VARIABLE_SpecInfo_46_46, &STATE_VARIABLE_SpecInfo_47_47);
      succeeded = (PushedWaitPairs_29 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (PushedSignalPairs_32 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *RevGoals_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal0_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RevGoals0_9));
        }
        *FwdGoals_13 = FwdGoals0_11;
        *STATE_VARIABLE_SpecInfo_42 = STATE_VARIABLE_SpecInfo_47_47;
      }
      else
      {
        MR_Word MaybeGoal_35;

        transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0(PushedWaitPairs_29, PushedSignalPairs_32, Goal0_10, &MaybeGoal_35, STATE_VARIABLE_SpecInfo_47_47, STATE_VARIABLE_SpecInfo_42);
        if ((MaybeGoal_35 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *RevGoals_12 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal0_10));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RevGoals0_9));
          }
          *FwdGoals_13 = FwdGoals0_11;
        }
        else
        {
          MR_Word Goal_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoal_35, (MR_Integer) 0))));
          MR_Word PushedPairs_37;
          MR_Word PushedPairsNeedGets_38;
          MR_Word VarTypes_39;
          MR_Word GetGoals_40;
          MR_Word Var_49;
          MR_Word Var_50;
          MR_Word Var_52;
          MR_Word Var_53;
          MR_Word Var_55;
          MR_Word Var_81;

          PushedPairs_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0), PushedSignalPairs_32, PushedWaitPairs_29);
          {
            Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_5[5]));
            MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0_1));
            MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (NonLocals_14));
            MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (FwdGoals1_34));
          }
          mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0), Var_49, PushedPairs_37, &PushedPairsNeedGets_38);
          VarTypes_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_SpecInfo_42, (MR_Integer) 4))));
          Var_81 = ((MR_Word) ((MR_hl_field(MR_mktag(0), *STATE_VARIABLE_SpecInfo_42, (MR_Integer) 5))));
          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_7[1]));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0_2));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (Var_81));
            MR_hl_field(MR_mktag(0), Var_50, 4) = ((MR_Box) (VarTypes_39));
          }
          mercury__list__map_3_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_50, PushedPairsNeedGets_38, &GetGoals_40);
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Goal_36));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), UnPushedWaitGoals_30, RevGoals1_31);
          Var_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_53, Var_55);
          *RevGoals_12 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GetGoals_40, Var_52);
          *FwdGoals_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), UnPushedSignalGoals_33, FwdGoals1_34);
        }
      }
    }
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *RevGoals_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal0_10));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RevGoals0_9));
      }
      *FwdGoals_13 = FwdGoals0_11;
      *STATE_VARIABLE_SpecInfo_42 = STATE_VARIABLE_SpecInfo_0_41;
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Var_3;

    transform_hlds__dep_par_conj__replace_args_with_futures_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Var_3);
    *wrapper_arg_2 = ((MR_Box) (conv2_Var_3));
  }
}

static MR_Box MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    conv1_HeadVar__2_2 = transform_hlds__dep_par_conj__fvp_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = transform_hlds__dep_par_conj__fvp_var_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0(
  MR_Word WaitPairs_7,
  MR_Word SignalPairs_8,
  MR_Word Goal0_9,
  MR_Word * MaybeGoal_10,
  MR_Word STATE_VARIABLE_SpecInfo_0_32,
  MR_Word * STATE_VARIABLE_SpecInfo_33)
{
  {
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_9, (MR_Integer) 1))));
    MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 0))));
    MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 1))));
    MR_Word CallVars_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 2))));
    MR_Word Context_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr0_12, (MR_Integer) 4))));
    MR_Word OrigPPId_20;
    MR_Word WaitVars_21;
    MR_Word SignalVars_22;
    MR_Word FutureArgs_23;
    MR_Word CallPattern_24;
    MR_Word MaybeSpecProc_25;
    MR_Word Var_37;

    {
      OrigPPId_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OrigPPId_20, 0) = ((MR_Box) (PredId_14));
      MR_hl_field(MR_mktag(0), OrigPPId_20, 1) = ((MR_Box) (ProcId_15));
    }
    WaitVars_21 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[8]), WaitPairs_7);
    SignalVars_22 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[9]), SignalPairs_8);
    Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), WaitVars_21, SignalVars_22);
    transform_hlds__dep_par_conj__number_future_args_5_p_0((MR_Integer) 1, CallVars_16, Var_37, (MR_Word) ((MR_Unsigned) 0U), &FutureArgs_23);
    {
      CallPattern_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CallPattern_24, 0) = ((MR_Box) (OrigPPId_20));
      MR_hl_field(MR_mktag(0), CallPattern_24, 1) = ((MR_Box) (FutureArgs_23));
    }
    transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0(FutureArgs_23, CallPattern_24, OrigPPId_20, &MaybeSpecProc_25, STATE_VARIABLE_SpecInfo_0_32, STATE_VARIABLE_SpecInfo_33);
    if ((MaybeSpecProc_25 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word SpecPPId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSpecProc_25, (MR_Integer) 0))));
      MR_Word SpecName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSpecProc_25, (MR_Integer) 1))));
      MR_Word NewCallVars_28;
      MR_Word SpecPredId_29;
      MR_Integer SpecProcId_30;
      MR_Word GoalExpr_31;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_43;

      Var_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0), WaitPairs_7, SignalPairs_8);
      {
        Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_5[4]));
        MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_3));
        MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Var_41));
      }
      mercury__list__map_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), Var_40, CallVars_16, &NewCallVars_28);
      SpecPredId_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecPPId_26, (MR_Integer) 0))));
      SpecProcId_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), SpecPPId_26, (MR_Integer) 1))));
      {
        GoalExpr_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), GoalExpr_31, 0) = ((MR_Box) (SpecPredId_29));
        MR_hl_field(MR_mktag(2), GoalExpr_31, 1) = ((MR_Box) (SpecProcId_30));
        MR_hl_field(MR_mktag(2), GoalExpr_31, 2) = ((MR_Box) (NewCallVars_28));
        MR_hl_field(MR_mktag(2), GoalExpr_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(2), GoalExpr_31, 4) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(2), GoalExpr_31, 5) = ((MR_Box) (SpecName_27));
      }
      {
        Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (GoalExpr_31));
        MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (GoalInfo0_13));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeGoal_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_43));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__number_future_args_5_p_0(
  MR_Integer ArgNo_1,
  MR_Word HeadVar__2_2,
  MR_Word WaitSignalVars_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__5_5 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), HeadVar__4_4);
    else
    {
      MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_RevAcc_16_16;
      MR_Integer Var_17;
      MR_Integer next_value_of_ArgNo_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__4_4;

      succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (Arg_10)), WaitSignalVars_3);
      if (succeeded)
        mercury__list__cons_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (ArgNo_1)), HeadVar__4_4, &STATE_VARIABLE_RevAcc_16_16);
      else
        STATE_VARIABLE_RevAcc_16_16 = HeadVar__4_4;
      Var_17 = (MR_Integer) ((MR_Unsigned) ArgNo_1 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_ArgNo_1 = Var_17;
      next_value_of_HeadVar__2_2 = Args_11;
      next_value_of_HeadVar__4_4 = STATE_VARIABLE_RevAcc_16_16;
      ArgNo_1 = next_value_of_ArgNo_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_68;

      (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__DoneOrPendingParProc_17, (MR_Integer) 0))));
      Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__DoneOrPendingParProc_17, (MR_Integer) 1))));
      (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_117);
      if ((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded)
        transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_16 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv1_Var_16));
    (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__DoneOrPendingParProc_17 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv0_DoneOrPendingParProc_17));
    transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__DoneOrPendingParProc_17 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv2_DoneOrPendingParProc_17));
    transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_5(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 0))));
          MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 1))));
          MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 2))));
          MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 3))));
          MR_Word Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 4))));
          MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 5))));
          MR_Word Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 6))));
          MR_Word Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 7))));

          mercury__map__member_3_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0), Var_31, &(env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv1_Var_16, &(env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv0_DoneOrPendingParProc_17, transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_3, env_ptr);
        }
        mercury__list__member_2_p_1((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0), &(env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv2_DoneOrPendingParProc_17, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__PendingParProcsList_15, transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_4, env_ptr);
        (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0(
  MR_Word FutureArgs_7,
  MR_Word CallPattern_8,
  MR_Word OrigPPId_9,
  MR_Word * MaybeSpecProc_10,
  MR_Word STATE_VARIABLE_SpecInfo_0_26,
  MR_Word * STATE_VARIABLE_SpecInfo_27)
{
  {
    struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s env;

    (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9 = OrigPPId_9;
    (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26 = STATE_VARIABLE_SpecInfo_0_26;
    {
      MR_Word SpecNewParProc_12;
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 0))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 6))));
      MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 1))));
      MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 2))));
      MR_Word Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 3))));
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 4))));
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 5))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 7))));

      (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = transform_hlds__dep_par_conj__find_spec_par_proc_for_call_pattern_4_p_0(Var_28, Var_45, CallPattern_8, &SpecNewParProc_12);
      if ((env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded)
      {
        MR_Word SpecPPId_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecNewParProc_12, (MR_Integer) 0))));
        MR_Word SpecSymName_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecNewParProc_12, (MR_Integer) 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpecProc_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SpecPPId_13));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SpecSymName_14));
        }
        *STATE_VARIABLE_SpecInfo_27 = (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26;
      }
      else
      {
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 6))));
        MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 0))));
        MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 1))));
        MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 2))));
        MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 3))));
        MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 4))));
        MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 5))));
        MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 7))));

        (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__PendingParProcsList_15 = mercury__assoc_list__values_1_f_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0), Var_30);
        transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_5(&env);
        (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = !((env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded);
        if ((env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded)
        {
          MR_Word ModuleInfo0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 5))));
          MR_Word PendingParProcs0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 6))));
          MR_Word RevProcMap0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 1))));
          MR_String SpecName_21;
          MR_Word ModuleInfo_22;
          MR_Word ModuleName_23;
          MR_Word PendingParProcs_24;
          MR_Word RevProcMap_25;
          MR_Word Var_32;
          MR_Word SpecPPId_36;
          MR_Word SpecSymName_37;
          MR_Word Var_90;
          MR_Word Var_92;
          MR_Word Var_93;
          MR_Word Var_94;
          MR_Word Var_97;
          MR_Word Var_98;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;
          MR_Word Var_103;
          MR_Word Var_105;
          MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 0))));
          MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 2))));
          MR_Word Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 3))));
          MR_Word Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 4))));
          MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 7))));
          MR_Word Var_91;
          MR_Word Var_95;
          MR_Word Var_96;

          transform_hlds__dep_par_conj__create_new_spec_parallel_pred_6_p_0(FutureArgs_7, (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9, &SpecPPId_36, &SpecName_21, ModuleInfo0_18, &ModuleInfo_22);
          hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_22, &ModuleName_23);
          {
            SpecSymName_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), SpecSymName_37, 0) = ((MR_Box) (ModuleName_23));
            MR_hl_field(MR_mktag(1), SpecSymName_37, 1) = ((MR_Box) (SpecName_21));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MaybeSpecProc_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SpecPPId_36));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (SpecSymName_37));
          }
          {
            Var_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (SpecPPId_36));
            MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (SpecSymName_37));
          }
          transform_hlds__dep_par_conj__queue_par_proc_4_p_0(CallPattern_8, Var_32, PendingParProcs0_19, &PendingParProcs_24);
          RevProcMap_25 = mercury__map__det_insert_3_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), RevProcMap0_20, ((MR_Box) (SpecPPId_36)), ((MR_Box) ((env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9)));
          Var_90 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 0))));
          Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 1))));
          Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 2))));
          Var_93 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 3))));
          Var_94 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 4))));
          Var_95 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 5))));
          Var_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 6))));
          Var_97 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26, (MR_Integer) 7))));
          Var_98 = Var_90;
          Var_100 = Var_92;
          Var_101 = Var_93;
          Var_102 = Var_94;
          Var_103 = ModuleInfo_22;
          Var_105 = Var_97;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_SpecInfo_27 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_98));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (RevProcMap_25));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_100));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_101));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_102));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_103));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (PendingParProcs_24));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_105));
          }
        }
        else
        {
          *MaybeSpecProc_10 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_SpecInfo_27 = (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__STATE_VARIABLE_SpecInfo_0_26;
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__create_new_spec_parallel_pred_6_p_0(
  MR_Word FutureArgs_7,
  MR_Word OrigPPId_8,
  MR_Word * NewPPId_9,
  MR_String * NewPredName_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_24,
  MR_Word * STATE_VARIABLE_ModuleInfo_25)
{
  {
    MR_Word OrigPredInfo_12;
    MR_Word OrigProcInfo_13;
    MR_Word NewPredInfo0_15;
    MR_Integer ProcId_17;
    MR_Word NewProcs0_18;
    MR_Word NewProcs_19;
    MR_Word NewPredInfo_20;
    MR_Word PredTable0_21;
    MR_Word NewPredId_22;
    MR_Word PredTable_23;
    MR_Word PredId_36;
    MR_Integer ProcId_37;
    MR_Word PredModule_38;
    MR_String Name0_39;
    MR_Word PredOrFunc_40;
    MR_Word Tvars_41;
    MR_Word ExistQVars_42;
    MR_Word ArgTypes0_43;
    MR_Word OrigOrigin_44;
    MR_Word Name1_45;
    MR_Integer ProcInt_46;
    MR_Word Name_47;
    MR_Integer Arity_48;
    MR_Word TypeVars_49;
    MR_Word ArgTypes_50;
    MR_Word Context_51;
    MR_Word ClausesInfo_52;
    MR_Word Markers_53;
    MR_Word GoalType_54;
    MR_Word ClassContext_55;
    MR_Word VarNameRemap_56;
    MR_Word EmptyProofs_57;
    MR_Word EmptyConstraintMap_58;
    MR_Word Origin_59;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_String Var_64;
    MR_String Var_66;
    MR_Word STATE_VARIABLE_PredInfo_45_69;

    hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_24, OrigPPId_8, &OrigPredInfo_12, &OrigProcInfo_13);
    PredId_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrigPPId_8, (MR_Integer) 0))));
    ProcId_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OrigPPId_8, (MR_Integer) 1))));
    PredModule_38 = hlds__hlds_pred__pred_info_module_1_f_0(OrigPredInfo_12);
    Name0_39 = hlds__hlds_pred__pred_info_name_1_f_0(OrigPredInfo_12);
    PredOrFunc_40 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(OrigPredInfo_12);
    hlds__hlds_pred__pred_info_get_arg_types_4_p_0(OrigPredInfo_12, &Tvars_41, &ExistQVars_42, &ArgTypes0_43);
    hlds__hlds_pred__pred_info_get_origin_2_p_0(OrigPredInfo_12, &OrigOrigin_44);
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (PredOrFunc_40));
    }
    {
      Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_63, 1) = ((MR_Box) (FutureArgs_7));
    }
    parse_tree__prog_util__make_pred_name_6_p_0(PredModule_38, (MR_String) "Parallel", Var_62, Name0_39, Var_63, &Name1_45);
    hlds__hlds_pred__proc_id_to_int_2_p_0(ProcId_37, &ProcInt_46);
    Var_66 = mercury__string__int_to_string_1_f_0(ProcInt_46);
    Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_66);
    mdbcomp__sym_name__add_sym_name_suffix_3_p_0(Name1_45, Var_64, &Name_47);
    Arity_48 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(OrigPredInfo_12);
    hlds__hlds_pred__pred_info_get_typevarset_2_p_0(OrigPredInfo_12, &TypeVars_49);
    transform_hlds__dep_par_conj__futurise_argtypes_4_p_0((MR_Integer) 1, FutureArgs_7, ArgTypes0_43, &ArgTypes_50);
    hlds__hlds_pred__pred_info_get_context_2_p_0(OrigPredInfo_12, &Context_51);
    hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(OrigPredInfo_12, &ClausesInfo_52);
    hlds__hlds_pred__pred_info_get_markers_2_p_0(OrigPredInfo_12, &Markers_53);
    hlds__hlds_pred__pred_info_get_goal_type_2_p_0(OrigPredInfo_12, &GoalType_54);
    hlds__hlds_pred__pred_info_get_class_context_2_p_0(OrigPredInfo_12, &ClassContext_55);
    hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(OrigPredInfo_12, &VarNameRemap_56);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &EmptyProofs_57);
    mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &EmptyConstraintMap_58);
    {
      Origin_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Origin_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Origin_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Origin_59, 2) = ((MR_Box) (OrigOrigin_44));
      MR_hl_field(MR_mktag(3), Origin_59, 3) = ((MR_Box) (PredId_36));
    }
    hlds__hlds_pred__pred_info_init_19_p_0(PredModule_38, Name_47, Arity_48, PredOrFunc_40, Context_51, Origin_59, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), (MR_Word) ((MR_Unsigned) 0U), GoalType_54, Markers_53, ArgTypes_50, Tvars_41, ExistQVars_42, ClassContext_55, EmptyProofs_57, EmptyConstraintMap_58, ClausesInfo_52, VarNameRemap_56, &STATE_VARIABLE_PredInfo_45_69);
    hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVars_49, STATE_VARIABLE_PredInfo_45_69, &NewPredInfo0_15);
    *NewPredName_10 = hlds__hlds_pred__pred_info_name_1_f_0(NewPredInfo0_15);
    ProcId_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OrigPPId_8, (MR_Integer) 1))));
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(NewPredInfo0_15, &NewProcs0_18);
    mercury__map__set_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ((MR_Box) (ProcId_17)), ((MR_Box) (OrigProcInfo_13)), NewProcs0_18, &NewProcs_19);
    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(NewProcs_19, NewPredInfo0_15, &NewPredInfo_20);
    hlds__hlds_module__module_info_get_predicate_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_24, &PredTable0_21);
    hlds__pred_table__predicate_table_insert_4_p_0(NewPredInfo_20, &NewPredId_22, PredTable0_21, &PredTable_23);
    hlds__hlds_module__module_info_set_predicate_table_3_p_0(PredTable_23, STATE_VARIABLE_ModuleInfo_0_24, STATE_VARIABLE_ModuleInfo_25);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *NewPPId_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (NewPredId_22));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ProcId_17));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__futurise_argtypes_4_p_0(
  MR_Integer ArgNo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.futurise_argtypes\'/4", (MR_String) "more future arguments than argument types");
          return;
        }
      else
      {
        MR_Word ArgType_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgTypes_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word FuturisedArgType_18;
        MR_Word FuturisedArgTypes_19;

        succeeded = (ArgNo_1 == Var_26);
        if (succeeded)
        {
          MR_Integer Var_20;

          FuturisedArgType_18 = parse_tree__builtin_lib_types__future_type_1_f_0(ArgType_16);
          Var_20 = (MR_Integer) ((MR_Unsigned) ArgNo_1 + (MR_Unsigned) 1);
          transform_hlds__dep_par_conj__futurise_argtypes_4_p_0(Var_20, Var_25, ArgTypes_17, &FuturisedArgTypes_19);
        }
        else
        {
          MR_Integer Var_22;

          FuturisedArgType_18 = ArgType_16;
          Var_22 = (MR_Integer) ((MR_Unsigned) ArgNo_1 + (MR_Unsigned) 1);
          transform_hlds__dep_par_conj__futurise_argtypes_4_p_0(Var_22, HeadVar__2_2, ArgTypes_17, &FuturisedArgTypes_19);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FuturisedArgType_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FuturisedArgTypes_19));
        }
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__queue_par_proc_4_p_0(
  MR_Word CallPattern_5,
  MR_Word NewProc_6,
  MR_Word STATE_VARIABLE_PendingParProcs_0_8,
  MR_Word * STATE_VARIABLE_PendingParProcs_9)
{
  {
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_11, 0) = ((MR_Box) (CallPattern_5));
      MR_hl_field(MR_mktag(0), Var_11, 1) = ((MR_Box) (NewProc_6));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_PendingParProcs_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_PendingParProcs_0_8));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__find_spec_par_proc_for_call_pattern_4_p_0(
  MR_Word DoneParProcs_5,
  MR_Word PendingProcs_6,
  MR_Word CallPattern_7,
  MR_Word * SpecProc_8)
{
  {
    MR_bool succeeded;
    MR_Word SpecProcPrime_9;
    MR_Box conv0_SpecProcPrime_9;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0), DoneParProcs_5, ((MR_Box) (CallPattern_7)), &conv0_SpecProcPrime_9);
    if (succeeded)
    {
      SpecProcPrime_9 = ((MR_Word) (conv0_SpecProcPrime_9));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *SpecProc_8 = SpecProcPrime_9;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box conv1_SpecProc_8;

      succeeded = mercury__assoc_list__search_3_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0), PendingProcs_6, ((MR_Box) (CallPattern_7)), &conv1_SpecProc_8);
      if (succeeded)
      {
        *SpecProc_8 = ((MR_Word) (conv1_SpecProc_8));
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__find_relevant_pushable_signal_goals_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_2,
  MR_Word CallVars_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_SpecInfo_0_7,
  MR_Word * STATE_VARIABLE_SpecInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_SpecInfo_8 = STATE_VARIABLE_SpecInfo_0_7;
    }
    else
    {
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));
      MR_Word FutureVar_30;
      MR_Word ProducedVar_31;
      MR_Word SignalArgs_26;
      MR_Word SymName_29;
      MR_Word Var_39;
      MR_String Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;
      MR_String Var_50;

      succeeded = ((MR_tag((MR_Word) GoalExpr_22)) == (MR_Integer) 2);
      if (succeeded)
      {
        SignalArgs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_22, (MR_Integer) 2))));
        SymName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_22, (MR_Integer) 5))));
        succeeded = ((MR_tag((MR_Word) SymName_29)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_29, (MR_Integer) 0))));
          Var_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_29, (MR_Integer) 1))));
          Var_47 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_39, Var_47);
          if (succeeded)
          {
            Var_50 = (MR_String) "signal_future";
            succeeded = (strcmp(Var_40, Var_50) == 0);
            if (succeeded)
            {
              succeeded = (SignalArgs_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FutureVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SignalArgs_26, (MR_Integer) 0))));
                Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SignalArgs_26, (MR_Integer) 1))));
                succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ProducedVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
                  Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
                  succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word PushedSignalPairsTail_32;
        MR_Word UnPushedSignalGoalsTail_33;
        MR_Word STATE_VARIABLE_SpecInfo_43_43;
        MR_Integer ArgPos_34;

        transform_hlds__dep_par_conj__find_relevant_pushable_signal_goals_8_p_0(Goals_15, PredProcId_2, CallVars_3, &PushedSignalPairsTail_32, &UnPushedSignalGoalsTail_33, HeadVar__6_6, STATE_VARIABLE_SpecInfo_0_7, &STATE_VARIABLE_SpecInfo_43_43);
        succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), CallVars_3, ((MR_Box) (ProducedVar_31)), &ArgPos_34);
        if (succeeded)
        {
          MR_Word IsWorthPushing_35;

          transform_hlds__dep_par_conj__should_we_push_6_p_0(PredProcId_2, ArgPos_34, (MR_Integer) 1, &IsWorthPushing_35, STATE_VARIABLE_SpecInfo_43_43, STATE_VARIABLE_SpecInfo_8);
          switch (IsWorthPushing_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *HeadVar__4_4 = PushedSignalPairsTail_32;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnPushedSignalGoalsTail_33));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word PushedSignalPair_36;

                {
                  PushedSignalPair_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PushedSignalPair_36, 0) = ((MR_Box) (FutureVar_30));
                  MR_hl_field(MR_mktag(0), PushedSignalPair_36, 1) = ((MR_Box) (ProducedVar_31));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PushedSignalPair_36));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PushedSignalPairsTail_32));
                }
                *HeadVar__5_5 = UnPushedSignalGoalsTail_33;
              }
              break;
          }
        }
        else
        {
          *HeadVar__4_4 = PushedSignalPairsTail_32;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnPushedSignalGoalsTail_33));
          }
          *STATE_VARIABLE_SpecInfo_8 = STATE_VARIABLE_SpecInfo_43_43;
        }
      }
      else
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = HeadVar__1_1;
        *STATE_VARIABLE_SpecInfo_8 = STATE_VARIABLE_SpecInfo_0_7;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__find_relevant_pushable_wait_goals_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word PredProcId_2,
  MR_Word CallVars_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_SpecInfo_0_7,
  MR_Word * STATE_VARIABLE_SpecInfo_8)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_SpecInfo_8 = STATE_VARIABLE_SpecInfo_0_7;
    }
    else
    {
      MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word GoalExpr_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_14, (MR_Integer) 0))));
      MR_Word FutureVar_30;
      MR_Word ConsumedVar_31;
      MR_Word WaitArgs_26;
      MR_Word SymName_29;
      MR_Word Var_39;
      MR_String Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_47;
      MR_String Var_50;

      succeeded = ((MR_tag((MR_Word) GoalExpr_22)) == (MR_Integer) 2);
      if (succeeded)
      {
        WaitArgs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_22, (MR_Integer) 2))));
        SymName_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), GoalExpr_22, (MR_Integer) 5))));
        succeeded = ((MR_tag((MR_Word) SymName_29)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SymName_29, (MR_Integer) 0))));
          Var_40 = ((MR_String) ((MR_hl_field(MR_mktag(1), SymName_29, (MR_Integer) 1))));
          Var_47 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_39, Var_47);
          if (succeeded)
          {
            Var_50 = (MR_String) "wait_future";
            succeeded = (strcmp(Var_40, Var_50) == 0);
            if (succeeded)
            {
              succeeded = (WaitArgs_26 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                FutureVar_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WaitArgs_26, (MR_Integer) 0))));
                Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), WaitArgs_26, (MR_Integer) 1))));
                succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  ConsumedVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
                  Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
                  succeeded = (Var_42 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word PushedWaitPairsTail_32;
        MR_Word UnPushedWaitGoalsTail_33;
        MR_Word STATE_VARIABLE_SpecInfo_43_43;
        MR_Integer ArgPos_34;

        transform_hlds__dep_par_conj__find_relevant_pushable_wait_goals_8_p_0(Goals_15, PredProcId_2, CallVars_3, &PushedWaitPairsTail_32, &UnPushedWaitGoalsTail_33, HeadVar__6_6, STATE_VARIABLE_SpecInfo_0_7, &STATE_VARIABLE_SpecInfo_43_43);
        succeeded = mercury__list__index1_of_first_occurrence_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), CallVars_3, ((MR_Box) (ConsumedVar_31)), &ArgPos_34);
        if (succeeded)
        {
          MR_Word IsWorthPushing_35;

          transform_hlds__dep_par_conj__should_we_push_6_p_0(PredProcId_2, ArgPos_34, (MR_Integer) 0, &IsWorthPushing_35, STATE_VARIABLE_SpecInfo_43_43, STATE_VARIABLE_SpecInfo_8);
          switch (IsWorthPushing_35) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *HeadVar__4_4 = PushedWaitPairsTail_32;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnPushedWaitGoalsTail_33));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word PushedWaitPair_36;

                {
                  PushedWaitPair_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), PushedWaitPair_36, 0) = ((MR_Box) (FutureVar_30));
                  MR_hl_field(MR_mktag(0), PushedWaitPair_36, 1) = ((MR_Box) (ConsumedVar_31));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PushedWaitPair_36));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PushedWaitPairsTail_32));
                }
                *HeadVar__5_5 = UnPushedWaitGoalsTail_33;
              }
              break;
          }
        }
        else
        {
          *HeadVar__4_4 = PushedWaitPairsTail_32;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (UnPushedWaitGoalsTail_33));
          }
          *STATE_VARIABLE_SpecInfo_8 = STATE_VARIABLE_SpecInfo_43_43;
        }
      }
      else
      {
        *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__6_6 = HeadVar__1_1;
        *STATE_VARIABLE_SpecInfo_8 = STATE_VARIABLE_SpecInfo_0_7;
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_6_p_0(
  MR_Word PredProcId_7,
  MR_Integer ArgPos_8,
  MR_Word PushOp_9,
  MR_Word * IsWorthPushing_10,
  MR_Word STATE_VARIABLE_SpecInfo_0_20,
  MR_Word * STATE_VARIABLE_SpecInfo_21)
{
  {
    MR_bool succeeded;
    MR_Word Pushability0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 7))));
    MR_Word ProcPushMap0_13;
    MR_Box conv0_ProcPushMap0_13;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]), Pushability0_12, ((MR_Box) (PredProcId_7)), &conv0_ProcPushMap0_13);
    if (succeeded)
    {
      ProcPushMap0_13 = ((MR_Word) (conv0_ProcPushMap0_13));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word KnownWorthPushing_14;
      MR_Box conv1_KnownWorthPushing_14;

      succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0), ProcPushMap0_13, ArgPos_8, &conv1_KnownWorthPushing_14);
      if (succeeded)
      {
        KnownWorthPushing_14 = ((MR_Word) (conv1_KnownWorthPushing_14));
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        *IsWorthPushing_10 = KnownWorthPushing_14;
        *STATE_VARIABLE_SpecInfo_21 = STATE_VARIABLE_SpecInfo_0_20;
      }
      else
      {
        MR_Word ProcPushMap_15;
        MR_Word Pushability_16;
        MR_Word InitialModuleInfo_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 2))));
        MR_Word ProcInfo_75;
        MR_Word HeadVars_76;
        MR_Word Var_77;
        MR_Word Goal_78;
        MR_Box conv2_Var_77;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_38;
        MR_Word Var_39;
        MR_Word Var_40;

        hlds__hlds_module__module_info_proc_info_3_p_0(InitialModuleInfo_74, PredProcId_7, &ProcInfo_75);
        hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_75, &HeadVars_76);
        mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), HeadVars_76, ArgPos_8, &conv2_Var_77);
        Var_77 = ((MR_Word) (conv2_Var_77));
        hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_75, &Goal_78);
        switch (PushOp_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word CostAfterSignal_80;

              transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(Var_77, Goal_78, (MR_Integer) 0, &CostAfterSignal_80);
              switch (CostAfterSignal_80) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *IsWorthPushing_10 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_test\'/5", (MR_String) "not_seen_signal");
                    return;
                  }
                  break;
                case (MR_Integer) 2:
                  *IsWorthPushing_10 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *IsWorthPushing_10 = (MR_Integer) 0;
                  break;
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word CostBeforeWait_79;

              transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(Var_77, Goal_78, &CostBeforeWait_79);
              *IsWorthPushing_10 = ((&transform_hlds__dep_par_conj_vector_common_12[4 + CostBeforeWait_79]))->transform_hlds__dep_par_conj__vector_common_type_12_0__vct_12_f_0;
            }
            break;
        }
        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0), ArgPos_8, ((MR_Box) (*IsWorthPushing_10)), ProcPushMap0_13, &ProcPushMap_15);
        mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]), ((MR_Box) (PredProcId_7)), ((MR_Box) (ProcPushMap_15)), Pushability0_12, &Pushability_16);
        Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 0))));
        Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 1))));
        Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 2))));
        Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 3))));
        Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 4))));
        Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 5))));
        Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 6))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_SpecInfo_21 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_35));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_36));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_37));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_38));
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_39));
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_40));
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Pushability_16));
        }
      }
    }
    else
    {
      MR_Word InitialModuleInfo_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 2))));
      MR_Word Globals_18;
      MR_Word AlwaysSpecialize_19;
      MR_Word ProcPushMap_25;
      MR_Word Pushability_26;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;

      hlds__hlds_module__module_info_get_globals_2_p_0(InitialModuleInfo_17, &Globals_18);
      libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 432, &AlwaysSpecialize_19);
      switch (AlwaysSpecialize_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          transform_hlds__dep_par_conj__should_we_push_test_5_p_0(PredProcId_7, ArgPos_8, PushOp_9, IsWorthPushing_10, STATE_VARIABLE_SpecInfo_0_20);
          break;
        case (MR_Integer) 1:
          *IsWorthPushing_10 = (MR_Integer) 0;
          break;
      }
      ProcPushMap_25 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0), ((MR_Box) (ArgPos_8)), ((MR_Box) (*IsWorthPushing_10)));
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]), ((MR_Box) (PredProcId_7)), ((MR_Box) (ProcPushMap_25)), Pushability0_12, &Pushability_26);
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 0))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 1))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 2))));
      Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 3))));
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 4))));
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 5))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SpecInfo_0_20, (MR_Integer) 6))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_SpecInfo_21 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Pushability_26));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_test_5_p_0(
  MR_Word PredProcId_6,
  MR_Integer ArgPos_7,
  MR_Word PushOp_8,
  MR_Word * IsWorthPushing_9,
  MR_Word SpecInfo_10)
{
  {
    MR_Word InitialModuleInfo_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), SpecInfo_10, (MR_Integer) 2))));
    MR_Word ProcInfo_12;
    MR_Word HeadVars_13;
    MR_Word Var_14;
    MR_Word Goal_15;
    MR_Box conv0_Var_14;

    hlds__hlds_module__module_info_proc_info_3_p_0(InitialModuleInfo_11, PredProcId_6, &ProcInfo_12);
    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_12, &HeadVars_13);
    mercury__list__det_index1_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), HeadVars_13, ArgPos_7, &conv0_Var_14);
    Var_14 = ((MR_Word) (conv0_Var_14));
    hlds__hlds_pred__proc_info_get_goal_2_p_0(ProcInfo_12, &Goal_15);
    switch (PushOp_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word CostAfterSignal_17;

          transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(Var_14, Goal_15, (MR_Integer) 0, &CostAfterSignal_17);
          switch (CostAfterSignal_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *IsWorthPushing_9 = (MR_Integer) 1;
              break;
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_test\'/5", (MR_String) "not_seen_signal");
                return;
              }
              break;
            case (MR_Integer) 2:
              *IsWorthPushing_9 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *IsWorthPushing_9 = (MR_Integer) 0;
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word CostBeforeWait_16;

          transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(Var_14, Goal_15, &CostBeforeWait_16);
          *IsWorthPushing_9 = ((&transform_hlds__dep_par_conj_vector_common_12[0 + CostBeforeWait_16]))->transform_hlds__dep_par_conj__vector_common_type_12_0__vct_12_f_0;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_4_p_0_2(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__std_util__negate_1_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_4_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__should_we_push_signal__2817__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(
  MR_Word Var_5,
  MR_Word Goal_6,
  MR_Word STATE_VARIABLE_Signal_0_53,
  MR_Word * STATE_VARIABLE_Signal_54)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_6, (MR_Integer) 1))));
    MR_Word Detism_10;
    MR_Word NumSolutions_12;
    MR_Word _CanFail_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    Detism_10 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_9);
    parse_tree__prog_data__determinism_components_3_p_0(Detism_10, &_CanFail_11, &NumSolutions_12);
    switch (NumSolutions_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 3:
      case (MR_Integer) 2:
      case (MR_Integer) 1:
        {
          MR_Word NonLocals_13;

          NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_9);
          switch (MR_tag((MR_Word) GoalExpr_8)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word SubGoal_49 = (MR_Word) ((MR_Word) (GoalExpr_8));

                switch (STATE_VARIABLE_Signal_0_53) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *STATE_VARIABLE_Signal_54 = STATE_VARIABLE_Signal_0_53;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word next_value_of_Goal_6 = SubGoal_49;

                      // direct tailcall eliminated
                      ;
                      Goal_6 = next_value_of_Goal_6;
                      continue;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_13, Var_5);
                if (succeeded)
                  transform_hlds__dep_par_conj__seen_produced_var_2_p_0(STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
                else
                  *STATE_VARIABLE_Signal_54 = STATE_VARIABLE_Signal_0_53;
              }
              break;
            case (MR_Integer) 2:
              {
                succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_13, Var_5);
                if (succeeded)
                  transform_hlds__dep_par_conj__seen_produced_var_2_p_0(STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
                else
                  transform_hlds__dep_par_conj__seen_nontrivial_cost_2_p_0(STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_13, Var_5);
                    if (succeeded)
                      switch (STATE_VARIABLE_Signal_0_53) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *STATE_VARIABLE_Signal_54 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 2:
                          *STATE_VARIABLE_Signal_54 = STATE_VARIABLE_Signal_0_53;
                          break;
                      }
                    else
                      transform_hlds__dep_par_conj__seen_nontrivial_cost_2_p_0(STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ConjType_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Conjuncts_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));

                    switch (ConjType_37) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        transform_hlds__dep_par_conj__should_we_push_signal_in_par_conj_5_p_0(Var_5, Conjuncts_38, STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
                        break;
                      case (MR_Integer) 0:
                        transform_hlds__dep_par_conj__should_we_push_signal_in_plain_conj_4_p_0(Var_5, Conjuncts_38, STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Disjuncts_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));

                    transform_hlds__dep_par_conj__should_we_push_signal_in_disj_4_p_0(Var_5, Disjuncts_39, STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SwitchVar_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                    MR_Word Cases_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));

                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (Var_5)), ((MR_Box) (SwitchVar_40)));
                    if (succeeded)
                    {
                      MR_Word Var_73;
                      MR_Word Var_76;

                      {
                        Var_76 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[2]));
                        MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (transform_hlds__dep_par_conj__should_we_push_signal_4_p_0_1));
                        MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (STATE_VARIABLE_Signal_0_53));
                        MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        Var_73 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_11[0]));
                        MR_hl_field(MR_mktag(0), Var_73, 1) = ((MR_Box) (transform_hlds__dep_par_conj__should_we_push_signal_4_p_0_2));
                        MR_hl_field(MR_mktag(0), Var_73, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), Var_73, 3) = ((MR_Box) (Var_76));
                      }
                      mercury__require__expect_3_p_0(Var_73, (MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_signal\'/4", (MR_String) "not seen switch var");
                      *STATE_VARIABLE_Signal_54 = STATE_VARIABLE_Signal_0_53;
                    }
                    else
                      transform_hlds__dep_par_conj__should_we_push_signal_in_cases_4_p_0(Var_5, Cases_42, STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 1))));
                    MR_Word SubGoal_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 2))));
                    MR_Word TermVar_51;
                    MR_Word Var_58;

                    succeeded = ((((MR_tag((MR_Word) Reason_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      TermVar_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 1))));
                      Var_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_50, (MR_Integer) 2))) & (MR_Integer) 3);
                      succeeded = (Var_58 == (MR_Integer) 1);
                    }
                    if (succeeded)
                    {
                      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (Var_5)), ((MR_Box) (TermVar_51)));
                      if (succeeded)
                        transform_hlds__dep_par_conj__seen_produced_var_2_p_0(STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
                      else
                        *STATE_VARIABLE_Signal_54 = STATE_VARIABLE_Signal_0_53;
                    }
                    else
                    {
                      MR_Word next_value_of_Goal_6 = SubGoal_88;

                      // direct tailcall eliminated
                      ;
                      Goal_6 = next_value_of_Goal_6;
                      continue;
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word Then_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 3))));
                    MR_Word Else_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_8, (MR_Integer) 4))));
                    MR_Word SignalThen_47;
                    MR_Word SignalElse_48;

                    transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(Var_5, Then_45, STATE_VARIABLE_Signal_0_53, &SignalThen_47);
                    transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(Var_5, Else_46, STATE_VARIABLE_Signal_0_53, &SignalElse_48);
                    switch (SignalThen_47) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        *STATE_VARIABLE_Signal_54 = SignalElse_48;
                        break;
                      case (MR_Integer) 0:
                        switch (SignalElse_48) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 0:
                            *STATE_VARIABLE_Signal_54 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_signal\'/4", (MR_String) "ITE is not mode safe");
                              return;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 2:
                        switch (SignalElse_48) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                            *STATE_VARIABLE_Signal_54 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 0:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_signal\'/4", (MR_String) "ITE is not mode safe");
                              return;
                            }
                            break;
                          case (MR_Integer) 3:
                            *STATE_VARIABLE_Signal_54 = (MR_Integer) 3;
                            break;
                        }
                        break;
                      case (MR_Integer) 3:
                        switch (SignalElse_48) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 1:
                          case (MR_Integer) 2:
                          case (MR_Integer) 3:
                            *STATE_VARIABLE_Signal_54 = (MR_Integer) 3;
                            break;
                          case (MR_Integer) 0:
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_signal\'/4", (MR_String) "ITE is not mode safe");
                              return;
                            }
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_signal\'/4", (MR_String) "shorthand");
                    return;
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        *STATE_VARIABLE_Signal_54 = (MR_Integer) 1;
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_plain_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Signal_0_3,
  MR_Word * STATE_VARIABLE_Signal_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Signal_4 = STATE_VARIABLE_Signal_0_3;
    else
    {
      MR_Word Conjunct_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Conjuncts_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Signal_15_15;

      transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(HeadVar__1_1, Conjunct_10, STATE_VARIABLE_Signal_0_3, &STATE_VARIABLE_Signal_15_15);
      switch (STATE_VARIABLE_Signal_15_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_Signal_4 = STATE_VARIABLE_Signal_15_15;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__2_2 = Conjuncts_11;
            MR_Word next_value_of_STATE_VARIABLE_Signal_0_3 = STATE_VARIABLE_Signal_15_15;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            STATE_VARIABLE_Signal_0_3 = next_value_of_STATE_VARIABLE_Signal_0_3;
            continue;
          }
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_Signal_4 = STATE_VARIABLE_Signal_15_15;
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Integer) 1;
  else
  {
    MR_Word FirstCase_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word LaterCases_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word FirstGoal_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FirstCase_8, (MR_Integer) 2))));
    MR_Word SignalFirst_15;

    transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(HeadVar__1_1, FirstGoal_14, HeadVar__3_3, &SignalFirst_15);
    switch (SignalFirst_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Signal0_16;

          transform_hlds__dep_par_conj__should_we_push_signal_in_cases_4_p_0(HeadVar__1_1, LaterCases_9, HeadVar__3_3, &Signal0_16);
          switch (SignalFirst_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *HeadVar__4_4 = Signal0_16;
              break;
            case (MR_Integer) 2:
              switch (Signal0_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *HeadVar__4_4 = SignalFirst_15;
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_signal_in_cases\'/4", (MR_String) "The program doesn\'t seem mode correct");
                    return;
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  *HeadVar__4_4 = Signal0_16;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        *HeadVar__4_4 = SignalFirst_15;
        break;
      case (MR_Integer) 3:
        *HeadVar__4_4 = SignalFirst_15;
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Integer) 1;
  else
  {
    MR_Word FirstGoal_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word LaterGoals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word SignalFirst_12;

    transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(HeadVar__1_1, FirstGoal_8, HeadVar__3_3, &SignalFirst_12);
    switch (SignalFirst_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word Signal0_13;

          transform_hlds__dep_par_conj__should_we_push_signal_in_disj_4_p_0(HeadVar__1_1, LaterGoals_9, HeadVar__3_3, &Signal0_13);
          switch (SignalFirst_12) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *HeadVar__4_4 = Signal0_13;
              break;
            case (MR_Integer) 2:
              switch (Signal0_13) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *HeadVar__4_4 = SignalFirst_12;
                  break;
                case (MR_Integer) 0:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_signal_in_disj\'/4", (MR_String) "The program doesn\'t seem mode correct");
                    return;
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  *HeadVar__4_4 = Signal0_13;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 0:
        *HeadVar__4_4 = SignalFirst_12;
        break;
      case (MR_Integer) 3:
        *HeadVar__4_4 = SignalFirst_12;
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_par_conj_5_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dep_par_conj__seen_more_signal_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_par_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_FinalSignal_0_4,
  MR_Word * STATE_VARIABLE_FinalSignal_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FinalSignal_5 = STATE_VARIABLE_FinalSignal_0_4;
    else
    {
      MR_Word Conjunct_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Conjuncts_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ConjunctSignal_17;
      MR_Word Var_27;

      transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(HeadVar__1_1, Conjunct_12, HeadVar__3_3, &ConjunctSignal_17);
      switch (ConjunctSignal_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_FinalSignal_5 = (MR_Integer) 1;
          break;
        case (MR_Integer) 0:
          transform_hlds__dep_par_conj__should_we_push_signal_in_par_conj_5_p_0(HeadVar__1_1, Conjuncts_13, HeadVar__3_3, STATE_VARIABLE_FinalSignal_0_4, STATE_VARIABLE_FinalSignal_5);
          break;
        case (MR_Integer) 2:
          if ((Conjuncts_13 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_FinalSignal_5 = (MR_Integer) 2;
          else
            *STATE_VARIABLE_FinalSignal_5 = (MR_Integer) 3;
          break;
        case (MR_Integer) 3:
          *STATE_VARIABLE_FinalSignal_5 = (MR_Integer) 3;
          break;
      }
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_27, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[2]));
        MR_hl_field(MR_mktag(0), Var_27, 1) = ((MR_Box) (transform_hlds__dep_par_conj__should_we_push_signal_in_par_conj_5_p_0_1));
        MR_hl_field(MR_mktag(0), Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_27, 3) = ((MR_Box) (STATE_VARIABLE_FinalSignal_0_4));
        MR_hl_field(MR_mktag(0), Var_27, 4) = ((MR_Box) (*STATE_VARIABLE_FinalSignal_5));
      }
      mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_signal_in_par_conj\'/5", (MR_String) "final signal goes backwards");
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__seen_nontrivial_cost_2_p_0(
  MR_Word STATE_VARIABLE_Signal_0_4,
  MR_Word * STATE_VARIABLE_Signal_5)
{
  switch (STATE_VARIABLE_Signal_0_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Signal_5 = STATE_VARIABLE_Signal_0_4;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Signal_5 = (MR_Integer) 3;
      break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__seen_produced_var_2_p_0(
  MR_Word STATE_VARIABLE_Signal_0_4,
  MR_Word * STATE_VARIABLE_Signal_5)
{
  switch (STATE_VARIABLE_Signal_0_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_Signal_5 = (MR_Integer) 2;
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_Signal_5 = STATE_VARIABLE_Signal_0_4;
      break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_wait_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Wait_6;

    transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Wait_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Wait_6));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(
  MR_Word Var_4,
  MR_Word Goal_5,
  MR_Word * Wait_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0))));
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1))));
    MR_Word NonLocals_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    NonLocals_9 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_8);
    switch (MR_tag((MR_Word) GoalExpr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_59 = (MR_Word) ((MR_Word) (GoalExpr_7));
          MR_Word next_value_of_Goal_5 = SubGoal_59;

          // direct tailcall eliminated
          ;
          Goal_5 = next_value_of_Goal_5;
          continue;
        }
        break;
      case (MR_Integer) 1:
        {
          succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_9, Var_4);
          if (succeeded)
            *Wait_6 = (MR_Integer) 2;
          else
            *Wait_6 = (MR_Integer) 0;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BuiltinStatus_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), GoalExpr_7, (MR_Integer) 3))) & (MR_Integer) 1);

          switch (BuiltinStatus_18) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_9, Var_4);
                if (succeeded)
                  *Wait_6 = (MR_Integer) 2;
                else
                  *Wait_6 = (MR_Integer) 0;
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_9, Var_4);
                if (succeeded)
                  *Wait_6 = (MR_Integer) 3;
                else
                  *Wait_6 = (MR_Integer) 1;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_9, Var_4);
              if (succeeded)
                *Wait_6 = (MR_Integer) 3;
              else
                *Wait_6 = (MR_Integer) 1;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));

              switch (ConjType_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Waits_35;
                    MR_Word Var_67;

                    {
                      Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_67, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_5[3]));
                      MR_hl_field(MR_mktag(0), Var_67, 1) = ((MR_Box) (transform_hlds__dep_par_conj__should_we_push_wait_3_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_67, 3) = ((MR_Box) (Var_4));
                    }
                    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_before_wait_0), Var_67, Conjuncts_34, &Waits_35);
                    succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_before_wait_0), ((MR_Box) ((MR_Integer) 3)), Waits_35);
                    if (succeeded)
                      *Wait_6 = (MR_Integer) 3;
                    else
                    {
                      succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_before_wait_0), ((MR_Box) ((MR_Integer) 1)), Waits_35);
                      if (succeeded)
                        *Wait_6 = (MR_Integer) 1;
                      else
                      {
                        succeeded = mercury__list__member_2_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_before_wait_0), ((MR_Box) ((MR_Integer) 2)), Waits_35);
                        if (succeeded)
                          *Wait_6 = (MR_Integer) 2;
                        else
                          *Wait_6 = (MR_Integer) 0;
                      }
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  transform_hlds__dep_par_conj__should_we_push_wait_in_conj_3_p_0(Var_4, Conjuncts_34, Wait_6);
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word Detism_37;
              MR_Word SolnCount_39;
              MR_Word Var_38;

              Detism_37 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo_8);
              parse_tree__prog_data__determinism_components_3_p_0(Detism_37, &Var_38, &SolnCount_39);
              switch (SolnCount_39) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 3:
                  if ((Disjuncts_36 == (MR_Word) ((MR_Unsigned) 0U)))
                    *Wait_6 = (MR_Integer) 0;
                  else
                  {
                    MR_Word FirstDisjunct_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Disjuncts_36, (MR_Integer) 0))));
                    MR_Word WaitFirst_42;

                    transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(Var_4, FirstDisjunct_40, &WaitFirst_42);
                    switch (WaitFirst_42) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        *Wait_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 2:
                      case (MR_Integer) 3:
                        *Wait_6 = WaitFirst_42;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 1:
                case (MR_Integer) 0:
                  transform_hlds__dep_par_conj__should_we_push_wait_in_conj_3_p_0(Var_4, Disjuncts_36, Wait_6);
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word Cases_45 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));

              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (Var_4)), ((MR_Box) (SwitchVar_43)));
              if (succeeded)
                *Wait_6 = (MR_Integer) 2;
              else
                transform_hlds__dep_par_conj__should_we_push_wait_in_cases_4_p_0(Var_4, Cases_45, (MR_Integer) 0, Wait_6);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 1))));
              MR_Word SubGoal_71 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Var_65;

              succeeded = ((((MR_tag((MR_Word) Reason_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_60, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_60, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_65 == (MR_Integer) 1);
              }
              if (succeeded)
                *Wait_6 = (MR_Integer) 0;
              else
              {
                MR_Word next_value_of_Goal_5 = SubGoal_71;

                // direct tailcall eliminated
                ;
                Goal_5 = next_value_of_Goal_5;
                continue;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Cond_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 2))));
              MR_Word Then_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 3))));
              MR_Word Else_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr_7, (MR_Integer) 4))));
              MR_Word WaitCond_50;

              transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(Var_4, Cond_47, &WaitCond_50);
              switch (WaitCond_50) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word WaitThen_51;
                    MR_Word WaitElse_52;
                    MR_Word ThenSeen_53;
                    MR_Word ThenCost_54;
                    MR_Word ElseSeen_55;
                    MR_Word ElseCost_56;
                    MR_Word Seen_57;
                    MR_Word Cost_58;

                    transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(Var_4, Then_48, &WaitThen_51);
                    transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(Var_4, Else_49, &WaitElse_52);
                    ThenSeen_53 = ((&transform_hlds__dep_par_conj_vector_common_10[0 + WaitThen_51]))->transform_hlds__dep_par_conj__vector_common_type_10_0__vct_10_f_0;
                    ThenCost_54 = ((&transform_hlds__dep_par_conj_vector_common_10[0 + WaitThen_51]))->transform_hlds__dep_par_conj__vector_common_type_10_0__vct_10_f_1;
                    ElseSeen_55 = ((&transform_hlds__dep_par_conj_vector_common_10[4 + WaitElse_52]))->transform_hlds__dep_par_conj__vector_common_type_10_0__vct_10_f_0;
                    ElseCost_56 = ((&transform_hlds__dep_par_conj_vector_common_10[4 + WaitElse_52]))->transform_hlds__dep_par_conj__vector_common_type_10_0__vct_10_f_1;
                    mercury__bool__or_3_p_0(ThenSeen_53, ElseSeen_55, &Seen_57);
                    mercury__bool__or_3_p_0(ThenCost_54, ElseCost_56, &Cost_58);
                    switch (Seen_57) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        switch (Cost_58) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *Wait_6 = (MR_Integer) 0;
                            break;
                          case (MR_Integer) 1:
                            *Wait_6 = (MR_Integer) 1;
                            break;
                        }
                        break;
                      case (MR_Integer) 1:
                        switch (Cost_58) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *Wait_6 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 1:
                            *Wait_6 = (MR_Integer) 3;
                            break;
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  *Wait_6 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  *Wait_6 = WaitCond_50;
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_wait\'/3", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_wait_in_cases_4_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word SeenWait_3,
  MR_Word * CostBeforeWait_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (SeenWait_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *CostBeforeWait_4 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *CostBeforeWait_4 = (MR_Integer) 2;
          break;
      }
    else
    {
      MR_Word Case_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case_9, (MR_Integer) 2))));
      MR_Word CostBeforeWaitHead_16;

      transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(Var_1, Goal_15, &CostBeforeWaitHead_16);
      switch (CostBeforeWaitHead_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = Cases_10;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          *CostBeforeWait_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__2_2 = Cases_10;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            SeenWait_3 = (MR_Integer) 1;
            continue;
          }
          break;
        case (MR_Integer) 3:
          *CostBeforeWait_4 = (MR_Integer) 3;
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_wait_in_conj_3_p_0(
  MR_Word Var_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word CostBeforeWaitHead_9;

      transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(Var_1, Goal_6, &CostBeforeWaitHead_9);
      switch (CostBeforeWaitHead_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = Goals_7;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__3_3 = (MR_Integer) 2;
          break;
        case (MR_Integer) 3:
          *HeadVar__3_3 = (MR_Integer) 3;
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv14_Goal_14;
    MR_Word conv13_STATE_VARIABLE_VarSet_20;
    MR_Word conv12_STATE_VARIABLE_VarTypes_22;

    transform_hlds__dep_par_conj__insert_wait_after_goal_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv14_Goal_14, ((MR_Word) (wrapper_arg_4)), &conv13_STATE_VARIABLE_VarSet_20, ((MR_Word) (wrapper_arg_6)), &conv12_STATE_VARIABLE_VarTypes_22);
    *wrapper_arg_3 = ((MR_Box) (conv14_Goal_14));
    *wrapper_arg_5 = ((MR_Box) (conv13_STATE_VARIABLE_VarSet_20));
    *wrapper_arg_7 = ((MR_Box) (conv12_STATE_VARIABLE_VarTypes_22));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_Goal_14;
    MR_Word conv7_STATE_VARIABLE_VarSet_74;
    MR_Word conv6_STATE_VARIABLE_VarTypes_76;

    transform_hlds__dep_par_conj__insert_signal_in_goal_9_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_Goal_14, ((MR_Word) (wrapper_arg_4)), &conv7_STATE_VARIABLE_VarSet_74, ((MR_Word) (wrapper_arg_6)), &conv6_STATE_VARIABLE_VarTypes_76);
    *wrapper_arg_3 = ((MR_Box) (conv8_Goal_14));
    *wrapper_arg_5 = ((MR_Box) (conv7_STATE_VARIABLE_VarSet_74));
    *wrapper_arg_7 = ((MR_Box) (conv6_STATE_VARIABLE_VarTypes_76));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_STATE_VARIABLE_Goal_20;
    MR_Word conv1_STATE_VARIABLE_VarSet_22;
    MR_Word conv0_STATE_VARIABLE_VarTypes_24;

    transform_hlds__dep_par_conj__insert_wait_in_goal_for_proc_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_Goal_20, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_VarSet_22, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_VarTypes_24);
    *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_Goal_20));
    *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_VarSet_22));
    *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_VarTypes_24));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0(
  MR_Word ModuleInfo_12,
  MR_Word AllowSomePathsOnly_13,
  MR_Word SharedVars_14,
  MR_Word FutureMap_15,
  MR_Word InstMap_16,
  MR_Word STATE_VARIABLE_Goal_0_27,
  MR_Word * STATE_VARIABLE_Goal_28,
  MR_Word STATE_VARIABLE_VarSet_0_29,
  MR_Word * STATE_VARIABLE_VarSet_30,
  MR_Word STATE_VARIABLE_VarTypes_0_31,
  MR_Word * STATE_VARIABLE_VarTypes_32)
{
  {
    MR_bool succeeded;
    MR_Word Nonlocals_20;
    MR_Word NonlocalSharedVars_21;
    MR_Word WaitAfterVars_26;
    MR_Word STATE_VARIABLE_Goal_38_38;
    MR_Word STATE_VARIABLE_VarSet_39_39;
    MR_Word STATE_VARIABLE_VarTypes_40_40;

    Nonlocals_20 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(STATE_VARIABLE_Goal_0_27);
    parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Nonlocals_20, SharedVars_14, &NonlocalSharedVars_21);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonlocalSharedVars_21);
    if (succeeded)
    {
      STATE_VARIABLE_VarTypes_40_40 = STATE_VARIABLE_VarTypes_0_31;
      STATE_VARIABLE_VarSet_39_39 = STATE_VARIABLE_VarSet_0_29;
      STATE_VARIABLE_Goal_38_38 = STATE_VARIABLE_Goal_0_27;
    }
    else
    {
      MR_Word GoalInfo0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Goal_0_27, (MR_Integer) 1))));
      MR_Word InstMapDelta0_23;
      MR_Word ConsumedVarsList_24;
      MR_Word ProducedVarsList_25;
      MR_Word Var_33;
      MR_Word STATE_VARIABLE_Goal_34_34;
      MR_Word STATE_VARIABLE_VarSet_35_35;
      MR_Word STATE_VARIABLE_VarTypes_36_36;
      MR_Word Var_37;
      MR_Word IsProducedVar_83;
      MR_Word ProducedVars_84;
      MR_Word ConsumedVars_85;
      MR_Box conv5_STATE_VARIABLE_Goal_34_34;
      MR_Box conv4_STATE_VARIABLE_VarSet_35_35;
      MR_Box conv3_STATE_VARIABLE_VarTypes_36_36;
      MR_Box conv11_STATE_VARIABLE_Goal_38_38;
      MR_Box conv10_STATE_VARIABLE_VarSet_39_39;
      MR_Box conv9_STATE_VARIABLE_VarTypes_40_40;

      InstMapDelta0_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_22);
      {
        IsProducedVar_83 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), IsProducedVar_83, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_7[0]));
        MR_hl_field(MR_mktag(0), IsProducedVar_83, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_1));
        MR_hl_field(MR_mktag(0), IsProducedVar_83, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), IsProducedVar_83, 3) = ((MR_Box) (ModuleInfo_12));
        MR_hl_field(MR_mktag(0), IsProducedVar_83, 4) = ((MR_Box) (InstMap_16));
        MR_hl_field(MR_mktag(0), IsProducedVar_83, 5) = ((MR_Box) (InstMapDelta0_23));
      }
      parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IsProducedVar_83, NonlocalSharedVars_21, &ProducedVars_84, &ConsumedVars_85);
      ConsumedVarsList_24 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumedVars_85);
      ProducedVarsList_25 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducedVars_84);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_8[0]));
        MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_2));
        MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (ModuleInfo_12));
        MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (AllowSomePathsOnly_13));
        MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (FutureMap_15));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_33, ConsumedVarsList_24, ((MR_Box) (STATE_VARIABLE_Goal_0_27)), &conv5_STATE_VARIABLE_Goal_34_34, ((MR_Box) (STATE_VARIABLE_VarSet_0_29)), &conv4_STATE_VARIABLE_VarSet_35_35, ((MR_Box) (STATE_VARIABLE_VarTypes_0_31)), &conv3_STATE_VARIABLE_VarTypes_36_36);
      STATE_VARIABLE_Goal_34_34 = ((MR_Word) (conv5_STATE_VARIABLE_Goal_34_34));
      STATE_VARIABLE_VarSet_35_35 = ((MR_Word) (conv4_STATE_VARIABLE_VarSet_35_35));
      STATE_VARIABLE_VarTypes_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_VarTypes_36_36));
      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_3));
        MR_hl_field(MR_mktag(0), Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_37, 3) = ((MR_Box) (ModuleInfo_12));
        MR_hl_field(MR_mktag(0), Var_37, 4) = ((MR_Box) (FutureMap_15));
      }
      mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_37, ProducedVarsList_25, ((MR_Box) (STATE_VARIABLE_Goal_34_34)), &conv11_STATE_VARIABLE_Goal_38_38, ((MR_Box) (STATE_VARIABLE_VarSet_35_35)), &conv10_STATE_VARIABLE_VarSet_39_39, ((MR_Box) (STATE_VARIABLE_VarTypes_36_36)), &conv9_STATE_VARIABLE_VarTypes_40_40);
      STATE_VARIABLE_Goal_38_38 = ((MR_Word) (conv11_STATE_VARIABLE_Goal_38_38));
      STATE_VARIABLE_VarSet_39_39 = ((MR_Word) (conv10_STATE_VARIABLE_VarSet_39_39));
      STATE_VARIABLE_VarTypes_40_40 = ((MR_Word) (conv9_STATE_VARIABLE_VarTypes_40_40));
    }
    parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SharedVars_14, Nonlocals_20, &WaitAfterVars_26);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), WaitAfterVars_26);
    if (succeeded)
    {
      *STATE_VARIABLE_VarTypes_32 = STATE_VARIABLE_VarTypes_40_40;
      *STATE_VARIABLE_VarSet_30 = STATE_VARIABLE_VarSet_39_39;
      *STATE_VARIABLE_Goal_28 = STATE_VARIABLE_Goal_38_38;
    }
    else
    {
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Box conv17_STATE_VARIABLE_Goal_28;
      MR_Box conv16_STATE_VARIABLE_VarSet_30;
      MR_Box conv15_STATE_VARIABLE_VarTypes_32;

      {
        Var_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_proc_body_11_p_0_4));
        MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModuleInfo_12));
        MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (FutureMap_15));
      }
      Var_42 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), WaitAfterVars_26);
      mercury__list__foldl3_8_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_41, Var_42, ((MR_Box) (STATE_VARIABLE_Goal_38_38)), &conv17_STATE_VARIABLE_Goal_28, ((MR_Box) (STATE_VARIABLE_VarSet_39_39)), &conv16_STATE_VARIABLE_VarSet_30, ((MR_Box) (STATE_VARIABLE_VarTypes_40_40)), &conv15_STATE_VARIABLE_VarTypes_32);
      *STATE_VARIABLE_Goal_28 = ((MR_Word) (conv17_STATE_VARIABLE_Goal_28));
      *STATE_VARIABLE_VarSet_30 = ((MR_Word) (conv16_STATE_VARIABLE_VarSet_30));
      *STATE_VARIABLE_VarTypes_32 = ((MR_Word) (conv15_STATE_VARIABLE_VarTypes_32));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjs_in_proc_9_p_0(
  MR_Word PredId_10,
  MR_Integer ProcId_11,
  MR_Word IgnoreVars_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_ProcsToScan_0_41,
  MR_Word * STATE_VARIABLE_ProcsToScan_42,
  MR_Word STATE_VARIABLE_TSStringTable_0_43,
  MR_Word * STATE_VARIABLE_TSStringTable_44)
{
  {
    MR_Word InstMap0_22;
    MR_Word Globals_23;
    MR_Word AllowSomePathsOnly_24;
    MR_Word GoalBeforeDepParConj_26;
    MR_Word PredProcId_38;
    MR_Word STATE_VARIABLE_PredInfo_45_45;
    MR_Word STATE_VARIABLE_ProcInfo_46_46;
    MR_Word STATE_VARIABLE_VarSet_48_48;
    MR_Word STATE_VARIABLE_VarTypes_49_49;
    MR_Word STATE_VARIABLE_ModuleInfo_51_51;
    MR_Word STATE_VARIABLE_SyncInfo_52_52;
    MR_Word STATE_VARIABLE_Goal_54_54;
    MR_Word STATE_VARIABLE_SyncInfo_55_55;
    MR_Word STATE_VARIABLE_VarSet_56_56;
    MR_Word STATE_VARIABLE_VarTypes_57_57;
    MR_Word STATE_VARIABLE_ProcInfo_83_83;
    MR_Word STATE_VARIABLE_ProcInfo_84_84;
    MR_Word STATE_VARIABLE_ProcInfo_85_85;
    MR_Word Var_25;
    MR_Word Var_27;

    hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_39, PredId_10, ProcId_11, &STATE_VARIABLE_PredInfo_45_45, &STATE_VARIABLE_ProcInfo_46_46);
    hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_46_46, &GoalBeforeDepParConj_26);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(STATE_VARIABLE_ProcInfo_46_46, &STATE_VARIABLE_VarSet_48_48);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(STATE_VARIABLE_ProcInfo_46_46, &STATE_VARIABLE_VarTypes_49_49);
    hlds__hlds_pred__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ProcInfo_46_46, STATE_VARIABLE_ModuleInfo_0_39, &InstMap0_22);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &Globals_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_23, (MR_Integer) 433, &AllowSomePathsOnly_24);
    hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_51_51, &Var_25);
    {
      PredProcId_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_38, 0) = ((MR_Box) (PredId_10));
      MR_hl_field(MR_mktag(0), PredProcId_38, 1) = ((MR_Box) (ProcId_11));
    }
    {
      STATE_VARIABLE_SyncInfo_52_52 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_52_52, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_51_51));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_52_52, 1) = ((MR_Box) (IgnoreVars_12));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_52_52, 2) = (MR_Box) ((MR_Unsigned) (AllowSomePathsOnly_24));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_52_52, 3) = ((MR_Box) (STATE_VARIABLE_VarSet_48_48));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_52_52, 4) = ((MR_Box) (STATE_VARIABLE_VarTypes_49_49));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_52_52, 5) = ((MR_Box) (PredProcId_38));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_52_52, 6) = ((MR_Box) (STATE_VARIABLE_TSStringTable_0_43));
    }
    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(GoalBeforeDepParConj_26, &STATE_VARIABLE_Goal_54_54, InstMap0_22, &Var_27, STATE_VARIABLE_SyncInfo_52_52, &STATE_VARIABLE_SyncInfo_55_55);
    STATE_VARIABLE_VarSet_56_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_55_55, (MR_Integer) 3))));
    STATE_VARIABLE_VarTypes_57_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_55_55, (MR_Integer) 4))));
    *STATE_VARIABLE_TSStringTable_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_55_55, (MR_Integer) 6))));
    hlds__hlds_pred__proc_info_set_varset_3_p_0(STATE_VARIABLE_VarSet_56_56, STATE_VARIABLE_ProcInfo_46_46, &STATE_VARIABLE_ProcInfo_83_83);
    hlds__hlds_pred__proc_info_set_vartypes_3_p_0(STATE_VARIABLE_VarTypes_57_57, STATE_VARIABLE_ProcInfo_83_83, &STATE_VARIABLE_ProcInfo_84_84);
    hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_54_54, STATE_VARIABLE_ProcInfo_84_84, &STATE_VARIABLE_ProcInfo_85_85);
    transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_p_0(PredId_10, ProcId_11, STATE_VARIABLE_PredInfo_45_45, STATE_VARIABLE_ProcInfo_85_85, STATE_VARIABLE_ModuleInfo_51_51, STATE_VARIABLE_ModuleInfo_40);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ProcsToScan_42 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PredProcId_38));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ProcsToScan_0_41));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_13,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15)
{
  {
    MR_Word STATE_VARIABLE_ProcInfo_17_17;
    MR_Word STATE_VARIABLE_ProcInfo_19_19;
    MR_Word STATE_VARIABLE_ModuleInfo_20_20;
    MR_Word STATE_VARIABLE_PredInfo_21_21;
    MR_Word Var_22;
    MR_Word STATE_VARIABLE_PredInfo_23_23;

    hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_0_13, &STATE_VARIABLE_ProcInfo_17_17);
    check_hlds__mode_util__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_17_17, &STATE_VARIABLE_ProcInfo_19_19, STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_ModuleInfo_20_20);
    hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_8, STATE_VARIABLE_ProcInfo_19_19, STATE_VARIABLE_PredInfo_0_12, &STATE_VARIABLE_PredInfo_21_21);
    {
      Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (PredId_7));
      MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) (ProcId_8));
    }
    check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_20_20, Var_22, STATE_VARIABLE_PredInfo_21_21, &STATE_VARIABLE_PredInfo_23_23);
    hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_7, STATE_VARIABLE_PredInfo_23_23, STATE_VARIABLE_ModuleInfo_20_20, STATE_VARIABLE_ModuleInfo_15);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjs_in_cases_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_SyncInfo_0_4,
  MR_Word * STATE_VARIABLE_SyncInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SyncInfo_5 = STATE_VARIABLE_SyncInfo_0_4;
  }
  else
  {
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_10, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_SyncInfo_23_23;
    MR_Word Var_20;

    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Goal0_18, &Goal_19, HeadVar__3_3, &Var_20, STATE_VARIABLE_SyncInfo_0_4, &STATE_VARIABLE_SyncInfo_23_23);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(MR_mktag(0), Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(MR_mktag(0), Case_12, 2) = ((MR_Box) (Goal_19));
    }
    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_cases_5_p_0(Cases0_11, &Cases_13, HeadVar__3_3, STATE_VARIABLE_SyncInfo_23_23, STATE_VARIABLE_SyncInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Cases_13));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjs_in_disj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_SyncInfo_0_4,
  MR_Word * STATE_VARIABLE_SyncInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SyncInfo_5 = STATE_VARIABLE_SyncInfo_0_4;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_SyncInfo_19_19;
    MR_Word _InstMap_16;

    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Goal0_10, &Goal_12, HeadVar__3_3, &_InstMap_16, STATE_VARIABLE_SyncInfo_0_4, &STATE_VARIABLE_SyncInfo_19_19);
    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_disj_5_p_0(Goals0_11, &Goals_13, HeadVar__3_3, STATE_VARIABLE_SyncInfo_19_19, STATE_VARIABLE_SyncInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjs_in_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_InstMap_0_3,
  MR_Word STATE_VARIABLE_SyncInfo_0_4,
  MR_Word * STATE_VARIABLE_SyncInfo_5)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_SyncInfo_5 = STATE_VARIABLE_SyncInfo_0_4;
  }
  else
  {
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_InstMap_19_19;
    MR_Word STATE_VARIABLE_SyncInfo_20_20;

    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_InstMap_0_3, &STATE_VARIABLE_InstMap_19_19, STATE_VARIABLE_SyncInfo_0_4, &STATE_VARIABLE_SyncInfo_20_20);
    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_conj_5_p_0(Goals0_11, &Goals_13, STATE_VARIABLE_InstMap_19_19, STATE_VARIABLE_SyncInfo_20_20, STATE_VARIABLE_SyncInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals_13));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(
  MR_Word Goal0_7,
  MR_Word * Goal_8,
  MR_Word InstMap0_9,
  MR_Word * InstMap_10,
  MR_Word STATE_VARIABLE_SyncInfo_0_64,
  MR_Word * STATE_VARIABLE_SyncInfo_65)
{
  {
    MR_bool succeeded;
    MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 0))));
    MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));

    switch (MR_tag((MR_Word) GoalExpr0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal0_33 = (MR_Word) ((MR_Word) (GoalExpr0_12));
          MR_Word SubGoal_34;
          MR_Word GoalExpr_82;
          MR_Word Var_35;

          transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(SubGoal0_33, &SubGoal_34, InstMap0_9, &Var_35, STATE_VARIABLE_SyncInfo_0_64, STATE_VARIABLE_SyncInfo_65);
          GoalExpr_82 = (MR_Word) ((MR_Word) (SubGoal_34));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *Goal_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_82));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *Goal_8 = Goal0_7;
          *STATE_VARIABLE_SyncInfo_65 = STATE_VARIABLE_SyncInfo_0_64;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              *Goal_8 = Goal0_7;
              *STATE_VARIABLE_SyncInfo_65 = STATE_VARIABLE_SyncInfo_0_64;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Goals_16;
              MR_Word STATE_VARIABLE_SyncInfo_75_75;

              transform_hlds__dep_par_conj__sync_dep_par_conjs_in_conj_5_p_0(Goals0_15, &Goals_16, InstMap0_9, STATE_VARIABLE_SyncInfo_0_64, &STATE_VARIABLE_SyncInfo_75_75);
              switch (ConjType_14) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Goal0InstmapDelta_17;
                    MR_Word Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal0_7, (MR_Integer) 1))));

                    Goal0InstmapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_76);
                    succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(Goal0InstmapDelta_17);
                    if (succeeded)
                    {
                      hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_16, GoalInfo0_13, Goal_8);
                      *STATE_VARIABLE_SyncInfo_65 = STATE_VARIABLE_SyncInfo_75_75;
                    }
                    else
                      transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0(Goals_16, GoalInfo0_13, Goal_8, InstMap0_9, STATE_VARIABLE_SyncInfo_75_75, STATE_VARIABLE_SyncInfo_65);
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_16, GoalInfo0_13, Goal_8);
                    *STATE_VARIABLE_SyncInfo_65 = STATE_VARIABLE_SyncInfo_75_75;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word GoalExpr_18;
              MR_Word Goals0_78 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Goals_79;

              transform_hlds__dep_par_conj__sync_dep_par_conjs_in_disj_5_p_0(Goals0_78, &Goals_79, InstMap0_9, STATE_VARIABLE_SyncInfo_0_64, STATE_VARIABLE_SyncInfo_65);
              {
                GoalExpr_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), GoalExpr_18, 1) = ((MR_Box) (Goals_79));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_18));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word CanFail_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Cases_22;
              MR_Word GoalExpr_80;

              transform_hlds__dep_par_conj__sync_dep_par_conjs_in_cases_5_p_0(Cases0_21, &Cases_22, InstMap0_9, STATE_VARIABLE_SyncInfo_0_64, STATE_VARIABLE_SyncInfo_65);
              {
                GoalExpr_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_80, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), GoalExpr_80, 1) = ((MR_Box) (Var_19));
                MR_hl_field(MR_mktag(3), GoalExpr_80, 2) = (MR_Box) ((MR_Unsigned) (CanFail_20));
                MR_hl_field(MR_mktag(3), GoalExpr_80, 3) = ((MR_Box) (Cases_22));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_80));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word SubGoal0_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word FGT_38;

              succeeded = ((((MR_tag((MR_Word) Reason_36)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_36, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                FGT_38 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Reason_36, (MR_Integer) 2))) & (MR_Integer) 3);
                switch (FGT_38) {
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
                *Goal_8 = Goal0_7;
                *STATE_VARIABLE_SyncInfo_65 = STATE_VARIABLE_SyncInfo_0_64;
              }
              else
              {
                MR_Word GoalExpr_83;
                MR_Word SubGoal_84;
                MR_Word Var_39;

                transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(SubGoal0_88, &SubGoal_84, InstMap0_9, &Var_39, STATE_VARIABLE_SyncInfo_0_64, STATE_VARIABLE_SyncInfo_65);
                {
                  GoalExpr_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), GoalExpr_83, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(MR_mktag(3), GoalExpr_83, 1) = ((MR_Box) (Reason_36));
                  MR_hl_field(MR_mktag(3), GoalExpr_83, 2) = ((MR_Box) (SubGoal_84));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  *Goal_8 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_83));
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word QuantVars_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 1))));
              MR_Word Cond0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 2))));
              MR_Word Then0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 3))));
              MR_Word Else0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), GoalExpr0_12, (MR_Integer) 4))));
              MR_Word Cond_27;
              MR_Word InstMap1_28;
              MR_Word Then_29;
              MR_Word Else_31;
              MR_Word STATE_VARIABLE_SyncInfo_70_70;
              MR_Word STATE_VARIABLE_SyncInfo_71_71;
              MR_Word GoalExpr_81;
              MR_Word Var_30;
              MR_Word Var_32;

              transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Cond0_24, &Cond_27, InstMap0_9, &InstMap1_28, STATE_VARIABLE_SyncInfo_0_64, &STATE_VARIABLE_SyncInfo_70_70);
              transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Then0_25, &Then_29, InstMap1_28, &Var_30, STATE_VARIABLE_SyncInfo_70_70, &STATE_VARIABLE_SyncInfo_71_71);
              transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Else0_26, &Else_31, InstMap0_9, &Var_32, STATE_VARIABLE_SyncInfo_71_71, STATE_VARIABLE_SyncInfo_65);
              {
                GoalExpr_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), GoalExpr_81, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), GoalExpr_81, 1) = ((MR_Box) (QuantVars_23));
                MR_hl_field(MR_mktag(3), GoalExpr_81, 2) = ((MR_Box) (Cond_27));
                MR_hl_field(MR_mktag(3), GoalExpr_81, 3) = ((MR_Box) (Then_29));
                MR_hl_field(MR_mktag(3), GoalExpr_81, 4) = ((MR_Box) (Else_31));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_81));
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.sync_dep_par_conjs_in_goal\'/6", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    hlds__goal_util__update_instmap_3_p_0(*Goal_8, InstMap0_9, InstMap_10);
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__480__2_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__480__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Nonlocals_6;
    MR_Word conv0_InstMapDelta_7;

    transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Nonlocals_6, &conv0_InstMapDelta_7);
    *wrapper_arg_2 = ((MR_Box) (conv1_Nonlocals_6));
    *wrapper_arg_3 = ((MR_Box) (conv0_InstMapDelta_7));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0(
  MR_Word Conjuncts_7,
  MR_Word GoalInfo_8,
  MR_Word * NewGoal_9,
  MR_Word InstMap_10,
  MR_Word STATE_VARIABLE_SyncInfo_0_27,
  MR_Word * STATE_VARIABLE_SyncInfo_28)
{
  {
    MR_bool succeeded;
    MR_Word ModuleInfo0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_0_27, (MR_Integer) 0))));
    MR_Word IgnoreVars_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_0_27, (MR_Integer) 1))));
    MR_Word AllowSomePathsOnly_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_0_27, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word VarSet0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_0_27, (MR_Integer) 3))));
    MR_Word VarTypes0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_0_27, (MR_Integer) 4))));
    MR_Word PredProcId_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_0_27, (MR_Integer) 5))));
    MR_Word TSStringTable0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_SyncInfo_0_27, (MR_Integer) 6))));
    MR_Word SharedVars0_19;
    MR_Word SharedVars_20;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Nonlocals_45;
    MR_Word InstMapDeltas_46;
    MR_Word Var_49;

    mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[5]), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[7]), Conjuncts_7, &Nonlocals_45, &InstMapDeltas_46);
    Var_49 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
    transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0(ModuleInfo0_12, (MR_Integer) 0, Nonlocals_45, InstMap_10, InstMapDeltas_46, Var_49, &SharedVars0_19);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_2));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (IgnoreVars_13));
    }
    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_3));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Var_30));
    }
    SharedVars_20 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_29, SharedVars0_19);
    succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SharedVars_20);
    if (succeeded)
    {
      MR_Word Globals_21;
      MR_Word ParLoopControl_22;

      hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo0_12, &Globals_21);
      libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 708, &ParLoopControl_22);
      switch (ParLoopControl_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ModuleInfo_23;
            MR_Word DependencyInfo_66;
            MR_Word Ordering_67;
            MR_Word SCC_68;
            MR_Word CallsToSameSCC_69;
            MR_Word Conjuncts_70;
            MR_Word GoalExpr_71;

            hlds__hlds_module__module_info_dependency_info_2_p_0(ModuleInfo0_12, &DependencyInfo_66);
            Ordering_67 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DependencyInfo_66);
            transform_hlds__dep_par_conj__find_procs_scc_3_p_0(Ordering_67, PredProcId_17, &SCC_68);
            CallsToSameSCC_69 = hlds__goal_util__goal_list_calls_proc_in_set_2_f_0(Conjuncts_7, SCC_68);
            succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CallsToSameSCC_69);
            if (succeeded)
            {
              Conjuncts_70 = Conjuncts_7;
              ModuleInfo_23 = ModuleInfo0_12;
            }
            else
              transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0(SCC_68, VarTypes0_16, InstMap_10, Conjuncts_7, &Conjuncts_70, ModuleInfo0_12, &ModuleInfo_23);
            {
              GoalExpr_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), GoalExpr_71, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), GoalExpr_71, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), GoalExpr_71, 2) = ((MR_Box) (Conjuncts_70));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *NewGoal_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (GoalExpr_71));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_8));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_SyncInfo_28 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_23));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (IgnoreVars_13));
              MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (AllowSomePathsOnly_14));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarSet0_15));
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (VarTypes0_16));
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (PredProcId_17));
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (TSStringTable0_18));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_32;

            {
              Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), Var_32, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), Var_32, 2) = ((MR_Box) (Conjuncts_7));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *NewGoal_9 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_8));
            }
            *STATE_VARIABLE_SyncInfo_28 = STATE_VARIABLE_SyncInfo_0_27;
          }
          break;
      }
    }
    else
    {
      MR_Word VarSet_24;
      MR_Word VarTypes_25;
      MR_Word TSStringTable_26;

      transform_hlds__dep_par_conj__sync_dep_par_conj_13_p_0(ModuleInfo0_12, AllowSomePathsOnly_14, SharedVars_20, Conjuncts_7, GoalInfo_8, NewGoal_9, InstMap_10, VarSet0_15, &VarSet_24, VarTypes0_16, &VarTypes_25, TSStringTable0_18, &TSStringTable_26);
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_SyncInfo_28 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo0_12));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (IgnoreVars_13));
        MR_hl_field(MR_mktag(0), base, 2) = (MR_Box) ((MR_Unsigned) (AllowSomePathsOnly_14));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (VarSet_24));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (VarTypes_25));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (PredProcId_17));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (TSStringTable_26));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dep_par_conj__changed_var_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__3438__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_SharedVars_0_6,
  MR_Word * STATE_VARIABLE_SharedVars_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_SharedVars_7 = STATE_VARIABLE_SharedVars_0_6;
    else
    {
      MR_Word Nonlocals_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word MoreNonlocals_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word InstMapDeltasB_22;
      MR_Word Filter_23;
      MR_Word UnboundNonlocals_26;
      MR_Word Changed_27;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_SharedVars_32_32;
      MR_Integer Var_33;
      MR_Word Left_43;
      MR_Word Right_44;
      MR_Word Var_45;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_SharedVars_0_6;

      mercury__list__det_split_list_4_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), HeadVar__2_2, HeadVar__5_5, &Left_43, &Right_44);
      Var_45 = mercury__list__det_tail_1_f_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Right_44);
      InstMapDeltasB_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Left_43, Var_45);
      {
        Filter_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Filter_23, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_5[0]));
        MR_hl_field(MR_mktag(0), Filter_23, 1) = ((MR_Box) (transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0_1));
        MR_hl_field(MR_mktag(0), Filter_23, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Filter_23, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Filter_23, 4) = ((MR_Box) (HeadVar__4_4));
      }
      UnboundNonlocals_26 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Filter_23, Nonlocals_17);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0_2));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (InstMapDeltasB_22));
      }
      Changed_27 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_31, UnboundNonlocals_26);
      parse_tree__set_of_var__union_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Changed_27, STATE_VARIABLE_SharedVars_0_6, &STATE_VARIABLE_SharedVars_32_32);
      Var_33 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_33;
      next_value_of_HeadVar__3_3 = MoreNonlocals_18;
      next_value_of_STATE_VARIABLE_SharedVars_0_6 = STATE_VARIABLE_SharedVars_32_32;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_SharedVars_0_6 = next_value_of_STATE_VARIABLE_SharedVars_0_6;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__find_procs_scc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * PredProcsSCC_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.find_procs_scc\'/3", (MR_String) "Couldn\'t find SCC for pred/proc id.");
        return;
      }
    else
    {
      MR_Word SCC_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SCCs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = mercury__set__member_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ((MR_Box) (HeadVar__2_2)), SCC_8);
      if (succeeded)
        *PredProcsSCC_3 = SCC_8;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = SCCs_9;

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
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__CallPredProcId_24 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__conv0_CallPredProcId_24));
    transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__succeeded = hlds__goal_util__goal_calls_2_p_0((env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17, (env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__CallPredProcId_24);
    if ((env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__succeeded)
      transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__commit_0) == 0)
      {
        mercury__set__member_2_p_1((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), &(env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__conv0_CallPredProcId_24, (env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__SCC_1, transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_3, env_ptr);
        (env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0(
  MR_Word SCC_1,
  MR_Word VarTypes_2,
  MR_Word InstMapBefore_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
{
  {
    struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s env;

    (env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__SCC_1 = SCC_1;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_0_6;
    }
    else
    {
      MR_Word Goals0_18;
      MR_Word Goals1_22;
      MR_Word InstMapBeforeGoals1_23;
      MR_Word Var_28;
      MR_Word Var_29;
      MR_Word STATE_VARIABLE_ModuleInfo_30_30;
      MR_Word Var_32;

      (env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      Goals0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17, (MR_Integer) 0))));
      Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17, (MR_Integer) 1))));
      Var_28 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_29);
      hlds__instmap__apply_instmap_delta_3_p_0(Var_28, InstMapBefore_3, &InstMapBeforeGoals1_23);
      transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0((env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__SCC_1, VarTypes_2, InstMapBeforeGoals1_23, Goals0_18, &Goals1_22, STATE_VARIABLE_ModuleInfo_0_6, &STATE_VARIABLE_ModuleInfo_30_30);
      transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_4(&env);
      if ((env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_22));
        }
        *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_30_30;
      }
      else
      {
        MR_Word MaybeGoals_25;

        transform_hlds__dep_par_conj__push_goal_into_conj_8_p_0(VarTypes_2, InstMapBefore_3, (env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17, InstMapBeforeGoals1_23, Goals1_22, &MaybeGoals_25, STATE_VARIABLE_ModuleInfo_30_30, STATE_VARIABLE_ModuleInfo_7);
        if ((MaybeGoals_25 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__5_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Goals1_22));
          }
        else
          *HeadVar__5_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoals_25, (MR_Integer) 0))));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__push_goal_into_conj_8_p_0(
  MR_Word VarTypes_1,
  MR_Word InstMapBeforeGoal_2,
  MR_Word Goal_3,
  MR_Word InstMapBeforePivotGoal_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Goal_3));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
    }
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
  }
  else
  {
    MR_Word PivotGoal_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Globals_26;
    MR_Word FullyStrict_27;
    MR_Word CanReorderGoals_28;
    MR_Word STATE_VARIABLE_ModuleInfo_39_39;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &Globals_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 191, &FullyStrict_27);
    hlds__goal_util__can_reorder_goals_9_p_0(VarTypes_1, FullyStrict_27, InstMapBeforeGoal_2, Goal_3, InstMapBeforePivotGoal_4, PivotGoal_22, &CanReorderGoals_28, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_39_39);
    switch (CanReorderGoals_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_39_39;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PivotInstMapDelta_29;
          MR_Word InstMapBeforeGoalAfterPivot_30;
          MR_Word GoalInstMapDelta_31;
          MR_Word InstMapAfterPivotAndGoal_32;
          MR_Word MaybeGoals1_33;
          MR_Word Goals_35;
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PivotGoal_22, (MR_Integer) 1))));
          MR_Word Var_41;

          PivotInstMapDelta_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_40);
          hlds__instmap__apply_instmap_delta_3_p_0(PivotInstMapDelta_29, InstMapBeforeGoal_2, &InstMapBeforeGoalAfterPivot_30);
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1))));
          GoalInstMapDelta_31 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_41);
          hlds__instmap__apply_instmap_delta_3_p_0(GoalInstMapDelta_31, InstMapBeforeGoalAfterPivot_30, &InstMapAfterPivotAndGoal_32);
          transform_hlds__dep_par_conj__push_goal_into_conj_8_p_0(VarTypes_1, InstMapBeforeGoalAfterPivot_30, Goal_3, InstMapAfterPivotAndGoal_32, Goals0_23, &MaybeGoals1_33, STATE_VARIABLE_ModuleInfo_39_39, STATE_VARIABLE_ModuleInfo_8);
          if ((MaybeGoals1_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Goals_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Goals_35, 0) = ((MR_Box) (Goal_3));
              MR_hl_field(MR_mktag(1), Goals_35, 1) = ((MR_Box) (HeadVar__5_5));
            }
          else
          {
            MR_Word Goals1_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeGoals1_33, (MR_Integer) 0))));

            {
              Goals_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Goals_35, 0) = ((MR_Box) (PivotGoal_22));
              MR_hl_field(MR_mktag(1), Goals_35, 1) = ((MR_Box) (Goals1_34));
            }
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Goals_35));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conj_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_Goal_30;
    MR_Word conv11_STATE_VARIABLE_InstMap_32;
    MR_Word conv10_STATE_VARIABLE_VarSet_34;
    MR_Word conv9_STATE_VARIABLE_VarTypes_36;

    transform_hlds__dep_par_conj__sync_dep_par_conjunct_12_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv12_STATE_VARIABLE_Goal_30, ((MR_Word) (wrapper_arg_3)), &conv11_STATE_VARIABLE_InstMap_32, ((MR_Word) (wrapper_arg_5)), &conv10_STATE_VARIABLE_VarSet_34, ((MR_Word) (wrapper_arg_7)), &conv9_STATE_VARIABLE_VarTypes_36);
    *wrapper_arg_2 = ((MR_Box) (conv12_STATE_VARIABLE_Goal_30));
    *wrapper_arg_4 = ((MR_Box) (conv11_STATE_VARIABLE_InstMap_32));
    *wrapper_arg_6 = ((MR_Box) (conv10_STATE_VARIABLE_VarSet_34));
    *wrapper_arg_8 = ((MR_Box) (conv9_STATE_VARIABLE_VarTypes_36));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conj_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Goals_14;
    MR_Word conv3_STATE_VARIABLE_VarSet_40;
    MR_Word conv2_STATE_VARIABLE_VarTypes_42;
    MR_Word conv1_STATE_VARIABLE_FutureMap_44;
    MR_Word conv0_STATE_VARIABLE_TSStringTable_46;

    transform_hlds__dep_par_conj__allocate_future_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_Goals_14, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_VarSet_40, ((MR_Word) (wrapper_arg_5)), &conv2_STATE_VARIABLE_VarTypes_42, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_FutureMap_44, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_TSStringTable_46);
    *wrapper_arg_2 = ((MR_Box) (conv4_Goals_14));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_VarSet_40));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_VarTypes_42));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_FutureMap_44));
    *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_TSStringTable_46));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conj_13_p_0(
  MR_Word ModuleInfo_14,
  MR_Word AllowSomePathsOnly_15,
  MR_Word SharedVars_16,
  MR_Word Goals_17,
  MR_Word GoalInfo_18,
  MR_Word * NewGoal_19,
  MR_Word InstMap_20,
  MR_Word STATE_VARIABLE_VarSet_0_35,
  MR_Word * STATE_VARIABLE_VarSet_36,
  MR_Word STATE_VARIABLE_VarTypes_0_37,
  MR_Word * STATE_VARIABLE_VarTypes_38,
  MR_Word STATE_VARIABLE_TSStringTable_0_39,
  MR_Word * STATE_VARIABLE_TSStringTable_40)
{
  {
    MR_Word SharedVarsList_24;
    MR_Word AllocateFuturesGoals_25;
    MR_Word FutureMap_26;
    MR_Word AllocateFutures_27;
    MR_Word NewGoals_28;
    MR_Word LastGoal_30;
    MR_Word Conj_31;
    MR_Word NewGoal0_32;
    MR_Word Purity_33;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_VarSet_42_42;
    MR_Word STATE_VARIABLE_VarTypes_43_43;
    MR_Word Var_44;
    MR_Word Var_46;
    MR_Word Var_49;
    MR_Word Var_51;
    MR_Box conv8_STATE_VARIABLE_VarSet_42_42;
    MR_Box conv7_STATE_VARIABLE_VarTypes_43_43;
    MR_Box conv6_FutureMap_26;
    MR_Box conv5_STATE_VARIABLE_TSStringTable_40;
    MR_Box conv15_Var_29;
    MR_Box conv14_STATE_VARIABLE_VarSet_36;
    MR_Box conv13_STATE_VARIABLE_VarTypes_38;

    SharedVarsList_24 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SharedVars_16);
    {
      Var_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_conj_13_p_0_1));
      MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (ModuleInfo_14));
    }
    Var_44 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]));
    mercury__list__map_foldl4_11_p_1((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[3]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[4]), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0), Var_41, SharedVarsList_24, &AllocateFuturesGoals_25, ((MR_Box) (STATE_VARIABLE_VarSet_0_35)), &conv8_STATE_VARIABLE_VarSet_42_42, ((MR_Box) (STATE_VARIABLE_VarTypes_0_37)), &conv7_STATE_VARIABLE_VarTypes_43_43, ((MR_Box) (Var_44)), &conv6_FutureMap_26, ((MR_Box) (STATE_VARIABLE_TSStringTable_0_39)), &conv5_STATE_VARIABLE_TSStringTable_40);
    STATE_VARIABLE_VarSet_42_42 = ((MR_Word) (conv8_STATE_VARIABLE_VarSet_42_42));
    STATE_VARIABLE_VarTypes_43_43 = ((MR_Word) (conv7_STATE_VARIABLE_VarTypes_43_43));
    FutureMap_26 = ((MR_Word) (conv6_FutureMap_26));
    *STATE_VARIABLE_TSStringTable_40 = ((MR_Word) (conv5_STATE_VARIABLE_TSStringTable_40));
    mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AllocateFuturesGoals_25, &AllocateFutures_27);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_conj_13_p_0_2));
      MR_hl_field(MR_mktag(0), Var_46, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_46, 3) = ((MR_Box) (ModuleInfo_14));
      MR_hl_field(MR_mktag(0), Var_46, 4) = ((MR_Box) (AllowSomePathsOnly_15));
      MR_hl_field(MR_mktag(0), Var_46, 5) = ((MR_Box) (SharedVars_16));
      MR_hl_field(MR_mktag(0), Var_46, 6) = ((MR_Box) (FutureMap_26));
    }
    mercury__list__map_foldl3_9_p_1((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), Var_46, Goals_17, &NewGoals_28, ((MR_Box) (InstMap_20)), &conv15_Var_29, ((MR_Box) (STATE_VARIABLE_VarSet_42_42)), &conv14_STATE_VARIABLE_VarSet_36, ((MR_Box) (STATE_VARIABLE_VarTypes_43_43)), &conv13_STATE_VARIABLE_VarTypes_38);
    *STATE_VARIABLE_VarSet_36 = ((MR_Word) (conv14_STATE_VARIABLE_VarSet_36));
    *STATE_VARIABLE_VarTypes_38 = ((MR_Word) (conv13_STATE_VARIABLE_VarTypes_38));
    {
      Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), Var_49, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_49, 2) = ((MR_Box) (NewGoals_28));
    }
    {
      LastGoal_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), LastGoal_30, 0) = ((MR_Box) (Var_49));
      MR_hl_field(MR_mktag(0), LastGoal_30, 1) = ((MR_Box) (GoalInfo_18));
    }
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (LastGoal_30));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Conj_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AllocateFutures_27, Var_51);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_31, GoalInfo_18, &NewGoal0_32);
    Purity_33 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_18);
    switch (Purity_33) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        *NewGoal_19 = NewGoal0_32;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word Reason_34;
          MR_Word Var_53;

          {
            Reason_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Reason_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), Reason_34, 1) = (MR_Box) ((MR_Unsigned) (Purity_33));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Reason_34));
            MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) (NewGoal0_32));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *NewGoal_19 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_53));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (GoalInfo_18));
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____arg_pos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____arg_pos_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____arg_pos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____arg_pos_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____cost_before_wait_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____cost_before_wait_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_before_wait_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____cost_before_wait_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____done_par_procs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____done_par_procs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____done_par_procs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____done_par_procs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____future_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____future_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_var_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____future_var_pair_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_var_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____future_var_pair_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____maybe_spec_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____maybe_spec_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_spec_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____maybe_spec_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____maybe_worth_pushing_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____maybe_worth_pushing_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_worth_pushing_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____maybe_worth_pushing_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____new_par_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____new_par_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____new_par_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____new_par_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____par_proc_call_pattern_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____par_proc_call_pattern_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____par_proc_call_pattern_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____par_proc_call_pattern_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pending_par_procs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____pending_par_procs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pending_par_procs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____pending_par_procs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____proc_pushable_args_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____proc_pushable_args_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____proc_pushable_args_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____proc_pushable_args_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____push_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____push_op_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____push_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____push_op_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pushable_args_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____pushable_args_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pushable_args_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____pushable_args_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____rev_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____rev_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____rev_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____rev_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____spec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____spec_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____spec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____spec_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____sync_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____sync_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____sync_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____sync_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____ts_string_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____ts_string_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____ts_string_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____ts_string_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____wait_or_get_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____wait_or_get_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____wait_or_get_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____wait_or_get_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____waited_in_conjunct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____waited_in_conjunct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_in_conjunct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____waited_in_conjunct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__transform_hlds__dep_par_conj__init(void)
{
}

void mercury__transform_hlds__dep_par_conj__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_arg_pos_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_after_signal_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_before_wait_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_done_par_procs_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_map_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_spec_proc_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_pending_par_procs_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_proc_pushable_args_map_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_push_op_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_pushable_args_map_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_rev_proc_map_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_spec_info_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_sync_info_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_wait_or_get_pred_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_waited_in_conjunct_0);
	MR_register_type_ctor_info(&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_waited_on_all_success_paths_0);
}

void mercury__transform_hlds__dep_par_conj__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__transform_hlds__dep_par_conj__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module transform_hlds.dep_par_conj.
