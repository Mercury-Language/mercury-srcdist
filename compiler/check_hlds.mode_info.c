/*
** Automatically generated from `mode_info.m'
** by the Mercury compiler,
** version rotd-2018-08-02
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
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
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
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1;

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1];

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0[2];

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3];

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3];

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[3];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0;

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1];

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1];

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0[2];

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0[2];

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0;

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1;

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0[2];

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0;

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1[2];

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

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0;

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0;

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0;

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[24];

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[24];

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[24];

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

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2];

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0[2];

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0[2];

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0;

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1;

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1];

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
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
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
check_hlds__mode_info____Unify____pred_var_multimode_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
check_hlds__mode_info____Compare____pred_var_multimode_map_0_0_10001(
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


static /* final */ const MR_Box check_hlds__mode_info_scalar_common_1[11][2];

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_2[3][3];




static /* final */ const MR_Box check_hlds__mode_info_scalar_common_1[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__bag__bag__type_ctor_info_bag_1)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[0]))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_2[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0))
  },
};

static /* final */ const MR_Box check_hlds__mode_info_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_var_lock_reason_0)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__mode_info_scalar_common_1[9])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_unify_context_0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0 = {
  (MR_String) "call_context_unify",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1[1] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1 = {
  (MR_String) "call_context_call",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__mode_info__check_hlds__mode_info__field_types_call_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_0
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_call_context_0_1
};

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_call_context_0_1,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____call_context_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____call_context_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "call_context",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_call_context_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_call_context_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_call_context_0
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0[3] = {
  (MR_String) "verbose",
  (MR_String) "minimal",
  (MR_String) "statistics"
};

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0[3] = {
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

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0 = {
  (MR_String) "debug_flags",
  (MR_Integer) 3,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_debug_flags_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_debug_flags_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_locns_debug_flags_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_debug_flags_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_debug_flags_0_0
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____debug_flags_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____debug_flags_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "debug_flags",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_debug_flags_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_debug_flags_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_debug_flags_0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_0 = {
  (MR_String) "had_from_ground_term_scope",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_had_from_ground_term_scope_0_1 = {
  (MR_String) "did_not_have_from_ground_term_scope",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "had_from_ground_term_scope",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_had_from_ground_term_scope_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_had_from_ground_term_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_had_from_ground_term_scope_0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_0 = {
  (MR_String) "check_modes",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_how_to_check_goal_0_1 = {
  (MR_String) "check_unique_modes",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "how_to_check_goal",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_how_to_check_goal_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_how_to_check_goal_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_how_to_check_goal_0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_0 = {
  (MR_String) "in_dupl_for_switch",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_dupl_for_switch_0_1 = {
  (MR_String) "not_in_dupl_for_switch",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_dupl_for_switch",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_dupl_for_switch_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_dupl_for_switch_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_dupl_for_switch_0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_0 = {
  (MR_String) "in_from_ground_term_scope",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_from_ground_term_scope_0_1 = {
  (MR_String) "not_in_from_ground_term_scope",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_from_ground_term_scope",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_from_ground_term_scope_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_from_ground_term_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_from_ground_term_scope_0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_0 = {
  (MR_String) "in_promise_purity_scope",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_in_promise_purity_scope_0_1 = {
  (MR_String) "not_in_promise_purity_scope",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "in_promise_purity_scope",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_in_promise_purity_scope_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_in_promise_purity_scope_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_in_promise_purity_scope_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
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
  {
    (MR_TypeInfo) (&check_hlds__mode_info__pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_locked_vars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_info____Unify____locked_vars_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____locked_vars_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "locked_vars",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_0 = {
  (MR_String) "make_ground_terms_unique",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_make_ground_terms_unique_0_1 = {
  (MR_String) "do_not_make_ground_terms_unique",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "make_ground_terms_unique",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_make_ground_terms_unique_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_make_ground_terms_unique_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_make_ground_terms_unique_0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_0 = {
  (MR_String) "may_change_called_proc",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_may_change_called_proc_0_1 = {
  (MR_String) "may_not_change_called_proc",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "may_change_called_proc",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_may_change_called_proc_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_may_change_called_proc_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_may_change_called_proc_0
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_0[2] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_call_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0 = {
  (MR_String) "mode_context_call",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
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

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1 = {
  (MR_String) "mode_context_unify",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_context_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2 = {
  (MR_String) "mode_context_uninitialized",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1
};

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_context_0_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0[3] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_0,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_1,
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_context_0_2
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_context_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_context_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_context",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_context_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_context_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_context_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__bag__bag__type_ctor_info_bag_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0[8] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&check_hlds__delay_info__check_hlds__delay_info__type_ctor_info_delay_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_error_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0),
  (MR_PseudoTypeInfo) (&mercury__term__term__type_ctor_info_context_0),
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
  (MR_Integer) 8,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_info_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_mode_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_info_0_0
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_info_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_info",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_info_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_info_0
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_debug_flags_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0)
  }
};

static const MR_FA_TypeInfo_Struct1 check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0)
  }
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
  {
    (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0)
  }
};

static const MR_FA_TypeInfo_Struct2 check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&check_hlds__mode_info__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
    (MR_TypeInfo) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0)
  }
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0[24] = {
  (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__maybe__ti_maybe_1check_hlds__mode_info__type_ctor_info_debug_flags_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1pair__ti_pair_2check_hlds__mode_info__type_ctor_info_var_lock_reason_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__bag__ti_bag_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&hlds__instmap__hlds__instmap__type_ctor_info_instmap_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0parse_tree__prog_data__type_ctor_info_mer_inst_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1check_hlds__mode_errors__type_ctor_info_mode_warning_info_0),
  (MR_PseudoTypeInfo) (&check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0),
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

static const MR_ConstString check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0[24] = {
  (MR_String) "msi_pred_id",
  (MR_String) "msi_proc_id",
  (MR_String) "msi_varset",
  (MR_String) "msi_vartypes",
  (MR_String) "msi_debug",
  (MR_String) "msi_locked_vars",
  (MR_String) "msi_live_vars",
  (MR_String) "msi_instvarset",
  (MR_String) "msi_par_conj",
  (MR_String) "msi_last_checkpoint_insts",
  (MR_String) "msi_initial_instmap",
  (MR_String) "msi_head_inst_vars",
  (MR_String) "msi_warnings",
  (MR_String) "msi_pred_var_multimode_map",
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

static const MR_DuArgLocn check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0[24] = {
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
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 9,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 8,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 7,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 6,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 5,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 4,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 3,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 2,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 14,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0 = {
  (MR_String) "mode_sub_info",
  (MR_Integer) 24,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_mode_sub_info_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_mode_sub_info_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_locns_mode_sub_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_mode_sub_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_mode_sub_info_0_0
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____mode_sub_info_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____mode_sub_info_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "mode_sub_info",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_mode_sub_info_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_mode_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_mode_sub_info_0
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
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__mode_info__check_hlds__mode_info__field_types_par_conj_mode_check_0_0,
  check_hlds__mode_info__check_hlds__mode_info__field_names_par_conj_mode_check_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_par_conj_mode_check_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_par_conj_mode_check_0_0
};

static const MR_Integer check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "par_conj_mode_check",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_par_conj_mode_check_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_par_conj_mode_check_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_par_conj_mode_check_0
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_stack_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "par_conj_mode_check_stack",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__mode_info__list__ti_list_1check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_pred_var_multimode_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__mode_info____Unify____pred_var_multimode_map_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____pred_var_multimode_map_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "pred_var_multimode_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&check_hlds__mode_info__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_0 = {
  (MR_String) "left",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc check_hlds__mode_info__check_hlds__mode_info__enum_functor_desc_side_0_1 = {
  (MR_String) "right",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0[2] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__mode_info____Unify____side_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____side_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "side",
  {     check_hlds__mode_info__check_hlds__mode_info__enum_name_ordered_side_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__enum_value_ordered_side_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_side_0
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_0 = {
  (MR_String) "var_lock_negation",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_1 = {
  (MR_String) "var_lock_if_then_else",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2[1] = {
  (MR_PseudoTypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2 = {
  (MR_String) "var_lock_lambda",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__mode_info__check_hlds__mode_info__field_types_var_lock_reason_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_3 = {
  (MR_String) "var_lock_trace_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_4 = {
  (MR_String) "var_lock_atomic_goal",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_5 = {
  (MR_String) "var_lock_par_conj",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL_REST_OF_WORD,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
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

static const MR_DuFunctorDescPtr check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1[1] = {
  &check_hlds__mode_info__check_hlds__mode_info__du_functor_desc_var_lock_reason_0_2
};

static const MR_DuPtagLayout check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0[2] = {
  {
    (MR_Integer) 5,
    MR_SECTAG_LOCAL_REST_OF_WORD,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    check_hlds__mode_info__check_hlds__mode_info__du_stag_ordered_var_lock_reason_0_1,
    INT8_C(-1)
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__mode_info____Unify____var_lock_reason_0_0_10001)),
  ((MR_Box) (check_hlds__mode_info____Compare____var_lock_reason_0_0_10001)),
  (MR_String) "check_hlds.mode_info",
  (MR_String) "var_lock_reason",
  {     check_hlds__mode_info__check_hlds__mode_info__du_name_ordered_var_lock_reason_0 },
  {     check_hlds__mode_info__check_hlds__mode_info__du_ptag_ordered_var_lock_reason_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  check_hlds__mode_info__check_hlds__mode_info__functor_number_map_var_lock_reason_0
};

void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer Var_20 = (MR_Integer) (Var_19);
                  MR_Integer Var_21 = (MR_Integer) (ArgY1_9);

                  mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_20, Var_21);
                }
                break;
            }
          }
          break;
      }
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____side_0_0(
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

MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____pred_var_multimode_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____pred_var_multimode_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[8]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[8]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_8;

      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[3]), &Var_8, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
      succeeded = (Var_8 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_8;
      else
      {
        mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0(
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

      succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[3]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_10_10 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_51 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_52 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_51 == CastY_52);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_55_55;
      MR_Word TypeCtorInfo_56_56;
      MR_Word TypeInfo_57_57;
      MR_Word TypeInfo_58_58;
      MR_Word TypeInfo_59_59;
      MR_Word TypeInfo_60_60;
      MR_Word TypeInfo_61_61;
      MR_Word TypeInfo_64_64;
      MR_Word TypeInfo_65_65;
      MR_Word TypeInfo_66_66;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
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
      MR_Word ArgX9_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 8))));
      MR_Word ArgY9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgX10_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 9))));
      MR_Word ArgY10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgX11_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 10))));
      MR_Word ArgY11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgX12_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 11))));
      MR_Word ArgY12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgX13_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 12))));
      MR_Word ArgY13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgX14_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 13))));
      MR_Word ArgY14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgX15_31 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgY15_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgX16_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgY16_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgX17_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgY17_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgX18_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgY18_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgX19_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgY19_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgX20_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY20_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgX21_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY21_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX22_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY22_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX23_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY23_48 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX24_49 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14))) & (MR_Integer) 1);
      MR_Word ArgY24_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) & (MR_Integer) 1);
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 14)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14)));

      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
        {
          TypeInfo_55_55 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[5]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_55, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeCtorInfo_56_56 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_56_56, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              TypeInfo_57_57 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[6]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_57, ((MR_Box) (ArgX5_11)), ((MR_Box) (ArgY5_12)));
              if (succeeded)
              {
                TypeInfo_58_58 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[4]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_58, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
                if (succeeded)
                {
                  TypeInfo_59_59 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_59, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    TypeInfo_60_60 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[7]);
                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_60, ((MR_Box) (ArgX8_17)), ((MR_Box) (ArgY8_18)));
                    if (succeeded)
                    {
                      TypeInfo_61_61 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[8]);
                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_61, ((MR_Box) (ArgX9_19)), ((MR_Box) (ArgY9_20)));
                      if (succeeded)
                      {
                        succeeded = hlds__instmap____Unify____instmap_0_0(ArgX10_21, ArgY10_22);
                        if (succeeded)
                        {
                          succeeded = hlds__instmap____Unify____instmap_0_0(ArgX11_23, ArgY11_24);
                          if (succeeded)
                          {
                            TypeInfo_64_64 = (MR_Word) (&check_hlds__mode_info_scalar_common_2[2]);
                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_64, ((MR_Box) (ArgX12_25)), ((MR_Box) (ArgY12_26)));
                            if (succeeded)
                            {
                              TypeInfo_65_65 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[10]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_65_65, ((MR_Box) (ArgX13_27)), ((MR_Box) (ArgY13_28)));
                              if (succeeded)
                              {
                                TypeInfo_66_66 = (MR_Word) (&check_hlds__mode_info_scalar_common_2[0]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_66_66, ((MR_Box) (ArgX14_29)), ((MR_Box) (ArgY14_30)));
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
                                                {
                                                  succeeded = (ArgX23_47 == ArgY23_48);
                                                  if (succeeded)
                                                    succeeded = (ArgX24_49 == ArgY24_50);
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
}

void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0(
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
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word Var_20;

      hlds__hlds_module____Compare____module_info_0_0(&Var_20, ArgX1_4, ArgY1_5);
      succeeded = (Var_20 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_20;
      else
      {
        MR_Word Var_21;

        hlds__instmap____Compare____instmap_0_0(&Var_21, ArgX2_6, ArgY2_7);
        succeeded = (Var_21 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_21;
        else
        {
          MR_Word Var_22;

          check_hlds__delay_info____Compare____delay_info_0_0(&Var_22, ArgX3_8, ArgY3_9);
          succeeded = (Var_22 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_22;
          else
          {
            MR_Word Var_23;

            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[1]), &Var_23, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_23 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_23;
            else
            {
              MR_Word Var_24;

              check_hlds__mode_info____Compare____mode_context_0_0(&Var_24, ArgX5_12, ArgY5_13);
              succeeded = (Var_24 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_24;
              else
              {
                MR_Word Var_25;

                mercury__term____Compare____context_0_0(&Var_25, ArgX6_14, ArgY6_15);
                succeeded = (Var_25 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_25;
                else
                {
                  MR_Word Var_26;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[2]), &Var_26, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_26 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_26;
                  else
                    check_hlds__mode_info____Compare____mode_sub_info_0_0(HeadVar__1_1, ArgX8_18, ArgY8_19);
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
check_hlds__mode_info____Compare____mode_sub_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_75 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_76 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_75 == CastY_76);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word ArgX7_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 6))));
      MR_Word ArgY7_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 6))));
      MR_Word ArgX8_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 7))));
      MR_Word ArgY8_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 7))));
      MR_Word ArgX9_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 8))));
      MR_Word ArgY9_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 8))));
      MR_Word ArgX10_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 9))));
      MR_Word ArgY10_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 9))));
      MR_Word ArgX11_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 10))));
      MR_Word ArgY11_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 10))));
      MR_Word ArgX12_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 11))));
      MR_Word ArgY12_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 11))));
      MR_Word ArgX13_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 12))));
      MR_Word ArgY13_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 12))));
      MR_Word ArgX14_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 13))));
      MR_Word ArgY14_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 13))));
      MR_Word ArgX15_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgY15_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word ArgX16_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgY16_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word ArgX17_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgY17_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word ArgX18_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgY18_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word ArgX19_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgY19_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word ArgX20_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgY20_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word ArgX21_44 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgY21_45 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word ArgX22_46 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY22_47 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX23_48 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY23_49 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX24_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14))) & (MR_Integer) 1);
      MR_Word ArgY24_51 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14))) & (MR_Integer) 1);
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 14)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 14)));
      MR_Word Var_52;

      hlds__hlds_pred____Compare____pred_id_0_0(&Var_52, ArgX1_4, ArgY1_5);
      succeeded = (Var_52 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_52;
      else
      {
        MR_Word Var_53;

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_53, ArgX2_6, ArgY2_7);
        succeeded = (Var_53 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_53;
        else
        {
          MR_Word Var_54;

          mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[5]), &Var_54, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_54 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_54;
          else
          {
            MR_Word Var_55;

            mercury__builtin__compare_3_p_0((MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0), &Var_55, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_55 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_55;
            else
            {
              MR_Word Var_56;

              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[6]), &Var_56, ((MR_Box) (ArgX5_12)), ((MR_Box) (ArgY5_13)));
              succeeded = (Var_56 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_56;
              else
              {
                MR_Word Var_57;

                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[4]), &Var_57, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
                succeeded = (Var_57 == (MR_Integer) 0);
                succeeded = !(succeeded);
                if (succeeded)
                  *HeadVar__1_1 = Var_57;
                else
                {
                  MR_Word Var_58;

                  mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[2]), &Var_58, ((MR_Box) (ArgX7_16)), ((MR_Box) (ArgY7_17)));
                  succeeded = (Var_58 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_58;
                  else
                  {
                    MR_Word Var_59;

                    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[7]), &Var_59, ((MR_Box) (ArgX8_18)), ((MR_Box) (ArgY8_19)));
                    succeeded = (Var_59 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_59;
                    else
                    {
                      MR_Word Var_60;

                      mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[8]), &Var_60, ((MR_Box) (ArgX9_20)), ((MR_Box) (ArgY9_21)));
                      succeeded = (Var_60 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_60;
                      else
                      {
                        MR_Word Var_61;

                        hlds__instmap____Compare____instmap_0_0(&Var_61, ArgX10_22, ArgY10_23);
                        succeeded = (Var_61 == (MR_Integer) 0);
                        succeeded = !(succeeded);
                        if (succeeded)
                          *HeadVar__1_1 = Var_61;
                        else
                        {
                          MR_Word Var_62;

                          hlds__instmap____Compare____instmap_0_0(&Var_62, ArgX11_24, ArgY11_25);
                          succeeded = (Var_62 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_62;
                          else
                          {
                            MR_Word Var_63;

                            mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_2[2]), &Var_63, ((MR_Box) (ArgX12_26)), ((MR_Box) (ArgY12_27)));
                            succeeded = (Var_63 == (MR_Integer) 0);
                            succeeded = !(succeeded);
                            if (succeeded)
                              *HeadVar__1_1 = Var_63;
                            else
                            {
                              MR_Word Var_64;

                              mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[10]), &Var_64, ((MR_Box) (ArgX13_28)), ((MR_Box) (ArgY13_29)));
                              succeeded = (Var_64 == (MR_Integer) 0);
                              succeeded = !(succeeded);
                              if (succeeded)
                                *HeadVar__1_1 = Var_64;
                              else
                              {
                                MR_Word Var_65;

                                mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_2[0]), &Var_65, ((MR_Box) (ArgX14_30)), ((MR_Box) (ArgY14_31)));
                                succeeded = (Var_65 == (MR_Integer) 0);
                                succeeded = !(succeeded);
                                if (succeeded)
                                  *HeadVar__1_1 = Var_65;
                                else
                                {
                                  MR_Word Var_66;
                                  MR_Integer Var_101 = (MR_Integer) (ArgX15_32);
                                  MR_Integer Var_102 = (MR_Integer) (ArgY15_33);

                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_66, Var_101, Var_102);
                                  succeeded = (Var_66 == (MR_Integer) 0);
                                  succeeded = !(succeeded);
                                  if (succeeded)
                                    *HeadVar__1_1 = Var_66;
                                  else
                                  {
                                    MR_Word Var_67;
                                    MR_Integer Var_103 = (MR_Integer) (ArgX16_34);
                                    MR_Integer Var_104 = (MR_Integer) (ArgY16_35);

                                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_67, Var_103, Var_104);
                                    succeeded = (Var_67 == (MR_Integer) 0);
                                    succeeded = !(succeeded);
                                    if (succeeded)
                                      *HeadVar__1_1 = Var_67;
                                    else
                                    {
                                      MR_Word Var_68;
                                      MR_Integer Var_105 = (MR_Integer) (ArgX17_36);
                                      MR_Integer Var_106 = (MR_Integer) (ArgY17_37);

                                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_68, Var_105, Var_106);
                                      succeeded = (Var_68 == (MR_Integer) 0);
                                      succeeded = !(succeeded);
                                      if (succeeded)
                                        *HeadVar__1_1 = Var_68;
                                      else
                                      {
                                        MR_Word Var_69;
                                        MR_Integer Var_107 = (MR_Integer) (ArgX18_38);
                                        MR_Integer Var_108 = (MR_Integer) (ArgY18_39);

                                        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_69, Var_107, Var_108);
                                        succeeded = (Var_69 == (MR_Integer) 0);
                                        succeeded = !(succeeded);
                                        if (succeeded)
                                          *HeadVar__1_1 = Var_69;
                                        else
                                        {
                                          MR_Word Var_70;
                                          MR_Integer Var_109 = (MR_Integer) (ArgX19_40);
                                          MR_Integer Var_110 = (MR_Integer) (ArgY19_41);

                                          mercury__private_builtin__builtin_compare_int_3_p_0(&Var_70, Var_109, Var_110);
                                          succeeded = (Var_70 == (MR_Integer) 0);
                                          succeeded = !(succeeded);
                                          if (succeeded)
                                            *HeadVar__1_1 = Var_70;
                                          else
                                          {
                                            MR_Word Var_71;
                                            MR_Integer Var_111 = (MR_Integer) (ArgX20_42);
                                            MR_Integer Var_112 = (MR_Integer) (ArgY20_43);

                                            mercury__private_builtin__builtin_compare_int_3_p_0(&Var_71, Var_111, Var_112);
                                            succeeded = (Var_71 == (MR_Integer) 0);
                                            succeeded = !(succeeded);
                                            if (succeeded)
                                              *HeadVar__1_1 = Var_71;
                                            else
                                            {
                                              MR_Word Var_72;
                                              MR_Integer Var_113 = (MR_Integer) (ArgX21_44);
                                              MR_Integer Var_114 = (MR_Integer) (ArgY21_45);

                                              mercury__private_builtin__builtin_compare_int_3_p_0(&Var_72, Var_113, Var_114);
                                              succeeded = (Var_72 == (MR_Integer) 0);
                                              succeeded = !(succeeded);
                                              if (succeeded)
                                                *HeadVar__1_1 = Var_72;
                                              else
                                              {
                                                MR_Word Var_73;
                                                MR_Integer Var_115 = (MR_Integer) (ArgX22_46);
                                                MR_Integer Var_116 = (MR_Integer) (ArgY22_47);

                                                mercury__private_builtin__builtin_compare_int_3_p_0(&Var_73, Var_115, Var_116);
                                                succeeded = (Var_73 == (MR_Integer) 0);
                                                succeeded = !(succeeded);
                                                if (succeeded)
                                                  *HeadVar__1_1 = Var_73;
                                                else
                                                {
                                                  MR_Word Var_74;
                                                  MR_Integer Var_117 = (MR_Integer) (ArgX23_48);
                                                  MR_Integer Var_118 = (MR_Integer) (ArgY23_49);

                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&Var_74, Var_117, Var_118);
                                                  succeeded = (Var_74 == (MR_Integer) 0);
                                                  succeeded = !(succeeded);
                                                  if (succeeded)
                                                    *HeadVar__1_1 = Var_74;
                                                  else
                                                  {
                                                    MR_Integer Var_119 = (MR_Integer) (ArgX24_50);
                                                    MR_Integer Var_120 = (MR_Integer) (ArgY24_51);

                                                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_119, Var_120);
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

MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0(
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
      MR_Word TypeInfo_24_24;
      MR_Word TypeInfo_26_26;
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
      MR_Integer CastX_75;
      MR_Integer CastY_76;

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
                succeeded = mercury__term____Unify____context_0_0(ArgX6_13, ArgY6_14);
                if (succeeded)
                {
                  TypeInfo_26_26 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX7_15)), ((MR_Box) (ArgY7_16)));
                  if (succeeded)
                  {
                    CastX_75 = (MR_Integer) (ArgX8_17);
                    CastY_76 = (MR_Integer) (ArgY8_18);
                    succeeded = (CastX_75 == CastY_76);
                    if (succeeded)
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word TypeInfo_55_79;
                      MR_Word TypeCtorInfo_56_80;
                      MR_Word TypeInfo_57_81;
                      MR_Word TypeInfo_58_82;
                      MR_Word TypeInfo_59_83;
                      MR_Word TypeInfo_60_84;
                      MR_Word TypeInfo_61_85;
                      MR_Word TypeInfo_64_88;
                      MR_Word TypeInfo_65_89;
                      MR_Word TypeInfo_66_90;
                      MR_Word ArgX1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 0))));
                      MR_Word ArgY1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 0))));
                      MR_Integer ArgX2_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 1))));
                      MR_Integer ArgY2_30 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 1))));
                      MR_Word ArgX3_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 2))));
                      MR_Word ArgY3_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 2))));
                      MR_Word ArgX4_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 3))));
                      MR_Word ArgY4_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 3))));
                      MR_Word ArgX5_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 4))));
                      MR_Word ArgY5_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 4))));
                      MR_Word ArgX6_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 5))));
                      MR_Word ArgY6_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 5))));
                      MR_Word ArgX7_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 6))));
                      MR_Word ArgY7_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 6))));
                      MR_Word ArgX8_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 7))));
                      MR_Word ArgY8_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 7))));
                      MR_Word ArgX9_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 8))));
                      MR_Word ArgY9_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 8))));
                      MR_Word ArgX10_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 9))));
                      MR_Word ArgY10_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 9))));
                      MR_Word ArgX11_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 10))));
                      MR_Word ArgY11_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 10))));
                      MR_Word ArgX12_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 11))));
                      MR_Word ArgY12_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 11))));
                      MR_Word ArgX13_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 12))));
                      MR_Word ArgY13_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 12))));
                      MR_Word ArgX14_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 13))));
                      MR_Word ArgY14_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 13))));
                      MR_Word ArgX15_55 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                      MR_Word ArgY15_56 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                      MR_Word ArgX16_57 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                      MR_Word ArgY16_58 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                      MR_Word ArgX17_59 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                      MR_Word ArgY17_60 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                      MR_Word ArgX18_61 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      MR_Word ArgY18_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      MR_Word ArgX19_63 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      MR_Word ArgY19_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      MR_Word ArgX20_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      MR_Word ArgY20_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      MR_Word ArgX21_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      MR_Word ArgY21_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      MR_Word ArgX22_69 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      MR_Word ArgY22_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      MR_Word ArgX23_71 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word ArgY23_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word ArgX24_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14))) & (MR_Integer) 1);
                      MR_Word ArgY24_74 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14))) & (MR_Integer) 1);
                      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgX8_17, (MR_Integer) 14)));
                      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ArgY8_18, (MR_Integer) 14)));

                      succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ArgX1_27, ArgY1_28);
                      if (succeeded)
                      {
                        succeeded = (ArgX2_29 == ArgY2_30);
                        if (succeeded)
                        {
                          TypeInfo_55_79 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[5]);
                          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_55_79, ((MR_Box) (ArgX3_31)), ((MR_Box) (ArgY3_32)));
                          if (succeeded)
                          {
                            TypeCtorInfo_56_80 = (MR_Word) (&hlds__vartypes__hlds__vartypes__type_ctor_info_vartypes_0);
                            succeeded = mercury__builtin__unify_2_p_0(TypeCtorInfo_56_80, ((MR_Box) (ArgX4_33)), ((MR_Box) (ArgY4_34)));
                            if (succeeded)
                            {
                              TypeInfo_57_81 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[6]);
                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_57_81, ((MR_Box) (ArgX5_35)), ((MR_Box) (ArgY5_36)));
                              if (succeeded)
                              {
                                TypeInfo_58_82 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[4]);
                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_58_82, ((MR_Box) (ArgX6_37)), ((MR_Box) (ArgY6_38)));
                                if (succeeded)
                                {
                                  TypeInfo_59_83 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[2]);
                                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_59_83, ((MR_Box) (ArgX7_39)), ((MR_Box) (ArgY7_40)));
                                  if (succeeded)
                                  {
                                    TypeInfo_60_84 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[7]);
                                    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_60_84, ((MR_Box) (ArgX8_41)), ((MR_Box) (ArgY8_42)));
                                    if (succeeded)
                                    {
                                      TypeInfo_61_85 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[8]);
                                      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_61_85, ((MR_Box) (ArgX9_43)), ((MR_Box) (ArgY9_44)));
                                      if (succeeded)
                                      {
                                        succeeded = hlds__instmap____Unify____instmap_0_0(ArgX10_45, ArgY10_46);
                                        if (succeeded)
                                        {
                                          succeeded = hlds__instmap____Unify____instmap_0_0(ArgX11_47, ArgY11_48);
                                          if (succeeded)
                                          {
                                            TypeInfo_64_88 = (MR_Word) (&check_hlds__mode_info_scalar_common_2[2]);
                                            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_64_88, ((MR_Box) (ArgX12_49)), ((MR_Box) (ArgY12_50)));
                                            if (succeeded)
                                            {
                                              TypeInfo_65_89 = (MR_Word) (&check_hlds__mode_info_scalar_common_1[10]);
                                              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_65_89, ((MR_Box) (ArgX13_51)), ((MR_Box) (ArgY13_52)));
                                              if (succeeded)
                                              {
                                                TypeInfo_66_90 = (MR_Word) (&check_hlds__mode_info_scalar_common_2[0]);
                                                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_66_90, ((MR_Box) (ArgX14_53)), ((MR_Box) (ArgY14_54)));
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
                                                                {
                                                                  succeeded = (ArgX23_71 == ArgY23_72);
                                                                  if (succeeded)
                                                                    succeeded = (ArgX24_73 == ArgY24_74);
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
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
            MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer ArgY2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_8;

                  hlds__hlds_pred____Compare____call_id_0_0(&Var_8, Var_37, ArgY1_5);
                  succeeded = (Var_8 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_8;
                  else
                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_36, ArgY2_7);
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
            MR_Word Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word Var_23;

                  hlds__hlds_goal____Compare____unify_context_0_0(&Var_23, Var_39, ArgY1_20);
                  succeeded = (Var_23 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_23;
                  else
                  {
                    MR_Integer Var_40 = (MR_Integer) (Var_38);
                    MR_Integer Var_41 = (MR_Integer) (ArgY2_22);

                    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_40, Var_41);
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Integer ArgY2_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = hlds__hlds_pred____Unify____call_id_0_0(ArgX1_3, ArgY1_4);
              if (succeeded)
                succeeded = (ArgX2_5 == ArgY2_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = hlds__hlds_goal____Unify____unify_context_0_0(ArgX1_7, ArgY1_8);
              if (succeeded)
                succeeded = (ArgX2_9 == ArgY2_10);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0(
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

MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(
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

MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(
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

MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(
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

MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(
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

MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0(
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

MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(
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

MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0(
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
      MR_Word ArgX1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY1_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Var_10;
      MR_Integer Var_17 = (MR_Integer) (ArgX1_4);
      MR_Integer Var_18 = (MR_Integer) (ArgY1_5);

      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_10, Var_17, Var_18);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;
        MR_Integer Var_19 = (MR_Integer) (ArgX2_6);
        MR_Integer Var_20 = (MR_Integer) (ArgY2_7);

        mercury__private_builtin__builtin_compare_int_3_p_0(&Var_11, Var_19, Var_20);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
        {
          MR_Integer Var_21 = (MR_Integer) (ArgX3_8);
          MR_Integer Var_22 = (MR_Integer) (ArgY3_9);

          mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Var_21, Var_22);
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
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgY1_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

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

void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        hlds__hlds_pred____Compare____call_id_0_0(HeadVar__1_1, Var_16, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        hlds__hlds_goal____Compare____unify_context_0_0(HeadVar__1_1, Var_17, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = hlds__hlds_pred____Unify____call_id_0_0(ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = hlds__hlds_goal____Unify____unify_context_0_0(ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_need_to_requantify_2_p_0(
  MR_Word STATE_VARIABLE_ModeInfo_0_4,
  MR_Word * STATE_VARIABLE_ModeInfo_5)
{
  {
    check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0((MR_Integer) 0, STATE_VARIABLE_ModeInfo_0_4, STATE_VARIABLE_ModeInfo_5);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_warning_3_p_0(
  MR_Word ModeWarning_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_9,
  MR_Word * STATE_VARIABLE_ModeInfo_10)
{
  {
    MR_Word Context_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5))));
    MR_Word ModeContext_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4))));
    MR_Word ModeWarningInfo_8;

    {
      ModeWarningInfo_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeWarningInfo_8, 0) = ((MR_Box) (ModeWarning_4));
      MR_hl_field(MR_mktag(0), ModeWarningInfo_8, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), ModeWarningInfo_8, 2) = ((MR_Box) (ModeContext_7));
    }
    check_hlds__mode_info__mode_info_add_warning_3_p_0(ModeWarningInfo_8, STATE_VARIABLE_ModeInfo_0_9, STATE_VARIABLE_ModeInfo_10);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_add_warning_3_p_0(
  MR_Word ModeWarningInfo_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9)
{
  {
    MR_Word Warnings0_6;
    MR_Word Warnings_7;
    MR_Word Var_10;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7))));
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Unsigned packed_args_0;
    MR_Word Var_61;
    MR_Integer Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_74;
    MR_Unsigned packed_args_1;

    Warnings0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 12))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 14)));
    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (ModeWarningInfo_4));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__append_3_p_1((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_warning_info_0), Warnings0_6, Var_10, &Warnings_7);
    Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 0))));
    Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 1))));
    Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 2))));
    Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3))));
    Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 4))));
    Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 5))));
    Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 6))));
    Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 7))));
    Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 0))));
    Var_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 1))));
    Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 2))));
    Var_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 3))));
    Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 4))));
    Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 5))));
    Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 6))));
    Var_68 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 7))));
    Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 8))));
    Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 9))));
    Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 10))));
    Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 11))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 13))));
    packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_52, (MR_Integer) 14)));
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (Var_63));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Var_64));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Var_65));
      MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(0), Var_53, 6) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(0), Var_53, 7) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), Var_53, 8) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), Var_53, 9) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), Var_53, 10) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), Var_53, 11) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), Var_53, 12) = ((MR_Box) (Warnings_7));
      MR_hl_field(MR_mktag(0), Var_53, 13) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), Var_53, 14) = (MR_Box) (packed_args_1);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModeInfo_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_54));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_58));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_60));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_add_error_3_p_0(
  MR_Word ModeErrorInfo_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_8,
  MR_Word * STATE_VARIABLE_ModeInfo_9)
{
  {
    MR_Word Errors0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_8, (MR_Integer) 3))));
    MR_Word Errors_7;
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (ModeErrorInfo_4));
      MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__append_3_p_1((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), Errors0_6, Var_10, &Errors_7);
    check_hlds__mode_info__mode_info_set_errors_3_p_0(Errors_7, STATE_VARIABLE_ModeInfo_0_8, STATE_VARIABLE_ModeInfo_9);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_error_4_p_0(
  MR_Word Vars_5,
  MR_Word ModeError_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_11,
  MR_Word * STATE_VARIABLE_ModeInfo_12)
{
  {
    MR_Word Context_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5))));
    MR_Word ModeContext_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4))));
    MR_Word ModeErrorInfo_10;
    MR_Word Errors0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3))));
    MR_Word Errors_37;
    MR_Word Var_38;

    {
      ModeErrorInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeErrorInfo_10, 0) = ((MR_Box) (Vars_5));
      MR_hl_field(MR_mktag(0), ModeErrorInfo_10, 1) = ((MR_Box) (ModeError_6));
      MR_hl_field(MR_mktag(0), ModeErrorInfo_10, 2) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), ModeErrorInfo_10, 3) = ((MR_Box) (ModeContext_9));
    }
    {
      Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (ModeErrorInfo_10));
      MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__append_3_p_1((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), Errors0_36, Var_38, &Errors_37);
    check_hlds__mode_info__mode_info_set_errors_3_p_0(Errors_37, STATE_VARIABLE_ModeInfo_0_11, STATE_VARIABLE_ModeInfo_12);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_var_is_nondet_live_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word Var_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word NondetLiveVars0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_4, (MR_Integer) 6))));

    succeeded = mercury__bag__contains_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), NondetLiveVars0_7, ((MR_Box) (Var_5)));
    if (succeeded)
      *Result_6 = (MR_Integer) 0;
    else
      *Result_6 = (MR_Integer) 1;
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_var_is_live_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word Var_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word LiveVars0_7;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_4, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    LiveVars0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14)));
    succeeded = mercury__bag__contains_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), LiveVars0_7, ((MR_Box) (Var_5)));
    if (succeeded)
      *Result_6 = (MR_Integer) 0;
    else
      *Result_6 = (MR_Integer) 1;
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(
  MR_Word ModeInfo_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Vars_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Live_8;
      MR_Word Lives_9;
      MR_Word LiveVars0_13;
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_1, (MR_Integer) 7))));
      MR_Unsigned packed_args_0;

      LiveVars0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 6))));
      packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 14)));
      succeeded = mercury__bag__contains_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), LiveVars0_13, ((MR_Box) (Var_6)));
      if (succeeded)
        Live_8 = (MR_Integer) 0;
      else
        Live_8 = (MR_Integer) 1;
      check_hlds__mode_info__mode_info_var_list_is_live_3_p_0(ModeInfo_1, Vars_7, &Lives_9);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Live_8));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Lives_9));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_call_id_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word PredId_5,
  MR_Word * CallId_6)
{
  {
    MR_Word ModuleInfo_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_4, (MR_Integer) 0))));
    MR_Word PredInfo_8;

    hlds__hlds_module__module_info_pred_info_3_p_0(ModuleInfo_7, PredId_5, &PredInfo_8);
    hlds__hlds_pred__pred_info_get_call_id_2_p_0(PredInfo_8, CallId_6);
  }
}

MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word Var_5,
  MR_Word * Reason_6)
{
  {
    MR_bool succeeded;
    MR_Word LockedVarsList_7;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_4, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    LockedVarsList_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 5))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 14)));
    succeeded = check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(LockedVarsList_7, Var_5, Reason_6);
    return succeeded;
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info__mode_info_var_is_locked_2_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Var_7,
  MR_Word * Reason_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1);
    MR_Word ThisReason_4;
    MR_Word Set_5;
    MR_Word Sets_6;
    MR_Word Var_9;
    MR_Word TypeCtorInfo_10_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Sets_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      ThisReason_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
      Set_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
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
check_hlds__mode_info__mode_info_unlock_vars_4_p_0(
  MR_Word Reason_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_12,
  MR_Word * STATE_VARIABLE_ModeInfo_13)
{
  {
    MR_bool succeeded;
    MR_Word LockedVars0_8;
    MR_Word LockedVars_11;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_12, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;
    MR_Word LockedVars1_10;
    MR_Word TypeCtorInfo_18_18;
    MR_Word TheseVars_9;
    MR_Word Var_14;
    MR_Word Var_19;

    LockedVars0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 5))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 14)));
    succeeded = ((MR_tag((MR_Word) LockedVars0_8)) == (MR_Integer) 1);
    if (succeeded)
    {
      Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LockedVars0_8, (MR_Integer) 0))));
      LockedVars1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LockedVars0_8, (MR_Integer) 1))));
      Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0))));
      TheseVars_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
      succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(Reason_5, Var_19);
      if (succeeded)
      {
        TypeCtorInfo_18_18 = (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        succeeded = parse_tree__set_of_var__equal_2_p_0(TypeCtorInfo_18_18, TheseVars_9, Vars_6);
      }
    }
    if (succeeded)
      LockedVars_11 = LockedVars1_10;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_info.mode_info_unlock_vars\'/4", (MR_String) "some kind of nesting error");
        return;
      }
    }
    check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(LockedVars_11, STATE_VARIABLE_ModeInfo_0_12, STATE_VARIABLE_ModeInfo_13);
  }
}

MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_lock_vars_4_p_0(
  MR_Word Reason_5,
  MR_Word Vars_6,
  MR_Word STATE_VARIABLE_ModeInfo_0_9,
  MR_Word * STATE_VARIABLE_ModeInfo_10)
{
  {
    MR_Word LockedVars_8;
    MR_Word Var_11;
    MR_Word Var_13;
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 7))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 0))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 1))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 2))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 3))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 4))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 5))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_9, (MR_Integer) 6))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 0))));
    MR_Integer Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 2))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 3))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 4))));
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_53;
    MR_Unsigned packed_args_0;

    LockedVars_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 5))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 6))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 7))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 8))));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 9))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 10))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 11))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 12))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 13))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 14)));
    {
      Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Reason_5));
      MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Vars_6));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (LockedVars_8));
    }
    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_53, 0) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_53, 1) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_53, 2) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_53, 3) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_53, 4) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_53, 5) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), Var_53, 6) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_53, 7) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_53, 8) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_53, 9) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), Var_53, 10) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), Var_53, 11) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), Var_53, 12) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), Var_53, 13) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), Var_53, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_ModeInfo_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_types_of_vars_3_p_0(
  MR_Word ModeInfo_4,
  MR_Word Vars_5,
  MR_Word * TypesOfVars_6)
{
  {
    MR_Word VarTypes_7;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_4, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    VarTypes_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 3))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 14)));
    hlds__vartypes__lookup_var_types_3_p_0(VarTypes_7, Vars_5, TypesOfVars_6);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(
  MR_Word OldLiveVars_4,
  MR_Word STATE_VARIABLE_MI_0_13,
  MR_Word * STATE_VARIABLE_MI_14)
{
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
    MR_Word Var_22;
    MR_Unsigned packed_args_0;

    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), OldLiveVars_4, &OldLiveVarsList_6);
    NondetLiveVars0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_13, (MR_Integer) 6))));
    Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_13, (MR_Integer) 7))));
    LiveVars0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 6))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 14)));
    mercury__bag__det_remove_list_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), OldLiveVarsList_6, LiveVars0_7, &LiveVars_9);
    mercury__bag__det_remove_list_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), OldLiveVarsList_6, NondetLiveVars0_8, &NondetLiveVars_10);
    check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars_9, STATE_VARIABLE_MI_0_13, &STATE_VARIABLE_MI_15_15);
    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars_10, STATE_VARIABLE_MI_15_15, &STATE_VARIABLE_MI_16_16);
    DelayInfo0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_16_16, (MR_Integer) 2))));
    check_hlds__delay_info__delay_info_bind_var_list_3_p_0(OldLiveVarsList_6, DelayInfo0_11, &DelayInfo_12);
    check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo_12, STATE_VARIABLE_MI_16_16, STATE_VARIABLE_MI_14);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_add_live_vars_3_p_0(
  MR_Word NewLiveVars_4,
  MR_Word STATE_VARIABLE_MI_0_11,
  MR_Word * STATE_VARIABLE_MI_12)
{
  {
    MR_Word NewLiveVarsList_6;
    MR_Word LiveVars0_7;
    MR_Word NondetLiveVars0_8;
    MR_Word LiveVars_9;
    MR_Word NondetLiveVars_10;
    MR_Word STATE_VARIABLE_MI_13_13;
    MR_Word Var_19;
    MR_Unsigned packed_args_0;

    parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NewLiveVars_4, &NewLiveVarsList_6);
    NondetLiveVars0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_11, (MR_Integer) 6))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_11, (MR_Integer) 7))));
    LiveVars0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 6))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 14)));
    mercury__bag__insert_list_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), NewLiveVarsList_6, LiveVars0_7, &LiveVars_9);
    mercury__bag__insert_list_3_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), NewLiveVarsList_6, NondetLiveVars0_8, &NondetLiveVars_10);
    check_hlds__mode_info__mode_info_set_live_vars_3_p_0(LiveVars_9, STATE_VARIABLE_MI_0_11, &STATE_VARIABLE_MI_13_13);
    check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(NondetLiveVars_10, STATE_VARIABLE_MI_13_13, STATE_VARIABLE_MI_12);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_pred_var_multimode_map_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));
    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
      MR_Word Var_12;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
      MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 4))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 7))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 8))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 9))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 10))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 11))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 12))));
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14)));

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), Var_12, 7) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), Var_12, 8) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), Var_12, 9) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), Var_12, 10) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), Var_12, 11) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), Var_12, 12) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), Var_12, 13) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), Var_12, 14) = (MR_Box) (packed_args_1);
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_12));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_in_dupl_for_switch_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (((((MR_Unsigned) (Var_32) << (MR_Integer) 9)) | (((((MR_Unsigned) (Var_33) << (MR_Integer) 8)) | (((((MR_Unsigned) (Var_34) << (MR_Integer) 7)) | (((((MR_Unsigned) (Var_35) << (MR_Integer) 6)) | (((((MR_Unsigned) (Var_36) << (MR_Integer) 5)) | (((((MR_Unsigned) (Var_37) << (MR_Integer) 4)) | (((((MR_Unsigned) (Var_38) << (MR_Integer) 3)) | (((((MR_Unsigned) (Var_39) << (MR_Integer) 2)) | (((((MR_Unsigned) (Var_40) << (MR_Integer) 1)) | (MR_Unsigned) (X_4)))))))))))))))))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_make_ground_terms_unique_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (((((MR_Unsigned) (Var_32) << (MR_Integer) 9)) | (((((MR_Unsigned) (Var_33) << (MR_Integer) 8)) | (((((MR_Unsigned) (Var_34) << (MR_Integer) 7)) | (((((MR_Unsigned) (Var_35) << (MR_Integer) 6)) | (((((MR_Unsigned) (Var_36) << (MR_Integer) 5)) | (((((MR_Unsigned) (Var_37) << (MR_Integer) 4)) | (((((MR_Unsigned) (Var_38) << (MR_Integer) 3)) | (((((MR_Unsigned) (Var_39) << (MR_Integer) 2)) | (((((MR_Unsigned) (X_4) << (MR_Integer) 1)) | (MR_Unsigned) (Var_41)))))))))))))))))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_had_from_ground_term_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    Var_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
      MR_Word Var_12;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
      MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 4))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 7))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 8))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 9))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 10))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 11))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 12))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 13))));
      MR_Word Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word Var_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word Var_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word Var_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word Var_69 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word Var_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word Var_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) & (MR_Integer) 1);
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14)));

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), Var_12, 7) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), Var_12, 8) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), Var_12, 9) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), Var_12, 10) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), Var_12, 11) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), Var_12, 12) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), Var_12, 13) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), Var_12, 14) = (MR_Box) (((((MR_Unsigned) (Var_64) << (MR_Integer) 9)) | (((((MR_Unsigned) (Var_65) << (MR_Integer) 8)) | (((((MR_Unsigned) (Var_66) << (MR_Integer) 7)) | (((((MR_Unsigned) (Var_67) << (MR_Integer) 6)) | (((((MR_Unsigned) (Var_68) << (MR_Integer) 5)) | (((((MR_Unsigned) (Var_69) << (MR_Integer) 4)) | (((((MR_Unsigned) (Var_70) << (MR_Integer) 3)) | (((((MR_Unsigned) (X_4) << (MR_Integer) 2)) | (((((MR_Unsigned) (Var_72) << (MR_Integer) 1)) | (MR_Unsigned) (Var_73)))))))))))))))))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_12));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_in_from_ground_term_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (((((MR_Unsigned) (Var_32) << (MR_Integer) 9)) | (((((MR_Unsigned) (Var_33) << (MR_Integer) 8)) | (((((MR_Unsigned) (Var_34) << (MR_Integer) 7)) | (((((MR_Unsigned) (Var_35) << (MR_Integer) 6)) | (((((MR_Unsigned) (Var_36) << (MR_Integer) 5)) | (((((MR_Unsigned) (Var_37) << (MR_Integer) 4)) | (((((MR_Unsigned) (X_4) << (MR_Integer) 3)) | (((((MR_Unsigned) (Var_39) << (MR_Integer) 2)) | (((((MR_Unsigned) (Var_40) << (MR_Integer) 1)) | (MR_Unsigned) (Var_41)))))))))))))))))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0(
  MR_Word Checking_4,
  MR_Word STATE_VARIABLE_MI_0_7,
  MR_Word * STATE_VARIABLE_MI_8)
{
  {
    MR_bool succeeded;
    MR_Word Checking0_6;
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_7, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 14)));

    Checking0_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    succeeded = (Checking0_6 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (Checking_4 == (MR_Integer) 1);
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_info.mode_info_set_checking_extra_goals\'/3", (MR_String) "rechecking extra goals adds more extra goals");
        return;
      }
    }
    else
    {
      MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_7, (MR_Integer) 7))));
      MR_Word Var_13;
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_7, (MR_Integer) 0))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_7, (MR_Integer) 1))));
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_7, (MR_Integer) 2))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_7, (MR_Integer) 3))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_7, (MR_Integer) 4))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_7, (MR_Integer) 5))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_7, (MR_Integer) 6))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 0))));
      MR_Integer Var_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 1))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 2))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 3))));
      MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 4))));
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 5))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 6))));
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 7))));
      MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 8))));
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 9))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 10))));
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 11))));
      MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 12))));
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 13))));
      MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word Var_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_43 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_44 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14))) & (MR_Integer) 1);
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_12, (MR_Integer) 14)));

      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_13, 0) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), Var_13, 1) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), Var_13, 2) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), Var_13, 3) = ((MR_Box) (Var_24));
        MR_hl_field(MR_mktag(0), Var_13, 4) = ((MR_Box) (Var_25));
        MR_hl_field(MR_mktag(0), Var_13, 5) = ((MR_Box) (Var_26));
        MR_hl_field(MR_mktag(0), Var_13, 6) = ((MR_Box) (Var_27));
        MR_hl_field(MR_mktag(0), Var_13, 7) = ((MR_Box) (Var_28));
        MR_hl_field(MR_mktag(0), Var_13, 8) = ((MR_Box) (Var_29));
        MR_hl_field(MR_mktag(0), Var_13, 9) = ((MR_Box) (Var_30));
        MR_hl_field(MR_mktag(0), Var_13, 10) = ((MR_Box) (Var_31));
        MR_hl_field(MR_mktag(0), Var_13, 11) = ((MR_Box) (Var_32));
        MR_hl_field(MR_mktag(0), Var_13, 12) = ((MR_Box) (Var_33));
        MR_hl_field(MR_mktag(0), Var_13, 13) = ((MR_Box) (Var_34));
        MR_hl_field(MR_mktag(0), Var_13, 14) = (MR_Box) (((((MR_Unsigned) (Var_35) << (MR_Integer) 9)) | (((((MR_Unsigned) (Var_36) << (MR_Integer) 8)) | (((((MR_Unsigned) (Var_37) << (MR_Integer) 7)) | (((((MR_Unsigned) (Checking_4) << (MR_Integer) 6)) | (((((MR_Unsigned) (Var_39) << (MR_Integer) 5)) | (((((MR_Unsigned) (Var_40) << (MR_Integer) 4)) | (((((MR_Unsigned) (Var_41) << (MR_Integer) 3)) | (((((MR_Unsigned) (Var_42) << (MR_Integer) 2)) | (((((MR_Unsigned) (Var_43) << (MR_Integer) 1)) | (MR_Unsigned) (Var_44)))))))))))))))))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_16));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_13));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (((((MR_Unsigned) (Var_32) << (MR_Integer) 9)) | (((((MR_Unsigned) (X_4) << (MR_Integer) 8)) | (((((MR_Unsigned) (Var_34) << (MR_Integer) 7)) | (((((MR_Unsigned) (Var_35) << (MR_Integer) 6)) | (((((MR_Unsigned) (Var_36) << (MR_Integer) 5)) | (((((MR_Unsigned) (Var_37) << (MR_Integer) 4)) | (((((MR_Unsigned) (Var_38) << (MR_Integer) 3)) | (((((MR_Unsigned) (Var_39) << (MR_Integer) 2)) | (((((MR_Unsigned) (Var_40) << (MR_Integer) 1)) | (MR_Unsigned) (Var_41)))))))))))))))))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_how_to_check_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (((((MR_Unsigned) (X_4) << (MR_Integer) 9)) | (((((MR_Unsigned) (Var_33) << (MR_Integer) 8)) | (((((MR_Unsigned) (Var_34) << (MR_Integer) 7)) | (((((MR_Unsigned) (Var_35) << (MR_Integer) 6)) | (((((MR_Unsigned) (Var_36) << (MR_Integer) 5)) | (((((MR_Unsigned) (Var_37) << (MR_Integer) 4)) | (((((MR_Unsigned) (Var_38) << (MR_Integer) 3)) | (((((MR_Unsigned) (Var_39) << (MR_Integer) 2)) | (((((MR_Unsigned) (Var_40) << (MR_Integer) 1)) | (MR_Unsigned) (Var_41)))))))))))))))))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_changed_flag_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    Var_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
      MR_Word Var_12;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
      MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 4))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 7))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 8))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 9))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 10))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 11))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 12))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 13))));
      MR_Word Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word Var_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word Var_68 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
      MR_Word Var_69 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word Var_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word Var_71 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) & (MR_Integer) 1);
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14)));

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), Var_12, 7) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), Var_12, 8) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), Var_12, 9) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), Var_12, 10) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), Var_12, 11) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), Var_12, 12) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), Var_12, 13) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), Var_12, 14) = (MR_Box) (((((MR_Unsigned) (Var_64) << (MR_Integer) 9)) | (((((MR_Unsigned) (Var_65) << (MR_Integer) 8)) | (((((MR_Unsigned) (X_4) << (MR_Integer) 7)) | (((((MR_Unsigned) (Var_67) << (MR_Integer) 6)) | (((((MR_Unsigned) (Var_68) << (MR_Integer) 5)) | (((((MR_Unsigned) (Var_69) << (MR_Integer) 4)) | (((((MR_Unsigned) (Var_70) << (MR_Integer) 3)) | (((((MR_Unsigned) (Var_71) << (MR_Integer) 2)) | (((((MR_Unsigned) (Var_72) << (MR_Integer) 1)) | (MR_Unsigned) (Var_73)))))))))))))))))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_12));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_last_checkpoint_insts_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_nondet_live_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_live_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_var_types_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_varset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_in_promise_purity_scope_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Word Var_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word Var_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_35 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_36 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_38 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_40 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_41 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) & (MR_Integer) 1);
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (((((MR_Unsigned) (Var_32) << (MR_Integer) 9)) | (((((MR_Unsigned) (Var_33) << (MR_Integer) 8)) | (((((MR_Unsigned) (Var_34) << (MR_Integer) 7)) | (((((MR_Unsigned) (Var_35) << (MR_Integer) 6)) | (((((MR_Unsigned) (Var_36) << (MR_Integer) 5)) | (((((MR_Unsigned) (X_4) << (MR_Integer) 4)) | (((((MR_Unsigned) (Var_38) << (MR_Integer) 3)) | (((((MR_Unsigned) (Var_39) << (MR_Integer) 2)) | (((((MR_Unsigned) (Var_40) << (MR_Integer) 1)) | (MR_Unsigned) (Var_41)))))))))))))))))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8;
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    Var_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
      MR_Word Var_12;
      MR_Word Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0))));
      MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
      MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 2))));
      MR_Word Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 3))));
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 4))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 5))));
      MR_Word Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))));
      MR_Word Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 7))));
      MR_Word Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 8))));
      MR_Word Var_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 9))));
      MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 10))));
      MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 11))));
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 12))));
      MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 13))));
      MR_Word Var_64 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
      MR_Word Var_65 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
      MR_Word Var_66 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
      MR_Word Var_67 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
      MR_Word Var_69 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
      MR_Word Var_70 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
      MR_Word Var_71 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
      MR_Word Var_72 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
      MR_Word Var_73 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14))) & (MR_Integer) 1);
      MR_Unsigned packed_args_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14)));

      {
        Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), Var_12, 5) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), Var_12, 6) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), Var_12, 7) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), Var_12, 8) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), Var_12, 9) = ((MR_Box) (Var_59));
        MR_hl_field(MR_mktag(0), Var_12, 10) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(0), Var_12, 11) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), Var_12, 12) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), Var_12, 13) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), Var_12, 14) = (MR_Box) (((((MR_Unsigned) (Var_64) << (MR_Integer) 9)) | (((((MR_Unsigned) (Var_65) << (MR_Integer) 8)) | (((((MR_Unsigned) (Var_66) << (MR_Integer) 7)) | (((((MR_Unsigned) (Var_67) << (MR_Integer) 6)) | (((((MR_Unsigned) (X_4) << (MR_Integer) 5)) | (((((MR_Unsigned) (Var_69) << (MR_Integer) 4)) | (((((MR_Unsigned) (Var_70) << (MR_Integer) 3)) | (((((MR_Unsigned) (Var_71) << (MR_Integer) 2)) | (((((MR_Unsigned) (Var_72) << (MR_Integer) 1)) | (MR_Unsigned) (Var_73)))))))))))))))))));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_43));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_44));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_45));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_12));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_warnings_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_errors_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_instvarset_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_locked_vars_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_instmap_3_p_0(
  MR_Word InstMap_4,
  MR_Word STATE_VARIABLE_MI_0_9,
  MR_Word * STATE_VARIABLE_MI_10)
{
  {
    MR_bool succeeded;
    MR_Word InstMap0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_9, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_MI_11_11;
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_9, (MR_Integer) 0))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_9, (MR_Integer) 2))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_9, (MR_Integer) 3))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_9, (MR_Integer) 4))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_9, (MR_Integer) 5))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_9, (MR_Integer) 6))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_9, (MR_Integer) 7))));

    {
      STATE_VARIABLE_MI_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_11_11, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_11_11, 1) = ((MR_Box) (InstMap_4));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_11_11, 2) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_11_11, 3) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_11_11, 4) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_11_11, 5) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_11_11, 6) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_11_11, 7) = ((MR_Box) (Var_29));
    }
    succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(InstMap_4);
    if (succeeded)
      succeeded = hlds__instmap__instmap_is_reachable_1_p_0(InstMap0_6);
    if (succeeded)
    {
      MR_Word DelayInfo0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_11_11, (MR_Integer) 2))));
      MR_Word DelayInfo_8;

      check_hlds__delay_info__delay_info_bind_all_vars_2_p_0(DelayInfo0_7, &DelayInfo_8);
      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(DelayInfo_8, STATE_VARIABLE_MI_11_11, STATE_VARIABLE_MI_10);
    }
    else
      *STATE_VARIABLE_MI_10 = STATE_VARIABLE_MI_11_11;
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_delay_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_unset_call_context_2_p_0(
  MR_Word STATE_VARIABLE_MI_0_4,
  MR_Word * STATE_VARIABLE_MI_5)
{
  {
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 0))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 1))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 2))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 3))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 5))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 6))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_4, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_20));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(
  MR_Integer ArgNum_4,
  MR_Word STATE_VARIABLE_ModeInfo_0_11,
  MR_Word * STATE_VARIABLE_ModeInfo_12)
{
  {
    MR_Word ModeContext0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 4))));
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 1))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 2))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 3))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModeInfo_0_11, (MR_Integer) 7))));

    switch (MR_tag((MR_Word) ModeContext0_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140check_hlds.mode_info.mode_info_set_call_arg_context\'/3", (MR_String) "uninitialized");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word CallId_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ModeContext0_6, (MR_Integer) 0))));
          MR_Word Var_15;

          {
            Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (CallId_7));
            MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (ArgNum_4));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
            *STATE_VARIABLE_ModeInfo_12 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_19));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_20));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_21));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_22));
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_23));
            MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_24));
            MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_25));
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_ModeInfo_12 = STATE_VARIABLE_ModeInfo_0_11;
        break;
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_call_context_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_MI_0_2,
  MR_Word * STATE_VARIABLE_MI_3)
{
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word CallId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_15;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (CallId_11));
      MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 2))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 3))));
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 5))));
    Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 6))));
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_30));
    }
  }
  else
  {
    MR_Word UnifyContext_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_8;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;

    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_8, 0) = ((MR_Box) (UnifyContext_4));
      MR_hl_field(MR_mktag(2), Var_8, 1) = ((MR_Box) ((MR_Integer) 0));
    }
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 0))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 1))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 2))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 3))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 5))));
    Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 6))));
    Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_2, (MR_Integer) 7))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_3 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_43));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_mode_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_16));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_context_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_17));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_proc_id_3_p_0(
  MR_Integer X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_pred_id_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));
    MR_Word Var_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
    MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
    MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
    MR_Integer Var_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1))));
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 2))));
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 3))));
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 4))));
    MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 5))));
    MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 6))));
    MR_Word Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 7))));
    MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 8))));
    MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 9))));
    MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 10))));
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 11))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 12))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 13))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 14)));

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (X_4));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(0), Var_10, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(0), Var_10, 5) = ((MR_Box) (Var_23));
      MR_hl_field(MR_mktag(0), Var_10, 6) = ((MR_Box) (Var_24));
      MR_hl_field(MR_mktag(0), Var_10, 7) = ((MR_Box) (Var_25));
      MR_hl_field(MR_mktag(0), Var_10, 8) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_10, 9) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(0), Var_10, 10) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(0), Var_10, 11) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Var_10, 12) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Var_10, 13) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), Var_10, 14) = (MR_Box) (packed_args_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MI_7 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_13));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_17));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_10));
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_set_module_info_3_p_0(
  MR_Word X_4,
  MR_Word STATE_VARIABLE_MI_0_6,
  MR_Word * STATE_VARIABLE_MI_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 0))));

    succeeded = (((MR_Word) X_4) == ((MR_Word) Var_8));
    if (succeeded)
      *STATE_VARIABLE_MI_7 = STATE_VARIABLE_MI_0_6;
    else
    {
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 1))));
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 2))));
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 3))));
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 4))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 5))));
      MR_Word Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 6))));
      MR_Word Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MI_0_6, (MR_Integer) 7))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_MI_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (X_4));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_20));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_21));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_22));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_23));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_24));
      }
    }
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_pred_var_multimode_map_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 13))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_in_dupl_for_switch_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));

    *X_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_make_ground_terms_unique_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));

    *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))) >> (MR_Integer) 1)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_had_from_ground_term_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));

    *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))) >> (MR_Integer) 2)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_in_from_ground_term_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));

    *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))) >> (MR_Integer) 3)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_checking_extra_goals_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));

    *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))) >> (MR_Integer) 6)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 11))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_initial_instmap_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 10))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));

    *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))) >> (MR_Integer) 8)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_how_to_check_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));

    *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))) >> (MR_Integer) 9)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_changed_flag_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));

    *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))) >> (MR_Integer) 7)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 8))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_last_checkpoint_insts_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 9))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_nondet_live_vars_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 6))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_live_vars_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 6))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_delay_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 2))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_var_types_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 3))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_instvarset_2_p_0(
  MR_Word ModeInfo_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 7))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_varset_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 2))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_liveness_2_p_0(
  MR_Word ModeInfo_3,
  MR_Word * LiveVars_4)
{
  {
    MR_Word LiveVarsBag_5;
    MR_Word SortedList_6;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    LiveVarsBag_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 6))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 14)));
    mercury__bag__to_list_without_duplicates_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), LiveVarsBag_5, &SortedList_6);
    parse_tree__set_of_var__sorted_list_to_set_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), SortedList_6, LiveVars_4);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_num_errors_2_p_0(
  MR_Word ModeInfo_3,
  MR_Integer * NumErrors_4)
{
  {
    MR_Word Errors_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_3, (MR_Integer) 3))));

    mercury__list__length_2_p_0((MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_mode_error_info_0), Errors_5, NumErrors_4);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_in_promise_purity_scope_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));

    *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))) >> (MR_Integer) 4)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_need_to_requantify_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));

    *X_4 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14))) >> (MR_Integer) 5)) & (MR_Integer) 1);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_warnings_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 12))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_errors_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 3))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_locked_vars_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 5))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_instmap_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 1))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_mode_context_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 4))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_context_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 5))));
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_debug_modes_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 4))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_proc_id_2_p_0(
  MR_Word MI_3,
  MR_Integer * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 1))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_pred_id_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  {
    MR_Word Var_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 7))));
    MR_Unsigned packed_args_0;

    *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 0))));
    packed_args_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Var_5, (MR_Integer) 14)));
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_insts_2_p_0(
  MR_Word ModeInfo_3,
  MR_Word * Insts_4)
{
  {
    MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_3, (MR_Integer) 0))));

    hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_5, Insts_4);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_modes_2_p_0(
  MR_Word ModeInfo_3,
  MR_Word * Modes_4)
{
  {
    MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_3, (MR_Integer) 0))));

    hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_5, Modes_4);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_preds_2_p_0(
  MR_Word ModeInfo_3,
  MR_Word * Preds_4)
{
  {
    MR_Word ModuleInfo_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModeInfo_3, (MR_Integer) 0))));

    hlds__hlds_module__module_info_get_preds_2_p_0(ModuleInfo_5, Preds_4);
  }
}

