/*
** Automatically generated from `dep_par_conj.m'
** by the Mercury compiler,
** version rotd-2024-02-08
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
#include "std_util.mih"
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
#include "check_hlds.inst_test.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_test.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.purity.mih"
#include "check_hlds.recompute_instmap_deltas.mih"
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
#include "hlds.hlds_proc_util.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.quantification.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_goal.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



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

struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s {
  MR_Word transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__SCC_1;
  MR_bool transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__succeeded;
  MR_Word transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17;
  jmp_buf transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__commit_0;
  MR_Word transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__CallPredProcId_24;
  MR_Box transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__conv0_CallPredProcId_24;
};

struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s {
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9;
  MR_bool transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_124;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_130;
  jmp_buf transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__commit_0;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__DoneParProc_38;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_121;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_16;
  MR_Box transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv1_Var_16;
  MR_Box transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv0_DoneParProc_38;
  jmp_buf transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__commit_1;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_32;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__PendingParProc_39;
  MR_Word transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_122;
  MR_Box transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv2_Var_32;
};


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_VA_PseudoTypeInfo_Struct0 transform_hlds__dep_par_conj____vpti_pred_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__instmap__type_ctor_info_instmap_0;

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj____vpti_pred_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_cost_after_signal_0[4];

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_cost_after_signal_0[4];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_cost_after_signal_0[4];

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_0;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_1;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_2;

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_cost_before_wait_0_3;

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_cost_before_wait_0[4];

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

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_maybe_worth_pushing_0[2];

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

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_push_op_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_push_op_0[2];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_push_op_0[2];

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0;

static const MR_FA_TypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_spec_info_0_0[8];

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_spec_info_0_0[8];

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_spec_info_0_0;

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_spec_info_0_0[1];

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_spec_info_0[1];

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_spec_info_0[1];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_spec_info_0[1];

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_sync_info_0_0[6];

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_sync_info_0_0[6];

static const MR_DuArgLocn transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_locns_sync_info_0_0[6];

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

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_wait_or_get_pred_0[2];

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

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_waited_on_all_success_paths_0[2];

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_waited_on_all_success_paths_0[2];

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_waited_on_all_success_paths_0[2];

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__3459__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__4_4,
  MR_Word LambdaHeadVar__1_30);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__should_we_push_signal__2824__1_2_p_0(
  MR_Word STATE_VARIABLE_Signal_0_53,
  MR_Word HeadVar__2_68);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_par_conj__1289__1_2_p_0(
  MR_Word HeadVar__3_3,
  MR_Word ChangedVars_25);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_plain_conj__1259__1_2_p_0(
  MR_Word HeadVar__3_3,
  MR_Word ChangedVars_24);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__487__2_2_p_0(
  MR_Word HeadVar__1_28,
  MR_Word HeadVar__2_34);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__487__1_2_p_0(
  MR_Word IgnoreVars_13,
  MR_Word HeadVar__2_36);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0(
  MR_Word HeadVar__1_1,
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
  MR_Word HeadVar__1_1,
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
  MR_Word HeadVar__1_1,
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
  MR_Word HeadVar__1_1,
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0(
  MR_Word HeadVar__1_1,
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
  MR_Word Goal_3,
  MR_Word Var_4);

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
  MR_Word VarTable_6,
  MR_Word HeadVar__3_3,
  MR_Word * WaitGoal_9);

static void MR_CALL 
transform_hlds__dep_par_conj__allocate_future_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word SharedVar_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_VarTable_0_37,
  MR_Word * STATE_VARIABLE_VarTable_38,
  MR_Word STATE_VARIABLE_FutureMap_0_39,
  MR_Word * STATE_VARIABLE_FutureMap_40,
  MR_Word STATE_VARIABLE_TSStringTable_0_41,
  MR_Word * STATE_VARIABLE_TSStringTable_42);

static void MR_CALL 
transform_hlds__dep_par_conj__make_future_name_var_and_goal_7_p_0(
  MR_String Name_8,
  MR_Word * FutureNameVar_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarTable_0_25,
  MR_Word * STATE_VARIABLE_VarTable_26,
  MR_Word STATE_VARIABLE_TSStringTable_0_27,
  MR_Word * STATE_VARIABLE_TSStringTable_28);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__we_have_seen_more_signal_2_p_0(
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
transform_hlds__dep_par_conj__map_arg_to_new_future_6_p_0(
  MR_Word HeadVars_7,
  MR_Integer FutureArg_8,
  MR_Word STATE_VARIABLE_FutureMap_0_17,
  MR_Word * STATE_VARIABLE_FutureMap_18,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_par_conj_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_par_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_plain_conj_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_plain_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FutureMap_9,
  MR_Word ProducedVar_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_70,
  MR_Word * STATE_VARIABLE_VarTable_71);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_after_goal_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FutureMap_9,
  MR_Word ProducedVar_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_15,
  MR_Word * STATE_VARIABLE_VarTable_16);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_goal_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word AllowSomePathsOnly_10,
  MR_Word FutureMap_11,
  MR_Word ConsumedVar_12,
  MR_Word STATE_VARIABLE_Goal_0_16,
  MR_Word * STATE_VARIABLE_Goal_17,
  MR_Word STATE_VARIABLE_VarTable_0_18,
  MR_Word * STATE_VARIABLE_VarTable_19);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_cases_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5,
  MR_Word * STATE_VARIABLE_WaitedOnAllSuccessPaths_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_disj_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5,
  MR_Word * STATE_VARIABLE_WaitedOnAllSuccessPaths_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_par_conj_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedInConjunct_0_5,
  MR_Word * STATE_VARIABLE_WaitedInConjunct_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_plain_conj_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VarTable_0_8,
  MR_Word * STATE_VARIABLE_VarTable_9);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word AllowSomePathsOnly_11,
  MR_Word FutureMap_12,
  MR_Word ConsumedVar_13,
  MR_Word * WaitedOnAllSuccessPaths_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_VarTable_0_90,
  MR_Word * STATE_VARIABLE_VarTable_91);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__var_in_nonlocals_2_p_0(
  MR_Word Goal_3,
  MR_Word Var_4);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_after_goal_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FutureMap_9,
  MR_Word ConsumedVar_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17);

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_before_goal_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FutureMap_9,
  MR_Word ConsumedVar_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17);

static void MR_CALL 
transform_hlds__dep_par_conj__make_wait_or_get_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word FutureVar_9,
  MR_Word ConsumedVar_10,
  MR_Word WaitOrGetPred_11,
  MR_Word * WaitGoal_12);

static MR_Word MR_CALL 
transform_hlds__dep_par_conj__should_inline_par_builtin_calls_1_f_0(
  MR_Word ModuleInfo_3);

static void MR_CALL 
transform_hlds__dep_par_conj__join_branches_3_p_0(
  MR_Word WaitedA_4,
  MR_Word WaitedB_5,
  MR_Word * Waited_6);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word AllowSomePathsOnly_12,
  MR_Word SharedVars_13,
  MR_Word FutureMap_14,
  MR_Word STATE_VARIABLE_Goal_0_26,
  MR_Word * STATE_VARIABLE_Goal_27,
  MR_Word STATE_VARIABLE_InstMap_0_28,
  MR_Word * STATE_VARIABLE_InstMap_29,
  MR_Word STATE_VARIABLE_VarTable_0_30,
  MR_Word * STATE_VARIABLE_VarTable_31);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_proc_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ProcsToScan_0_20,
  MR_Word * STATE_VARIABLE_ProcsToScan_21,
  MR_Word STATE_VARIABLE_TSStringTable_0_22,
  MR_Word * STATE_VARIABLE_TSStringTable_23);

static void MR_CALL 
transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_115_121_110_99_95_100_101_112_95_112_97_114_95_99_111_110_106_115_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_9_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ProcsToScan_0_20,
  MR_Word * STATE_VARIABLE_ProcsToScan_21,
  MR_Word STATE_VARIABLE_TSStringTable_0_22,
  MR_Word * STATE_VARIABLE_TSStringTable_23);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_ProcsToScan_0_18,
  MR_Word * STATE_VARIABLE_ProcsToScan_19,
  MR_Word STATE_VARIABLE_TSStringTable_0_20,
  MR_Word * STATE_VARIABLE_TSStringTable_21);

static void MR_CALL 
transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_3_p_0_2(
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
transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_113_117_101_115_116_101_100_95_115_112_101_99_105_97_108_105_122_101_100_95_112_97_114_95_112_114_111_99_115_95_95_91_49_93_95_48_11_p_0(
  MR_Word STATE_VARIABLE_PendingParProcs_0_22,
  MR_Word STATE_VARIABLE_Pushability_0_23,
  MR_Word STATE_VARIABLE_DoneParProcs_0_24,
  MR_Word InitialModuleInfo_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_RevProcMap_0_27,
  MR_Word * STATE_VARIABLE_RevProcMap_28,
  MR_Word STATE_VARIABLE_TSStringTable_0_29,
  MR_Word * STATE_VARIABLE_TSStringTable_30);

static void MR_CALL 
transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_113_117_101_115_116_101_100_95_115_112_101_99_105_97_108_105_122_101_100_95_112_97_114_95_112_114_111_99_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_113_117_101_115_116_101_100_95_115_112_101_99_105_97_108_105_122_101_100_95_112_97_114_95_112_114_111_99_95_95_91_49_93_95_48_15_p_0(
  MR_Word CallPattern_17,
  MR_Word NewProc_18,
  MR_Word STATE_VARIABLE_PendingParProcs_0_54,
  MR_Word * STATE_VARIABLE_PendingParProcs_55,
  MR_Word STATE_VARIABLE_Pushability_0_56,
  MR_Word * STATE_VARIABLE_Pushability_57,
  MR_Word DoneParProcs_21,
  MR_Word InitialModuleInfo_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_58,
  MR_Word * STATE_VARIABLE_ModuleInfo_59,
  MR_Word STATE_VARIABLE_RevProcMap_0_60,
  MR_Word * STATE_VARIABLE_RevProcMap_61,
  MR_Word STATE_VARIABLE_TSStringTable_0_62,
  MR_Word * STATE_VARIABLE_TSStringTable_63);

static void MR_CALL 
transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_121_110_99_95_100_101_112_95_112_97_114_95_99_111_110_106_115_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_10_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word IgnoreVars_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_ProcsToScan_0_45,
  MR_Word * STATE_VARIABLE_ProcsToScan_46,
  MR_Word STATE_VARIABLE_TSStringTable_0_47,
  MR_Word * STATE_VARIABLE_TSStringTable_48);

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

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_4(
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
  MR_Word STATE_VARIABLE_SyncInfo_0_25,
  MR_Word * STATE_VARIABLE_SyncInfo_26);

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
  MR_Word VarTable_2,
  MR_Word InstMapBefore_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7);

static void MR_CALL 
transform_hlds__dep_par_conj__push_goal_into_conj_8_p_0(
  MR_Word VarTable_1,
  MR_Word InstMapBeforeGoal_2,
  MR_Word Goal_3,
  MR_Word InstMapBeforePivotGoal_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_ModuleInfo_0_7,
  MR_Word * STATE_VARIABLE_ModuleInfo_8);

static void MR_CALL 
transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_p_0(
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word STATE_VARIABLE_PredInfo_0_12,
  MR_Word STATE_VARIABLE_ProcInfo_0_13,
  MR_Word STATE_VARIABLE_ModuleInfo_0_14,
  MR_Word * STATE_VARIABLE_ModuleInfo_15);

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
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_PendingParProcs_0_42,
  MR_Word * STATE_VARIABLE_PendingParProcs_43,
  MR_Word STATE_VARIABLE_Pushability_0_44,
  MR_Word * STATE_VARIABLE_Pushability_45,
  MR_Word STATE_VARIABLE_RevProcMap_0_46,
  MR_Word * STATE_VARIABLE_RevProcMap_47);

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
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0(
  MR_Word FutureArgs_7,
  MR_Word CallPattern_8,
  MR_Word OrigPPId_9,
  MR_Word * MaybeSpecProc_10,
  MR_Word STATE_VARIABLE_SpecInfo_0_27,
  MR_Word * STATE_VARIABLE_SpecInfo_28);

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
  MR_Word STATE_VARIABLE_SpecInfo_0_21,
  MR_Word * STATE_VARIABLE_SpecInfo_22);

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

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_plain_conj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_Signal_0_3,
  MR_Word * STATE_VARIABLE_Signal_4);

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
transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word AllowSomePathsOnly_11,
  MR_Word SharedVars_12,
  MR_Word FutureMap_13,
  MR_Word InstMap_14,
  MR_Word STATE_VARIABLE_Goal_0_24,
  MR_Word * STATE_VARIABLE_Goal_25,
  MR_Word STATE_VARIABLE_VarTable_0_26,
  MR_Word * STATE_VARIABLE_VarTable_27);

static void MR_CALL 
transform_hlds__dep_par_conj__make_ts_string_table_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2,
  MR_Word STATE_VARIABLE_Map_0_3,
  MR_Word * STATE_VARIABLE_Map_4);

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


static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_1[11][2];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_2[10][3];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_3[4][1];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_4[2][7];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_5[2][11];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_6[1][10];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_7[6][6];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_9[6][5];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_10[2][4];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_12[3][12];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_13[1][13];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_14[1][9];

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_15[1][14];


struct transform_hlds__dep_par_conj__vector_common_type_8_0_s {
  const MR_Word transform_hlds__dep_par_conj__vector_common_type_8_0__vct_8_f_0;
  const MR_Word transform_hlds__dep_par_conj__vector_common_type_8_0__vct_8_f_1;
};

static /* final */ const struct transform_hlds__dep_par_conj__vector_common_type_8_0_s transform_hlds__dep_par_conj_vector_common_8[8];

struct transform_hlds__dep_par_conj__vector_common_type_11_0_s {
  const MR_Word transform_hlds__dep_par_conj__vector_common_type_11_0__vct_11_f_0;
};

static /* final */ const struct transform_hlds__dep_par_conj__vector_common_type_11_0_s transform_hlds__dep_par_conj_vector_common_11[4];



static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_1[11][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_2[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   7 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   8 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(3, &transform_hlds__dep_par_conj_scalar_common_3[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(1, &transform_hlds__dep_par_conj_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dep_par_conj_scalar_common_1[7])))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_2[10][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_2[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_1[2])),
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_1[2]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[1])),
    ((MR_Box) (transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[1])),
    ((MR_Box) (transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_7[5])),
    ((MR_Box) (transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_3[4][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { ((MR_Box) (MR_mkword(1, &transform_hlds__dep_par_conj_scalar_common_3[0]))) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "dep_par_conj transformation")) },
  /* row   3 */
  { ((MR_Box) ((MR_Integer) 0)) },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_4[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_5[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_allow_some_paths_only_waits_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_7[6][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_before_wait_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_9[6][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_after_signal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_after_signal_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj____vpti_pred_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_10[2][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&transform_hlds__dep_par_conj____vpti_pred_0))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dep_par_conj_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dep_par_conj_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(1, &transform_hlds__dep_par_conj_scalar_common_1[8])))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_12[3][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_allow_some_paths_only_waits_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_waited_on_all_success_paths_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_13[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_allow_some_paths_only_waits_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_14[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__dep_par_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0))
  },
};

static /* final */ const MR_Box transform_hlds__dep_par_conj_scalar_common_15[1][14] = {
  /* row   0 */
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
};


static /* final */ const struct transform_hlds__dep_par_conj__vector_common_type_8_0_s transform_hlds__dep_par_conj_vector_common_8[8] = {
  /* row   0 */
  {
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  /* row   1 */
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  /* row   2 */
  {
    (MR_Integer) 1,
    (MR_Integer) 0
  },
  /* row   3 */
  {
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  /* row   4 */
  {
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  /* row   5 */
  {
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  /* row   6 */
  {
    (MR_Integer) 1,
    (MR_Integer) 0
  },
  /* row   7 */
  {
    (MR_Integer) 1,
    (MR_Integer) 1
  },
};

static /* final */ const struct transform_hlds__dep_par_conj__vector_common_type_11_0_s transform_hlds__dep_par_conj_vector_common_11[4] = {
  /* row   0 */   { (MR_Integer) 0 },
  /* row   1 */   { (MR_Integer) 0 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 transform_hlds__dep_par_conj__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
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
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__instmap__type_ctor_info_instmap_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0) }
};

static const MR_VA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj____vpti_pred_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 1,
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 transform_hlds__dep_par_conj__list__pti_list_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
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
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0) }
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____arg_pos_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____arg_pos_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "arg_pos",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_cost_after_signal_0[4] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "cost_after_signal",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_cost_after_signal_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_cost_after_signal_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_cost_after_signal_0,

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

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_cost_before_wait_0[4] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____cost_before_wait_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____cost_before_wait_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "cost_before_wait",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_cost_before_wait_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_cost_before_wait_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_cost_before_wait_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____done_par_procs_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____done_par_procs_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "done_par_procs",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____future_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____future_map_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "future_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_future_var_pair_0_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_future_var_pair_0_0 };

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_future_var_pair_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_future_var_pair_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_future_var_pair_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_future_var_pair_0_0 };

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_future_var_pair_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____future_var_pair_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____future_var_pair_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "future_var_pair",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_future_var_pair_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_future_var_pair_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_future_var_pair_0,

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

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_maybe_spec_proc_0_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_maybe_spec_proc_0_0 };

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_maybe_spec_proc_0_1[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_maybe_spec_proc_0_1 };

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_maybe_spec_proc_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_maybe_spec_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_maybe_spec_proc_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____maybe_spec_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____maybe_spec_proc_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "maybe_spec_proc",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_maybe_spec_proc_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_maybe_spec_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_maybe_spec_proc_0,

};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_maybe_worth_pushing_0_0 = {
  (MR_String) "worth_pushing",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_maybe_worth_pushing_0_1 = {
  (MR_String) "not_worth_pushing",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_maybe_worth_pushing_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____maybe_worth_pushing_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____maybe_worth_pushing_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "maybe_worth_pushing",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_maybe_worth_pushing_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_maybe_worth_pushing_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_maybe_worth_pushing_0,

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

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_new_par_proc_0_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_new_par_proc_0_0 };

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_new_par_proc_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_new_par_proc_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_new_par_proc_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_new_par_proc_0_0 };

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_new_par_proc_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____new_par_proc_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____new_par_proc_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "new_par_proc",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_new_par_proc_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_new_par_proc_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_new_par_proc_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
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

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_par_proc_call_pattern_0_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_par_proc_call_pattern_0_0 };

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_par_proc_call_pattern_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_par_proc_call_pattern_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_par_proc_call_pattern_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_par_proc_call_pattern_0_0 };

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_par_proc_call_pattern_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____par_proc_call_pattern_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____par_proc_call_pattern_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "par_proc_call_pattern",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_par_proc_call_pattern_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_par_proc_call_pattern_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_par_proc_call_pattern_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__list__ti_list_1pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&transform_hlds__dep_par_conj__pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0) }
};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_pending_par_procs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____pending_par_procs_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____pending_par_procs_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "pending_par_procs",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__list__ti_list_1pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_proc_pushable_args_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____proc_pushable_args_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____proc_pushable_args_map_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "proc_pushable_args_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_push_op_0_0 = {
  (MR_String) "push_wait",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_push_op_0_1 = {
  (MR_String) "push_signal",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_push_op_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____push_op_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____push_op_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "push_op",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_push_op_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_push_op_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_push_op_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____pushable_args_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____pushable_args_map_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "pushable_args_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____rev_proc_map_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____rev_proc_map_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "rev_proc_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_spec_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__list__ti_list_1pair__ti_pair_2transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2builtin__type_ctor_info_int_0transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0)
};

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_spec_info_0_0[8] = {
  (MR_String) "spec_done_procs",
  (MR_String) "spec_rev_proc_map",
  (MR_String) "spec_initial_module",
  (MR_String) "spec_ppid",
  (MR_String) "spec_var_table",
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

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_spec_info_0_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_spec_info_0_0 };

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_spec_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_spec_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_spec_info_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_spec_info_0_0 };

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_spec_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_spec_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____spec_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____spec_info_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "spec_info",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_spec_info_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_spec_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_spec_info_0,

};

static const MR_FA_TypeInfo_Struct1 transform_hlds__dep_par_conj__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&transform_hlds__dep_par_conj__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_sync_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_allow_some_paths_only_waits_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
  (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0)
};

static const MR_ConstString transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_names_sync_info_0_0[6] = {
  (MR_String) "sync_module_info",
  (MR_String) "sync_ignore_vars",
  (MR_String) "sync_allow_some_paths_only",
  (MR_String) "sync_var_table",
  (MR_String) "sync_this_proc",
  (MR_String) "sync_ts_string_table"
};

static const MR_DuArgLocn transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_locns_sync_info_0_0[6] = {
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
  }
};

static const MR_DuFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_sync_info_0_0 = {
  (MR_String) "sync_info",
  INT16_C(6),
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

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_sync_info_0_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_sync_info_0_0 };

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_sync_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_sync_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_sync_info_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_sync_info_0_0 };

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_sync_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_sync_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____sync_info_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____sync_info_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "sync_info",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_sync_info_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_sync_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_sync_info_0,

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
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
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

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_ts_string_table_0_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_ts_string_table_0_0 };

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_ts_string_table_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_ts_string_table_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_ts_string_table_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_ts_string_table_0_0 };

static const MR_Integer transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_ts_string_table_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____ts_string_table_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____ts_string_table_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "ts_string_table",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_ts_string_table_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_ts_string_table_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_ts_string_table_0,

};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_wait_or_get_pred_0_0 = {
  (MR_String) "wait_pred",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_wait_or_get_pred_0_1 = {
  (MR_String) "get_pred",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_wait_or_get_pred_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____wait_or_get_pred_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____wait_or_get_pred_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "wait_or_get_pred",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_wait_or_get_pred_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_wait_or_get_pred_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_wait_or_get_pred_0,

};

static const MR_PseudoTypeInfo transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__field_types_waited_in_conjunct_0_0[1] = { (MR_PseudoTypeInfo) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_waited_on_all_success_paths_0) };

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

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_waited_in_conjunct_0_0[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_waited_in_conjunct_0_1 };

static const MR_DuFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_waited_in_conjunct_0_1[1] = { &transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_functor_desc_waited_in_conjunct_0_0 };

static const MR_DuPtagLayout transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_waited_in_conjunct_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_waited_in_conjunct_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_stag_ordered_waited_in_conjunct_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____waited_in_conjunct_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____waited_in_conjunct_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "waited_in_conjunct",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_name_ordered_waited_in_conjunct_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__du_ptag_ordered_waited_in_conjunct_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_waited_in_conjunct_0,

};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_waited_on_all_success_paths_0_0 = {
  (MR_String) "waited_on_all_success_paths",
  INT32_C(0)
};

static const MR_EnumFunctorDesc transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_functor_desc_waited_on_all_success_paths_0_1 = {
  (MR_String) "not_waited_on_all_success_paths",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_waited_on_all_success_paths_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0_10001)),
  ((MR_Box) (transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0_10001)),
  (MR_String) "transform_hlds.dep_par_conj",
  (MR_String) "waited_on_all_success_paths",
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_name_ordered_waited_on_all_success_paths_0 },
  { transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__enum_ordinal_ordered_waited_on_all_success_paths_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__functor_number_map_waited_on_all_success_paths_0,

};

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__3459__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__4_4,
  MR_Word LambdaHeadVar__1_30)
{
  MR_bool succeeded;
  MR_Word VarInst_25;

  hlds__instmap__instmap_lookup_var_3_p_0(HeadVar__4_4, LambdaHeadVar__1_30, &VarInst_25);
  succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(HeadVar__1_1, VarInst_25);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__should_we_push_signal__2824__1_2_p_0(
  MR_Word STATE_VARIABLE_Signal_0_53,
  MR_Word HeadVar__2_68)
{
  MR_bool succeeded = (STATE_VARIABLE_Signal_0_53 == HeadVar__2_68);

  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_par_conj__1289__1_2_p_0(
  MR_Word HeadVar__3_3,
  MR_Word ChangedVars_25)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_25, HeadVar__3_3);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_plain_conj__1259__1_2_p_0(
  MR_Word HeadVar__3_3,
  MR_Word ChangedVars_24)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ChangedVars_24, HeadVar__3_3);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__487__2_2_p_0(
  MR_Word HeadVar__1_28,
  MR_Word HeadVar__2_34)
{
  MR_bool succeeded;

  succeeded = mercury__std_util__isnt_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), HeadVar__1_28, ((MR_Box) (HeadVar__2_34)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__487__1_2_p_0(
  MR_Word IgnoreVars_13,
  MR_Word HeadVar__2_36)
{
  MR_bool succeeded;

  succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IgnoreVars_13, HeadVar__2_36);
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0(
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
transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_in_conjunct_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
    MR_Word Var_11 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
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

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____waited_in_conjunct_0_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____wait_or_get_pred_0_0(
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
transform_hlds__dep_par_conj____Unify____wait_or_get_pred_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____sync_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;
        MR_Integer Var_29 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_30 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_29 < Var_30);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_29 > Var_30);
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

          parse_tree__var_table____Compare____var_table_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              transform_hlds__dep_par_conj____Compare____ts_string_table_0_0(HeadVar__1_1, ArgX6_19, ArgY6_20);
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
    MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[6]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[6]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
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

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____sync_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_18_18 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
              succeeded = transform_hlds__dep_par_conj____Unify____ts_string_table_0_0(ArgX6_13, ArgY6_14);
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____ts_string_table_0_0(
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
    MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[6]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[6]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____spec_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_27 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_28 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_27 == CastY_28);
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
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 6))));
    MR_Word ArgX8_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));
    MR_Word ArgY8_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 7))));
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

            parse_tree__var_table____Compare____var_table_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
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

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____spec_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
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
    MR_Word TypeInfo_27_27;
    MR_Word TypeInfo_28_28;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 6))));
    MR_Word ArgX8_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 7))));
    MR_Word ArgY8_18 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 7))));

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
            succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX5_11, ArgY5_12);
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

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____rev_proc_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____rev_proc_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pushable_args_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pushable_args_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____push_op_0_0(
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
transform_hlds__dep_par_conj____Unify____push_op_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____proc_pushable_args_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____proc_pushable_args_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pending_par_procs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pending_par_procs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____par_proc_call_pattern_0_0(
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

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[5]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____par_proc_call_pattern_0_0(
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

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[5]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____new_par_proc_0_0(
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

    hlds__hlds_pred____Compare____pred_proc_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mdbcomp__sym_name____Compare____sym_name_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____new_par_proc_0_0(
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

    succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_worth_pushing_0_0(
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
transform_hlds__dep_par_conj____Unify____maybe_worth_pushing_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_spec_proc_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
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

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____maybe_spec_proc_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0(ArgX1_5, ArgY1_6);
      if (succeeded)
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX2_7, ArgY2_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_var_pair_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_var_pair_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____done_par_procs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____done_par_procs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_before_wait_0_0(
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
transform_hlds__dep_par_conj____Unify____cost_before_wait_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0(
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
transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____arg_pos_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
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

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____arg_pos_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__var_not_in_nonlocals_2_p_0(
  MR_Word Goal_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Var_5;

  Var_5 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal_3);
  succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, Var_4);
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__InstMapDelta_7 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__conv0_InstMapDelta_7));
  transform_hlds__dep_par_conj__changed_var_3_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_2(
  void * env_ptr_arg)
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

static void MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0_4(
  void * env_ptr_arg)
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

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__changed_var_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word InstMapDeltas_5,
  MR_Word UnboundVar_6)
{
  struct transform_hlds__dep_par_conj__changed_var_3_p_0_env_0_s env;

  (env).transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__ModuleInfo_4 = ModuleInfo_4;
  (env).transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__InstMapDeltas_5 = InstMapDeltas_5;
  (env).transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__UnboundVar_6 = UnboundVar_6;
  transform_hlds__dep_par_conj__changed_var_3_p_0_4(&env);
  return (env).transform_hlds__dep_par_conj__changed_var_3_p_0_env_0__succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Nonlocals_6,
  MR_Word * InstMapDelta_7)
{
  MR_Word GoalInfo_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  *Nonlocals_6 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GoalInfo_5);
  *InstMapDelta_7 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo_5);
}

static void MR_CALL 
transform_hlds__dep_par_conj__make_get_goal_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word VarTable_6,
  MR_Word HeadVar__3_3,
  MR_Word * WaitGoal_9)
{
  MR_Word FutureVar_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word WaitVar_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));

  transform_hlds__dep_par_conj__make_wait_or_get_6_p_0(ModuleInfo_5, VarTable_6, FutureVar_7, WaitVar_8, (MR_Integer) 1, WaitGoal_9);
}

