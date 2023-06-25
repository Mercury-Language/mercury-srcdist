/*
** Automatically generated from `mode_info.m'
** by the Mercury compiler,
** version rotd-2023-06-25
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


// :- module check_hlds.mode_info.
// :- implementation.

/*
INIT mercury__check_hlds__mode_info__init
ENDINIT
*/

#include "check_hlds.mode_info.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"




static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1;

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1];

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2];

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[4];

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[4];

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[4];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_had_from_ground_term_scope_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_how_to_check_goal_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_in_dupl_for_switch_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_in_from_ground_term_scope_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_in_promise_purity_scope_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_make_ground_terms_unique_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_may_change_called_proc_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2];

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_call_id_0_0[1];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_call_id_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_call_id_0_1[1];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_call_id_0_1;

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_call_id_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_call_id_0_1[1];

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_call_id_0[2];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_call_id_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_call_id_0[2];

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2];

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_context_0_1[2];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1;

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2;

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1];

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0[3];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0[8];

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0[8];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0;

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[23];

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[23];

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[23];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1];

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2];

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_side_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0;

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1;

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1];

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_var_lock_reason_0_2[1];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2;

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3;

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4;

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5;

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1];

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0[2];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6];

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_7,
  MR_Word * Reason_8);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_call_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____mode_call_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____pred_var_multimode_error_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____pred_var_multimode_error_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box check_hlds__mode_info_scalar_common_1[10][2];

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_3[2][1];