void MR_CALL 
check_hlds__mode_info__mode_info_get_module_info_2_p_0(
  MR_Word MI_3,
  MR_Word * X_4)
{
  *X_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MI_3, (MR_Integer) 0))));
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
  {
    MR_bool succeeded;
    MR_Word Globals_21;
    MR_Word DebugModes_22;
    MR_Integer DebugModesPredId_23;
    MR_Integer PredIdInt_24;
    MR_Word MaybeDebug_29;
    MR_Word ProcInfo_30;
    MR_Word VarSet_31;
    MR_Word VarTypes_32;
    MR_Word InstVarSet_33;
    MR_Word LiveVarsBag_34;
    MR_Word LastCheckpointInstMap_35;
    MR_Word PredVarMultiModeMap_47;
    MR_Word ModeSubInfo_48;
    MR_Word ModeContext_49;
    MR_Word DelayInfo_50;
    MR_Word NondetLiveVarsBag_52;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Integer Var_55;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_11, &Globals_21);
    libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 74, &DebugModes_22);
    libs__globals__lookup_int_option_3_p_0(Globals_21, (MR_Integer) 78, &DebugModesPredId_23);
    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_12, &PredIdInt_24);
    succeeded = (DebugModes_22 == (MR_Integer) 1);
    if (succeeded)
    {
      Var_55 = (MR_Integer) 0;
      succeeded = (DebugModesPredId_23 >= Var_55);
      if (succeeded)
      {
        succeeded = (DebugModesPredId_23 == PredIdInt_24);
        succeeded = !(succeeded);
      }
      succeeded = !(succeeded);
    }
    if (succeeded)
    {
      MR_Word DebugVerbose_25;
      MR_Word DebugMinimal_26;
      MR_Word Statistics_27;
      MR_Word Flags_28;

      libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 77, &DebugVerbose_25);
      libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 76, &DebugMinimal_26);
      libs__globals__lookup_bool_option_3_p_0(Globals_21, (MR_Integer) 75, &Statistics_27);
      {
        Flags_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Flags_28, 0) = (MR_Box) (((((MR_Unsigned) (DebugVerbose_25) << (MR_Integer) 2)) | (((((MR_Unsigned) (DebugMinimal_26) << (MR_Integer) 1)) | (MR_Unsigned) (Statistics_27)))));
      }
      {
        MaybeDebug_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeDebug_29, 0) = ((MR_Box) (Flags_28));
      }
    }
    else
      MaybeDebug_29 = (MR_Word) ((MR_Unsigned) 0U);
    hlds__hlds_module__module_info_proc_info_4_p_0(ModuleInfo_11, PredId_12, ProcId_13, &ProcInfo_30);
    hlds__hlds_pred__proc_info_get_varset_2_p_0(ProcInfo_30, &VarSet_31);
    hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ProcInfo_30, &VarTypes_32);
    hlds__hlds_pred__proc_info_get_inst_varset_2_p_0(ProcInfo_30, &InstVarSet_33);
    Var_59 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVars_15);
    mercury__bag__from_sorted_list_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), Var_59, &LiveVarsBag_34);
    hlds__instmap__init_unreachable_1_p_0(&LastCheckpointInstMap_35);
    mercury__map__init_1_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), (MR_Word) (&check_hlds__mode_errors__check_hlds__mode_errors__type_ctor_info_pred_var_multimode_pred_error_0), &PredVarMultiModeMap_47);
    {
      ModeSubInfo_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 15 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 0) = ((MR_Box) (PredId_12));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 1) = ((MR_Box) (ProcId_13));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 2) = ((MR_Box) (VarSet_31));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 3) = ((MR_Box) (VarTypes_32));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 4) = ((MR_Box) (MaybeDebug_29));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 6) = ((MR_Box) (LiveVarsBag_34));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 7) = ((MR_Box) (InstVarSet_33));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 8) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 9) = ((MR_Box) (LastCheckpointInstMap_35));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 10) = ((MR_Box) (InstMap0_17));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 11) = ((MR_Box) (HeadInstVars_16));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 12) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 13) = ((MR_Box) (PredVarMultiModeMap_47));
      MR_hl_field(MR_mktag(0), ModeSubInfo_48, 14) = (MR_Box) (((((MR_Unsigned) (HowToCheck_18) << (MR_Integer) 9)) | (((((MR_Unsigned) (MayChangeProc_19) << (MR_Integer) 8)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 7)) | (((((MR_Unsigned) ((MR_Integer) 0) << (MR_Integer) 6)) | (((((MR_Unsigned) ((MR_Integer) 1) << (MR_Integer) 5)) | (((((MR_Unsigned) ((MR_Integer) 1) << (MR_Integer) 4)) | (((((MR_Unsigned) ((MR_Integer) 1) << (MR_Integer) 3)) | (((((MR_Unsigned) ((MR_Integer) 1) << (MR_Integer) 2)) | (((((MR_Unsigned) ((MR_Integer) 1) << (MR_Integer) 1)) | (MR_Unsigned) ((MR_Integer) 1)))))))))))))))))));
    }
    check_hlds__mode_errors__mode_context_init_1_p_0(&ModeContext_49);
    check_hlds__delay_info__delay_info_init_1_p_0(&DelayInfo_50);
    Var_60 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), LiveVars_15);
    mercury__bag__from_sorted_list_2_p_0((MR_Word) (&check_hlds__mode_info_scalar_common_1[0]), Var_60, &NondetLiveVarsBag_52);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
      *ModeInfo_20 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleInfo_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (InstMap0_17));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DelayInfo_50));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ModeContext_49));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Context_14));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (NondetLiveVarsBag_52));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ModeSubInfo_48));
    }
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____call_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____call_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____call_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____call_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____debug_flags_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____debug_flags_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____debug_flags_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____debug_flags_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____had_from_ground_term_scope_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____had_from_ground_term_scope_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____how_to_check_goal_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____how_to_check_goal_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____how_to_check_goal_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____how_to_check_goal_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_dupl_for_switch_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____in_dupl_for_switch_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____in_dupl_for_switch_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____in_dupl_for_switch_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____in_from_ground_term_scope_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____in_from_ground_term_scope_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____in_promise_purity_scope_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____in_promise_purity_scope_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____in_promise_purity_scope_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____in_promise_purity_scope_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____locked_vars_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____locked_vars_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____locked_vars_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____locked_vars_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____make_ground_terms_unique_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____make_ground_terms_unique_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____make_ground_terms_unique_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____make_ground_terms_unique_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____may_change_called_proc_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____may_change_called_proc_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____may_change_called_proc_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____may_change_called_proc_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_context_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____mode_context_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____mode_context_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____mode_context_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____mode_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____mode_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____mode_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____mode_sub_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____mode_sub_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____mode_sub_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____mode_sub_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____par_conj_mode_check_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____par_conj_mode_check_stack_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____par_conj_mode_check_stack_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____pred_var_multimode_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____pred_var_multimode_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____pred_var_multimode_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____pred_var_multimode_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____side_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____side_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____side_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____side_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
check_hlds__mode_info____Unify____var_lock_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = check_hlds__mode_info____Unify____var_lock_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
check_hlds__mode_info____Compare____var_lock_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    check_hlds__mode_info____Compare____var_lock_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_context_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_mode_sub_info_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_par_conj_mode_check_stack_0);
	MR_register_type_ctor_info(&check_hlds__mode_info__check_hlds__mode_info__type_ctor_info_pred_var_multimode_map_0);
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