static void MR_CALL 
transform_hlds__dep_par_conj__allocate_future_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word SharedVar_11,
  MR_Word * Goals_12,
  MR_Word STATE_VARIABLE_VarTable_0_37,
  MR_Word * STATE_VARIABLE_VarTable_38,
  MR_Word STATE_VARIABLE_FutureMap_0_39,
  MR_Word * STATE_VARIABLE_FutureMap_40,
  MR_Word STATE_VARIABLE_TSStringTable_0_41,
  MR_Word * STATE_VARIABLE_TSStringTable_42)
{
  MR_Word SharedVarEntry_16;
  MR_Word SharedVarType_17;
  MR_String SharedVarName_18;
  MR_Word FutureVar_19;
  MR_Word FutureVarType_20;
  MR_Word FutureNameVar_21;
  MR_Word SetNameGoal_22;
  MR_Word ModuleName_23;
  MR_Word InstMapDelta_26;
  MR_Word Context_27;
  MR_Word ShouldInline_28;
  MR_Word AllocGoal_30;
  MR_Word STATE_VARIABLE_VarTable_43_43;
  MR_Word Var_77;
  MR_String FutureVarName_82;
  MR_Word FutureVarEntry_83;

  parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_37, SharedVar_11, &SharedVarEntry_16);
  SharedVarType_17 = ((MR_Word) ((MR_hl_field(0, SharedVarEntry_16, (MR_Integer) 1))));
  SharedVarName_18 = parse_tree__var_table__var_entry_name_2_f_0(SharedVar_11, SharedVarEntry_16);
  FutureVarType_20 = parse_tree__builtin_lib_types__future_type_1_f_0(SharedVarType_17);
  FutureVarName_82 = mercury__string__f_43_43_2_f_0((MR_String) "Future", SharedVarName_18);
  {
    FutureVarEntry_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FutureVarEntry_83, 0) = ((MR_Box) (FutureVarName_82));
    MR_hl_field(0, FutureVarEntry_83, 1) = ((MR_Box) (FutureVarType_20));
    MR_hl_field(0, FutureVarEntry_83, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(FutureVarEntry_83, &FutureVar_19, STATE_VARIABLE_VarTable_0_37, &STATE_VARIABLE_VarTable_43_43);
  transform_hlds__dep_par_conj__make_future_name_var_and_goal_7_p_0(SharedVarName_18, &FutureNameVar_21, &SetNameGoal_22, STATE_VARIABLE_VarTable_43_43, STATE_VARIABLE_VarTable_38, STATE_VARIABLE_TSStringTable_0_41, STATE_VARIABLE_TSStringTable_42);
  mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (SharedVar_11)), ((MR_Box) (FutureVar_19)), STATE_VARIABLE_FutureMap_0_39, STATE_VARIABLE_FutureMap_40);
  ModuleName_23 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  InstMapDelta_26 = hlds__instmap__instmap_delta_bind_var_1_f_0(FutureVar_19);
  Context_27 = mercury__term_context__dummy_context_0_f_0();
  ShouldInline_28 = transform_hlds__dep_par_conj__should_inline_par_builtin_calls_1_f_0(ModuleInfo_10);
  switch (ShouldInline_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_29;
        MR_Word Var_47;

        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (FutureVar_19));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ArgVars_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgVars_29, 0) = ((MR_Box) (FutureNameVar_21));
          MR_hl_field(1, ArgVars_29, 1) = ((MR_Box) (Var_47));
        }
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_10, (MR_Integer) 0, ModuleName_23, (MR_String) "new_future", (MR_Word) ((MR_Unsigned) 0U), ArgVars_29, InstMapDelta_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), Context_27, &AllocGoal_30);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ForeignAttrs_31;
        MR_Word ArgName_32;
        MR_Word ArgFuture_33;
        MR_Word Args_34;
        MR_Word Var_56;
        MR_Word Var_57;
        MR_Word Var_59;
        MR_Word Var_64;
        MR_Word Var_65;
        MR_Word Var_67;
        MR_Word Var_69;
        MR_Word STATE_VARIABLE_Attrs_8_86;
        MR_Word STATE_VARIABLE_Attrs_11_89;
        MR_Word STATE_VARIABLE_Attrs_13_91;
        MR_Word STATE_VARIABLE_Attrs_14_92;
        MR_Word STATE_VARIABLE_Attrs_16_94;
        MR_Word STATE_VARIABLE_Attrs_18_96;
        MR_Word STATE_VARIABLE_Attrs_20_98;
        MR_Word STATE_VARIABLE_Attrs_22_100;
        MR_Word STATE_VARIABLE_Attrs_24_102;
        MR_Word STATE_VARIABLE_Attrs_26_104;
        MR_Word STATE_VARIABLE_Attrs_27_105;

        STATE_VARIABLE_Attrs_8_86 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_8_86, &STATE_VARIABLE_Attrs_11_89);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_11_89, &STATE_VARIABLE_Attrs_13_91);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_13_91, &STATE_VARIABLE_Attrs_14_92);
        parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_14_92, &STATE_VARIABLE_Attrs_16_94);
        parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_16_94, &STATE_VARIABLE_Attrs_18_96);
        parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_18_96, &STATE_VARIABLE_Attrs_20_98);
        parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_20_98, &STATE_VARIABLE_Attrs_22_100);
        parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_22_100, &STATE_VARIABLE_Attrs_24_102);
        parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_24_102, &STATE_VARIABLE_Attrs_26_104);
        parse_tree__prog_data_foreign__set_call_std_out_regs_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_26_104, &STATE_VARIABLE_Attrs_27_105);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &transform_hlds__dep_par_conj_scalar_common_3[3])), STATE_VARIABLE_Attrs_27_105, &ForeignAttrs_31);
        Var_59 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) ((MR_String) "Name"));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) (Var_59));
        }
        {
          Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_56, 0) = ((MR_Box) (Var_57));
        }
        {
          ArgName_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgName_32, 0) = ((MR_Box) (FutureNameVar_21));
          MR_hl_field(0, ArgName_32, 1) = ((MR_Box) (Var_56));
          MR_hl_field(0, ArgName_32, 2) = ((MR_Box) (MR_mkword(2, &transform_hlds__dep_par_conj_scalar_common_3[1])));
          MR_hl_field(0, ArgName_32, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        Var_67 = parse_tree__prog_mode__out_mode_0_f_0();
        {
          Var_65 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_65, 0) = ((MR_Box) ((MR_String) "Future"));
          MR_hl_field(0, Var_65, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
        }
        {
          ArgFuture_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, ArgFuture_33, 0) = ((MR_Box) (FutureVar_19));
          MR_hl_field(0, ArgFuture_33, 1) = ((MR_Box) (Var_64));
          MR_hl_field(0, ArgFuture_33, 2) = ((MR_Box) (FutureVarType_20));
          MR_hl_field(0, ArgFuture_33, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (ArgFuture_33));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Args_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_34, 0) = ((MR_Box) (ArgName_32));
          MR_hl_field(1, Args_34, 1) = ((MR_Box) (Var_69));
        }
        hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_10, (MR_Integer) 0, ModuleName_23, (MR_String) "new_future", (MR_Word) ((MR_Unsigned) 0U), Args_34, (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_26, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), ForeignAttrs_31, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "\n    #ifdef MR_THREADSCOPE\n        MR_par_builtin_new_future(Name, Future);\n    #else\n        MR_par_builtin_new_future(Future);\n    #endif\n", Context_27, &AllocGoal_30);
      }
      break;
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (AllocGoal_30));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *Goals_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (SetNameGoal_22));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_77));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__make_future_name_var_and_goal_7_p_0(
  MR_String Name_8,
  MR_Word * FutureNameVar_9,
  MR_Word * Goal_10,
  MR_Word STATE_VARIABLE_VarTable_0_25,
  MR_Word * STATE_VARIABLE_VarTable_26,
  MR_Word STATE_VARIABLE_TSStringTable_0_27,
  MR_Word * STATE_VARIABLE_TSStringTable_28)
{
  MR_bool succeeded;
  MR_String FutureNameVarName_13;
  MR_Word FutureNameVarEntry_14;
  MR_Integer NameId_15;
  MR_Word NameIdConsId_16;
  MR_Word RHS_17;
  MR_Word Unification_20;
  MR_Word GoalExpr_22;
  MR_Word InstmapDelta_23;
  MR_Word GoalInfo_24;
  MR_Word Var_30;
  MR_Word Var_34;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word Map0_58;
  MR_Word RevTable0_59;
  MR_Integer Size0_60;
  MR_Integer ExistingId_61;
  MR_Box conv0_ExistingId_61;

  FutureNameVarName_13 = mercury__string__f_43_43_2_f_0((MR_String) "FutureName", Name_8);
  Var_30 = parse_tree__builtin_lib_types__int_type_0_f_0();
  {
    FutureNameVarEntry_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FutureNameVarEntry_14, 0) = ((MR_Box) (FutureNameVarName_13));
    MR_hl_field(0, FutureNameVarEntry_14, 1) = ((MR_Box) (Var_30));
    MR_hl_field(0, FutureNameVarEntry_14, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(FutureNameVarEntry_14, FutureNameVar_9, STATE_VARIABLE_VarTable_0_25, STATE_VARIABLE_VarTable_26);
  Map0_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TSStringTable_0_27, (MR_Integer) 0))));
  RevTable0_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_TSStringTable_0_27, (MR_Integer) 1))));
  Size0_60 = ((MR_Integer) ((MR_hl_field(0, STATE_VARIABLE_TSStringTable_0_27, (MR_Integer) 2))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Map0_58, ((MR_Box) (Name_8)), &conv0_ExistingId_61);
  if (succeeded)
  {
    ExistingId_61 = ((MR_Integer) (conv0_ExistingId_61));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    NameId_15 = ExistingId_61;
    *STATE_VARIABLE_TSStringTable_28 = STATE_VARIABLE_TSStringTable_0_27;
  }
  else
  {
    MR_Integer Size_62;
    MR_Word RevTable_63;
    MR_Word Map_64;

    NameId_15 = Size0_60;
    Size_62 = (MR_Integer) ((MR_Unsigned) Size0_60 + (MR_Unsigned) 1);
    {
      RevTable_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, RevTable_63, 0) = ((MR_Box) (Name_8));
      MR_hl_field(1, RevTable_63, 1) = ((MR_Box) (RevTable0_59));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Name_8)), ((MR_Box) (NameId_15)), Map0_58, &Map_64);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_TSStringTable_28 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Map_64));
      MR_hl_field(0, base, 1) = ((MR_Box) (RevTable_63));
      MR_hl_field(0, base, 2) = ((MR_Box) (Size_62));
    }
  }
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (NameId_15));
  }
  {
    NameIdConsId_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, NameIdConsId_16, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, NameIdConsId_16, 1) = ((MR_Box) (Var_34));
  }
  {
    RHS_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RHS_17, 0) = ((MR_Box) (NameIdConsId_16));
    MR_hl_field(1, RHS_17, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(1, RHS_17, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Unification_20 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Unification_20, 0) = ((MR_Box) (*FutureNameVar_9));
    MR_hl_field(0, Unification_20, 1) = ((MR_Box) (NameIdConsId_16));
    MR_hl_field(0, Unification_20, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_20, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Unification_20, 4) = ((MR_Box) (MR_mkword(2, &transform_hlds__dep_par_conj_scalar_common_3[0])));
    MR_hl_field(0, Unification_20, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, Unification_20, 6) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    GoalExpr_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, GoalExpr_22, 0) = ((MR_Box) (*FutureNameVar_9));
    MR_hl_field(1, GoalExpr_22, 1) = ((MR_Box) (RHS_17));
    MR_hl_field(1, GoalExpr_22, 2) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_10[1]));
    MR_hl_field(1, GoalExpr_22, 3) = ((MR_Box) (Unification_20));
    MR_hl_field(1, GoalExpr_22, 4) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_1[9]));
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (*FutureNameVar_9));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (MR_mkword(1, &transform_hlds__dep_par_conj_scalar_common_1[8])));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  InstmapDelta_23 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(Var_51);
  Var_54 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), *FutureNameVar_9);
  hlds__hlds_goal__goal_info_init_5_p_0(Var_54, InstmapDelta_23, (MR_Integer) 0, (MR_Integer) 0, &GoalInfo_24);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_24));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__we_have_seen_more_signal_2_p_0(
  MR_Word SignalA_3,
  MR_Word SignalB_4)
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
        case (MR_Integer) 2:
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
        case (MR_Integer) 3:
          succeeded = MR_TRUE;
          break;
      }
      break;
  }
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_1(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Goal_8 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__conv0_Goal_8));
  transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__GoalNonLocals_9 = hlds__hlds_goal__goal_get_nonlocals_1_f_0((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Goal_8);
  (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__TypeCtorInfo_12_12 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
  (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__TypeCtorInfo_12_12, (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__GoalNonLocals_9, (env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Var_7);
  if ((env_ptr)->transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded)
    transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_4(
  void * env_ptr_arg)
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

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_add_get_goal_3_p_0(
  MR_Word NonLocals_4,
  MR_Word FwdGoals_5,
  MR_Word HeadVar__3_3)
{
  struct transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0_s env;

  (env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__FwdGoals_5 = FwdGoals_5;
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

    (env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Var_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    (env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded = parse_tree__set_of_var__contains_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_4, (env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__Var_7);
    if (!((env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded))
      transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_4(&env);
    return (env).transform_hlds__dep_par_conj__should_add_get_goal_3_p_0_env_0__succeeded;
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
      MR_Word H_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word T_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Future_9 = ((MR_Word) ((MR_hl_field(0, H_5, (MR_Integer) 0))));
      MR_Word X_10 = ((MR_Word) ((MR_hl_field(0, H_5, (MR_Integer) 1))));

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
  MR_Word HeadVar__2_2 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));

  return HeadVar__2_2;
}

static void MR_CALL 
transform_hlds__dep_par_conj__map_arg_to_new_future_6_p_0(
  MR_Word HeadVars_7,
  MR_Integer FutureArg_8,
  MR_Word STATE_VARIABLE_FutureMap_0_17,
  MR_Word * STATE_VARIABLE_FutureMap_18,
  MR_Word STATE_VARIABLE_VarTable_0_19,
  MR_Word * STATE_VARIABLE_VarTable_20)
{
  MR_Word HeadVar_11;
  MR_Word HeadVarEntry_12;
  MR_Word HeadVarType_13;
  MR_String HeadVarName_14;
  MR_Word FutureVar_15;
  MR_Word _FutureVarType_16;
  MR_String FutureVarName_24;
  MR_Word FutureVarEntry_25;
  MR_Box conv0_HeadVar_11;

  conv0_HeadVar_11 = mercury__list__det_index1_2_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), HeadVars_7, FutureArg_8);
  HeadVar_11 = ((MR_Word) (conv0_HeadVar_11));
  parse_tree__var_table__lookup_var_entry_3_p_0(STATE_VARIABLE_VarTable_0_19, HeadVar_11, &HeadVarEntry_12);
  HeadVarType_13 = ((MR_Word) ((MR_hl_field(0, HeadVarEntry_12, (MR_Integer) 1))));
  HeadVarName_14 = parse_tree__var_table__var_entry_name_2_f_0(HeadVar_11, HeadVarEntry_12);
  _FutureVarType_16 = parse_tree__builtin_lib_types__future_type_1_f_0(HeadVarType_13);
  FutureVarName_24 = mercury__string__f_43_43_2_f_0((MR_String) "Future", HeadVarName_14);
  {
    FutureVarEntry_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FutureVarEntry_25, 0) = ((MR_Box) (FutureVarName_24));
    MR_hl_field(0, FutureVarEntry_25, 1) = ((MR_Box) (_FutureVarType_16));
    MR_hl_field(0, FutureVarEntry_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
  }
  parse_tree__var_table__add_var_entry_4_p_0(FutureVarEntry_25, &FutureVar_15, STATE_VARIABLE_VarTable_0_19, STATE_VARIABLE_VarTable_20);
  mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (HeadVar_11)), ((MR_Box) (FutureVar_15)), STATE_VARIABLE_FutureMap_0_17, STATE_VARIABLE_FutureMap_18);
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_cases_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_7 = STATE_VARIABLE_VarTable_0_6;
  }
  else
  {
    MR_Word Case0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Cases0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Case_19;
    MR_Word Cases_20;
    MR_Word MainConsId_22 = ((MR_Word) ((MR_hl_field(0, Case0_17, (MR_Integer) 0))));
    MR_Word OtherConsIds_23 = ((MR_Word) ((MR_hl_field(0, Case0_17, (MR_Integer) 1))));
    MR_Word Goal0_24 = ((MR_Word) ((MR_hl_field(0, Case0_17, (MR_Integer) 2))));
    MR_Word Goal_25;
    MR_Word STATE_VARIABLE_VarTable_28_28;

    transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goal0_24, &Goal_25, STATE_VARIABLE_VarTable_0_6, &STATE_VARIABLE_VarTable_28_28);
    {
      Case_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_19, 0) = ((MR_Box) (MainConsId_22));
      MR_hl_field(0, Case_19, 1) = ((MR_Box) (OtherConsIds_23));
      MR_hl_field(0, Case_19, 2) = ((MR_Box) (Goal_25));
    }
    transform_hlds__dep_par_conj__insert_signal_in_cases_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Cases0_18, &Cases_20, STATE_VARIABLE_VarTable_28_28, STATE_VARIABLE_VarTable_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_20));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_disj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_7 = STATE_VARIABLE_VarTable_0_6;
  }
  else
  {
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word STATE_VARIABLE_VarTable_24_24;

    transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goal0_17, &Goal_19, STATE_VARIABLE_VarTable_0_6, &STATE_VARIABLE_VarTable_24_24);
    transform_hlds__dep_par_conj__insert_signal_in_disj_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goals0_18, &Goals_20, STATE_VARIABLE_VarTable_24_24, STATE_VARIABLE_VarTable_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_20));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_par_conj_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_par_conj__1289__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_par_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_7 = STATE_VARIABLE_VarTable_0_6;
  }
  else
  {
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Goal_19;
    MR_Word Goals_20;
    MR_Word Var_31;

    Var_31 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_17);
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_31, HeadVar__3_3);
    if (succeeded)
    {
      MR_Word GoalInfo0_23 = ((MR_Word) ((MR_hl_field(0, Goal0_17, (MR_Integer) 1))));
      MR_Word InstMapDelta_24;
      MR_Word ChangedVars_25;
      MR_Word Var_28;

      InstMapDelta_24 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_23);
      hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_24, &ChangedVars_25);
      {
        Var_28 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_28, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[5]));
        MR_hl_field(0, Var_28, 1) = ((MR_Box) (transform_hlds__dep_par_conj__insert_signal_in_par_conj_7_p_0_1));
        MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_28, 3) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(0, Var_28, 4) = ((MR_Box) (ChangedVars_25));
      }
      mercury__require__expect_3_p_0(Var_28, (MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_par_conj\'/7", (MR_String) "ProducedVar not in ChangedVars");
      transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goal0_17, &Goal_19, STATE_VARIABLE_VarTable_0_6, STATE_VARIABLE_VarTable_7);
      Goals_20 = Goals0_18;
    }
    else
    {
      Goal_19 = Goal0_17;
      transform_hlds__dep_par_conj__insert_signal_in_par_conj_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goals0_18, &Goals_20, STATE_VARIABLE_VarTable_0_6, STATE_VARIABLE_VarTable_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_20));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_plain_conj_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__insert_signal_in_plain_conj__1259__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_plain_conj_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_VarTable_0_6,
  MR_Word * STATE_VARIABLE_VarTable_7)
{
  MR_bool succeeded;

  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_7 = STATE_VARIABLE_VarTable_0_6;
  }
  else
  {
    MR_Word Goal0_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word Var_39;

    Var_39 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_17);
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_39, HeadVar__3_3);
    if (succeeded)
    {
      MR_Word GoalInfo0_22 = ((MR_Word) ((MR_hl_field(0, Goal0_17, (MR_Integer) 1))));
      MR_Word InstMapDelta_23;
      MR_Word ChangedVars_24;
      MR_Word Goal1_25;
      MR_Word Var_30;
      MR_Word GoalConjs1_26;
      MR_Word Var_34;
      MR_Word Var_35;

      InstMapDelta_23 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_22);
      hlds__instmap__instmap_delta_changed_vars_2_p_0(InstMapDelta_23, &ChangedVars_24);
      {
        Var_30 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_30, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[5]));
        MR_hl_field(0, Var_30, 1) = ((MR_Box) (transform_hlds__dep_par_conj__insert_signal_in_plain_conj_7_p_0_1));
        MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_30, 3) = ((MR_Box) (HeadVar__3_3));
        MR_hl_field(0, Var_30, 4) = ((MR_Box) (ChangedVars_24));
      }
      mercury__require__expect_3_p_0(Var_30, (MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_plain_conj\'/7", (MR_String) "ProducedVar not in ChangedVars");
      transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goal0_17, &Goal1_25, STATE_VARIABLE_VarTable_0_6, STATE_VARIABLE_VarTable_7);
      Var_34 = ((MR_Word) ((MR_hl_field(0, Goal1_25, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_34, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_35 = ((MR_Unsigned) ((MR_hl_field(3, Var_34, (MR_Integer) 1))) & (MR_Integer) 1);
        GoalConjs1_26 = ((MR_Word) ((MR_hl_field(3, Var_34, (MR_Integer) 2))));
        succeeded = (Var_35 == (MR_Integer) 0);
      }
      if (succeeded)
        *HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalConjs1_26, Goals0_18);
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal1_25));
          MR_hl_field(1, base, 1) = ((MR_Box) (Goals0_18));
        }
    }
    else
    {
      MR_Word Goals1_27;

      transform_hlds__dep_par_conj__insert_signal_in_plain_conj_7_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, Goals0_18, &Goals1_27, STATE_VARIABLE_VarTable_0_6, STATE_VARIABLE_VarTable_7);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal0_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals1_27));
      }
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dep_par_conj__var_not_in_nonlocals_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FutureMap_9,
  MR_Word ProducedVar_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_70,
  MR_Word * STATE_VARIABLE_VarTable_71)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_14 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
  MR_Word GoalInfo0_15 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
  MR_Word Detism_16;
  MR_Word NumSolutions_18;
  MR_Word _CanFail_17;

  Detism_16 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_15);
  parse_tree__prog_data__determinism_components_3_p_0(Detism_16, &_CanFail_17, &NumSolutions_18);
  switch (NumSolutions_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word Var_103;

        Var_103 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_11);
        succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_103, ProducedVar_10);
        if (succeeded)
          switch (MR_tag((MR_Word) GoalExpr0_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_goal\'/7", (MR_String) "negation binds shared variable");
                return;
              }
              break;
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              transform_hlds__dep_par_conj__insert_signal_after_goal_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, Goal0_11, Goal_12, STATE_VARIABLE_VarTable_0_70, STATE_VARIABLE_VarTable_71);
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  transform_hlds__dep_par_conj__insert_signal_after_goal_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, Goal0_11, Goal_12, STATE_VARIABLE_VarTable_0_70, STATE_VARIABLE_VarTable_71);
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ConjType_19 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Goals0_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))));
                    MR_Word Goals_21;
                    MR_Word GoalExpr_22;

                    switch (ConjType_19) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        transform_hlds__dep_par_conj__insert_signal_in_par_conj_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, Goals0_20, &Goals_21, STATE_VARIABLE_VarTable_0_70, STATE_VARIABLE_VarTable_71);
                        break;
                      case (MR_Integer) 0:
                        transform_hlds__dep_par_conj__insert_signal_in_plain_conj_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, Goals0_20, &Goals_21, STATE_VARIABLE_VarTable_0_70, STATE_VARIABLE_VarTable_71);
                        break;
                    }
                    {
                      GoalExpr_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(3, GoalExpr_22, 1) = (MR_Box) ((MR_Unsigned) (ConjType_19));
                      MR_hl_field(3, GoalExpr_22, 2) = ((MR_Box) (Goals_21));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_12 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_22));
                      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word Goals0_94 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
                    MR_Word Goals_95;
                    MR_Word GoalExpr_96;

                    transform_hlds__dep_par_conj__insert_signal_in_disj_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, Goals0_94, &Goals_95, STATE_VARIABLE_VarTable_0_70, STATE_VARIABLE_VarTable_71);
                    {
                      GoalExpr_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_96, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(3, GoalExpr_96, 1) = ((MR_Box) (Goals_95));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_12 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_96));
                      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
                    }
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SwitchVar_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
                    MR_Word CanFail_24 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))) & (MR_Integer) 1);
                    MR_Word Cases0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 3))));

                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (ProducedVar_10)), ((MR_Box) (SwitchVar_23)));
                    if (succeeded)
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_goal\'/7", (MR_String) "switch on unbound shared variable");
                        return;
                      }
                    else
                    {
                      MR_Word Cases_26;
                      MR_Word GoalExpr_97;

                      transform_hlds__dep_par_conj__insert_signal_in_cases_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, Cases0_25, &Cases_26, STATE_VARIABLE_VarTable_0_70, STATE_VARIABLE_VarTable_71);
                      {
                        GoalExpr_97 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(3, GoalExpr_97, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                        MR_hl_field(3, GoalExpr_97, 1) = ((MR_Box) (SwitchVar_23));
                        MR_hl_field(3, GoalExpr_97, 2) = (MR_Box) ((MR_Unsigned) (CanFail_24));
                        MR_hl_field(3, GoalExpr_97, 3) = ((MR_Box) (Cases_26));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        *Goal_12 = base;
                        MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_97));
                        MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
                      }
                    }
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Reason_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
                    MR_Word SubGoal0_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))));
                    MR_Word Var_85;

                    succeeded = ((((MR_tag((MR_Word) Reason_34)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_34, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      Var_85 = ((MR_Unsigned) ((MR_hl_field(3, Reason_34, (MR_Integer) 2))) & (MR_Integer) 3);
                      succeeded = (Var_85 == (MR_Integer) 1);
                    }
                    if (succeeded)
                      transform_hlds__dep_par_conj__insert_signal_after_goal_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, Goal0_11, Goal_12, STATE_VARIABLE_VarTable_0_70, STATE_VARIABLE_VarTable_71);
                    else
                    {
                      MR_Word SubGoalInfo0_38 = ((MR_Word) ((MR_hl_field(0, SubGoal0_35, (MR_Integer) 1))));
                      MR_Word Detism0_39;
                      MR_Word SubDetism0_40;
                      MR_Word MaxSolns0_42;
                      MR_Word SubMaxSolns0_44;
                      MR_Word Var_41;
                      MR_Word Var_43;

                      Detism0_39 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_15);
                      SubDetism0_40 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(SubGoalInfo0_38);
                      parse_tree__prog_data__determinism_components_3_p_0(Detism0_39, &Var_41, &MaxSolns0_42);
                      parse_tree__prog_data__determinism_components_3_p_0(SubDetism0_40, &Var_43, &SubMaxSolns0_44);
                      succeeded = (SubMaxSolns0_44 == (MR_Integer) 3);
                      if (succeeded)
                        succeeded = (MaxSolns0_42 != (MR_Integer) 3);
                      if (succeeded)
                        transform_hlds__dep_par_conj__insert_signal_after_goal_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, Goal0_11, Goal_12, STATE_VARIABLE_VarTable_0_70, STATE_VARIABLE_VarTable_71);
                      else
                      {
                        MR_Word SubGoal_45;
                        MR_Word GoalExpr_101;

                        transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, SubGoal0_35, &SubGoal_45, STATE_VARIABLE_VarTable_0_70, STATE_VARIABLE_VarTable_71);
                        {
                          GoalExpr_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, GoalExpr_101, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, GoalExpr_101, 1) = ((MR_Box) (Reason_34));
                          MR_hl_field(3, GoalExpr_101, 2) = ((MR_Box) (SubGoal_45));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                          *Goal_12 = base;
                          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_101));
                          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
                        }
                      }
                    }
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word QuantVars_27 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 1))));
                    MR_Word Cond_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 2))));
                    MR_Word Then0_29 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 3))));
                    MR_Word Else0_30 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_14, (MR_Integer) 4))));
                    MR_Word Then_31;
                    MR_Word Else_32;
                    MR_Word Var_78;
                    MR_Word STATE_VARIABLE_VarTable_81_81;
                    MR_Word GoalExpr_100;

                    {
                      Var_78 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_78, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[4]));
                      MR_hl_field(0, Var_78, 1) = ((MR_Box) (transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0_1));
                      MR_hl_field(0, Var_78, 2) = ((MR_Box) ((MR_Integer) 2));
                      MR_hl_field(0, Var_78, 3) = ((MR_Box) (Cond_28));
                      MR_hl_field(0, Var_78, 4) = ((MR_Box) (ProducedVar_10));
                    }
                    mercury__require__expect_3_p_0(Var_78, (MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_goal\'/7", (MR_String) "condition binds shared variable");
                    transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, Then0_29, &Then_31, STATE_VARIABLE_VarTable_0_70, &STATE_VARIABLE_VarTable_81_81);
                    transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(ModuleInfo_8, FutureMap_9, ProducedVar_10, Else0_30, &Else_32, STATE_VARIABLE_VarTable_81_81, STATE_VARIABLE_VarTable_71);
                    {
                      GoalExpr_100 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(3, GoalExpr_100, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                      MR_hl_field(3, GoalExpr_100, 1) = ((MR_Box) (QuantVars_27));
                      MR_hl_field(3, GoalExpr_100, 2) = ((MR_Box) (Cond_28));
                      MR_hl_field(3, GoalExpr_100, 3) = ((MR_Box) (Then_31));
                      MR_hl_field(3, GoalExpr_100, 4) = ((MR_Box) (Else_32));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      *Goal_12 = base;
                      MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_100));
                      MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_15));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_goal\'/7", (MR_String) "shorthand");
                    return;
                  }
                  break;
              }
              break;
          }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_signal_in_goal\'/7", (MR_String) "ProducedVar is not in nonlocals");
            return;
          }
      }
      break;
    case (MR_Integer) 0:
      {
        *Goal_12 = Goal0_11;
        *STATE_VARIABLE_VarTable_71 = STATE_VARIABLE_VarTable_0_70;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_signal_after_goal_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FutureMap_9,
  MR_Word ProducedVar_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_15,
  MR_Word * STATE_VARIABLE_VarTable_16)
{
  MR_bool succeeded;
  MR_Word SignalGoal_14;
  MR_Word Var_17;
  MR_Word FutureVar_19;
  MR_Word ModuleName_20;
  MR_Word InstMapDelta_23;
  MR_Word Context_24;
  MR_Word ShouldInline_25;
  MR_Word GoalListB_87;
  MR_Word GoalExprA_91;
  MR_Word GoalList_94;
  MR_Word GoalExpr_95;
  MR_Word Detism_96;
  MR_Word InstMapDelta_97;
  MR_Word NonLocals_98;
  MR_Word STATE_VARIABLE_GoalInfo_20_101;
  MR_Word STATE_VARIABLE_GoalInfo_21_102;
  MR_Word STATE_VARIABLE_GoalInfo_22_103;
  MR_Box conv0_FutureVar_19;
  MR_Word GoalsB_85;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word GoalListA_93;
  MR_Word Var_99;

  conv0_FutureVar_19 = mercury__map__lookup_2_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), FutureMap_9, ((MR_Box) (ProducedVar_10)));
  FutureVar_19 = ((MR_Word) (conv0_FutureVar_19));
  ModuleName_20 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
  InstMapDelta_23 = hlds__instmap__instmap_delta_bind_no_var_0_f_0();
  Context_24 = mercury__term_context__dummy_context_0_f_0();
  ShouldInline_25 = transform_hlds__dep_par_conj__should_inline_par_builtin_calls_1_f_0(ModuleInfo_8);
  switch (ShouldInline_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_26;
        MR_Word Var_35;

        {
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (ProducedVar_10));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ArgVars_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgVars_26, 0) = ((MR_Box) (FutureVar_19));
          MR_hl_field(1, ArgVars_26, 1) = ((MR_Box) (Var_35));
        }
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_8, (MR_Integer) 0, ModuleName_20, (MR_String) "signal_future", (MR_Word) ((MR_Unsigned) 0U), ArgVars_26, InstMapDelta_23, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), Context_24, &SignalGoal_14);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ForeignAttrs_27;
        MR_Word FutureVarType_28;
        MR_Word ProducedVarType_29;
        MR_Word Arg1_30;
        MR_Word Arg2_31;
        MR_Word Args_32;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_47;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_52;
        MR_Word Var_54;
        MR_Word STATE_VARIABLE_Attrs_8_63;
        MR_Word STATE_VARIABLE_Attrs_11_66;
        MR_Word STATE_VARIABLE_Attrs_13_68;
        MR_Word STATE_VARIABLE_Attrs_14_69;
        MR_Word STATE_VARIABLE_Attrs_16_71;
        MR_Word STATE_VARIABLE_Attrs_18_73;
        MR_Word STATE_VARIABLE_Attrs_20_75;
        MR_Word STATE_VARIABLE_Attrs_22_77;
        MR_Word STATE_VARIABLE_Attrs_24_79;
        MR_Word STATE_VARIABLE_Attrs_26_81;
        MR_Word STATE_VARIABLE_Attrs_27_82;

        STATE_VARIABLE_Attrs_8_63 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_8_63, &STATE_VARIABLE_Attrs_11_66);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_11_66, &STATE_VARIABLE_Attrs_13_68);
        parse_tree__prog_data_foreign__set_purity_3_p_0((MR_Integer) 2, STATE_VARIABLE_Attrs_13_68, &STATE_VARIABLE_Attrs_14_69);
        parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_14_69, &STATE_VARIABLE_Attrs_16_71);
        parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_16_71, &STATE_VARIABLE_Attrs_18_73);
        parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_18_73, &STATE_VARIABLE_Attrs_20_75);
        parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_20_75, &STATE_VARIABLE_Attrs_22_77);
        parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_22_77, &STATE_VARIABLE_Attrs_24_79);
        parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_24_79, &STATE_VARIABLE_Attrs_26_81);
        parse_tree__prog_data_foreign__set_call_std_out_regs_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_26_81, &STATE_VARIABLE_Attrs_27_82);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &transform_hlds__dep_par_conj_scalar_common_3[3])), STATE_VARIABLE_Attrs_27_82, &ForeignAttrs_27);
        parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_15, FutureVar_19, &FutureVarType_28);
        parse_tree__var_table__lookup_var_type_3_p_0(STATE_VARIABLE_VarTable_0_15, ProducedVar_10, &ProducedVarType_29);
        Var_47 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_45, 0) = ((MR_Box) ((MR_String) "Future"));
          MR_hl_field(0, Var_45, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
        }
        {
          Arg1_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_30, 0) = ((MR_Box) (FutureVar_19));
          MR_hl_field(0, Arg1_30, 1) = ((MR_Box) (Var_44));
          MR_hl_field(0, Arg1_30, 2) = ((MR_Box) (FutureVarType_28));
          MR_hl_field(0, Arg1_30, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        Var_52 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) ((MR_String) "Value"));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (Var_52));
        }
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
        }
        {
          Arg2_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg2_31, 0) = ((MR_Box) (ProducedVar_10));
          MR_hl_field(0, Arg2_31, 1) = ((MR_Box) (Var_49));
          MR_hl_field(0, Arg2_31, 2) = ((MR_Box) (ProducedVarType_29));
          MR_hl_field(0, Arg2_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_54, 0) = ((MR_Box) (Arg2_31));
          MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Args_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_32, 0) = ((MR_Box) (Arg1_30));
          MR_hl_field(1, Args_32, 1) = ((MR_Box) (Var_54));
        }
        hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_8, (MR_Integer) 0, ModuleName_20, (MR_String) "signal_future", (MR_Word) ((MR_Unsigned) 0U), Args_32, (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_23, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, (MR_Word) ((MR_Unsigned) 0U), ForeignAttrs_27, (MR_Word) ((MR_Unsigned) 0U), (MR_String) "MR_par_builtin_signal_future(Future, Value);", Context_24, &SignalGoal_14);
      }
      break;
  }
  Var_17 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
  Var_88 = ((MR_Word) ((MR_hl_field(0, SignalGoal_14, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) Var_88)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_88, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_89 = ((MR_Unsigned) ((MR_hl_field(3, Var_88, (MR_Integer) 1))) & (MR_Integer) 1);
    GoalsB_85 = ((MR_Word) ((MR_hl_field(3, Var_88, (MR_Integer) 2))));
    succeeded = (Var_89 == (MR_Integer) 0);
  }
  if (succeeded)
    GoalListB_87 = GoalsB_85;
  else
    {
      GoalListB_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalListB_87, 0) = ((MR_Box) (SignalGoal_14));
      MR_hl_field(1, GoalListB_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  GoalExprA_91 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) GoalExprA_91)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprA_91, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_99 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprA_91, (MR_Integer) 1))) & (MR_Integer) 1);
    GoalListA_93 = ((MR_Word) ((MR_hl_field(3, GoalExprA_91, (MR_Integer) 2))));
    succeeded = (Var_99 == (MR_Integer) 0);
  }
  if (succeeded)
    GoalList_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalListA_93, GoalListB_87);
  else
    {
      GoalList_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_94, 0) = ((MR_Box) (Goal0_11));
      MR_hl_field(1, GoalList_94, 1) = ((MR_Box) (GoalListB_87));
    }
  {
    GoalExpr_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_95, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_95, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_95, 2) = ((MR_Box) (GoalList_94));
  }
  hlds__hlds_goal__goal_list_determinism_2_p_0(GoalList_94, &Detism_96);
  hlds__hlds_goal__goal_list_instmap_delta_2_p_0(GoalList_94, &InstMapDelta_97);
  hlds__hlds_goal__goal_list_nonlocals_2_p_0(GoalList_94, &NonLocals_98);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_98, Var_17, &STATE_VARIABLE_GoalInfo_20_101);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_96, STATE_VARIABLE_GoalInfo_20_101, &STATE_VARIABLE_GoalInfo_21_102);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_97, STATE_VARIABLE_GoalInfo_21_102, &STATE_VARIABLE_GoalInfo_22_103);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_95));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_22_103));
  }
  *STATE_VARIABLE_VarTable_16 = STATE_VARIABLE_VarTable_0_15;
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_goal_for_proc_8_p_0(
  MR_Word ModuleInfo_9,
  MR_Word AllowSomePathsOnly_10,
  MR_Word FutureMap_11,
  MR_Word ConsumedVar_12,
  MR_Word STATE_VARIABLE_Goal_0_16,
  MR_Word * STATE_VARIABLE_Goal_17,
  MR_Word STATE_VARIABLE_VarTable_0_18,
  MR_Word * STATE_VARIABLE_VarTable_19)
{
  MR_Word WaitedOnAllSuccessPaths_15;
  MR_Word STATE_VARIABLE_Goal_20_20;
  MR_Word STATE_VARIABLE_VarTable_21_21;

  transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(ModuleInfo_9, AllowSomePathsOnly_10, FutureMap_11, ConsumedVar_12, &WaitedOnAllSuccessPaths_15, STATE_VARIABLE_Goal_0_16, &STATE_VARIABLE_Goal_20_20, STATE_VARIABLE_VarTable_0_18, &STATE_VARIABLE_VarTable_21_21);
  switch (WaitedOnAllSuccessPaths_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      transform_hlds__dep_par_conj__insert_wait_after_goal_7_p_0(ModuleInfo_9, FutureMap_11, ConsumedVar_12, STATE_VARIABLE_Goal_20_20, STATE_VARIABLE_Goal_17, STATE_VARIABLE_VarTable_21_21, STATE_VARIABLE_VarTable_19);
      break;
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_Goal_17 = STATE_VARIABLE_Goal_20_20;
        *STATE_VARIABLE_VarTable_19 = STATE_VARIABLE_VarTable_21_21;
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_cases_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5,
  MR_Word * STATE_VARIABLE_WaitedOnAllSuccessPaths_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_bool succeeded;

  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_10 = STATE_VARIABLE_VarTable_0_9;
    *STATE_VARIABLE_WaitedOnAllSuccessPaths_6 = STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5;
  }
  else
  {
    MR_Word Case0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
    MR_Word Cases0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
    MR_Word Case_28;
    MR_Word Cases_29;
    MR_Word MainConsId_31 = ((MR_Word) ((MR_hl_field(0, Case0_26, (MR_Integer) 0))));
    MR_Word OtherConsIds_32 = ((MR_Word) ((MR_hl_field(0, Case0_26, (MR_Integer) 1))));
    MR_Word Goal0_33 = ((MR_Word) ((MR_hl_field(0, Case0_26, (MR_Integer) 2))));
    MR_Word FirstWaitedOnAllSuccessPaths_34;
    MR_Word Goal_35;
    MR_Word STATE_VARIABLE_VarTable_40_40;
    MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_41_41;

    transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, &FirstWaitedOnAllSuccessPaths_34, Goal0_33, &Goal_35, STATE_VARIABLE_VarTable_0_9, &STATE_VARIABLE_VarTable_40_40);
    {
      Case_28 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_28, 0) = ((MR_Box) (MainConsId_31));
      MR_hl_field(0, Case_28, 1) = ((MR_Box) (OtherConsIds_32));
      MR_hl_field(0, Case_28, 2) = ((MR_Box) (Goal_35));
    }
    succeeded = (FirstWaitedOnAllSuccessPaths_34 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5 == (MR_Integer) 0);
    if (succeeded)
      STATE_VARIABLE_WaitedOnAllSuccessPaths_41_41 = (MR_Integer) 0;
    else
      STATE_VARIABLE_WaitedOnAllSuccessPaths_41_41 = (MR_Integer) 1;
    transform_hlds__dep_par_conj__insert_wait_in_cases_10_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, STATE_VARIABLE_WaitedOnAllSuccessPaths_41_41, STATE_VARIABLE_WaitedOnAllSuccessPaths_6, Cases0_27, &Cases_29, STATE_VARIABLE_VarTable_40_40, STATE_VARIABLE_VarTable_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_29));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_disj_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5,
  MR_Word * STATE_VARIABLE_WaitedOnAllSuccessPaths_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_bool succeeded;

  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_10 = STATE_VARIABLE_VarTable_0_9;
    *STATE_VARIABLE_WaitedOnAllSuccessPaths_6 = STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5;
  }
  else
  {
    MR_Word Goal0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
    MR_Word Goals0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
    MR_Word Goal_28;
    MR_Word Goals_29;
    MR_Word FirstWaitedOnAllSuccessPaths_31;
    MR_Word STATE_VARIABLE_VarTable_36_36;
    MR_Word STATE_VARIABLE_WaitedOnAllSuccessPaths_37_37;

    transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, &FirstWaitedOnAllSuccessPaths_31, Goal0_26, &Goal_28, STATE_VARIABLE_VarTable_0_9, &STATE_VARIABLE_VarTable_36_36);
    succeeded = (FirstWaitedOnAllSuccessPaths_31 == (MR_Integer) 0);
    if (succeeded)
      succeeded = (STATE_VARIABLE_WaitedOnAllSuccessPaths_0_5 == (MR_Integer) 0);
    if (succeeded)
      STATE_VARIABLE_WaitedOnAllSuccessPaths_37_37 = (MR_Integer) 0;
    else
      STATE_VARIABLE_WaitedOnAllSuccessPaths_37_37 = (MR_Integer) 1;
    transform_hlds__dep_par_conj__insert_wait_in_disj_10_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, STATE_VARIABLE_WaitedOnAllSuccessPaths_37_37, STATE_VARIABLE_WaitedOnAllSuccessPaths_6, Goals0_27, &Goals_29, STATE_VARIABLE_VarTable_36_36, STATE_VARIABLE_VarTable_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_29));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_par_conj_10_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word STATE_VARIABLE_WaitedInConjunct_0_5,
  MR_Word * STATE_VARIABLE_WaitedInConjunct_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_VarTable_0_9,
  MR_Word * STATE_VARIABLE_VarTable_10)
{
  MR_bool succeeded;

  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_10 = STATE_VARIABLE_VarTable_0_9;
    *STATE_VARIABLE_WaitedInConjunct_6 = STATE_VARIABLE_WaitedInConjunct_0_5;
  }
  else
  {
    MR_Word Goal0_26 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 0))));
    MR_Word Goals0_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__7_7, (MR_Integer) 1))));
    MR_Word Goal_28;
    MR_Word Goals_29;
    MR_Word STATE_VARIABLE_WaitedInConjunct_41_41;
    MR_Word STATE_VARIABLE_VarTable_43_43;
    MR_Word Var_46;

    Var_46 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal0_26);
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_46, ConsumedVar_4);
    if (succeeded)
    {
      MR_Word WaitedOnAllSuccessPaths_31;
      MR_Word Goal1_32;
      MR_Word STATE_VARIABLE_VarTable_40_40;

      transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, &WaitedOnAllSuccessPaths_31, Goal0_26, &Goal1_32, STATE_VARIABLE_VarTable_0_9, &STATE_VARIABLE_VarTable_40_40);
      if ((STATE_VARIABLE_WaitedInConjunct_0_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          STATE_VARIABLE_WaitedInConjunct_41_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_WaitedInConjunct_41_41, 0) = (MR_Box) ((MR_Unsigned) (WaitedOnAllSuccessPaths_31));
        }
        Goal_28 = Goal1_32;
        STATE_VARIABLE_VarTable_43_43 = STATE_VARIABLE_VarTable_40_40;
      }
      else
      {
        MR_Word Renaming_34;
        MR_Word Var_44;
        MR_Word _CloneVar_35;

        Var_44 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]));
        hlds__goal_util__clone_variable_7_p_0(ConsumedVar_4, STATE_VARIABLE_VarTable_40_40, STATE_VARIABLE_VarTable_40_40, &STATE_VARIABLE_VarTable_43_43, Var_44, &Renaming_34, &_CloneVar_35);
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_34, Goal1_32, &Goal_28);
        STATE_VARIABLE_WaitedInConjunct_41_41 = STATE_VARIABLE_WaitedInConjunct_0_5;
      }
    }
    else
    {
      Goal_28 = Goal0_26;
      STATE_VARIABLE_VarTable_43_43 = STATE_VARIABLE_VarTable_0_9;
      STATE_VARIABLE_WaitedInConjunct_41_41 = STATE_VARIABLE_WaitedInConjunct_0_5;
    }
    transform_hlds__dep_par_conj__insert_wait_in_par_conj_10_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, STATE_VARIABLE_WaitedInConjunct_41_41, STATE_VARIABLE_WaitedInConjunct_6, Goals0_27, &Goals_29, STATE_VARIABLE_VarTable_43_43, STATE_VARIABLE_VarTable_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_28));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_29));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_plain_conj_9_p_0(
  MR_Word ModuleInfo_1,
  MR_Word AllowSomePathsOnly_2,
  MR_Word FutureMap_3,
  MR_Word ConsumedVar_4,
  MR_Word * HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_VarTable_0_8,
  MR_Word * STATE_VARIABLE_VarTable_9)
{
  MR_bool succeeded;

  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Integer) 1;
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarTable_9 = STATE_VARIABLE_VarTable_0_8;
  }
  else
  {
    MR_Word FirstGoal0_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    MR_Word LaterGoals0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
    MR_Word Var_39;

    Var_39 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(FirstGoal0_22);
    succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_39, ConsumedVar_4);
    if (succeeded)
    {
      MR_Word GoalWaitedOnAllSuccessPaths_26;
      MR_Word FirstGoal_27;
      MR_Word LaterGoals_28;
      MR_Word STATE_VARIABLE_VarTable_33_33;
      MR_Word FirstGoalConj_29;
      MR_Word Var_35;
      MR_Word Var_36;

      transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, &GoalWaitedOnAllSuccessPaths_26, FirstGoal0_22, &FirstGoal_27, STATE_VARIABLE_VarTable_0_8, &STATE_VARIABLE_VarTable_33_33);
      switch (GoalWaitedOnAllSuccessPaths_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          transform_hlds__dep_par_conj__insert_wait_in_plain_conj_9_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, HeadVar__5_5, LaterGoals0_23, &LaterGoals_28, STATE_VARIABLE_VarTable_33_33, STATE_VARIABLE_VarTable_9);
          break;
        case (MR_Integer) 0:
          {
            *HeadVar__5_5 = (MR_Integer) 0;
            LaterGoals_28 = LaterGoals0_23;
            *STATE_VARIABLE_VarTable_9 = STATE_VARIABLE_VarTable_33_33;
          }
          break;
      }
      Var_35 = ((MR_Word) ((MR_hl_field(0, FirstGoal_27, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) Var_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_35, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_36 = ((MR_Unsigned) ((MR_hl_field(3, Var_35, (MR_Integer) 1))) & (MR_Integer) 1);
        FirstGoalConj_29 = ((MR_Word) ((MR_hl_field(3, Var_35, (MR_Integer) 2))));
        succeeded = (Var_36 == (MR_Integer) 0);
      }
      if (succeeded)
        *HeadVar__7_7 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), FirstGoalConj_29, LaterGoals_28);
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (FirstGoal_27));
          MR_hl_field(1, base, 1) = ((MR_Box) (LaterGoals_28));
        }
    }
    else
    {
      MR_Word LaterGoals1_30;

      transform_hlds__dep_par_conj__insert_wait_in_plain_conj_9_p_0(ModuleInfo_1, AllowSomePathsOnly_2, FutureMap_3, ConsumedVar_4, HeadVar__5_5, LaterGoals0_23, &LaterGoals1_30, STATE_VARIABLE_VarTable_0_8, STATE_VARIABLE_VarTable_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__7_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FirstGoal0_22));
        MR_hl_field(1, base, 1) = ((MR_Box) (LaterGoals1_30));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word AllowSomePathsOnly_11,
  MR_Word FutureMap_12,
  MR_Word ConsumedVar_13,
  MR_Word * WaitedOnAllSuccessPaths_14,
  MR_Word Goal0_15,
  MR_Word * Goal_16,
  MR_Word STATE_VARIABLE_VarTable_0_90,
  MR_Word * STATE_VARIABLE_VarTable_91)
{
  MR_bool succeeded;
  MR_Word GoalExpr0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 0))));
  MR_Word GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, Goal0_15, (MR_Integer) 1))));
  MR_Word InvariantEstablished_22;
  MR_Word WaitedOnAllSuccessPaths0_23;
  MR_Word Goal2_84;
  MR_Word Detism_87;
  MR_Word MaxSolns_89;
  MR_Word STATE_VARIABLE_VarTable_114_114;
  MR_Word Var_88;

  succeeded = transform_hlds__dep_par_conj__var_in_nonlocals_2_p_0(Goal0_15, ConsumedVar_13);
  if (succeeded)
  {
    MR_Word Goal1_27;
    MR_Word STATE_VARIABLE_VarTable_92_92;

    switch (MR_tag((MR_Word) GoalExpr0_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          InvariantEstablished_22 = (MR_Integer) 1;
          WaitedOnAllSuccessPaths0_23 = (MR_Integer) 0;
          transform_hlds__dep_par_conj__insert_wait_before_goal_7_p_0(ModuleInfo_10, FutureMap_12, ConsumedVar_13, Goal0_15, &Goal1_27, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_92_92);
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          InvariantEstablished_22 = (MR_Integer) 0;
          WaitedOnAllSuccessPaths0_23 = (MR_Integer) 0;
          transform_hlds__dep_par_conj__insert_wait_before_goal_7_p_0(ModuleInfo_10, FutureMap_12, ConsumedVar_13, Goal0_15, &Goal1_27, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_92_92);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            {
              InvariantEstablished_22 = (MR_Integer) 0;
              WaitedOnAllSuccessPaths0_23 = (MR_Integer) 0;
              transform_hlds__dep_par_conj__insert_wait_before_goal_7_p_0(ModuleInfo_10, FutureMap_12, ConsumedVar_13, Goal0_15, &Goal1_27, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_92_92);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ConjType_20 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Goals0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 2))));
              MR_Word Goals_24;
              MR_Word GoalExpr_26;

              InvariantEstablished_22 = (MR_Integer) 1;
              switch (ConjType_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word WaitedInConjunct_25;

                    transform_hlds__dep_par_conj__insert_wait_in_par_conj_10_p_0(ModuleInfo_10, AllowSomePathsOnly_11, FutureMap_12, ConsumedVar_13, (MR_Word) ((MR_Unsigned) 0U), &WaitedInConjunct_25, Goals0_21, &Goals_24, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_92_92);
                    if ((WaitedInConjunct_25 == (MR_Word) ((MR_Unsigned) 0U)))
                      WaitedOnAllSuccessPaths0_23 = (MR_Integer) 1;
                    else
                      WaitedOnAllSuccessPaths0_23 = ((MR_Unsigned) ((MR_hl_field(1, WaitedInConjunct_25, (MR_Integer) 0))) & (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 0:
                  transform_hlds__dep_par_conj__insert_wait_in_plain_conj_9_p_0(ModuleInfo_10, AllowSomePathsOnly_11, FutureMap_12, ConsumedVar_13, &WaitedOnAllSuccessPaths0_23, Goals0_21, &Goals_24, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_92_92);
                  break;
              }
              {
                GoalExpr_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(3, GoalExpr_26, 1) = (MR_Box) ((MR_Unsigned) (ConjType_20));
                MR_hl_field(3, GoalExpr_26, 2) = ((MR_Box) (Goals_24));
              }
              {
                Goal1_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Goal1_27, 0) = ((MR_Box) (GoalExpr_26));
                MR_hl_field(0, Goal1_27, 1) = ((MR_Box) (GoalInfo0_19));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Disjuncts0_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 1))));

              InvariantEstablished_22 = (MR_Integer) 1;
              if ((Disjuncts0_28 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                WaitedOnAllSuccessPaths0_23 = (MR_Integer) 0;
                Goal1_27 = Goal0_15;
                STATE_VARIABLE_VarTable_92_92 = STATE_VARIABLE_VarTable_0_90;
              }
              else
              {
                MR_Word FirstDisjunct0_29 = ((MR_Word) ((MR_hl_field(1, Disjuncts0_28, (MR_Integer) 0))));
                MR_Word LaterDisjuncts0_30 = ((MR_Word) ((MR_hl_field(1, Disjuncts0_28, (MR_Integer) 1))));
                MR_Word FirstWaitedOnAllSuccessPaths_31;
                MR_Word FirstDisjunct_32;
                MR_Word LaterDisjuncts_33;
                MR_Word Disjuncts_34;
                MR_Word STATE_VARIABLE_VarTable_95_95;
                MR_Word GoalExpr_119;

                transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(ModuleInfo_10, AllowSomePathsOnly_11, FutureMap_12, ConsumedVar_13, &FirstWaitedOnAllSuccessPaths_31, FirstDisjunct0_29, &FirstDisjunct_32, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_95_95);
                transform_hlds__dep_par_conj__insert_wait_in_disj_10_p_0(ModuleInfo_10, AllowSomePathsOnly_11, FutureMap_12, ConsumedVar_13, FirstWaitedOnAllSuccessPaths_31, &WaitedOnAllSuccessPaths0_23, LaterDisjuncts0_30, &LaterDisjuncts_33, STATE_VARIABLE_VarTable_95_95, &STATE_VARIABLE_VarTable_92_92);
                {
                  Disjuncts_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Disjuncts_34, 0) = ((MR_Box) (FirstDisjunct_32));
                  MR_hl_field(1, Disjuncts_34, 1) = ((MR_Box) (LaterDisjuncts_33));
                }
                {
                  GoalExpr_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_119, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(3, GoalExpr_119, 1) = ((MR_Box) (Disjuncts_34));
                }
                {
                  Goal1_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Goal1_27, 0) = ((MR_Box) (GoalExpr_119));
                  MR_hl_field(0, Goal1_27, 1) = ((MR_Box) (GoalInfo0_19));
                }
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SwitchVar_35 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 1))));
              MR_Word CanFail_36 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 2))) & (MR_Integer) 1);
              MR_Word Cases0_37 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 3))));

              InvariantEstablished_22 = (MR_Integer) 1;
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (ConsumedVar_13)), ((MR_Box) (SwitchVar_35)));
              if (succeeded)
              {
                transform_hlds__dep_par_conj__insert_wait_before_goal_7_p_0(ModuleInfo_10, FutureMap_12, ConsumedVar_13, Goal0_15, &Goal1_27, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_92_92);
                WaitedOnAllSuccessPaths0_23 = (MR_Integer) 0;
              }
              else
              if ((Cases0_37 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_wait_in_goal\'/9", (MR_String) "no cases");
                  return;
                }
              else
              {
                MR_Word FirstCase0_38 = ((MR_Word) ((MR_hl_field(1, Cases0_37, (MR_Integer) 0))));
                MR_Word LaterCases0_39 = ((MR_Word) ((MR_hl_field(1, Cases0_37, (MR_Integer) 1))));
                MR_Word MainConsId_40 = ((MR_Word) ((MR_hl_field(0, FirstCase0_38, (MR_Integer) 0))));
                MR_Word OtherConsIds_41 = ((MR_Word) ((MR_hl_field(0, FirstCase0_38, (MR_Integer) 1))));
                MR_Word FirstGoal0_42 = ((MR_Word) ((MR_hl_field(0, FirstCase0_38, (MR_Integer) 2))));
                MR_Word FirstGoal_43;
                MR_Word FirstCase_44;
                MR_Word LaterCases_45;
                MR_Word Cases_46;
                MR_Word STATE_VARIABLE_VarTable_100_100;
                MR_Word GoalExpr_122;
                MR_Word FirstWaitedOnAllSuccessPaths_123;

                transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(ModuleInfo_10, AllowSomePathsOnly_11, FutureMap_12, ConsumedVar_13, &FirstWaitedOnAllSuccessPaths_123, FirstGoal0_42, &FirstGoal_43, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_100_100);
                {
                  FirstCase_44 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, FirstCase_44, 0) = ((MR_Box) (MainConsId_40));
                  MR_hl_field(0, FirstCase_44, 1) = ((MR_Box) (OtherConsIds_41));
                  MR_hl_field(0, FirstCase_44, 2) = ((MR_Box) (FirstGoal_43));
                }
                transform_hlds__dep_par_conj__insert_wait_in_cases_10_p_0(ModuleInfo_10, AllowSomePathsOnly_11, FutureMap_12, ConsumedVar_13, FirstWaitedOnAllSuccessPaths_123, &WaitedOnAllSuccessPaths0_23, LaterCases0_39, &LaterCases_45, STATE_VARIABLE_VarTable_100_100, &STATE_VARIABLE_VarTable_92_92);
                {
                  Cases_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Cases_46, 0) = ((MR_Box) (FirstCase_44));
                  MR_hl_field(1, Cases_46, 1) = ((MR_Box) (LaterCases_45));
                }
                {
                  GoalExpr_122 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_122, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                  MR_hl_field(3, GoalExpr_122, 1) = ((MR_Box) (SwitchVar_35));
                  MR_hl_field(3, GoalExpr_122, 2) = (MR_Box) ((MR_Unsigned) (CanFail_36));
                  MR_hl_field(3, GoalExpr_122, 3) = ((MR_Box) (Cases_46));
                }
                {
                  Goal1_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Goal1_27, 0) = ((MR_Box) (GoalExpr_122));
                  MR_hl_field(0, Goal1_27, 1) = ((MR_Box) (GoalInfo0_19));
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_55 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 1))));
              MR_Word SubGoal0_56 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 2))));
              MR_Word Var_105;

              InvariantEstablished_22 = (MR_Integer) 1;
              succeeded = ((((MR_tag((MR_Word) Reason_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_55, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_105 = ((MR_Unsigned) ((MR_hl_field(3, Reason_55, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_105 == (MR_Integer) 1);
              }
              if (succeeded)
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_wait_in_goal\'/9", (MR_String) "from_ground_term_construct");
                  return;
                }
              else
              {
                MR_Word SubGoal_58;
                MR_Word GoalExpr_133;

                transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(ModuleInfo_10, AllowSomePathsOnly_11, FutureMap_12, ConsumedVar_13, &WaitedOnAllSuccessPaths0_23, SubGoal0_56, &SubGoal_58, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_92_92);
                {
                  GoalExpr_133 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_133, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                  MR_hl_field(3, GoalExpr_133, 1) = ((MR_Box) (Reason_55));
                  MR_hl_field(3, GoalExpr_133, 2) = ((MR_Box) (SubGoal_58));
                }
                {
                  Goal1_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Goal1_27, 0) = ((MR_Box) (GoalExpr_133));
                  MR_hl_field(0, Goal1_27, 1) = ((MR_Box) (GoalInfo0_19));
                }
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Quant_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 1))));
              MR_Word Cond_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 2))));
              MR_Word Then0_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 3))));
              MR_Word Else0_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_18, (MR_Integer) 4))));

              InvariantEstablished_22 = (MR_Integer) 1;
              succeeded = transform_hlds__dep_par_conj__var_in_nonlocals_2_p_0(Cond_48, ConsumedVar_13);
              if (succeeded)
              {
                WaitedOnAllSuccessPaths0_23 = (MR_Integer) 0;
                transform_hlds__dep_par_conj__insert_wait_before_goal_7_p_0(ModuleInfo_10, FutureMap_12, ConsumedVar_13, Goal0_15, &Goal1_27, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_92_92);
              }
              else
              {
                MR_Word ThenWaitedOnAllSuccessPaths_51;
                MR_Word Then_52;
                MR_Word ElseWaitedOnAllSuccessPaths_53;
                MR_Word Else_54;
                MR_Word STATE_VARIABLE_VarTable_103_103;
                MR_Word GoalExpr_130;

                transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(ModuleInfo_10, AllowSomePathsOnly_11, FutureMap_12, ConsumedVar_13, &ThenWaitedOnAllSuccessPaths_51, Then0_49, &Then_52, STATE_VARIABLE_VarTable_0_90, &STATE_VARIABLE_VarTable_103_103);
                transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(ModuleInfo_10, AllowSomePathsOnly_11, FutureMap_12, ConsumedVar_13, &ElseWaitedOnAllSuccessPaths_53, Else0_50, &Else_54, STATE_VARIABLE_VarTable_103_103, &STATE_VARIABLE_VarTable_92_92);
                transform_hlds__dep_par_conj__join_branches_3_p_0(ThenWaitedOnAllSuccessPaths_51, ElseWaitedOnAllSuccessPaths_53, &WaitedOnAllSuccessPaths0_23);
                {
                  GoalExpr_130 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(3, GoalExpr_130, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(3, GoalExpr_130, 1) = ((MR_Box) (Quant_47));
                  MR_hl_field(3, GoalExpr_130, 2) = ((MR_Box) (Cond_48));
                  MR_hl_field(3, GoalExpr_130, 3) = ((MR_Box) (Then_52));
                  MR_hl_field(3, GoalExpr_130, 4) = ((MR_Box) (Else_54));
                }
                {
                  Goal1_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(0, Goal1_27, 0) = ((MR_Box) (GoalExpr_130));
                  MR_hl_field(0, Goal1_27, 1) = ((MR_Box) (GoalInfo0_19));
                }
              }
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_wait_in_goal\'/9", (MR_String) "shorthand");
              return;
            }
            break;
        }
        break;
    }
    switch (WaitedOnAllSuccessPaths0_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word Renaming_85;
          MR_Word Var_115;
          MR_Word _CloneVar_86;

          Var_115 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]));
          hlds__goal_util__clone_variable_7_p_0(ConsumedVar_13, STATE_VARIABLE_VarTable_92_92, STATE_VARIABLE_VarTable_92_92, &STATE_VARIABLE_VarTable_114_114, Var_115, &Renaming_85, &_CloneVar_86);
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_85, Goal1_27, &Goal2_84);
        }
        break;
      case (MR_Integer) 0:
        {
          Goal2_84 = Goal1_27;
          STATE_VARIABLE_VarTable_114_114 = STATE_VARIABLE_VarTable_92_92;
        }
        break;
    }
  }
  else
  {
    InvariantEstablished_22 = (MR_Integer) 0;
    WaitedOnAllSuccessPaths0_23 = (MR_Integer) 1;
    Goal2_84 = Goal0_15;
    STATE_VARIABLE_VarTable_114_114 = STATE_VARIABLE_VarTable_0_90;
  }
  Detism_87 = hlds__hlds_goal__goal_info_get_determinism_1_f_0(GoalInfo0_19);
  parse_tree__prog_data__determinism_components_3_p_0(Detism_87, &Var_88, &MaxSolns_89);
  switch (MaxSolns_89) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 3:
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      switch (WaitedOnAllSuccessPaths0_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          switch (AllowSomePathsOnly_11) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                *WaitedOnAllSuccessPaths_14 = WaitedOnAllSuccessPaths0_23;
                *Goal_16 = Goal2_84;
                *STATE_VARIABLE_VarTable_91 = STATE_VARIABLE_VarTable_114_114;
              }
              break;
            case (MR_Integer) 1:
              switch (InvariantEstablished_22) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *WaitedOnAllSuccessPaths_14 = (MR_Integer) 0;
                    transform_hlds__dep_par_conj__insert_wait_after_goal_7_p_0(ModuleInfo_10, FutureMap_12, ConsumedVar_13, Goal2_84, Goal_16, STATE_VARIABLE_VarTable_114_114, STATE_VARIABLE_VarTable_91);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.insert_wait_in_goal\'/9", (MR_String) "not_waited_on_all_success_paths invariant violation");
                    return;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 0:
          {
            *WaitedOnAllSuccessPaths_14 = WaitedOnAllSuccessPaths0_23;
            *Goal_16 = Goal2_84;
            *STATE_VARIABLE_VarTable_91 = STATE_VARIABLE_VarTable_114_114;
          }
          break;
      }
      break;
    case (MR_Integer) 0:
      {
        *WaitedOnAllSuccessPaths_14 = (MR_Integer) 0;
        *Goal_16 = Goal2_84;
        *STATE_VARIABLE_VarTable_91 = STATE_VARIABLE_VarTable_114_114;
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__var_in_nonlocals_2_p_0(
  MR_Word Goal_3,
  MR_Word Var_4)
{
  MR_bool succeeded;
  MR_Word Var_5;

  Var_5 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(Goal_3);
  succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_5, Var_4);
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_after_goal_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FutureMap_9,
  MR_Word ConsumedVar_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17)
{
  MR_bool succeeded;
  MR_Word FutureVar_14;
  MR_Word WaitGoal_15;
  MR_Word Var_18;
  MR_Word GoalListB_24;
  MR_Word GoalExprA_28;
  MR_Word GoalList_31;
  MR_Word GoalExpr_32;
  MR_Word Detism_33;
  MR_Word InstMapDelta_34;
  MR_Word NonLocals_35;
  MR_Word STATE_VARIABLE_GoalInfo_20_38;
  MR_Word STATE_VARIABLE_GoalInfo_21_39;
  MR_Word STATE_VARIABLE_GoalInfo_22_40;
  MR_Box conv0_FutureVar_14;
  MR_Word GoalsB_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word GoalListA_30;
  MR_Word Var_36;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), FutureMap_9, ((MR_Box) (ConsumedVar_10)), &conv0_FutureVar_14);
  FutureVar_14 = ((MR_Word) (conv0_FutureVar_14));
  transform_hlds__dep_par_conj__make_wait_or_get_6_p_0(ModuleInfo_8, STATE_VARIABLE_VarTable_0_16, FutureVar_14, ConsumedVar_10, (MR_Integer) 0, &WaitGoal_15);
  Var_18 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, WaitGoal_15, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_26 = ((MR_Unsigned) ((MR_hl_field(3, Var_25, (MR_Integer) 1))) & (MR_Integer) 1);
    GoalsB_22 = ((MR_Word) ((MR_hl_field(3, Var_25, (MR_Integer) 2))));
    succeeded = (Var_26 == (MR_Integer) 0);
  }
  if (succeeded)
    GoalListB_24 = GoalsB_22;
  else
    {
      GoalListB_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalListB_24, 0) = ((MR_Box) (WaitGoal_15));
      MR_hl_field(1, GoalListB_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  GoalExprA_28 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) GoalExprA_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprA_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_36 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprA_28, (MR_Integer) 1))) & (MR_Integer) 1);
    GoalListA_30 = ((MR_Word) ((MR_hl_field(3, GoalExprA_28, (MR_Integer) 2))));
    succeeded = (Var_36 == (MR_Integer) 0);
  }
  if (succeeded)
    GoalList_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalListA_30, GoalListB_24);
  else
    {
      GoalList_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_31, 0) = ((MR_Box) (Goal0_11));
      MR_hl_field(1, GoalList_31, 1) = ((MR_Box) (GoalListB_24));
    }
  {
    GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (GoalList_31));
  }
  hlds__hlds_goal__goal_list_determinism_2_p_0(GoalList_31, &Detism_33);
  hlds__hlds_goal__goal_list_instmap_delta_2_p_0(GoalList_31, &InstMapDelta_34);
  hlds__hlds_goal__goal_list_nonlocals_2_p_0(GoalList_31, &NonLocals_35);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_35, Var_18, &STATE_VARIABLE_GoalInfo_20_38);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_33, STATE_VARIABLE_GoalInfo_20_38, &STATE_VARIABLE_GoalInfo_21_39);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_34, STATE_VARIABLE_GoalInfo_21_39, &STATE_VARIABLE_GoalInfo_22_40);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_22_40));
  }
  *STATE_VARIABLE_VarTable_17 = STATE_VARIABLE_VarTable_0_16;
}