static /* final */ const MR_Box check_hlds__mode_info_scalar_common_1[10][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_2[1]))
  },
  /* row   5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0))
  },
  /* row   6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0))
  },
  /* row   8 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row   9 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_2[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[3]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[8])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_3[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0) };

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0 = {
  (MR_String) "call_context_unify",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1] = { (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_call_id_0) };

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1 = {
  (MR_String) "call_context_call",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0 };

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1 };

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_call_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____call_context_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____call_context_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "call_context",
  { check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0 },
  { check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0,

};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[4] = {
  (MR_String) "unique_prefix",
  (MR_String) "verbose",
  (MR_String) "minimal",
  (MR_String) "statistics"
};

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0 = {
  (MR_String) "debug_flags",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0 };

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0 };

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____debug_flags_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____debug_flags_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "debug_flags",
  { check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0 },
  { check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0,

};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0 = {
  (MR_String) "had_from_ground_term_scope",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1 = {
  (MR_String) "did_not_have_from_ground_term_scope",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_had_from_ground_term_scope_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "had_from_ground_term_scope",
  { check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0 },
  { check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_had_from_ground_term_scope_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0,

};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0 = {
  (MR_String) "check_modes",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1 = {
  (MR_String) "check_unique_modes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_how_to_check_goal_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "how_to_check_goal",
  { check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0 },
  { check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_how_to_check_goal_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0,

};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0 = {
  (MR_String) "in_dupl_for_switch",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1 = {
  (MR_String) "not_in_dupl_for_switch",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_dupl_for_switch_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_dupl_for_switch",
  { check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0 },
  { check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_in_dupl_for_switch_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0,

};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0 = {
  (MR_String) "in_from_ground_term_scope",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1 = {
  (MR_String) "not_in_from_ground_term_scope",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_from_ground_term_scope_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_from_ground_term_scope",
  { check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0 },
  { check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_in_from_ground_term_scope_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0,

};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0 = {
  (MR_String) "in_promise_purity_scope",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1 = {
  (MR_String) "not_in_promise_purity_scope",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_promise_purity_scope_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_promise_purity_scope",
  { check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0 },
  { check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_in_promise_purity_scope_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_TypeInfo) (&check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0),
    (MR_TypeInfo) (&check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_locked_vars_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_info____Unify____locked_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____locked_vars_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "locked_vars",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0 = {
  (MR_String) "make_ground_terms_unique",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1 = {
  (MR_String) "do_not_make_ground_terms_unique",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_make_ground_terms_unique_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "make_ground_terms_unique",
  { check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0 },
  { check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_make_ground_terms_unique_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0,

};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0 = {
  (MR_String) "may_change_called_proc",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1 = {
  (MR_String) "may_not_change_called_proc",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_change_called_proc_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "may_change_called_proc",
  { check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0 },
  { check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_may_change_called_proc_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0,

};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_call_id_0_0[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0) };

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_call_id_0_0 = {
  (MR_String) "mode_call_plain",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_call_id_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_call_id_0_1[1] = { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_generic_call_id_0) };

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_call_id_0_1 = {
  (MR_String) "mode_call_generic",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_call_id_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_call_id_0_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_call_id_0_0 };

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_call_id_0_1[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_call_id_0_1 };

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_call_id_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_call_id_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_call_id_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_call_id_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_call_id_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_call_id_0_0
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_call_id_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_call_id_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_call_id_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_call_id_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_call_id",
  { check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_call_id_0 },
  { check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_call_id_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_call_id_0,

};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_call_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0 = {
  (MR_String) "mode_context_call",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0)
};

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_context_0_1[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1 = {
  (MR_String) "mode_context_unify",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1,
  NULL,
  check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_context_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2 = {
  (MR_String) "mode_context_not_call_or_unify",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2 };

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0 };

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1 };

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_context_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_context_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_context",
  { check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0 },
  { check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  { (MR_TypeInfo) (&check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_sub_info_0)
};

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0[8] = {
  (MR_String) "mi_module_info",
  (MR_String) "mi_instmap",
  (MR_String) "mi_delay_info",
  (MR_String) "mi_errors",
  (MR_String) "mi_mode_context",
  (MR_String) "mi_context",
  (MR_String) "mi_nondet_live_vars",
  (MR_String) "mi_sub_info"
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0 = {
  (MR_String) "mode_info",
  INT16_C(8),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0 };

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0 };

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_info_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_info",
  { check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0 },
  { check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0,

};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0) }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0) }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[23] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_how_to_check_goal_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_change_called_proc_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_need_to_requantify_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_promise_purity_scope_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_from_ground_term_scope_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_had_from_ground_term_scope_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_make_ground_terms_unique_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_dupl_for_switch_0)
};

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[23] = {
  (MR_String) "msi_pred_id",
  (MR_String) "msi_proc_id",
  (MR_String) "msi_var_table",
  (MR_String) "msi_debug",
  (MR_String) "msi_locked_vars",
  (MR_String) "msi_live_vars",
  (MR_String) "msi_instvarset",
  (MR_String) "msi_par_conj",
  (MR_String) "msi_last_checkpoint_insts",
  (MR_String) "msi_initial_instmap",
  (MR_String) "msi_head_inst_vars",
  (MR_String) "msi_warnings",
  (MR_String) "msi_pred_var_multimode_error_map",
  (MR_String) "msi_how_to_check",
  (MR_String) "msi_may_change_called_proc",
  (MR_String) "msi_changed_flag",
  (MR_String) "msi_checking_extra_goals",
  (MR_String) "msi_need_to_requantify",
  (MR_String) "msi_in_promise_purity_scope",
  (MR_String) "msi_in_from_ground_term",
  (MR_String) "msi_had_from_ground_term",
  (MR_String) "msi_make_ground_terms_unique",
  (MR_String) "msi_in_dupl_for_switch"
};

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[23] = {
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
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 7,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 8,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 9,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 10,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 11,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 12,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 13,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0 = {
  (MR_String) "mode_sub_info",
  INT16_C(23),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0 };

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0 };

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_sub_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_sub_info_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_sub_info",
  { check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0 },
  { check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0,

};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0[2] = {
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
};

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0[2] = {
  (MR_String) "par_conj_nonlocals",
  (MR_String) "par_conj_bound"
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0 = {
  (MR_String) "par_conj_mode_check",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0 };

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0 };

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "par_conj_mode_check",
  { check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0 },
  { check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0,

};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_stack_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "par_conj_mode_check_stack",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_pred_var_multimode_error_map_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_info____Unify____pred_var_multimode_error_map_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____pred_var_multimode_error_map_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "pred_var_multimode_error_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0 = {
  (MR_String) "left",
  INT32_C(0)
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1 = {
  (MR_String) "right",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2] = {
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____side_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____side_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "side",
  { check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0 },
  { check_hlds__mode_info__check_hlds__mode_info__enum_ordinal_ordered_side_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0,

};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0 = {
  (MR_String) "var_lock_negation",
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

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1 = {
  (MR_String) "var_lock_if_then_else",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1] = { (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0) };

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_var_lock_reason_0_2[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2 = {
  (MR_String) "var_lock_lambda",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2,
  NULL,
  check_hlds__mode_info__check_hlds__mode_info__field_locns_var_lock_reason_0_2,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3 = {
  (MR_String) "var_lock_trace_goal",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4 = {
  (MR_String) "var_lock_atomic_goal",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5 = {
  (MR_String) "var_lock_par_conj",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0[5] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1] = { &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2 };

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0[2] = {
  {
    UINT32_C(5),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0[6] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0[6] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 0,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____var_lock_reason_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____var_lock_reason_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "var_lock_reason",
  { check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0 },
  { check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0,

};

void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_16 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_17 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_16 == CastY_17);
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
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
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
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
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
          case (MR_Integer) 4:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
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
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_9 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                MR_Integer Var_20 = (MR_Integer) (Var_19);
                MR_Integer Var_21 = (MR_Integer) (ArgY1_9);

                succeeded = (Var_20 < Var_21);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_20 > Var_21);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 2;
                  else
                    *HeadVar__1_1 = (MR_Integer) 0;
                }
              }
              break;
          }
        }
        break;
    }
}

void MR_CALL 
check_hlds__mode_info____Compare____side_0_0(
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
check_hlds__mode_info____Unify____side_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____pred_var_multimode_error_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____pred_var_multimode_error_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[7]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[7]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0(
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

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[3]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0(
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_10_10 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_49 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_50 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_49 == CastY_50);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_54_54;
    MR_Word TypeInfo_55_55;
    MR_Word TypeInfo_56_56;
    MR_Word TypeInfo_57_57;
    MR_Word TypeInfo_58_58;
    MR_Word TypeInfo_61_61;
    MR_Word TypeInfo_62_62;
    MR_Word TypeInfo_63_63;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
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
    MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 8))));
    MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 9))));
    MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 10))));
    MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 11))));
    MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 12))));
    MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgX14_29 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY14_30 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX16_33 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY16_34 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX18_37 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY18_38 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX19_39 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY19_40 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX20_41 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY20_42 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX21_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY21_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX22_45 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY22_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX23_47 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 13))) & (MR_Integer) 1);
    MR_Word ArgY23_48 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) & (MR_Integer) 1);

    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_54_54 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_54_54, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            TypeInfo_55_55 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[4]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
            if (succeeded)
            {
              TypeInfo_56_56 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[2]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_56, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              if (succeeded)
              {
                TypeInfo_57_57 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[6]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  TypeInfo_58_58 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[7]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                  if (succeeded)
                  {
                    succeeded = hlds__instmap____Unify____instmap_0_0(ArgX9_19, ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = hlds__instmap____Unify____instmap_0_0(ArgX10_21, ArgY10_22);
                      if (succeeded)
                      {
                        TypeInfo_61_61 = (MR_Word) (&check_hlds__mode_info_scalar_common_2[2]);
                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_61, ((MR_Box) (ArgX11_23)), ((MR_Box) (ArgY11_24)));
                        if (succeeded)
                        {
                          TypeInfo_62_62 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[9]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_62, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                          if (succeeded)
                          {
                            TypeInfo_63_63 = (MR_Word) (&check_hlds__mode_info_scalar_common_2[0]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_63_63, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                            if (succeeded)
                            {
                              succeeded = (ArgX14_29 == ArgY14_30);
                              if (succeeded)
                              {
                                succeeded = (ArgX15_31 == ArgY15_32);
                                if (succeeded)
                                {
                                  succeeded = (ArgX16_33 == ArgY16_34);
                                  if (succeeded)
                                  {
                                    succeeded = (ArgX17_35 == ArgY17_36);
                                    if (succeeded)
                                    {
                                      succeeded = (ArgX18_37 == ArgY18_38);
                                      if (succeeded)
                                      {
                                        succeeded = (ArgX19_39 == ArgY19_40);
                                        if (succeeded)
                                        {
                                          succeeded = (ArgX20_41 == ArgY20_42);
                                          if (succeeded)
                                          {
                                            succeeded = (ArgX21_43 == ArgY21_44);
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX22_45 == ArgY22_46);
                                              if (succeeded)
                                                succeeded = (ArgX23_47 == ArgY23_48);
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
  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0(
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

    hlds__hlds_module____Compare____module_info_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      hlds__instmap____Compare____instmap_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        check_hlds__delay_info____Compare____delay_info_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[1]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            check_hlds__mode_info____Compare____mode_context_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__term_context____Compare____term_context_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[2]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                  check_hlds__mode_info____Compare____mode_sub_info_0_0(HeadVar__1_1, ArgX8_25, ArgY8_26);
              }
            }
          }
        }
      }
    }
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_72 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_73 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_72 == CastY_73);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_Word ArgX9_28 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 8))));
    MR_Word ArgY9_29 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 8))));
    MR_Word ArgX10_31 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 9))));
    MR_Word ArgY10_32 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 9))));
    MR_Word ArgX11_34 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 10))));
    MR_Word ArgY11_35 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 10))));
    MR_Word ArgX12_37 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 11))));
    MR_Word ArgY12_38 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 11))));
    MR_Word ArgX13_40 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 12))));
    MR_Word ArgY13_41 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 12))));
    MR_Word ArgX14_43 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgY14_44 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))) >> 9)) & (MR_Integer) 1);
    MR_Word ArgX15_46 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgY15_47 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))) >> 8)) & (MR_Integer) 1);
    MR_Word ArgX16_49 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgY16_50 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))) >> 7)) & (MR_Integer) 1);
    MR_Word ArgX17_52 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgY17_53 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))) >> 6)) & (MR_Integer) 1);
    MR_Word ArgX18_55 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgY18_56 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))) >> 5)) & (MR_Integer) 1);
    MR_Word ArgX19_58 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgY19_59 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))) >> 4)) & (MR_Integer) 1);
    MR_Word ArgX20_61 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgY20_62 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))) >> 3)) & (MR_Integer) 1);
    MR_Word ArgX21_64 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY21_65 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX22_67 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY22_68 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX23_70 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 13))) & (MR_Integer) 1);
    MR_Word ArgY23_71 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 13))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    hlds__hlds_pred____Compare____pred_id_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
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

        parse_tree__var_table____Compare____var_table_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[5]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[4]), &SubResult5_18, ((MR_Box) (ArgX5_16)), ((MR_Box) (ArgY5_17)));
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[2]), &SubResult6_21, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[6]), &SubResult7_24, ((MR_Box) (ArgX7_22)), ((MR_Box) (ArgY7_23)));
                succeeded = (SubResult7_24 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[7]), &SubResult8_27, ((MR_Box) (ArgX8_25)), ((MR_Box) (ArgY8_26)));
                  succeeded = (SubResult8_27 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    hlds__instmap____Compare____instmap_0_0(&SubResult9_30, ArgX9_28, ArgY9_29);
                    succeeded = (SubResult9_30 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      hlds__instmap____Compare____instmap_0_0(&SubResult10_33, ArgX10_31, ArgY10_32);
                      succeeded = (SubResult10_33 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_2[2]), &SubResult11_36, ((MR_Box) (ArgX11_34)), ((MR_Box) (ArgY11_35)));
                        succeeded = (SubResult11_36 != (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[9]), &SubResult12_39, ((MR_Box) (ArgX12_37)), ((MR_Box) (ArgY12_38)));
                          succeeded = (SubResult12_39 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_2[0]), &SubResult13_42, ((MR_Box) (ArgX13_40)), ((MR_Box) (ArgY13_41)));
                            succeeded = (SubResult13_42 != (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;
                              MR_Integer Var_97 = (MR_Integer) (ArgX14_43);
                              MR_Integer Var_98 = (MR_Integer) (ArgY14_44);

                              succeeded = (Var_97 < Var_98);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (Var_97 > Var_98);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = MR_TRUE;
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                  {
                                    SubResult14_45 = (MR_Integer) 0;
                                    succeeded = MR_TRUE;
                                  }
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;
                                MR_Integer Var_99 = (MR_Integer) (ArgX15_46);
                                MR_Integer Var_100 = (MR_Integer) (ArgY15_47);

                                succeeded = (Var_99 < Var_100);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (Var_99 > Var_100);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = MR_TRUE;
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                    {
                                      SubResult15_48 = (MR_Integer) 0;
                                      succeeded = MR_TRUE;
                                    }
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  MR_Word SubResult16_51;
                                  MR_Integer Var_101 = (MR_Integer) (ArgX16_49);
                                  MR_Integer Var_102 = (MR_Integer) (ArgY16_50);

                                  succeeded = (Var_101 < Var_102);
                                  if (succeeded)
                                  {
                                    SubResult16_51 = (MR_Integer) 1;
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    succeeded = (Var_101 > Var_102);
                                    if (succeeded)
                                    {
                                      SubResult16_51 = (MR_Integer) 2;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = MR_TRUE;
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                      {
                                        SubResult16_51 = (MR_Integer) 0;
                                        succeeded = MR_TRUE;
                                      }
                                    }
                                  }
                                  if (succeeded)
                                    *HeadVar__1_1 = SubResult16_51;
                                  else
                                  {
                                    MR_Word SubResult17_54;
                                    MR_Integer Var_103 = (MR_Integer) (ArgX17_52);
                                    MR_Integer Var_104 = (MR_Integer) (ArgY17_53);

                                    succeeded = (Var_103 < Var_104);
                                    if (succeeded)
                                    {
                                      SubResult17_54 = (MR_Integer) 1;
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      succeeded = (Var_103 > Var_104);
                                      if (succeeded)
                                      {
                                        SubResult17_54 = (MR_Integer) 2;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = MR_TRUE;
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                        {
                                          SubResult17_54 = (MR_Integer) 0;
                                          succeeded = MR_TRUE;
                                        }
                                      }
                                    }
                                    if (succeeded)
                                      *HeadVar__1_1 = SubResult17_54;
                                    else
                                    {
                                      MR_Word SubResult18_57;
                                      MR_Integer Var_105 = (MR_Integer) (ArgX18_55);
                                      MR_Integer Var_106 = (MR_Integer) (ArgY18_56);

                                      succeeded = (Var_105 < Var_106);
                                      if (succeeded)
                                      {
                                        SubResult18_57 = (MR_Integer) 1;
                                        succeeded = MR_TRUE;
                                      }
                                      else
                                      {
                                        succeeded = (Var_105 > Var_106);
                                        if (succeeded)
                                        {
                                          SubResult18_57 = (MR_Integer) 2;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = MR_TRUE;
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                          {
                                            SubResult18_57 = (MR_Integer) 0;
                                            succeeded = MR_TRUE;
                                          }
                                        }
                                      }
                                      if (succeeded)
                                        *HeadVar__1_1 = SubResult18_57;
                                      else
                                      {
                                        MR_Word SubResult19_60;
                                        MR_Integer Var_107 = (MR_Integer) (ArgX19_58);
                                        MR_Integer Var_108 = (MR_Integer) (ArgY19_59);

                                        succeeded = (Var_107 < Var_108);
                                        if (succeeded)
                                        {
                                          SubResult19_60 = (MR_Integer) 1;
                                          succeeded = MR_TRUE;
                                        }
                                        else
                                        {
                                          succeeded = (Var_107 > Var_108);
                                          if (succeeded)
                                          {
                                            SubResult19_60 = (MR_Integer) 2;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = MR_TRUE;
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                            {
                                              SubResult19_60 = (MR_Integer) 0;
                                              succeeded = MR_TRUE;
                                            }
                                          }
                                        }
                                        if (succeeded)
                                          *HeadVar__1_1 = SubResult19_60;
                                        else
                                        {
                                          MR_Word SubResult20_63;
                                          MR_Integer Var_109 = (MR_Integer) (ArgX20_61);
                                          MR_Integer Var_110 = (MR_Integer) (ArgY20_62);

                                          succeeded = (Var_109 < Var_110);
                                          if (succeeded)
                                          {
                                            SubResult20_63 = (MR_Integer) 1;
                                            succeeded = MR_TRUE;
                                          }
                                          else
                                          {
                                            succeeded = (Var_109 > Var_110);
                                            if (succeeded)
                                            {
                                              SubResult20_63 = (MR_Integer) 2;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = MR_TRUE;
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                              {
                                                SubResult20_63 = (MR_Integer) 0;
                                                succeeded = MR_TRUE;
                                              }
                                            }
                                          }
                                          if (succeeded)
                                            *HeadVar__1_1 = SubResult20_63;
                                          else
                                          {
                                            MR_Word SubResult21_66;
                                            MR_Integer Var_111 = (MR_Integer) (ArgX21_64);
                                            MR_Integer Var_112 = (MR_Integer) (ArgY21_65);

                                            succeeded = (Var_111 < Var_112);
                                            if (succeeded)
                                            {
                                              SubResult21_66 = (MR_Integer) 1;
                                              succeeded = MR_TRUE;
                                            }
                                            else
                                            {
                                              succeeded = (Var_111 > Var_112);
                                              if (succeeded)
                                              {
                                                SubResult21_66 = (MR_Integer) 2;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = MR_TRUE;
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                {
                                                  SubResult21_66 = (MR_Integer) 0;
                                                  succeeded = MR_TRUE;
                                                }
                                              }
                                            }
                                            if (succeeded)
                                              *HeadVar__1_1 = SubResult21_66;
                                            else
                                            {
                                              MR_Word SubResult22_69;
                                              MR_Integer Var_113 = (MR_Integer) (ArgX22_67);
                                              MR_Integer Var_114 = (MR_Integer) (ArgY22_68);

                                              succeeded = (Var_113 < Var_114);
                                              if (succeeded)
                                              {
                                                SubResult22_69 = (MR_Integer) 1;
                                                succeeded = MR_TRUE;
                                              }
                                              else
                                              {
                                                succeeded = (Var_113 > Var_114);
                                                if (succeeded)
                                                {
                                                  SubResult22_69 = (MR_Integer) 2;
                                                  succeeded = MR_TRUE;
                                                }
                                                else
                                                {
                                                  succeeded = MR_TRUE;
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                  {
                                                    SubResult22_69 = (MR_Integer) 0;
                                                    succeeded = MR_TRUE;
                                                  }
                                                }
                                              }
                                              if (succeeded)
                                                *HeadVar__1_1 = SubResult22_69;
                                              else
                                              {
                                                MR_Integer Var_115 = (MR_Integer) (ArgX23_70);
                                                MR_Integer Var_116 = (MR_Integer) (ArgY23_71);

                                                succeeded = (Var_115 < Var_116);
                                                if (succeeded)
                                                  *HeadVar__1_1 = (MR_Integer) 1;
                                                else
                                                {
                                                  succeeded = (Var_115 > Var_116);
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
            }
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0(
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
    MR_Word TypeInfo_24_24;
    MR_Word TypeInfo_26_26;
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
    MR_Integer CastX_73;
    MR_Integer CastY_74;

    succeeded = hlds__hlds_module____Unify____module_info_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = hlds__instmap____Unify____instmap_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = check_hlds__delay_info____Unify____delay_info_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          TypeInfo_24_24 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_24_24, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
          if (succeeded)
          {
            succeeded = check_hlds__mode_info____Unify____mode_context_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = mercury__term_context____Unify____term_context_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
              {
                TypeInfo_26_26 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[2]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                if (succeeded)
                {
                  CastX_73 = (MR_Integer) (ArgX8_17);
                  CastY_74 = (MR_Integer) (ArgY8_18);
                  succeeded = (CastX_73 == CastY_74);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word TypeInfo_54_78;
                    MR_Word TypeInfo_55_79;
                    MR_Word TypeInfo_56_80;
                    MR_Word TypeInfo_57_81;
                    MR_Word TypeInfo_58_82;
                    MR_Word TypeInfo_61_85;
                    MR_Word TypeInfo_62_86;
                    MR_Word TypeInfo_63_87;
                    MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 0))));
                    MR_Word ArgY1_28 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 0))));
                    MR_Integer ArgX2_29 = ((MR_Integer) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 1))));
                    MR_Integer ArgY2_30 = ((MR_Integer) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 1))));
                    MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 2))));
                    MR_Word ArgY3_32 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 2))));
                    MR_Word ArgX4_33 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 3))));
                    MR_Word ArgY4_34 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 3))));
                    MR_Word ArgX5_35 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 4))));
                    MR_Word ArgY5_36 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 4))));
                    MR_Word ArgX6_37 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 5))));
                    MR_Word ArgY6_38 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 5))));
                    MR_Word ArgX7_39 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 6))));
                    MR_Word ArgY7_40 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 6))));
                    MR_Word ArgX8_41 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 7))));
                    MR_Word ArgY8_42 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 7))));
                    MR_Word ArgX9_43 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 8))));
                    MR_Word ArgY9_44 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 8))));
                    MR_Word ArgX10_45 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 9))));
                    MR_Word ArgY10_46 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 9))));
                    MR_Word ArgX11_47 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 10))));
                    MR_Word ArgY11_48 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 10))));
                    MR_Word ArgX12_49 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 11))));
                    MR_Word ArgY12_50 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 11))));
                    MR_Word ArgX13_51 = ((MR_Word) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 12))));
                    MR_Word ArgY13_52 = ((MR_Word) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 12))));
                    MR_Word ArgX14_53 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 13))) >> 9)) & (MR_Integer) 1);
                    MR_Word ArgY14_54 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 13))) >> 9)) & (MR_Integer) 1);
                    MR_Word ArgX15_55 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 13))) >> 8)) & (MR_Integer) 1);
                    MR_Word ArgY15_56 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 13))) >> 8)) & (MR_Integer) 1);
                    MR_Word ArgX16_57 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 13))) >> 7)) & (MR_Integer) 1);
                    MR_Word ArgY16_58 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 13))) >> 7)) & (MR_Integer) 1);
                    MR_Word ArgX17_59 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 13))) >> 6)) & (MR_Integer) 1);
                    MR_Word ArgY17_60 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 13))) >> 6)) & (MR_Integer) 1);
                    MR_Word ArgX18_61 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 13))) >> 5)) & (MR_Integer) 1);
                    MR_Word ArgY18_62 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 13))) >> 5)) & (MR_Integer) 1);
                    MR_Word ArgX19_63 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 13))) >> 4)) & (MR_Integer) 1);
                    MR_Word ArgY19_64 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 13))) >> 4)) & (MR_Integer) 1);
                    MR_Word ArgX20_65 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 13))) >> 3)) & (MR_Integer) 1);
                    MR_Word ArgY20_66 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 13))) >> 3)) & (MR_Integer) 1);
                    MR_Word ArgX21_67 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 13))) >> 2)) & (MR_Integer) 1);
                    MR_Word ArgY21_68 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 13))) >> 2)) & (MR_Integer) 1);
                    MR_Word ArgX22_69 = ((((MR_Unsigned) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
                    MR_Word ArgY22_70 = ((((MR_Unsigned) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
                    MR_Word ArgX23_71 = ((MR_Unsigned) ((MR_hl_field(0, ArgX8_17, (MR_Integer) 13))) & (MR_Integer) 1);
                    MR_Word ArgY23_72 = ((MR_Unsigned) ((MR_hl_field(0, ArgY8_18, (MR_Integer) 13))) & (MR_Integer) 1);

                    succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_27, ArgY1_28);
                    if (succeeded)
                    {
                      succeeded = (ArgX2_29 == ArgY2_30);
                      if (succeeded)
                      {
                        succeeded = parse_tree__var_table____Unify____var_table_0_0(ArgX3_31, ArgY3_32);
                        if (succeeded)
                        {
                          TypeInfo_54_78 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[5]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_54_78, ((MR_Box) (ArgX4_33)), ((MR_Box) (ArgY4_34)));
                          if (succeeded)
                          {
                            TypeInfo_55_79 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[4]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_79, ((MR_Box) (ArgX5_35)), ((MR_Box) (ArgY5_36)));
                            if (succeeded)
                            {
                              TypeInfo_56_80 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[2]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_56_80, ((MR_Box) (ArgX6_37)), ((MR_Box) (ArgY6_38)));
                              if (succeeded)
                              {
                                TypeInfo_57_81 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[6]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_81, ((MR_Box) (ArgX7_39)), ((MR_Box) (ArgY7_40)));
                                if (succeeded)
                                {
                                  TypeInfo_58_82 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[7]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_82, ((MR_Box) (ArgX8_41)), ((MR_Box) (ArgY8_42)));
                                  if (succeeded)
                                  {
                                    succeeded = hlds__instmap____Unify____instmap_0_0(ArgX9_43, ArgY9_44);
                                    if (succeeded)
                                    {
                                      succeeded = hlds__instmap____Unify____instmap_0_0(ArgX10_45, ArgY10_46);
                                      if (succeeded)
                                      {
                                        TypeInfo_61_85 = (MR_Word) (&check_hlds__mode_info_scalar_common_2[2]);
                                        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_85, ((MR_Box) (ArgX11_47)), ((MR_Box) (ArgY11_48)));
                                        if (succeeded)
                                        {
                                          TypeInfo_62_86 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[9]);
                                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_62_86, ((MR_Box) (ArgX12_49)), ((MR_Box) (ArgY12_50)));
                                          if (succeeded)
                                          {
                                            TypeInfo_63_87 = (MR_Word) (&check_hlds__mode_info_scalar_common_2[0]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_63_87, ((MR_Box) (ArgX13_51)), ((MR_Box) (ArgY13_52)));
                                            if (succeeded)
                                            {
                                              succeeded = (ArgX14_53 == ArgY14_54);
                                              if (succeeded)
                                              {
                                                succeeded = (ArgX15_55 == ArgY15_56);
                                                if (succeeded)
                                                {
                                                  succeeded = (ArgX16_57 == ArgY16_58);
                                                  if (succeeded)
                                                  {
                                                    succeeded = (ArgX17_59 == ArgY17_60);
                                                    if (succeeded)
                                                    {
                                                      succeeded = (ArgX18_61 == ArgY18_62);
                                                      if (succeeded)
                                                      {
                                                        succeeded = (ArgX19_63 == ArgY19_64);
                                                        if (succeeded)
                                                        {
                                                          succeeded = (ArgX20_65 == ArgY20_66);
                                                          if (succeeded)
                                                          {
                                                            succeeded = (ArgX21_67 == ArgY21_68);
                                                            if (succeeded)
                                                            {
                                                              succeeded = (ArgX22_69 == ArgY22_70);
                                                              if (succeeded)
                                                                succeeded = (ArgX23_71 == ArgY23_72);
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

void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_30 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_31 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_30 == CastY_31);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
                MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_6;

                check_hlds__mode_info____Compare____mode_call_id_0_0(&SubResult1_6, Var_37, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  succeeded = (Var_36 < ArgY2_8);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_36 > ArgY2_8);
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
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_38 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word Var_39 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgY2_23 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
                MR_Word SubResult1_21;

                hlds__hlds_goal____Compare____unify_context_0_0(&SubResult1_21, Var_39, ArgY1_20);
                succeeded = (SubResult1_21 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_21;
                else
                {
                  MR_Integer Var_40 = (MR_Integer) (Var_38);
                  MR_Integer Var_41 = (MR_Integer) (ArgY2_23);

                  succeeded = (Var_40 < Var_41);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_40 > Var_41);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
              }
              break;
          }
        }
        break;
    }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_12 == CastX_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
          MR_Integer ArgY2_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
            succeeded = check_hlds__mode_info____Unify____mode_call_id_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
              succeeded = (ArgX2_5 == ArgY2_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
          MR_Word ArgY1_8;
          MR_Word ArgX2_9 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
          MR_Word ArgY2_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
            ArgY2_10 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
            succeeded = hlds__hlds_goal____Unify____unify_context_0_0(ArgX1_7, ArgY1_8);
            if (succeeded)
              succeeded = (ArgX2_9 == ArgY2_10);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0(
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
check_hlds__mode_info____Unify____may_change_called_proc_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(
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
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(
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
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(
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
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(
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
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0(
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
check_hlds__mode_info____Unify____how_to_check_goal_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(
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
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_21 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_22 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_21 < Var_22);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_21 > Var_22);
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
        MR_Integer Var_23 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_24 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_23 < Var_24);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_23 > Var_24);
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
          MR_Integer Var_25 = (MR_Integer) (ArgX4_13);
          MR_Integer Var_26 = (MR_Integer) (ArgY4_14);

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

MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 2)) & (MR_Integer) 1);
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
          succeeded = (ArgX4_9 == ArgY4_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      check_hlds__mode_info____Compare____mode_call_id_0_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      hlds__hlds_goal____Compare____unify_context_0_0(HeadVar__1_1, Var_17, ArgY1_5);
    }
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____mode_call_id_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      hlds__hlds_pred____Compare____generic_call_id_0_0(HeadVar__1_1, Var_16, ArgY1_11);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      hlds__hlds_pred____Compare____pred_id_0_0(HeadVar__1_1, Var_17, ArgY1_5);
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = check_hlds__mode_info____Unify____mode_call_id_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = hlds__hlds_goal____Unify____unify_context_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_call_id_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = hlds__hlds_pred____Unify____generic_call_id_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_pf_sym_name_arity_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word PredId_5,
  MR_Word * CallId_6)
{
  MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(0, ModeInfo_4, (MR_Integer) 0))));
  MR_Word PredInfo_8;

  hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_5, &PredInfo_8);
  hlds__hlds_pred__pred_info_get_pf_sym_name_arity_2_p_0(PredInfo_8, CallId_6);
}

void MR_CALL 
check_hlds__mode_info__mode_info_warning_3_p_0(
  MR_Word ModeWarning_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_9,
  MR_Word * STATE_VARIABLE_ModeInfo_10)
{
  MR_Word Context_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5))));
  MR_Word ModeContext_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4))));
  MR_Word ModeWarningInfo_8;

  {
    ModeWarningInfo_8 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeWarningInfo_8, 0) = ((MR_Box) (ModeWarning_4));
    MR_hl_field(0, ModeWarningInfo_8, 1) = ((MR_Box) (Context_6));
    MR_hl_field(0, ModeWarningInfo_8, 2) = ((MR_Box) (ModeContext_7));
  }
  check_hlds__mode_info__mode_info_add_warning_3_p_0(ModeWarningInfo_8, STATE_VARIABLE_ModeInfo_0_9, STATE_VARIABLE_ModeInfo_10);
}

void MR_CALL 
check_hlds__mode_info__mode_info_add_warning_3_p_0(
  MR_Word ModeWarningInfo_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9)
{
  MR_Word Warnings0_6;
  MR_Word Warnings_7;
  MR_Word Var_10;
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7))));
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Integer Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Unsigned packed_word_1;

  Warnings0_6 = ((MR_Word) ((MR_hl_field(0, Var_13, (MR_Integer) 11))));
  {
    Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_10, 0) = ((MR_Box) (ModeWarningInfo_4));
    MR_hl_field(1, Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__append_3_p_1((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0), Warnings0_6, Var_10, &Warnings_7);
  Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0))));
  Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1))));
  Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2))));
  Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4))));
  Var_50 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5))));
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6))));
  Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 0))));
  Var_53 = ((MR_Integer) ((MR_hl_field(0, Var_43, (MR_Integer) 1))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 2))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 3))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 4))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 5))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 6))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 7))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 8))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 9))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 10))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, Var_43, (MR_Integer) 12))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_43, (MR_Integer) 13)));
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (Var_52));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (Var_53));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) (Var_54));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (Var_55));
    MR_hl_field(0, Var_44, 4) = ((MR_Box) (Var_56));
    MR_hl_field(0, Var_44, 5) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_44, 6) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_44, 7) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_44, 8) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_44, 9) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_44, 10) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_44, 11) = ((MR_Box) (Warnings_7));
    MR_hl_field(0, Var_44, 12) = ((MR_Box) (Var_64));
    MR_hl_field(0, Var_44, 13) = (MR_Box) (packed_word_1);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ModeInfo_9 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_45));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_46));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_47));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_48));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_49));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_50));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_44));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_error_4_p_0(
  MR_Word Vars_5,
  MR_Word ModeError_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_11,
  MR_Word * STATE_VARIABLE_ModeInfo_12)
{
  MR_Word Context_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5))));
  MR_Word ModeContext_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4))));
  MR_Word ModeErrorInfo_10;

  {
    ModeErrorInfo_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeErrorInfo_10, 0) = ((MR_Box) (Vars_5));
    MR_hl_field(0, ModeErrorInfo_10, 1) = ((MR_Box) (ModeError_6));
    MR_hl_field(0, ModeErrorInfo_10, 2) = ((MR_Box) (Context_8));
    MR_hl_field(0, ModeErrorInfo_10, 3) = ((MR_Box) (ModeContext_9));
  }
  check_hlds__mode_info__mode_info_add_error_3_p_0(ModeErrorInfo_10, STATE_VARIABLE_ModeInfo_0_11, STATE_VARIABLE_ModeInfo_12);
}

void MR_CALL 
check_hlds__mode_info__mode_info_add_error_3_p_0(
  MR_Word ModeErrorInfo_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_18,
  MR_Word * STATE_VARIABLE_ModeInfo_19)
{
  MR_Word Errors0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_18, (MR_Integer) 3))));
  MR_Word Errors_7;
  MR_Word DebugModes_8;
  MR_Word Var_20;
  MR_Word Var_54;
  MR_Word Var_55;

  {
    Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_20, 0) = ((MR_Box) (ModeErrorInfo_4));
    MR_hl_field(1, Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mercury__list__append_3_p_1((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), Errors0_6, Var_20, &Errors_7);
  check_hlds__mode_info__mode_info_set_errors_3_p_0(Errors_7, STATE_VARIABLE_ModeInfo_0_18, STATE_VARIABLE_ModeInfo_19);
  Var_55 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_ModeInfo_19, (MR_Integer) 0))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, *STATE_VARIABLE_ModeInfo_19, (MR_Integer) 7))));
  DebugModes_8 = ((MR_Word) ((MR_hl_field(0, Var_54, (MR_Integer) 3))));
  if (!((DebugModes_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word Globals0_12;
    MR_Word ModuleName_13;
    MR_Word DebugStream_14;
    MR_Integer ErrorNum_15;
    MR_Word Spec_16;
    MR_Word Globals_17;
    MR_String Var_39;

    hlds__hlds_module__module_info_get_globals_2_p_0(Var_55, &Globals0_12);
    hlds__hlds_module__module_info_get_name_2_p_0(Var_55, &ModuleName_13);
    libs__globals__get_debug_output_stream_5_p_0(Globals0_12, ModuleName_13, &DebugStream_14);
    mercury__list__length_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), Errors_7, &ErrorNum_15);
    mercury__io__write_string_4_p_0(DebugStream_14, (MR_String) "Adding error_spec ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_3[0]), ErrorNum_15, &Var_39);
    mercury__io__write_string_4_p_0(DebugStream_14, Var_39);
    mercury__io__write_string_4_p_0(DebugStream_14, (MR_String) "\n");
    Spec_16 = check_hlds__mode_errors__mode_error_info_to_spec_2_f_0(*STATE_VARIABLE_ModeInfo_19, ModeErrorInfo_4);
    libs__globals__set_option_4_p_0((MR_Integer) 70, (MR_Word) (MR_mkword(1, &check_hlds__mode_info_scalar_common_3[1])), Globals0_12, &Globals_17);
    parse_tree__write_error_spec__write_error_spec_5_p_0(DebugStream_14, Globals_17, Spec_16);
    mercury__io__flush_output_3_p_0(DebugStream_14);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_unlock_vars_4_p_0(
  MR_Word Reason_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  MR_bool succeeded;
  MR_Word LockedVars0_8;
  MR_Word LockedVars_11;
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7))));
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word LockedVars1_10;
  MR_Word TypeCtorInfo_17_17;
  MR_Word TheseVars_9;
  MR_Word Var_14;
  MR_Word Var_18;
  MR_Word Var_58;
  MR_Integer Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Unsigned packed_word_1;

  LockedVars0_8 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 4))));
  succeeded = (LockedVars0_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_14 = ((MR_Word) ((MR_hl_field(1, LockedVars0_8, (MR_Integer) 0))));
    LockedVars1_10 = ((MR_Word) ((MR_hl_field(1, LockedVars0_8, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
    TheseVars_9 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 1))));
    succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(Reason_5, Var_18);
    if (succeeded)
    {
      TypeCtorInfo_17_17 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      succeeded = parse_tree__set_of_var__equal_2_p_0(TypeCtorInfo_17_17, TheseVars_9, Vars_6);
    }
  }
  if (succeeded)
    LockedVars_11 = LockedVars1_10;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_info.mode_info_unlock_vars\'/4", (MR_String) "some kind of nesting error");
      return;
    }
  Var_51 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 0))));
  Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 1))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 2))));
  Var_54 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 3))));
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 4))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 5))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 6))));
  Var_49 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 0))));
  Var_59 = ((MR_Integer) ((MR_hl_field(0, Var_49, (MR_Integer) 1))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 2))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 3))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 5))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 6))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 7))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 8))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 9))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 10))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 11))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, Var_49, (MR_Integer) 12))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_49, (MR_Integer) 13)));
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (Var_58));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (Var_59));
    MR_hl_field(0, Var_50, 2) = ((MR_Box) (Var_60));
    MR_hl_field(0, Var_50, 3) = ((MR_Box) (Var_61));
    MR_hl_field(0, Var_50, 4) = ((MR_Box) (LockedVars_11));
    MR_hl_field(0, Var_50, 5) = ((MR_Box) (Var_63));
    MR_hl_field(0, Var_50, 6) = ((MR_Box) (Var_64));
    MR_hl_field(0, Var_50, 7) = ((MR_Box) (Var_65));
    MR_hl_field(0, Var_50, 8) = ((MR_Box) (Var_66));
    MR_hl_field(0, Var_50, 9) = ((MR_Box) (Var_67));
    MR_hl_field(0, Var_50, 10) = ((MR_Box) (Var_68));
    MR_hl_field(0, Var_50, 11) = ((MR_Box) (Var_69));
    MR_hl_field(0, Var_50, 12) = ((MR_Box) (Var_70));
    MR_hl_field(0, Var_50, 13) = (MR_Box) (packed_word_1);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ModeInfo_13 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_52));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_53));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_54));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_55));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_56));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_57));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_50));
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_4 == CastX_3);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_6 == CastX_5);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_10 == CastX_9);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_12 == CastX_11);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
              MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

              succeeded = (CastY_14 == CastX_13);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_7 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_8 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
check_hlds__mode_info__mode_info_lock_vars_4_p_0(
  MR_Word Reason_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_9,
  MR_Word * STATE_VARIABLE_ModeInfo_10)
{
  MR_Word LockedVars_8;
  MR_Word Var_11;
  MR_Word Var_13;
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 0))));
  MR_Integer Var_23 = ((MR_Integer) ((MR_hl_field(0, Var_14, (MR_Integer) 1))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 2))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 3))));
  MR_Word Var_26;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;
  MR_Word Var_30;
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_45;
  MR_Unsigned packed_word_0;

  LockedVars_8 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 4))));
  Var_26 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 5))));
  Var_27 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 6))));
  Var_28 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 7))));
  Var_29 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 8))));
  Var_30 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 9))));
  Var_31 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 10))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 11))));
  Var_33 = ((MR_Word) ((MR_hl_field(0, Var_14, (MR_Integer) 12))));
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_14, (MR_Integer) 13)));
  {
    Var_13 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_13, 0) = ((MR_Box) (Reason_5));
    MR_hl_field(0, Var_13, 1) = ((MR_Box) (Vars_6));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_13));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (LockedVars_8));
  }
  {
    Var_45 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_45, 3) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_45, 4) = ((MR_Box) (Var_11));
    MR_hl_field(0, Var_45, 5) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_45, 6) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_45, 7) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_45, 8) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_45, 9) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_45, 10) = ((MR_Box) (Var_31));
    MR_hl_field(0, Var_45, 11) = ((MR_Box) (Var_32));
    MR_hl_field(0, Var_45, 12) = ((MR_Box) (Var_33));
    MR_hl_field(0, Var_45, 13) = (MR_Box) (packed_word_0);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_ModeInfo_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_19));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_20));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_21));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_45));
  }
}

MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word Var_5,
  MR_Word * Reason_6)
{
  MR_bool succeeded;
  MR_Word LockedVarsList_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, ModeInfo_4, (MR_Integer) 7))));

  LockedVarsList_7 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 4))));
  succeeded = check_hlds__mode_info__mode_info_var_is_locked_loop_3_p_0(LockedVarsList_7, Var_5, Reason_6);
  return succeeded;
}

static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_7,
  MR_Word * Reason_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word ThisReason_4;
    MR_Word Set_5;
    MR_Word Sets_6;
    MR_Word Var_9;
    MR_Word TypeCtorInfo_10_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Sets_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      ThisReason_4 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
      Set_5 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
      TypeCtorInfo_10_10 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
      succeeded = parse_tree__set_of_var__member_2_p_0(TypeCtorInfo_10_10, Set_5, Var_7);
      if (succeeded)
      {
        *Reason_8 = ThisReason_4;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Sets_6;

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

void MR_CALL 
check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(
  MR_Word OldLiveVars_4,
  MR_Word STATE_VARIABLE_MI_0_13,
  MR_Word * STATE_VARIABLE_MI_14)
{
  MR_Word OldLiveVarsList_6;
  MR_Word LiveVars0_7;
  MR_Word NondetLiveVars0_8;
  MR_Word LiveVars_9;
  MR_Word NondetLiveVars_10;
  MR_Word DelayInfo0_11;
  MR_Word DelayInfo_12;
  MR_Word STATE_VARIABLE_MI_15_15;
  MR_Word STATE_VARIABLE_MI_16_16;
  MR_Word Var_19;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Integer Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Unsigned packed_word_1;

  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldLiveVars_4, &OldLiveVarsList_6);
  NondetLiveVars0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 6))));
  Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 7))));
  LiveVars0_7 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 5))));
  mercury__bag__det_remove_list_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), OldLiveVarsList_6, LiveVars0_7, &LiveVars_9);
  mercury__bag__det_remove_list_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), OldLiveVarsList_6, NondetLiveVars0_8, &NondetLiveVars_10);
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 0))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 1))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 2))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 3))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 4))));
  Var_63 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 5))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 6))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_13, (MR_Integer) 7))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 0))));
  Var_66 = ((MR_Integer) ((MR_hl_field(0, Var_56, (MR_Integer) 1))));
  Var_67 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 2))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 3))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 4))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 6))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 7))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 8))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 9))));
  Var_75 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 10))));
  Var_76 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 11))));
  Var_77 = ((MR_Word) ((MR_hl_field(0, Var_56, (MR_Integer) 12))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_56, (MR_Integer) 13)));
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (Var_65));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (Var_66));
    MR_hl_field(0, Var_57, 2) = ((MR_Box) (Var_67));
    MR_hl_field(0, Var_57, 3) = ((MR_Box) (Var_68));
    MR_hl_field(0, Var_57, 4) = ((MR_Box) (Var_69));
    MR_hl_field(0, Var_57, 5) = ((MR_Box) (LiveVars_9));
    MR_hl_field(0, Var_57, 6) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_57, 7) = ((MR_Box) (Var_72));
    MR_hl_field(0, Var_57, 8) = ((MR_Box) (Var_73));
    MR_hl_field(0, Var_57, 9) = ((MR_Box) (Var_74));
    MR_hl_field(0, Var_57, 10) = ((MR_Box) (Var_75));
    MR_hl_field(0, Var_57, 11) = ((MR_Box) (Var_76));
    MR_hl_field(0, Var_57, 12) = ((MR_Box) (Var_77));
    MR_hl_field(0, Var_57, 13) = (MR_Box) (packed_word_1);
  }
  {
    STATE_VARIABLE_MI_15_15 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_MI_15_15, 0) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_MI_15_15, 1) = ((MR_Box) (Var_59));
    MR_hl_field(0, STATE_VARIABLE_MI_15_15, 2) = ((MR_Box) (Var_60));
    MR_hl_field(0, STATE_VARIABLE_MI_15_15, 3) = ((MR_Box) (Var_61));
    MR_hl_field(0, STATE_VARIABLE_MI_15_15, 4) = ((MR_Box) (Var_62));
    MR_hl_field(0, STATE_VARIABLE_MI_15_15, 5) = ((MR_Box) (Var_63));
    MR_hl_field(0, STATE_VARIABLE_MI_15_15, 6) = ((MR_Box) (Var_64));
    MR_hl_field(0, STATE_VARIABLE_MI_15_15, 7) = ((MR_Box) (Var_57));
  }
  check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars_10, STATE_VARIABLE_MI_15_15, &STATE_VARIABLE_MI_16_16);
  DelayInfo0_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_16_16, (MR_Integer) 2))));
  check_hlds__delay_info__delay_info_bind_var_list_3_p_0(OldLiveVarsList_6, DelayInfo0_11, &DelayInfo_12);
  check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo_12, STATE_VARIABLE_MI_16_16, STATE_VARIABLE_MI_14);
}

void MR_CALL 
check_hlds__mode_info__mode_info_add_live_vars_3_p_0(
  MR_Word NewLiveVars_4,
  MR_Word STATE_VARIABLE_MI_0_11,
  MR_Word * STATE_VARIABLE_MI_12)
{
  MR_Word NewLiveVarsList_6;
  MR_Word LiveVars0_7;
  MR_Word NondetLiveVars0_8;
  MR_Word LiveVars_9;
  MR_Word NondetLiveVars_10;
  MR_Word STATE_VARIABLE_MI_13_13;
  MR_Word Var_16;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Integer Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Unsigned packed_word_1;

  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewLiveVars_4, &NewLiveVarsList_6);
  NondetLiveVars0_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_11, (MR_Integer) 6))));
  Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_11, (MR_Integer) 7))));
  LiveVars0_7 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 5))));
  mercury__bag__insert_list_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), NewLiveVarsList_6, LiveVars0_7, &LiveVars_9);
  mercury__bag__insert_list_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), NewLiveVarsList_6, NondetLiveVars0_8, &NondetLiveVars_10);
  Var_55 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_11, (MR_Integer) 0))));
  Var_56 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_11, (MR_Integer) 1))));
  Var_57 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_11, (MR_Integer) 2))));
  Var_58 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_11, (MR_Integer) 3))));
  Var_59 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_11, (MR_Integer) 4))));
  Var_60 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_11, (MR_Integer) 5))));
  Var_61 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_11, (MR_Integer) 6))));
  Var_53 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_11, (MR_Integer) 7))));
  Var_62 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 0))));
  Var_63 = ((MR_Integer) ((MR_hl_field(0, Var_53, (MR_Integer) 1))));
  Var_64 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 2))));
  Var_65 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 3))));
  Var_66 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 4))));
  Var_68 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 6))));
  Var_69 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 7))));
  Var_70 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 8))));
  Var_71 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 9))));
  Var_72 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 10))));
  Var_73 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 11))));
  Var_74 = ((MR_Word) ((MR_hl_field(0, Var_53, (MR_Integer) 12))));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_53, (MR_Integer) 13)));
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (Var_62));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (Var_63));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) (Var_64));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (Var_65));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) (Var_66));
    MR_hl_field(0, Var_54, 5) = ((MR_Box) (LiveVars_9));
    MR_hl_field(0, Var_54, 6) = ((MR_Box) (Var_68));
    MR_hl_field(0, Var_54, 7) = ((MR_Box) (Var_69));
    MR_hl_field(0, Var_54, 8) = ((MR_Box) (Var_70));
    MR_hl_field(0, Var_54, 9) = ((MR_Box) (Var_71));
    MR_hl_field(0, Var_54, 10) = ((MR_Box) (Var_72));
    MR_hl_field(0, Var_54, 11) = ((MR_Box) (Var_73));
    MR_hl_field(0, Var_54, 12) = ((MR_Box) (Var_74));
    MR_hl_field(0, Var_54, 13) = (MR_Box) (packed_word_1);
  }
  {
    STATE_VARIABLE_MI_13_13 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_MI_13_13, 0) = ((MR_Box) (Var_55));
    MR_hl_field(0, STATE_VARIABLE_MI_13_13, 1) = ((MR_Box) (Var_56));
    MR_hl_field(0, STATE_VARIABLE_MI_13_13, 2) = ((MR_Box) (Var_57));
    MR_hl_field(0, STATE_VARIABLE_MI_13_13, 3) = ((MR_Box) (Var_58));
    MR_hl_field(0, STATE_VARIABLE_MI_13_13, 4) = ((MR_Box) (Var_59));
    MR_hl_field(0, STATE_VARIABLE_MI_13_13, 5) = ((MR_Box) (Var_60));
    MR_hl_field(0, STATE_VARIABLE_MI_13_13, 6) = ((MR_Box) (Var_61));
    MR_hl_field(0, STATE_VARIABLE_MI_13_13, 7) = ((MR_Box) (Var_54));
  }
  check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars_10, STATE_VARIABLE_MI_13_13, STATE_VARIABLE_MI_12);
}

void MR_CALL 
check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word Var_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word NondetLiveVars0_7 = ((MR_Word) ((MR_hl_field(0, ModeInfo_4, (MR_Integer) 6))));

  succeeded = mercury__bag__contains_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), NondetLiveVars0_7, ((MR_Box) (Var_5)));
  if (succeeded)
    *Result_6 = (MR_Integer) 0;
  else
    *Result_6 = (MR_Integer) 1;
}

void MR_CALL 
check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Live_8;
    MR_Word Lives_9;
    MR_Word LiveVars0_10;
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, ModeInfo_1, (MR_Integer) 7))));

    LiveVars0_10 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 5))));
    succeeded = mercury__bag__contains_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), LiveVars0_10, ((MR_Box) (Var_6)));
    if (succeeded)
      Live_8 = (MR_Integer) 0;
    else
      Live_8 = (MR_Integer) 1;
    check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(ModeInfo_1, Vars_7, &Lives_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Live_8));
      MR_hl_field(1, base, 1) = ((MR_Box) (Lives_9));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_var_is_live_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word Var_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word LiveVars0_7;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, ModeInfo_4, (MR_Integer) 7))));

  LiveVars0_7 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  succeeded = mercury__bag__contains_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), LiveVars0_7, ((MR_Box) (Var_5)));
  if (succeeded)
    *Result_6 = (MR_Integer) 0;
  else
    *Result_6 = (MR_Integer) 1;
}

void MR_CALL 
check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_4, STATE_VARIABLE_ModeInfo_5);
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(
  MR_Integer ArgNum_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_11,
  MR_Word * STATE_VARIABLE_ModeInfo_12)
{
  MR_Word ModeContext0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1))));
  MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7))));

  switch (MR_tag((MR_Word) ModeContext0_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_info.mode_info_set_call_arg_context\'/3", (MR_String) "not_call_or_unify");
        return;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word CallId_7 = ((MR_Word) ((MR_hl_field(1, ModeContext0_6, (MR_Integer) 0))));
        MR_Word Var_13;

        {
          Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_13, 0) = ((MR_Box) (CallId_7));
          MR_hl_field(1, Var_13, 1) = ((MR_Box) (ArgNum_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
          *STATE_VARIABLE_ModeInfo_12 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_17));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_18));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_19));
          MR_hl_field(0, base, 3) = ((MR_Box) (Var_20));
          MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
          MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
          MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
          MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
        }
      }
      break;
    case (MR_Integer) 2:
      *STATE_VARIABLE_ModeInfo_12 = STATE_VARIABLE_ModeInfo_0_11;
      break;
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_unset_call_context_2_p_0(
  MR_Word STATE_VARIABLE_MI_0_4,
  MR_Word * STATE_VARIABLE_MI_5)
{
  MR_Word Var_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 0))));
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 1))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 2))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 3))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 5))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 6))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_4, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_5 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_14));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_call_context_3_p_0(
  MR_Word CallContext_4,
  MR_Word STATE_VARIABLE_MI_0_8,
  MR_Word * STATE_VARIABLE_MI_9)
{
  if (((MR_tag((MR_Word) CallContext_4)) == (MR_Integer) 1))
  {
    MR_Word CallId_7 = ((MR_Word) ((MR_hl_field(1, CallContext_4, (MR_Integer) 0))));
    MR_Word Var_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;

    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (CallId_7));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
    Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
    Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
    Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
    Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
    Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_13));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
    }
  }
  else
  {
    MR_Word UnifyContext_6 = ((MR_Word) ((MR_hl_field(0, CallContext_4, (MR_Integer) 0))));
    MR_Word Var_10;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;

    {
      Var_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_10, 0) = ((MR_Box) (UnifyContext_6));
      MR_hl_field(2, Var_10, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 0))));
    Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 1))));
    Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 2))));
    Var_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 3))));
    Var_29 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 5))));
    Var_30 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 6))));
    Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_8, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_9 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_24));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_25));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_26));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_27));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_10));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_29));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_30));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_31));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0(
  MR_Word Checking_4,
  MR_Word STATE_VARIABLE_MI_0_7,
  MR_Word * STATE_VARIABLE_MI_8)
{
  MR_bool succeeded;
  MR_Word Checking0_6;
  MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_7, (MR_Integer) 7))));

  Checking0_6 = ((((MR_Unsigned) ((MR_hl_field(0, Var_52, (MR_Integer) 13))) >> 6)) & (MR_Integer) 1);
  succeeded = (Checking0_6 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (Checking_4 == (MR_Integer) 1);
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_info.mode_info_set_checking_extra_goals\'/3", (MR_String) "rechecking extra goals adds more extra goals");
      return;
    }
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_7, (MR_Integer) 7))));
    MR_Word Var_13;
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_7, (MR_Integer) 0))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_7, (MR_Integer) 1))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_7, (MR_Integer) 2))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_7, (MR_Integer) 3))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_7, (MR_Integer) 4))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_7, (MR_Integer) 5))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_7, (MR_Integer) 6))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 0))));
    MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(0, Var_12, (MR_Integer) 1))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 2))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 3))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 4))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 5))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 6))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 7))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 8))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 9))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 10))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 11))));
    MR_Word Var_33 = ((MR_Word) ((MR_hl_field(0, Var_12, (MR_Integer) 12))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_12, (MR_Integer) 13)));

    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_13, 0) = ((MR_Box) (Var_21));
      MR_hl_field(0, Var_13, 1) = ((MR_Box) (Var_22));
      MR_hl_field(0, Var_13, 2) = ((MR_Box) (Var_23));
      MR_hl_field(0, Var_13, 3) = ((MR_Box) (Var_24));
      MR_hl_field(0, Var_13, 4) = ((MR_Box) (Var_25));
      MR_hl_field(0, Var_13, 5) = ((MR_Box) (Var_26));
      MR_hl_field(0, Var_13, 6) = ((MR_Box) (Var_27));
      MR_hl_field(0, Var_13, 7) = ((MR_Box) (Var_28));
      MR_hl_field(0, Var_13, 8) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_13, 9) = ((MR_Box) (Var_30));
      MR_hl_field(0, Var_13, 10) = ((MR_Box) (Var_31));
      MR_hl_field(0, Var_13, 11) = ((MR_Box) (Var_32));
      MR_hl_field(0, Var_13, 12) = ((MR_Box) (Var_33));
      MR_hl_field(0, Var_13, 13) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 64U)))) | (((MR_Unsigned) (Checking_4) << 6))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_14));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_15));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_13));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_instmap_3_p_0(
  MR_Word InstMap_4,
  MR_Word STATE_VARIABLE_MI_0_9,
  MR_Word * STATE_VARIABLE_MI_10)
{
  MR_bool succeeded;
  MR_Word InstMap0_6 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_9, (MR_Integer) 1))));
  MR_Word STATE_VARIABLE_MI_11_11;
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_9, (MR_Integer) 0))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_9, (MR_Integer) 2))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_9, (MR_Integer) 3))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_9, (MR_Integer) 4))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_9, (MR_Integer) 5))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_9, (MR_Integer) 6))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_9, (MR_Integer) 7))));

  {
    STATE_VARIABLE_MI_11_11 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, STATE_VARIABLE_MI_11_11, 0) = ((MR_Box) (Var_20));
    MR_hl_field(0, STATE_VARIABLE_MI_11_11, 1) = ((MR_Box) (InstMap_4));
    MR_hl_field(0, STATE_VARIABLE_MI_11_11, 2) = ((MR_Box) (Var_21));
    MR_hl_field(0, STATE_VARIABLE_MI_11_11, 3) = ((MR_Box) (Var_22));
    MR_hl_field(0, STATE_VARIABLE_MI_11_11, 4) = ((MR_Box) (Var_23));
    MR_hl_field(0, STATE_VARIABLE_MI_11_11, 5) = ((MR_Box) (Var_24));
    MR_hl_field(0, STATE_VARIABLE_MI_11_11, 6) = ((MR_Box) (Var_25));
    MR_hl_field(0, STATE_VARIABLE_MI_11_11, 7) = ((MR_Box) (Var_26));
  }
  succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_4);
  if (succeeded)
    succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_6);
  if (succeeded)
  {
    MR_Word DelayInfo0_7 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_11_11, (MR_Integer) 2))));
    MR_Word DelayInfo_8;

    check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(DelayInfo0_7, &DelayInfo_8);
    check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo_8, STATE_VARIABLE_MI_11_11, STATE_VARIABLE_MI_10);
  }
  else
    *STATE_VARIABLE_MI_10 = STATE_VARIABLE_MI_11_11;
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word Vars_5,
  MR_Word * TypesOfVars_6)
{
  MR_Word VarTable_7;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, ModeInfo_4, (MR_Integer) 7))));

  VarTable_7 = ((MR_Word) ((MR_hl_field(0, Var_8, (MR_Integer) 2))));
  parse_tree__var_table__lookup_var_types_3_p_0(VarTable_7, Vars_5, TypesOfVars_6);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_modes_2_p_0(
  MR_Word ModeInfo_3,
  MR_Word * Modes_4)
{
  MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, ModeInfo_3, (MR_Integer) 0))));

  hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_5, Modes_4);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_insts_2_p_0(
  MR_Word ModeInfo_3,
  MR_Word * Insts_4)
{
  MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, ModeInfo_3, (MR_Integer) 0))));

  hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_5, Insts_4);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_pred_id_table_2_p_0(
  MR_Word ModeInfo_3,
  MR_Word * PredIdTable_4)
{
  MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(0, ModeInfo_3, (MR_Integer) 0))));

  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_5, PredIdTable_4);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_liveness_2_p_0(
  MR_Word ModeInfo_3,
  MR_Word * LiveVars_4)
{
  MR_Word LiveVarsBag_5;
  MR_Word SortedList_6;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, ModeInfo_3, (MR_Integer) 7))));

  LiveVarsBag_5 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  mercury__bag__to_list_without_duplicates_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), LiveVarsBag_5, &SortedList_6);
  parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SortedList_6, LiveVars_4);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_num_errors_2_p_0(
  MR_Word ModeInfo_3,
  MR_Integer * NumErrors_4)
{
  MR_Word Errors_5 = ((MR_Word) ((MR_hl_field(0, ModeInfo_3, (MR_Integer) 3))));

  mercury__list__length_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), Errors_5, NumErrors_4);
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 1U)))) | (MR_Unsigned) (X_4)));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 2U)))) | (((MR_Unsigned) (X_4) << 1))));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

  Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13))) >> 2)) & (MR_Integer) 1);
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_12;
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
    MR_Integer Var_50 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 2))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 3))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 4))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 5))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 6))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 7))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 8))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 9))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 10))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 11))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 12))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_11, (MR_Integer) 13)));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_49));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_50));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_51));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_52));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_53));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_54));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_55));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (Var_56));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (Var_57));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_12, 10) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_60));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (Var_61));
      MR_hl_field(0, Var_12, 13) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 4U)))) | (((MR_Unsigned) (X_4) << 2))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_44));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_in_from_ground_term_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 8U)))) | (((MR_Unsigned) (X_4) << 3))));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 16U)))) | (((MR_Unsigned) (X_4) << 4))));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

  Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13))) >> 5)) & (MR_Integer) 1);
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_12;
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
    MR_Integer Var_50 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 2))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 3))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 4))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 5))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 6))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 7))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 8))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 9))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 10))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 11))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 12))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_11, (MR_Integer) 13)));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_49));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_50));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_51));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_52));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_53));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_54));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_55));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (Var_56));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (Var_57));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_12, 10) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_60));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (Var_61));
      MR_hl_field(0, Var_12, 13) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 32U)))) | (((MR_Unsigned) (X_4) << 5))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_44));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

  Var_8 = ((((MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13))) >> 7)) & (MR_Integer) 1);
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_12;
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
    MR_Integer Var_50 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 2))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 3))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 4))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 5))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 6))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 7))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 8))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 9))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 10))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 11))));
    MR_Word Var_61 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 12))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_11, (MR_Integer) 13)));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_49));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_50));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_51));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_52));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_53));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_54));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_55));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (Var_56));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (Var_57));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_12, 10) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_60));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (Var_61));
      MR_hl_field(0, Var_12, 13) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 128U)))) | (((MR_Unsigned) (X_4) << 7))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_44));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) ((((packed_word_0 & (~((MR_Unsigned) 256U)))) | (((MR_Unsigned) (X_4) << 8))));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_pred_var_multimode_error_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8;
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

  Var_8 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_12;
    MR_Word Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_43 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_44 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_45 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_46 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_47 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_48 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_49 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 0))));
    MR_Integer Var_50 = ((MR_Integer) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
    MR_Word Var_51 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 2))));
    MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 3))));
    MR_Word Var_53 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 4))));
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 5))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 6))));
    MR_Word Var_56 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 7))));
    MR_Word Var_57 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 8))));
    MR_Word Var_58 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 9))));
    MR_Word Var_59 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 10))));
    MR_Word Var_60 = ((MR_Word) ((MR_hl_field(0, Var_11, (MR_Integer) 11))));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, Var_11, (MR_Integer) 13)));

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_12, 0) = ((MR_Box) (Var_49));
      MR_hl_field(0, Var_12, 1) = ((MR_Box) (Var_50));
      MR_hl_field(0, Var_12, 2) = ((MR_Box) (Var_51));
      MR_hl_field(0, Var_12, 3) = ((MR_Box) (Var_52));
      MR_hl_field(0, Var_12, 4) = ((MR_Box) (Var_53));
      MR_hl_field(0, Var_12, 5) = ((MR_Box) (Var_54));
      MR_hl_field(0, Var_12, 6) = ((MR_Box) (Var_55));
      MR_hl_field(0, Var_12, 7) = ((MR_Box) (Var_56));
      MR_hl_field(0, Var_12, 8) = ((MR_Box) (Var_57));
      MR_hl_field(0, Var_12, 9) = ((MR_Box) (Var_58));
      MR_hl_field(0, Var_12, 10) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_12, 11) = ((MR_Box) (Var_60));
      MR_hl_field(0, Var_12, 12) = ((MR_Box) (X_4));
      MR_hl_field(0, Var_12, 13) = (MR_Box) (packed_word_1);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_42));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_43));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_44));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_45));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_46));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_47));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_48));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_12));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_warnings_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) (packed_word_0);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) (packed_word_0);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) (packed_word_0);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_instvarset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) (packed_word_0);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_live_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) (packed_word_0);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) (packed_word_0);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_var_table_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) (packed_word_0);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_proc_id_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (Var_18));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) (packed_word_0);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_pred_id_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
  MR_Word Var_10;
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_12 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
  MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
  MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 2))));
  MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 3))));
  MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 4))));
  MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 5))));
  MR_Word Var_24 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 6))));
  MR_Word Var_25 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 7))));
  MR_Word Var_26 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 8))));
  MR_Word Var_27 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 9))));
  MR_Word Var_28 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 10))));
  MR_Word Var_29 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 11))));
  MR_Word Var_30 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 12))));
  MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, Var_9, (MR_Integer) 13)));

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (X_4));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (Var_19));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) (Var_20));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (Var_21));
    MR_hl_field(0, Var_10, 4) = ((MR_Box) (Var_22));
    MR_hl_field(0, Var_10, 5) = ((MR_Box) (Var_23));
    MR_hl_field(0, Var_10, 6) = ((MR_Box) (Var_24));
    MR_hl_field(0, Var_10, 7) = ((MR_Box) (Var_25));
    MR_hl_field(0, Var_10, 8) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_10, 9) = ((MR_Box) (Var_27));
    MR_hl_field(0, Var_10, 10) = ((MR_Box) (Var_28));
    MR_hl_field(0, Var_10, 11) = ((MR_Box) (Var_29));
    MR_hl_field(0, Var_10, 12) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_10, 13) = (MR_Box) (packed_word_0);
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_12));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_15));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_16));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_17));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_10));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 6) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_mode_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
  MR_Word Var_9 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
  MR_Word Var_11 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
  MR_Word Var_13 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
  MR_Word Var_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
  MR_Word Var_15 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MI_7 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_10));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_11));
    MR_hl_field(0, base, 4) = ((MR_Box) (X_4));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_13));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_14));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_15));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_errors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 3) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_delay_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_16));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  MR_bool succeeded;
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));

  succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
  if (succeeded)
    *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (X_4));
      MR_hl_field(0, base, 1) = ((MR_Box) (Var_17));
      MR_hl_field(0, base, 2) = ((MR_Box) (Var_18));
      MR_hl_field(0, base, 3) = ((MR_Box) (Var_19));
      MR_hl_field(0, base, 4) = ((MR_Box) (Var_20));
      MR_hl_field(0, base, 5) = ((MR_Box) (Var_21));
      MR_hl_field(0, base, 6) = ((MR_Box) (Var_22));
      MR_hl_field(0, base, 7) = ((MR_Box) (Var_23));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 13))) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 13))) >> 1)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 13))) >> 2)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 13))) >> 3)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 13))) >> 4)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 13))) >> 5)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_checking_extra_goals_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 13))) >> 6)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 13))) >> 7)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 13))) >> 8)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((((MR_Unsigned) ((MR_hl_field(0, Var_5, (MR_Integer) 13))) >> 9)) & (MR_Integer) 1);
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_pred_var_multimode_error_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 12))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_warnings_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 11))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 10))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_initial_instmap_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 9))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 8))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 7))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_instvarset_2_p_0(
  MR_Word ModeInfo_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, ModeInfo_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 6))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_live_vars_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 5))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_locked_vars_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 4))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_var_table_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_proc_id_2_p_0(
  MR_Word MI_3,
  MR_Integer * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Integer) ((MR_hl_field(0, Var_5, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_pred_id_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  MR_Word Var_5 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 7))));

  *X_4 = ((MR_Word) ((MR_hl_field(0, Var_5, (MR_Integer) 0))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 6))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_context_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 5))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_mode_context_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 4))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_errors_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_delay_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_instmap_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_module_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(0, MI_3, (MR_Integer) 0))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_init_10_p_0(
  MR_Word ModuleInfo_11,
  MR_Word PredId_12,
  MR_Integer ProcId_13,
  MR_Word Context_14,
  MR_Word LiveVars_15,
  MR_Word HeadInstVars_16,
  MR_Word InstMap0_17,
  MR_Word HowToCheck_18,
  MR_Word MayChangeProc_19,
  MR_Word * ModeInfo_20)
{
  MR_bool succeeded;
  MR_Word Globals_21;
  MR_Word DebugModes_22;
  MR_Integer DebugModesPredId_23;
  MR_Integer PredIdInt_24;
  MR_Word MaybeDebug_30;
  MR_Word ProcInfo_31;
  MR_Word VarTable_32;
  MR_Word InstVarSet_33;
  MR_Word LiveVarsBag_34;
  MR_Word LastCheckpointInstMap_35;
  MR_Word PredVarMultiModeMap_47;
  MR_Word ModeSubInfo_48;
  MR_Word DelayInfo_50;
  MR_Word NondetLiveVarsBag_52;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Integer Var_55;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 88, &DebugModes_22);
  libs__globals__lookup_int_option_3_p_0(Globals_21, (MR_Integer) 92, &DebugModesPredId_23);
  hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_12, &PredIdInt_24);
  succeeded = (DebugModes_22 == (MR_Integer) 1);
  if (succeeded)
  {
    Var_55 = (MR_Integer) 0;
    succeeded = (DebugModesPredId_23 >= Var_55);
    if (succeeded)
      succeeded = (DebugModesPredId_23 != PredIdInt_24);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_String UniquePrefix_25;
    MR_Word DebugVerbose_26;
    MR_Word DebugMinimal_27;
    MR_Word Statistics_28;
    MR_Word Flags_29;

    switch (HowToCheck_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UniquePrefix_25 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        UniquePrefix_25 = (MR_String) "unique ";
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 91, &DebugVerbose_26);
    libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 90, &DebugMinimal_27);
    libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 89, &Statistics_28);
    {
      Flags_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Flags_29, 0) = ((MR_Box) (UniquePrefix_25));
      MR_hl_field(0, Flags_29, 1) = (MR_Box) (((((MR_Unsigned) (DebugVerbose_26) << 2)) | (((((MR_Unsigned) (DebugMinimal_27) << 1)) | (MR_Unsigned) (Statistics_28)))));
    }
    {
      MaybeDebug_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeDebug_30, 0) = ((MR_Box) (Flags_29));
    }
  }
  else
    MaybeDebug_30 = (MR_Word) ((MR_Unsigned) 0U);
  hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_11, PredId_12, ProcId_13, &ProcInfo_31);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_31, &VarTable_32);
  hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_31, &InstVarSet_33);
  Var_59 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVars_15);
  mercury__bag__from_sorted_list_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), Var_59, &LiveVarsBag_34);
  hlds__instmap__init_unreachable_1_p_0(&LastCheckpointInstMap_35);
  mercury__map__init_1_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_id_var_multimode_error_0), &PredVarMultiModeMap_47);
  {
    ModeSubInfo_48 = (MR_Word) MR_new_object(MR_Word, (14 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ModeSubInfo_48, 0) = ((MR_Box) (PredId_12));
    MR_hl_field(0, ModeSubInfo_48, 1) = ((MR_Box) (ProcId_13));
    MR_hl_field(0, ModeSubInfo_48, 2) = ((MR_Box) (VarTable_32));
    MR_hl_field(0, ModeSubInfo_48, 3) = ((MR_Box) (MaybeDebug_30));
    MR_hl_field(0, ModeSubInfo_48, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModeSubInfo_48, 5) = ((MR_Box) (LiveVarsBag_34));
    MR_hl_field(0, ModeSubInfo_48, 6) = ((MR_Box) (InstVarSet_33));
    MR_hl_field(0, ModeSubInfo_48, 7) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModeSubInfo_48, 8) = ((MR_Box) (LastCheckpointInstMap_35));
    MR_hl_field(0, ModeSubInfo_48, 9) = ((MR_Box) (InstMap0_17));
    MR_hl_field(0, ModeSubInfo_48, 10) = ((MR_Box) (HeadInstVars_16));
    MR_hl_field(0, ModeSubInfo_48, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ModeSubInfo_48, 12) = ((MR_Box) (PredVarMultiModeMap_47));
    MR_hl_field(0, ModeSubInfo_48, 13) = (MR_Box) (((((MR_Unsigned) (HowToCheck_18) << 9)) | (((((MR_Unsigned) (MayChangeProc_19) << 8)) | (((((MR_Unsigned) ((MR_Integer) 0) << 7)) | (((((MR_Unsigned) ((MR_Integer) 0) << 6)) | (((((MR_Unsigned) ((MR_Integer) 1) << 5)) | (((((MR_Unsigned) ((MR_Integer) 1) << 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << 1)) | (MR_Unsigned) ((MR_Integer) 1)))))))))))))))))));
  }
  check_hlds__delay_info__delay_info_init_1_p_0(&DelayInfo_50);
  Var_60 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVars_15);
  mercury__bag__from_sorted_list_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), Var_60, &NondetLiveVarsBag_52);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    *ModeInfo_20 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleInfo_11));
    MR_hl_field(0, base, 1) = ((MR_Box) (InstMap0_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (DelayInfo_50));
    MR_hl_field(0, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) (Context_14));
    MR_hl_field(0, base, 6) = ((MR_Box) (NondetLiveVarsBag_52));
    MR_hl_field(0, base, 7) = ((MR_Box) (ModeSubInfo_48));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_context_init_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____call_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____call_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____debug_flags_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____debug_flags_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____how_to_check_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____how_to_check_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____locked_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____locked_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____may_change_called_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____may_change_called_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_call_id_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____mode_call_id_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____mode_call_id_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____mode_call_id_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____mode_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____mode_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____mode_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____mode_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____mode_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____mode_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____par_conj_mode_check_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____pred_var_multimode_error_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____pred_var_multimode_error_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____pred_var_multimode_error_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____pred_var_multimode_error_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____side_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____side_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  check_hlds__mode_info____Compare____var_lock_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__check_hlds__mode_info__init(void)
{
}

void mercury__check_hlds__mode_info__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_call_context_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_had_from_ground_term_scope_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_how_to_check_goal_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_dupl_for_switch_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_from_ground_term_scope_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_in_promise_purity_scope_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_locked_vars_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_make_ground_terms_unique_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_may_change_called_proc_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_call_id_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_sub_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_stack_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_pred_var_multimode_error_map_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_side_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0);
}

void mercury__check_hlds__mode_info__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__check_hlds__mode_info__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module check_hlds.mode_info.