static void MR_CALL 
transform_hlds__dep_par_conj__insert_wait_before_goal_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word FutureMap_9,
  MR_Word ConsumedVar_10,
  MR_Word Goal0_11,
  MR_Word * Goal_12,
  MR_Word STATE_VARIABLE_VarTable_0_16,
  MR_Word * STATE_VARIABLE_VarTable_17)
{
  MR_bool succeeded;
  MR_Word FutureVar_14;
  MR_Word WaitGoal_15;
  MR_Word Var_18;
  MR_Word GoalListB_24;
  MR_Word GoalExprA_28;
  MR_Word GoalList_31;
  MR_Word GoalExpr_32;
  MR_Word Detism_33;
  MR_Word InstMapDelta_34;
  MR_Word NonLocals_35;
  MR_Word STATE_VARIABLE_GoalInfo_20_38;
  MR_Word STATE_VARIABLE_GoalInfo_21_39;
  MR_Word STATE_VARIABLE_GoalInfo_22_40;
  MR_Box conv0_FutureVar_14;
  MR_Word GoalsB_22;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Word GoalListA_30;
  MR_Word Var_36;

  mercury__map__lookup_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), FutureMap_9, ((MR_Box) (ConsumedVar_10)), &conv0_FutureVar_14);
  FutureVar_14 = ((MR_Word) (conv0_FutureVar_14));
  transform_hlds__dep_par_conj__make_wait_or_get_6_p_0(ModuleInfo_8, STATE_VARIABLE_VarTable_0_16, FutureVar_14, ConsumedVar_10, (MR_Integer) 0, &WaitGoal_15);
  Var_18 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 1))));
  Var_25 = ((MR_Word) ((MR_hl_field(0, Goal0_11, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) Var_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_25, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_26 = ((MR_Unsigned) ((MR_hl_field(3, Var_25, (MR_Integer) 1))) & (MR_Integer) 1);
    GoalsB_22 = ((MR_Word) ((MR_hl_field(3, Var_25, (MR_Integer) 2))));
    succeeded = (Var_26 == (MR_Integer) 0);
  }
  if (succeeded)
    GoalListB_24 = GoalsB_22;
  else
    {
      GoalListB_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalListB_24, 0) = ((MR_Box) (Goal0_11));
      MR_hl_field(1, GoalListB_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  GoalExprA_28 = ((MR_Word) ((MR_hl_field(0, WaitGoal_15, (MR_Integer) 0))));
  succeeded = ((((MR_tag((MR_Word) GoalExprA_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, GoalExprA_28, (MR_Integer) 0)))) == (MR_Integer) 2)));
  if (succeeded)
  {
    Var_36 = ((MR_Unsigned) ((MR_hl_field(3, GoalExprA_28, (MR_Integer) 1))) & (MR_Integer) 1);
    GoalListA_30 = ((MR_Word) ((MR_hl_field(3, GoalExprA_28, (MR_Integer) 2))));
    succeeded = (Var_36 == (MR_Integer) 0);
  }
  if (succeeded)
    GoalList_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), GoalListA_30, GoalListB_24);
  else
    {
      GoalList_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, GoalList_31, 0) = ((MR_Box) (WaitGoal_15));
      MR_hl_field(1, GoalList_31, 1) = ((MR_Box) (GoalListB_24));
    }
  {
    GoalExpr_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, GoalExpr_32, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, GoalExpr_32, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, GoalExpr_32, 2) = ((MR_Box) (GoalList_31));
  }
  hlds__hlds_goal__goal_list_determinism_2_p_0(GoalList_31, &Detism_33);
  hlds__hlds_goal__goal_list_instmap_delta_2_p_0(GoalList_31, &InstMapDelta_34);
  hlds__hlds_goal__goal_list_nonlocals_2_p_0(GoalList_31, &NonLocals_35);
  hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(NonLocals_35, Var_18, &STATE_VARIABLE_GoalInfo_20_38);
  hlds__hlds_goal__goal_info_set_determinism_3_p_0(Detism_33, STATE_VARIABLE_GoalInfo_20_38, &STATE_VARIABLE_GoalInfo_21_39);
  hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(InstMapDelta_34, STATE_VARIABLE_GoalInfo_21_39, &STATE_VARIABLE_GoalInfo_22_40);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *Goal_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_32));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_GoalInfo_22_40));
  }
  *STATE_VARIABLE_VarTable_17 = STATE_VARIABLE_VarTable_0_16;
}

static void MR_CALL 
transform_hlds__dep_par_conj__make_wait_or_get_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word VarTable_8,
  MR_Word FutureVar_9,
  MR_Word ConsumedVar_10,
  MR_Word WaitOrGetPred_11,
  MR_Word * WaitGoal_12)
{
  MR_Word ModuleName_13;
  MR_String PredName_14;
  MR_Word Purity_15;
  MR_String Code_16;
  MR_Word InstMapDelta_18;
  MR_Word Context_19;
  MR_Word ShouldInline_20;

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
  Context_19 = mercury__term_context__dummy_context_0_f_0();
  ShouldInline_20 = transform_hlds__dep_par_conj__should_inline_par_builtin_calls_1_f_0(ModuleInfo_7);
  switch (ShouldInline_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Word ArgVars_21;
        MR_Word Var_29;

        {
          Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_29, 0) = ((MR_Box) (ConsumedVar_10));
          MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          ArgVars_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ArgVars_21, 0) = ((MR_Box) (FutureVar_9));
          MR_hl_field(1, ArgVars_21, 1) = ((MR_Box) (Var_29));
        }
        hlds__goal_util__generate_plain_call_13_p_0(ModuleInfo_7, (MR_Integer) 0, ModuleName_13, PredName_14, (MR_Word) ((MR_Unsigned) 0U), ArgVars_21, InstMapDelta_18, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Purity_15, (MR_Word) ((MR_Unsigned) 0U), Context_19, WaitGoal_12);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word ForeignAttrs_22;
        MR_Word FutureVarType_23;
        MR_Word ConsumedVarType_24;
        MR_Word Arg1_25;
        MR_Word Arg2_26;
        MR_Word Args_27;
        MR_Word Var_36;
        MR_Word Var_37;
        MR_Word Var_39;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_44;
        MR_Word Var_46;
        MR_Word STATE_VARIABLE_Attrs_8_53;
        MR_Word STATE_VARIABLE_Attrs_11_56;
        MR_Word STATE_VARIABLE_Attrs_13_58;
        MR_Word STATE_VARIABLE_Attrs_14_59;
        MR_Word STATE_VARIABLE_Attrs_16_61;
        MR_Word STATE_VARIABLE_Attrs_18_63;
        MR_Word STATE_VARIABLE_Attrs_20_65;
        MR_Word STATE_VARIABLE_Attrs_22_67;
        MR_Word STATE_VARIABLE_Attrs_24_69;
        MR_Word STATE_VARIABLE_Attrs_26_71;
        MR_Word STATE_VARIABLE_Attrs_27_72;

        STATE_VARIABLE_Attrs_8_53 = parse_tree__prog_data_foreign__default_attributes_1_f_0((MR_Integer) 0);
        parse_tree__prog_data_foreign__set_may_call_mercury_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_8_53, &STATE_VARIABLE_Attrs_11_56);
        parse_tree__prog_data_foreign__set_thread_safe_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_11_56, &STATE_VARIABLE_Attrs_13_58);
        parse_tree__prog_data_foreign__set_purity_3_p_0(Purity_15, STATE_VARIABLE_Attrs_13_58, &STATE_VARIABLE_Attrs_14_59);
        parse_tree__prog_data_foreign__set_terminates_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_14_59, &STATE_VARIABLE_Attrs_16_61);
        parse_tree__prog_data_foreign__set_may_throw_exception_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_16_61, &STATE_VARIABLE_Attrs_18_63);
        parse_tree__prog_data_foreign__set_may_modify_trail_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_18_63, &STATE_VARIABLE_Attrs_20_65);
        parse_tree__prog_data_foreign__set_affects_liveness_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_20_65, &STATE_VARIABLE_Attrs_22_67);
        parse_tree__prog_data_foreign__set_allocates_memory_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_22_67, &STATE_VARIABLE_Attrs_24_69);
        parse_tree__prog_data_foreign__set_registers_roots_3_p_0((MR_Integer) 1, STATE_VARIABLE_Attrs_24_69, &STATE_VARIABLE_Attrs_26_71);
        parse_tree__prog_data_foreign__set_call_std_out_regs_3_p_0((MR_Integer) 0, STATE_VARIABLE_Attrs_26_71, &STATE_VARIABLE_Attrs_27_72);
        parse_tree__prog_data_foreign__set_may_duplicate_3_p_0((MR_Word) (MR_mkword(1, &transform_hlds__dep_par_conj_scalar_common_3[3])), STATE_VARIABLE_Attrs_27_72, &ForeignAttrs_22);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_8, FutureVar_9, &FutureVarType_23);
        parse_tree__var_table__lookup_var_type_3_p_0(VarTable_8, ConsumedVar_10, &ConsumedVarType_24);
        Var_39 = parse_tree__prog_mode__in_mode_0_f_0();
        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) ((MR_String) "Future"));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (Var_39));
        }
        {
          Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_36, 0) = ((MR_Box) (Var_37));
        }
        {
          Arg1_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg1_25, 0) = ((MR_Box) (FutureVar_9));
          MR_hl_field(0, Arg1_25, 1) = ((MR_Box) (Var_36));
          MR_hl_field(0, Arg1_25, 2) = ((MR_Box) (FutureVarType_23));
          MR_hl_field(0, Arg1_25, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        Var_44 = parse_tree__prog_mode__out_mode_0_f_0();
        {
          Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_42, 0) = ((MR_Box) ((MR_String) "Value"));
          MR_hl_field(0, Var_42, 1) = ((MR_Box) (Var_44));
        }
        {
          Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
        }
        {
          Arg2_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Arg2_26, 0) = ((MR_Box) (ConsumedVar_10));
          MR_hl_field(0, Arg2_26, 1) = ((MR_Box) (Var_41));
          MR_hl_field(0, Arg2_26, 2) = ((MR_Box) (ConsumedVarType_24));
          MR_hl_field(0, Arg2_26, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (Arg2_26));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Args_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Args_27, 0) = ((MR_Box) (Arg1_25));
          MR_hl_field(1, Args_27, 1) = ((MR_Box) (Var_46));
        }
        hlds__goal_util__generate_call_foreign_proc_17_p_0(ModuleInfo_7, (MR_Integer) 0, ModuleName_13, PredName_14, (MR_Word) ((MR_Unsigned) 0U), Args_27, (MR_Word) ((MR_Unsigned) 0U), InstMapDelta_18, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, Purity_15, (MR_Word) ((MR_Unsigned) 0U), ForeignAttrs_22, (MR_Word) ((MR_Unsigned) 0U), Code_16, Context_19, WaitGoal_12);
      }
      break;
  }
}

static MR_Word MR_CALL 
transform_hlds__dep_par_conj__should_inline_par_builtin_calls_1_f_0(
  MR_Word ModuleInfo_3)
{
  MR_Word ShouldInline_4;
  MR_Word Globals_5;
  MR_Word OptTuple_6;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_5);
  libs__globals__get_opt_tuple_2_p_0(Globals_5, &OptTuple_6);
  ShouldInline_4 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_6, (MR_Integer) 1))) >> 23)) & (MR_Integer) 1);
  return ShouldInline_4;
}

static void MR_CALL 
transform_hlds__dep_par_conj__join_branches_3_p_0(
  MR_Word WaitedA_4,
  MR_Word WaitedB_5,
  MR_Word * Waited_6)
{
  MR_bool succeeded = (WaitedA_4 == (MR_Integer) 0);

  if (succeeded)
    succeeded = (WaitedB_5 == (MR_Integer) 0);
  if (succeeded)
    *Waited_6 = (MR_Integer) 0;
  else
    *Waited_6 = (MR_Integer) 1;
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Goal_12;
  MR_Word conv5_STATE_VARIABLE_VarTable_71;

  transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_Goal_12, ((MR_Word) (wrapper_arg_4)), &conv5_STATE_VARIABLE_VarTable_71);
  *wrapper_arg_3 = ((MR_Box) (conv6_Goal_12));
  *wrapper_arg_5 = ((MR_Box) (conv5_STATE_VARIABLE_VarTable_71));
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_WaitedOnAllSuccessPaths_14;
  MR_Word conv1_Goal_16;
  MR_Word conv0_STATE_VARIABLE_VarTable_91;

  transform_hlds__dep_par_conj__insert_wait_in_goal_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv2_WaitedOnAllSuccessPaths_14, ((MR_Word) (wrapper_arg_3)), &conv1_Goal_16, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_VarTable_91);
  *wrapper_arg_2 = ((MR_Box) (conv2_WaitedOnAllSuccessPaths_14));
  *wrapper_arg_4 = ((MR_Box) (conv1_Goal_16));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_VarTable_91));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word AllowSomePathsOnly_12,
  MR_Word SharedVars_13,
  MR_Word FutureMap_14,
  MR_Word STATE_VARIABLE_Goal_0_26,
  MR_Word * STATE_VARIABLE_Goal_27,
  MR_Word STATE_VARIABLE_InstMap_0_28,
  MR_Word * STATE_VARIABLE_InstMap_29,
  MR_Word STATE_VARIABLE_VarTable_0_30,
  MR_Word * STATE_VARIABLE_VarTable_31)
{
  MR_bool succeeded;
  MR_Word Nonlocals_18;
  MR_Word NonlocalSharedVars_19;

  Nonlocals_18 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(STATE_VARIABLE_Goal_0_26);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Nonlocals_18, SharedVars_13, &NonlocalSharedVars_19);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonlocalSharedVars_19);
  if (succeeded)
  {
    *STATE_VARIABLE_VarTable_31 = STATE_VARIABLE_VarTable_0_30;
    *STATE_VARIABLE_Goal_27 = STATE_VARIABLE_Goal_0_26;
  }
  else
  {
    MR_Word GoalInfo0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_26, (MR_Integer) 1))));
    MR_Word InstMapDelta0_21;
    MR_Word ConsumedVarsList_22;
    MR_Word ProducedVarsList_23;
    MR_Word Renaming_25;
    MR_Word Var_32;
    MR_Word STATE_VARIABLE_Goal_33_33;
    MR_Word STATE_VARIABLE_VarTable_34_34;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_Goal_36_36;
    MR_Word STATE_VARIABLE_VarTable_37_37;
    MR_Word Var_40;
    MR_Word IsProducedVar_53;
    MR_Word ProducedVars_54;
    MR_Word ConsumedVars_55;
    MR_Word _WaitedOnAllSuccessPaths_24;
    MR_Box conv4_STATE_VARIABLE_Goal_33_33;
    MR_Box conv3_STATE_VARIABLE_VarTable_34_34;
    MR_Box conv8_STATE_VARIABLE_Goal_36_36;
    MR_Box conv7_STATE_VARIABLE_VarTable_37_37;

    InstMapDelta0_21 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_20);
    {
      IsProducedVar_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IsProducedVar_53, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_4[0]));
      MR_hl_field(0, IsProducedVar_53, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0_1));
      MR_hl_field(0, IsProducedVar_53, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, IsProducedVar_53, 3) = ((MR_Box) (ModuleInfo_11));
      MR_hl_field(0, IsProducedVar_53, 4) = ((MR_Box) (STATE_VARIABLE_InstMap_0_28));
      MR_hl_field(0, IsProducedVar_53, 5) = ((MR_Box) (InstMapDelta0_21));
    }
    parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IsProducedVar_53, NonlocalSharedVars_19, &ProducedVars_54, &ConsumedVars_55);
    ConsumedVarsList_22 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumedVars_55);
    ProducedVarsList_23 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducedVars_54);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_32, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_12[2]));
      MR_hl_field(0, Var_32, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0_2));
      MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_32, 3) = ((MR_Box) (ModuleInfo_11));
      MR_hl_field(0, Var_32, 4) = ((MR_Box) (AllowSomePathsOnly_12));
      MR_hl_field(0, Var_32, 5) = ((MR_Box) (FutureMap_14));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_waited_on_all_success_paths_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_32, ConsumedVarsList_22, &_WaitedOnAllSuccessPaths_24, ((MR_Box) (STATE_VARIABLE_Goal_0_26)), &conv4_STATE_VARIABLE_Goal_33_33, ((MR_Box) (STATE_VARIABLE_VarTable_0_30)), &conv3_STATE_VARIABLE_VarTable_34_34);
    STATE_VARIABLE_Goal_33_33 = ((MR_Word) (conv4_STATE_VARIABLE_Goal_33_33));
    STATE_VARIABLE_VarTable_34_34 = ((MR_Word) (conv3_STATE_VARIABLE_VarTable_34_34));
    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[0]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0_3));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (ModuleInfo_11));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (FutureMap_14));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_35, ProducedVarsList_23, ((MR_Box) (STATE_VARIABLE_Goal_33_33)), &conv8_STATE_VARIABLE_Goal_36_36, ((MR_Box) (STATE_VARIABLE_VarTable_34_34)), &conv7_STATE_VARIABLE_VarTable_37_37);
    STATE_VARIABLE_Goal_36_36 = ((MR_Word) (conv8_STATE_VARIABLE_Goal_36_36));
    STATE_VARIABLE_VarTable_37_37 = ((MR_Word) (conv7_STATE_VARIABLE_VarTable_37_37));
    Var_40 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]));
    hlds__goal_util__clone_variables_6_p_0(ConsumedVarsList_22, STATE_VARIABLE_VarTable_37_37, STATE_VARIABLE_VarTable_37_37, STATE_VARIABLE_VarTable_31, Var_40, &Renaming_25);
    hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(Renaming_25, STATE_VARIABLE_Goal_36_36, STATE_VARIABLE_Goal_27);
  }
  hlds__goal_util__update_instmap_3_p_0(*STATE_VARIABLE_Goal_27, STATE_VARIABLE_InstMap_0_28, STATE_VARIABLE_InstMap_29);
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_proc_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ProcsToScan_0_20,
  MR_Word * STATE_VARIABLE_ProcsToScan_21,
  MR_Word STATE_VARIABLE_TSStringTable_0_22,
  MR_Word * STATE_VARIABLE_TSStringTable_23)
{
  transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_115_121_110_99_95_100_101_112_95_112_97_114_95_99_111_110_106_115_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_9_p_0(PredId_11, ProcId_12, STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ProcsToScan_0_20, STATE_VARIABLE_ProcsToScan_21, STATE_VARIABLE_TSStringTable_0_22, STATE_VARIABLE_TSStringTable_23);
}

static void MR_CALL 
transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_121_98_101_95_115_121_110_99_95_100_101_112_95_112_97_114_95_99_111_110_106_115_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_9_p_0(
  MR_Word PredId_11,
  MR_Integer ProcId_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_18,
  MR_Word * STATE_VARIABLE_ModuleInfo_19,
  MR_Word STATE_VARIABLE_ProcsToScan_0_20,
  MR_Word * STATE_VARIABLE_ProcsToScan_21,
  MR_Word STATE_VARIABLE_TSStringTable_0_22,
  MR_Word * STATE_VARIABLE_TSStringTable_23)
{
  MR_Word ProcInfo_16;
  MR_Word HasParallelConj_17;

  hlds__hlds_module__module_info_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_18, PredId_11, ProcId_12, &ProcInfo_16);
  hlds__hlds_pred__proc_info_get_has_parallel_conj_2_p_0(ProcInfo_16, &HasParallelConj_17);
  switch (HasParallelConj_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_ModuleInfo_19 = STATE_VARIABLE_ModuleInfo_0_18;
        *STATE_VARIABLE_ProcsToScan_21 = STATE_VARIABLE_ProcsToScan_0_20;
        *STATE_VARIABLE_TSStringTable_23 = STATE_VARIABLE_TSStringTable_0_22;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_24;

        Var_24 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
        transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_121_110_99_95_100_101_112_95_112_97_114_95_99_111_110_106_115_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_10_p_0(PredId_11, ProcId_12, Var_24, STATE_VARIABLE_ModuleInfo_0_18, STATE_VARIABLE_ModuleInfo_19, STATE_VARIABLE_ProcsToScan_0_20, STATE_VARIABLE_ProcsToScan_21, STATE_VARIABLE_TSStringTable_0_22, STATE_VARIABLE_TSStringTable_23);
      }
      break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_19;
  MR_Word conv1_STATE_VARIABLE_ProcsToScan_21;
  MR_Word conv0_STATE_VARIABLE_TSStringTable_23;

  transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_proc_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_19, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ProcsToScan_21, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_TSStringTable_23);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_19));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ProcsToScan_21));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_TSStringTable_23));
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word PredId_10,
  MR_Word STATE_VARIABLE_ModuleInfo_0_16,
  MR_Word * STATE_VARIABLE_ModuleInfo_17,
  MR_Word STATE_VARIABLE_ProcsToScan_0_18,
  MR_Word * STATE_VARIABLE_ProcsToScan_19,
  MR_Word STATE_VARIABLE_TSStringTable_0_20,
  MR_Word * STATE_VARIABLE_TSStringTable_21)
{
  MR_Word PredInfo_14;
  MR_Word ProcIds_15;
  MR_Word Var_22;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_17;
  MR_Box conv4_STATE_VARIABLE_ProcsToScan_19;
  MR_Box conv3_STATE_VARIABLE_TSStringTable_21;

  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_16, PredId_10, &PredInfo_14);
  ProcIds_15 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_14);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_12[1]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_8_p_0_1));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (ProgressStream_9));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (PredId_10));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[0]), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0), Var_22, ProcIds_15, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_16)), &conv5_STATE_VARIABLE_ModuleInfo_17, ((MR_Box) (STATE_VARIABLE_ProcsToScan_0_18)), &conv4_STATE_VARIABLE_ProcsToScan_19, ((MR_Box) (STATE_VARIABLE_TSStringTable_0_20)), &conv3_STATE_VARIABLE_TSStringTable_21);
  *STATE_VARIABLE_ModuleInfo_17 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_17));
  *STATE_VARIABLE_ProcsToScan_19 = ((MR_Word) (conv4_STATE_VARIABLE_ProcsToScan_19));
  *STATE_VARIABLE_TSStringTable_21 = ((MR_Word) (conv3_STATE_VARIABLE_TSStringTable_21));
}

static void MR_CALL 
transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_3_p_0_2(
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
  MR_Box closure = closure_arg;
  MR_Word conv9_STATE_VARIABLE_ModuleInfo_41;
  MR_Word conv8_STATE_VARIABLE_PendingParProcs_43;
  MR_Word conv7_STATE_VARIABLE_Pushability_45;
  MR_Word conv6_STATE_VARIABLE_RevProcMap_47;

  transform_hlds__dep_par_conj__find_specialization_requests_in_proc_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_STATE_VARIABLE_ModuleInfo_41, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_PendingParProcs_43, ((MR_Word) (wrapper_arg_6)), &conv7_STATE_VARIABLE_Pushability_45, ((MR_Word) (wrapper_arg_8)), &conv6_STATE_VARIABLE_RevProcMap_47);
  *wrapper_arg_3 = ((MR_Box) (conv9_STATE_VARIABLE_ModuleInfo_41));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_PendingParProcs_43));
  *wrapper_arg_7 = ((MR_Box) (conv7_STATE_VARIABLE_Pushability_45));
  *wrapper_arg_9 = ((MR_Box) (conv6_STATE_VARIABLE_RevProcMap_47));
}

static void MR_CALL 
transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_ModuleInfo_17;
  MR_Word conv1_STATE_VARIABLE_ProcsToScan_19;
  MR_Word conv0_STATE_VARIABLE_TSStringTable_21;

  transform_hlds__dep_par_conj__maybe_sync_dep_par_conjs_in_pred_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_ModuleInfo_17, ((MR_Word) (wrapper_arg_4)), &conv1_STATE_VARIABLE_ProcsToScan_19, ((MR_Word) (wrapper_arg_6)), &conv0_STATE_VARIABLE_TSStringTable_21);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_ModuleInfo_17));
  *wrapper_arg_5 = ((MR_Box) (conv1_STATE_VARIABLE_ProcsToScan_19));
  *wrapper_arg_7 = ((MR_Box) (conv0_STATE_VARIABLE_TSStringTable_21));
}

void MR_CALL 
transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_3_p_0(
  MR_Word ProgressStream_4,
  MR_Word STATE_VARIABLE_ModuleInfo_0_22,
  MR_Word * STATE_VARIABLE_ModuleInfo_23)
{
  MR_Word PredIds_7;
  MR_Word RevTable0_9;
  MR_Word TSStringTable0_10;
  MR_Word ProcsToScan_11;
  MR_Word TSStringTable1_12;
  MR_Word DoneParProcs0_13;
  MR_Word Pushability0_15;
  MR_Word RevProcMap0_16;
  MR_Word PendingParProcs_17;
  MR_Word Pushability_18;
  MR_Word RevProcMap_19;
  MR_Word TSStringTable_21;
  MR_Word Var_24;
  MR_Word STATE_VARIABLE_ModuleInfo_25_25;
  MR_Word Var_27;
  MR_Word STATE_VARIABLE_ModuleInfo_28_28;
  MR_Word STATE_VARIABLE_ModuleInfo_29_29;
  MR_Integer Var_30;
  MR_Word Var_33;
  MR_Word Map_63;
  MR_Integer Size_64;
  MR_Word Var_65;
  MR_Integer Var_8;
  MR_Box conv5_STATE_VARIABLE_ModuleInfo_25_25;
  MR_Box conv4_ProcsToScan_11;
  MR_Box conv3_TSStringTable1_12;
  MR_Box conv13_STATE_VARIABLE_ModuleInfo_28_28;
  MR_Box conv12_PendingParProcs_17;
  MR_Box conv11_Pushability_18;
  MR_Box conv10_RevProcMap_19;
  MR_Word Var_20;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_ModuleInfo_0_22, &PredIds_7);
  hlds__hlds_module__module_info_get_ts_rev_string_table_3_p_0(STATE_VARIABLE_ModuleInfo_0_22, &Var_8, &RevTable0_9);
  Var_65 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
  transform_hlds__dep_par_conj__make_ts_string_table_2_4_p_0(RevTable0_9, &Size_64, Var_65, &Map_63);
  {
    TSStringTable0_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TSStringTable0_10, 0) = ((MR_Box) (Map_63));
    MR_hl_field(0, TSStringTable0_10, 1) = ((MR_Box) (RevTable0_9));
    MR_hl_field(0, TSStringTable0_10, 2) = ((MR_Box) (Size_64));
  }
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_5[1]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_3_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (ProgressStream_4));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[0]), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0), Var_24, PredIds_7, ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_22)), &conv5_STATE_VARIABLE_ModuleInfo_25_25, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_ProcsToScan_11, ((MR_Box) (TSStringTable0_10)), &conv3_TSStringTable1_12);
  STATE_VARIABLE_ModuleInfo_25_25 = ((MR_Word) (conv5_STATE_VARIABLE_ModuleInfo_25_25));
  ProcsToScan_11 = ((MR_Word) (conv4_ProcsToScan_11));
  TSStringTable1_12 = ((MR_Word) (conv3_TSStringTable1_12));
  DoneParProcs0_13 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0));
  Pushability0_15 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]));
  RevProcMap0_16 = mercury__map__init_0_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0));
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_15[0]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_3_p_0_2));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (DoneParProcs0_13));
    MR_hl_field(0, Var_27, 4) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_22));
  }
  mercury__list__foldl4_10_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[1]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[3]), Var_27, ProcsToScan_11, ((MR_Box) (STATE_VARIABLE_ModuleInfo_25_25)), &conv13_STATE_VARIABLE_ModuleInfo_28_28, ((MR_Box) ((MR_Unsigned) 0U)), &conv12_PendingParProcs_17, ((MR_Box) (Pushability0_15)), &conv11_Pushability_18, ((MR_Box) (RevProcMap0_16)), &conv10_RevProcMap_19);
  STATE_VARIABLE_ModuleInfo_28_28 = ((MR_Word) (conv13_STATE_VARIABLE_ModuleInfo_28_28));
  PendingParProcs_17 = ((MR_Word) (conv12_PendingParProcs_17));
  Pushability_18 = ((MR_Word) (conv11_Pushability_18));
  RevProcMap_19 = ((MR_Word) (conv10_RevProcMap_19));
  transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_113_117_101_115_116_101_100_95_115_112_101_99_105_97_108_105_122_101_100_95_112_97_114_95_112_114_111_99_115_95_95_91_49_93_95_48_11_p_0(PendingParProcs_17, Pushability_18, DoneParProcs0_13, STATE_VARIABLE_ModuleInfo_0_22, STATE_VARIABLE_ModuleInfo_28_28, &STATE_VARIABLE_ModuleInfo_29_29, RevProcMap_19, &Var_20, TSStringTable1_12, &TSStringTable_21);
  Var_33 = ((MR_Word) ((MR_hl_field(0, TSStringTable_21, (MR_Integer) 1))));
  Var_30 = ((MR_Integer) ((MR_hl_field(0, TSStringTable_21, (MR_Integer) 2))));
  hlds__hlds_module__module_info_set_ts_rev_string_table_4_p_0(Var_30, Var_33, STATE_VARIABLE_ModuleInfo_29_29, STATE_VARIABLE_ModuleInfo_23);
}

static void MR_CALL 
transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_113_117_101_115_116_101_100_95_115_112_101_99_105_97_108_105_122_101_100_95_112_97_114_95_112_114_111_99_115_95_95_91_49_93_95_48_11_p_0(
  MR_Word STATE_VARIABLE_PendingParProcs_0_22,
  MR_Word STATE_VARIABLE_Pushability_0_23,
  MR_Word STATE_VARIABLE_DoneParProcs_0_24,
  MR_Word InitialModuleInfo_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_RevProcMap_0_27,
  MR_Word * STATE_VARIABLE_RevProcMap_28,
  MR_Word STATE_VARIABLE_TSStringTable_0_29,
  MR_Word * STATE_VARIABLE_TSStringTable_30)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((STATE_VARIABLE_PendingParProcs_0_22 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_ModuleInfo_26 = STATE_VARIABLE_ModuleInfo_0_25;
      *STATE_VARIABLE_RevProcMap_28 = STATE_VARIABLE_RevProcMap_0_27;
      *STATE_VARIABLE_TSStringTable_30 = STATE_VARIABLE_TSStringTable_0_29;
    }
    else
    {
      MR_Word CallPattern_20;
      MR_Word NewProc_21;
      MR_Word STATE_VARIABLE_PendingParProcs_31_31 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PendingParProcs_0_22, (MR_Integer) 1))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_PendingParProcs_0_22, (MR_Integer) 0))));
      MR_Word STATE_VARIABLE_DoneParProcs_33_33;
      MR_Word STATE_VARIABLE_PendingParProcs_34_34;
      MR_Word STATE_VARIABLE_Pushability_35_35;
      MR_Word STATE_VARIABLE_ModuleInfo_36_36;
      MR_Word STATE_VARIABLE_RevProcMap_37_37;
      MR_Word STATE_VARIABLE_TSStringTable_38_38;
      MR_Word next_value_of_STATE_VARIABLE_PendingParProcs_0_22;
      MR_Word next_value_of_STATE_VARIABLE_Pushability_0_23;
      MR_Word next_value_of_STATE_VARIABLE_DoneParProcs_0_24;
      MR_Word next_value_of_STATE_VARIABLE_ModuleInfo_0_25;
      MR_Word next_value_of_STATE_VARIABLE_RevProcMap_0_27;
      MR_Word next_value_of_STATE_VARIABLE_TSStringTable_0_29;

      CallPattern_20 = ((MR_Word) ((MR_hl_field(0, Var_32, (MR_Integer) 0))));
      NewProc_21 = ((MR_Word) ((MR_hl_field(0, Var_32, (MR_Integer) 1))));
      mercury__map__det_insert_4_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0), ((MR_Box) (CallPattern_20)), ((MR_Box) (NewProc_21)), STATE_VARIABLE_DoneParProcs_0_24, &STATE_VARIABLE_DoneParProcs_33_33);
      transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_113_117_101_115_116_101_100_95_115_112_101_99_105_97_108_105_122_101_100_95_112_97_114_95_112_114_111_99_95_95_91_49_93_95_48_15_p_0(CallPattern_20, NewProc_21, STATE_VARIABLE_PendingParProcs_31_31, &STATE_VARIABLE_PendingParProcs_34_34, STATE_VARIABLE_Pushability_0_23, &STATE_VARIABLE_Pushability_35_35, STATE_VARIABLE_DoneParProcs_33_33, InitialModuleInfo_16, STATE_VARIABLE_ModuleInfo_0_25, &STATE_VARIABLE_ModuleInfo_36_36, STATE_VARIABLE_RevProcMap_0_27, &STATE_VARIABLE_RevProcMap_37_37, STATE_VARIABLE_TSStringTable_0_29, &STATE_VARIABLE_TSStringTable_38_38);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_PendingParProcs_0_22 = STATE_VARIABLE_PendingParProcs_34_34;
      next_value_of_STATE_VARIABLE_Pushability_0_23 = STATE_VARIABLE_Pushability_35_35;
      next_value_of_STATE_VARIABLE_DoneParProcs_0_24 = STATE_VARIABLE_DoneParProcs_33_33;
      next_value_of_STATE_VARIABLE_ModuleInfo_0_25 = STATE_VARIABLE_ModuleInfo_36_36;
      next_value_of_STATE_VARIABLE_RevProcMap_0_27 = STATE_VARIABLE_RevProcMap_37_37;
      next_value_of_STATE_VARIABLE_TSStringTable_0_29 = STATE_VARIABLE_TSStringTable_38_38;
      STATE_VARIABLE_PendingParProcs_0_22 = next_value_of_STATE_VARIABLE_PendingParProcs_0_22;
      STATE_VARIABLE_Pushability_0_23 = next_value_of_STATE_VARIABLE_Pushability_0_23;
      STATE_VARIABLE_DoneParProcs_0_24 = next_value_of_STATE_VARIABLE_DoneParProcs_0_24;
      STATE_VARIABLE_ModuleInfo_0_25 = next_value_of_STATE_VARIABLE_ModuleInfo_0_25;
      STATE_VARIABLE_RevProcMap_0_27 = next_value_of_STATE_VARIABLE_RevProcMap_0_27;
      STATE_VARIABLE_TSStringTable_0_29 = next_value_of_STATE_VARIABLE_TSStringTable_0_29;
      continue;
    }
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_113_117_101_115_116_101_100_95_115_112_101_99_105_97_108_105_122_101_100_95_112_97_114_95_112_114_111_99_95_95_91_49_93_95_48_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_FutureMap_18;
  MR_Word conv0_STATE_VARIABLE_VarTable_20;

  transform_hlds__dep_par_conj__map_arg_to_new_future_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FutureMap_18, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_VarTable_20);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FutureMap_18));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_VarTable_20));
}

static void MR_CALL 
transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_113_117_101_115_116_101_100_95_115_112_101_99_105_97_108_105_122_101_100_95_112_97_114_95_112_114_111_99_95_95_91_49_93_95_48_15_p_0(
  MR_Word CallPattern_17,
  MR_Word NewProc_18,
  MR_Word STATE_VARIABLE_PendingParProcs_0_54,
  MR_Word * STATE_VARIABLE_PendingParProcs_55,
  MR_Word STATE_VARIABLE_Pushability_0_56,
  MR_Word * STATE_VARIABLE_Pushability_57,
  MR_Word DoneParProcs_21,
  MR_Word InitialModuleInfo_22,
  MR_Word STATE_VARIABLE_ModuleInfo_0_58,
  MR_Word * STATE_VARIABLE_ModuleInfo_59,
  MR_Word STATE_VARIABLE_RevProcMap_0_60,
  MR_Word * STATE_VARIABLE_RevProcMap_61,
  MR_Word STATE_VARIABLE_TSStringTable_0_62,
  MR_Word * STATE_VARIABLE_TSStringTable_63)
{
  MR_bool succeeded;
  MR_Word OldPredProcId_26 = ((MR_Word) ((MR_hl_field(0, CallPattern_17, (MR_Integer) 0))));
  MR_Word FutureArgs_27 = ((MR_Word) ((MR_hl_field(0, CallPattern_17, (MR_Integer) 1))));
  MR_Word NewPredProcId_28 = ((MR_Word) ((MR_hl_field(0, NewProc_18, (MR_Integer) 0))));
  MR_Word OldPredId_30 = ((MR_Word) ((MR_hl_field(0, OldPredProcId_26, (MR_Integer) 0))));
  MR_Integer OldProcId_31 = ((MR_Integer) ((MR_hl_field(0, OldPredProcId_26, (MR_Integer) 1))));
  MR_Word NewPredId_32 = ((MR_Word) ((MR_hl_field(0, NewPredProcId_28, (MR_Integer) 0))));
  MR_Integer NewProcId_33 = ((MR_Integer) ((MR_hl_field(0, NewPredProcId_28, (MR_Integer) 1))));
  MR_Word HeadVars0_36;
  MR_Word ArgModes0_37;
  MR_Word Goal0_38;
  MR_Word InstMap0_39;
  MR_Word FutureMap_40;
  MR_Word HeadVars_41;
  MR_Word ArgModes_42;
  MR_Word Globals_43;
  MR_Word OptTuple_44;
  MR_Word AllowSomePathsOnly_45;
  MR_Word SharedVars_46;
  MR_Word Goal_47;
  MR_Word NewPredInfo0_48;
  MR_Word NewPredInfo_49;
  MR_Word IgnoreVars_52;
  MR_Word STATE_VARIABLE_NewProcInfo_64_64;
  MR_Word STATE_VARIABLE_VarTable_65_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word STATE_VARIABLE_VarTable_68_68;
  MR_Word Var_69;
  MR_Word STATE_VARIABLE_VarTable_70_70;
  MR_Word STATE_VARIABLE_NewProcInfo_71_71;
  MR_Word STATE_VARIABLE_NewProcInfo_72_72;
  MR_Word STATE_VARIABLE_NewProcInfo_73_73;
  MR_Word STATE_VARIABLE_NewProcInfo_74_74;
  MR_Word STATE_VARIABLE_ModuleInfo_76_76;
  MR_Word Var_77;
  MR_Word STATE_VARIABLE_ModuleInfo_78_78;
  MR_Box conv3_FutureMap_40;
  MR_Box conv2_STATE_VARIABLE_VarTable_68_68;
  MR_Word _ProcsToScan_53;

  hlds__hlds_module__module_info_proc_info_4_p_0(InitialModuleInfo_22, OldPredId_30, OldProcId_31, &STATE_VARIABLE_NewProcInfo_64_64);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_NewProcInfo_64_64, &STATE_VARIABLE_VarTable_65_65);
  hlds__hlds_pred__proc_info_get_headvars_2_p_0(STATE_VARIABLE_NewProcInfo_64_64, &HeadVars0_36);
  hlds__hlds_pred__proc_info_get_argmodes_2_p_0(STATE_VARIABLE_NewProcInfo_64_64, &ArgModes0_37);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_NewProcInfo_64_64, &Goal0_38);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(InitialModuleInfo_22, STATE_VARIABLE_NewProcInfo_64_64, &InstMap0_39);
  {
    Var_66 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_66, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_14[0]));
    MR_hl_field(0, Var_66, 1) = ((MR_Box) (transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_114_101_113_117_101_115_116_101_100_95_115_112_101_99_105_97_108_105_122_101_100_95_112_97_114_95_112_114_111_99_95_95_91_49_93_95_48_15_p_0_1));
    MR_hl_field(0, Var_66, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_66, 3) = ((MR_Box) (HeadVars0_36));
  }
  Var_67 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]));
  mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[4]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_66, FutureArgs_27, ((MR_Box) (Var_67)), &conv3_FutureMap_40, ((MR_Box) (STATE_VARIABLE_VarTable_65_65)), &conv2_STATE_VARIABLE_VarTable_68_68);
  FutureMap_40 = ((MR_Word) (conv3_FutureMap_40));
  STATE_VARIABLE_VarTable_68_68 = ((MR_Word) (conv2_STATE_VARIABLE_VarTable_68_68));
  transform_hlds__dep_par_conj__replace_head_vars_6_p_0(STATE_VARIABLE_ModuleInfo_0_58, FutureMap_40, HeadVars0_36, &HeadVars_41, ArgModes0_37, &ArgModes_42);
  hlds__hlds_module__module_info_get_globals_2_p_0(InitialModuleInfo_22, &Globals_43);
  libs__globals__get_opt_tuple_2_p_0(Globals_43, &OptTuple_44);
  AllowSomePathsOnly_45 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_44, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
  Var_69 = mercury__map__keys_1_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), FutureMap_40);
  SharedVars_46 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_69);
  transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0(STATE_VARIABLE_ModuleInfo_0_58, AllowSomePathsOnly_45, SharedVars_46, FutureMap_40, InstMap0_39, Goal0_38, &Goal_47, STATE_VARIABLE_VarTable_68_68, &STATE_VARIABLE_VarTable_70_70);
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_70_70, STATE_VARIABLE_NewProcInfo_64_64, &STATE_VARIABLE_NewProcInfo_71_71);
  hlds__hlds_pred__proc_info_set_headvars_3_p_0(HeadVars_41, STATE_VARIABLE_NewProcInfo_71_71, &STATE_VARIABLE_NewProcInfo_72_72);
  hlds__hlds_pred__proc_info_set_argmodes_3_p_0(ArgModes_42, STATE_VARIABLE_NewProcInfo_72_72, &STATE_VARIABLE_NewProcInfo_73_73);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(Goal_47, STATE_VARIABLE_NewProcInfo_73_73, &STATE_VARIABLE_NewProcInfo_74_74);
  hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_58, NewPredId_32, &NewPredInfo0_48);
  succeeded = transform_hlds__dep_par_conj__any_output_arguments_2_p_0(STATE_VARIABLE_ModuleInfo_0_58, ArgModes_42);
  if (succeeded)
    NewPredInfo_49 = NewPredInfo0_48;
  else
  {
    MR_Word Markers0_50;
    MR_Word Markers_51;

    hlds__hlds_pred__pred_info_get_markers_2_p_0(NewPredInfo0_48, &Markers0_50);
    hlds__hlds_pred__add_marker_3_p_0((MR_Integer) 14, Markers0_50, &Markers_51);
    hlds__hlds_pred__pred_info_set_markers_3_p_0(Markers_51, NewPredInfo0_48, &NewPredInfo_49);
  }
  transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_p_0(NewPredId_32, NewProcId_33, NewPredInfo_49, STATE_VARIABLE_NewProcInfo_74_74, STATE_VARIABLE_ModuleInfo_0_58, &STATE_VARIABLE_ModuleInfo_76_76);
  Var_77 = mercury__map__keys_1_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), FutureMap_40);
  IgnoreVars_52 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_77);
  transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_121_110_99_95_100_101_112_95_112_97_114_95_99_111_110_106_115_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_10_p_0(NewPredId_32, NewProcId_33, IgnoreVars_52, STATE_VARIABLE_ModuleInfo_76_76, &STATE_VARIABLE_ModuleInfo_78_78, (MR_Word) ((MR_Unsigned) 0U), &_ProcsToScan_53, STATE_VARIABLE_TSStringTable_0_62, STATE_VARIABLE_TSStringTable_63);
  transform_hlds__dep_par_conj__find_specialization_requests_in_proc_11_p_0(DoneParProcs_21, InitialModuleInfo_22, NewPredProcId_28, STATE_VARIABLE_ModuleInfo_78_78, STATE_VARIABLE_ModuleInfo_59, STATE_VARIABLE_PendingParProcs_0_54, STATE_VARIABLE_PendingParProcs_55, STATE_VARIABLE_Pushability_0_56, STATE_VARIABLE_Pushability_57, STATE_VARIABLE_RevProcMap_0_60, STATE_VARIABLE_RevProcMap_61);
}

static void MR_CALL 
transform_hlds__dep_par_conj__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_121_110_99_95_100_101_112_95_112_97_114_95_99_111_110_106_115_95_105_110_95_112_114_111_99_95_95_91_49_93_95_48_10_p_0(
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word IgnoreVars_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_43,
  MR_Word * STATE_VARIABLE_ModuleInfo_44,
  MR_Word STATE_VARIABLE_ProcsToScan_0_45,
  MR_Word * STATE_VARIABLE_ProcsToScan_46,
  MR_Word STATE_VARIABLE_TSStringTable_0_47,
  MR_Word * STATE_VARIABLE_TSStringTable_48)
{
  MR_Word InstMap0_23;
  MR_Word Globals_24;
  MR_Word OptTuple_25;
  MR_Word AllowSomePathsOnly_26;
  MR_Word GoalBeforeDepParConj_28;
  MR_Word PredProcId_42;
  MR_Word STATE_VARIABLE_PredInfo_49_49;
  MR_Word STATE_VARIABLE_ProcInfo_50_50;
  MR_Word STATE_VARIABLE_VarTable_52_52;
  MR_Word STATE_VARIABLE_ModuleInfo_53_53;
  MR_Word STATE_VARIABLE_SyncInfo_54_54;
  MR_Word STATE_VARIABLE_Goal_56_56;
  MR_Word STATE_VARIABLE_SyncInfo_57_57;
  MR_Word STATE_VARIABLE_VarTable_58_58;
  MR_Word STATE_VARIABLE_ProcInfo_85_85;
  MR_Word STATE_VARIABLE_ProcInfo_86_86;
  MR_Word Var_27;
  MR_Word Var_29;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_43, PredId_12, ProcId_13, &STATE_VARIABLE_PredInfo_49_49, &STATE_VARIABLE_ProcInfo_50_50);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_50_50, &GoalBeforeDepParConj_28);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_50_50, &STATE_VARIABLE_VarTable_52_52);
  hlds__hlds_proc_util__proc_info_get_initial_instmap_3_p_0(STATE_VARIABLE_ModuleInfo_0_43, STATE_VARIABLE_ProcInfo_50_50, &InstMap0_23);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_43, &Globals_24);
  libs__globals__get_opt_tuple_2_p_0(Globals_24, &OptTuple_25);
  AllowSomePathsOnly_26 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_25, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
  hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_ModuleInfo_0_43, &STATE_VARIABLE_ModuleInfo_53_53, &Var_27);
  {
    PredProcId_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_42, 0) = ((MR_Box) (PredId_12));
    MR_hl_field(0, PredProcId_42, 1) = ((MR_Box) (ProcId_13));
  }
  {
    STATE_VARIABLE_SyncInfo_54_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_SyncInfo_54_54, 0) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_53_53));
    MR_hl_field(0, STATE_VARIABLE_SyncInfo_54_54, 1) = ((MR_Box) (IgnoreVars_14));
    MR_hl_field(0, STATE_VARIABLE_SyncInfo_54_54, 2) = (MR_Box) ((MR_Unsigned) (AllowSomePathsOnly_26));
    MR_hl_field(0, STATE_VARIABLE_SyncInfo_54_54, 3) = ((MR_Box) (STATE_VARIABLE_VarTable_52_52));
    MR_hl_field(0, STATE_VARIABLE_SyncInfo_54_54, 4) = ((MR_Box) (PredProcId_42));
    MR_hl_field(0, STATE_VARIABLE_SyncInfo_54_54, 5) = ((MR_Box) (STATE_VARIABLE_TSStringTable_0_47));
  }
  transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(GoalBeforeDepParConj_28, &STATE_VARIABLE_Goal_56_56, InstMap0_23, &Var_29, STATE_VARIABLE_SyncInfo_54_54, &STATE_VARIABLE_SyncInfo_57_57);
  STATE_VARIABLE_VarTable_58_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SyncInfo_57_57, (MR_Integer) 3))));
  *STATE_VARIABLE_TSStringTable_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SyncInfo_57_57, (MR_Integer) 5))));
  hlds__hlds_pred__proc_info_set_var_table_3_p_0(STATE_VARIABLE_VarTable_58_58, STATE_VARIABLE_ProcInfo_50_50, &STATE_VARIABLE_ProcInfo_85_85);
  hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_56_56, STATE_VARIABLE_ProcInfo_85_85, &STATE_VARIABLE_ProcInfo_86_86);
  transform_hlds__dep_par_conj__fixup_and_reinsert_proc_6_p_0(PredId_12, ProcId_13, STATE_VARIABLE_PredInfo_49_49, STATE_VARIABLE_ProcInfo_86_86, STATE_VARIABLE_ModuleInfo_53_53, STATE_VARIABLE_ModuleInfo_44);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_ProcsToScan_46 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (PredProcId_42));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ProcsToScan_0_45));
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
    MR_Word Case0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_12;
    MR_Word Cases_13;
    MR_Word MainConsId_16 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 0))));
    MR_Word OtherConsIds_17 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 1))));
    MR_Word Goal0_18 = ((MR_Word) ((MR_hl_field(0, Case0_10, (MR_Integer) 2))));
    MR_Word Goal_19;
    MR_Word STATE_VARIABLE_SyncInfo_23_23;
    MR_Word Var_20;

    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Goal0_18, &Goal_19, HeadVar__3_3, &Var_20, STATE_VARIABLE_SyncInfo_0_4, &STATE_VARIABLE_SyncInfo_23_23);
    {
      Case_12 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_12, 0) = ((MR_Box) (MainConsId_16));
      MR_hl_field(0, Case_12, 1) = ((MR_Box) (OtherConsIds_17));
      MR_hl_field(0, Case_12, 2) = ((MR_Box) (Goal_19));
    }
    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_cases_5_p_0(Cases0_11, &Cases_13, HeadVar__3_3, STATE_VARIABLE_SyncInfo_23_23, STATE_VARIABLE_SyncInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_13));
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
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_SyncInfo_19_19;
    MR_Word _InstMap_16;

    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Goal0_10, &Goal_12, HeadVar__3_3, &_InstMap_16, STATE_VARIABLE_SyncInfo_0_4, &STATE_VARIABLE_SyncInfo_19_19);
    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_disj_5_p_0(Goals0_11, &Goals_13, HeadVar__3_3, STATE_VARIABLE_SyncInfo_19_19, STATE_VARIABLE_SyncInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_13));
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
    MR_Word Goal0_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_12;
    MR_Word Goals_13;
    MR_Word STATE_VARIABLE_InstMap_19_19;
    MR_Word STATE_VARIABLE_SyncInfo_20_20;

    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Goal0_10, &Goal_12, STATE_VARIABLE_InstMap_0_3, &STATE_VARIABLE_InstMap_19_19, STATE_VARIABLE_SyncInfo_0_4, &STATE_VARIABLE_SyncInfo_20_20);
    transform_hlds__dep_par_conj__sync_dep_par_conjs_in_conj_5_p_0(Goals0_11, &Goals_13, STATE_VARIABLE_InstMap_19_19, STATE_VARIABLE_SyncInfo_20_20, STATE_VARIABLE_SyncInfo_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_12));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_13));
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
  MR_bool succeeded;
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));

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
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_82));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 0))))) {
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
            MR_Word ConjType_14 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Goals_16;
            MR_Word STATE_VARIABLE_SyncInfo_66_66;

            transform_hlds__dep_par_conj__sync_dep_par_conjs_in_conj_5_p_0(Goals0_15, &Goals_16, InstMap0_9, STATE_VARIABLE_SyncInfo_0_64, &STATE_VARIABLE_SyncInfo_66_66);
            switch (ConjType_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word Goal0InstmapDelta_17;
                  MR_Word Var_67 = ((MR_Word) ((MR_hl_field(0, Goal0_7, (MR_Integer) 1))));

                  Goal0InstmapDelta_17 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_67);
                  succeeded = hlds__instmap__instmap_delta_is_unreachable_1_p_0(Goal0InstmapDelta_17);
                  if (succeeded)
                  {
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_16, GoalInfo0_13, Goal_8);
                    *STATE_VARIABLE_SyncInfo_65 = STATE_VARIABLE_SyncInfo_66_66;
                  }
                  else
                    transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0(Goals_16, GoalInfo0_13, Goal_8, InstMap0_9, STATE_VARIABLE_SyncInfo_66_66, STATE_VARIABLE_SyncInfo_65);
                }
                break;
              case (MR_Integer) 0:
                {
                  hlds__hlds_goal__conj_list_to_goal_3_p_0(Goals_16, GoalInfo0_13, Goal_8);
                  *STATE_VARIABLE_SyncInfo_65 = STATE_VARIABLE_SyncInfo_66_66;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word GoalExpr_18;
            MR_Word Goals0_78 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Goals_79;

            transform_hlds__dep_par_conj__sync_dep_par_conjs_in_disj_5_p_0(Goals0_78, &Goals_79, InstMap0_9, STATE_VARIABLE_SyncInfo_0_64, STATE_VARIABLE_SyncInfo_65);
            {
              GoalExpr_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_18, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_18, 1) = ((MR_Box) (Goals_79));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_18));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Var_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word CanFail_20 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Cases_22;
            MR_Word GoalExpr_80;

            transform_hlds__dep_par_conj__sync_dep_par_conjs_in_cases_5_p_0(Cases0_21, &Cases_22, InstMap0_9, STATE_VARIABLE_SyncInfo_0_64, STATE_VARIABLE_SyncInfo_65);
            {
              GoalExpr_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_80, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_80, 1) = ((MR_Box) (Var_19));
              MR_hl_field(3, GoalExpr_80, 2) = (MR_Box) ((MR_Unsigned) (CanFail_20));
              MR_hl_field(3, GoalExpr_80, 3) = ((MR_Box) (Cases_22));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_80));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word SubGoal0_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word FGT_38;

            succeeded = ((((MR_tag((MR_Word) Reason_36)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_36, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              FGT_38 = ((MR_Unsigned) ((MR_hl_field(3, Reason_36, (MR_Integer) 2))) & (MR_Integer) 3);
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
                GoalExpr_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_83, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_83, 1) = ((MR_Box) (Reason_36));
                MR_hl_field(3, GoalExpr_83, 2) = ((MR_Box) (SubGoal_84));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_8 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_83));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word QuantVars_23 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 1))));
            MR_Word Cond0_24 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 2))));
            MR_Word Then0_25 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 3))));
            MR_Word Else0_26 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_12, (MR_Integer) 4))));
            MR_Word Cond_27;
            MR_Word InstMap1_28;
            MR_Word Then_29;
            MR_Word Else_31;
            MR_Word STATE_VARIABLE_SyncInfo_71_71;
            MR_Word STATE_VARIABLE_SyncInfo_72_72;
            MR_Word GoalExpr_81;
            MR_Word Var_30;
            MR_Word Var_32;

            transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Cond0_24, &Cond_27, InstMap0_9, &InstMap1_28, STATE_VARIABLE_SyncInfo_0_64, &STATE_VARIABLE_SyncInfo_71_71);
            transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Then0_25, &Then_29, InstMap1_28, &Var_30, STATE_VARIABLE_SyncInfo_71_71, &STATE_VARIABLE_SyncInfo_72_72);
            transform_hlds__dep_par_conj__sync_dep_par_conjs_in_goal_6_p_0(Else0_26, &Else_31, InstMap0_9, &Var_32, STATE_VARIABLE_SyncInfo_72_72, STATE_VARIABLE_SyncInfo_65);
            {
              GoalExpr_81 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_81, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_81, 1) = ((MR_Box) (QuantVars_23));
              MR_hl_field(3, GoalExpr_81, 2) = ((MR_Box) (Cond_27));
              MR_hl_field(3, GoalExpr_81, 3) = ((MR_Box) (Then_29));
              MR_hl_field(3, GoalExpr_81, 4) = ((MR_Box) (Else_31));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_8 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_81));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_13));
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

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv11_STATE_VARIABLE_Goal_27;
  MR_Word conv10_STATE_VARIABLE_InstMap_29;
  MR_Word conv9_STATE_VARIABLE_VarTable_31;

  transform_hlds__dep_par_conj__sync_dep_par_conjunct_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv11_STATE_VARIABLE_Goal_27, ((MR_Word) (wrapper_arg_3)), &conv10_STATE_VARIABLE_InstMap_29, ((MR_Word) (wrapper_arg_5)), &conv9_STATE_VARIABLE_VarTable_31);
  *wrapper_arg_2 = ((MR_Box) (conv11_STATE_VARIABLE_Goal_27));
  *wrapper_arg_4 = ((MR_Box) (conv10_STATE_VARIABLE_InstMap_29));
  *wrapper_arg_6 = ((MR_Box) (conv9_STATE_VARIABLE_VarTable_31));
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_4(
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
  MR_Box closure = closure_arg;
  MR_Word conv5_Goals_12;
  MR_Word conv4_STATE_VARIABLE_VarTable_38;
  MR_Word conv3_STATE_VARIABLE_FutureMap_40;
  MR_Word conv2_STATE_VARIABLE_TSStringTable_42;

  transform_hlds__dep_par_conj__allocate_future_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_Goals_12, ((MR_Word) (wrapper_arg_3)), &conv4_STATE_VARIABLE_VarTable_38, ((MR_Word) (wrapper_arg_5)), &conv3_STATE_VARIABLE_FutureMap_40, ((MR_Word) (wrapper_arg_7)), &conv2_STATE_VARIABLE_TSStringTable_42);
  *wrapper_arg_2 = ((MR_Box) (conv5_Goals_12));
  *wrapper_arg_4 = ((MR_Box) (conv4_STATE_VARIABLE_VarTable_38));
  *wrapper_arg_6 = ((MR_Box) (conv3_STATE_VARIABLE_FutureMap_40));
  *wrapper_arg_8 = ((MR_Box) (conv2_STATE_VARIABLE_TSStringTable_42));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__487__2_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__maybe_sync_dep_par_conj__487__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Nonlocals_6;
  MR_Word conv0_InstMapDelta_7;

  transform_hlds__dep_par_conj__get_nonlocals_and_instmaps_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Nonlocals_6, &conv0_InstMapDelta_7);
  *wrapper_arg_2 = ((MR_Box) (conv1_Nonlocals_6));
  *wrapper_arg_3 = ((MR_Box) (conv0_InstMapDelta_7));
}

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0(
  MR_Word Conjuncts_7,
  MR_Word GoalInfo_8,
  MR_Word * NewGoal_9,
  MR_Word InstMap_10,
  MR_Word STATE_VARIABLE_SyncInfo_0_25,
  MR_Word * STATE_VARIABLE_SyncInfo_26)
{
  MR_bool succeeded;
  MR_Word ModuleInfo0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SyncInfo_0_25, (MR_Integer) 0))));
  MR_Word IgnoreVars_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SyncInfo_0_25, (MR_Integer) 1))));
  MR_Word AllowSomePathsOnly_14 = ((MR_Unsigned) ((MR_hl_field(0, STATE_VARIABLE_SyncInfo_0_25, (MR_Integer) 2))) & (MR_Integer) 1);
  MR_Word VarTable0_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SyncInfo_0_25, (MR_Integer) 3))));
  MR_Word PredProcId_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SyncInfo_0_25, (MR_Integer) 4))));
  MR_Word TSStringTable0_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SyncInfo_0_25, (MR_Integer) 5))));
  MR_Word SharedVars0_18;
  MR_Word SharedVars_19;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Nonlocals_34;
  MR_Word InstMapDeltas_35;
  MR_Word Var_38;

  mercury__list__map2_4_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[4]), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[9]), Conjuncts_7, &Nonlocals_34, &InstMapDeltas_35);
  Var_38 = parse_tree__set_of_var__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0));
  transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0(ModuleInfo0_12, (MR_Integer) 0, Nonlocals_34, InstMap_10, InstMapDeltas_35, Var_38, &SharedVars0_18);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[2]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_2));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (IgnoreVars_13));
  }
  {
    Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_27, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[3]));
    MR_hl_field(0, Var_27, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_3));
    MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_27, 3) = ((MR_Box) (Var_28));
  }
  SharedVars_19 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_27, SharedVars0_18);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SharedVars_19);
  if (succeeded)
  {
    MR_Word Globals_20;
    MR_Word ParLoopControl_21;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo0_12, &Globals_20);
    libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 726, &ParLoopControl_21);
    switch (ParLoopControl_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ModuleInfo_22;
          MR_Word DependencyInfo_43;
          MR_Word Ordering_44;
          MR_Word SCC_45;
          MR_Word CallsToSameSCC_46;
          MR_Word Conjuncts_47;
          MR_Word GoalExpr_48;

          hlds__hlds_module__module_info_dependency_info_2_p_0(ModuleInfo0_12, &DependencyInfo_43);
          Ordering_44 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DependencyInfo_43);
          transform_hlds__dep_par_conj__find_procs_scc_3_p_0(Ordering_44, PredProcId_16, &SCC_45);
          CallsToSameSCC_46 = hlds__goal_util__goal_list_calls_proc_in_set_2_f_0(Conjuncts_7, SCC_45);
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), CallsToSameSCC_46);
          if (succeeded)
          {
            Conjuncts_47 = Conjuncts_7;
            ModuleInfo_22 = ModuleInfo0_12;
          }
          else
            transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0(SCC_45, VarTable0_15, InstMap_10, Conjuncts_7, &Conjuncts_47, ModuleInfo0_12, &ModuleInfo_22);
          {
            GoalExpr_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, GoalExpr_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, GoalExpr_48, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(3, GoalExpr_48, 2) = ((MR_Box) (Conjuncts_47));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *NewGoal_9 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_48));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_8));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_SyncInfo_26 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_22));
            MR_hl_field(0, base, 1) = ((MR_Box) (IgnoreVars_13));
            MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (AllowSomePathsOnly_14));
            MR_hl_field(0, base, 3) = ((MR_Box) (VarTable0_15));
            MR_hl_field(0, base, 4) = ((MR_Box) (PredProcId_16));
            MR_hl_field(0, base, 5) = ((MR_Box) (TSStringTable0_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_31;

          {
            Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, Var_31, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
            MR_hl_field(3, Var_31, 2) = ((MR_Box) (Conjuncts_7));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *NewGoal_9 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_8));
          }
          *STATE_VARIABLE_SyncInfo_26 = STATE_VARIABLE_SyncInfo_0_25;
        }
        break;
    }
  }
  else
  {
    MR_Word VarTable_23;
    MR_Word TSStringTable_24;
    MR_Word SharedVarsList_51;
    MR_Word AllocateFuturesGoals_52;
    MR_Word FutureMap_53;
    MR_Word AllocateFutures_54;
    MR_Word NewGoals_55;
    MR_Word LastGoal_57;
    MR_Word Conj_58;
    MR_Word NewGoal0_59;
    MR_Word Purity_60;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_VarTable_37_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_68;
    MR_Box conv8_STATE_VARIABLE_VarTable_37_63;
    MR_Box conv7_FutureMap_53;
    MR_Box conv6_TSStringTable_24;
    MR_Box conv13_Var_56;
    MR_Box conv12_VarTable_23;

    SharedVarsList_51 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SharedVars_19);
    {
      Var_62 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_62, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_12[0]));
      MR_hl_field(0, Var_62, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_4));
      MR_hl_field(0, Var_62, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_62, 3) = ((MR_Box) (ModuleInfo0_12));
    }
    Var_64 = mercury__map__init_0_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]));
    mercury__list__map_foldl3_9_p_1((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[3]), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[4]), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_ts_string_table_0), Var_62, SharedVarsList_51, &AllocateFuturesGoals_52, ((MR_Box) (VarTable0_15)), &conv8_STATE_VARIABLE_VarTable_37_63, ((MR_Box) (Var_64)), &conv7_FutureMap_53, ((MR_Box) (TSStringTable0_17)), &conv6_TSStringTable_24);
    STATE_VARIABLE_VarTable_37_63 = ((MR_Word) (conv8_STATE_VARIABLE_VarTable_37_63));
    FutureMap_53 = ((MR_Word) (conv7_FutureMap_53));
    TSStringTable_24 = ((MR_Word) (conv6_TSStringTable_24));
    mercury__list__condense_2_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AllocateFuturesGoals_52, &AllocateFutures_54);
    {
      Var_65 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_65, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_13[0]));
      MR_hl_field(0, Var_65, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_sync_dep_par_conj_6_p_0_5));
      MR_hl_field(0, Var_65, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_65, 3) = ((MR_Box) (ModuleInfo0_12));
      MR_hl_field(0, Var_65, 4) = ((MR_Box) (AllowSomePathsOnly_14));
      MR_hl_field(0, Var_65, 5) = ((MR_Box) (SharedVars_19));
      MR_hl_field(0, Var_65, 6) = ((MR_Box) (FutureMap_53));
    }
    mercury__list__map_foldl2_7_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_65, Conjuncts_7, &NewGoals_55, ((MR_Box) (InstMap_10)), &conv13_Var_56, ((MR_Box) (STATE_VARIABLE_VarTable_37_63)), &conv12_VarTable_23);
    VarTable_23 = ((MR_Word) (conv12_VarTable_23));
    {
      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, Var_66, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, Var_66, 2) = ((MR_Box) (NewGoals_55));
    }
    {
      LastGoal_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LastGoal_57, 0) = ((MR_Box) (Var_66));
      MR_hl_field(0, LastGoal_57, 1) = ((MR_Box) (GoalInfo_8));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (LastGoal_57));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Conj_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), AllocateFutures_54, Var_68);
    hlds__hlds_goal__conj_list_to_goal_3_p_0(Conj_58, GoalInfo_8, &NewGoal0_59);
    Purity_60 = hlds__hlds_goal__goal_info_get_purity_1_f_0(GoalInfo_8);
    switch (Purity_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        *NewGoal_9 = NewGoal0_59;
        break;
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          MR_Word Reason_61;
          MR_Word Var_70;

          {
            Reason_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Reason_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(3, Reason_61, 1) = (MR_Box) ((MR_Unsigned) (Purity_60));
          }
          {
            Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 5U));
            MR_hl_field(3, Var_70, 1) = ((MR_Box) (Reason_61));
            MR_hl_field(3, Var_70, 2) = ((MR_Box) (NewGoal0_59));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            *NewGoal_9 = base;
            MR_hl_field(0, base, 0) = ((MR_Box) (Var_70));
            MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo_8));
          }
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_SyncInfo_26 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo0_12));
      MR_hl_field(0, base, 1) = ((MR_Box) (IgnoreVars_13));
      MR_hl_field(0, base, 2) = (MR_Box) ((MR_Unsigned) (AllowSomePathsOnly_14));
      MR_hl_field(0, base, 3) = ((MR_Box) (VarTable_23));
      MR_hl_field(0, base, 4) = ((MR_Box) (PredProcId_16));
      MR_hl_field(0, base, 5) = ((MR_Box) (TSStringTable_24));
    }
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dep_par_conj__changed_var_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__find_shared_variables_2__3459__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
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
      MR_Word Nonlocals_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word MoreNonlocals_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word InstMapDeltasB_22;
      MR_Word Filter_23;
      MR_Word UnboundNonlocals_26;
      MR_Word Changed_27;
      MR_Word Var_31;
      MR_Word STATE_VARIABLE_SharedVars_32_32;
      MR_Integer Var_33;
      MR_Word Left_39;
      MR_Word Right_40;
      MR_Word Var_41;
      MR_Integer next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_SharedVars_0_6;

      mercury__list__det_split_list_4_p_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), HeadVar__2_2, HeadVar__5_5, &Left_39, &Right_40);
      Var_41 = mercury__list__det_tail_1_f_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Right_40);
      InstMapDeltasB_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_delta_0), Left_39, Var_41);
      {
        Filter_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Filter_23, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_7[3]));
        MR_hl_field(0, Filter_23, 1) = ((MR_Box) (transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0_1));
        MR_hl_field(0, Filter_23, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Filter_23, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Filter_23, 4) = ((MR_Box) (HeadVar__4_4));
      }
      UnboundNonlocals_26 = parse_tree__set_of_var__filter_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Filter_23, Nonlocals_17);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_7[4]));
        MR_hl_field(0, Var_31, 1) = ((MR_Box) (transform_hlds__dep_par_conj__find_shared_variables_2_7_p_0_2));
        MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_31, 3) = ((MR_Box) (HeadVar__1_1));
        MR_hl_field(0, Var_31, 4) = ((MR_Box) (InstMapDeltasB_22));
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
      MR_Word SCC_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word SCCs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

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
  struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__CallPredProcId_24 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__conv0_CallPredProcId_24));
  transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__succeeded = hlds__goal_util__goal_calls_2_p_0((env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17, (env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__CallPredProcId_24);
  if ((env_ptr)->transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__succeeded)
    transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_1(env_ptr);
}

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_4(
  void * env_ptr_arg)
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

static void MR_CALL 
transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0(
  MR_Word SCC_1,
  MR_Word VarTable_2,
  MR_Word InstMapBefore_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word STATE_VARIABLE_ModuleInfo_0_6,
  MR_Word * STATE_VARIABLE_ModuleInfo_7)
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
    MR_Word Var_31;

    (env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    Goals0_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    Var_31 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17, (MR_Integer) 0))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, (env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17, (MR_Integer) 1))));
    Var_28 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_29);
    hlds__instmap__apply_instmap_delta_3_p_0(Var_28, InstMapBefore_3, &InstMapBeforeGoals1_23);
    transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0((env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__SCC_1, VarTable_2, InstMapBeforeGoals1_23, Goals0_18, &Goals1_22, STATE_VARIABLE_ModuleInfo_0_6, &STATE_VARIABLE_ModuleInfo_30_30);
    transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_4(&env);
    if ((env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) ((env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17));
        MR_hl_field(1, base, 1) = ((MR_Box) (Goals1_22));
      }
      *STATE_VARIABLE_ModuleInfo_7 = STATE_VARIABLE_ModuleInfo_30_30;
    }
    else
    {
      MR_Word MaybeGoals_25;

      transform_hlds__dep_par_conj__push_goal_into_conj_8_p_0(VarTable_2, InstMapBefore_3, (env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17, InstMapBeforeGoals1_23, Goals1_22, &MaybeGoals_25, STATE_VARIABLE_ModuleInfo_30_30, STATE_VARIABLE_ModuleInfo_7);
      if ((MaybeGoals_25 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) ((env).transform_hlds__dep_par_conj__reorder_indep_par_conj_2_7_p_0_env_0__Goal_17));
          MR_hl_field(1, base, 1) = ((MR_Box) (Goals1_22));
        }
      else
        *HeadVar__5_5 = ((MR_Word) ((MR_hl_field(1, MaybeGoals_25, (MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__push_goal_into_conj_8_p_0(
  MR_Word VarTable_1,
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
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (Goal_3));
      MR_hl_field(1, Var_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__6_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
    }
    *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_0_7;
  }
  else
  {
    MR_Word PivotGoal_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Goals0_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word Globals_26;
    MR_Word FullyStrict_27;
    MR_Word CanReorderGoals_28;
    MR_Word STATE_VARIABLE_ModuleInfo_39_39;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_7, &Globals_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 223, &FullyStrict_27);
    hlds__goal_util__can_reorder_goals_9_p_0(VarTable_1, FullyStrict_27, InstMapBeforeGoal_2, Goal_3, InstMapBeforePivotGoal_4, PivotGoal_22, &CanReorderGoals_28, STATE_VARIABLE_ModuleInfo_0_7, &STATE_VARIABLE_ModuleInfo_39_39);
    switch (CanReorderGoals_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word PivotInstMapDelta_29;
          MR_Word InstMapBeforeGoalAfterPivot_30;
          MR_Word GoalInstMapDelta_31;
          MR_Word InstMapAfterPivotAndGoal_32;
          MR_Word MaybeGoals1_33;
          MR_Word Goals_35;
          MR_Word Var_40 = ((MR_Word) ((MR_hl_field(0, PivotGoal_22, (MR_Integer) 1))));
          MR_Word Var_41;

          PivotInstMapDelta_29 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_40);
          hlds__instmap__apply_instmap_delta_3_p_0(PivotInstMapDelta_29, InstMapBeforeGoal_2, &InstMapBeforeGoalAfterPivot_30);
          Var_41 = ((MR_Word) ((MR_hl_field(0, Goal_3, (MR_Integer) 1))));
          GoalInstMapDelta_31 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(Var_41);
          hlds__instmap__apply_instmap_delta_3_p_0(GoalInstMapDelta_31, InstMapBeforeGoalAfterPivot_30, &InstMapAfterPivotAndGoal_32);
          transform_hlds__dep_par_conj__push_goal_into_conj_8_p_0(VarTable_1, InstMapBeforeGoalAfterPivot_30, Goal_3, InstMapAfterPivotAndGoal_32, Goals0_23, &MaybeGoals1_33, STATE_VARIABLE_ModuleInfo_39_39, STATE_VARIABLE_ModuleInfo_8);
          if ((MaybeGoals1_33 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Goals_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Goals_35, 0) = ((MR_Box) (Goal_3));
              MR_hl_field(1, Goals_35, 1) = ((MR_Box) (HeadVar__5_5));
            }
          else
          {
            MR_Word Goals1_34 = ((MR_Word) ((MR_hl_field(1, MaybeGoals1_33, (MR_Integer) 0))));

            {
              Goals_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Goals_35, 0) = ((MR_Box) (PivotGoal_22));
              MR_hl_field(1, Goals_35, 1) = ((MR_Box) (Goals1_34));
            }
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__6_6 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Goals_35));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_ModuleInfo_8 = STATE_VARIABLE_ModuleInfo_39_39;
        }
        break;
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
  MR_Word STATE_VARIABLE_ProcInfo_17_17;
  MR_Word STATE_VARIABLE_ProcInfo_19_19;
  MR_Word STATE_VARIABLE_ModuleInfo_20_20;
  MR_Word STATE_VARIABLE_PredInfo_21_21;
  MR_Word Var_22;
  MR_Word STATE_VARIABLE_PredInfo_23_23;

  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_0_13, &STATE_VARIABLE_ProcInfo_17_17);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_17_17, &STATE_VARIABLE_ProcInfo_19_19, STATE_VARIABLE_ModuleInfo_0_14, &STATE_VARIABLE_ModuleInfo_20_20);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_8, STATE_VARIABLE_ProcInfo_19_19, STATE_VARIABLE_PredInfo_0_12, &STATE_VARIABLE_PredInfo_21_21);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (PredId_7));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (ProcId_8));
  }
  check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_20_20, Var_22, STATE_VARIABLE_PredInfo_21_21, &STATE_VARIABLE_PredInfo_23_23);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_7, STATE_VARIABLE_PredInfo_23_23, STATE_VARIABLE_ModuleInfo_20_20, STATE_VARIABLE_ModuleInfo_15);
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
      Mode_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      Modes_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      succeeded = check_hlds__mode_test__mode_is_output_2_p_0(ModuleInfo_3, Mode_4);
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
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.replace_head_vars\'/6", (MR_String) "length mismatch");
        return;
      }
    else
    {
      MR_Word Var_29;
      MR_Word Vars_30;
      MR_Word Mode0_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
      MR_Word Modes0_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
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
        succeeded = check_hlds__mode_test__mode_is_input_2_p_0(HeadVar__1_1, Mode0_31);
        if (succeeded)
          Mode_33 = Mode0_31;
        else
        {
          succeeded = check_hlds__mode_test__mode_is_output_2_p_0(HeadVar__1_1, Mode0_31);
          if (succeeded)
            Mode_33 = (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[10]);
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_29));
        MR_hl_field(1, base, 1) = ((MR_Box) (Vars_30));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__6_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Mode_33));
        MR_hl_field(1, base, 1) = ((MR_Box) (Modes_34));
      }
    }
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__find_specialization_requests_in_proc_11_p_0(
  MR_Word DoneProcs_12,
  MR_Word InitialModuleInfo_13,
  MR_Word PredProcId_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_40,
  MR_Word * STATE_VARIABLE_ModuleInfo_41,
  MR_Word STATE_VARIABLE_PendingParProcs_0_42,
  MR_Word * STATE_VARIABLE_PendingParProcs_43,
  MR_Word STATE_VARIABLE_Pushability_0_44,
  MR_Word * STATE_VARIABLE_Pushability_45,
  MR_Word STATE_VARIABLE_RevProcMap_0_46,
  MR_Word * STATE_VARIABLE_RevProcMap_47)
{
  MR_Word PredId_19 = ((MR_Word) ((MR_hl_field(0, PredProcId_14, (MR_Integer) 0))));
  MR_Integer ProcId_20 = ((MR_Integer) ((MR_hl_field(0, PredProcId_14, (MR_Integer) 1))));
  MR_Word VarTable_25;
  MR_Word STATE_VARIABLE_PredInfo_48_48;
  MR_Word STATE_VARIABLE_ProcInfo_49_49;
  MR_Word STATE_VARIABLE_Goal_50_50;
  MR_Word STATE_VARIABLE_SpecInfo_51_51;
  MR_Word STATE_VARIABLE_Goal_69_69;
  MR_Word STATE_VARIABLE_SpecInfo_70_70;
  MR_Word STATE_VARIABLE_ModuleInfo_72_72;
  MR_Word STATE_VARIABLE_ProcInfo_75_75;
  MR_Word STATE_VARIABLE_ProcInfo_17_101;
  MR_Word STATE_VARIABLE_ProcInfo_19_103;
  MR_Word STATE_VARIABLE_ModuleInfo_20_104;
  MR_Word STATE_VARIABLE_PredInfo_21_105;
  MR_Word STATE_VARIABLE_PredInfo_23_107;

  hlds__hlds_module__module_info_pred_proc_info_5_p_0(STATE_VARIABLE_ModuleInfo_0_40, PredId_19, ProcId_20, &STATE_VARIABLE_PredInfo_48_48, &STATE_VARIABLE_ProcInfo_49_49);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(STATE_VARIABLE_ProcInfo_49_49, &VarTable_25);
  hlds__hlds_pred__proc_info_get_goal_2_p_0(STATE_VARIABLE_ProcInfo_49_49, &STATE_VARIABLE_Goal_50_50);
  {
    STATE_VARIABLE_SpecInfo_51_51 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_SpecInfo_51_51, 0) = ((MR_Box) (DoneProcs_12));
    MR_hl_field(0, STATE_VARIABLE_SpecInfo_51_51, 1) = ((MR_Box) (STATE_VARIABLE_RevProcMap_0_46));
    MR_hl_field(0, STATE_VARIABLE_SpecInfo_51_51, 2) = ((MR_Box) (InitialModuleInfo_13));
    MR_hl_field(0, STATE_VARIABLE_SpecInfo_51_51, 3) = ((MR_Box) (PredProcId_14));
    MR_hl_field(0, STATE_VARIABLE_SpecInfo_51_51, 4) = ((MR_Box) (VarTable_25));
    MR_hl_field(0, STATE_VARIABLE_SpecInfo_51_51, 5) = ((MR_Box) (STATE_VARIABLE_ModuleInfo_0_40));
    MR_hl_field(0, STATE_VARIABLE_SpecInfo_51_51, 6) = ((MR_Box) (STATE_VARIABLE_PendingParProcs_0_42));
    MR_hl_field(0, STATE_VARIABLE_SpecInfo_51_51, 7) = ((MR_Box) (STATE_VARIABLE_Pushability_0_44));
  }
  transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(STATE_VARIABLE_Goal_50_50, &STATE_VARIABLE_Goal_69_69, STATE_VARIABLE_SpecInfo_51_51, &STATE_VARIABLE_SpecInfo_70_70);
  *STATE_VARIABLE_RevProcMap_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_70_70, (MR_Integer) 1))));
  STATE_VARIABLE_ModuleInfo_72_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_70_70, (MR_Integer) 5))));
  *STATE_VARIABLE_PendingParProcs_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_70_70, (MR_Integer) 6))));
  *STATE_VARIABLE_Pushability_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_70_70, (MR_Integer) 7))));
  hlds__hlds_pred__proc_info_set_goal_3_p_0(STATE_VARIABLE_Goal_69_69, STATE_VARIABLE_ProcInfo_49_49, &STATE_VARIABLE_ProcInfo_75_75);
  hlds__quantification__requantify_proc_general_3_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_75_75, &STATE_VARIABLE_ProcInfo_17_101);
  check_hlds__recompute_instmap_deltas__recompute_instmap_delta_proc_5_p_0((MR_Integer) 1, STATE_VARIABLE_ProcInfo_17_101, &STATE_VARIABLE_ProcInfo_19_103, STATE_VARIABLE_ModuleInfo_72_72, &STATE_VARIABLE_ModuleInfo_20_104);
  hlds__hlds_pred__pred_info_set_proc_info_4_p_0(ProcId_20, STATE_VARIABLE_ProcInfo_19_103, STATE_VARIABLE_PredInfo_48_48, &STATE_VARIABLE_PredInfo_21_105);
  check_hlds__purity__repuritycheck_proc_4_p_0(STATE_VARIABLE_ModuleInfo_20_104, PredProcId_14, STATE_VARIABLE_PredInfo_21_105, &STATE_VARIABLE_PredInfo_23_107);
  hlds__hlds_module__module_info_set_pred_info_4_p_0(PredId_19, STATE_VARIABLE_PredInfo_23_107, STATE_VARIABLE_ModuleInfo_20_104, STATE_VARIABLE_ModuleInfo_41);
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
      MR_Word Goal0_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word GoalExpr0_18 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 0))));
      MR_Word SymName_42;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_String Var_46;
      MR_Word Var_47;
      MR_String Var_63;
      MR_Word SymName_55;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_String Var_59;
      MR_Word Var_60;
      MR_String Var_64;

      succeeded = ((MR_tag((MR_Word) GoalExpr0_18)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_44 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 0))));
        succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 2);
        if (succeeded)
        {
          SymName_42 = ((MR_Word) ((MR_hl_field(2, Var_44, (MR_Integer) 5))));
          succeeded = ((MR_tag((MR_Word) SymName_42)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_45 = ((MR_Word) ((MR_hl_field(1, SymName_42, (MR_Integer) 0))));
            Var_46 = ((MR_String) ((MR_hl_field(1, SymName_42, (MR_Integer) 1))));
            Var_47 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
            succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_45, Var_47);
            if (succeeded)
            {
              Var_63 = (MR_String) "wait_future";
              succeeded = (strcmp(Var_46, Var_63) == 0);
            }
          }
        }
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_57 = ((MR_Word) ((MR_hl_field(0, Goal0_13, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) Var_57)) == (MR_Integer) 2);
          if (succeeded)
          {
            SymName_55 = ((MR_Word) ((MR_hl_field(2, Var_57, (MR_Integer) 5))));
            succeeded = ((MR_tag((MR_Word) SymName_55)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_58 = ((MR_Word) ((MR_hl_field(1, SymName_55, (MR_Integer) 0))));
              Var_59 = ((MR_String) ((MR_hl_field(1, SymName_55, (MR_Integer) 1))));
              Var_60 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
              succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_58, Var_60);
              if (succeeded)
              {
                Var_64 = (MR_String) "signal_future";
                succeeded = (strcmp(Var_59, Var_64) == 0);
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
          Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_35, 0) = ((MR_Box) (Goal_29));
          MR_hl_field(1, Var_35, 1) = ((MR_Box) (HeadVar__1_1));
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
    MR_Word Case0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Cases0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Case_10;
    MR_Word Cases_11;
    MR_Word MainConsId_13 = ((MR_Word) ((MR_hl_field(0, Case0_8, (MR_Integer) 0))));
    MR_Word OtherConsIds_14 = ((MR_Word) ((MR_hl_field(0, Case0_8, (MR_Integer) 1))));
    MR_Word Goal0_15 = ((MR_Word) ((MR_hl_field(0, Case0_8, (MR_Integer) 2))));
    MR_Word Goal_16;
    MR_Word STATE_VARIABLE_SpecInfo_19_19;

    transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Goal0_15, &Goal_16, STATE_VARIABLE_SpecInfo_0_3, &STATE_VARIABLE_SpecInfo_19_19);
    {
      Case_10 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Case_10, 0) = ((MR_Box) (MainConsId_13));
      MR_hl_field(0, Case_10, 1) = ((MR_Box) (OtherConsIds_14));
      MR_hl_field(0, Case_10, 2) = ((MR_Box) (Goal_16));
    }
    transform_hlds__dep_par_conj__specialize_sequences_in_cases_4_p_0(Cases0_9, &Cases_11, STATE_VARIABLE_SpecInfo_19_19, STATE_VARIABLE_SpecInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Case_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Cases_11));
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
    MR_Word Goal0_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals0_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Goal_10;
    MR_Word Goals_11;
    MR_Word STATE_VARIABLE_SpecInfo_15_15;

    transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Goal0_8, &Goal_10, STATE_VARIABLE_SpecInfo_0_3, &STATE_VARIABLE_SpecInfo_15_15);
    transform_hlds__dep_par_conj__specialize_sequences_in_goals_4_p_0(Goals0_9, &Goals_11, STATE_VARIABLE_SpecInfo_15_15, STATE_VARIABLE_SpecInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (Goals_11));
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
  MR_bool succeeded;
  MR_Word GoalExpr0_8 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 0))));
  MR_Word GoalInfo0_9 = ((MR_Word) ((MR_hl_field(0, Goal0_5, (MR_Integer) 1))));

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
          MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_74));
          MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
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
      switch (((MR_Integer) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 0))))) {
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
            MR_Word ConjType_10 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Word Goals0_11 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));

            switch (ConjType_10) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word GoalExpr_14;
                  MR_Word Goals_68;

                  transform_hlds__dep_par_conj__specialize_sequences_in_goals_4_p_0(Goals0_11, &Goals_68, STATE_VARIABLE_SpecInfo_0_54, STATE_VARIABLE_SpecInfo_55);
                  {
                    GoalExpr_14 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(3, GoalExpr_14, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                    MR_hl_field(3, GoalExpr_14, 1) = (MR_Box) ((MR_Unsigned) (ConjType_10));
                    MR_hl_field(3, GoalExpr_14, 2) = ((MR_Box) (Goals_68));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                    *Goal_6 = base;
                    MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_14));
                    MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
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
            MR_Word Goals0_69 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Goals_70;
            MR_Word GoalExpr_71;

            transform_hlds__dep_par_conj__specialize_sequences_in_goals_4_p_0(Goals0_69, &Goals_70, STATE_VARIABLE_SpecInfo_0_54, STATE_VARIABLE_SpecInfo_55);
            {
              GoalExpr_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_71, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, GoalExpr_71, 1) = ((MR_Box) (Goals_70));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_71));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word SwitchVar_15 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word CanFail_16 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))) & (MR_Integer) 1);
            MR_Word Cases0_17 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Cases_18;
            MR_Word GoalExpr_72;

            transform_hlds__dep_par_conj__specialize_sequences_in_cases_4_p_0(Cases0_17, &Cases_18, STATE_VARIABLE_SpecInfo_0_54, STATE_VARIABLE_SpecInfo_55);
            {
              GoalExpr_72 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_72, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, GoalExpr_72, 1) = ((MR_Box) (SwitchVar_15));
              MR_hl_field(3, GoalExpr_72, 2) = (MR_Box) ((MR_Unsigned) (CanFail_16));
              MR_hl_field(3, GoalExpr_72, 3) = ((MR_Box) (Cases_18));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_72));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Reason_28 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word SubGoal0_80 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Var_64;

            succeeded = ((((MR_tag((MR_Word) Reason_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_28, (MR_Integer) 0)))) == (MR_Integer) 6)));
            if (succeeded)
            {
              Var_64 = ((MR_Unsigned) ((MR_hl_field(3, Reason_28, (MR_Integer) 2))) & (MR_Integer) 3);
              succeeded = (Var_64 == (MR_Integer) 1);
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
                GoalExpr_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, GoalExpr_75, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, GoalExpr_75, 1) = ((MR_Box) (Reason_28));
                MR_hl_field(3, GoalExpr_75, 2) = ((MR_Box) (SubGoal_76));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                *Goal_6 = base;
                MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_75));
                MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
              }
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Quant_19 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 1))));
            MR_Word Cond0_20 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 2))));
            MR_Word Then0_21 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 3))));
            MR_Word Else0_22 = ((MR_Word) ((MR_hl_field(3, GoalExpr0_8, (MR_Integer) 4))));
            MR_Word Cond_23;
            MR_Word Then_24;
            MR_Word Else_25;
            MR_Word STATE_VARIABLE_SpecInfo_60_60;
            MR_Word STATE_VARIABLE_SpecInfo_61_61;
            MR_Word GoalExpr_73;

            transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Cond0_20, &Cond_23, STATE_VARIABLE_SpecInfo_0_54, &STATE_VARIABLE_SpecInfo_60_60);
            transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Then0_21, &Then_24, STATE_VARIABLE_SpecInfo_60_60, &STATE_VARIABLE_SpecInfo_61_61);
            transform_hlds__dep_par_conj__specialize_sequences_in_goal_4_p_0(Else0_22, &Else_25, STATE_VARIABLE_SpecInfo_61_61, STATE_VARIABLE_SpecInfo_55);
            {
              GoalExpr_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, GoalExpr_73, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, GoalExpr_73, 1) = ((MR_Box) (Quant_19));
              MR_hl_field(3, GoalExpr_73, 2) = ((MR_Box) (Cond_23));
              MR_hl_field(3, GoalExpr_73, 3) = ((MR_Box) (Then_24));
              MR_hl_field(3, GoalExpr_73, 4) = ((MR_Box) (Else_25));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              *Goal_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (GoalExpr_73));
              MR_hl_field(0, base, 1) = ((MR_Box) (GoalInfo0_9));
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

static void MR_CALL 
transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_WaitGoal_9;

  transform_hlds__dep_par_conj__make_get_goal_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_WaitGoal_9);
  *wrapper_arg_2 = ((MR_Box) (conv1_WaitGoal_9));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dep_par_conj__should_add_get_goal_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
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
  MR_bool succeeded;
  MR_Word GoalExpr0_16 = ((MR_Word) ((MR_hl_field(0, Goal0_10, (MR_Integer) 0))));
  MR_Word PredId_18 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_16, (MR_Integer) 0))));
  MR_Integer ProcId_19 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_16, (MR_Integer) 1))));
  MR_Word CallVars_20 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_16, (MR_Integer) 2))));
  MR_Word ModuleInfo_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_41, (MR_Integer) 5))));
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
    MR_hl_field(0, PredProcId_27, 0) = ((MR_Box) (PredId_18));
    MR_hl_field(0, PredProcId_27, 1) = ((MR_Box) (ProcId_19));
  }
  CallerPredProcId_28 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_41, (MR_Integer) 3))));
  Var_43 = hlds__hlds_pred__pred_info_all_non_imported_procids_1_f_0(PredInfo_25);
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
        MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_41, (MR_Integer) 1))));
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *RevGoals_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Goal0_10));
        MR_hl_field(1, base, 1) = ((MR_Box) (RevGoals0_9));
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
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *RevGoals_12 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal0_10));
          MR_hl_field(1, base, 1) = ((MR_Box) (RevGoals0_9));
        }
        *FwdGoals_13 = FwdGoals0_11;
      }
      else
      {
        MR_Word Goal_36 = ((MR_Word) ((MR_hl_field(1, MaybeGoal_35, (MR_Integer) 0))));
        MR_Word PushedPairs_37;
        MR_Word PushedPairsNeedGets_38;
        MR_Word VarTable_39;
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
          MR_hl_field(0, Var_49, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_7[2]));
          MR_hl_field(0, Var_49, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0_1));
          MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_49, 3) = ((MR_Box) (NonLocals_14));
          MR_hl_field(0, Var_49, 4) = ((MR_Box) (FwdGoals1_34));
        }
        mercury__list__filter_3_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0), Var_49, PushedPairs_37, &PushedPairsNeedGets_38);
        VarTable_39 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_SpecInfo_42, (MR_Integer) 4))));
        Var_81 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_SpecInfo_42, (MR_Integer) 5))));
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_50, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_4[1]));
          MR_hl_field(0, Var_50, 1) = ((MR_Box) (transform_hlds__dep_par_conj__maybe_specialize_call_and_goals_8_p_0_2));
          MR_hl_field(0, Var_50, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_50, 3) = ((MR_Box) (Var_81));
          MR_hl_field(0, Var_50, 4) = ((MR_Box) (VarTable_39));
        }
        mercury__list__map_3_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), Var_50, PushedPairsNeedGets_38, &GetGoals_40);
        {
          Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_53, 0) = ((MR_Box) (Goal_36));
          MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *RevGoals_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Goal0_10));
      MR_hl_field(1, base, 1) = ((MR_Box) (RevGoals0_9));
    }
    *FwdGoals_13 = FwdGoals0_11;
    *STATE_VARIABLE_SpecInfo_42 = STATE_VARIABLE_SpecInfo_0_41;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Var_3;

  transform_hlds__dep_par_conj__replace_args_with_futures_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv2_Var_3);
  *wrapper_arg_2 = ((MR_Box) (conv2_Var_3));
}

static MR_Box MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = transform_hlds__dep_par_conj__fvp_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = transform_hlds__dep_par_conj__fvp_var_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
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
  MR_Word GoalExpr0_12 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 0))));
  MR_Word GoalInfo0_13 = ((MR_Word) ((MR_hl_field(0, Goal0_9, (MR_Integer) 1))));
  MR_Word PredId_14 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 0))));
  MR_Integer ProcId_15 = ((MR_Integer) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 1))));
  MR_Word CallVars_16 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 2))));
  MR_Word Context_18 = ((MR_Word) ((MR_hl_field(2, GoalExpr0_12, (MR_Integer) 4))));
  MR_Word OrigPPId_20;
  MR_Word WaitVars_21;
  MR_Word SignalVars_22;
  MR_Word FutureArgs_23;
  MR_Word CallPattern_24;
  MR_Word MaybeSpecProc_25;
  MR_Word Var_37;

  {
    OrigPPId_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, OrigPPId_20, 0) = ((MR_Box) (PredId_14));
    MR_hl_field(0, OrigPPId_20, 1) = ((MR_Box) (ProcId_15));
  }
  WaitVars_21 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[7]), WaitPairs_7);
  SignalVars_22 = mercury__list__map_2_f_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_future_var_pair_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[8]), SignalPairs_8);
  Var_37 = mercury__list__f_43_43_2_f_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), WaitVars_21, SignalVars_22);
  transform_hlds__dep_par_conj__number_future_args_5_p_0((MR_Integer) 1, CallVars_16, Var_37, (MR_Word) ((MR_Unsigned) 0U), &FutureArgs_23);
  {
    CallPattern_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CallPattern_24, 0) = ((MR_Box) (OrigPPId_20));
    MR_hl_field(0, CallPattern_24, 1) = ((MR_Box) (FutureArgs_23));
  }
  transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0(FutureArgs_23, CallPattern_24, OrigPPId_20, &MaybeSpecProc_25, STATE_VARIABLE_SpecInfo_0_32, STATE_VARIABLE_SpecInfo_33);
  if ((MaybeSpecProc_25 == (MR_Word) ((MR_Unsigned) 0U)))
    *MaybeGoal_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word SpecPPId_26 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProc_25, (MR_Integer) 0))));
    MR_Word SpecName_27 = ((MR_Word) ((MR_hl_field(1, MaybeSpecProc_25, (MR_Integer) 1))));
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
      MR_hl_field(0, Var_40, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_7[1]));
      MR_hl_field(0, Var_40, 1) = ((MR_Box) (transform_hlds__dep_par_conj__specialize_dep_par_call_6_p_0_3));
      MR_hl_field(0, Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_40, 3) = ((MR_Box) (Var_41));
    }
    mercury__list__map_3_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), Var_40, CallVars_16, &NewCallVars_28);
    SpecPredId_29 = ((MR_Word) ((MR_hl_field(0, SpecPPId_26, (MR_Integer) 0))));
    SpecProcId_30 = ((MR_Integer) ((MR_hl_field(0, SpecPPId_26, (MR_Integer) 1))));
    {
      GoalExpr_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, GoalExpr_31, 0) = ((MR_Box) (SpecPredId_29));
      MR_hl_field(2, GoalExpr_31, 1) = ((MR_Box) (SpecProcId_30));
      MR_hl_field(2, GoalExpr_31, 2) = ((MR_Box) (NewCallVars_28));
      MR_hl_field(2, GoalExpr_31, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(2, GoalExpr_31, 4) = ((MR_Box) (Context_18));
      MR_hl_field(2, GoalExpr_31, 5) = ((MR_Box) (SpecName_27));
    }
    {
      Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_43, 0) = ((MR_Box) (GoalExpr_31));
      MR_hl_field(0, Var_43, 1) = ((MR_Box) (GoalInfo0_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeGoal_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_43));
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
      MR_Word Arg_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
  struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_3(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_16 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv1_Var_16));
  (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__DoneParProc_38 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv0_DoneParProc_38));
  transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_2(env_ptr);
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_2(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_63;

    (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_121 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__DoneParProc_38, (MR_Integer) 0))));
    Var_63 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__DoneParProc_38, (MR_Integer) 1))));
    (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_121);
    if ((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded)
      transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_4(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__commit_0) == 0)
    {
      mercury__map__member_3_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_par_proc_call_pattern_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_new_par_proc_0), (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_130, &(env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv1_Var_16, &(env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv0_DoneParProc_38, transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_3, env_ptr);
      (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_5(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_7(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_32 = ((MR_Word) ((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv2_Var_32));
  transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_6(env_ptr);
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_6(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_32, (MR_Integer) 0))));
    MR_Word Var_71;

    (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__PendingParProc_39 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_32, (MR_Integer) 1))));
    (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_122 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__PendingParProc_39, (MR_Integer) 0))));
    Var_71 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__PendingParProc_39, (MR_Integer) 1))));
    (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = hlds__hlds_pred____Unify____pred_proc_id_0_0((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_122);
    if ((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded)
      transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_5(env_ptr);
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_8(
  void * env_ptr_arg)
{
  struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s * env_ptr = (struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[1]), &(env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__conv2_Var_32, (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_124, transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_7, env_ptr);
      (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0(
  MR_Word FutureArgs_7,
  MR_Word CallPattern_8,
  MR_Word OrigPPId_9,
  MR_Word * MaybeSpecProc_10,
  MR_Word STATE_VARIABLE_SpecInfo_0_27,
  MR_Word * STATE_VARIABLE_SpecInfo_28)
{
  struct transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0_s env;

  (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9 = OrigPPId_9;
  {
    MR_Word SpecNewParProc_12;
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 0))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 6))));
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 1))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 2))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 3))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 4))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 5))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 7))));

    (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded = transform_hlds__dep_par_conj__find_spec_par_proc_for_call_pattern_4_p_0(Var_29, Var_47, CallPattern_8, &SpecNewParProc_12);
    if ((env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded)
    {
      MR_Word SpecPPId_13 = ((MR_Word) ((MR_hl_field(0, SpecNewParProc_12, (MR_Integer) 0))));
      MR_Word SpecSymName_14 = ((MR_Word) ((MR_hl_field(0, SpecNewParProc_12, (MR_Integer) 1))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MaybeSpecProc_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (SpecPPId_13));
        MR_hl_field(1, base, 1) = ((MR_Box) (SpecSymName_14));
      }
      *STATE_VARIABLE_SpecInfo_28 = STATE_VARIABLE_SpecInfo_0_27;
    }
    else
    {
      MR_Word Var_123;
      MR_Word Var_125;
      MR_Word Var_126;
      MR_Word Var_127;
      MR_Word Var_128;
      MR_Word Var_129;

      (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_130 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 0))));
      Var_129 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 1))));
      Var_128 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 2))));
      Var_127 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 3))));
      Var_126 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 4))));
      Var_125 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 5))));
      (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__Var_124 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 6))));
      Var_123 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 7))));
      transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_4(&env);
      if (!((env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded))
        transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_8(&env);
      if ((env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__succeeded)
      {
        *MaybeSpecProc_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_SpecInfo_28 = STATE_VARIABLE_SpecInfo_0_27;
      }
      else
      {
        MR_Word ModuleInfo0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 5))));
        MR_Word PendingParProcs0_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 6))));
        MR_Word RevProcMap0_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 1))));
        MR_String SpecName_22;
        MR_Word ModuleInfo_23;
        MR_Word ModuleName_24;
        MR_Word PendingParProcs_25;
        MR_Word RevProcMap_26;
        MR_Word Var_34;
        MR_Word SpecPPId_40;
        MR_Word SpecSymName_41;
        MR_Word Var_93;
        MR_Word Var_95;
        MR_Word Var_96;
        MR_Word Var_97;
        MR_Word Var_100;
        MR_Word Var_72 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 0))));
        MR_Word Var_74 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 2))));
        MR_Word Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 3))));
        MR_Word Var_76 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 4))));
        MR_Word Var_78 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 7))));
        MR_Word Var_94;
        MR_Word Var_98;
        MR_Word Var_99;

        transform_hlds__dep_par_conj__create_new_spec_parallel_pred_6_p_0(FutureArgs_7, (env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9, &SpecPPId_40, &SpecName_22, ModuleInfo0_19, &ModuleInfo_23);
        hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_23, &ModuleName_24);
        {
          SpecSymName_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SpecSymName_41, 0) = ((MR_Box) (ModuleName_24));
          MR_hl_field(1, SpecSymName_41, 1) = ((MR_Box) (SpecName_22));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *MaybeSpecProc_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SpecPPId_40));
          MR_hl_field(1, base, 1) = ((MR_Box) (SpecSymName_41));
        }
        {
          Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_34, 0) = ((MR_Box) (SpecPPId_40));
          MR_hl_field(0, Var_34, 1) = ((MR_Box) (SpecSymName_41));
        }
        transform_hlds__dep_par_conj__queue_par_proc_4_p_0(CallPattern_8, Var_34, PendingParProcs0_20, &PendingParProcs_25);
        RevProcMap_26 = mercury__map__det_insert_3_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), RevProcMap0_21, ((MR_Box) (SpecPPId_40)), ((MR_Box) ((env).transform_hlds__dep_par_conj__get_or_create_spec_par_proc_6_p_0_env_0__OrigPPId_9)));
        Var_93 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 0))));
        Var_94 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 1))));
        Var_95 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 2))));
        Var_96 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 3))));
        Var_97 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 4))));
        Var_98 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 5))));
        Var_99 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 6))));
        Var_100 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_27, (MR_Integer) 7))));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_SpecInfo_28 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_93));
          MR_hl_field(0, base, 1) = ((MR_Box) (RevProcMap_26));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_95));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_96));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_97));
          MR_hl_field(0, base, 5) = ((MR_Box) (ModuleInfo_23));
          MR_hl_field(0, base, 6) = ((MR_Box) (PendingParProcs_25));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_100));
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
  MR_Word PredId_29;
  MR_Integer ProcId_30;
  MR_Word PredModule_31;
  MR_String Name0_32;
  MR_Word PredOrFunc_33;
  MR_Word Tvars_34;
  MR_Word ExistQVars_35;
  MR_Word ArgTypes0_36;
  MR_Word OrigOrigin_37;
  MR_Word Transform_38;
  MR_String TransformedName_39;
  MR_Word PredFormArity_40;
  MR_Word TypeVars_41;
  MR_Word ArgTypes_42;
  MR_Word Context_43;
  MR_Word ClausesInfo_44;
  MR_Word Markers_45;
  MR_Word GoalType_46;
  MR_Word ClassContext_47;
  MR_Word VarNameRemap_48;
  MR_Word EmptyProofs_49;
  MR_Word EmptyConstraintMap_50;
  MR_Word ProcTransform_51;
  MR_Word Origin_52;
  MR_Integer Var_54;
  MR_Word STATE_VARIABLE_PredInfo_39_56;

  hlds__hlds_module__module_info_pred_proc_info_4_p_0(STATE_VARIABLE_ModuleInfo_0_24, OrigPPId_8, &OrigPredInfo_12, &OrigProcInfo_13);
  PredId_29 = ((MR_Word) ((MR_hl_field(0, OrigPPId_8, (MR_Integer) 0))));
  ProcId_30 = ((MR_Integer) ((MR_hl_field(0, OrigPPId_8, (MR_Integer) 1))));
  PredModule_31 = hlds__hlds_pred__pred_info_module_1_f_0(OrigPredInfo_12);
  Name0_32 = hlds__hlds_pred__pred_info_name_1_f_0(OrigPredInfo_12);
  PredOrFunc_33 = hlds__hlds_pred__pred_info_is_pred_or_func_1_f_0(OrigPredInfo_12);
  hlds__hlds_pred__pred_info_get_arg_types_4_p_0(OrigPredInfo_12, &Tvars_34, &ExistQVars_35, &ArgTypes0_36);
  hlds__hlds_pred__pred_info_get_origin_2_p_0(OrigPredInfo_12, &OrigOrigin_37);
  Var_54 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_30);
  {
    Transform_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Transform_38, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Transform_38, 1) = (MR_Box) ((MR_Unsigned) (PredOrFunc_33));
    MR_hl_field(3, Transform_38, 2) = ((MR_Box) (Var_54));
    MR_hl_field(3, Transform_38, 3) = ((MR_Box) (FutureArgs_7));
  }
  hlds__pred_name__make_transformed_pred_name_3_p_0(Name0_32, Transform_38, &TransformedName_39);
  PredFormArity_40 = hlds__hlds_pred__pred_info_pred_form_arity_1_f_0(OrigPredInfo_12);
  hlds__hlds_pred__pred_info_get_typevarset_2_p_0(OrigPredInfo_12, &TypeVars_41);
  transform_hlds__dep_par_conj__futurise_argtypes_4_p_0((MR_Integer) 1, FutureArgs_7, ArgTypes0_36, &ArgTypes_42);
  hlds__hlds_pred__pred_info_get_context_2_p_0(OrigPredInfo_12, &Context_43);
  hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(OrigPredInfo_12, &ClausesInfo_44);
  hlds__hlds_pred__pred_info_get_markers_2_p_0(OrigPredInfo_12, &Markers_45);
  hlds__hlds_pred__pred_info_get_goal_type_2_p_0(OrigPredInfo_12, &GoalType_46);
  hlds__hlds_pred__pred_info_get_class_context_2_p_0(OrigPredInfo_12, &ClassContext_47);
  hlds__hlds_pred__pred_info_get_var_name_remap_2_p_0(OrigPredInfo_12, &VarNameRemap_48);
  mercury__map__init_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_proof_0), &EmptyProofs_49);
  mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_class__hlds__hlds_class__type_ctor_info_constraint_id_0), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), &EmptyConstraintMap_50);
  {
    ProcTransform_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ProcTransform_51, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, ProcTransform_51, 1) = ((MR_Box) (FutureArgs_7));
  }
  {
    Origin_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Origin_52, 0) = ((MR_Box) (ProcTransform_51));
    MR_hl_field(3, Origin_52, 1) = ((MR_Box) (OrigOrigin_37));
    MR_hl_field(3, Origin_52, 2) = ((MR_Box) (PredId_29));
    MR_hl_field(3, Origin_52, 3) = ((MR_Box) (ProcId_30));
  }
  hlds__hlds_pred__pred_info_init_19_p_0(PredOrFunc_33, PredModule_31, TransformedName_39, PredFormArity_40, Context_43, Origin_52, (MR_Word) (((MR_Box) ((MR_Unsigned) 32U))), (MR_Word) ((MR_Unsigned) 0U), GoalType_46, Markers_45, ArgTypes_42, Tvars_34, ExistQVars_35, ClassContext_47, EmptyProofs_49, EmptyConstraintMap_50, ClausesInfo_44, VarNameRemap_48, &STATE_VARIABLE_PredInfo_39_56);
  hlds__hlds_pred__pred_info_set_typevarset_3_p_0(TypeVars_41, STATE_VARIABLE_PredInfo_39_56, &NewPredInfo0_15);
  *NewPredName_10 = hlds__hlds_pred__pred_info_name_1_f_0(NewPredInfo0_15);
  ProcId_17 = ((MR_Integer) ((MR_hl_field(0, OrigPPId_8, (MR_Integer) 1))));
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
    MR_hl_field(0, base, 0) = ((MR_Box) (NewPredId_22));
    MR_hl_field(0, base, 1) = ((MR_Box) (ProcId_17));
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__futurise_argtypes_4_p_0(
  MR_Integer ArgNo_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_26 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140transform_hlds.dep_par_conj.futurise_argtypes\'/4", (MR_String) "more future arguments than argument types");
        return;
      }
    else
    {
      MR_Word ArgType_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgTypes_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
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
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__4_4 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (FuturisedArgType_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (FuturisedArgTypes_19));
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
  MR_Word Var_11;

  {
    Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_11, 0) = ((MR_Box) (CallPattern_5));
    MR_hl_field(0, Var_11, 1) = ((MR_Box) (NewProc_6));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *STATE_VARIABLE_PendingParProcs_9 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_PendingParProcs_0_8));
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__find_spec_par_proc_for_call_pattern_4_p_0(
  MR_Word DoneParProcs_5,
  MR_Word PendingProcs_6,
  MR_Word CallPattern_7,
  MR_Word * SpecProc_8)
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
    MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word GoalExpr_22 = ((MR_Word) ((MR_hl_field(0, Goal_14, (MR_Integer) 0))));
    MR_Word FutureVar_30;
    MR_Word ProducedVar_31;
    MR_Word SignalArgs_26;
    MR_Word SymName_29;
    MR_Word Var_39;
    MR_String Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_46;
    MR_String Var_49;

    succeeded = ((MR_tag((MR_Word) GoalExpr_22)) == (MR_Integer) 2);
    if (succeeded)
    {
      SignalArgs_26 = ((MR_Word) ((MR_hl_field(2, GoalExpr_22, (MR_Integer) 2))));
      SymName_29 = ((MR_Word) ((MR_hl_field(2, GoalExpr_22, (MR_Integer) 5))));
      succeeded = ((MR_tag((MR_Word) SymName_29)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_39 = ((MR_Word) ((MR_hl_field(1, SymName_29, (MR_Integer) 0))));
        Var_40 = ((MR_String) ((MR_hl_field(1, SymName_29, (MR_Integer) 1))));
        Var_46 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_39, Var_46);
        if (succeeded)
        {
          Var_49 = (MR_String) "signal_future";
          succeeded = (strcmp(Var_40, Var_49) == 0);
          if (succeeded)
          {
            succeeded = (SignalArgs_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FutureVar_30 = ((MR_Word) ((MR_hl_field(1, SignalArgs_26, (MR_Integer) 0))));
              Var_41 = ((MR_Word) ((MR_hl_field(1, SignalArgs_26, (MR_Integer) 1))));
              succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ProducedVar_31 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
                Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
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
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
                MR_hl_field(1, base, 1) = ((MR_Box) (UnPushedSignalGoalsTail_33));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word PushedSignalPair_36;

              {
                PushedSignalPair_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PushedSignalPair_36, 0) = ((MR_Box) (FutureVar_30));
                MR_hl_field(0, PushedSignalPair_36, 1) = ((MR_Box) (ProducedVar_31));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (PushedSignalPair_36));
                MR_hl_field(1, base, 1) = ((MR_Box) (PushedSignalPairsTail_32));
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
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (UnPushedSignalGoalsTail_33));
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
    MR_Word Goal_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Goals_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word GoalExpr_22 = ((MR_Word) ((MR_hl_field(0, Goal_14, (MR_Integer) 0))));
    MR_Word FutureVar_30;
    MR_Word ConsumedVar_31;
    MR_Word WaitArgs_26;
    MR_Word SymName_29;
    MR_Word Var_39;
    MR_String Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_46;
    MR_String Var_49;

    succeeded = ((MR_tag((MR_Word) GoalExpr_22)) == (MR_Integer) 2);
    if (succeeded)
    {
      WaitArgs_26 = ((MR_Word) ((MR_hl_field(2, GoalExpr_22, (MR_Integer) 2))));
      SymName_29 = ((MR_Word) ((MR_hl_field(2, GoalExpr_22, (MR_Integer) 5))));
      succeeded = ((MR_tag((MR_Word) SymName_29)) == (MR_Integer) 1);
      if (succeeded)
      {
        Var_39 = ((MR_Word) ((MR_hl_field(1, SymName_29, (MR_Integer) 0))));
        Var_40 = ((MR_String) ((MR_hl_field(1, SymName_29, (MR_Integer) 1))));
        Var_46 = mdbcomp__builtin_modules__mercury_par_builtin_module_0_f_0();
        succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Var_39, Var_46);
        if (succeeded)
        {
          Var_49 = (MR_String) "wait_future";
          succeeded = (strcmp(Var_40, Var_49) == 0);
          if (succeeded)
          {
            succeeded = (WaitArgs_26 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              FutureVar_30 = ((MR_Word) ((MR_hl_field(1, WaitArgs_26, (MR_Integer) 0))));
              Var_41 = ((MR_Word) ((MR_hl_field(1, WaitArgs_26, (MR_Integer) 1))));
              succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                ConsumedVar_31 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
                Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
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
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
                MR_hl_field(1, base, 1) = ((MR_Box) (UnPushedWaitGoalsTail_33));
              }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word PushedWaitPair_36;

              {
                PushedWaitPair_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, PushedWaitPair_36, 0) = ((MR_Box) (FutureVar_30));
                MR_hl_field(0, PushedWaitPair_36, 1) = ((MR_Box) (ConsumedVar_31));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (PushedWaitPair_36));
                MR_hl_field(1, base, 1) = ((MR_Box) (PushedWaitPairsTail_32));
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
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Goal_14));
          MR_hl_field(1, base, 1) = ((MR_Box) (UnPushedWaitGoalsTail_33));
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

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_6_p_0(
  MR_Word PredProcId_7,
  MR_Integer ArgPos_8,
  MR_Word PushOp_9,
  MR_Word * IsWorthPushing_10,
  MR_Word STATE_VARIABLE_SpecInfo_0_21,
  MR_Word * STATE_VARIABLE_SpecInfo_22)
{
  MR_bool succeeded;
  MR_Word Pushability0_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 7))));
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

    succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0), ProcPushMap0_13, ArgPos_8, &conv1_KnownWorthPushing_14);
    if (succeeded)
    {
      KnownWorthPushing_14 = ((MR_Word) (conv1_KnownWorthPushing_14));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *IsWorthPushing_10 = KnownWorthPushing_14;
      *STATE_VARIABLE_SpecInfo_22 = STATE_VARIABLE_SpecInfo_0_21;
    }
    else
    {
      MR_Word ProcPushMap_15;
      MR_Word Pushability_16;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;

      transform_hlds__dep_par_conj__should_we_push_test_5_p_0(PredProcId_7, ArgPos_8, PushOp_9, IsWorthPushing_10, STATE_VARIABLE_SpecInfo_0_21);
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0), ArgPos_8, ((MR_Box) (*IsWorthPushing_10)), ProcPushMap0_13, &ProcPushMap_15);
      mercury__map__det_update_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]), ((MR_Box) (PredProcId_7)), ((MR_Box) (ProcPushMap_15)), Pushability0_12, &Pushability_16);
      Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 0))));
      Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 1))));
      Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 2))));
      Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 3))));
      Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 4))));
      Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 5))));
      Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 6))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_SpecInfo_22 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Var_34));
        MR_hl_field(0, base, 1) = ((MR_Box) (Var_35));
        MR_hl_field(0, base, 2) = ((MR_Box) (Var_36));
        MR_hl_field(0, base, 3) = ((MR_Box) (Var_37));
        MR_hl_field(0, base, 4) = ((MR_Box) (Var_38));
        MR_hl_field(0, base, 5) = ((MR_Box) (Var_39));
        MR_hl_field(0, base, 6) = ((MR_Box) (Var_40));
        MR_hl_field(0, base, 7) = ((MR_Box) (Pushability_16));
      }
    }
  }
  else
  {
    MR_Word InitialModuleInfo_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 2))));
    MR_Word Globals_18;
    MR_Word OptTuple_19;
    MR_Word AlwaysSpecialize_20;
    MR_Word ProcPushMap_25;
    MR_Word Pushability_26;
    MR_Word Var_173;
    MR_Word Var_174;
    MR_Word Var_175;
    MR_Word Var_176;
    MR_Word Var_177;
    MR_Word Var_178;
    MR_Word Var_179;

    hlds__hlds_module__module_info_get_globals_2_p_0(InitialModuleInfo_17, &Globals_18);
    libs__globals__get_opt_tuple_2_p_0(Globals_18, &OptTuple_19);
    AlwaysSpecialize_20 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_19, (MR_Integer) 1))) >> 22)) & (MR_Integer) 1);
    switch (AlwaysSpecialize_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        transform_hlds__dep_par_conj__should_we_push_test_5_p_0(PredProcId_7, ArgPos_8, PushOp_9, IsWorthPushing_10, STATE_VARIABLE_SpecInfo_0_21);
        break;
      case (MR_Integer) 0:
        *IsWorthPushing_10 = (MR_Integer) 0;
        break;
    }
    ProcPushMap_25 = mercury__map__singleton_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_maybe_worth_pushing_0), ((MR_Box) (ArgPos_8)), ((MR_Box) (*IsWorthPushing_10)));
    mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&transform_hlds__dep_par_conj_scalar_common_2[0]), ((MR_Box) (PredProcId_7)), ((MR_Box) (ProcPushMap_25)), Pushability0_12, &Pushability_26);
    Var_173 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 0))));
    Var_174 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 1))));
    Var_175 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 2))));
    Var_176 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 3))));
    Var_177 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 4))));
    Var_178 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 5))));
    Var_179 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_SpecInfo_0_21, (MR_Integer) 6))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_SpecInfo_22 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_173));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_174));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_175));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_176));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_177));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_178));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_179));
      MR_hl_field(0, base, 7) = ((MR_Box) (Pushability_26));
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
  MR_Word InitialModuleInfo_11 = ((MR_Word) ((MR_hl_field(0, SpecInfo_10, (MR_Integer) 2))));
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
        *IsWorthPushing_9 = ((&transform_hlds__dep_par_conj_vector_common_11[0 + CostBeforeWait_16]))->transform_hlds__dep_par_conj__vector_common_type_11_0__vct_11_f_0;
      }
      break;
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_4_p_0_2(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = mercury__std_util__negate_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dep_par_conj__IntroducedFrom__pred__should_we_push_signal__2824__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
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
    MR_Word GoalExpr_8 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 0))));
    MR_Word GoalInfo_9 = ((MR_Word) ((MR_hl_field(0, Goal_6, (MR_Integer) 1))));
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
                  *STATE_VARIABLE_Signal_54 = STATE_VARIABLE_Signal_0_53;
              }
              break;
            case (MR_Integer) 2:
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
                  switch (STATE_VARIABLE_Signal_0_53) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_Signal_54 = STATE_VARIABLE_Signal_0_53;
                      break;
                    case (MR_Integer) 2:
                      *STATE_VARIABLE_Signal_54 = (MR_Integer) 3;
                      break;
                  }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 0))))) {
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
                      switch (STATE_VARIABLE_Signal_0_53) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          *STATE_VARIABLE_Signal_54 = STATE_VARIABLE_Signal_0_53;
                          break;
                        case (MR_Integer) 2:
                          *STATE_VARIABLE_Signal_54 = (MR_Integer) 3;
                          break;
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ConjType_37 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))) & (MR_Integer) 1);
                    MR_Word Conjuncts_38 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));

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
                    MR_Word Disjuncts_39 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));

                    transform_hlds__dep_par_conj__should_we_push_signal_in_disj_4_p_0(Var_5, Disjuncts_39, STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    MR_Word SwitchVar_40 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
                    MR_Word Cases_42 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));

                    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (Var_5)), ((MR_Box) (SwitchVar_40)));
                    if (succeeded)
                    {
                      MR_Word Var_64;
                      MR_Word Var_67;

                      {
                        Var_67 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_67, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[0]));
                        MR_hl_field(0, Var_67, 1) = ((MR_Box) (transform_hlds__dep_par_conj__should_we_push_signal_4_p_0_1));
                        MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 2));
                        MR_hl_field(0, Var_67, 3) = ((MR_Box) (STATE_VARIABLE_Signal_0_53));
                        MR_hl_field(0, Var_67, 4) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        Var_64 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_64, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_10[0]));
                        MR_hl_field(0, Var_64, 1) = ((MR_Box) (transform_hlds__dep_par_conj__should_we_push_signal_4_p_0_2));
                        MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(0, Var_64, 3) = ((MR_Box) (Var_67));
                      }
                      mercury__require__expect_3_p_0(Var_64, (MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_signal\'/4", (MR_String) "not seen switch var");
                      *STATE_VARIABLE_Signal_54 = STATE_VARIABLE_Signal_0_53;
                    }
                    else
                      transform_hlds__dep_par_conj__should_we_push_signal_in_cases_4_p_0(Var_5, Cases_42, STATE_VARIABLE_Signal_0_53, STATE_VARIABLE_Signal_54);
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    MR_Word Reason_50 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 1))));
                    MR_Word SubGoal_88 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 2))));
                    MR_Word TermVar_51;
                    MR_Word Var_82;

                    succeeded = ((((MR_tag((MR_Word) Reason_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_50, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      TermVar_51 = ((MR_Word) ((MR_hl_field(3, Reason_50, (MR_Integer) 1))));
                      Var_82 = ((MR_Unsigned) ((MR_hl_field(3, Reason_50, (MR_Integer) 2))) & (MR_Integer) 3);
                      succeeded = (Var_82 == (MR_Integer) 1);
                    }
                    if (succeeded)
                    {
                      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (Var_5)), ((MR_Box) (TermVar_51)));
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
                    MR_Word Then_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 3))));
                    MR_Word Else_46 = ((MR_Word) ((MR_hl_field(3, GoalExpr_8, (MR_Integer) 4))));
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
transform_hlds__dep_par_conj__should_we_push_signal_in_cases_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Integer) 1;
    else
    {
      MR_Word FirstCase_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word LaterCases_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word FirstGoal_14 = ((MR_Word) ((MR_hl_field(0, FirstCase_8, (MR_Integer) 2))));
      MR_Word SignalFirst_15;

      transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(HeadVar__1_1, FirstGoal_14, HeadVar__3_3, &SignalFirst_15);
      switch (SignalFirst_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__2_2 = LaterCases_9;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Signal0_19;

            transform_hlds__dep_par_conj__should_we_push_signal_in_cases_4_p_0(HeadVar__1_1, LaterCases_9, HeadVar__3_3, &Signal0_19);
            switch (Signal0_19) {
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
                *HeadVar__4_4 = Signal0_19;
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
    break;
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_disj_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = (MR_Integer) 1;
    else
    {
      MR_Word FirstGoal_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word LaterGoals_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word SignalFirst_12;

      transform_hlds__dep_par_conj__should_we_push_signal_4_p_0(HeadVar__1_1, FirstGoal_8, HeadVar__3_3, &SignalFirst_12);
      switch (SignalFirst_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__2_2 = LaterGoals_9;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Signal0_16;

            transform_hlds__dep_par_conj__should_we_push_signal_in_disj_4_p_0(HeadVar__1_1, LaterGoals_9, HeadVar__3_3, &Signal0_16);
            switch (Signal0_16) {
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
                *HeadVar__4_4 = Signal0_16;
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
      MR_Word Conjunct_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Conjuncts_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_par_conj_5_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = transform_hlds__dep_par_conj__we_have_seen_more_signal_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_signal_in_par_conj_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_FinalSignal_0_4,
  MR_Word * STATE_VARIABLE_FinalSignal_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_FinalSignal_5 = STATE_VARIABLE_FinalSignal_0_4;
  else
  {
    MR_Word Conjunct_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Conjuncts_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_9[0]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (transform_hlds__dep_par_conj__should_we_push_signal_in_par_conj_5_p_0_1));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (STATE_VARIABLE_FinalSignal_0_4));
      MR_hl_field(0, Var_27, 4) = ((MR_Box) (*STATE_VARIABLE_FinalSignal_5));
    }
    mercury__require__expect_3_p_0(Var_27, (MR_String) "predicate \140transform_hlds.dep_par_conj.should_we_push_signal_in_par_conj\'/5", (MR_String) "final signal goes backwards");
  }
}

static void MR_CALL 
transform_hlds__dep_par_conj__should_we_push_wait_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Wait_6;

  transform_hlds__dep_par_conj__should_we_push_wait_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Wait_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Wait_6));
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
    MR_Word GoalExpr_7 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 0))));
    MR_Word GoalInfo_8 = ((MR_Word) ((MR_hl_field(0, Goal_5, (MR_Integer) 1))));
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
          MR_Word BuiltinStatus_18 = ((MR_Unsigned) ((MR_hl_field(2, GoalExpr_7, (MR_Integer) 3))) & (MR_Integer) 1);

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
        switch (((MR_Integer) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 0))))) {
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
              MR_Word ConjType_33 = ((MR_Unsigned) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Word Conjuncts_34 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));

              switch (ConjType_33) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word Waits_35;
                    MR_Word Var_63;

                    {
                      Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_63, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_7[0]));
                      MR_hl_field(0, Var_63, 1) = ((MR_Box) (transform_hlds__dep_par_conj__should_we_push_wait_3_p_0_1));
                      MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(0, Var_63, 3) = ((MR_Box) (Var_4));
                    }
                    mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&transform_hlds__dep_par_conj__transform_hlds__dep_par_conj__type_ctor_info_cost_before_wait_0), Var_63, Conjuncts_34, &Waits_35);
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
              MR_Word Disjuncts_36 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
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
                    MR_Word FirstDisjunct_40 = ((MR_Word) ((MR_hl_field(1, Disjuncts_36, (MR_Integer) 0))));
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
              MR_Word SwitchVar_43 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_Word Cases_45 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 3))));

              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), ((MR_Box) (Var_4)), ((MR_Box) (SwitchVar_43)));
              if (succeeded)
                *Wait_6 = (MR_Integer) 2;
              else
                transform_hlds__dep_par_conj__should_we_push_wait_in_cases_4_p_0(Var_4, Cases_45, (MR_Integer) 0, Wait_6);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Reason_60 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 1))));
              MR_Word SubGoal_71 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word Var_68;

              succeeded = ((((MR_tag((MR_Word) Reason_60)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Reason_60, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                Var_68 = ((MR_Unsigned) ((MR_hl_field(3, Reason_60, (MR_Integer) 2))) & (MR_Integer) 3);
                succeeded = (Var_68 == (MR_Integer) 1);
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
              MR_Word Cond_47 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 2))));
              MR_Word Then_48 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 3))));
              MR_Word Else_49 = ((MR_Word) ((MR_hl_field(3, GoalExpr_7, (MR_Integer) 4))));
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
                    ThenSeen_53 = ((&transform_hlds__dep_par_conj_vector_common_8[0 + WaitThen_51]))->transform_hlds__dep_par_conj__vector_common_type_8_0__vct_8_f_0;
                    ThenCost_54 = ((&transform_hlds__dep_par_conj_vector_common_8[0 + WaitThen_51]))->transform_hlds__dep_par_conj__vector_common_type_8_0__vct_8_f_1;
                    ElseSeen_55 = ((&transform_hlds__dep_par_conj_vector_common_8[4 + WaitElse_52]))->transform_hlds__dep_par_conj__vector_common_type_8_0__vct_8_f_0;
                    ElseCost_56 = ((&transform_hlds__dep_par_conj_vector_common_8[4 + WaitElse_52]))->transform_hlds__dep_par_conj__vector_common_type_8_0__vct_8_f_1;
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
      MR_Word Case_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Cases_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Goal_15 = ((MR_Word) ((MR_hl_field(0, Case_9, (MR_Integer) 2))));
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
      MR_Word Goal_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Goals_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv9_Goal_12;
  MR_Word conv8_STATE_VARIABLE_VarTable_17;

  transform_hlds__dep_par_conj__insert_wait_after_goal_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv9_Goal_12, ((MR_Word) (wrapper_arg_4)), &conv8_STATE_VARIABLE_VarTable_17);
  *wrapper_arg_3 = ((MR_Box) (conv9_Goal_12));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_VarTable_17));
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_Goal_12;
  MR_Word conv4_STATE_VARIABLE_VarTable_71;

  transform_hlds__dep_par_conj__insert_signal_in_goal_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_Goal_12, ((MR_Word) (wrapper_arg_4)), &conv4_STATE_VARIABLE_VarTable_71);
  *wrapper_arg_3 = ((MR_Box) (conv5_Goal_12));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_VarTable_71));
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Goal_17;
  MR_Word conv0_STATE_VARIABLE_VarTable_19;

  transform_hlds__dep_par_conj__insert_wait_in_goal_for_proc_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Goal_17, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_VarTable_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Goal_17));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_VarTable_19));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = hlds__instmap__var_is_bound_in_instmap_delta_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word AllowSomePathsOnly_11,
  MR_Word SharedVars_12,
  MR_Word FutureMap_13,
  MR_Word InstMap_14,
  MR_Word STATE_VARIABLE_Goal_0_24,
  MR_Word * STATE_VARIABLE_Goal_25,
  MR_Word STATE_VARIABLE_VarTable_0_26,
  MR_Word * STATE_VARIABLE_VarTable_27)
{
  MR_bool succeeded;
  MR_Word Nonlocals_17;
  MR_Word NonlocalSharedVars_18;
  MR_Word WaitAfterVars_23;
  MR_Word STATE_VARIABLE_Goal_32_32;
  MR_Word STATE_VARIABLE_VarTable_33_33;

  Nonlocals_17 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(STATE_VARIABLE_Goal_0_24);
  parse_tree__set_of_var__intersect_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Nonlocals_17, SharedVars_12, &NonlocalSharedVars_18);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonlocalSharedVars_18);
  if (succeeded)
  {
    STATE_VARIABLE_VarTable_33_33 = STATE_VARIABLE_VarTable_0_26;
    STATE_VARIABLE_Goal_32_32 = STATE_VARIABLE_Goal_0_24;
  }
  else
  {
    MR_Word GoalInfo0_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Goal_0_24, (MR_Integer) 1))));
    MR_Word InstMapDelta0_20;
    MR_Word ConsumedVarsList_21;
    MR_Word ProducedVarsList_22;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_Goal_29_29;
    MR_Word STATE_VARIABLE_VarTable_30_30;
    MR_Word Var_31;
    MR_Word IsProducedVar_59;
    MR_Word ProducedVars_60;
    MR_Word ConsumedVars_61;
    MR_Box conv3_STATE_VARIABLE_Goal_29_29;
    MR_Box conv2_STATE_VARIABLE_VarTable_30_30;
    MR_Box conv7_STATE_VARIABLE_Goal_32_32;
    MR_Box conv6_STATE_VARIABLE_VarTable_33_33;

    InstMapDelta0_20 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(GoalInfo0_19);
    {
      IsProducedVar_59 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IsProducedVar_59, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_4[0]));
      MR_hl_field(0, IsProducedVar_59, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_1));
      MR_hl_field(0, IsProducedVar_59, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, IsProducedVar_59, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(0, IsProducedVar_59, 4) = ((MR_Box) (InstMap_14));
      MR_hl_field(0, IsProducedVar_59, 5) = ((MR_Box) (InstMapDelta0_20));
    }
    parse_tree__set_of_var__divide_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), IsProducedVar_59, NonlocalSharedVars_18, &ProducedVars_60, &ConsumedVars_61);
    ConsumedVarsList_21 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ConsumedVars_61);
    ProducedVarsList_22 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), ProducedVars_60);
    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_5[0]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_2));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (AllowSomePathsOnly_11));
      MR_hl_field(0, Var_28, 5) = ((MR_Box) (FutureMap_13));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_28, ConsumedVarsList_21, ((MR_Box) (STATE_VARIABLE_Goal_0_24)), &conv3_STATE_VARIABLE_Goal_29_29, ((MR_Box) (STATE_VARIABLE_VarTable_0_26)), &conv2_STATE_VARIABLE_VarTable_30_30);
    STATE_VARIABLE_Goal_29_29 = ((MR_Word) (conv3_STATE_VARIABLE_Goal_29_29));
    STATE_VARIABLE_VarTable_30_30 = ((MR_Word) (conv2_STATE_VARIABLE_VarTable_30_30));
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_31, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[0]));
      MR_hl_field(0, Var_31, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_3));
      MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_31, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(0, Var_31, 4) = ((MR_Box) (FutureMap_13));
    }
    mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_31, ProducedVarsList_22, ((MR_Box) (STATE_VARIABLE_Goal_29_29)), &conv7_STATE_VARIABLE_Goal_32_32, ((MR_Box) (STATE_VARIABLE_VarTable_30_30)), &conv6_STATE_VARIABLE_VarTable_33_33);
    STATE_VARIABLE_Goal_32_32 = ((MR_Word) (conv7_STATE_VARIABLE_Goal_32_32));
    STATE_VARIABLE_VarTable_33_33 = ((MR_Word) (conv6_STATE_VARIABLE_VarTable_33_33));
  }
  parse_tree__set_of_var__difference_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SharedVars_12, Nonlocals_17, &WaitAfterVars_23);
  succeeded = parse_tree__set_of_var__is_empty_1_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), WaitAfterVars_23);
  if (succeeded)
  {
    *STATE_VARIABLE_VarTable_27 = STATE_VARIABLE_VarTable_33_33;
    *STATE_VARIABLE_Goal_25 = STATE_VARIABLE_Goal_32_32;
  }
  else
  {
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Box conv11_STATE_VARIABLE_Goal_25;
    MR_Box conv10_STATE_VARIABLE_VarTable_27;

    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&transform_hlds__dep_par_conj_scalar_common_6[0]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (transform_hlds__dep_par_conj__sync_dep_par_proc_body_9_p_0_4));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (FutureMap_13));
    }
    Var_35 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), WaitAfterVars_23);
    mercury__list__foldl2_6_p_0((MR_Word) (&transform_hlds__dep_par_conj_scalar_common_1[2]), (MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0), Var_34, Var_35, ((MR_Box) (STATE_VARIABLE_Goal_32_32)), &conv11_STATE_VARIABLE_Goal_25, ((MR_Box) (STATE_VARIABLE_VarTable_33_33)), &conv10_STATE_VARIABLE_VarTable_27);
    *STATE_VARIABLE_Goal_25 = ((MR_Word) (conv11_STATE_VARIABLE_Goal_25));
    *STATE_VARIABLE_VarTable_27 = ((MR_Word) (conv10_STATE_VARIABLE_VarTable_27));
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
    MR_String Str_8 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Strs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer Size0_12;
    MR_Word STATE_VARIABLE_Map_15_15;

    transform_hlds__dep_par_conj__make_ts_string_table_2_4_p_0(Strs_9, &Size0_12, STATE_VARIABLE_Map_0_3, &STATE_VARIABLE_Map_15_15);
    *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Size0_12 + (MR_Unsigned) 1);
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), ((MR_Box) (Str_8)), ((MR_Box) (Size0_12)), STATE_VARIABLE_Map_15_15, STATE_VARIABLE_Map_4);
  }
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____arg_pos_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____arg_pos_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____arg_pos_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____arg_pos_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____cost_after_signal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____cost_after_signal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____cost_before_wait_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____cost_before_wait_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____cost_before_wait_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____cost_before_wait_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____done_par_procs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____done_par_procs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____done_par_procs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____done_par_procs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____future_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____future_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____future_var_pair_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____future_var_pair_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____future_var_pair_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____future_var_pair_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____maybe_spec_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____maybe_spec_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_spec_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____maybe_spec_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____maybe_worth_pushing_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____maybe_worth_pushing_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____maybe_worth_pushing_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____maybe_worth_pushing_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____new_par_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____new_par_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____new_par_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____new_par_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____par_proc_call_pattern_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____par_proc_call_pattern_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____par_proc_call_pattern_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____par_proc_call_pattern_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pending_par_procs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____pending_par_procs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pending_par_procs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____pending_par_procs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____proc_pushable_args_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____proc_pushable_args_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____proc_pushable_args_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____proc_pushable_args_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____push_op_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____push_op_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____push_op_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____push_op_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____pushable_args_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____pushable_args_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____pushable_args_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____pushable_args_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____rev_proc_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____rev_proc_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____rev_proc_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____rev_proc_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____spec_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____spec_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____spec_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____spec_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____sync_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____sync_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____sync_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____sync_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____ts_string_table_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____ts_string_table_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____ts_string_table_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____ts_string_table_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____wait_or_get_pred_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____wait_or_get_pred_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____wait_or_get_pred_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____wait_or_get_pred_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____waited_in_conjunct_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____waited_in_conjunct_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_in_conjunct_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____waited_in_conjunct_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = transform_hlds__dep_par_conj____Unify____waited_on_all_success_paths_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  transform_hlds__dep_par_conj____Compare____waited_on_all_success_paths_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
